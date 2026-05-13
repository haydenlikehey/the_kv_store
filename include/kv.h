#ifndef KV_H
#define KV_H

#include <stdlib.h>

typedef struct {
  char* key;
  char* value;
} kv_entry_t;

typedef struct {
  int capacity;
  int count;
  kv_entry_t* entries;
} kv_table;

kv_table* kv_init(size_t capacity) {
  if (capacity == 0) {
    return NULL;
  }

  kv_table* table = (kv_table*) malloc(sizeof(kv_table));
  if (table == NULL) {
    return NULL;
  }

  table->capacity = capacity;
  table->count = 0;
  table->entries = (kv_entry_t*) calloc(capacity, sizeof(kv_entry_t));
  if (table->entries == NULL) {
    return NULL;
  }

  return table;
}


#endif