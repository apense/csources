/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"
typedef struct tbitset213008 tbitset213008;
typedef struct TGenericSeq TGenericSeq;
typedef struct NimStringDesc NimStringDesc;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
struct TGenericSeq {
NI len;
NI reserved;
};
typedef NIM_CHAR TY611[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY611 data;
};
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
struct tbitset213008 {
  TGenericSeq Sup;
  NI8 data[SEQ_DECL_SIZE];
};
N_NIMCALL(NIM_BOOL, bitsetin_213055)(tbitset213008* x, NI64 e);
static N_INLINE(NI64, divInt64)(NI64 a, NI64 b);
N_NOINLINE(void, raiseDivByZero)(void);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI64, modInt64)(NI64 a, NI64 b);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(void, bitsetincl_213043)(tbitset213008** x, NI64 elem);
N_NIMCALL(void, hiddenraiseassert_71620)(NimStringDesc* msg);
N_NIMCALL(void, bitsetexcl_213049)(tbitset213008** x, NI64 elem);
N_NIMCALL(void, bitsetinit_213013)(tbitset213008** b, NI length);
N_NIMCALL(void, TMP2990)(void* p, NI op);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(void, bitsetunion_213019)(tbitset213008** x, tbitset213008* y);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(void, bitsetdiff_213025)(tbitset213008** x, tbitset213008* y);
N_NIMCALL(void, bitsetsymdiff_213031)(tbitset213008** x, tbitset213008* y);
N_NIMCALL(void, bitsetintersect_213037)(tbitset213008** x, tbitset213008* y);
N_NIMCALL(NIM_BOOL, bitsetequals_213060)(tbitset213008* x, tbitset213008* y);
N_NIMCALL(NIM_BOOL, bitsetcontains_213065)(tbitset213008* x, tbitset213008* y);
STRING_LITERAL(TMP2983, "0 <= elem ", 10);
extern TFrame* frameptr_12027;
extern TNimType NTI107; /* int8 */
TNimType NTI213008; /* TBitSet */

static N_INLINE(NI64, divInt64)(NI64 a, NI64 b) {
	NI64 result;
	result = 0;
	{
		if (!(b == 0)) goto LA3;
		raiseDivByZero();
	}
	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = (a == (IL64(-9223372036854775807) - IL64(1)));
		if (!(LOC7)) goto LA8;
		LOC7 = (b == -1);
		LA8: ;
		if (!LOC7) goto LA9;
		raiseOverflow();
	}
	LA9: ;
	result = (NI64)(a / b);
	goto BeforeRet;
	BeforeRet: ;
	return result;
}

static N_INLINE(NI64, modInt64)(NI64 a, NI64 b) {
	NI64 result;
	result = 0;
	{
		if (!(b == 0)) goto LA3;
		raiseDivByZero();
	}
	LA3: ;
	result = (NI64)(a % b);
	goto BeforeRet;
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

N_NIMCALL(NIM_BOOL, bitsetin_213055)(tbitset213008* x, NI64 e) {
	NIM_BOOL result;
	NI64 TMP2981;
	NI64 TMP2982;
	nimfr("BitSetIn", "bitsets.nim")
	result = 0;
	nimln(34, "bitsets.nim");
	nimln(684, "system.nim");
	nimln(684, "system.nim");
	nimln(34, "bitsets.nim");
	nimln(34, "bitsets.nim");
	TMP2981 = divInt64(e, 8);
	if ((NU)((NI64)(TMP2981)) >= (NU)(x->Sup.len)) raiseIndexError();
	nimln(34, "bitsets.nim");
	nimln(34, "bitsets.nim");
	nimln(34, "bitsets.nim");
	TMP2982 = modInt64(e, 8);
	result = !(((NI8)(x->data[(NI64)(TMP2981)] & ((NI8)(NU8)(NU)((NI)((NU32)(1) << (NU32)(((NI) ((NI64)(TMP2982)))))))) == ((NI8) 0)));
	popFrame();
	return result;
}

N_NIMCALL(void, bitsetincl_213043)(tbitset213008** x, NI64 elem) {
	NI64 TMP2984;
	NI64 TMP2985;
	NI64 TMP2986;
	nimfr("BitSetIncl", "bitsets.nim")
	nimln(38, "bitsets.nim");
	{
		nimln(38, "bitsets.nim");
		nimln(38, "bitsets.nim");
		if (!!((0 <= elem))) goto LA3;
		nimln(38, "bitsets.nim");
		hiddenraiseassert_71620(((NimStringDesc*) &TMP2983));
	}
	LA3: ;
	nimln(39, "bitsets.nim");
	nimln(39, "bitsets.nim");
	TMP2984 = divInt64(elem, 8);
	if ((NU)((NI64)(TMP2984)) >= (NU)((*x)->Sup.len)) raiseIndexError();
	nimln(39, "bitsets.nim");
	nimln(39, "bitsets.nim");
	TMP2985 = divInt64(elem, 8);
	if ((NU)((NI64)(TMP2985)) >= (NU)((*x)->Sup.len)) raiseIndexError();
	nimln(40, "bitsets.nim");
	nimln(40, "bitsets.nim");
	nimln(40, "bitsets.nim");
	TMP2986 = modInt64(elem, 8);
	(*x)->data[(NI64)(TMP2984)] = (NI8)((*x)->data[(NI64)(TMP2985)] | ((NI8)(NU8)(NU)((NI)((NU32)(1) << (NU32)(((NI) ((NI64)(TMP2986))))))));
	popFrame();
}

N_NIMCALL(void, bitsetexcl_213049)(tbitset213008** x, NI64 elem) {
	NI64 TMP2987;
	NI64 TMP2988;
	NI64 TMP2989;
	nimfr("BitSetExcl", "bitsets.nim")
	nimln(43, "bitsets.nim");
	nimln(43, "bitsets.nim");
	TMP2987 = divInt64(elem, 8);
	if ((NU)((NI64)(TMP2987)) >= (NU)((*x)->Sup.len)) raiseIndexError();
	nimln(43, "bitsets.nim");
	nimln(43, "bitsets.nim");
	TMP2988 = divInt64(elem, 8);
	if ((NU)((NI64)(TMP2988)) >= (NU)((*x)->Sup.len)) raiseIndexError();
	nimln(44, "bitsets.nim");
	nimln(44, "bitsets.nim");
	nimln(44, "bitsets.nim");
	nimln(44, "bitsets.nim");
	TMP2989 = modInt64(elem, 8);
	(*x)->data[(NI64)(TMP2987)] = (NI8)((*x)->data[(NI64)(TMP2988)] & (NI8)((NU8) ~(((NI8)(NU8)(NU)((NI)((NU32)(1) << (NU32)(((NI) ((NI64)(TMP2989))))))))));
	popFrame();
}
N_NIMCALL(void, TMP2990)(void* p, NI op) {
	tbitset213008* a;
	NI LOC1;
	a = (tbitset213008*)p;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
}

N_NIMCALL(void, bitsetinit_213013)(tbitset213008** b, NI length) {
	nimfr("BitSetInit", "bitsets.nim")
	nimln(47, "bitsets.nim");
	unsureAsgnRef((void**) &(*b), (tbitset213008*) newSeq((&NTI213008), length));
	popFrame();
}

static N_INLINE(NI, addInt)(NI a, NI b) {
	NI result;
	result = 0;
	result = (NI)((NU32)(a) + (NU32)(b));
	{
		NIM_BOOL LOC3;
		LOC3 = (0 <= (NI)(result ^ a));
		if (LOC3) goto LA4;
		LOC3 = (0 <= (NI)(result ^ b));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	raiseOverflow();
	BeforeRet: ;
	return result;
}

N_NIMCALL(void, bitsetunion_213019)(tbitset213008** x, tbitset213008* y) {
	NI i_213246;
	NI HEX3Atmp_213247;
	NI res_213249;
	nimfr("BitSetUnion", "bitsets.nim")
	i_213246 = 0;
	HEX3Atmp_213247 = 0;
	nimln(50, "bitsets.nim");
	nimln(50, "bitsets.nim");
	HEX3Atmp_213247 = ((*x)->Sup.len-1);
	nimln(1274, "system.nim");
	res_213249 = 0;
	nimln(1275, "system.nim");
	while (1) {
		nimln(1275, "system.nim");
		if (!(res_213249 <= HEX3Atmp_213247)) goto LA1;
		nimln(1274, "system.nim");
		i_213246 = res_213249;
		nimln(50, "bitsets.nim");
		if ((NU)(i_213246) >= (NU)((*x)->Sup.len)) raiseIndexError();
		nimln(50, "bitsets.nim");
		if ((NU)(i_213246) >= (NU)((*x)->Sup.len)) raiseIndexError();
		if ((NU)(i_213246) >= (NU)(y->Sup.len)) raiseIndexError();
		(*x)->data[i_213246] = (NI8)((*x)->data[i_213246] | y->data[i_213246]);
		nimln(1277, "system.nim");
		res_213249 = addInt(res_213249, 1);
	} LA1: ;
	popFrame();
}

N_NIMCALL(void, bitsetdiff_213025)(tbitset213008** x, tbitset213008* y) {
	NI i_213267;
	NI HEX3Atmp_213268;
	NI res_213270;
	nimfr("BitSetDiff", "bitsets.nim")
	i_213267 = 0;
	HEX3Atmp_213268 = 0;
	nimln(53, "bitsets.nim");
	nimln(53, "bitsets.nim");
	HEX3Atmp_213268 = ((*x)->Sup.len-1);
	nimln(1274, "system.nim");
	res_213270 = 0;
	nimln(1275, "system.nim");
	while (1) {
		nimln(1275, "system.nim");
		if (!(res_213270 <= HEX3Atmp_213268)) goto LA1;
		nimln(1274, "system.nim");
		i_213267 = res_213270;
		nimln(53, "bitsets.nim");
		if ((NU)(i_213267) >= (NU)((*x)->Sup.len)) raiseIndexError();
		nimln(53, "bitsets.nim");
		if ((NU)(i_213267) >= (NU)((*x)->Sup.len)) raiseIndexError();
		nimln(53, "bitsets.nim");
		if ((NU)(i_213267) >= (NU)(y->Sup.len)) raiseIndexError();
		(*x)->data[i_213267] = (NI8)((*x)->data[i_213267] & (NI8)((NU8) ~(y->data[i_213267])));
		nimln(1277, "system.nim");
		res_213270 = addInt(res_213270, 1);
	} LA1: ;
	popFrame();
}

N_NIMCALL(void, bitsetsymdiff_213031)(tbitset213008** x, tbitset213008* y) {
	NI i_213288;
	NI HEX3Atmp_213289;
	NI res_213291;
	nimfr("BitSetSymDiff", "bitsets.nim")
	i_213288 = 0;
	HEX3Atmp_213289 = 0;
	nimln(56, "bitsets.nim");
	nimln(56, "bitsets.nim");
	HEX3Atmp_213289 = ((*x)->Sup.len-1);
	nimln(1274, "system.nim");
	res_213291 = 0;
	nimln(1275, "system.nim");
	while (1) {
		nimln(1275, "system.nim");
		if (!(res_213291 <= HEX3Atmp_213289)) goto LA1;
		nimln(1274, "system.nim");
		i_213288 = res_213291;
		nimln(56, "bitsets.nim");
		if ((NU)(i_213288) >= (NU)((*x)->Sup.len)) raiseIndexError();
		nimln(56, "bitsets.nim");
		if ((NU)(i_213288) >= (NU)((*x)->Sup.len)) raiseIndexError();
		if ((NU)(i_213288) >= (NU)(y->Sup.len)) raiseIndexError();
		(*x)->data[i_213288] = (NI8)((*x)->data[i_213288] ^ y->data[i_213288]);
		nimln(1277, "system.nim");
		res_213291 = addInt(res_213291, 1);
	} LA1: ;
	popFrame();
}

N_NIMCALL(void, bitsetintersect_213037)(tbitset213008** x, tbitset213008* y) {
	NI i_213309;
	NI HEX3Atmp_213310;
	NI res_213312;
	nimfr("BitSetIntersect", "bitsets.nim")
	i_213309 = 0;
	HEX3Atmp_213310 = 0;
	nimln(59, "bitsets.nim");
	nimln(59, "bitsets.nim");
	HEX3Atmp_213310 = ((*x)->Sup.len-1);
	nimln(1274, "system.nim");
	res_213312 = 0;
	nimln(1275, "system.nim");
	while (1) {
		nimln(1275, "system.nim");
		if (!(res_213312 <= HEX3Atmp_213310)) goto LA1;
		nimln(1274, "system.nim");
		i_213309 = res_213312;
		nimln(59, "bitsets.nim");
		if ((NU)(i_213309) >= (NU)((*x)->Sup.len)) raiseIndexError();
		nimln(59, "bitsets.nim");
		if ((NU)(i_213309) >= (NU)((*x)->Sup.len)) raiseIndexError();
		if ((NU)(i_213309) >= (NU)(y->Sup.len)) raiseIndexError();
		(*x)->data[i_213309] = (NI8)((*x)->data[i_213309] & y->data[i_213309]);
		nimln(1277, "system.nim");
		res_213312 = addInt(res_213312, 1);
	} LA1: ;
	popFrame();
}

N_NIMCALL(NIM_BOOL, bitsetequals_213060)(tbitset213008* x, tbitset213008* y) {
	NIM_BOOL result;
	NI i_213330;
	NI HEX3Atmp_213331;
	NI res_213333;
	nimfr("BitSetEquals", "bitsets.nim")
	result = 0;
	i_213330 = 0;
	HEX3Atmp_213331 = 0;
	nimln(62, "bitsets.nim");
	nimln(62, "bitsets.nim");
	HEX3Atmp_213331 = (x->Sup.len-1);
	nimln(1274, "system.nim");
	res_213333 = 0;
	nimln(1275, "system.nim");
	while (1) {
		nimln(1275, "system.nim");
		if (!(res_213333 <= HEX3Atmp_213331)) goto LA1;
		nimln(1274, "system.nim");
		i_213330 = res_213333;
		nimln(63, "bitsets.nim");
		{
			nimln(684, "system.nim");
			nimln(684, "system.nim");
			if ((NU)(i_213330) >= (NU)(x->Sup.len)) raiseIndexError();
			if ((NU)(i_213330) >= (NU)(y->Sup.len)) raiseIndexError();
			if (!!((x->data[i_213330] == y->data[i_213330]))) goto LA4;
			nimln(64, "bitsets.nim");
			nimln(64, "bitsets.nim");
			result = NIM_FALSE;
			goto BeforeRet;
		}
		LA4: ;
		nimln(1277, "system.nim");
		res_213333 = addInt(res_213333, 1);
	} LA1: ;
	nimln(65, "bitsets.nim");
	result = NIM_TRUE;
	BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(NIM_BOOL, bitsetcontains_213065)(tbitset213008* x, tbitset213008* y) {
	NIM_BOOL result;
	NI i_213351;
	NI HEX3Atmp_213352;
	NI res_213354;
	nimfr("BitSetContains", "bitsets.nim")
	result = 0;
	i_213351 = 0;
	HEX3Atmp_213352 = 0;
	nimln(68, "bitsets.nim");
	nimln(68, "bitsets.nim");
	HEX3Atmp_213352 = (x->Sup.len-1);
	nimln(1274, "system.nim");
	res_213354 = 0;
	nimln(1275, "system.nim");
	while (1) {
		nimln(1275, "system.nim");
		if (!(res_213354 <= HEX3Atmp_213352)) goto LA1;
		nimln(1274, "system.nim");
		i_213351 = res_213354;
		nimln(69, "bitsets.nim");
		{
			nimln(684, "system.nim");
			nimln(684, "system.nim");
			nimln(69, "bitsets.nim");
			if ((NU)(i_213351) >= (NU)(x->Sup.len)) raiseIndexError();
			nimln(69, "bitsets.nim");
			if ((NU)(i_213351) >= (NU)(y->Sup.len)) raiseIndexError();
			if (!!(((NI8)(x->data[i_213351] & (NI8)((NU8) ~(y->data[i_213351]))) == ((NI8) 0)))) goto LA4;
			nimln(70, "bitsets.nim");
			nimln(70, "bitsets.nim");
			result = NIM_FALSE;
			goto BeforeRet;
		}
		LA4: ;
		nimln(1277, "system.nim");
		res_213354 = addInt(res_213354, 1);
	} LA1: ;
	nimln(71, "bitsets.nim");
	result = NIM_TRUE;
	BeforeRet: ;
	popFrame();
	return result;
}
N_NOINLINE(void, bitsetsInit)(void) {
	nimfr("bitsets", "bitsets.nim")
	popFrame();
}

N_NOINLINE(void, bitsetsDatInit)(void) {
NTI213008.size = sizeof(tbitset213008*);
NTI213008.kind = 24;
NTI213008.base = (&NTI107);
NTI213008.flags = 2;
NTI213008.marker = TMP2990;
}

