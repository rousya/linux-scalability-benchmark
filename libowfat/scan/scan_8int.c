#include "scan.h"

size_t scan_8int(const char* src,unsigned int* dest) {
  unsigned long l;
  size_t len=scan_8long(src,&l);
  *dest=l;
  return len;
}
