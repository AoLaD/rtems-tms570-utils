#ifndef _SYSTEM_STUB_H_
#define _SYSTEM_STUB_H_

#include <stdint.h>

#ifndef UNUSED_PARAM
#if 1 /* eliminate warnings for unused variables */
#define UNUSED_PARAM(x)    (void)(x)
#else
#define UNUSED_PARAM(x)
#endif
#endif /*UNUSED_PARAM*/

typedef struct system_stub_ops_t {
  int (*open)(const char * path, int flags, ...);
  int (*close)(int file);
  int (*read)(int file, char * ptr, int len);
  int (*write)(int file, const char * ptr, int len);
  int (*lseek)(int file, int ptr, int dir);
} system_stub_ops_t;

extern system_stub_ops_t system_stub_ops;

#endif /* _SYSTEM_DEF_H_ */
