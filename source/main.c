#include <stdio.h>
#include "../include/kv.h"

int main() {
  kv_table* entry1 = kv_init(3);
  printf("%p", entry1);
}