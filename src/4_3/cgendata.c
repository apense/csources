/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"
typedef struct trope126007 trope126007;
typedef struct TY337130 TY337130;
typedef struct tcgen337028 tcgen337028;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tpasscontext218003 tpasscontext218003;
typedef struct TNimObject TNimObject;
typedef struct tsym169677 tsym169677;
typedef struct NimStringDesc NimStringDesc;
typedef struct tidtable169693 tidtable169693;
typedef struct tidpairseq169691 tidpairseq169691;
typedef struct tidpair169689 tidpair169689;
typedef struct tidobj131009 tidobj131009;
typedef struct tintset166041 tintset166041;
typedef struct ttrunk166037 ttrunk166037;
typedef struct ttrunkseq166039 ttrunkseq166039;
typedef struct tlinkedlist100017 tlinkedlist100017;
typedef struct tlistentry100011 tlistentry100011;
typedef struct tcproc337024 tcproc337024;
typedef struct ttypeseq169679 ttypeseq169679;
typedef struct ttype169681 ttype169681;
typedef struct tnodetable169705 tnodetable169705;
typedef struct tnodepairseq169703 tnodepairseq169703;
typedef struct tnodepair169701 tnodepair169701;
typedef struct tnode169647 tnode169647;
typedef struct tsymseq169649 tsymseq169649;
typedef struct tnodeseq169641 tnodeseq169641;
typedef struct TY337089 TY337089;
typedef struct tblock337022 tblock337022;
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
typedef struct TY169771 TY169771;
typedef struct tinstantiation169667 tinstantiation169667;
typedef struct tscope169671 tscope169671;
typedef struct tstrtable169651 tstrtable169651;
typedef struct tident131015 tident131015;
typedef struct tlineinfo128308 tlineinfo128308;
typedef struct tloc169661 tloc169661;
typedef struct tlib169665 tlib169665;
typedef struct tbasechunk21641 tbasechunk21641;
typedef struct tfreecell21633 tfreecell21633;
typedef struct TY169763 TY169763;
struct TGenericSeq {
NI len;
NI reserved;
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
struct TNimObject {
TNimType* m_type;
};
struct tpasscontext218003 {
  TNimObject Sup;
NIM_BOOL Fromcache;
};
typedef NIM_CHAR TY611[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY611 data;
};
typedef trope126007* tcfilesections337012[18];
struct tidpair169689 {
tidobj131009* Key;
TNimObject* Val;
};
struct tidtable169693 {
NI Counter;
tidpairseq169691* Data;
};
struct tintset166041 {
NI Counter;
NI Max;
ttrunk166037* Head;
ttrunkseq166039* Data;
};
struct tlinkedlist100017 {
tlistentry100011* Head;
tlistentry100011* Tail;
NI Counter;
};
struct tnodepair169701 {
NI H;
tnode169647* Key;
NI Val;
};
struct tnodetable169705 {
NI Counter;
tnodepairseq169703* Data;
};
typedef trope126007* TY337122[10];
struct tcgen337028 {
  tpasscontext218003 Sup;
tsym169677* Module;
NimStringDesc* Filename;
tcfilesections337012 S;
NIM_BOOL Preventstacktrace;
NIM_BOOL Usesthreadvars;
NIM_BOOL Framedeclared;
NIM_BOOL Isheaderfile;
NimStringDesc* Cfilename;
tidtable169693 Typecache;
tidtable169693 Forwtypecache;
tintset166041 Declaredthings;
tintset166041 Declaredprotos;
tlinkedlist100017 Headerfiles;
tintset166041 Typeinfomarker;
tcproc337024* Initproc;
tcproc337024* Preinitproc;
ttypeseq169679* Typestack;
tnodetable169705 Datacache;
tsymseq169649* Forwardedprocs;
NI Typenodes;
NI Nimtypes;
trope126007* Typenodesname;
trope126007* Nimtypesname;
NI Labels;
TY337122 Extensionloaders;
};
typedef trope126007* tcprocsections337016[3];
struct tblock337022 {
NI Id;
trope126007* Label;
tcprocsections337016 Sections;
NIM_BOOL Isloop;
NI16 Nestedtrystmts;
NI16 Framelen;
};
struct tcproc337024 {
tsym169677* Prc;
NIM_BOOL Beforeretneeded;
NIM_BOOL Threadvaraccessed;
tnodeseq169641* Nestedtrystmts;
NI Inexceptblock;
NI Labels;
TY337089* Blocks;
NI Breakidx;
NU32 Options;
NI Maxframelen;
tcgen337028* Module;
NI Withinloop;
NI Gcframeid;
trope126007* Gcframetype;
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
struct tidobj131009 {
  TNimObject Sup;
NI Id;
};
struct tstrtable169651 {
NI Counter;
tsymseq169649* Data;
};
struct tlineinfo128308 {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct tloc169661 {
NU8 K;
NU8 S;
NU8 Flags;
ttype169681* T;
trope126007* R;
trope126007* Heaproot;
NI A;
};
struct tsym169677 {
  tidobj131009 Sup;
NU8 Kind;
union {
struct {ttypeseq169679* Typeinstcache;
} S1;
struct {TY169771* Procinstcache;
tscope169671* Scope;
} S2;
struct {TY169771* Usedgenerics;
tstrtable169651 Tab;
} S3;
} kindU;
NU16 Magic;
ttype169681* Typ;
tident131015* Name;
tlineinfo128308 Info;
tsym169677* Owner;
NU32 Flags;
tnode169647* Ast;
NU32 Options;
NI Position;
NI Offset;
tloc169661 Loc;
tlib169665* Annex;
tnode169647* Constraint;
};
struct trope126007 {
  TNimObject Sup;
trope126007* Left;
trope126007* Right;
NI Length;
NimStringDesc* Data;
};
typedef NI TY21621[8];
struct ttrunk166037 {
ttrunk166037* Next;
NI Key;
TY21621 Bits;
};
struct tlistentry100011 {
  TNimObject Sup;
tlistentry100011* Prev;
tlistentry100011* Next;
};
struct ttype169681 {
  tidobj131009 Sup;
NU8 Kind;
NU8 Callconv;
NU32 Flags;
ttypeseq169679* Sons;
tnode169647* N;
tsym169677* Destructor;
tsym169677* Owner;
tsym169677* Sym;
NI64 Size;
NI Align;
tloc169661 Loc;
};
struct tnode169647 {
ttype169681* Typ;
tlineinfo128308 Info;
NU8 Flags;
NU8 Kind;
union {
struct {NI64 Intval;
} S1;
struct {NF64 Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {tsym169677* Sym;
} S4;
struct {tident131015* Ident;
} S5;
struct {tnodeseq169641* Sons;
} S6;
} kindU;
NimStringDesc* Comment;
};
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
struct tinstantiation169667 {
tsym169677* Sym;
ttypeseq169679* Concretetypes;
TY169763* Usedby;
};
struct tscope169671 {
NI Depthlevel;
tstrtable169651 Symbols;
tscope169671* Parent;
};
struct tident131015 {
  tidobj131009 Sup;
NimStringDesc* S;
tident131015* Next;
NI H;
};
struct tlib169665 {
  tlistentry100011 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope126007* Name;
tnode169647* Path;
};
struct tfreecell21633 {
tfreecell21633* Next;
NI Zerofield;
};
struct TY337130 {
  TGenericSeq Sup;
  tcgen337028* data[SEQ_DECL_SIZE];
};
struct tidpairseq169691 {
  TGenericSeq Sup;
  tidpair169689 data[SEQ_DECL_SIZE];
};
struct ttrunkseq166039 {
  TGenericSeq Sup;
  ttrunk166037* data[SEQ_DECL_SIZE];
};
struct ttypeseq169679 {
  TGenericSeq Sup;
  ttype169681* data[SEQ_DECL_SIZE];
};
struct tnodepairseq169703 {
  TGenericSeq Sup;
  tnodepair169701 data[SEQ_DECL_SIZE];
};
struct tsymseq169649 {
  TGenericSeq Sup;
  tsym169677* data[SEQ_DECL_SIZE];
};
struct tnodeseq169641 {
  TGenericSeq Sup;
  tnode169647* data[SEQ_DECL_SIZE];
};
struct TY337089 {
  TGenericSeq Sup;
  tblock337022 data[SEQ_DECL_SIZE];
};
struct TY169771 {
  TGenericSeq Sup;
  tinstantiation169667* data[SEQ_DECL_SIZE];
};
struct TY169763 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP5262)(void* p, NI op);
N_NIMCALL(void, TMP5263)(void* p, NI op);
N_NIMCALL(void, TMP5265)(void* p, NI op);
N_NIMCALL(void, TMP5266)(void* p, NI op);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell38846*, usrtocell_42243)(void* usr);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(void, rtladdzct_43402)(tcell38846* c);
N_NOINLINE(void, addzct_42215)(tcellseq38862* s, tcell38846* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
static N_INLINE(trope126007**, s_337159)(tcproc337024* p, NU8 s);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(trope126007**, procsec_337176)(tcproc337024* p, NU8 s);
N_NIMCALL(tcgen337028*, bmod_337185)(tsym169677* module);
N_NIMCALL(tcproc337024*, newproc_337191)(tsym169677* prc, tcgen337028* module);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_44224)(tcell38846* c);
static N_INLINE(NIM_BOOL, canbecycleroot_42265)(tcell38846* c);
static N_INLINE(void, rtladdcycleroot_42836)(tcell38846* c);
N_NOINLINE(void, incl_39656)(tcellset38858* s, tcell38846* cell);
static N_INLINE(void, decref_43802)(tcell38846* c);
trope126007* mainmodprocs_337126;
trope126007* mainmodinit_337127;
trope126007* maindatinit_337128;
trope126007* gmapping_337129;
TY337130* gmodules_337150;
extern TNimType NTI218003; /* TPassContext */
TNimType NTI337028; /* TCGen */
extern TNimType NTI169645; /* PSym */
extern TNimType NTI143; /* string */
extern TNimType NTI126005; /* PRope */
TNimType NTI337012; /* TCFileSections */
extern TNimType NTI132; /* bool */
extern TNimType NTI169693; /* TIdTable */
extern TNimType NTI166041; /* TIntSet */
extern TNimType NTI100017; /* TLinkedList */
TNimType NTI337024; /* TCProc */
extern TNimType NTI169641; /* TNodeSeq */
extern TNimType NTI105; /* int */
extern TNimType NTI1005; /* Natural */
TNimType NTI337022; /* TBlock */
TNimType NTI337016; /* TCProcSections */
extern TNimType NTI109; /* int16 */
TNimType NTI337089; /* seq[TBlock] */
extern TNimType NTI105103; /* set[TOption] */
TNimType NTI337020; /* BProc */
extern TNimType NTI169679; /* TTypeSeq */
extern TNimType NTI169705; /* TNodeTable */
extern TNimType NTI169649; /* TSymSeq */
TNimType NTI337122; /* array[48..57, PRope] */
TNimType NTI337018; /* BModule */
TNimType NTI337130; /* seq[BModule] */
extern TFrame* frameptr_12027;
extern tgcheap40816 gch_40842;
NI gforwardedprocscounter_337151;
extern NU32 goptions_105106;
N_NIMCALL(void, TMP5262)(void* p, NI op) {
	TY337089* a;
	NI LOC1;
	NI LOC2;
	a = (TY337089*)p;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Label, op);
	for (LOC2 = 0; LOC2 < 3; LOC2++) {
	nimGCvisit((void*)a->data[LOC1].Sections[LOC2], op);
	}
	}
}
N_NIMCALL(void, TMP5263)(void* p, NI op) {
	tcproc337024* a;
	a = (tcproc337024*)p;
	nimGCvisit((void*)(*a).Prc, op);
	nimGCvisit((void*)(*a).Nestedtrystmts, op);
	nimGCvisit((void*)(*a).Blocks, op);
	nimGCvisit((void*)(*a).Module, op);
	nimGCvisit((void*)(*a).Gcframetype, op);
}
N_NIMCALL(void, TMP5265)(void* p, NI op) {
	tcgen337028* a;
	NI LOC1;
	NI LOC2;
	a = (tcgen337028*)p;
	nimGCvisit((void*)(*a).Module, op);
	nimGCvisit((void*)(*a).Filename, op);
	for (LOC1 = 0; LOC1 < 18; LOC1++) {
	nimGCvisit((void*)(*a).S[LOC1], op);
	}
	nimGCvisit((void*)(*a).Cfilename, op);
	nimGCvisit((void*)(*a).Typecache.Data, op);
	nimGCvisit((void*)(*a).Forwtypecache.Data, op);
	nimGCvisit((void*)(*a).Declaredthings.Head, op);
	nimGCvisit((void*)(*a).Declaredthings.Data, op);
	nimGCvisit((void*)(*a).Declaredprotos.Head, op);
	nimGCvisit((void*)(*a).Declaredprotos.Data, op);
	nimGCvisit((void*)(*a).Headerfiles.Head, op);
	nimGCvisit((void*)(*a).Headerfiles.Tail, op);
	nimGCvisit((void*)(*a).Typeinfomarker.Head, op);
	nimGCvisit((void*)(*a).Typeinfomarker.Data, op);
	nimGCvisit((void*)(*a).Initproc, op);
	nimGCvisit((void*)(*a).Preinitproc, op);
	nimGCvisit((void*)(*a).Typestack, op);
	nimGCvisit((void*)(*a).Datacache.Data, op);
	nimGCvisit((void*)(*a).Forwardedprocs, op);
	nimGCvisit((void*)(*a).Typenodesname, op);
	nimGCvisit((void*)(*a).Nimtypesname, op);
	for (LOC2 = 0; LOC2 < 10; LOC2++) {
	nimGCvisit((void*)(*a).Extensionloaders[LOC2], op);
	}
}
N_NIMCALL(void, TMP5266)(void* p, NI op) {
	TY337130* a;
	NI LOC1;
	a = (TY337130*)p;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1], op);
	}
}

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_12027;
	frameptr_12027 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_12027 = (*frameptr_12027).prev;
}

static N_INLINE(tcell38846*, usrtocell_42243)(void* usr) {
	tcell38846* result;
	nimfr("usrToCell", "gc.nim")
	result = 0;
	nimln(106, "gc.nim");
	nimln(106, "gc.nim");
	nimln(106, "gc.nim");
	result = ((tcell38846*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(tcell38846))))));
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
		if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA3;
		nimln(221, "gc.nim");
		rtladdzct_43402(c);
	}
	LA3: ;
	popFrame();
}

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

static N_INLINE(trope126007**, s_337159)(tcproc337024* p, NU8 s) {
	trope126007** result;
	NI TMP5267;
	nimfr("s", "cgendata.nim")
	result = 0;
	nimln(124, "cgendata.nim");
	nimln(124, "cgendata.nim");
	nimln(124, "cgendata.nim");
	TMP5267 = subInt((*p).Blocks->Sup.len, 1);
	if ((NU)((NI64)(TMP5267)) >= (NU)((*p).Blocks->Sup.len)) raiseIndexError();
	result = &(*p).Blocks->data[(NI64)(TMP5267)].Sections[(s)- 0];
	popFrame();
	return result;
}

static N_INLINE(trope126007**, procsec_337176)(tcproc337024* p, NU8 s) {
	trope126007** result;
	nimfr("procSec", "cgendata.nim")
	result = 0;
	nimln(128, "cgendata.nim");
	if ((NU)(0) >= (NU)((*p).Blocks->Sup.len)) raiseIndexError();
	result = &(*p).Blocks->data[0].Sections[(s)- 0];
	popFrame();
	return result;
}

N_NIMCALL(tcgen337028*, bmod_337185)(tsym169677* module) {
	tcgen337028* result;
	nimfr("bmod", "cgendata.nim")
	result = 0;
	nimln(132, "cgendata.nim");
	if ((NU)((*module).Position) >= (NU)(gmodules_337150->Sup.len)) raiseIndexError();
	result = gmodules_337150->data[(*module).Position];
	popFrame();
	return result;
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

static N_INLINE(void, decref_43802)(tcell38846* c) {
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

N_NIMCALL(tcproc337024*, newproc_337191)(tsym169677* prc, tcgen337028* module) {
	tcproc337024* result;
	nimfr("newProc", "cgendata.nim")
	result = 0;
	nimln(135, "cgendata.nim");
	result = (tcproc337024*) newObj((&NTI337020), sizeof(tcproc337024));
	nimln(136, "cgendata.nim");
	asgnRefNoCycle((void**) &(*result).Prc, prc);
	nimln(137, "cgendata.nim");
	asgnRef((void**) &(*result).Module, module);
	nimln(138, "cgendata.nim");
	{
		nimln(684, "system.nim");
		nimln(684, "system.nim");
		if (!!((prc == NIM_NIL))) goto LA3;
		nimln(138, "cgendata.nim");
		(*result).Options = (*prc).Options;
	}
	goto LA1;
	LA3: ;
	{
		nimln(139, "cgendata.nim");
		(*result).Options = goptions_105106;
	}
	LA1: ;
	nimln(140, "cgendata.nim");
	if ((*result).Blocks) nimGCunrefNoCycle((*result).Blocks);
	(*result).Blocks = (TY337089*) newSeqRC1((&NTI337089), 1);
	nimln(141, "cgendata.nim");
	if ((*result).Nestedtrystmts) nimGCunrefNoCycle((*result).Nestedtrystmts);
	(*result).Nestedtrystmts = (tnodeseq169641*) newSeqRC1((&NTI169641), 0);
	popFrame();
	return result;
}
N_NOINLINE(void, cgendataInit)(void) {
	nimfr("cgendata", "cgendata.nim")
	nimln(119, "cgendata.nim");
	if (gmodules_337150) nimGCunrefNoCycle(gmodules_337150);
	gmodules_337150 = (TY337130*) newSeqRC1((&NTI337130), 0);
	nimln(120, "cgendata.nim");
	gforwardedprocscounter_337151 = 0;
	popFrame();
}

N_NOINLINE(void, cgendataDatInit)(void) {
static TNimNode* TMP5259[25];
static TNimNode* TMP5260[14];
static TNimNode* TMP5261[6];
static TNimNode TMP5257[48];
NTI337028.size = sizeof(tcgen337028);
NTI337028.kind = 17;
NTI337028.base = (&NTI218003);
TMP5259[0] = &TMP5257[1];
TMP5257[1].kind = 1;
TMP5257[1].offset = offsetof(tcgen337028, Module);
TMP5257[1].typ = (&NTI169645);
TMP5257[1].name = "module";
TMP5259[1] = &TMP5257[2];
TMP5257[2].kind = 1;
TMP5257[2].offset = offsetof(tcgen337028, Filename);
TMP5257[2].typ = (&NTI143);
TMP5257[2].name = "filename";
TMP5259[2] = &TMP5257[3];
NTI337012.size = sizeof(tcfilesections337012);
NTI337012.kind = 16;
NTI337012.base = (&NTI126005);
NTI337012.flags = 2;
TMP5257[3].kind = 1;
TMP5257[3].offset = offsetof(tcgen337028, S);
TMP5257[3].typ = (&NTI337012);
TMP5257[3].name = "s";
TMP5259[3] = &TMP5257[4];
TMP5257[4].kind = 1;
TMP5257[4].offset = offsetof(tcgen337028, Preventstacktrace);
TMP5257[4].typ = (&NTI132);
TMP5257[4].name = "PreventStackTrace";
TMP5259[4] = &TMP5257[5];
TMP5257[5].kind = 1;
TMP5257[5].offset = offsetof(tcgen337028, Usesthreadvars);
TMP5257[5].typ = (&NTI132);
TMP5257[5].name = "usesThreadVars";
TMP5259[5] = &TMP5257[6];
TMP5257[6].kind = 1;
TMP5257[6].offset = offsetof(tcgen337028, Framedeclared);
TMP5257[6].typ = (&NTI132);
TMP5257[6].name = "FrameDeclared";
TMP5259[6] = &TMP5257[7];
TMP5257[7].kind = 1;
TMP5257[7].offset = offsetof(tcgen337028, Isheaderfile);
TMP5257[7].typ = (&NTI132);
TMP5257[7].name = "isHeaderFile";
TMP5259[7] = &TMP5257[8];
TMP5257[8].kind = 1;
TMP5257[8].offset = offsetof(tcgen337028, Cfilename);
TMP5257[8].typ = (&NTI143);
TMP5257[8].name = "cfilename";
TMP5259[8] = &TMP5257[9];
TMP5257[9].kind = 1;
TMP5257[9].offset = offsetof(tcgen337028, Typecache);
TMP5257[9].typ = (&NTI169693);
TMP5257[9].name = "typeCache";
TMP5259[9] = &TMP5257[10];
TMP5257[10].kind = 1;
TMP5257[10].offset = offsetof(tcgen337028, Forwtypecache);
TMP5257[10].typ = (&NTI169693);
TMP5257[10].name = "forwTypeCache";
TMP5259[10] = &TMP5257[11];
TMP5257[11].kind = 1;
TMP5257[11].offset = offsetof(tcgen337028, Declaredthings);
TMP5257[11].typ = (&NTI166041);
TMP5257[11].name = "declaredThings";
TMP5259[11] = &TMP5257[12];
TMP5257[12].kind = 1;
TMP5257[12].offset = offsetof(tcgen337028, Declaredprotos);
TMP5257[12].typ = (&NTI166041);
TMP5257[12].name = "declaredProtos";
TMP5259[12] = &TMP5257[13];
TMP5257[13].kind = 1;
TMP5257[13].offset = offsetof(tcgen337028, Headerfiles);
TMP5257[13].typ = (&NTI100017);
TMP5257[13].name = "headerFiles";
TMP5259[13] = &TMP5257[14];
TMP5257[14].kind = 1;
TMP5257[14].offset = offsetof(tcgen337028, Typeinfomarker);
TMP5257[14].typ = (&NTI166041);
TMP5257[14].name = "typeInfoMarker";
TMP5259[14] = &TMP5257[15];
NTI337024.size = sizeof(tcproc337024);
NTI337024.kind = 18;
NTI337024.base = 0;
TMP5260[0] = &TMP5257[17];
TMP5257[17].kind = 1;
TMP5257[17].offset = offsetof(tcproc337024, Prc);
TMP5257[17].typ = (&NTI169645);
TMP5257[17].name = "prc";
TMP5260[1] = &TMP5257[18];
TMP5257[18].kind = 1;
TMP5257[18].offset = offsetof(tcproc337024, Beforeretneeded);
TMP5257[18].typ = (&NTI132);
TMP5257[18].name = "BeforeRetNeeded";
TMP5260[2] = &TMP5257[19];
TMP5257[19].kind = 1;
TMP5257[19].offset = offsetof(tcproc337024, Threadvaraccessed);
TMP5257[19].typ = (&NTI132);
TMP5257[19].name = "ThreadVarAccessed";
TMP5260[3] = &TMP5257[20];
TMP5257[20].kind = 1;
TMP5257[20].offset = offsetof(tcproc337024, Nestedtrystmts);
TMP5257[20].typ = (&NTI169641);
TMP5257[20].name = "nestedTryStmts";
TMP5260[4] = &TMP5257[21];
TMP5257[21].kind = 1;
TMP5257[21].offset = offsetof(tcproc337024, Inexceptblock);
TMP5257[21].typ = (&NTI105);
TMP5257[21].name = "inExceptBlock";
TMP5260[5] = &TMP5257[22];
TMP5257[22].kind = 1;
TMP5257[22].offset = offsetof(tcproc337024, Labels);
TMP5257[22].typ = (&NTI1005);
TMP5257[22].name = "labels";
TMP5260[6] = &TMP5257[23];
NTI337022.size = sizeof(tblock337022);
NTI337022.kind = 18;
NTI337022.base = 0;
NTI337022.flags = 2;
TMP5261[0] = &TMP5257[25];
TMP5257[25].kind = 1;
TMP5257[25].offset = offsetof(tblock337022, Id);
TMP5257[25].typ = (&NTI105);
TMP5257[25].name = "id";
TMP5261[1] = &TMP5257[26];
TMP5257[26].kind = 1;
TMP5257[26].offset = offsetof(tblock337022, Label);
TMP5257[26].typ = (&NTI126005);
TMP5257[26].name = "label";
TMP5261[2] = &TMP5257[27];
NTI337016.size = sizeof(tcprocsections337016);
NTI337016.kind = 16;
NTI337016.base = (&NTI126005);
NTI337016.flags = 2;
TMP5257[27].kind = 1;
TMP5257[27].offset = offsetof(tblock337022, Sections);
TMP5257[27].typ = (&NTI337016);
TMP5257[27].name = "sections";
TMP5261[3] = &TMP5257[28];
TMP5257[28].kind = 1;
TMP5257[28].offset = offsetof(tblock337022, Isloop);
TMP5257[28].typ = (&NTI132);
TMP5257[28].name = "isLoop";
TMP5261[4] = &TMP5257[29];
TMP5257[29].kind = 1;
TMP5257[29].offset = offsetof(tblock337022, Nestedtrystmts);
TMP5257[29].typ = (&NTI109);
TMP5257[29].name = "nestedTryStmts";
TMP5261[5] = &TMP5257[30];
TMP5257[30].kind = 1;
TMP5257[30].offset = offsetof(tblock337022, Framelen);
TMP5257[30].typ = (&NTI109);
TMP5257[30].name = "frameLen";
TMP5257[24].len = 6; TMP5257[24].kind = 2; TMP5257[24].sons = &TMP5261[0];
NTI337022.node = &TMP5257[24];
NTI337089.size = sizeof(TY337089*);
NTI337089.kind = 24;
NTI337089.base = (&NTI337022);
NTI337089.flags = 2;
NTI337089.marker = TMP5262;
TMP5257[23].kind = 1;
TMP5257[23].offset = offsetof(tcproc337024, Blocks);
TMP5257[23].typ = (&NTI337089);
TMP5257[23].name = "blocks";
TMP5260[7] = &TMP5257[31];
TMP5257[31].kind = 1;
TMP5257[31].offset = offsetof(tcproc337024, Breakidx);
TMP5257[31].typ = (&NTI105);
TMP5257[31].name = "breakIdx";
TMP5260[8] = &TMP5257[32];
TMP5257[32].kind = 1;
TMP5257[32].offset = offsetof(tcproc337024, Options);
TMP5257[32].typ = (&NTI105103);
TMP5257[32].name = "options";
TMP5260[9] = &TMP5257[33];
TMP5257[33].kind = 1;
TMP5257[33].offset = offsetof(tcproc337024, Maxframelen);
TMP5257[33].typ = (&NTI105);
TMP5257[33].name = "maxFrameLen";
TMP5260[10] = &TMP5257[34];
TMP5257[34].kind = 1;
TMP5257[34].offset = offsetof(tcproc337024, Module);
TMP5257[34].typ = (&NTI337018);
TMP5257[34].name = "module";
TMP5260[11] = &TMP5257[35];
TMP5257[35].kind = 1;
TMP5257[35].offset = offsetof(tcproc337024, Withinloop);
TMP5257[35].typ = (&NTI105);
TMP5257[35].name = "withinLoop";
TMP5260[12] = &TMP5257[36];
TMP5257[36].kind = 1;
TMP5257[36].offset = offsetof(tcproc337024, Gcframeid);
TMP5257[36].typ = (&NTI1005);
TMP5257[36].name = "gcFrameId";
TMP5260[13] = &TMP5257[37];
TMP5257[37].kind = 1;
TMP5257[37].offset = offsetof(tcproc337024, Gcframetype);
TMP5257[37].typ = (&NTI126005);
TMP5257[37].name = "gcFrameType";
TMP5257[16].len = 14; TMP5257[16].kind = 2; TMP5257[16].sons = &TMP5260[0];
NTI337024.node = &TMP5257[16];
NTI337020.size = sizeof(tcproc337024*);
NTI337020.kind = 22;
NTI337020.base = (&NTI337024);
NTI337020.marker = TMP5263;
TMP5257[15].kind = 1;
TMP5257[15].offset = offsetof(tcgen337028, Initproc);
TMP5257[15].typ = (&NTI337020);
TMP5257[15].name = "initProc";
TMP5259[15] = &TMP5257[38];
TMP5257[38].kind = 1;
TMP5257[38].offset = offsetof(tcgen337028, Preinitproc);
TMP5257[38].typ = (&NTI337020);
TMP5257[38].name = "preInitProc";
TMP5259[16] = &TMP5257[39];
TMP5257[39].kind = 1;
TMP5257[39].offset = offsetof(tcgen337028, Typestack);
TMP5257[39].typ = (&NTI169679);
TMP5257[39].name = "typeStack";
TMP5259[17] = &TMP5257[40];
TMP5257[40].kind = 1;
TMP5257[40].offset = offsetof(tcgen337028, Datacache);
TMP5257[40].typ = (&NTI169705);
TMP5257[40].name = "dataCache";
TMP5259[18] = &TMP5257[41];
TMP5257[41].kind = 1;
TMP5257[41].offset = offsetof(tcgen337028, Forwardedprocs);
TMP5257[41].typ = (&NTI169649);
TMP5257[41].name = "forwardedProcs";
TMP5259[19] = &TMP5257[42];
TMP5257[42].kind = 1;
TMP5257[42].offset = offsetof(tcgen337028, Typenodes);
TMP5257[42].typ = (&NTI105);
TMP5257[42].name = "typeNodes";
TMP5259[20] = &TMP5257[43];
TMP5257[43].kind = 1;
TMP5257[43].offset = offsetof(tcgen337028, Nimtypes);
TMP5257[43].typ = (&NTI105);
TMP5257[43].name = "nimTypes";
TMP5259[21] = &TMP5257[44];
TMP5257[44].kind = 1;
TMP5257[44].offset = offsetof(tcgen337028, Typenodesname);
TMP5257[44].typ = (&NTI126005);
TMP5257[44].name = "typeNodesName";
TMP5259[22] = &TMP5257[45];
TMP5257[45].kind = 1;
TMP5257[45].offset = offsetof(tcgen337028, Nimtypesname);
TMP5257[45].typ = (&NTI126005);
TMP5257[45].name = "nimTypesName";
TMP5259[23] = &TMP5257[46];
TMP5257[46].kind = 1;
TMP5257[46].offset = offsetof(tcgen337028, Labels);
TMP5257[46].typ = (&NTI1005);
TMP5257[46].name = "labels";
TMP5259[24] = &TMP5257[47];
NTI337122.size = sizeof(TY337122);
NTI337122.kind = 16;
NTI337122.base = (&NTI126005);
NTI337122.flags = 2;
TMP5257[47].kind = 1;
TMP5257[47].offset = offsetof(tcgen337028, Extensionloaders);
TMP5257[47].typ = (&NTI337122);
TMP5257[47].name = "extensionLoaders";
TMP5257[0].len = 25; TMP5257[0].kind = 2; TMP5257[0].sons = &TMP5259[0];
NTI337028.node = &TMP5257[0];
NTI337018.size = sizeof(tcgen337028*);
NTI337018.kind = 22;
NTI337018.base = (&NTI337028);
NTI337018.marker = TMP5265;
NTI337130.size = sizeof(TY337130*);
NTI337130.kind = 24;
NTI337130.base = (&NTI337018);
NTI337130.flags = 2;
NTI337130.marker = TMP5266;
}

