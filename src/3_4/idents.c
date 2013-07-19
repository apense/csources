/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"
typedef struct tident130015 tident130015;
typedef struct tidobj130009 tidobj130009;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
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
typedef tident130015* TY130021[8192];
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
struct TGenericSeq {
NI len;
NI reserved;
};
typedef NIM_CHAR TY611[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY611 data;
};
struct tident130015 {
  tidobj130009 Sup;
NimStringDesc* S;
tident130015* Next;
NI H;
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
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
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
N_NIMCALL(NI, cmpignorestyle_130032)(NCSTRING a, NCSTRING b, NI blen);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
static N_INLINE(NI, subInt)(NI a, NI b);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(NI, cmpexact_130155)(NCSTRING a, NCSTRING b, NI blen);
N_NIMCALL(tident130015*, getident_130208)(NCSTRING identifier, NI length, NI h);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell38846*, usrtocell_42243)(void* usr);
static N_INLINE(void, rtladdzct_43402)(tcell38846* c);
N_NOINLINE(void, addzct_42215)(tcellseq38862* s, tcell38846* c);
N_NIMCALL(void, hiddenraiseassert_71620)(NimStringDesc* msg);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP850)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(tident130015*, getident_130448)(NimStringDesc* identifier);
N_NIMCALL(NI, hashignorestyle_101852)(NimStringDesc* x);
N_NIMCALL(tident130015*, getident_130454)(NimStringDesc* identifier, NI h);
N_NIMCALL(NIM_BOOL, identeq_130461)(tident130015* id, NimStringDesc* name);
N_NIMCALL(void, TMP1955)(void* p, NI op);
STRING_LITERAL(TMP848, "id == 0 or id == result.id ", 27);
STRING_LITERAL(TMP852, ":anonymous", 10);
TY130021 buckets_130029;
extern TFrame* frameptr_12027;
NI wordcounter_130206;
extern tgcheap40816 gch_40842;
extern TNimType NTI1009; /* TObject */
TNimType NTI130009; /* TIdObj */
extern TNimType NTI105; /* int */
TNimType NTI130015; /* TIdent */
extern TNimType NTI143; /* string */
extern TNimType NTI101009; /* THash */
TNimType NTI130013; /* PIdent */
tident130015* idanon_130468;
TNimType NTI130011; /* PIdObj */

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

N_NIMCALL(NI, cmpignorestyle_130032)(NCSTRING a, NCSTRING b, NI blen) {
	NI result;
	NI i;
	NI j;
	nimfr("cmpIgnoreStyle", "idents.nim")
	result = 0;
	nimln(31, "idents.nim");
	i = 0;
	nimln(32, "idents.nim");
	j = 0;
	nimln(33, "idents.nim");
	result = 1;
	nimln(34, "idents.nim");
	while (1) {
		NIM_CHAR aa;
		NIM_CHAR bb;
		NI TMP846;
		nimln(34, "idents.nim");
		if (!(j < blen)) goto LA1;
		nimln(35, "idents.nim");
		while (1) {
			nimln(35, "idents.nim");
			if (!((NU8)(a[i]) == (NU8)(95))) goto LA2;
			nimln(35, "idents.nim");
			i = addInt(i, 1);
		} LA2: ;
		nimln(36, "idents.nim");
		while (1) {
			nimln(36, "idents.nim");
			if (!((NU8)(b[j]) == (NU8)(95))) goto LA3;
			nimln(36, "idents.nim");
			j = addInt(j, 1);
		} LA3: ;
		nimln(38, "idents.nim");
		aa = a[i];
		nimln(39, "idents.nim");
		bb = b[j];
		nimln(40, "idents.nim");
		{
			NIM_BOOL LOC6;
			NI TMP844;
			nimln(40, "idents.nim");
			nimln(688, "system.nim");
			LOC6 = ((NU8)(65) <= (NU8)(aa));
			if (!(LOC6)) goto LA7;
			nimln(40, "idents.nim");
			LOC6 = ((NU8)(aa) <= (NU8)(90));
			LA7: ;
			if (!LOC6) goto LA8;
			nimln(40, "idents.nim");
			nimln(40, "idents.nim");
			nimln(40, "idents.nim");
			nimln(40, "idents.nim");
			TMP844 = addInt(((NI) (((NU8)(aa)))), 32);
			aa = ((NIM_CHAR) (((NI)chckRange((NI32)(TMP844), 0, 255))));
		}
		LA8: ;
		nimln(41, "idents.nim");
		{
			NIM_BOOL LOC12;
			NI TMP845;
			nimln(41, "idents.nim");
			nimln(688, "system.nim");
			LOC12 = ((NU8)(65) <= (NU8)(bb));
			if (!(LOC12)) goto LA13;
			nimln(41, "idents.nim");
			LOC12 = ((NU8)(bb) <= (NU8)(90));
			LA13: ;
			if (!LOC12) goto LA14;
			nimln(41, "idents.nim");
			nimln(41, "idents.nim");
			nimln(41, "idents.nim");
			nimln(41, "idents.nim");
			TMP845 = addInt(((NI) (((NU8)(bb)))), 32);
			bb = ((NIM_CHAR) (((NI)chckRange((NI32)(TMP845), 0, 255))));
		}
		LA14: ;
		nimln(42, "idents.nim");
		nimln(42, "idents.nim");
		nimln(42, "idents.nim");
		nimln(42, "idents.nim");
		TMP846 = subInt(((NI) (((NU8)(aa)))), ((NI) (((NU8)(bb)))));
		result = (NI32)(TMP846);
		nimln(43, "idents.nim");
		{
			NIM_BOOL LOC18;
			nimln(43, "idents.nim");
			nimln(684, "system.nim");
			nimln(684, "system.nim");
			LOC18 = !((result == 0));
			if (LOC18) goto LA19;
			nimln(43, "idents.nim");
			LOC18 = ((NU8)(aa) == (NU8)(0));
			LA19: ;
			if (!LOC18) goto LA20;
			nimln(43, "idents.nim");
			goto LA1;
		}
		LA20: ;
		nimln(44, "idents.nim");
		i = addInt(i, 1);
		nimln(45, "idents.nim");
		j = addInt(j, 1);
	} LA1: ;
	nimln(46, "idents.nim");
	{
		nimln(46, "idents.nim");
		if (!(result == 0)) goto LA24;
		nimln(47, "idents.nim");
		{
			nimln(684, "system.nim");
			nimln(684, "system.nim");
			if (!!(((NU8)(a[i]) == (NU8)(0)))) goto LA28;
			nimln(47, "idents.nim");
			result = 1;
		}
		LA28: ;
	}
	LA24: ;
	popFrame();
	return result;
}

N_NIMCALL(NI, cmpexact_130155)(NCSTRING a, NCSTRING b, NI blen) {
	NI result;
	NI i;
	NI j;
	nimfr("cmpExact", "idents.nim")
	result = 0;
	nimln(50, "idents.nim");
	i = 0;
	nimln(51, "idents.nim");
	j = 0;
	nimln(52, "idents.nim");
	result = 1;
	nimln(53, "idents.nim");
	while (1) {
		NIM_CHAR aa;
		NIM_CHAR bb;
		NI TMP847;
		nimln(53, "idents.nim");
		if (!(j < blen)) goto LA1;
		nimln(54, "idents.nim");
		aa = a[i];
		nimln(55, "idents.nim");
		bb = b[j];
		nimln(56, "idents.nim");
		nimln(56, "idents.nim");
		nimln(56, "idents.nim");
		nimln(56, "idents.nim");
		TMP847 = subInt(((NI) (((NU8)(aa)))), ((NI) (((NU8)(bb)))));
		result = (NI32)(TMP847);
		nimln(57, "idents.nim");
		{
			NIM_BOOL LOC4;
			nimln(57, "idents.nim");
			nimln(684, "system.nim");
			nimln(684, "system.nim");
			LOC4 = !((result == 0));
			if (LOC4) goto LA5;
			nimln(57, "idents.nim");
			LOC4 = ((NU8)(aa) == (NU8)(0));
			LA5: ;
			if (!LOC4) goto LA6;
			nimln(57, "idents.nim");
			goto LA1;
		}
		LA6: ;
		nimln(58, "idents.nim");
		i = addInt(i, 1);
		nimln(59, "idents.nim");
		j = addInt(j, 1);
	} LA1: ;
	nimln(60, "idents.nim");
	{
		nimln(60, "idents.nim");
		if (!(result == 0)) goto LA10;
		nimln(61, "idents.nim");
		{
			nimln(684, "system.nim");
			nimln(684, "system.nim");
			if (!!(((NU8)(a[i]) == (NU8)(0)))) goto LA14;
			nimln(61, "idents.nim");
			result = 1;
		}
		LA14: ;
	}
	LA10: ;
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

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	nimfr("asgnRefNoCycle", "gc.nim")
	nimln(236, "gc.nim");
	{
		tcell38846* c;
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
		tcell38846* c;
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
			if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA11;
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
N_NIMCALL(void, TMP850)(void* p, NI op) {
	tident130015* a;
	a = (tident130015*)p;
	nimGCvisit((void*)(*a).S, op);
	nimGCvisit((void*)(*a).Next, op);
}

N_NIMCALL(tident130015*, getident_130208)(NCSTRING identifier, NI length, NI h) {
	tident130015* result;
	NI idx;
	tident130015* last;
	NI id;
	NI i_130424;
	NI HEX3Atmp_130440;
	NI TMP851;
	NI res_130442;
	nimfr("getIdent", "idents.nim")
	result = 0;
	nimln(66, "idents.nim");
	nimln(66, "idents.nim");
	idx = (NI)(h & 8191);
	nimln(67, "idents.nim");
	result = buckets_130029[(idx)- 0];
	nimln(68, "idents.nim");
	last = NIM_NIL;
	nimln(69, "idents.nim");
	id = 0;
	nimln(70, "idents.nim");
	while (1) {
		nimln(684, "system.nim");
		nimln(684, "system.nim");
		if (!!((result == NIM_NIL))) goto LA1;
		nimln(71, "idents.nim");
		{
			NI LOC4;
			nimln(71, "idents.nim");
			nimln(71, "idents.nim");
			LOC4 = cmpexact_130155((*result).S->data, identifier, length);
			if (!(LOC4 == 0)) goto LA5;
			nimln(72, "idents.nim");
			{
				nimln(684, "system.nim");
				nimln(684, "system.nim");
				if (!!((last == NIM_NIL))) goto LA9;
				nimln(74, "idents.nim");
				asgnRefNoCycle((void**) &(*last).Next, (*result).Next);
				nimln(75, "idents.nim");
				asgnRefNoCycle((void**) &(*result).Next, buckets_130029[(idx)- 0]);
				nimln(76, "idents.nim");
				asgnRefNoCycle((void**) &buckets_130029[(idx)- 0], result);
			}
			LA9: ;
			nimln(77, "idents.nim");
			goto BeforeRet;
		}
		goto LA2;
		LA5: ;
		{
			NI LOC12;
			nimln(78, "idents.nim");
			nimln(78, "idents.nim");
			LOC12 = cmpignorestyle_130032((*result).S->data, identifier, length);
			if (!(LOC12 == 0)) goto LA13;
			nimln(79, "idents.nim");
			{
				NIM_BOOL LOC17;
				nimln(79, "idents.nim");
				nimln(79, "idents.nim");
				nimln(79, "idents.nim");
				LOC17 = (id == 0);
				if (LOC17) goto LA18;
				nimln(79, "idents.nim");
				LOC17 = (id == (*result).Sup.Id);
				LA18: ;
				if (!!(LOC17)) goto LA19;
				nimln(79, "idents.nim");
				hiddenraiseassert_71620(((NimStringDesc*) &TMP848));
			}
			LA19: ;
			nimln(80, "idents.nim");
			id = (*result).Sup.Id;
		}
		goto LA2;
		LA13: ;
		LA2: ;
		nimln(81, "idents.nim");
		last = result;
		nimln(82, "idents.nim");
		result = (*result).Next;
	} LA1: ;
	nimln(83, "idents.nim");
	result = (tident130015*) newObj((&NTI130013), sizeof(tident130015));
	(*result).Sup.Sup.m_type = (&NTI130015);
	nimln(84, "idents.nim");
	(*result).H = h;
	nimln(85, "idents.nim");
	nimln(85, "idents.nim");
	asgnRefNoCycle((void**) &(*result).S, mnewString(length));
	i_130424 = 0;
	HEX3Atmp_130440 = 0;
	nimln(86, "idents.nim");
	nimln(86, "idents.nim");
	TMP851 = subInt(length, 1);
	HEX3Atmp_130440 = (NI32)(TMP851);
	nimln(1274, "system.nim");
	res_130442 = 0;
	nimln(1275, "system.nim");
	while (1) {
		nimln(1275, "system.nim");
		if (!(res_130442 <= HEX3Atmp_130440)) goto LA21;
		nimln(1274, "system.nim");
		i_130424 = res_130442;
		nimln(86, "idents.nim");
		if ((NU)(i_130424) > (NU)((*result).S->Sup.len)) raiseIndexError();
		(*result).S->data[i_130424] = identifier[i_130424];
		nimln(1277, "system.nim");
		res_130442 = addInt(res_130442, 1);
	} LA21: ;
	nimln(87, "idents.nim");
	asgnRefNoCycle((void**) &(*result).Next, buckets_130029[(idx)- 0]);
	nimln(88, "idents.nim");
	asgnRefNoCycle((void**) &buckets_130029[(idx)- 0], result);
	nimln(89, "idents.nim");
	{
		nimln(89, "idents.nim");
		if (!(id == 0)) goto LA24;
		nimln(90, "idents.nim");
		wordcounter_130206 = addInt(wordcounter_130206, 1);
		nimln(91, "idents.nim");
		nimln(91, "idents.nim");
		if (wordcounter_130206 == (-2147483647 -1)) raiseOverflow();
		(*result).Sup.Id = ((NI32)-(wordcounter_130206));
	}
	goto LA22;
	LA24: ;
	{
		nimln(93, "idents.nim");
		(*result).Sup.Id = id;
	}
	LA22: ;
	BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(tident130015*, getident_130448)(NimStringDesc* identifier) {
	tident130015* result;
	NI LOC1;
	nimfr("getIdent", "idents.nim")
	result = 0;
	nimln(96, "idents.nim");
	nimln(96, "idents.nim");
	nimln(97, "idents.nim");
	LOC1 = hashignorestyle_101852(identifier);
	result = getident_130208(identifier->data, identifier->Sup.len, LOC1);
	popFrame();
	return result;
}

N_NIMCALL(tident130015*, getident_130454)(NimStringDesc* identifier, NI h) {
	tident130015* result;
	nimfr("getIdent", "idents.nim")
	result = 0;
	nimln(100, "idents.nim");
	nimln(100, "idents.nim");
	result = getident_130208(identifier->data, identifier->Sup.len, h);
	popFrame();
	return result;
}

N_NIMCALL(NIM_BOOL, identeq_130461)(tident130015* id, NimStringDesc* name) {
	NIM_BOOL result;
	tident130015* LOC1;
	nimfr("IdentEq", "idents.nim")
	result = 0;
	nimln(103, "idents.nim");
	nimln(103, "idents.nim");
	nimln(103, "idents.nim");
	LOC1 = 0;
	LOC1 = getident_130448(name);
	result = ((*id).Sup.Id == (*LOC1).Sup.Id);
	popFrame();
	return result;
}
N_NIMCALL(void, TMP1955)(void* p, NI op) {
	tidobj130009* a;
	a = (tidobj130009*)p;
}
N_NOINLINE(void, identsInit)(void) {
	nimfr("idents", "idents.nim")
	nimln(63, "idents.nim");
	wordcounter_130206 = 1;
	nimln(105, "idents.nim");
	asgnRefNoCycle((void**) &idanon_130468, getident_130448(((NimStringDesc*) &TMP852)));
	popFrame();
}

N_NOINLINE(void, identsDatInit)(void) {
static TNimNode* TMP849[3];
static TNimNode TMP842[5];
NTI130009.size = sizeof(tidobj130009);
NTI130009.kind = 17;
NTI130009.base = (&NTI1009);
NTI130009.flags = 3;
TMP842[0].kind = 1;
TMP842[0].offset = offsetof(tidobj130009, Id);
TMP842[0].typ = (&NTI105);
TMP842[0].name = "id";
NTI130009.node = &TMP842[0];
NTI130015.size = sizeof(tident130015);
NTI130015.kind = 17;
NTI130015.base = (&NTI130009);
NTI130015.flags = 2;
TMP849[0] = &TMP842[2];
TMP842[2].kind = 1;
TMP842[2].offset = offsetof(tident130015, S);
TMP842[2].typ = (&NTI143);
TMP842[2].name = "s";
TMP849[1] = &TMP842[3];
TMP842[3].kind = 1;
TMP842[3].offset = offsetof(tident130015, Next);
TMP842[3].typ = (&NTI130013);
TMP842[3].name = "next";
TMP849[2] = &TMP842[4];
TMP842[4].kind = 1;
TMP842[4].offset = offsetof(tident130015, H);
TMP842[4].typ = (&NTI101009);
TMP842[4].name = "h";
TMP842[1].len = 3; TMP842[1].kind = 2; TMP842[1].sons = &TMP849[0];
NTI130015.node = &TMP842[1];
NTI130013.size = sizeof(tident130015*);
NTI130013.kind = 22;
NTI130013.base = (&NTI130015);
NTI130013.flags = 2;
NTI130013.marker = TMP850;
NTI130011.size = sizeof(tidobj130009*);
NTI130011.kind = 22;
NTI130011.base = (&NTI130009);
NTI130011.flags = 2;
NTI130011.marker = TMP1955;
}

