/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct ttrunk170037 ttrunk170037;
typedef struct tintset170041 tintset170041;
typedef struct ttrunkseq170039 ttrunkseq170039;
typedef struct tcell38646 tcell38646;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tcellset38658 tcellset38658;
typedef struct tgcheap40616 tgcheap40616;
typedef struct tcellseq38662 tcellseq38662;
typedef struct tpagedesc38654 tpagedesc38654;
typedef struct tmemregion22210 tmemregion22210;
typedef struct tsmallchunk21443 tsmallchunk21443;
typedef struct tllchunk22204 tllchunk22204;
typedef struct tbigchunk21445 tbigchunk21445;
typedef struct tintset21418 tintset21418;
typedef struct ttrunk21414 ttrunk21414;
typedef struct tavlnode22208 tavlnode22208;
typedef struct tgcstat40614 tgcstat40614;
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
struct tintset170041 {
NI Counter;
NI Max;
ttrunk170037* Head;
ttrunkseq170039* Data;
};
typedef NI TY21421[8];
struct ttrunk170037 {
ttrunk170037* Next;
NI Key;
TY21421 Bits;
};
struct tcell38646 {
NI Refcount;
TNimType* Typ;
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
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
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
struct ttrunkseq170039 {
  TGenericSeq Sup;
  ttrunk170037* data[SEQ_DECL_SIZE];
};
static N_INLINE(NIM_BOOL, mustrehash_170052)(NI length, NI counter);
N_NIMCALL(void, hiddenraiseassert_72820)(NimStringDesc* msg);
N_NIMCALL(NI, mulInt)(NI a, NI b);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NI, nexttry_170207)(NI h, NI maxhash);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(ttrunk170037*, intsetget_170214)(tintset170041* t, NI key);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(void, intsetrawinsert_170234)(tintset170041* t, ttrunkseq170039** data, ttrunk170037* desc);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_44024)(tcell38646* c);
static N_INLINE(NIM_BOOL, canbecycleroot_42065)(tcell38646* c);
static N_INLINE(void, rtladdcycleroot_42636)(tcell38646* c);
N_NOINLINE(void, incl_39456)(tcellset38658* s, tcell38646* cell);
static N_INLINE(tcell38646*, usrtocell_42043)(void* usr);
static N_INLINE(void, decref_43602)(tcell38646* c);
static N_INLINE(void, rtladdzct_43202)(tcell38646* c);
N_NOINLINE(void, addzct_42015)(tcellseq38662* s, tcell38646* c);
N_NIMCALL(void, intsetenlarge_170604)(tintset170041* t);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP1865)(void* p, NI op);
N_NIMCALL(void, TMP1866)(void* p, NI op);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(ttrunk170037*, intsetput_170659)(tintset170041* t, NI key);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NIM_BOOL, contains_170820)(tintset170041* s, NI key);
N_NIMCALL(void, incl_170842)(tintset170041* s, NI key);
N_NIMCALL(void, excl_170853)(tintset170041* s, NI key);
N_NIMCALL(NIM_BOOL, containsorincl_170875)(tintset170041* s, NI key);
N_NIMCALL(void, initintset_170899)(tintset170041* Result);
N_NIMCALL(void, assign_170916)(tintset170041* dest, tintset170041* src);
N_NIMCALL(NimStringDesc*, HEX24_171086)(tintset170041* s);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x);
static N_INLINE(NIM_BOOL, empty_171107)(tintset170041* s);
STRING_LITERAL(TMP1852, "counter < length ", 17);
STRING_LITERAL(TMP1858, "not data[h] == desc ", 20);
STRING_LITERAL(TMP1859, "data[h] == nil ", 15);
STRING_LITERAL(TMP1868, "t.data[h] == nil ", 17);
STRING_LITERAL(TMP1869, "dest.data[h] == nil ", 20);
STRING_LITERAL(TMP1870, "{", 1);
STRING_LITERAL(TMP1871, ", ", 2);
STRING_LITERAL(TMP1872, "}", 1);
extern TFrame* frameptr_12027;
extern tgcheap40616 gch_40642;
TNimType NTI170037; /* TTrunk */
extern TNimType NTI105; /* int */
extern TNimType NTI21421; /* array[0..7, int] */
TNimType NTI170035; /* PTrunk */
TNimType NTI170039; /* TTrunkSeq */
TNimType NTI170041; /* TIntSet */

static N_INLINE(NI, subInt)(NI a, NI b) {
	NI result;
	result = 0;
	result = (NI)((NU64)(a) - (NU64)(b));
	{
		NIM_BOOL LOC3;
		LOC3 = (0 <= (NI)(result ^ a));
		if (LOC3) goto LA4;
		LOC3 = (0 <= (NI)(result ^ (NI)((NU64) ~(b))));
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

static N_INLINE(NIM_BOOL, mustrehash_170052)(NI length, NI counter) {
	NIM_BOOL result;
	NIM_BOOL LOC5;
	NI TMP1853;
	NI TMP1854;
	NI TMP1855;
	nimfr("mustRehash", "intsets.nim")
	result = 0;
	nimln(47, "intsets.nim");
	{
		nimln(47, "intsets.nim");
		nimln(47, "intsets.nim");
		if (!!((counter < length))) goto LA3;
		nimln(47, "intsets.nim");
		hiddenraiseassert_72820(((NimStringDesc*) &TMP1852));
	}
	LA3: ;
	nimln(48, "intsets.nim");
	nimln(48, "intsets.nim");
	nimln(48, "intsets.nim");
	nimln(48, "intsets.nim");
	TMP1853 = mulInt(length, 2);
	nimln(48, "intsets.nim");
	TMP1854 = mulInt(counter, 3);
	LOC5 = ((NI64)(TMP1853) < (NI64)(TMP1854));
	if (LOC5) goto LA6;
	nimln(48, "intsets.nim");
	nimln(48, "intsets.nim");
	TMP1855 = subInt(length, counter);
	LOC5 = ((NI64)(TMP1855) < 4);
	LA6: ;
	result = LOC5;
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

static N_INLINE(NI, nexttry_170207)(NI h, NI maxhash) {
	NI result;
	NI TMP1856;
	NI TMP1857;
	nimfr("nextTry", "intsets.nim")
	result = 0;
	nimln(51, "intsets.nim");
	nimln(51, "intsets.nim");
	nimln(51, "intsets.nim");
	nimln(51, "intsets.nim");
	TMP1856 = mulInt(5, h);
	TMP1857 = addInt((NI64)(TMP1856), 1);
	result = (NI)((NI64)(TMP1857) & maxhash);
	popFrame();
	return result;
}

N_NIMCALL(ttrunk170037*, intsetget_170214)(tintset170041* t, NI key) {
	ttrunk170037* result;
	NI h;
	nimfr("IntSetGet", "intsets.nim")
	result = 0;
	nimln(54, "intsets.nim");
	nimln(54, "intsets.nim");
	h = (NI)(key & (*t).Max);
	nimln(55, "intsets.nim");
	while (1) {
		nimln(684, "system.nim");
		nimln(684, "system.nim");
		if ((NU)(h) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
		if (!!(((*t).Data->data[h] == NIM_NIL))) goto LA1;
		nimln(56, "intsets.nim");
		{
			nimln(56, "intsets.nim");
			if ((NU)(h) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
			if (!((*(*t).Data->data[h]).Key == key)) goto LA4;
			nimln(57, "intsets.nim");
			nimln(57, "intsets.nim");
			if ((NU)(h) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
			result = (*t).Data->data[h];
			goto BeforeRet;
		}
		LA4: ;
		nimln(58, "intsets.nim");
		h = nexttry_170207(h, (*t).Max);
	} LA1: ;
	nimln(59, "intsets.nim");
	result = NIM_NIL;
	BeforeRet: ;
	popFrame();
	return result;
}

static N_INLINE(NIM_BOOL, canbecycleroot_42065)(tcell38646* c) {
	NIM_BOOL result;
	nimfr("canbeCycleRoot", "gc.nim")
	result = 0;
	nimln(109, "gc.nim");
	nimln(717, "system.nim");
	nimln(717, "system.nim");
	result = !((((*(*c).Typ).flags &(1<<((((NU8) 1))&7)))!=0));
	popFrame();
	return result;
}

static N_INLINE(void, rtladdcycleroot_42636)(tcell38646* c) {
	nimfr("rtlAddCycleRoot", "gc.nim")
	nimln(174, "gc.nim");
	{
		nimln(684, "system.nim");
		nimln(684, "system.nim");
		nimln(122, "gc.nim");
		if (!!((((NI) ((NI)((*c).Refcount & 3))) == 3))) goto LA3;
		nimln(127, "gc.nim");
		nimln(127, "gc.nim");
		nimln(127, "gc.nim");
		(*c).Refcount = (NI)((NI)((*c).Refcount & -4) | 3);
		nimln(176, "gc.nim");
		incl_39456(&gch_40642.Cycleroots, c);
	}
	LA3: ;
	popFrame();
}

static N_INLINE(void, incref_44024)(tcell38646* c) {
	nimfr("incRef", "gc.nim")
	nimln(201, "gc.nim");
	nimln(201, "gc.nim");
	(*c).Refcount = (NI)((NU64)((*c).Refcount) + (NU64)(8));
	nimln(204, "gc.nim");
	{
		NIM_BOOL LOC3;
		nimln(204, "gc.nim");
		LOC3 = canbecycleroot_42065(c);
		if (!LOC3) goto LA4;
		nimln(205, "gc.nim");
		rtladdcycleroot_42636(c);
	}
	LA4: ;
	popFrame();
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

static N_INLINE(void, decref_43602)(tcell38646* c) {
	nimfr("decRef", "gc.nim")
	nimln(191, "gc.nim");
	{
		nimln(155, "gc.nim");
		(*c).Refcount -= 8;
		nimln(156, "gc.nim");
		if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA3;
		nimln(192, "gc.nim");
		rtladdzct_43202(c);
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		nimln(193, "gc.nim");
		LOC6 = canbecycleroot_42065(c);
		if (!LOC6) goto LA7;
		nimln(196, "gc.nim");
		rtladdcycleroot_42636(c);
	}
	goto LA1;
	LA7: ;
	LA1: ;
	popFrame();
}

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	nimfr("asgnRef", "gc.nim")
	nimln(229, "gc.nim");
	{
		tcell38646* LOC5;
		nimln(684, "system.nim");
		nimln(684, "system.nim");
		if (!!((src == NIM_NIL))) goto LA3;
		nimln(229, "gc.nim");
		nimln(229, "gc.nim");
		LOC5 = usrtocell_42043(src);
		incref_44024(LOC5);
	}
	LA3: ;
	nimln(230, "gc.nim");
	{
		tcell38646* LOC10;
		nimln(684, "system.nim");
		nimln(684, "system.nim");
		if (!!(((*dest) == NIM_NIL))) goto LA8;
		nimln(230, "gc.nim");
		nimln(230, "gc.nim");
		LOC10 = usrtocell_42043((*dest));
		decref_43602(LOC10);
	}
	LA8: ;
	nimln(231, "gc.nim");
	(*dest) = src;
	popFrame();
}

N_NIMCALL(void, intsetrawinsert_170234)(tintset170041* t, ttrunkseq170039** data, ttrunk170037* desc) {
	NI h;
	nimfr("IntSetRawInsert", "intsets.nim")
	nimln(62, "intsets.nim");
	nimln(62, "intsets.nim");
	h = (NI)((*desc).Key & (*t).Max);
	nimln(63, "intsets.nim");
	while (1) {
		nimln(684, "system.nim");
		nimln(684, "system.nim");
		if ((NU)(h) >= (NU)((*data)->Sup.len)) raiseIndexError();
		if (!!(((*data)->data[h] == NIM_NIL))) goto LA1;
		nimln(64, "intsets.nim");
		{
			nimln(64, "intsets.nim");
			nimln(64, "intsets.nim");
			nimln(64, "intsets.nim");
			if ((NU)(h) >= (NU)((*data)->Sup.len)) raiseIndexError();
			if (!!(!(((*data)->data[h] == desc)))) goto LA4;
			nimln(64, "intsets.nim");
			hiddenraiseassert_72820(((NimStringDesc*) &TMP1858));
		}
		LA4: ;
		nimln(65, "intsets.nim");
		h = nexttry_170207(h, (*t).Max);
	} LA1: ;
	nimln(66, "intsets.nim");
	{
		nimln(66, "intsets.nim");
		nimln(66, "intsets.nim");
		if ((NU)(h) >= (NU)((*data)->Sup.len)) raiseIndexError();
		if (!!(((*data)->data[h] == NIM_NIL))) goto LA8;
		nimln(66, "intsets.nim");
		hiddenraiseassert_72820(((NimStringDesc*) &TMP1859));
	}
	LA8: ;
	nimln(67, "intsets.nim");
	if ((NU)(h) >= (NU)((*data)->Sup.len)) raiseIndexError();
	asgnRef((void**) &(*data)->data[h], desc);
	popFrame();
}
N_NIMCALL(void, TMP1865)(void* p, NI op) {
	ttrunk170037* a;
	NI LOC1;
	a = (ttrunk170037*)p;
	nimGCvisit((void*)(*a).Next, op);
	for (LOC1 = 0; LOC1 < 8; LOC1++) {
	}
}
N_NIMCALL(void, TMP1866)(void* p, NI op) {
	ttrunkseq170039* a;
	NI LOC1;
	a = (ttrunkseq170039*)p;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1], op);
	}
}

N_NIMCALL(void, intsetenlarge_170604)(tintset170041* t) {
	ttrunkseq170039* n;
	NI oldmax;
	NI TMP1860;
	NI TMP1861;
	NI TMP1862;
	NI TMP1863;
	NI i_170630;
	NI res_170654;
	ttrunkseq170039* LOC6;
	nimfr("IntSetEnlarge", "intsets.nim")
	n = 0;
	nimln(71, "intsets.nim");
	oldmax = (*t).Max;
	nimln(72, "intsets.nim");
	nimln(72, "intsets.nim");
	nimln(72, "intsets.nim");
	nimln(72, "intsets.nim");
	TMP1860 = addInt((*t).Max, 1);
	TMP1861 = mulInt((NI64)(TMP1860), 2);
	TMP1862 = subInt((NI64)(TMP1861), 1);
	(*t).Max = (NI64)(TMP1862);
	nimln(73, "intsets.nim");
	nimln(73, "intsets.nim");
	TMP1863 = addInt((*t).Max, 1);
	n = (ttrunkseq170039*) newSeq((&NTI170039), (NI64)(TMP1863));
	i_170630 = 0;
	nimln(1274, "system.nim");
	res_170654 = 0;
	nimln(1275, "system.nim");
	while (1) {
		nimln(1275, "system.nim");
		if (!(res_170654 <= oldmax)) goto LA1;
		nimln(1274, "system.nim");
		i_170630 = res_170654;
		nimln(75, "intsets.nim");
		{
			nimln(684, "system.nim");
			nimln(684, "system.nim");
			if ((NU)(i_170630) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
			if (!!(((*t).Data->data[i_170630] == NIM_NIL))) goto LA4;
			nimln(75, "intsets.nim");
			if ((NU)(i_170630) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
			intsetrawinsert_170234(&(*t), &n, (*t).Data->data[i_170630]);
		}
		LA4: ;
		nimln(1277, "system.nim");
		res_170654 = addInt(res_170654, 1);
	} LA1: ;
	nimln(76, "intsets.nim");
	LOC6 = 0;
	LOC6 = (*t).Data;
	unsureAsgnRef((void**) &(*t).Data, n);
	n = LOC6;
	popFrame();
}

N_NIMCALL(ttrunk170037*, intsetput_170659)(tintset170041* t, NI key) {
	ttrunk170037* result;
	NI h;
	nimfr("IntSetPut", "intsets.nim")
	result = 0;
	nimln(79, "intsets.nim");
	nimln(79, "intsets.nim");
	h = (NI)(key & (*t).Max);
	nimln(80, "intsets.nim");
	while (1) {
		nimln(684, "system.nim");
		nimln(684, "system.nim");
		if ((NU)(h) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
		if (!!(((*t).Data->data[h] == NIM_NIL))) goto LA1;
		nimln(81, "intsets.nim");
		{
			nimln(81, "intsets.nim");
			if ((NU)(h) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
			if (!((*(*t).Data->data[h]).Key == key)) goto LA4;
			nimln(82, "intsets.nim");
			nimln(82, "intsets.nim");
			if ((NU)(h) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
			result = (*t).Data->data[h];
			goto BeforeRet;
		}
		LA4: ;
		nimln(83, "intsets.nim");
		h = nexttry_170207(h, (*t).Max);
	} LA1: ;
	nimln(84, "intsets.nim");
	{
		NI TMP1867;
		NIM_BOOL LOC8;
		nimln(84, "intsets.nim");
		nimln(84, "intsets.nim");
		TMP1867 = addInt((*t).Max, 1);
		LOC8 = mustrehash_170052((NI64)(TMP1867), (*t).Counter);
		if (!LOC8) goto LA9;
		nimln(84, "intsets.nim");
		intsetenlarge_170604(t);
	}
	LA9: ;
	nimln(85, "intsets.nim");
	(*t).Counter = addInt((*t).Counter, 1);
	nimln(86, "intsets.nim");
	nimln(86, "intsets.nim");
	h = (NI)(key & (*t).Max);
	nimln(87, "intsets.nim");
	while (1) {
		nimln(684, "system.nim");
		nimln(684, "system.nim");
		if ((NU)(h) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
		if (!!(((*t).Data->data[h] == NIM_NIL))) goto LA11;
		nimln(87, "intsets.nim");
		h = nexttry_170207(h, (*t).Max);
	} LA11: ;
	nimln(88, "intsets.nim");
	{
		nimln(88, "intsets.nim");
		nimln(88, "intsets.nim");
		if ((NU)(h) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
		if (!!(((*t).Data->data[h] == NIM_NIL))) goto LA14;
		nimln(88, "intsets.nim");
		hiddenraiseassert_72820(((NimStringDesc*) &TMP1868));
	}
	LA14: ;
	nimln(89, "intsets.nim");
	result = (ttrunk170037*) newObj((&NTI170035), sizeof(ttrunk170037));
	nimln(90, "intsets.nim");
	asgnRef((void**) &(*result).Next, (*t).Head);
	nimln(91, "intsets.nim");
	(*result).Key = key;
	nimln(92, "intsets.nim");
	unsureAsgnRef((void**) &(*t).Head, result);
	nimln(93, "intsets.nim");
	if ((NU)(h) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
	asgnRef((void**) &(*t).Data->data[h], result);
	BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(NIM_BOOL, contains_170820)(tintset170041* s, NI key) {
	NIM_BOOL result;
	ttrunk170037* t;
	nimfr("contains", "intsets.nim")
	result = 0;
	nimln(97, "intsets.nim");
	nimln(97, "intsets.nim");
	t = intsetget_170214(s, (NI)((NU64)(key) >> (NU64)(9)));
	nimln(98, "intsets.nim");
	{
		NI u;
		nimln(684, "system.nim");
		nimln(684, "system.nim");
		if (!!((t == NIM_NIL))) goto LA3;
		nimln(99, "intsets.nim");
		nimln(99, "intsets.nim");
		u = (NI)(key & 511);
		nimln(100, "intsets.nim");
		nimln(684, "system.nim");
		nimln(684, "system.nim");
		nimln(100, "intsets.nim");
		nimln(100, "intsets.nim");
		if ((NU)((NI)((NU64)(((NI) (u))) >> (NU64)(6))) > (NU)(7)) raiseIndexError();
		nimln(100, "intsets.nim");
		nimln(100, "intsets.nim");
		result = !(((NI)((*t).Bits[((NI)((NU64)(((NI) (u))) >> (NU64)(6)))- 0] & (NI)((NU64)(1) << (NU64)(((NI) ((NI)(((NI) (u)) & 63)))))) == 0));
	}
	goto LA1;
	LA3: ;
	{
		nimln(102, "intsets.nim");
		result = NIM_FALSE;
	}
	LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(void, incl_170842)(tintset170041* s, NI key) {
	ttrunk170037* t;
	NI u;
	nimfr("incl", "intsets.nim")
	nimln(106, "intsets.nim");
	nimln(106, "intsets.nim");
	t = intsetput_170659(s, (NI)((NU64)(key) >> (NU64)(9)));
	nimln(107, "intsets.nim");
	nimln(107, "intsets.nim");
	u = (NI)(key & 511);
	nimln(108, "intsets.nim");
	nimln(108, "intsets.nim");
	if ((NU)((NI)((NU64)(((NI) (u))) >> (NU64)(6))) > (NU)(7)) raiseIndexError();
	nimln(108, "intsets.nim");
	nimln(108, "intsets.nim");
	if ((NU)((NI)((NU64)(((NI) (u))) >> (NU64)(6))) > (NU)(7)) raiseIndexError();
	nimln(109, "intsets.nim");
	nimln(109, "intsets.nim");
	(*t).Bits[((NI)((NU64)(((NI) (u))) >> (NU64)(6)))- 0] = (NI)((*t).Bits[((NI)((NU64)(((NI) (u))) >> (NU64)(6)))- 0] | (NI)((NU64)(1) << (NU64)(((NI) ((NI)(((NI) (u)) & 63))))));
	popFrame();
}

N_NIMCALL(void, excl_170853)(tintset170041* s, NI key) {
	ttrunk170037* t;
	nimfr("excl", "intsets.nim")
	nimln(113, "intsets.nim");
	nimln(113, "intsets.nim");
	t = intsetget_170214(&(*s), (NI)((NU64)(key) >> (NU64)(9)));
	nimln(114, "intsets.nim");
	{
		NI u;
		nimln(684, "system.nim");
		nimln(684, "system.nim");
		if (!!((t == NIM_NIL))) goto LA3;
		nimln(115, "intsets.nim");
		nimln(115, "intsets.nim");
		u = (NI)(key & 511);
		nimln(116, "intsets.nim");
		nimln(116, "intsets.nim");
		if ((NU)((NI)((NU64)(((NI) (u))) >> (NU64)(6))) > (NU)(7)) raiseIndexError();
		nimln(116, "intsets.nim");
		nimln(116, "intsets.nim");
		if ((NU)((NI)((NU64)(((NI) (u))) >> (NU64)(6))) > (NU)(7)) raiseIndexError();
		nimln(117, "intsets.nim");
		nimln(117, "intsets.nim");
		nimln(117, "intsets.nim");
		(*t).Bits[((NI)((NU64)(((NI) (u))) >> (NU64)(6)))- 0] = (NI)((*t).Bits[((NI)((NU64)(((NI) (u))) >> (NU64)(6)))- 0] & (NI)((NU64) ~((NI)((NU64)(1) << (NU64)(((NI) ((NI)(((NI) (u)) & 63))))))));
	}
	LA3: ;
	popFrame();
}

N_NIMCALL(NIM_BOOL, containsorincl_170875)(tintset170041* s, NI key) {
	NIM_BOOL result;
	ttrunk170037* t;
	nimfr("containsOrIncl", "intsets.nim")
	result = 0;
	nimln(122, "intsets.nim");
	nimln(122, "intsets.nim");
	t = intsetget_170214(&(*s), (NI)((NU64)(key) >> (NU64)(9)));
	nimln(123, "intsets.nim");
	{
		NI u;
		nimln(684, "system.nim");
		nimln(684, "system.nim");
		if (!!((t == NIM_NIL))) goto LA3;
		nimln(124, "intsets.nim");
		nimln(124, "intsets.nim");
		u = (NI)(key & 511);
		nimln(125, "intsets.nim");
		nimln(684, "system.nim");
		nimln(684, "system.nim");
		nimln(125, "intsets.nim");
		nimln(125, "intsets.nim");
		if ((NU)((NI)((NU64)(((NI) (u))) >> (NU64)(6))) > (NU)(7)) raiseIndexError();
		nimln(125, "intsets.nim");
		nimln(125, "intsets.nim");
		result = !(((NI)((*t).Bits[((NI)((NU64)(((NI) (u))) >> (NU64)(6)))- 0] & (NI)((NU64)(1) << (NU64)(((NI) ((NI)(((NI) (u)) & 63)))))) == 0));
		nimln(126, "intsets.nim");
		{
			nimln(126, "intsets.nim");
			if (!!(result)) goto LA7;
			nimln(127, "intsets.nim");
			nimln(127, "intsets.nim");
			if ((NU)((NI)((NU64)(((NI) (u))) >> (NU64)(6))) > (NU)(7)) raiseIndexError();
			nimln(127, "intsets.nim");
			nimln(127, "intsets.nim");
			if ((NU)((NI)((NU64)(((NI) (u))) >> (NU64)(6))) > (NU)(7)) raiseIndexError();
			nimln(128, "intsets.nim");
			nimln(128, "intsets.nim");
			(*t).Bits[((NI)((NU64)(((NI) (u))) >> (NU64)(6)))- 0] = (NI)((*t).Bits[((NI)((NU64)(((NI) (u))) >> (NU64)(6)))- 0] | (NI)((NU64)(1) << (NU64)(((NI) ((NI)(((NI) (u)) & 63))))));
		}
		LA7: ;
	}
	goto LA1;
	LA3: ;
	{
		nimln(130, "intsets.nim");
		incl_170842(s, key);
		nimln(131, "intsets.nim");
		result = NIM_FALSE;
	}
	LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(void, initintset_170899)(tintset170041* Result) {
	nimfr("initIntSet", "intsets.nim")
	nimln(135, "intsets.nim");
	unsureAsgnRef((void**) &(*Result).Data, (ttrunkseq170039*) newSeq((&NTI170039), 8));
	nimln(136, "intsets.nim");
	(*Result).Max = 7;
	nimln(137, "intsets.nim");
	(*Result).Counter = 0;
	nimln(138, "intsets.nim");
	unsureAsgnRef((void**) &(*Result).Head, NIM_NIL);
	popFrame();
}

N_NIMCALL(void, assign_170916)(tintset170041* dest, tintset170041* src) {
	ttrunk170037* it;
	nimfr("assign", "intsets.nim")
	nimln(143, "intsets.nim");
	(*dest).Counter = (*src).Counter;
	nimln(144, "intsets.nim");
	(*dest).Max = (*src).Max;
	nimln(145, "intsets.nim");
	nimln(145, "intsets.nim");
	unsureAsgnRef((void**) &(*dest).Data, (ttrunkseq170039*) newSeq((&NTI170039), (*src).Data->Sup.len));
	nimln(147, "intsets.nim");
	it = (*src).Head;
	nimln(148, "intsets.nim");
	while (1) {
		NI h;
		ttrunk170037* n;
		nimln(684, "system.nim");
		nimln(684, "system.nim");
		if (!!((it == NIM_NIL))) goto LA1;
		nimln(150, "intsets.nim");
		nimln(150, "intsets.nim");
		h = (NI)((*it).Key & (*dest).Max);
		nimln(151, "intsets.nim");
		while (1) {
			nimln(684, "system.nim");
			nimln(684, "system.nim");
			if ((NU)(h) >= (NU)((*dest).Data->Sup.len)) raiseIndexError();
			if (!!(((*dest).Data->data[h] == NIM_NIL))) goto LA2;
			nimln(151, "intsets.nim");
			h = nexttry_170207(h, (*dest).Max);
		} LA2: ;
		nimln(152, "intsets.nim");
		{
			nimln(152, "intsets.nim");
			nimln(152, "intsets.nim");
			if ((NU)(h) >= (NU)((*dest).Data->Sup.len)) raiseIndexError();
			if (!!(((*dest).Data->data[h] == NIM_NIL))) goto LA5;
			nimln(152, "intsets.nim");
			hiddenraiseassert_72820(((NimStringDesc*) &TMP1869));
		}
		LA5: ;
		n = 0;
		nimln(155, "intsets.nim");
		n = (ttrunk170037*) newObj((&NTI170035), sizeof(ttrunk170037));
		nimln(156, "intsets.nim");
		asgnRef((void**) &(*n).Next, (*dest).Head);
		nimln(157, "intsets.nim");
		(*n).Key = (*it).Key;
		nimln(158, "intsets.nim");
		memcpy((void*)(*n).Bits, (NIM_CONST void*)(*it).Bits, sizeof((*n).Bits));
		nimln(159, "intsets.nim");
		unsureAsgnRef((void**) &(*dest).Head, n);
		nimln(160, "intsets.nim");
		if ((NU)(h) >= (NU)((*dest).Data->Sup.len)) raiseIndexError();
		asgnRef((void**) &(*dest).Data->data[h], n);
		nimln(162, "intsets.nim");
		it = (*it).Next;
	} LA1: ;
	popFrame();
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) (&(*dest).data[((*dest).Sup.len)- 0])), ((NCSTRING) ((*src).data)), (NI64)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(NimStringDesc*, HEX24_171086)(tintset170041* s) {
	NimStringDesc* result;
	NI key_171091;
	ttrunk170037* r_171095;
	nimfr("$", "intsets.nim")
	result = 0;
	nimln(183, "intsets.nim");
	result = copyString(((NimStringDesc*) &TMP1870));
	key_171091 = 0;
	nimln(166, "intsets.nim");
	r_171095 = (*s).Head;
	nimln(167, "intsets.nim");
	while (1) {
		NI i_171097;
		nimln(684, "system.nim");
		nimln(684, "system.nim");
		if (!!((r_171095 == NIM_NIL))) goto LA1;
		nimln(168, "intsets.nim");
		i_171097 = 0;
		nimln(169, "intsets.nim");
		while (1) {
			NI w_171099;
			NI j_171101;
			nimln(169, "intsets.nim");
			if (!(i_171097 <= 7)) goto LA2;
			nimln(170, "intsets.nim");
			if ((NU)(i_171097) > (NU)(7)) raiseIndexError();
			w_171099 = (*r_171095).Bits[(i_171097)- 0];
			nimln(173, "intsets.nim");
			j_171101 = 0;
			nimln(174, "intsets.nim");
			while (1) {
				nimln(684, "system.nim");
				nimln(684, "system.nim");
				if (!!((w_171099 == 0))) goto LA3;
				nimln(175, "intsets.nim");
				{
					NimStringDesc* LOC12;
					nimln(684, "system.nim");
					nimln(684, "system.nim");
					nimln(175, "intsets.nim");
					if (!!((((NI) ((NI)(w_171099 & 1))) == 0))) goto LA6;
					nimln(176, "intsets.nim");
					nimln(176, "intsets.nim");
					nimln(176, "intsets.nim");
					nimln(176, "intsets.nim");
					nimln(176, "intsets.nim");
					key_171091 = (NI)((NI)((NU64)((*r_171095).Key) << (NU64)(9)) | (NI)((NU64)((NI)((NU64)(i_171097) << (NU64)(6))) + (NU64)(j_171101)));
					nimln(185, "intsets.nim");
					{
						nimln(692, "system.nim");
						nimln(185, "intsets.nim");
						if (!(1 < result->Sup.len)) goto LA10;
						nimln(185, "intsets.nim");
						result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TMP1871));
					}
					LA10: ;
					nimln(186, "intsets.nim");
					nimln(186, "intsets.nim");
					LOC12 = 0;
					LOC12 = nimIntToStr(key_171091);
					result = resizeString(result, LOC12->Sup.len + 0);
appendString(result, LOC12);
				}
				LA6: ;
				nimln(177, "intsets.nim");
				j_171101 = addInt(j_171101, 1);
				nimln(178, "intsets.nim");
				nimln(178, "intsets.nim");
				w_171099 = (NI)((NU64)(w_171099) >> (NU64)(1));
			} LA3: ;
			nimln(179, "intsets.nim");
			i_171097 = addInt(i_171097, 1);
		} LA2: ;
		nimln(180, "intsets.nim");
		r_171095 = (*r_171095).Next;
	} LA1: ;
	nimln(187, "intsets.nim");
	result = resizeString(result, 1);
appendString(result, ((NimStringDesc*) &TMP1872));
	popFrame();
	return result;
}

static N_INLINE(NIM_BOOL, empty_171107)(tintset170041* s) {
	NIM_BOOL result;
	nimfr("empty", "intsets.nim")
	result = 0;
	nimln(196, "intsets.nim");
	nimln(196, "intsets.nim");
	result = ((*s).Counter == 0);
	popFrame();
	return result;
}
N_NOINLINE(void, intsetsInit)(void) {
	nimfr("intsets", "intsets.nim")
	popFrame();
}

N_NOINLINE(void, intsetsDatInit)(void) {
static TNimNode* TMP1864[3];
static TNimNode* TMP3272[4];
static TNimNode TMP1850[9];
NTI170037.size = sizeof(ttrunk170037);
NTI170037.kind = 18;
NTI170037.base = 0;
TMP1864[0] = &TMP1850[1];
TMP1850[1].kind = 1;
TMP1850[1].offset = offsetof(ttrunk170037, Next);
TMP1850[1].typ = (&NTI170035);
TMP1850[1].name = "next";
TMP1864[1] = &TMP1850[2];
TMP1850[2].kind = 1;
TMP1850[2].offset = offsetof(ttrunk170037, Key);
TMP1850[2].typ = (&NTI105);
TMP1850[2].name = "key";
TMP1864[2] = &TMP1850[3];
TMP1850[3].kind = 1;
TMP1850[3].offset = offsetof(ttrunk170037, Bits);
TMP1850[3].typ = (&NTI21421);
TMP1850[3].name = "bits";
TMP1850[0].len = 3; TMP1850[0].kind = 2; TMP1850[0].sons = &TMP1864[0];
NTI170037.node = &TMP1850[0];
NTI170035.size = sizeof(ttrunk170037*);
NTI170035.kind = 22;
NTI170035.base = (&NTI170037);
NTI170035.marker = TMP1865;
NTI170039.size = sizeof(ttrunkseq170039*);
NTI170039.kind = 24;
NTI170039.base = (&NTI170035);
NTI170039.flags = 2;
NTI170039.marker = TMP1866;
NTI170041.size = sizeof(tintset170041);
NTI170041.kind = 18;
NTI170041.base = 0;
NTI170041.flags = 2;
TMP3272[0] = &TMP1850[5];
TMP1850[5].kind = 1;
TMP1850[5].offset = offsetof(tintset170041, Counter);
TMP1850[5].typ = (&NTI105);
TMP1850[5].name = "counter";
TMP3272[1] = &TMP1850[6];
TMP1850[6].kind = 1;
TMP1850[6].offset = offsetof(tintset170041, Max);
TMP1850[6].typ = (&NTI105);
TMP1850[6].name = "max";
TMP3272[2] = &TMP1850[7];
TMP1850[7].kind = 1;
TMP1850[7].offset = offsetof(tintset170041, Head);
TMP1850[7].typ = (&NTI170035);
TMP1850[7].name = "head";
TMP3272[3] = &TMP1850[8];
TMP1850[8].kind = 1;
TMP1850[8].offset = offsetof(tintset170041, Data);
TMP1850[8].typ = (&NTI170039);
TMP1850[8].name = "data";
TMP1850[4].len = 4; TMP1850[4].kind = 2; TMP1850[4].sons = &TMP3272[0];
NTI170041.node = &TMP1850[4];
}

