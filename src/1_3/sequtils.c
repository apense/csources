/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
extern TFrame* frameptr_12027;

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_12027;
	frameptr_12027 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_12027 = (*frameptr_12027).prev;
}
N_NOINLINE(void, sequtilsInit)(void) {
	nimfr("sequtils", "sequtils.nim")
	popFrame();
}

N_NOINLINE(void, sequtilsDatInit)(void) {
}

