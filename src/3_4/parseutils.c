/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct EOverflow EOverflow;
typedef struct earithmetic1041 earithmetic1041;
typedef struct esynch1029 esynch1029;
typedef struct E_Base E_Base;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tcell38846 tcell38846;
typedef struct tcellseq38862 tcellseq38862;
typedef struct tgcheap40816 tgcheap40816;
typedef struct tcellset38858 tcellset38858;
typedef struct tpagedesc38854 tpagedesc38854;
typedef struct tmemregion22410 tmemregion22410;
typedef struct tsmallchunk21643 tsmallchunk21643;
typedef struct tllchunk22404 tllchunk22404;
typedef struct tbigchunk21645 tbigchunk21645;
typedef struct tintset21618 tintset21618;
typedef struct ttrunk21614 ttrunk21614;
typedef struct tavlnode22408 tavlnode22408;
typedef struct tgcstat40814 tgcstat40814;
typedef struct tbasechunk21641 tbasechunk21641;
typedef struct tfreecell21633 tfreecell21633;
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
struct TNimObject {
TNimType* m_type;
};
struct E_Base {
  TNimObject Sup;
E_Base* parent;
NCSTRING name;
NimStringDesc* message;
NimStringDesc* trace;
};
struct esynch1029 {
  E_Base Sup;
};
struct earithmetic1041 {
  esynch1029 Sup;
};
struct EOverflow {
  earithmetic1041 Sup;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct tcell38846 {
NI Refcount;
TNimType* Typ;
};
struct tcellseq38862 {
NI Len;
NI Cap;
tcell38846** D;
};
struct tcellset38858 {
NI Counter;
NI Max;
tpagedesc38854* Head;
tpagedesc38854** Data;
};
typedef tsmallchunk21643* TY22422[512];
typedef ttrunk21614* ttrunkbuckets21616[256];
struct tintset21618 {
ttrunkbuckets21616 Data;
};
struct tmemregion22410 {
NI Minlargeobj;
NI Maxlargeobj;
TY22422 Freesmallchunks;
tllchunk22404* Llmem;
NI Currmem;
NI Maxmem;
NI Freemem;
NI Lastsize;
tbigchunk21645* Freechunkslist;
tintset21618 Chunkstarts;
tavlnode22408* Root;
tavlnode22408* Deleted;
tavlnode22408* Last;
tavlnode22408* Freeavlnodes;
};
struct tgcstat40814 {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
NI64 Maxpause;
};
struct tgcheap40816 {
void* Stackbottom;
NI Cyclethreshold;
tcellseq38862 Zct;
tcellseq38862 Decstack;
tcellset38858 Cycleroots;
tcellseq38862 Tempstack;
NI Recgclock;
tmemregion22410 Region;
tgcstat40814 Stat;
};
typedef NI TY21621[16];
struct tpagedesc38854 {
tpagedesc38854* Next;
NI Key;
TY21621 Bits;
};
struct tbasechunk21641 {
NI Prevsize;
NI Size;
NIM_BOOL Used;
};
struct tsmallchunk21643 {
  tbasechunk21641 Sup;
tsmallchunk21643* Next;
tsmallchunk21643* Prev;
tfreecell21633* Freelist;
NI Free;
NI Acc;
NF64 Data;
};
struct tllchunk22404 {
NI Size;
NI Acc;
tllchunk22404* Next;
};
struct tbigchunk21645 {
  tbasechunk21641 Sup;
tbigchunk21645* Next;
tbigchunk21645* Prev;
NI Align;
NF64 Data;
};
struct ttrunk21614 {
ttrunk21614* Next;
NI Key;
TY21621 Bits;
};
typedef tavlnode22408* TY22414[2];
struct tavlnode22408 {
TY22414 Link;
NI Key;
NI Upperbound;
NI Level;
};
struct tfreecell21633 {
tfreecell21633* Next;
NI Zerofield;
};
N_NIMCALL(NI, npuParseBiggestInt)(NimStringDesc* s, NI64* number, NI start);
N_NIMCALL(NI, rawparseint_74996)(NimStringDesc* s, NI64* b, NI start);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(NI64, mulInt64)(NI64 a, NI64 b);
static N_INLINE(NI, subInt)(NI a, NI b);
static N_INLINE(NI64, subInt64)(NI64 a, NI64 b);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell38846*, usrtocell_42243)(void* usr);
static N_INLINE(void, rtladdzct_43402)(tcell38846* c);
N_NOINLINE(void, addzct_42215)(tcellseq38862* s, tcell38846* c);
N_NIMCALL(void, raiseException)(E_Base* e, NCSTRING ename);
N_NIMCALL(NI64, chckRange64)(NI64 i, NI64 a, NI64 b);
N_NIMCALL(NI, npuParseBiggestFloat)(NimStringDesc* s, NF64* number, NI start);
N_NIMCALL(NI, mulInt)(NI a, NI b);
N_NIMCALL(NF64, tentothepowerof_75155)(NI b_75157);
static N_INLINE(void, HEX2AHEX3D_75165)(NF64* x, NF64 y);
static N_INLINE(void, HEX2AHEX3D_75176)(NF* x, NF y);
STRING_LITERAL(TMP1066, "overflow", 8);
extern TFrame* frameptr_12027;
extern TNimType NTI17401; /* ref EOverflow */
extern TNimType NTI1045; /* EOverflow */
extern tgcheap40816 gch_40842;

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

static N_INLINE(NI64, subInt64)(NI64 a, NI64 b) {
	NI64 result;
	result = 0;
	result = (NI64)((NU64)(a) - (NU64)(b));
	{
		NIM_BOOL LOC3;
		LOC3 = (0 <= (NI64)(result ^ a));
		if (LOC3) goto LA4;
		LOC3 = (0 <= (NI64)(result ^ (NI64)((NU64) ~(b))));
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

N_NIMCALL(NI, rawparseint_74996)(NimStringDesc* s, NI64* b, NI start) {
	NI result;
	NI64 sign;
	NI i;
	nimfr("rawParseInt", "parseutils.nim")
	result = 0;
	nimln(194, "parseutils.nim");
	sign = -1;
	nimln(195, "parseutils.nim");
	i = start;
	nimln(196, "parseutils.nim");
	{
		nimln(196, "parseutils.nim");
		if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
		if (!((NU8)(s->data[i]) == (NU8)(43))) goto LA3;
		nimln(196, "parseutils.nim");
		i = addInt(i, 1);
	}
	goto LA1;
	LA3: ;
	{
		nimln(197, "parseutils.nim");
		if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
		if (!((NU8)(s->data[i]) == (NU8)(45))) goto LA6;
		nimln(198, "parseutils.nim");
		i = addInt(i, 1);
		nimln(199, "parseutils.nim");
		sign = 1;
	}
	goto LA1;
	LA6: ;
	LA1: ;
	nimln(200, "parseutils.nim");
	{
		NI64 TMP1064;
		NI TMP1065;
		nimln(716, "system.nim");
		if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
		if (!(((NU8)(s->data[i])) >= ((NU8)(48)) && ((NU8)(s->data[i])) <= ((NU8)(57)))) goto LA10;
		nimln(201, "parseutils.nim");
		(*b) = 0;
		nimln(202, "parseutils.nim");
		while (1) {
			NI64 TMP1061;
			NI TMP1062;
			NI64 TMP1063;
			nimln(716, "system.nim");
			if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
			if (!(((NU8)(s->data[i])) >= ((NU8)(48)) && ((NU8)(s->data[i])) <= ((NU8)(57)))) goto LA12;
			nimln(203, "parseutils.nim");
			nimln(203, "parseutils.nim");
			nimln(203, "parseutils.nim");
			TMP1061 = mulInt64((*b), 10);
			nimln(203, "parseutils.nim");
			nimln(203, "parseutils.nim");
			if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
			TMP1062 = subInt(((NI) (((NU8)(s->data[i])))), 48);
			TMP1063 = subInt64((NI64)(TMP1061), ((NI64) ((NI32)(TMP1062))));
			(*b) = (NI64)(TMP1063);
			nimln(204, "parseutils.nim");
			i = addInt(i, 1);
			nimln(205, "parseutils.nim");
			while (1) {
				nimln(205, "parseutils.nim");
				if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
				if (!((NU8)(s->data[i]) == (NU8)(95))) goto LA13;
				nimln(205, "parseutils.nim");
				i = addInt(i, 1);
			} LA13: ;
		} LA12: ;
		nimln(206, "parseutils.nim");
		nimln(206, "parseutils.nim");
		TMP1064 = mulInt64((*b), sign);
		(*b) = (NI64)(TMP1064);
		nimln(207, "parseutils.nim");
		nimln(207, "parseutils.nim");
		TMP1065 = subInt(i, start);
		result = (NI32)(TMP1065);
	}
	LA10: ;
	popFrame();
	return result;
}

N_NIMCALL(NI, npuParseBiggestInt)(NimStringDesc* s, NI64* number, NI start) {
	NI result;
	NI64 res;
	nimfr("parseBiggestInt", "parseutils.nim")
	result = 0;
	res = 0;
	nimln(218, "parseutils.nim");
	result = rawparseint_74996(s, &res, start);
	nimln(219, "parseutils.nim");
	(*number) = res;
	popFrame();
	return result;
}

static N_INLINE(tcell38846*, usrtocell_42243)(void* usr) {
	tcell38846* result;
	nimfr("usrToCell", "gc.nim")
	result = 0;
	nimln(106, "gc.nim");
	nimln(106, "gc.nim");
	nimln(106, "gc.nim");
	result = ((tcell38846*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(tcell38846))))));
	popFrame();
	return result;
}

static N_INLINE(void, rtladdzct_43402)(tcell38846* c) {
	nimfr("rtlAddZCT", "gc.nim")
	nimln(184, "gc.nim");
	addzct_42215(&gch_40842.Zct, c);
	popFrame();
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tcell38846* c;
	nimfr("nimGCunrefNoCycle", "gc.nim")
	nimln(218, "gc.nim");
	c = usrtocell_42243(p);
	nimln(220, "gc.nim");
	{
		nimln(155, "gc.nim");
		(*c).Refcount -= 8;
		nimln(156, "gc.nim");
		if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA3;
		nimln(221, "gc.nim");
		rtladdzct_43402(c);
	}
	LA3: ;
	popFrame();
}

N_NIMCALL(NI, npuParseInt)(NimStringDesc* s, NI* number, NI start) {
	NI result;
	NI64 res;
	nimfr("parseInt", "parseutils.nim")
	result = 0;
	res = 0;
	nimln(227, "parseutils.nim");
	result = npuParseBiggestInt(s, &res, start);
	nimln(228, "parseutils.nim");
	{
		NIM_BOOL LOC3;
		NIM_BOOL LOC5;
		EOverflow* e_75128;
		NimStringDesc* LOC9;
		nimln(228, "parseutils.nim");
		LOC3 = NIM_TRUE;
		if (!(LOC3)) goto LA4;
		nimln(229, "parseutils.nim");
		nimln(229, "parseutils.nim");
		LOC5 = (res < (-2147483647 -1));
		if (LOC5) goto LA6;
		nimln(692, "system.nim");
		LOC5 = (2147483647 < res);
		LA6: ;
		LOC3 = LOC5;
		LA4: ;
		if (!LOC3) goto LA7;
		e_75128 = 0;
		nimln(1796, "system.nim");
		e_75128 = (EOverflow*) newObj((&NTI17401), sizeof(EOverflow));
		(*e_75128).Sup.Sup.Sup.Sup.m_type = (&NTI1045);
		nimln(1797, "system.nim");
		LOC9 = 0;
		LOC9 = (*e_75128).Sup.Sup.Sup.message; (*e_75128).Sup.Sup.Sup.message = copyStringRC1(((NimStringDesc*) &TMP1066));
		if (LOC9) nimGCunrefNoCycle(LOC9);
		nimln(230, "parseutils.nim");
		raiseException((E_Base*)e_75128, "EOverflow");
	}
	goto LA1;
	LA7: ;
	{
		nimln(232, "parseutils.nim");
		(*number) = ((NI)chckRange64(res, (-2147483647 -1), 2147483647));
	}
	LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(NF64, tentothepowerof_75155)(NI b_75157) {
	NF64 result;
	NI b;
	NF a;
	nimfr("tenToThePowerOf", "parseutils.nim")
	result = 0;
	nimln(235, "parseutils.nim");
	b = b_75157;
	nimln(236, "parseutils.nim");
	a = 1.0000000000000000e+01;
	nimln(237, "parseutils.nim");
	result = 1.0000000000000000e+00;
	nimln(238, "parseutils.nim");
	while (1) {
		nimln(239, "parseutils.nim");
		{
			nimln(239, "parseutils.nim");
			nimln(239, "parseutils.nim");
			if (!(((NI) ((NI)(b & 1))) == 1)) goto LA4;
			nimln(240, "parseutils.nim");
			HEX2AHEX3D_75165(&result, ((NF64) (a)));
		}
		LA4: ;
		nimln(241, "parseutils.nim");
		nimln(241, "parseutils.nim");
		b = (NI)((NU32)(b) >> (NU32)(1));
		nimln(242, "parseutils.nim");
		{
			nimln(242, "parseutils.nim");
			if (!(b == 0)) goto LA8;
			nimln(242, "parseutils.nim");
			goto LA1;
		}
		LA8: ;
		nimln(243, "parseutils.nim");
		HEX2AHEX3D_75176(&a, a);
	} LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(NI, npuParseBiggestFloat)(NimStringDesc* s, NF64* number, NI start) {
	NI result;
	NF esign;
	NF sign;
	NI i;
	NI exponent;
	NI flags;
	NF64 hd;
	NI TMP1769;
	nimfr("parseBiggestFloat", "parseutils.nim")
	result = 0;
	nimln(251, "parseutils.nim");
	esign = 1.0000000000000000e+00;
	nimln(252, "parseutils.nim");
	sign = 1.0000000000000000e+00;
	nimln(253, "parseutils.nim");
	i = start;
	exponent = 0;
	flags = 0;
	nimln(256, "parseutils.nim");
	(*number) = 0.0;
	nimln(257, "parseutils.nim");
	{
		nimln(257, "parseutils.nim");
		if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
		if (!((NU8)(s->data[i]) == (NU8)(43))) goto LA3;
		nimln(257, "parseutils.nim");
		i = addInt(i, 1);
	}
	goto LA1;
	LA3: ;
	{
		nimln(258, "parseutils.nim");
		if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
		if (!((NU8)(s->data[i]) == (NU8)(45))) goto LA6;
		nimln(259, "parseutils.nim");
		sign = -1.0000000000000000e+00;
		nimln(260, "parseutils.nim");
		i = addInt(i, 1);
	}
	goto LA1;
	LA6: ;
	LA1: ;
	nimln(261, "parseutils.nim");
	{
		NIM_BOOL LOC10;
		nimln(261, "parseutils.nim");
		nimln(261, "parseutils.nim");
		if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
		LOC10 = ((NU8)(s->data[i]) == (NU8)(78));
		if (LOC10) goto LA11;
		nimln(261, "parseutils.nim");
		if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
		LOC10 = ((NU8)(s->data[i]) == (NU8)(110));
		LA11: ;
		if (!LOC10) goto LA12;
		nimln(262, "parseutils.nim");
		{
			NIM_BOOL LOC16;
			NI TMP1750;
			NI TMP1751;
			nimln(262, "parseutils.nim");
			nimln(262, "parseutils.nim");
			nimln(262, "parseutils.nim");
			TMP1750 = addInt(i, 1);
			if ((NU)((NI32)(TMP1750)) > (NU)(s->Sup.len)) raiseIndexError();
			LOC16 = ((NU8)(s->data[(NI32)(TMP1750)]) == (NU8)(65));
			if (LOC16) goto LA17;
			nimln(262, "parseutils.nim");
			nimln(262, "parseutils.nim");
			TMP1751 = addInt(i, 1);
			if ((NU)((NI32)(TMP1751)) > (NU)(s->Sup.len)) raiseIndexError();
			LOC16 = ((NU8)(s->data[(NI32)(TMP1751)]) == (NU8)(97));
			LA17: ;
			if (!LOC16) goto LA18;
			nimln(263, "parseutils.nim");
			{
				NIM_BOOL LOC22;
				NI TMP1752;
				NI TMP1753;
				nimln(263, "parseutils.nim");
				nimln(263, "parseutils.nim");
				nimln(263, "parseutils.nim");
				TMP1752 = addInt(i, 2);
				if ((NU)((NI32)(TMP1752)) > (NU)(s->Sup.len)) raiseIndexError();
				LOC22 = ((NU8)(s->data[(NI32)(TMP1752)]) == (NU8)(78));
				if (LOC22) goto LA23;
				nimln(263, "parseutils.nim");
				nimln(263, "parseutils.nim");
				TMP1753 = addInt(i, 2);
				if ((NU)((NI32)(TMP1753)) > (NU)(s->Sup.len)) raiseIndexError();
				LOC22 = ((NU8)(s->data[(NI32)(TMP1753)]) == (NU8)(110));
				LA23: ;
				if (!LOC22) goto LA24;
				nimln(264, "parseutils.nim");
				{
					NI TMP1754;
					NI TMP1755;
					NI TMP1756;
					nimln(717, "system.nim");
					nimln(717, "system.nim");
					nimln(264, "parseutils.nim");
					TMP1754 = addInt(i, 3);
					if ((NU)((NI32)(TMP1754)) > (NU)(s->Sup.len)) raiseIndexError();
					if (!!((((NU8)(s->data[(NI32)(TMP1754)])) >= ((NU8)(97)) && ((NU8)(s->data[(NI32)(TMP1754)])) <= ((NU8)(122)) || ((NU8)(s->data[(NI32)(TMP1754)])) >= ((NU8)(65)) && ((NU8)(s->data[(NI32)(TMP1754)])) <= ((NU8)(90)) || ((NU8)(s->data[(NI32)(TMP1754)])) >= ((NU8)(48)) && ((NU8)(s->data[(NI32)(TMP1754)])) <= ((NU8)(57)) || ((NU8)(s->data[(NI32)(TMP1754)])) == ((NU8)(95))))) goto LA28;
					nimln(265, "parseutils.nim");
					(*number) = NAN;
					nimln(266, "parseutils.nim");
					nimln(266, "parseutils.nim");
					nimln(266, "parseutils.nim");
					nimln(266, "parseutils.nim");
					TMP1755 = addInt(i, 3);
					TMP1756 = subInt((NI32)(TMP1755), start);
					result = (NI32)(TMP1756);
					goto BeforeRet;
				}
				LA28: ;
			}
			LA24: ;
		}
		LA18: ;
		nimln(267, "parseutils.nim");
		nimln(267, "parseutils.nim");
		result = 0;
		goto BeforeRet;
	}
	LA12: ;
	nimln(268, "parseutils.nim");
	{
		NIM_BOOL LOC32;
		nimln(268, "parseutils.nim");
		nimln(268, "parseutils.nim");
		if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
		LOC32 = ((NU8)(s->data[i]) == (NU8)(73));
		if (LOC32) goto LA33;
		nimln(268, "parseutils.nim");
		if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
		LOC32 = ((NU8)(s->data[i]) == (NU8)(105));
		LA33: ;
		if (!LOC32) goto LA34;
		nimln(269, "parseutils.nim");
		{
			NIM_BOOL LOC38;
			NI TMP1757;
			NI TMP1758;
			nimln(269, "parseutils.nim");
			nimln(269, "parseutils.nim");
			nimln(269, "parseutils.nim");
			TMP1757 = addInt(i, 1);
			if ((NU)((NI32)(TMP1757)) > (NU)(s->Sup.len)) raiseIndexError();
			LOC38 = ((NU8)(s->data[(NI32)(TMP1757)]) == (NU8)(78));
			if (LOC38) goto LA39;
			nimln(269, "parseutils.nim");
			nimln(269, "parseutils.nim");
			TMP1758 = addInt(i, 1);
			if ((NU)((NI32)(TMP1758)) > (NU)(s->Sup.len)) raiseIndexError();
			LOC38 = ((NU8)(s->data[(NI32)(TMP1758)]) == (NU8)(110));
			LA39: ;
			if (!LOC38) goto LA40;
			nimln(270, "parseutils.nim");
			{
				NIM_BOOL LOC44;
				NI TMP1759;
				NI TMP1760;
				nimln(270, "parseutils.nim");
				nimln(270, "parseutils.nim");
				nimln(270, "parseutils.nim");
				TMP1759 = addInt(i, 2);
				if ((NU)((NI32)(TMP1759)) > (NU)(s->Sup.len)) raiseIndexError();
				LOC44 = ((NU8)(s->data[(NI32)(TMP1759)]) == (NU8)(70));
				if (LOC44) goto LA45;
				nimln(270, "parseutils.nim");
				nimln(270, "parseutils.nim");
				TMP1760 = addInt(i, 2);
				if ((NU)((NI32)(TMP1760)) > (NU)(s->Sup.len)) raiseIndexError();
				LOC44 = ((NU8)(s->data[(NI32)(TMP1760)]) == (NU8)(102));
				LA45: ;
				if (!LOC44) goto LA46;
				nimln(271, "parseutils.nim");
				{
					NI TMP1761;
					NI TMP1762;
					NI TMP1763;
					nimln(717, "system.nim");
					nimln(717, "system.nim");
					nimln(271, "parseutils.nim");
					TMP1761 = addInt(i, 3);
					if ((NU)((NI32)(TMP1761)) > (NU)(s->Sup.len)) raiseIndexError();
					if (!!((((NU8)(s->data[(NI32)(TMP1761)])) >= ((NU8)(97)) && ((NU8)(s->data[(NI32)(TMP1761)])) <= ((NU8)(122)) || ((NU8)(s->data[(NI32)(TMP1761)])) >= ((NU8)(65)) && ((NU8)(s->data[(NI32)(TMP1761)])) <= ((NU8)(90)) || ((NU8)(s->data[(NI32)(TMP1761)])) >= ((NU8)(48)) && ((NU8)(s->data[(NI32)(TMP1761)])) <= ((NU8)(57)) || ((NU8)(s->data[(NI32)(TMP1761)])) == ((NU8)(95))))) goto LA50;
					nimln(272, "parseutils.nim");
					nimln(272, "parseutils.nim");
					(*number) = ((NF64) ((INF * sign)));
					nimln(273, "parseutils.nim");
					nimln(273, "parseutils.nim");
					nimln(273, "parseutils.nim");
					nimln(273, "parseutils.nim");
					TMP1762 = addInt(i, 3);
					TMP1763 = subInt((NI32)(TMP1762), start);
					result = (NI32)(TMP1763);
					goto BeforeRet;
				}
				LA50: ;
			}
			LA46: ;
		}
		LA40: ;
		nimln(274, "parseutils.nim");
		nimln(274, "parseutils.nim");
		result = 0;
		goto BeforeRet;
	}
	LA34: ;
	nimln(275, "parseutils.nim");
	while (1) {
		NI TMP1764;
		nimln(716, "system.nim");
		if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
		if (!(((NU8)(s->data[i])) >= ((NU8)(48)) && ((NU8)(s->data[i])) <= ((NU8)(57)))) goto LA52;
		nimln(277, "parseutils.nim");
		nimln(277, "parseutils.nim");
		flags = (NI)(flags | 1);
		nimln(278, "parseutils.nim");
		nimln(278, "parseutils.nim");
		nimln(278, "parseutils.nim");
		nimln(278, "parseutils.nim");
		nimln(278, "parseutils.nim");
		nimln(278, "parseutils.nim");
		if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
		TMP1764 = subInt(((NI) (((NU8)(s->data[i])))), 48);
		(*number) = ((NF64) (((((NF) ((*number))) * 1.0000000000000000e+01) + ((double) (((NI) ((NI32)(TMP1764))))))));
		nimln(279, "parseutils.nim");
		i = addInt(i, 1);
		nimln(280, "parseutils.nim");
		while (1) {
			nimln(280, "parseutils.nim");
			if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
			if (!((NU8)(s->data[i]) == (NU8)(95))) goto LA53;
			nimln(280, "parseutils.nim");
			i = addInt(i, 1);
		} LA53: ;
	} LA52: ;
	nimln(282, "parseutils.nim");
	{
		NF hd;
		nimln(282, "parseutils.nim");
		if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
		if (!((NU8)(s->data[i]) == (NU8)(46))) goto LA56;
		nimln(283, "parseutils.nim");
		hd = 1.0000000000000000e+00;
		nimln(284, "parseutils.nim");
		i = addInt(i, 1);
		nimln(285, "parseutils.nim");
		while (1) {
			NI TMP1765;
			nimln(716, "system.nim");
			if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
			if (!(((NU8)(s->data[i])) >= ((NU8)(48)) && ((NU8)(s->data[i])) <= ((NU8)(57)))) goto LA58;
			nimln(287, "parseutils.nim");
			nimln(287, "parseutils.nim");
			flags = (NI)(flags | 2);
			nimln(288, "parseutils.nim");
			nimln(288, "parseutils.nim");
			nimln(288, "parseutils.nim");
			nimln(288, "parseutils.nim");
			nimln(288, "parseutils.nim");
			nimln(288, "parseutils.nim");
			if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
			TMP1765 = subInt(((NI) (((NU8)(s->data[i])))), 48);
			(*number) = ((NF64) (((((NF) ((*number))) * 1.0000000000000000e+01) + ((double) (((NI) ((NI32)(TMP1765))))))));
			nimln(289, "parseutils.nim");
			nimln(289, "parseutils.nim");
			hd = (hd * 1.0000000000000000e+01);
			nimln(290, "parseutils.nim");
			i = addInt(i, 1);
			nimln(291, "parseutils.nim");
			while (1) {
				nimln(291, "parseutils.nim");
				if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
				if (!((NU8)(s->data[i]) == (NU8)(95))) goto LA59;
				nimln(291, "parseutils.nim");
				i = addInt(i, 1);
			} LA59: ;
		} LA58: ;
		nimln(292, "parseutils.nim");
		nimln(292, "parseutils.nim");
		(*number) = ((NF64) ((((NF) ((*number))) / hd)));
	}
	LA56: ;
	nimln(294, "parseutils.nim");
	{
		nimln(294, "parseutils.nim");
		if (!(flags == 0)) goto LA62;
		nimln(294, "parseutils.nim");
		nimln(294, "parseutils.nim");
		result = 0;
		goto BeforeRet;
	}
	LA62: ;
	nimln(296, "parseutils.nim");
	{
		nimln(716, "system.nim");
		if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
		if (!(((NU8)(s->data[i])) == ((NU8)(101)) || ((NU8)(s->data[i])) == ((NU8)(69)))) goto LA66;
		nimln(297, "parseutils.nim");
		i = addInt(i, 1);
		nimln(298, "parseutils.nim");
		{
			nimln(298, "parseutils.nim");
			if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
			if (!((NU8)(s->data[i]) == (NU8)(43))) goto LA70;
			nimln(299, "parseutils.nim");
			i = addInt(i, 1);
		}
		goto LA68;
		LA70: ;
		{
			nimln(300, "parseutils.nim");
			if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
			if (!((NU8)(s->data[i]) == (NU8)(45))) goto LA73;
			nimln(301, "parseutils.nim");
			esign = -1.0000000000000000e+00;
			nimln(302, "parseutils.nim");
			i = addInt(i, 1);
		}
		goto LA68;
		LA73: ;
		LA68: ;
		nimln(303, "parseutils.nim");
		{
			nimln(717, "system.nim");
			nimln(717, "system.nim");
			if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
			if (!!((((NU8)(s->data[i])) >= ((NU8)(48)) && ((NU8)(s->data[i])) <= ((NU8)(57))))) goto LA77;
			nimln(304, "parseutils.nim");
			nimln(304, "parseutils.nim");
			result = 0;
			goto BeforeRet;
		}
		LA77: ;
		nimln(305, "parseutils.nim");
		while (1) {
			NI TMP1766;
			NI TMP1767;
			NI TMP1768;
			nimln(716, "system.nim");
			if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
			if (!(((NU8)(s->data[i])) >= ((NU8)(48)) && ((NU8)(s->data[i])) <= ((NU8)(57)))) goto LA79;
			nimln(306, "parseutils.nim");
			nimln(306, "parseutils.nim");
			nimln(306, "parseutils.nim");
			nimln(306, "parseutils.nim");
			TMP1766 = mulInt(exponent, 10);
			nimln(306, "parseutils.nim");
			if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
			TMP1767 = addInt((NI32)(TMP1766), ((NI) (((NU8)(s->data[i])))));
			TMP1768 = subInt((NI32)(TMP1767), 48);
			exponent = (NI32)(TMP1768);
			nimln(307, "parseutils.nim");
			i = addInt(i, 1);
			nimln(308, "parseutils.nim");
			while (1) {
				nimln(308, "parseutils.nim");
				if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
				if (!((NU8)(s->data[i]) == (NU8)(95))) goto LA80;
				nimln(308, "parseutils.nim");
				i = addInt(i, 1);
			} LA80: ;
		} LA79: ;
	}
	LA66: ;
	nimln(310, "parseutils.nim");
	hd = tentothepowerof_75155(exponent);
	nimln(311, "parseutils.nim");
	{
		nimln(692, "system.nim");
		if (!(0.0 < esign)) goto LA83;
		nimln(311, "parseutils.nim");
		nimln(311, "parseutils.nim");
		(*number) = ((NF64) ((((NF) ((*number))) * ((NF) (hd)))));
	}
	goto LA81;
	LA83: ;
	{
		nimln(312, "parseutils.nim");
		nimln(312, "parseutils.nim");
		(*number) = ((NF64) ((((NF) ((*number))) / ((NF) (hd)))));
	}
	LA81: ;
	nimln(314, "parseutils.nim");
	nimln(314, "parseutils.nim");
	(*number) = ((NF64) ((((NF) ((*number))) * sign)));
	nimln(315, "parseutils.nim");
	nimln(315, "parseutils.nim");
	TMP1769 = subInt(i, start);
	result = (NI32)(TMP1769);
	BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(NI, npuParseFloat)(NimStringDesc* s, NF* number, NI start) {
	NI result;
	NF64 bf;
	nimfr("parseFloat", "parseutils.nim")
	result = 0;
	bf = 0;
	nimln(323, "parseutils.nim");
	result = npuParseBiggestFloat(s, &bf, start);
	nimln(324, "parseutils.nim");
	(*number) = ((NF) (bf));
	popFrame();
	return result;
}

static N_INLINE(void, HEX2AHEX3D_75165)(NF64* x, NF64 y) {
	nimfr("*=", "system.nim")
	nimln(2466, "system.nim");
	nimln(2466, "system.nim");
	(*x) = ((NF64) ((((NF) ((*x))) * ((NF) (y)))));
	popFrame();
}

static N_INLINE(void, HEX2AHEX3D_75176)(NF* x, NF y) {
	nimfr("*=", "system.nim")
	nimln(2466, "system.nim");
	nimln(2466, "system.nim");
	(*x) = ((*x) * y);
	popFrame();
}
N_NOINLINE(void, parseutilsInit)(void) {
	nimfr("parseutils", "parseutils.nim")
	popFrame();
}

N_NOINLINE(void, parseutilsDatInit)(void) {
}

