/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
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
static N_INLINE(NI, HEX21HEX26_105011)(NI h, NI val);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NI, HEX21HEX24_105042)(NI h);
N_NIMCALL(NI, hashdata_105072)(void* data, NI size);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(NI, subInt)(NI a, NI b);
static N_INLINE(NI, hash_105401)(void* x);
static N_INLINE(NI, hash_105801)(NI x);
static N_INLINE(NI, hash_105807)(NI64 x);
static N_INLINE(NI, hash_105813)(NIM_CHAR x);
N_NIMCALL(NI, hash_105825)(NimStringDesc* x);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(NI, hashignorestyle_105852)(NimStringDesc* x);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
N_NIMCALL(NI, hashignorecase_105915)(NimStringDesc* x);
static N_INLINE(NI, hash_105988)(NF x);
extern TFrame* frameptr_12027;
TNimType NTI105009; /* THash */

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_12027;
	frameptr_12027 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_12027 = (*frameptr_12027).prev;
}

static N_INLINE(NI, HEX21HEX26_105011)(NI h, NI val) {
	NI result;
	nimfr("!&", "hashes.nim")
	result = 0;
	nimln(24, "hashes.nim");
	nimln(24, "hashes.nim");
	result = (NI)((NU32)(h) + (NU32)(val));
	nimln(25, "hashes.nim");
	nimln(25, "hashes.nim");
	nimln(25, "hashes.nim");
	result = (NI)((NU32)(result) + (NU32)((NI)((NU32)(result) << (NU32)(10))));
	nimln(26, "hashes.nim");
	nimln(26, "hashes.nim");
	nimln(26, "hashes.nim");
	result = (NI)(result ^ (NI)((NU32)(result) >> (NU32)(6)));
	popFrame();
	return result;
}

static N_INLINE(NI, HEX21HEX24_105042)(NI h) {
	NI result;
	nimfr("!$", "hashes.nim")
	result = 0;
	nimln(31, "hashes.nim");
	nimln(31, "hashes.nim");
	nimln(31, "hashes.nim");
	result = (NI)((NU32)(h) + (NU32)((NI)((NU32)(h) << (NU32)(3))));
	nimln(32, "hashes.nim");
	nimln(32, "hashes.nim");
	nimln(32, "hashes.nim");
	result = (NI)(result ^ (NI)((NU32)(result) >> (NU32)(11)));
	nimln(33, "hashes.nim");
	nimln(33, "hashes.nim");
	nimln(33, "hashes.nim");
	result = (NI)((NU32)(result) + (NU32)((NI)((NU32)(result) << (NU32)(15))));
	popFrame();
	return result;
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

N_NIMCALL(NI, hashdata_105072)(void* data, NI size) {
	NI result;
	NI h;
	NCSTRING p;
	NI i;
	NI s;
	nimfr("hashData", "hashes.nim")
	result = 0;
	nimln(37, "hashes.nim");
	h = 0;
	nimln(42, "hashes.nim");
	p = ((NCSTRING) (data));
	nimln(43, "hashes.nim");
	i = 0;
	nimln(44, "hashes.nim");
	s = size;
	nimln(45, "hashes.nim");
	while (1) {
		nimln(692, "system.nim");
		if (!(0 < s)) goto LA1;
		nimln(46, "hashes.nim");
		nimln(46, "hashes.nim");
		h = HEX21HEX26_105011(h, ((NI) (((NU8)(p[i])))));
		nimln(47, "hashes.nim");
		i = addInt(i, 1);
		nimln(48, "hashes.nim");
		s = subInt(s, 1);
	} LA1: ;
	nimln(49, "hashes.nim");
	result = HEX21HEX24_105042(h);
	popFrame();
	return result;
}

static N_INLINE(NI, hash_105401)(void* x) {
	NI result;
	nimfr("hash", "hashes.nim")
	result = 0;
	nimln(68, "hashes.nim");
	nimln(68, "hashes.nim");
	result = (NI)((NU32)(((NI) (x))) >> (NU32)(3));
	popFrame();
	return result;
}

static N_INLINE(NI, hash_105801)(NI x) {
	NI result;
	nimfr("hash", "hashes.nim")
	result = 0;
	nimln(80, "hashes.nim");
	result = x;
	popFrame();
	return result;
}

static N_INLINE(NI, hash_105807)(NI64 x) {
	NI result;
	nimfr("hash", "hashes.nim")
	result = 0;
	nimln(84, "hashes.nim");
	nimln(84, "hashes.nim");
	result = ((NI) (((NI32)(NU32)(NU64)(x))));
	popFrame();
	return result;
}

static N_INLINE(NI, hash_105813)(NIM_CHAR x) {
	NI result;
	nimfr("hash", "hashes.nim")
	result = 0;
	nimln(88, "hashes.nim");
	nimln(88, "hashes.nim");
	result = ((NI) (((NU8)(x))));
	popFrame();
	return result;
}

N_NIMCALL(NI, hash_105825)(NimStringDesc* x) {
	NI result;
	NI h;
	NI i_105837;
	NI HEX3Atmp_105845;
	NI TMP276;
	NI res_105847;
	nimfr("hash", "hashes.nim")
	result = 0;
	nimln(92, "hashes.nim");
	h = 0;
	i_105837 = 0;
	HEX3Atmp_105845 = 0;
	nimln(93, "hashes.nim");
	nimln(93, "hashes.nim");
	nimln(93, "hashes.nim");
	TMP276 = subInt(x->Sup.len, 1);
	HEX3Atmp_105845 = (NI32)(TMP276);
	nimln(1281, "system.nim");
	res_105847 = 0;
	nimln(1282, "system.nim");
	while (1) {
		nimln(1282, "system.nim");
		if (!(res_105847 <= HEX3Atmp_105845)) goto LA1;
		nimln(1281, "system.nim");
		i_105837 = res_105847;
		nimln(94, "hashes.nim");
		nimln(94, "hashes.nim");
		if ((NU)(i_105837) > (NU)(x->Sup.len)) raiseIndexError();
		h = HEX21HEX26_105011(h, ((NI) (((NU8)(x->data[i_105837])))));
		nimln(1284, "system.nim");
		res_105847 = addInt(res_105847, 1);
	} LA1: ;
	nimln(95, "hashes.nim");
	result = HEX21HEX24_105042(h);
	popFrame();
	return result;
}

static N_INLINE(NI, chckRange)(NI i, NI a, NI b) {
	NI result;
	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = (a <= i);
		if (!(LOC3)) goto LA4;
		LOC3 = (i <= b);
		LA4: ;
		if (!LOC3) goto LA5;
		result = i;
		goto BeforeRet;
	}
	goto LA1;
	LA5: ;
	{
		raiseRangeError(((NI64) (i)));
	}
	LA1: ;
	BeforeRet: ;
	return result;
}

N_NIMCALL(NI, hashignorestyle_105852)(NimStringDesc* x) {
	NI result;
	NI h;
	NI i_105864;
	NI HEX3Atmp_105907;
	NI TMP277;
	NI res_105909;
	nimfr("hashIgnoreStyle", "hashes.nim")
	result = 0;
	nimln(99, "hashes.nim");
	h = 0;
	i_105864 = 0;
	HEX3Atmp_105907 = 0;
	nimln(100, "hashes.nim");
	nimln(100, "hashes.nim");
	nimln(100, "hashes.nim");
	TMP277 = subInt(x->Sup.len, 1);
	HEX3Atmp_105907 = (NI32)(TMP277);
	nimln(1281, "system.nim");
	res_105909 = 0;
	nimln(1282, "system.nim");
	while (1) {
		nimln(1282, "system.nim");
		if (!(res_105909 <= HEX3Atmp_105907)) goto LA1;
		nimln(1281, "system.nim");
		i_105864 = res_105909;
		{
			NIM_CHAR c;
			nimln(101, "hashes.nim");
			if ((NU)(i_105864) > (NU)(x->Sup.len)) raiseIndexError();
			c = x->data[i_105864];
			nimln(102, "hashes.nim");
			{
				nimln(102, "hashes.nim");
				if (!((NU8)(c) == (NU8)(95))) goto LA5;
				nimln(103, "hashes.nim");
				goto LA2;
			}
			LA5: ;
			nimln(104, "hashes.nim");
			{
				NI TMP278;
				nimln(716, "system.nim");
				if (!(((NU8)(c)) >= ((NU8)(65)) && ((NU8)(c)) <= ((NU8)(90)))) goto LA9;
				nimln(105, "hashes.nim");
				nimln(105, "hashes.nim");
				nimln(105, "hashes.nim");
				nimln(105, "hashes.nim");
				TMP278 = addInt(((NI) (((NU8)(c)))), 32);
				c = ((NIM_CHAR) (((NI)chckRange((NI32)(TMP278), 0, 255))));
			}
			LA9: ;
			nimln(106, "hashes.nim");
			nimln(106, "hashes.nim");
			h = HEX21HEX26_105011(h, ((NI) (((NU8)(c)))));
		} LA2: ;
		nimln(1284, "system.nim");
		res_105909 = addInt(res_105909, 1);
	} LA1: ;
	nimln(107, "hashes.nim");
	result = HEX21HEX24_105042(h);
	popFrame();
	return result;
}

N_NIMCALL(NI, hashignorecase_105915)(NimStringDesc* x) {
	NI result;
	NI h;
	NI i_105927;
	NI HEX3Atmp_105969;
	NI TMP279;
	NI res_105971;
	nimfr("hashIgnoreCase", "hashes.nim")
	result = 0;
	nimln(111, "hashes.nim");
	h = 0;
	i_105927 = 0;
	HEX3Atmp_105969 = 0;
	nimln(112, "hashes.nim");
	nimln(112, "hashes.nim");
	nimln(112, "hashes.nim");
	TMP279 = subInt(x->Sup.len, 1);
	HEX3Atmp_105969 = (NI32)(TMP279);
	nimln(1281, "system.nim");
	res_105971 = 0;
	nimln(1282, "system.nim");
	while (1) {
		NIM_CHAR c;
		nimln(1282, "system.nim");
		if (!(res_105971 <= HEX3Atmp_105969)) goto LA1;
		nimln(1281, "system.nim");
		i_105927 = res_105971;
		nimln(113, "hashes.nim");
		if ((NU)(i_105927) > (NU)(x->Sup.len)) raiseIndexError();
		c = x->data[i_105927];
		nimln(114, "hashes.nim");
		{
			NI TMP280;
			nimln(716, "system.nim");
			if (!(((NU8)(c)) >= ((NU8)(65)) && ((NU8)(c)) <= ((NU8)(90)))) goto LA4;
			nimln(115, "hashes.nim");
			nimln(115, "hashes.nim");
			nimln(115, "hashes.nim");
			nimln(115, "hashes.nim");
			TMP280 = addInt(((NI) (((NU8)(c)))), 32);
			c = ((NIM_CHAR) (((NI)chckRange((NI32)(TMP280), 0, 255))));
		}
		LA4: ;
		nimln(116, "hashes.nim");
		nimln(116, "hashes.nim");
		h = HEX21HEX26_105011(h, ((NI) (((NU8)(c)))));
		nimln(1284, "system.nim");
		res_105971 = addInt(res_105971, 1);
	} LA1: ;
	nimln(117, "hashes.nim");
	result = HEX21HEX24_105042(h);
	popFrame();
	return result;
}

static N_INLINE(NI, hash_105988)(NF x) {
	NI result;
	NF y;
	nimfr("hash", "hashes.nim")
	result = 0;
	nimln(126, "hashes.nim");
	nimln(126, "hashes.nim");
	y = (x + 1.0000000000000000e+00);
	nimln(127, "hashes.nim");
	result = (*((NI*) (&y)));
	popFrame();
	return result;
}
N_NOINLINE(void, hashesInit)(void) {
	nimfr("hashes", "hashes.nim")
	popFrame();
}

N_NOINLINE(void, hashesDatInit)(void) {
NTI105009.size = sizeof(NI);
NTI105009.kind = 31;
NTI105009.base = 0;
NTI105009.flags = 3;
}

