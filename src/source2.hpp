#pragma once

#include <cstdint>
#include <cstring>

// ───────────────────────────── tier0 ─────────────────────────────

struct TsListNode {};

struct TsListHead {
    uint64_t next; // Pointer64<TsListNode>
};

struct TsListBase {
    TsListHead head;
};

// ───────────────────────────── tier1 ─────────────────────────────

template <typename T>
struct UtlVector {
    int32_t  count;    // 0x0000
    uint32_t pad_0;    // 0x0004
    uint64_t data;     // 0x0008  Pointer64<T[]>
};
static_assert(sizeof(UtlVector<void*>) == 0x10);

struct UtlMemoryPool {
    int32_t  block_size;       // 0x0000
    int32_t  blocks_per_blob;  // 0x0004
    uint32_t grow_mode;        // 0x0008
    int32_t  blocks_allocated; // 0x000C
    int32_t  peak_allocated;   // 0x0010
    uint16_t alignment;        // 0x0014
    uint16_t blob_count;       // 0x0016
    uint8_t  pad_0[0x2];       // 0x0018
    TsListBase free_blocks;    // 0x0020
    uint8_t  pad_1[0x20];      // 0x0028
    uint64_t blob_head;        // 0x0048
    int32_t  total_size;       // 0x0050
    uint8_t  pad_2[0xC];       // 0x0054
};
static_assert(sizeof(UtlMemoryPool) == 0x60);

template <typename D, size_t C = 256, typename K = uint64_t>
struct UtlTsHashBucket {
    uint64_t add_lock;         // 0x0000
    uint64_t first;            // 0x0008  Pointer64<UtlTsHashFixedData>
    uint64_t first_uncommitted;// 0x0010  Pointer64<UtlTsHashFixedData>
};

template <typename D, size_t C = 256, typename K = uint64_t>
struct UtlTsHash {
    UtlMemoryPool                entry_mem;   // 0x0000
    UtlTsHashBucket<D, C, K>     buckets[C];  // 0x0060
    bool                         needs_commit;// 0x1860
    uint8_t                      pad_0[0x3];  // 0x1861
    int32_t                      contention_check; // 0x1864
    uint8_t                      pad_1[0x8];  // 0x1868
};

struct InterfaceReg {
    uint64_t create_fn; // 0x0000  fn ptr
    uint64_t name;      // 0x0008  Pointer64<char>
    uint64_t next;      // 0x0010  Pointer64<InterfaceReg>
};
static_assert(sizeof(InterfaceReg) == 0x18);

// ───────────────────────────── schema_system ─────────────────────

struct SchemaType {
    uint8_t  pad_0[0x8];    // 0x0000
    uint64_t name;          // 0x0008  Pointer64<char>
    uint64_t type_scope;    // 0x0010
    uint8_t  type_category; // 0x0018
    uint8_t  atomic_category;// 0x0019
    uint8_t  pad_1[0x6];    // 0x001A
};

struct SchemaMetadataEntryData {
    uint64_t name;          // 0x0000  Pointer64<char>
    uint64_t network_value; // 0x0008  Pointer64<SchemaNetworkValue>
};
static_assert(sizeof(SchemaMetadataEntryData) == 0x10);

struct SchemaVarName {
    uint64_t name;      // 0x0000  Pointer64<char>
    uint64_t type_name; // 0x0008  Pointer64<char>
};

union SchemaNetworkValueUnion {
    uint64_t name_ptr;   // Pointer64<char>
    int32_t  int_value;
    float    float_value;
    uint64_t ptr_value;
    SchemaVarName var_value;
    char     name_value[32];
};

struct SchemaNetworkValue {
    SchemaNetworkValueUnion value; // 0x0000
};

struct SchemaEnumeratorInfoData {
    uint64_t name;           // 0x0000  Pointer64<char>
    uint64_t value;          // 0x0008  (union: uchar/ushort/uint/ulong)
    int32_t  metadata_count; // 0x0010
    uint8_t  pad_0[0x4];     // 0x0014
    uint64_t metadata;       // 0x0018  Pointer64<SchemaMetadataEntryData>
};
static_assert(sizeof(SchemaEnumeratorInfoData) == 0x20);

struct SchemaSystemTypeScope;

struct SchemaEnumInfoData {
    uint64_t base;                  // 0x0000
    uint64_t name;                  // 0x0008  Pointer64<char>
    uint64_t module_name;           // 0x0010  Pointer64<char>
    uint8_t  size;                  // 0x0018
    uint8_t  alignment;             // 0x0019
    uint8_t  flags;                 // 0x001A
    uint8_t  pad_0;                 // 0x001B
    uint16_t enumerator_count;      // 0x001C
    uint16_t static_metadata_count; // 0x001E
    uint64_t enumerators;           // 0x0020  Pointer64<SchemaEnumeratorInfoData[]>
    uint64_t static_metadata;       // 0x0028
    uint64_t type_scope;            // 0x0030
    int64_t  min_enumerator_value;  // 0x0038
    int64_t  max_enumerator_value;  // 0x0040
};
static_assert(sizeof(SchemaEnumInfoData) == 0x48);

struct SchemaClassFieldData {
    uint64_t name;           // 0x0000  Pointer64<char>
    uint64_t type;           // 0x0008  Pointer64<SchemaType>
    int32_t  offset;         // 0x0010
    int32_t  metadata_count; // 0x0014
    uint64_t metadata;       // 0x0018  Pointer64<SchemaMetadataEntryData>
};
static_assert(sizeof(SchemaClassFieldData) == 0x20);

struct SchemaBaseClass {
    uint8_t  pad_0[0x10]; // 0x0000
    uint64_t name;        // 0x0010  Pointer64<char>
};

struct SchemaBaseClassInfoData {
    uint8_t  pad_0[0x18]; // 0x0000
    uint64_t class_ptr;   // 0x0018  Pointer64<SchemaBaseClass>
};

struct SchemaClassInfoData {
    uint64_t base;                  // 0x0000
    uint64_t name;                  // 0x0008  Pointer64<char>
    uint64_t binary_name;           // 0x0010
    uint64_t module_name;           // 0x0018  Pointer64<char>
    int32_t  size;                  // 0x0020
    int16_t  field_count;           // 0x0024
    int16_t  static_metadata_count; // 0x0026
    uint8_t  pad_0[0x2];            // 0x0028
    uint8_t  alignment;             // 0x002A
    uint8_t  has_base_class;        // 0x002B
    int16_t  total_class_size;      // 0x002C
    int16_t  derived_class_size;    // 0x002E
    uint64_t fields;                // 0x0030  Pointer64<SchemaClassFieldData[]>
    uint8_t  pad_1[0x8];            // 0x0038
    uint64_t base_classes;          // 0x0040  Pointer64<SchemaBaseClassInfoData>
    uint64_t static_metadata;       // 0x0048  Pointer64<SchemaMetadataEntryData[]>
    uint64_t type_scope;            // 0x0058
    uint64_t type;                  // 0x0060  Pointer64<SchemaType>
    uint8_t  pad_2[0x10];           // 0x0068
};
static_assert(sizeof(SchemaClassInfoData) == 0x78);

using SchemaClassBinding = SchemaClassInfoData;
using SchemaEnumBinding  = SchemaEnumInfoData;

struct SchemaSystemTypeScope {
    uint8_t  pad_0[0x8];                                     // 0x0000
    char     name[256];                                      // 0x0008
    uint64_t global_scope;                                   // 0x0108  Pointer64<SchemaSystemTypeScope>
    uint8_t  pad_1[0x450];                                   // 0x0110
    UtlTsHash<SchemaClassBinding> class_bindings;            // 0x0560
    UtlTsHash<SchemaEnumBinding>  enum_bindings;             // 0x1DD0
};

struct SchemaSystem {
    uint8_t  pad_0[0x190];                                   // 0x0000
    UtlVector<uint64_t> type_scopes;                         // 0x0190  UtlVector<Pointer64<SchemaSystemTypeScope>>
    uint8_t  pad_1[0xE0];                                    // 0x01A0
    int32_t  registration_count;                             // 0x0280
};
