/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <errno.h>

#include <netdb.h>

#include <time.h>

#include <dlfcn.h>

#include <fcntl.h>

#include <fenv.h>

#include <fmtmsg.h>

#include <fnmatch.h>

#include <ftw.h>

#include <glob.h>

#include <langinfo.h>

#include <locale.h>

#include <pthread.h>

#include <unistd.h>

#include <semaphore.h>

#include <sys/ipc.h>

#include <sys/stat.h>

#include <sys/statvfs.h>

#include <sys/mman.h>

#include <sys/wait.h>

#include <signal.h>

#include <nl_types.h>

#include <sched.h>

#include <sys/select.h>

#include <sys/socket.h>

#include <net/if.h>

#include <netinet/in.h>

#include <netinet/tcp.h>

#include <poll.h>

#include <spawn.h>

#include <sys/types.h>
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef N_NIMCALL_PTR(void, TY891) (void* p, NI op);
struct TNimType {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY891 marker;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
TNimType NTI84455; /* TPid */
extern TFrame* frameptr_12027;

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_12027;
	frameptr_12027 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_12027 = (*frameptr_12027).prev;
}
N_NOINLINE(void, posixInit)(void) {
	nimfr("posix", "posix.nim")
	popFrame();
}

N_NOINLINE(void, posixDatInit)(void) {
NTI84455.size = sizeof(pid_t);
NTI84455.kind = 31;
NTI84455.base = 0;
NTI84455.flags = 3;
}

