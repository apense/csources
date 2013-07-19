/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct ttrunk166037 ttrunk166037;
typedef struct tintset166041 tintset166041;
typedef struct ttrunkseq166039 ttrunkseq166039;
typedef struct tcell38849 tcell38849;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tcellset38861 tcellset38861;
typedef struct tgcheap40816 tgcheap40816;
typedef struct tcellseq38865 tcellseq38865;
typedef struct tpagedesc38857 tpagedesc38857;
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
struct tintset166041 {
NI Counter;
NI Max;
ttrunk166037* Head;
ttrunkseq166039* Data;
};
typedef NI TY21621[8];
struct ttrunk166037 {
ttrunk166037* Next;
NI Key;
TY21621 Bits;
};
struct tcell38849 {
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
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
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
struct ttrunkseq166039 {
  TGenericSeq Sup;
  ttrunk166037* data[SEQ_DECL_SIZE];
};
static N_INLINE(NIM_BOOL, mustrehash_166052)(NI length, NI counter);
N_NIMCALL(void, hiddenraiseassert_71620)(NimStringDesc* msg);
N_NIMCALL(NI, mulInt)(NI a, NI b);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NI, nexttry_166207)(NI h, NI maxhash);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(ttrunk166037*, intsetget_166214)(tintset166041* t, NI key);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(void, intsetrawinsert_166234)(tintset166041* t, ttrunkseq166039** data, ttrunk166037* desc);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_44224)(tcell38849* c);
static N_INLINE(NIM_BOOL, canbecycleroot_42265)(tcell38849* c);
static N_INLINE(void, rtladdcycleroot_42836)(tcell38849* c);
N_NOINLINE(void, incl_39656)(tcellset38861* s, tcell38849* cell);
static N_INLINE(tcell38849*, usrtocell_42243)(void* usr);
static N_INLINE(void, decref_43802)(tcell38849* c);
static N_INLINE(void, rtladdzct_43402)(tcell38849* c);
N_NOINLINE(void, addzct_42215)(tcellseq38865* s, tcell38849* c);
N_NIMCALL(void, intsetenlarge_166604)(tintset166041* t);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP1871)(void* p, NI op);
N_NIMCALL(void, TMP1872)(void* p, NI op);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(ttrunk166037*, intsetput_166659)(tintset166041* t, NI key);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NIM_BOOL, contains_166820)(tintset166041* s, NI key);
N_NIMCALL(void, incl_166842)(tintset166041* s, NI key);
N_NIMCALL(void, excl_166853)(tintset166041* s, NI key);
N_NIMCALL(NIM_BOOL, containsorincl_166875)(tintset166041* s, NI key);
N_NIMCALL(void, initintset_166899)(tintset166041* Result);
N_NIMCALL(void, assign_166916)(tintset166041* dest, tintset166041* src);
N_NIMCALL(NimStringDesc*, HEX24_167086)(tintset166041* s);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x);
static N_INLINE(NIM_BOOL, empty_167107)(tintset166041* s);
STRING_LITERAL(TMP1858, "counter < length ", 17);
STRING_LITERAL(TMP1864, "not data[h] == desc ", 20);
STRING_LITERAL(TMP1865, "data[h] == nil ", 15);
STRING_LITERAL(TMP1874, "t.data[h] == nil ", 17);
STRING_LITERAL(TMP1875, "dest.data[h] == nil ", 20);
STRING_LITERAL(TMP1876, "{", 1);
STRING_LITERAL(TMP1877, ", ", 2);
STRING_LITERAL(TMP1878, "}", 1);
extern TFrame* frameptr_12027;
extern tgcheap40816 gch_40842;
TNimType NTI166037; /* TTrunk */
extern TNimType NTI105; /* int */
extern TNimType NTI21621; /* array[0..7, int] */
TNimType NTI166035; /* PTrunk */
TNimType NTI166039; /* TTrunkSeq */
TNimType NTI166041; /* TIntSet */

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

static N_INLINE(NIM_BOOL, mustrehash_166052)(NI length, NI counter) {
	NIM_BOOL result;
	NIM_BOOL LOC5;
	NI TMP1859;
	NI TMP1860;
	NI TMP1861;
	nimfr("mustRehash", "intsets.nim")
	result = 0;
	nimln(47, "intsets.nim");
	{
		nimln(47, "intsets.nim");
		nimln(47, "intsets.nim");
		if (!!((counter < length))) goto LA3;
		nimln(47, "intsets.nim");
		hiddenraiseassert_71620(((NimStringDesc*) &TMP1858));
	}
	LA3: ;
	nimln(48, "intsets.nim");
	nimln(48, "intsets.nim");
	nimln(48, "intsets.nim");
	nimln(48, "intsets.nim");
	TMP1859 = mulInt(length, 2);
	nimln(48, "intsets.nim");
	TMP1860 = mulInt(counter, 3);
	LOC5 = ((NI64)(TMP1859) < (NI64)(TMP1860));
	if (LOC5) goto LA6;
	nimln(48, "intsets.nim");
	nimln(48, "intsets.nim");
	TMP1861 = subInt(length, counter);
	LOC5 = ((NI64)(TMP1861) < 4);
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

static N_INLINE(NI, nexttry_166207)(NI h, NI maxhash) {
	NI result;
	NI TMP1862;
	NI TMP1863;
	nimfr("nextTry", "intsets.nim")
	result = 0;
	nimln(51, "intsets.nim");
	nimln(51, "intsets.nim");
	nimln(51, "intsets.nim");
	nimln(51, "intsets.nim");
	TMP1862 = mulInt(5, h);
	TMP1863 = addInt((NI64)(TMP1862), 1);
	result = (NI)((NI64)(TMP1863) & maxhash);
	popFrame();
	return result;
}

N_NIMCALL(ttrunk166037*, intsetget_166214)(tintset166041* t, NI key) {
	ttrunk166037* result;
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
		h = nexttry_166207(h, (*t).Max);
	} LA1: ;
	nimln(59, "intsets.nim");
	result = NIM_NIL;
	BeforeRet: ;
	popFrame();
	return result;
}

static N_INLINE(NIM_BOOL, canbecycleroot_42265)(tcell38849* c) {
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

static N_INLINE(void, rtladdcycleroot_42836)(tcell38849* c) {
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
		incl_39656(&gch_40842.Cycleroots, c);
	}
	LA3: ;
	popFrame();
}

static N_INLINE(void, incref_44224)(tcell38849* c) {
	nimfr("incRef", "gc.nim")
	nimln(201, "gc.nim");
	nimln(201, "gc.nim");
	(*c).Refcount = (NI)((NU64)((*c).Refcount) + (NU64)(8));
	nimln(204, "gc.nim");
	{
		NIM_BOOL LOC3;
		nimln(204, "gc.nim");
		LOC3 = canbecycleroot_42265(c);
		if (!LOC3) goto LA4;
		nimln(205, "gc.nim");
		rtladdcycleroot_42836(c);
	}
	LA4: ;
	popFrame();
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

static N_INLINE(void, decref_43802)(tcell38849* c) {
	nimfr("decRef", "gc.nim")
	nimln(191, "gc.nim");
	{
		nimln(155, "gc.nim");
		(*c).Refcount -= 8;
		nimln(156, "gc.nim");
		if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA3;
		nimln(192, "gc.nim");
		rtladdzct_43402(c);
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		nimln(193, "gc.nim");
		LOC6 = canbecycleroot_42265(c);
		if (!LOC6) goto LA7;
		nimln(196, "gc.nim");
		rtladdcycleroot_42836(c);
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
		tcell38849* LOC5;
		nimln(684, "system.nim");
		nimln(684, "system.nim");
		if (!!((src == NIM_NIL))) goto LA3;
		nimln(229, "gc.nim");
		nimln(229, "gc.nim");
		LOC5 = usrtocell_42243(src);
		incref_44224(LOC5);
	}
	LA3: ;
	nimln(230, "gc.nim");
	{
		tcell38849* LOC10;
		nimln(684, "system.nim");
		nimln(684, "system.nim");
		if (!!(((*dest) == NIM_NIL))) goto LA8;
		nimln(230, "gc.nim");
		nimln(230, "gc.nim");
		LOC10 = usrtocell_42243((*dest));
		decref_43802(LOC10);
	}
	LA8: ;
	nimln(231, "gc.nim");
	(*dest) = src;
	popFrame();
}

N_NIMCALL(void, intsetrawinsert_166234)(tintset166041* t, ttrunkseq166039** data, ttrunk166037* desc) {
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
			hiddenraiseassert_71620(((NimStringDesc*) &TMP1864));
		}
		LA4: ;
		nimln(65, "intsets.nim");
		h = nexttry_166207(h, (*t).Max);
	} LA1: ;
	nimln(66, "intsets.nim");
	{
		nimln(66, "intsets.nim");
		nimln(66, "intsets.nim");
		if ((NU)(h) >= (NU)((*data)->Sup.len)) raiseIndexError();
		if (!!(((*data)->data[h] == NIM_NIL))) goto LA8;
		nimln(66, "intsets.nim");
		hiddenraiseassert_71620(((NimStringDesc*) &TMP1865));
	}
	LA8: ;
	nimln(67, "intsets.nim");
	if ((NU)(h) >= (NU)((*data)->Sup.len)) raiseIndexError();
	asgnRef((void**) &(*data)->data[h], desc);
	popFrame();
}
N_NIMCALL(void, TMP1871)(void* p, NI op) {
	ttrunk166037* a;
	NI LOC1;
	a = (ttrunk166037*)p;
	nimGCvisit((void*)(*a).Next, op);
	for (LOC1 = 0; LOC1 < 8; LOC1++) {
	}
}
N_NIMCALL(void, TMP1872)(void* p, NI op) {
	ttrunkseq166039* a;
	NI LOC1;
	a = (ttrunkseq166039*)p;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1], op);
	}
}

N_NIMCALL(void, intsetenlarge_166604)(tintset166041* t) {
	ttrunkseq166039* n;
	NI oldmax;
	NI TMP1866;
	NI TMP1867;
	NI TMP1868;
	NI TMP1869;
	NI i_166630;
	NI res_166654;
	ttrunkseq166039* LOC6;
	nimfr("IntSetEnlarge", "intsets.nim")
	n = 0;
	nimln(71, "intsets.nim");
	oldmax = (*t).Max;
	nimln(72, "intsets.nim");
	nimln(72, "intsets.nim");
	nimln(72, "intsets.nim");
	nimln(72, "intsets.nim");
	TMP1866 = addInt((*t).Max, 1);
	TMP1867 = mulInt((NI64)(TMP1866), 2);
	TMP1868 = subInt((NI64)(TMP1867), 1);
	(*t).Max = (NI64)(TMP1868);
	nimln(73, "intsets.nim");
	nimln(73, "intsets.nim");
	TMP1869 = addInt((*t).Max, 1);
	n = (ttrunkseq166039*) newSeq((&NTI166039), (NI64)(TMP1869));
	i_166630 = 0;
	nimln(1274, "system.nim");
	res_166654 = 0;
	nimln(1275, "system.nim");
	while (1) {
		nimln(1275, "system.nim");
		if (!(res_166654 <= oldmax)) goto LA1;
		nimln(1274, "system.nim");
		i_166630 = res_166654;
		nimln(75, "intsets.nim");
		{
			nimln(684, "system.nim");
			nimln(684, "system.nim");
			if ((NU)(i_166630) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
			if (!!(((*t).Data->data[i_166630] == NIM_NIL))) goto LA4;
			nimln(75, "intsets.nim");
			if ((NU)(i_166630) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
			intsetrawinsert_166234(&(*t), &n, (*t).Data->data[i_166630]);
		}
		LA4: ;
		nimln(1277, "system.nim");
		res_166654 = addInt(res_166654, 1);
	} LA1: ;
	nimln(76, "intsets.nim");
	LOC6 = 0;
	LOC6 = (*t).Data;
	unsureAsgnRef((void**) &(*t).Data, n);
	n = LOC6;
	popFrame();
}

N_NIMCALL(ttrunk166037*, intsetput_166659)(tintset166041* t, NI key) {
	ttrunk166037* result;
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
		h = nexttry_166207(h, (*t).Max);
	} LA1: ;
	nimln(84, "intsets.nim");
	{
		NI TMP1873;
		NIM_BOOL LOC8;
		nimln(84, "intsets.nim");
		nimln(84, "intsets.nim");
		TMP1873 = addInt((*t).Max, 1);
		LOC8 = mustrehash_166052((NI64)(TMP1873), (*t).Counter);
		if (!LOC8) goto LA9;
		nimln(84, "intsets.nim");
		intsetenlarge_166604(t);
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
		h = nexttry_166207(h, (*t).Max);
	} LA11: ;
	nimln(88, "intsets.nim");
	{
		nimln(88, "intsets.nim");
		nimln(88, "intsets.nim");
		if ((NU)(h) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
		if (!!(((*t).Data->data[h] == NIM_NIL))) goto LA14;
		nimln(88, "intsets.nim");
		hiddenraiseassert_71620(((NimStringDesc*) &TMP1874));
	}
	LA14: ;
	nimln(89, "intsets.nim");
	result = (ttrunk166037*) newObj((&NTI166035), sizeof(ttrunk166037));
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

N_NIMCALL(NIM_BOOL, contains_166820)(tintset166041* s, NI key) {
	NIM_BOOL result;
	ttrunk166037* t;
	nimfr("contains", "intsets.nim")
	result = 0;
	nimln(97, "intsets.nim");
	nimln(97, "intsets.nim");
	t = intsetget_166214(s, (NI)((NU64)(key) >> (NU64)(9)));
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

N_NIMCALL(void, incl_166842)(tintset166041* s, NI key) {
	ttrunk166037* t;
	NI u;
	nimfr("incl", "intsets.nim")
	nimln(106, "intsets.nim");
	nimln(106, "intsets.nim");
	t = intsetput_166659(s, (NI)((NU64)(key) >> (NU64)(9)));
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

N_NIMCALL(void, excl_166853)(tintset166041* s, NI key) {
	ttrunk166037* t;
	nimfr("excl", "intsets.nim")
	nimln(113, "intsets.nim");
	nimln(113, "intsets.nim");
	t = intsetget_166214(&(*s), (NI)((NU64)(key) >> (NU64)(9)));
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

N_NIMCALL(NIM_BOOL, containsorincl_166875)(tintset166041* s, NI key) {
	NIM_BOOL result;
	ttrunk166037* t;
	nimfr("containsOrIncl", "intsets.nim")
	result = 0;
	nimln(122, "intsets.nim");
	nimln(122, "intsets.nim");
	t = intsetget_166214(&(*s), (NI)((NU64)(key) >> (NU64)(9)));
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
		incl_166842(s, key);
		nimln(131, "intsets.nim");
		result = NIM_FALSE;
	}
	LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(void, initintset_166899)(tintset166041* Result) {
	nimfr("initIntSet", "intsets.nim")
	nimln(135, "intsets.nim");
	unsureAsgnRef((void**) &(*Result).Data, (ttrunkseq166039*) newSeq((&NTI166039), 8));
	nimln(136, "intsets.nim");
	(*Result).Max = 7;
	nimln(137, "intsets.nim");
	(*Result).Counter = 0;
	nimln(138, "intsets.nim");
	unsureAsgnRef((void**) &(*Result).Head, NIM_NIL);
	popFrame();
}

N_NIMCALL(void, assign_166916)(tintset166041* dest, tintset166041* src) {
	ttrunk166037* it;
	nimfr("assign", "intsets.nim")
	nimln(143, "intsets.nim");
	(*dest).Counter = (*src).Counter;
	nimln(144, "intsets.nim");
	(*dest).Max = (*src).Max;
	nimln(145, "intsets.nim");
	nimln(145, "intsets.nim");
	unsureAsgnRef((void**) &(*dest).Data, (ttrunkseq166039*) newSeq((&NTI166039), (*src).Data->Sup.len));
	nimln(147, "intsets.nim");
	it = (*src).Head;
	nimln(148, "intsets.nim");
	while (1) {
		NI h;
		ttrunk166037* n;
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
			h = nexttry_166207(h, (*dest).Max);
		} LA2: ;
		nimln(152, "intsets.nim");
		{
			nimln(152, "intsets.nim");
			nimln(152, "intsets.nim");
			if ((NU)(h) >= (NU)((*dest).Data->Sup.len)) raiseIndexError();
			if (!!(((*dest).Data->data[h] == NIM_NIL))) goto LA5;
			nimln(152, "intsets.nim");
			hiddenraiseassert_71620(((NimStringDesc*) &TMP1875));
		}
		LA5: ;
		n = 0;
		nimln(155, "intsets.nim");
		n = (ttrunk166037*) newObj((&NTI166035), sizeof(ttrunk166037));
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

N_NIMCALL(NimStringDesc*, HEX24_167086)(tintset166041* s) {
	NimStringDesc* result;
	NI key_167091;
	ttrunk166037* r_167095;
	nimfr("$", "intsets.nim")
	result = 0;
	nimln(183, "intsets.nim");
	result = copyString(((NimStringDesc*) &TMP1876));
	key_167091 = 0;
	nimln(166, "intsets.nim");
	r_167095 = (*s).Head;
	nimln(167, "intsets.nim");
	while (1) {
		NI i_167097;
		nimln(684, "system.nim");
		nimln(684, "system.nim");
		if (!!((r_167095 == NIM_NIL))) goto LA1;
		nimln(168, "intsets.nim");
		i_167097 = 0;
		nimln(169, "intsets.nim");
		while (1) {
			NI w_167099;
			NI j_167101;
			nimln(169, "intsets.nim");
			if (!(i_167097 <= 7)) goto LA2;
			nimln(170, "intsets.nim");
			if ((NU)(i_167097) > (NU)(7)) raiseIndexError();
			w_167099 = (*r_167095).Bits[(i_167097)- 0];
			nimln(173, "intsets.nim");
			j_167101 = 0;
			nimln(174, "intsets.nim");
			while (1) {
				nimln(684, "system.nim");
				nimln(684, "system.nim");
				if (!!((w_167099 == 0))) goto LA3;
				nimln(175, "intsets.nim");
				{
					NimStringDesc* LOC12;
					nimln(684, "system.nim");
					nimln(684, "system.nim");
					nimln(175, "intsets.nim");
					if (!!((((NI) ((NI)(w_167099 & 1))) == 0))) goto LA6;
					nimln(176, "intsets.nim");
					nimln(176, "intsets.nim");
					nimln(176, "intsets.nim");
					nimln(176, "intsets.nim");
					nimln(176, "intsets.nim");
					key_167091 = (NI)((NI)((NU64)((*r_167095).Key) << (NU64)(9)) | (NI)((NU64)((NI)((NU64)(i_167097) << (NU64)(6))) + (NU64)(j_167101)));
					nimln(185, "intsets.nim");
					{
						nimln(692, "system.nim");
						nimln(185, "intsets.nim");
						if (!(1 < result->Sup.len)) goto LA10;
						nimln(185, "intsets.nim");
						result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TMP1877));
					}
					LA10: ;
					nimln(186, "intsets.nim");
					nimln(186, "intsets.nim");
					LOC12 = 0;
					LOC12 = nimIntToStr(key_167091);
					result = resizeString(result, LOC12->Sup.len + 0);
appendString(result, LOC12);
				}
				LA6: ;
				nimln(177, "intsets.nim");
				j_167101 = addInt(j_167101, 1);
				nimln(178, "intsets.nim");
				nimln(178, "intsets.nim");
				w_167099 = (NI)((NU64)(w_167099) >> (NU64)(1));
			} LA3: ;
			nimln(179, "intsets.nim");
			i_167097 = addInt(i_167097, 1);
		} LA2: ;
		nimln(180, "intsets.nim");
		r_167095 = (*r_167095).Next;
	} LA1: ;
	nimln(187, "intsets.nim");
	result = resizeString(result, 1);
appendString(result, ((NimStringDesc*) &TMP1878));
	popFrame();
	return result;
}

static N_INLINE(NIM_BOOL, empty_167107)(tintset166041* s) {
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
static TNimNode* TMP1870[3];
static TNimNode* TMP3278[4];
static TNimNode TMP1856[9];
NTI166037.size = sizeof(ttrunk166037);
NTI166037.kind = 18;
NTI166037.base = 0;
TMP1870[0] = &TMP1856[1];
TMP1856[1].kind = 1;
TMP1856[1].offset = offsetof(ttrunk166037, Next);
TMP1856[1].typ = (&NTI166035);
TMP1856[1].name = "next";
TMP1870[1] = &TMP1856[2];
TMP1856[2].kind = 1;
TMP1856[2].offset = offsetof(ttrunk166037, Key);
TMP1856[2].typ = (&NTI105);
TMP1856[2].name = "key";
TMP1870[2] = &TMP1856[3];
TMP1856[3].kind = 1;
TMP1856[3].offset = offsetof(ttrunk166037, Bits);
TMP1856[3].typ = (&NTI21621);
TMP1856[3].name = "bits";
TMP1856[0].len = 3; TMP1856[0].kind = 2; TMP1856[0].sons = &TMP1870[0];
NTI166037.node = &TMP1856[0];
NTI166035.size = sizeof(ttrunk166037*);
NTI166035.kind = 22;
NTI166035.base = (&NTI166037);
NTI166035.marker = TMP1871;
NTI166039.size = sizeof(ttrunkseq166039*);
NTI166039.kind = 24;
NTI166039.base = (&NTI166035);
NTI166039.flags = 2;
NTI166039.marker = TMP1872;
NTI166041.size = sizeof(tintset166041);
NTI166041.kind = 18;
NTI166041.base = 0;
NTI166041.flags = 2;
TMP3278[0] = &TMP1856[5];
TMP1856[5].kind = 1;
TMP1856[5].offset = offsetof(tintset166041, Counter);
TMP1856[5].typ = (&NTI105);
TMP1856[5].name = "counter";
TMP3278[1] = &TMP1856[6];
TMP1856[6].kind = 1;
TMP1856[6].offset = offsetof(tintset166041, Max);
TMP1856[6].typ = (&NTI105);
TMP1856[6].name = "max";
TMP3278[2] = &TMP1856[7];
TMP1856[7].kind = 1;
TMP1856[7].offset = offsetof(tintset166041, Head);
TMP1856[7].typ = (&NTI166035);
TMP1856[7].name = "head";
TMP3278[3] = &TMP1856[8];
TMP1856[8].kind = 1;
TMP1856[8].offset = offsetof(tintset166041, Data);
TMP1856[8].typ = (&NTI166039);
TMP1856[8].name = "data";
TMP1856[4].len = 4; TMP1856[4].kind = 2; TMP1856[4].sons = &TMP3278[0];
NTI166041.node = &TMP1856[4];
}

