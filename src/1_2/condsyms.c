/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct tstringtable107609 tstringtable107609;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tident134015 tident134015;
typedef struct tidobj134009 tidobj134009;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tkeyvaluepairseq107607 tkeyvaluepairseq107607;
typedef struct TY87511 TY87511;
typedef struct tcell38646 tcell38646;
typedef struct tcellseq38662 tcellseq38662;
typedef struct tgcheap40616 tgcheap40616;
typedef struct tcellset38658 tcellset38658;
typedef struct tpagedesc38654 tpagedesc38654;
typedef struct tmemregion22210 tmemregion22210;
typedef struct tsmallchunk21443 tsmallchunk21443;
typedef struct tllchunk22204 tllchunk22204;
typedef struct tbigchunk21445 tbigchunk21445;
typedef struct tintset21418 tintset21418;
typedef struct ttrunk21414 ttrunk21414;
typedef struct tavlnode22208 tavlnode22208;
typedef struct tgcstat40614 tgcstat40614;
typedef struct tinfocpu126445 tinfocpu126445;
typedef struct tinfoos126040 tinfoos126040;
typedef struct tbasechunk21441 tbasechunk21441;
typedef struct tfreecell21433 tfreecell21433;
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
struct tidobj134009 {
  TNimObject Sup;
NI Id;
};
struct tident134015 {
  tidobj134009 Sup;
NimStringDesc* S;
tident134015* Next;
NI H;
};
struct TY87511 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
struct tstringtable107609 {
  TNimObject Sup;
NI Counter;
tkeyvaluepairseq107607* Data;
NU8 Mode;
};
struct tcell38646 {
NI Refcount;
TNimType* Typ;
};
struct tcellseq38662 {
NI Len;
NI Cap;
tcell38646** D;
};
struct tcellset38658 {
NI Counter;
NI Max;
tpagedesc38654* Head;
tpagedesc38654** Data;
};
typedef tsmallchunk21443* TY22222[512];
typedef ttrunk21414* ttrunkbuckets21416[256];
struct tintset21418 {
ttrunkbuckets21416 Data;
};
struct tmemregion22210 {
NI Minlargeobj;
NI Maxlargeobj;
TY22222 Freesmallchunks;
tllchunk22204* Llmem;
NI Currmem;
NI Maxmem;
NI Freemem;
NI Lastsize;
tbigchunk21445* Freechunkslist;
tintset21418 Chunkstarts;
tavlnode22208* Root;
tavlnode22208* Deleted;
tavlnode22208* Last;
tavlnode22208* Freeavlnodes;
};
struct tgcstat40614 {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
NI64 Maxpause;
};
struct tgcheap40616 {
void* Stackbottom;
NI Cyclethreshold;
tcellseq38662 Zct;
tcellseq38662 Decstack;
tcellset38658 Cycleroots;
tcellseq38662 Tempstack;
NI Recgclock;
tmemregion22210 Region;
tgcstat40614 Stat;
};
struct tinfocpu126445 {
NimStringDesc* Field0;
NI Field1;
NU8 Field2;
NI Field3;
NI Field4;
};
typedef tinfocpu126445 TY126460[14];
typedef NimStringDesc* TY126455[2];
struct tinfoos126040 {
NimStringDesc* Field0;
NimStringDesc* Field1;
NimStringDesc* Field2;
NimStringDesc* Field3;
NimStringDesc* Field4;
NimStringDesc* Field5;
NimStringDesc* Field6;
NimStringDesc* Field7;
NimStringDesc* Field8;
NimStringDesc* Field9;
NimStringDesc* Field10;
NimStringDesc* Field11;
NU8 Field12;
};
typedef tinfoos126040 TY126060[23];
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef NI TY21421[8];
struct tpagedesc38654 {
tpagedesc38654* Next;
NI Key;
TY21421 Bits;
};
struct tbasechunk21441 {
NI Prevsize;
NI Size;
NIM_BOOL Used;
};
struct tsmallchunk21443 {
  tbasechunk21441 Sup;
tsmallchunk21443* Next;
tsmallchunk21443* Prev;
tfreecell21433* Freelist;
NI Free;
NI Acc;
NF64 Data;
};
struct tllchunk22204 {
NI Size;
NI Acc;
tllchunk22204* Next;
};
struct tbigchunk21445 {
  tbasechunk21441 Sup;
tbigchunk21445* Next;
tbigchunk21445* Prev;
NI Align;
NF64 Data;
};
struct ttrunk21414 {
ttrunk21414* Next;
NI Key;
TY21421 Bits;
};
typedef tavlnode22208* TY22214[2];
struct tavlnode22208 {
TY22214 Link;
NI Key;
NI Upperbound;
NI Level;
};
struct tfreecell21433 {
tfreecell21433* Next;
NI Zerofield;
};
struct tkeyvaluepairseq107607 {
  TGenericSeq Sup;
  TY87511 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, definesymbol_135006)(NimStringDesc* symbol);
N_NIMCALL(void, nstPut)(tstringtable107609* t, NimStringDesc* key, NimStringDesc* val);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(void, undefsymbol_135011)(NimStringDesc* symbol);
N_NIMCALL(NIM_BOOL, isdefined_135016)(NimStringDesc* symbol);
N_NIMCALL(NIM_BOOL, nsthasKey)(tstringtable107609* t, NimStringDesc* key);
N_NIMCALL(NimStringDesc*, nstGet)(tstringtable107609* t, NimStringDesc* key);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NIM_BOOL, isdefined_135022)(tident134015* symbol);
N_NIMCALL(NI, countdefinedsymbols_135041)(void);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(void, initdefines_135067)(void);
N_NIMCALL(tstringtable107609*, nstnewStringTable)(NU8 mode);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell38646*, usrtocell_42043)(void* usr);
static N_INLINE(void, rtladdzct_43202)(tcell38646* c);
N_NOINLINE(void, addzct_42015)(tcellseq38662* s, tcell38646* c);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, nsuNormalize)(NimStringDesc* s);
STRING_LITERAL(TMP869, "true", 4);
STRING_LITERAL(TMP870, "false", 5);
STRING_LITERAL(TMP871, "nimrod", 6);
STRING_LITERAL(TMP872, "nimhygiene", 10);
STRING_LITERAL(TMP873, "niminheritable", 14);
STRING_LITERAL(TMP874, "nimmixin", 8);
STRING_LITERAL(TMP875, "nimeffects", 10);
STRING_LITERAL(TMP876, "nimbabel", 8);
STRING_LITERAL(TMP877, "nimsuperops", 11);
STRING_LITERAL(TMP878, "x86", 3);
STRING_LITERAL(TMP879, "itanium", 7);
STRING_LITERAL(TMP880, "x8664", 5);
STRING_LITERAL(TMP881, "msdos", 5);
STRING_LITERAL(TMP882, "mswindows", 9);
STRING_LITERAL(TMP883, "win32", 5);
STRING_LITERAL(TMP884, "unix", 4);
STRING_LITERAL(TMP885, "posix", 5);
STRING_LITERAL(TMP886, "sunos", 5);
STRING_LITERAL(TMP887, "bsd", 3);
STRING_LITERAL(TMP888, "macintosh", 9);
STRING_LITERAL(TMP889, "cpu", 3);
extern NIM_CONST TY126460 cpu_126459;
extern NIM_CONST TY126455 endiantostr_126454;
extern NIM_CONST TY126060 os_126059;
STRING_LITERAL(TMP892, "emulatedthreadvars", 18);
tstringtable107609* gsymbols_135003;
extern TFrame* frameptr_12027;
extern tgcheap40616 gch_40642;
extern NU8 targetcpu_126560;
extern NU8 targetos_126562;

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_12027;
	frameptr_12027 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_12027 = (*frameptr_12027).prev;
}

N_NIMCALL(void, definesymbol_135006)(NimStringDesc* symbol) {
	nimfr("DefineSymbol", "condsyms.nim")
	nimln(20, "condsyms.nim");
	nstPut(gsymbols_135003, symbol, ((NimStringDesc*) &TMP869));
	popFrame();
}

N_NIMCALL(void, undefsymbol_135011)(NimStringDesc* symbol) {
	nimfr("UndefSymbol", "condsyms.nim")
	nimln(23, "condsyms.nim");
	nstPut(gsymbols_135003, symbol, ((NimStringDesc*) &TMP870));
	popFrame();
}

static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	NIM_BOOL LOC11;
	int LOC13;
	result = 0;
	{
		if (!(a == b)) goto LA3;
		result = NIM_TRUE;
		goto BeforeRet;
	}
	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = (a == NIM_NIL);
		if (LOC7) goto LA8;
		LOC7 = (b == NIM_NIL);
		LA8: ;
		if (!LOC7) goto LA9;
		result = NIM_FALSE;
		goto BeforeRet;
	}
	LA9: ;
	LOC11 = ((*a).Sup.len == (*b).Sup.len);
	if (!(LOC11)) goto LA12;
	LOC13 = memcmp(((NCSTRING) ((*a).data)), ((NCSTRING) ((*b).data)), (NI64)((*a).Sup.len * 1));
	LOC11 = (LOC13 == ((NI32) 0));
	LA12: ;
	result = LOC11;
	goto BeforeRet;
	BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, isdefined_135016)(NimStringDesc* symbol) {
	NIM_BOOL result;
	nimfr("isDefined", "condsyms.nim")
	result = 0;
	nimln(26, "condsyms.nim");
	{
		NIM_BOOL LOC3;
		NimStringDesc* LOC6;
		nimln(26, "condsyms.nim");
		LOC3 = nsthasKey(gsymbols_135003, symbol);
		if (!LOC3) goto LA4;
		nimln(27, "condsyms.nim");
		nimln(27, "condsyms.nim");
		nimln(27, "condsyms.nim");
		LOC6 = 0;
		LOC6 = nstGet(gsymbols_135003, symbol);
		result = eqStrings(LOC6, ((NimStringDesc*) &TMP869));
	}
	LA4: ;
	popFrame();
	return result;
}

N_NIMCALL(NIM_BOOL, isdefined_135022)(tident134015* symbol) {
	NIM_BOOL result;
	nimfr("isDefined", "condsyms.nim")
	result = 0;
	nimln(29, "condsyms.nim");
	result = isdefined_135016((*symbol).S);
	popFrame();
	return result;
}

static N_INLINE(NI, addInt)(NI a, NI b) {
	NI result;
	result = 0;
	result = (NI)((NU64)(a) + (NU64)(b));
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

N_NIMCALL(NI, countdefinedsymbols_135041)(void) {
	NI result;
	NimStringDesc* key_135044;
	NimStringDesc* val_135045;
	NI h_135059;
	NI HEX3Atmp_135061;
	NI res_135063;
	nimfr("countDefinedSymbols", "condsyms.nim")
	result = 0;
	nimln(36, "condsyms.nim");
	result = 0;
	key_135044 = 0;
	val_135045 = 0;
	h_135059 = 0;
	HEX3Atmp_135061 = 0;
	nimln(40, "strtabs.nim");
	nimln(40, "strtabs.nim");
	HEX3Atmp_135061 = ((*gsymbols_135003).Data->Sup.len-1);
	nimln(1281, "system.nim");
	res_135063 = 0;
	nimln(1282, "system.nim");
	while (1) {
		nimln(1282, "system.nim");
		if (!(res_135063 <= HEX3Atmp_135061)) goto LA1;
		nimln(1281, "system.nim");
		h_135059 = res_135063;
		nimln(41, "strtabs.nim");
		{
			nimln(41, "strtabs.nim");
			nimln(41, "strtabs.nim");
			if ((NU)(h_135059) >= (NU)((*gsymbols_135003).Data->Sup.len)) raiseIndexError();
			if (!!((*gsymbols_135003).Data->data[h_135059].Field0 == 0)) goto LA4;
			nimln(42, "strtabs.nim");
			if ((NU)(h_135059) >= (NU)((*gsymbols_135003).Data->Sup.len)) raiseIndexError();
			key_135044 = (*gsymbols_135003).Data->data[h_135059].Field0;
			nimln(42, "strtabs.nim");
			if ((NU)(h_135059) >= (NU)((*gsymbols_135003).Data->Sup.len)) raiseIndexError();
			val_135045 = (*gsymbols_135003).Data->data[h_135059].Field1;
			nimln(38, "condsyms.nim");
			{
				nimln(38, "condsyms.nim");
				if (!eqStrings(val_135045, ((NimStringDesc*) &TMP869))) goto LA8;
				nimln(38, "condsyms.nim");
				result = addInt(result, 1);
			}
			LA8: ;
		}
		LA4: ;
		nimln(1284, "system.nim");
		res_135063 = addInt(res_135063, 1);
	} LA1: ;
	popFrame();
	return result;
}

static N_INLINE(tcell38646*, usrtocell_42043)(void* usr) {
	tcell38646* result;
	nimfr("usrToCell", "gc.nim")
	result = 0;
	nimln(106, "gc.nim");
	nimln(106, "gc.nim");
	nimln(106, "gc.nim");
	result = ((tcell38646*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(tcell38646))))));
	popFrame();
	return result;
}

static N_INLINE(void, rtladdzct_43202)(tcell38646* c) {
	nimfr("rtlAddZCT", "gc.nim")
	nimln(184, "gc.nim");
	addzct_42015(&gch_40642.Zct, c);
	popFrame();
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	nimfr("asgnRefNoCycle", "gc.nim")
	nimln(236, "gc.nim");
	{
		tcell38646* c;
		nimln(684, "system.nim");
		nimln(684, "system.nim");
		if (!!((src == NIM_NIL))) goto LA3;
		nimln(237, "gc.nim");
		c = usrtocell_42043(src);
		nimln(157, "gc.nim");
		(*c).Refcount += 8;
	}
	LA3: ;
	nimln(239, "gc.nim");
	{
		tcell38646* c;
		nimln(684, "system.nim");
		nimln(684, "system.nim");
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		nimln(240, "gc.nim");
		c = usrtocell_42043((*dest));
		nimln(241, "gc.nim");
		{
			nimln(155, "gc.nim");
			(*c).Refcount -= 8;
			nimln(156, "gc.nim");
			if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA11;
			nimln(242, "gc.nim");
			rtladdzct_43202(c);
		}
		LA11: ;
	}
	LA7: ;
	nimln(243, "gc.nim");
	(*dest) = src;
	popFrame();
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) (&(*dest).data[((*dest).Sup.len)- 0])), ((NCSTRING) ((*src).data)), (NI64)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(void, initdefines_135067)(void) {
	NimStringDesc* LOC13;
	NimStringDesc* LOC14;
	NimStringDesc* LOC15;
	nimfr("InitDefines", "condsyms.nim")
	nimln(41, "condsyms.nim");
	asgnRefNoCycle((void**) &gsymbols_135003, nstnewStringTable(((NU8) 2)));
	nimln(42, "condsyms.nim");
	definesymbol_135006(((NimStringDesc*) &TMP871));
	nimln(44, "condsyms.nim");
	definesymbol_135006(((NimStringDesc*) &TMP872));
	nimln(45, "condsyms.nim");
	definesymbol_135006(((NimStringDesc*) &TMP873));
	nimln(46, "condsyms.nim");
	definesymbol_135006(((NimStringDesc*) &TMP874));
	nimln(47, "condsyms.nim");
	definesymbol_135006(((NimStringDesc*) &TMP875));
	nimln(48, "condsyms.nim");
	definesymbol_135006(((NimStringDesc*) &TMP876));
	nimln(49, "condsyms.nim");
	definesymbol_135006(((NimStringDesc*) &TMP877));
	nimln(52, "condsyms.nim");
	switch (targetcpu_126560) {
	case ((NU8) 1):
	{
		nimln(53, "condsyms.nim");
		definesymbol_135006(((NimStringDesc*) &TMP878));
	}
	break;
	case ((NU8) 8):
	{
		nimln(54, "condsyms.nim");
		definesymbol_135006(((NimStringDesc*) &TMP879));
	}
	break;
	case ((NU8) 9):
	{
		nimln(55, "condsyms.nim");
		definesymbol_135006(((NimStringDesc*) &TMP880));
	}
	break;
	default:
	{
	}
	break;
	}
	nimln(57, "condsyms.nim");
	switch (targetos_126562) {
	case ((NU8) 1):
	{
		nimln(59, "condsyms.nim");
		definesymbol_135006(((NimStringDesc*) &TMP881));
	}
	break;
	case ((NU8) 2):
	{
		nimln(61, "condsyms.nim");
		definesymbol_135006(((NimStringDesc*) &TMP882));
		nimln(62, "condsyms.nim");
		definesymbol_135006(((NimStringDesc*) &TMP883));
	}
	break;
	case ((NU8) 4):
	case ((NU8) 5):
	case ((NU8) 6):
	case ((NU8) 8):
	case ((NU8) 13):
	case ((NU8) 14):
	case ((NU8) 16):
	case ((NU8) 12):
	case ((NU8) 20):
	{
		nimln(66, "condsyms.nim");
		definesymbol_135006(((NimStringDesc*) &TMP884));
		nimln(67, "condsyms.nim");
		definesymbol_135006(((NimStringDesc*) &TMP885));
	}
	break;
	case ((NU8) 7):
	{
		nimln(69, "condsyms.nim");
		definesymbol_135006(((NimStringDesc*) &TMP886));
		nimln(70, "condsyms.nim");
		definesymbol_135006(((NimStringDesc*) &TMP884));
		nimln(71, "condsyms.nim");
		definesymbol_135006(((NimStringDesc*) &TMP885));
	}
	break;
	case ((NU8) 9):
	case ((NU8) 10):
	case ((NU8) 11):
	{
		nimln(73, "condsyms.nim");
		definesymbol_135006(((NimStringDesc*) &TMP884));
		nimln(74, "condsyms.nim");
		definesymbol_135006(((NimStringDesc*) &TMP887));
		nimln(75, "condsyms.nim");
		definesymbol_135006(((NimStringDesc*) &TMP885));
	}
	break;
	case ((NU8) 18):
	{
		nimln(77, "condsyms.nim");
		definesymbol_135006(((NimStringDesc*) &TMP888));
	}
	break;
	case ((NU8) 19):
	{
		nimln(79, "condsyms.nim");
		definesymbol_135006(((NimStringDesc*) &TMP888));
		nimln(80, "condsyms.nim");
		definesymbol_135006(((NimStringDesc*) &TMP884));
		nimln(81, "condsyms.nim");
		definesymbol_135006(((NimStringDesc*) &TMP885));
	}
	break;
	default:
	{
	}
	break;
	}
	nimln(83, "condsyms.nim");
	nimln(83, "condsyms.nim");
	LOC13 = 0;
	nimln(83, "condsyms.nim");
	if (targetcpu_126560 < 1 || targetcpu_126560 > 14) raiseIndexError();
	LOC14 = 0;
	LOC14 = nimIntToStr(cpu_126459[(targetcpu_126560)- 1].Field4);
	LOC13 = rawNewString(LOC14->Sup.len + 3);
appendString(LOC13, ((NimStringDesc*) &TMP889));
appendString(LOC13, LOC14);
	definesymbol_135006(LOC13);
	nimln(84, "condsyms.nim");
	nimln(84, "condsyms.nim");
	if (targetcpu_126560 < 1 || targetcpu_126560 > 14) raiseIndexError();
	LOC15 = 0;
	LOC15 = nsuNormalize(endiantostr_126454[(cpu_126459[(targetcpu_126560)- 1].Field2)- 0]);
	definesymbol_135006(LOC15);
	nimln(85, "condsyms.nim");
	if (targetcpu_126560 < 1 || targetcpu_126560 > 14) raiseIndexError();
	definesymbol_135006(cpu_126459[(targetcpu_126560)- 1].Field0);
	nimln(86, "condsyms.nim");
	if (targetos_126562 < 1 || targetos_126562 > 23) raiseIndexError();
	definesymbol_135006(os_126059[(targetos_126562)- 1].Field0);
	nimln(87, "condsyms.nim");
	{
		nimln(87, "condsyms.nim");
		if (targetos_126562 < 1 || targetos_126562 > 23) raiseIndexError();
		if (!((os_126059[(targetos_126562)- 1].Field12 &(1<<((((NU8) 3))&7)))!=0)) goto LA18;
		nimln(88, "condsyms.nim");
		definesymbol_135006(((NimStringDesc*) &TMP892));
	}
	LA18: ;
	popFrame();
}
N_NOINLINE(void, condsymsInit)(void) {
	nimfr("condsyms", "condsyms.nim")
	popFrame();
}

N_NOINLINE(void, condsymsDatInit)(void) {
}

