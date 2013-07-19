/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct tlinkedlist100017 tlinkedlist100017;
typedef struct tlistentry100011 tlistentry100011;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tcell38846 tcell38846;
typedef struct tcellset38858 tcellset38858;
typedef struct tgcheap40816 tgcheap40816;
typedef struct tcellseq38862 tcellseq38862;
typedef struct tpagedesc38854 tpagedesc38854;
typedef struct tmemregion22410 tmemregion22410;
typedef struct tsmallchunk21643 tsmallchunk21643;
typedef struct tllchunk22404 tllchunk22404;
typedef struct tbigchunk21645 tbigchunk21645;
typedef struct tintset21618 tintset21618;
typedef struct ttrunk21614 ttrunk21614;
typedef struct tavlnode22408 tavlnode22408;
typedef struct tgcstat40814 tgcstat40814;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tstrentry100013 tstrentry100013;
typedef struct tbasechunk21641 tbasechunk21641;
typedef struct tfreecell21633 tfreecell21633;
struct tlinkedlist100017 {
tlistentry100011* Head;
tlistentry100011* Tail;
NI Counter;
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
struct tlistentry100011 {
  TNimObject Sup;
tlistentry100011* Prev;
tlistentry100011* Next;
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
struct TGenericSeq {
NI len;
NI reserved;
};
typedef NIM_CHAR TY611[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY611 data;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct tstrentry100013 {
  tlistentry100011 Sup;
NimStringDesc* Data;
};
typedef N_NIMCALL_PTR(NIM_BOOL, tcompareproc100019) (tlistentry100011* entry, void* closure);
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
N_NIMCALL(void, initlinkedlist_100030)(tlinkedlist100017* list);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(void, append_100036)(tlinkedlist100017* list, tlistentry100011* entry);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_44224)(tcell38846* c);
static N_INLINE(NIM_BOOL, canbecycleroot_42265)(tcell38846* c);
static N_INLINE(void, rtladdcycleroot_42836)(tcell38846* c);
N_NOINLINE(void, incl_39656)(tcellset38858* s, tcell38846* cell);
static N_INLINE(tcell38846*, usrtocell_42243)(void* usr);
static N_INLINE(void, decref_43802)(tcell38846* c);
static N_INLINE(void, rtladdzct_43402)(tcell38846* c);
N_NOINLINE(void, addzct_42215)(tcellseq38862* s, tcell38846* c);
N_NIMCALL(void, hiddenraiseassert_71620)(NimStringDesc* msg);
N_NIMCALL(NIM_BOOL, contains_100214)(tlinkedlist100017 list, NimStringDesc* data);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP255)(void* p, NI op);
N_NIMCALL(void, chckObj)(TNimType* obj, TNimType* subclass);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(tstrentry100013*, newstrentry_100234)(NimStringDesc* data);
N_NIMCALL(void, TMP256)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
N_NIMCALL(void, appendstr_100255)(tlinkedlist100017* list, NimStringDesc* data);
N_NIMCALL(NIM_BOOL, includestr_100262)(tlinkedlist100017* list, NimStringDesc* data);
N_NIMCALL(void, prepend_100270)(tlinkedlist100017* list, tlistentry100011* entry);
N_NIMCALL(void, prependstr_100414)(tlinkedlist100017* list, NimStringDesc* data);
N_NIMCALL(void, insertbefore_100421)(tlinkedlist100017* list, tlistentry100011* pos, tlistentry100011* entry);
N_NIMCALL(void, remove_100635)(tlinkedlist100017* list, tlistentry100011* entry);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NIMCALL(void, bringtofront_100694)(tlinkedlist100017* list, tlistentry100011* entry);
N_NIMCALL(void, excludestr_100741)(tlinkedlist100017* list, NimStringDesc* data);
N_NIMCALL(tlistentry100011*, find_100762)(tlinkedlist100017 list, tcompareproc100019 fn, void* closure);
STRING_LITERAL(TMP253, "list.tail.next == nil ", 22);
STRING_LITERAL(TMP257, "list.head.prev == nil ", 22);
STRING_LITERAL(TMP258, "not pos == nil ", 15);
extern TFrame* frameptr_12027;
extern tgcheap40816 gch_40842;
extern TNimType NTI1009; /* TObject */
TNimType NTI100011; /* TListEntry */
TNimType NTI100009; /* PListEntry */
TNimType NTI100013; /* TStrEntry */
extern TNimType NTI143; /* string */
TNimType NTI100015; /* PStrEntry */
TNimType NTI100017; /* TLinkedList */
extern TNimType NTI105; /* int */

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_12027;
	frameptr_12027 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_12027 = (*frameptr_12027).prev;
}

N_NIMCALL(void, initlinkedlist_100030)(tlinkedlist100017* list) {
	nimfr("InitLinkedList", "lists.nim")
	nimln(28, "lists.nim");
	(*list).Counter = 0;
	nimln(29, "lists.nim");
	unsureAsgnRef((void**) &(*list).Head, NIM_NIL);
	nimln(30, "lists.nim");
	unsureAsgnRef((void**) &(*list).Tail, NIM_NIL);
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

static N_INLINE(NIM_BOOL, canbecycleroot_42265)(tcell38846* c) {
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

static N_INLINE(void, rtladdcycleroot_42836)(tcell38846* c) {
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

static N_INLINE(void, incref_44224)(tcell38846* c) {
	nimfr("incRef", "gc.nim")
	nimln(201, "gc.nim");
	nimln(201, "gc.nim");
	(*c).Refcount = (NI)((NU32)((*c).Refcount) + (NU32)(8));
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

static N_INLINE(void, decref_43802)(tcell38846* c) {
	nimfr("decRef", "gc.nim")
	nimln(191, "gc.nim");
	{
		nimln(155, "gc.nim");
		(*c).Refcount -= 8;
		nimln(156, "gc.nim");
		if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA3;
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
		tcell38846* LOC5;
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
		tcell38846* LOC10;
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

N_NIMCALL(void, append_100036)(tlinkedlist100017* list, tlistentry100011* entry) {
	nimfr("Append", "lists.nim")
	nimln(33, "lists.nim");
	(*list).Counter = addInt((*list).Counter, 1);
	nimln(34, "lists.nim");
	asgnRef((void**) &(*entry).Next, NIM_NIL);
	nimln(35, "lists.nim");
	asgnRef((void**) &(*entry).Prev, (*list).Tail);
	nimln(36, "lists.nim");
	{
		nimln(684, "system.nim");
		nimln(684, "system.nim");
		if (!!(((*list).Tail == NIM_NIL))) goto LA3;
		nimln(37, "lists.nim");
		{
			nimln(37, "lists.nim");
			nimln(37, "lists.nim");
			if (!!(((*(*list).Tail).Next == NIM_NIL))) goto LA7;
			nimln(37, "lists.nim");
			hiddenraiseassert_71620(((NimStringDesc*) &TMP253));
		}
		LA7: ;
		nimln(38, "lists.nim");
		asgnRef((void**) &(*(*list).Tail).Next, entry);
	}
	LA3: ;
	nimln(39, "lists.nim");
	unsureAsgnRef((void**) &(*list).Tail, entry);
	nimln(40, "lists.nim");
	{
		nimln(40, "lists.nim");
		if (!((*list).Head == NIM_NIL)) goto LA11;
		nimln(40, "lists.nim");
		unsureAsgnRef((void**) &(*list).Head, entry);
	}
	LA11: ;
	popFrame();
}
N_NIMCALL(void, TMP255)(void* p, NI op) {
	tlistentry100011* a;
	a = (tlistentry100011*)p;
	nimGCvisit((void*)(*a).Prev, op);
	nimGCvisit((void*)(*a).Next, op);
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
	LOC13 = memcmp(((NCSTRING) ((*a).data)), ((NCSTRING) ((*b).data)), (NI32)((*a).Sup.len * 1));
	LOC11 = (LOC13 == ((NI32) 0));
	LA12: ;
	result = LOC11;
	goto BeforeRet;
	BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, contains_100214)(tlinkedlist100017 list, NimStringDesc* data) {
	NIM_BOOL result;
	tlistentry100011* it;
	nimfr("Contains", "lists.nim")
	result = 0;
	nimln(43, "lists.nim");
	it = list.Head;
	nimln(44, "lists.nim");
	while (1) {
		nimln(684, "system.nim");
		nimln(684, "system.nim");
		if (!!((it == NIM_NIL))) goto LA1;
		nimln(45, "lists.nim");
		{
			nimln(45, "lists.nim");
			if (it) chckObj((*it).Sup.m_type, (&NTI100013));
			if (!eqStrings((*((tstrentry100013*) (it))).Data, data)) goto LA4;
			nimln(46, "lists.nim");
			nimln(46, "lists.nim");
			result = NIM_TRUE;
			goto BeforeRet;
		}
		LA4: ;
		nimln(47, "lists.nim");
		it = (*it).Next;
	} LA1: ;
	BeforeRet: ;
	popFrame();
	return result;
}
N_NIMCALL(void, TMP256)(void* p, NI op) {
	tstrentry100013* a;
	a = (tstrentry100013*)p;
	nimGCvisit((void*)(*a).Sup.Prev, op);
	nimGCvisit((void*)(*a).Sup.Next, op);
	nimGCvisit((void*)(*a).Data, op);
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

N_NIMCALL(tstrentry100013*, newstrentry_100234)(NimStringDesc* data) {
	tstrentry100013* result;
	NimStringDesc* LOC1;
	nimfr("newStrEntry", "lists.nim")
	result = 0;
	nimln(50, "lists.nim");
	result = (tstrentry100013*) newObj((&NTI100015), sizeof(tstrentry100013));
	(*result).Sup.Sup.m_type = (&NTI100013);
	nimln(51, "lists.nim");
	LOC1 = 0;
	LOC1 = (*result).Data; (*result).Data = copyStringRC1(data);
	if (LOC1) nimGCunrefNoCycle(LOC1);
	popFrame();
	return result;
}

N_NIMCALL(void, appendstr_100255)(tlinkedlist100017* list, NimStringDesc* data) {
	tstrentry100013* LOC1;
	nimfr("AppendStr", "lists.nim")
	nimln(54, "lists.nim");
	nimln(54, "lists.nim");
	LOC1 = 0;
	LOC1 = newstrentry_100234(data);
	append_100036(list, &LOC1->Sup);
	popFrame();
}

N_NIMCALL(NIM_BOOL, includestr_100262)(tlinkedlist100017* list, NimStringDesc* data) {
	NIM_BOOL result;
	nimfr("IncludeStr", "lists.nim")
	result = 0;
	nimln(57, "lists.nim");
	{
		NIM_BOOL LOC3;
		nimln(57, "lists.nim");
		LOC3 = contains_100214((*list), data);
		if (!LOC3) goto LA4;
		nimln(57, "lists.nim");
		nimln(57, "lists.nim");
		result = NIM_TRUE;
		goto BeforeRet;
	}
	LA4: ;
	nimln(58, "lists.nim");
	appendstr_100255(list, data);
	BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(void, prepend_100270)(tlinkedlist100017* list, tlistentry100011* entry) {
	nimfr("Prepend", "lists.nim")
	nimln(61, "lists.nim");
	(*list).Counter = addInt((*list).Counter, 1);
	nimln(62, "lists.nim");
	asgnRef((void**) &(*entry).Prev, NIM_NIL);
	nimln(63, "lists.nim");
	asgnRef((void**) &(*entry).Next, (*list).Head);
	nimln(64, "lists.nim");
	{
		nimln(684, "system.nim");
		nimln(684, "system.nim");
		if (!!(((*list).Head == NIM_NIL))) goto LA3;
		nimln(65, "lists.nim");
		{
			nimln(65, "lists.nim");
			nimln(65, "lists.nim");
			if (!!(((*(*list).Head).Prev == NIM_NIL))) goto LA7;
			nimln(65, "lists.nim");
			hiddenraiseassert_71620(((NimStringDesc*) &TMP257));
		}
		LA7: ;
		nimln(66, "lists.nim");
		asgnRef((void**) &(*(*list).Head).Prev, entry);
	}
	LA3: ;
	nimln(67, "lists.nim");
	unsureAsgnRef((void**) &(*list).Head, entry);
	nimln(68, "lists.nim");
	{
		nimln(68, "lists.nim");
		if (!((*list).Tail == NIM_NIL)) goto LA11;
		nimln(68, "lists.nim");
		unsureAsgnRef((void**) &(*list).Tail, entry);
	}
	LA11: ;
	popFrame();
}

N_NIMCALL(void, prependstr_100414)(tlinkedlist100017* list, NimStringDesc* data) {
	tstrentry100013* LOC1;
	nimfr("PrependStr", "lists.nim")
	nimln(71, "lists.nim");
	nimln(71, "lists.nim");
	LOC1 = 0;
	LOC1 = newstrentry_100234(data);
	prepend_100270(list, &LOC1->Sup);
	popFrame();
}

N_NIMCALL(void, insertbefore_100421)(tlinkedlist100017* list, tlistentry100011* pos, tlistentry100011* entry) {
	nimfr("InsertBefore", "lists.nim")
	nimln(74, "lists.nim");
	{
		nimln(74, "lists.nim");
		nimln(74, "lists.nim");
		nimln(74, "lists.nim");
		if (!!(!((pos == NIM_NIL)))) goto LA3;
		nimln(74, "lists.nim");
		hiddenraiseassert_71620(((NimStringDesc*) &TMP258));
	}
	LA3: ;
	nimln(75, "lists.nim");
	{
		nimln(75, "lists.nim");
		if (!(pos == (*list).Head)) goto LA7;
		nimln(76, "lists.nim");
		prepend_100270(list, entry);
	}
	goto LA5;
	LA7: ;
	{
		nimln(78, "lists.nim");
		(*list).Counter = addInt((*list).Counter, 1);
		nimln(79, "lists.nim");
		asgnRef((void**) &(*entry).Next, pos);
		nimln(80, "lists.nim");
		asgnRef((void**) &(*entry).Prev, (*pos).Prev);
		nimln(81, "lists.nim");
		{
			nimln(684, "system.nim");
			nimln(684, "system.nim");
			if (!!(((*pos).Prev == NIM_NIL))) goto LA12;
			nimln(81, "lists.nim");
			asgnRef((void**) &(*(*pos).Prev).Next, entry);
		}
		LA12: ;
		nimln(82, "lists.nim");
		asgnRef((void**) &(*pos).Prev, entry);
	}
	LA5: ;
	popFrame();
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

N_NIMCALL(void, remove_100635)(tlinkedlist100017* list, tlistentry100011* entry) {
	nimfr("Remove", "lists.nim")
	nimln(85, "lists.nim");
	(*list).Counter = subInt((*list).Counter, 1);
	nimln(86, "lists.nim");
	{
		nimln(86, "lists.nim");
		if (!(entry == (*list).Tail)) goto LA3;
		nimln(87, "lists.nim");
		unsureAsgnRef((void**) &(*list).Tail, (*entry).Prev);
	}
	LA3: ;
	nimln(88, "lists.nim");
	{
		nimln(88, "lists.nim");
		if (!(entry == (*list).Head)) goto LA7;
		nimln(89, "lists.nim");
		unsureAsgnRef((void**) &(*list).Head, (*entry).Next);
	}
	LA7: ;
	nimln(90, "lists.nim");
	{
		nimln(684, "system.nim");
		nimln(684, "system.nim");
		if (!!(((*entry).Next == NIM_NIL))) goto LA11;
		nimln(90, "lists.nim");
		asgnRef((void**) &(*(*entry).Next).Prev, (*entry).Prev);
	}
	LA11: ;
	nimln(91, "lists.nim");
	{
		nimln(684, "system.nim");
		nimln(684, "system.nim");
		if (!!(((*entry).Prev == NIM_NIL))) goto LA15;
		nimln(91, "lists.nim");
		asgnRef((void**) &(*(*entry).Prev).Next, (*entry).Next);
	}
	LA15: ;
	popFrame();
}

N_NIMCALL(void, bringtofront_100694)(tlinkedlist100017* list, tlistentry100011* entry) {
	nimfr("bringToFront", "lists.nim")
	nimln(94, "lists.nim");
	{
		nimln(94, "lists.nim");
		if (!(entry == (*list).Head)) goto LA3;
		nimln(94, "lists.nim");
		goto BeforeRet;
	}
	LA3: ;
	nimln(95, "lists.nim");
	{
		nimln(95, "lists.nim");
		if (!(entry == (*list).Tail)) goto LA7;
		nimln(95, "lists.nim");
		unsureAsgnRef((void**) &(*list).Tail, (*entry).Prev);
	}
	LA7: ;
	nimln(96, "lists.nim");
	{
		nimln(684, "system.nim");
		nimln(684, "system.nim");
		if (!!(((*entry).Next == NIM_NIL))) goto LA11;
		nimln(96, "lists.nim");
		asgnRef((void**) &(*(*entry).Next).Prev, (*entry).Prev);
	}
	LA11: ;
	nimln(97, "lists.nim");
	{
		nimln(684, "system.nim");
		nimln(684, "system.nim");
		if (!!(((*entry).Prev == NIM_NIL))) goto LA15;
		nimln(97, "lists.nim");
		asgnRef((void**) &(*(*entry).Prev).Next, (*entry).Next);
	}
	LA15: ;
	nimln(98, "lists.nim");
	asgnRef((void**) &(*entry).Prev, NIM_NIL);
	nimln(99, "lists.nim");
	asgnRef((void**) &(*entry).Next, (*list).Head);
	nimln(100, "lists.nim");
	unsureAsgnRef((void**) &(*list).Head, entry);
	BeforeRet: ;
	popFrame();
}

N_NIMCALL(void, excludestr_100741)(tlinkedlist100017* list, NimStringDesc* data) {
	tlistentry100011* it;
	nimfr("ExcludeStr", "lists.nim")
	nimln(103, "lists.nim");
	it = (*list).Head;
	nimln(104, "lists.nim");
	while (1) {
		tlistentry100011* nxt;
		nimln(684, "system.nim");
		nimln(684, "system.nim");
		if (!!((it == NIM_NIL))) goto LA1;
		nimln(105, "lists.nim");
		nxt = (*it).Next;
		nimln(106, "lists.nim");
		{
			nimln(106, "lists.nim");
			if (it) chckObj((*it).Sup.m_type, (&NTI100013));
			if (!eqStrings((*((tstrentry100013*) (it))).Data, data)) goto LA4;
			nimln(106, "lists.nim");
			remove_100635(list, it);
		}
		LA4: ;
		nimln(107, "lists.nim");
		it = nxt;
	} LA1: ;
	popFrame();
}

N_NIMCALL(tlistentry100011*, find_100762)(tlinkedlist100017 list, tcompareproc100019 fn, void* closure) {
	tlistentry100011* result;
	nimfr("Find", "lists.nim")
	result = 0;
	nimln(110, "lists.nim");
	result = list.Head;
	nimln(111, "lists.nim");
	while (1) {
		nimln(684, "system.nim");
		nimln(684, "system.nim");
		if (!!((result == NIM_NIL))) goto LA1;
		nimln(112, "lists.nim");
		{
			NIM_BOOL LOC4;
			nimln(112, "lists.nim");
			LOC4 = fn(result, closure);
			if (!LOC4) goto LA5;
			nimln(112, "lists.nim");
			goto BeforeRet;
		}
		LA5: ;
		nimln(113, "lists.nim");
		result = (*result).Next;
	} LA1: ;
	BeforeRet: ;
	popFrame();
	return result;
}
N_NOINLINE(void, listsInit)(void) {
	nimfr("lists", "lists.nim")
	popFrame();
}

N_NOINLINE(void, listsDatInit)(void) {
static TNimNode* TMP254[2];
static TNimNode* TMP3507[3];
static TNimNode TMP251[8];
NTI100011.size = sizeof(tlistentry100011);
NTI100011.kind = 17;
NTI100011.base = (&NTI1009);
TMP254[0] = &TMP251[1];
NTI100009.size = sizeof(tlistentry100011*);
NTI100009.kind = 22;
NTI100009.base = (&NTI100011);
NTI100009.marker = TMP255;
TMP251[1].kind = 1;
TMP251[1].offset = offsetof(tlistentry100011, Prev);
TMP251[1].typ = (&NTI100009);
TMP251[1].name = "prev";
TMP254[1] = &TMP251[2];
TMP251[2].kind = 1;
TMP251[2].offset = offsetof(tlistentry100011, Next);
TMP251[2].typ = (&NTI100009);
TMP251[2].name = "next";
TMP251[0].len = 2; TMP251[0].kind = 2; TMP251[0].sons = &TMP254[0];
NTI100011.node = &TMP251[0];
NTI100013.size = sizeof(tstrentry100013);
NTI100013.kind = 17;
NTI100013.base = (&NTI100011);
NTI100013.flags = 2;
TMP251[3].kind = 1;
TMP251[3].offset = offsetof(tstrentry100013, Data);
TMP251[3].typ = (&NTI143);
TMP251[3].name = "data";
NTI100013.node = &TMP251[3];
NTI100015.size = sizeof(tstrentry100013*);
NTI100015.kind = 22;
NTI100015.base = (&NTI100013);
NTI100015.flags = 2;
NTI100015.marker = TMP256;
NTI100017.size = sizeof(tlinkedlist100017);
NTI100017.kind = 18;
NTI100017.base = 0;
NTI100017.flags = 2;
TMP3507[0] = &TMP251[5];
TMP251[5].kind = 1;
TMP251[5].offset = offsetof(tlinkedlist100017, Head);
TMP251[5].typ = (&NTI100009);
TMP251[5].name = "head";
TMP3507[1] = &TMP251[6];
TMP251[6].kind = 1;
TMP251[6].offset = offsetof(tlinkedlist100017, Tail);
TMP251[6].typ = (&NTI100009);
TMP251[6].name = "tail";
TMP3507[2] = &TMP251[7];
TMP251[7].kind = 1;
TMP251[7].offset = offsetof(tlinkedlist100017, Counter);
TMP251[7].typ = (&NTI105);
TMP251[7].name = "Counter";
TMP251[4].len = 3; TMP251[4].kind = 2; TMP251[4].sons = &TMP3507[0];
NTI100017.node = &TMP251[4];
}

