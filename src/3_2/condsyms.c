/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct tstringtable103609 tstringtable103609;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tident130015 tident130015;
typedef struct tidobj130009 tidobj130009;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tkeyvaluepairseq103607 tkeyvaluepairseq103607;
typedef struct TY81915 TY81915;
typedef struct tcell38849 tcell38849;
typedef struct tcellseq38865 tcellseq38865;
typedef struct tgcheap40816 tgcheap40816;
typedef struct tcellset38861 tcellset38861;
typedef struct tpagedesc38857 tpagedesc38857;
typedef struct tmemregion22410 tmemregion22410;
typedef struct tsmallchunk21643 tsmallchunk21643;
typedef struct tllchunk22404 tllchunk22404;
typedef struct tbigchunk21645 tbigchunk21645;
typedef struct tintset21618 tintset21618;
typedef struct ttrunk21614 ttrunk21614;
typedef struct tavlnode22408 tavlnode22408;
typedef struct tgcstat40814 tgcstat40814;
typedef struct tinfocpu122445 tinfocpu122445;
typedef struct tinfoos122040 tinfoos122040;
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
struct tidobj130009 {
  TNimObject Sup;
NI Id;
};
struct tident130015 {
  tidobj130009 Sup;
NimStringDesc* S;
tident130015* Next;
NI H;
};
struct TY81915 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
struct tstringtable103609 {
  TNimObject Sup;
NI Counter;
tkeyvaluepairseq103607* Data;
NU8 Mode;
};
struct tcell38849 {
NI Refcount;
TNimType* Typ;
};
struct tcellseq38865 {
NI Len;
NI Cap;
tcell38849** D;
};
struct tcellset38861 {
NI Counter;
NI Max;
tpagedesc38857* Head;
tpagedesc38857** Data;
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
tcellseq38865 Zct;
tcellseq38865 Decstack;
tcellset38861 Cycleroots;
tcellseq38865 Tempstack;
NI Recgclock;
tmemregion22410 Region;
tgcstat40814 Stat;
};
struct tinfocpu122445 {
NimStringDesc* Field0;
NI Field1;
NU8 Field2;
NI Field3;
NI Field4;
};
typedef tinfocpu122445 TY122460[14];
typedef NimStringDesc* TY122455[2];
struct tinfoos122040 {
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
typedef tinfoos122040 TY122060[23];
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef NI TY21621[8];
struct tpagedesc38857 {
tpagedesc38857* Next;
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
struct tkeyvaluepairseq103607 {
  TGenericSeq Sup;
  TY81915 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, definesymbol_131006)(NimStringDesc* symbol);
N_NIMCALL(void, nstPut)(tstringtable103609* t, NimStringDesc* key, NimStringDesc* val);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(void, undefsymbol_131011)(NimStringDesc* symbol);
N_NIMCALL(NIM_BOOL, isdefined_131016)(NimStringDesc* symbol);
N_NIMCALL(NIM_BOOL, nsthasKey)(tstringtable103609* t, NimStringDesc* key);
N_NIMCALL(NimStringDesc*, nstGet)(tstringtable103609* t, NimStringDesc* key);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NIM_BOOL, isdefined_131022)(tident130015* symbol);
N_NIMCALL(NI, countdefinedsymbols_131041)(void);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(void, initdefines_131067)(void);
N_NIMCALL(tstringtable103609*, nstnewStringTable)(NU8 mode);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell38849*, usrtocell_42243)(void* usr);
static N_INLINE(void, rtladdzct_43402)(tcell38849* c);
N_NOINLINE(void, addzct_42215)(tcellseq38865* s, tcell38849* c);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, nsuNormalize)(NimStringDesc* s);
STRING_LITERAL(TMP853, "true", 4);
STRING_LITERAL(TMP854, "false", 5);
STRING_LITERAL(TMP855, "nimrod", 6);
STRING_LITERAL(TMP856, "nimhygiene", 10);
STRING_LITERAL(TMP857, "niminheritable", 14);
STRING_LITERAL(TMP858, "nimmixin", 8);
STRING_LITERAL(TMP859, "nimeffects", 10);
STRING_LITERAL(TMP860, "nimbabel", 8);
STRING_LITERAL(TMP861, "nimsuperops", 11);
STRING_LITERAL(TMP862, "x86", 3);
STRING_LITERAL(TMP863, "itanium", 7);
STRING_LITERAL(TMP864, "x8664", 5);
STRING_LITERAL(TMP865, "msdos", 5);
STRING_LITERAL(TMP866, "mswindows", 9);
STRING_LITERAL(TMP867, "win32", 5);
STRING_LITERAL(TMP868, "unix", 4);
STRING_LITERAL(TMP869, "posix", 5);
STRING_LITERAL(TMP870, "sunos", 5);
STRING_LITERAL(TMP871, "bsd", 3);
STRING_LITERAL(TMP872, "macintosh", 9);
STRING_LITERAL(TMP873, "cpu", 3);
extern NIM_CONST TY122460 cpu_122459;
extern NIM_CONST TY122455 endiantostr_122454;
extern NIM_CONST TY122060 os_122059;
STRING_LITERAL(TMP876, "emulatedthreadvars", 18);
tstringtable103609* gsymbols_131003;
extern TFrame* frameptr_12027;
extern tgcheap40816 gch_40842;
extern NU8 targetcpu_122560;
extern NU8 targetos_122562;

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_12027;
	frameptr_12027 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_12027 = (*frameptr_12027).prev;
}

N_NIMCALL(void, definesymbol_131006)(NimStringDesc* symbol) {
	nimfr("DefineSymbol", "condsyms.nim")
	nimln(20, "condsyms.nim");
	nstPut(gsymbols_131003, symbol, ((NimStringDesc*) &TMP853));
	popFrame();
}

N_NIMCALL(void, undefsymbol_131011)(NimStringDesc* symbol) {
	nimfr("UndefSymbol", "condsyms.nim")
	nimln(23, "condsyms.nim");
	nstPut(gsymbols_131003, symbol, ((NimStringDesc*) &TMP854));
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

N_NIMCALL(NIM_BOOL, isdefined_131016)(NimStringDesc* symbol) {
	NIM_BOOL result;
	nimfr("isDefined", "condsyms.nim")
	result = 0;
	nimln(26, "condsyms.nim");
	{
		NIM_BOOL LOC3;
		NimStringDesc* LOC6;
		nimln(26, "condsyms.nim");
		LOC3 = nsthasKey(gsymbols_131003, symbol);
		if (!LOC3) goto LA4;
		nimln(27, "condsyms.nim");
		nimln(27, "condsyms.nim");
		nimln(27, "condsyms.nim");
		LOC6 = 0;
		LOC6 = nstGet(gsymbols_131003, symbol);
		result = eqStrings(LOC6, ((NimStringDesc*) &TMP853));
	}
	LA4: ;
	popFrame();
	return result;
}

N_NIMCALL(NIM_BOOL, isdefined_131022)(tident130015* symbol) {
	NIM_BOOL result;
	nimfr("isDefined", "condsyms.nim")
	result = 0;
	nimln(29, "condsyms.nim");
	result = isdefined_131016((*symbol).S);
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

N_NIMCALL(NI, countdefinedsymbols_131041)(void) {
	NI result;
	NimStringDesc* key_131044;
	NimStringDesc* val_131045;
	NI h_131059;
	NI HEX3Atmp_131061;
	NI res_131063;
	nimfr("countDefinedSymbols", "condsyms.nim")
	result = 0;
	nimln(36, "condsyms.nim");
	result = 0;
	key_131044 = 0;
	val_131045 = 0;
	h_131059 = 0;
	HEX3Atmp_131061 = 0;
	nimln(40, "strtabs.nim");
	nimln(40, "strtabs.nim");
	HEX3Atmp_131061 = ((*gsymbols_131003).Data->Sup.len-1);
	nimln(1281, "system.nim");
	res_131063 = 0;
	nimln(1282, "system.nim");
	while (1) {
		nimln(1282, "system.nim");
		if (!(res_131063 <= HEX3Atmp_131061)) goto LA1;
		nimln(1281, "system.nim");
		h_131059 = res_131063;
		nimln(41, "strtabs.nim");
		{
			nimln(41, "strtabs.nim");
			nimln(41, "strtabs.nim");
			if ((NU)(h_131059) >= (NU)((*gsymbols_131003).Data->Sup.len)) raiseIndexError();
			if (!!((*gsymbols_131003).Data->data[h_131059].Field0 == 0)) goto LA4;
			nimln(42, "strtabs.nim");
			if ((NU)(h_131059) >= (NU)((*gsymbols_131003).Data->Sup.len)) raiseIndexError();
			key_131044 = (*gsymbols_131003).Data->data[h_131059].Field0;
			nimln(42, "strtabs.nim");
			if ((NU)(h_131059) >= (NU)((*gsymbols_131003).Data->Sup.len)) raiseIndexError();
			val_131045 = (*gsymbols_131003).Data->data[h_131059].Field1;
			nimln(38, "condsyms.nim");
			{
				nimln(38, "condsyms.nim");
				if (!eqStrings(val_131045, ((NimStringDesc*) &TMP853))) goto LA8;
				nimln(38, "condsyms.nim");
				result = addInt(result, 1);
			}
			LA8: ;
		}
		LA4: ;
		nimln(1284, "system.nim");
		res_131063 = addInt(res_131063, 1);
	} LA1: ;
	popFrame();
	return result;
}

static N_INLINE(tcell38849*, usrtocell_42243)(void* usr) {
	tcell38849* result;
	nimfr("usrToCell", "gc.nim")
	result = 0;
	nimln(106, "gc.nim");
	nimln(106, "gc.nim");
	nimln(106, "gc.nim");
	result = ((tcell38849*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(tcell38849))))));
	popFrame();
	return result;
}

static N_INLINE(void, rtladdzct_43402)(tcell38849* c) {
	nimfr("rtlAddZCT", "gc.nim")
	nimln(184, "gc.nim");
	addzct_42215(&gch_40842.Zct, c);
	popFrame();
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	nimfr("asgnRefNoCycle", "gc.nim")
	nimln(236, "gc.nim");
	{
		tcell38849* c;
		nimln(684, "system.nim");
		nimln(684, "system.nim");
		if (!!((src == NIM_NIL))) goto LA3;
		nimln(237, "gc.nim");
		c = usrtocell_42243(src);
		nimln(157, "gc.nim");
		(*c).Refcount += 8;
	}
	LA3: ;
	nimln(239, "gc.nim");
	{
		tcell38849* c;
		nimln(684, "system.nim");
		nimln(684, "system.nim");
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		nimln(240, "gc.nim");
		c = usrtocell_42243((*dest));
		nimln(241, "gc.nim");
		{
			nimln(155, "gc.nim");
			(*c).Refcount -= 8;
			nimln(156, "gc.nim");
			if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA11;
			nimln(242, "gc.nim");
			rtladdzct_43402(c);
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

N_NIMCALL(void, initdefines_131067)(void) {
	NimStringDesc* LOC13;
	NimStringDesc* LOC14;
	NimStringDesc* LOC15;
	nimfr("InitDefines", "condsyms.nim")
	nimln(41, "condsyms.nim");
	asgnRefNoCycle((void**) &gsymbols_131003, nstnewStringTable(((NU8) 2)));
	nimln(42, "condsyms.nim");
	definesymbol_131006(((NimStringDesc*) &TMP855));
	nimln(44, "condsyms.nim");
	definesymbol_131006(((NimStringDesc*) &TMP856));
	nimln(45, "condsyms.nim");
	definesymbol_131006(((NimStringDesc*) &TMP857));
	nimln(46, "condsyms.nim");
	definesymbol_131006(((NimStringDesc*) &TMP858));
	nimln(47, "condsyms.nim");
	definesymbol_131006(((NimStringDesc*) &TMP859));
	nimln(48, "condsyms.nim");
	definesymbol_131006(((NimStringDesc*) &TMP860));
	nimln(49, "condsyms.nim");
	definesymbol_131006(((NimStringDesc*) &TMP861));
	nimln(52, "condsyms.nim");
	switch (targetcpu_122560) {
	case ((NU8) 1):
	{
		nimln(53, "condsyms.nim");
		definesymbol_131006(((NimStringDesc*) &TMP862));
	}
	break;
	case ((NU8) 8):
	{
		nimln(54, "condsyms.nim");
		definesymbol_131006(((NimStringDesc*) &TMP863));
	}
	break;
	case ((NU8) 9):
	{
		nimln(55, "condsyms.nim");
		definesymbol_131006(((NimStringDesc*) &TMP864));
	}
	break;
	default:
	{
	}
	break;
	}
	nimln(57, "condsyms.nim");
	switch (targetos_122562) {
	case ((NU8) 1):
	{
		nimln(59, "condsyms.nim");
		definesymbol_131006(((NimStringDesc*) &TMP865));
	}
	break;
	case ((NU8) 2):
	{
		nimln(61, "condsyms.nim");
		definesymbol_131006(((NimStringDesc*) &TMP866));
		nimln(62, "condsyms.nim");
		definesymbol_131006(((NimStringDesc*) &TMP867));
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
		definesymbol_131006(((NimStringDesc*) &TMP868));
		nimln(67, "condsyms.nim");
		definesymbol_131006(((NimStringDesc*) &TMP869));
	}
	break;
	case ((NU8) 7):
	{
		nimln(69, "condsyms.nim");
		definesymbol_131006(((NimStringDesc*) &TMP870));
		nimln(70, "condsyms.nim");
		definesymbol_131006(((NimStringDesc*) &TMP868));
		nimln(71, "condsyms.nim");
		definesymbol_131006(((NimStringDesc*) &TMP869));
	}
	break;
	case ((NU8) 9):
	case ((NU8) 10):
	case ((NU8) 11):
	{
		nimln(73, "condsyms.nim");
		definesymbol_131006(((NimStringDesc*) &TMP868));
		nimln(74, "condsyms.nim");
		definesymbol_131006(((NimStringDesc*) &TMP871));
		nimln(75, "condsyms.nim");
		definesymbol_131006(((NimStringDesc*) &TMP869));
	}
	break;
	case ((NU8) 18):
	{
		nimln(77, "condsyms.nim");
		definesymbol_131006(((NimStringDesc*) &TMP872));
	}
	break;
	case ((NU8) 19):
	{
		nimln(79, "condsyms.nim");
		definesymbol_131006(((NimStringDesc*) &TMP872));
		nimln(80, "condsyms.nim");
		definesymbol_131006(((NimStringDesc*) &TMP868));
		nimln(81, "condsyms.nim");
		definesymbol_131006(((NimStringDesc*) &TMP869));
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
	if (targetcpu_122560 < 1 || targetcpu_122560 > 14) raiseIndexError();
	LOC14 = 0;
	LOC14 = nimIntToStr(cpu_122459[(targetcpu_122560)- 1].Field4);
	LOC13 = rawNewString(LOC14->Sup.len + 3);
appendString(LOC13, ((NimStringDesc*) &TMP873));
appendString(LOC13, LOC14);
	definesymbol_131006(LOC13);
	nimln(84, "condsyms.nim");
	nimln(84, "condsyms.nim");
	if (targetcpu_122560 < 1 || targetcpu_122560 > 14) raiseIndexError();
	LOC15 = 0;
	LOC15 = nsuNormalize(endiantostr_122454[(cpu_122459[(targetcpu_122560)- 1].Field2)- 0]);
	definesymbol_131006(LOC15);
	nimln(85, "condsyms.nim");
	if (targetcpu_122560 < 1 || targetcpu_122560 > 14) raiseIndexError();
	definesymbol_131006(cpu_122459[(targetcpu_122560)- 1].Field0);
	nimln(86, "condsyms.nim");
	if (targetos_122562 < 1 || targetos_122562 > 23) raiseIndexError();
	definesymbol_131006(os_122059[(targetos_122562)- 1].Field0);
	nimln(87, "condsyms.nim");
	{
		nimln(87, "condsyms.nim");
		if (targetos_122562 < 1 || targetos_122562 > 23) raiseIndexError();
		if (!((os_122059[(targetos_122562)- 1].Field12 &(1<<((((NU8) 3))&7)))!=0)) goto LA18;
		nimln(88, "condsyms.nim");
		definesymbol_131006(((NimStringDesc*) &TMP876));
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

