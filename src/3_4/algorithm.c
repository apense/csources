/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"
static N_INLINE(NI, HEX2A_291035)(NI x, NU8 order);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
extern TFrame* frameptr_12027;

static N_INLINE(NI, subInt)(NI a, NI b) {
	NI result;
	result = 0;
	result = (NI)((NU32)(a) - (NU32)(b));
	{
		NIM_BOOL LOC3;
		LOC3 = (0 <= (NI)(result ^ a));
		if (LOC3) goto LA4;
		LOC3 = (0 <= (NI)(result ^ (NI)((NU32) ~(b))));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	raiseOverflow();
	BeforeRet: ;
	return result;
}

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_12027;
	frameptr_12027 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_12027 = (*frameptr_12027).prev;
}

static N_INLINE(NI, HEX2A_291035)(NI x, NU8 order) {
	NI result;
	NI y;
	NI TMP4717;
	NI TMP4718;
	nimfr("*", "algorithm.nim")
	result = 0;
	nimln(21, "algorithm.nim");
	nimln(21, "algorithm.nim");
	nimln(21, "algorithm.nim");
	TMP4717 = subInt(((NI) (order)), 1);
	y = (NI32)(TMP4717);
	nimln(22, "algorithm.nim");
	nimln(22, "algorithm.nim");
	nimln(22, "algorithm.nim");
	TMP4718 = subInt((NI)(x ^ ((NI) (y))), ((NI) (y)));
	result = (NI32)(TMP4718);
	popFrame();
	return result;
}
N_NOINLINE(void, algorithmInit)(void) {
	nimfr("algorithm", "algorithm.nim")
	popFrame();
}

N_NOINLINE(void, algorithmDatInit)(void) {
}

