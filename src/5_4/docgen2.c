/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <setjmp.h>
typedef struct tnode169647 tnode169647;
typedef struct tpasscontext218003 tpasscontext218003;
typedef struct tgen415006 tgen415006;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TNimObject TNimObject;
typedef struct tdocumentor284005 tdocumentor284005;
typedef struct tsym169677 tsym169677;
typedef struct tidobj131009 tidobj131009;
typedef struct ttypeseq169679 ttypeseq169679;
typedef struct ttype169681 ttype169681;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY169771 TY169771;
typedef struct tinstantiation169667 tinstantiation169667;
typedef struct tscope169671 tscope169671;
typedef struct tstrtable169651 tstrtable169651;
typedef struct tsymseq169649 tsymseq169649;
typedef struct tident131015 tident131015;
typedef struct tlineinfo128308 tlineinfo128308;
typedef struct tloc169661 tloc169661;
typedef struct trope126007 trope126007;
typedef struct tlib169665 tlib169665;
typedef struct NimStringDesc NimStringDesc;
typedef struct E_Base E_Base;
typedef struct TSafePoint TSafePoint;
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
typedef struct tstringtable103609 tstringtable103609;
typedef struct trstgenerator282012 trstgenerator282012;
typedef struct TY282028 TY282028;
typedef struct ttocentry282008 ttocentry282008;
typedef struct trstnode271016 trstnode271016;
typedef struct tpass218015 tpass218015;
typedef struct trodreader207023 trodreader207023;
typedef struct tnodeseq169641 tnodeseq169641;
typedef struct TY169763 TY169763;
typedef struct tlistentry100011 tlistentry100011;
typedef struct tbasechunk21641 tbasechunk21641;
typedef struct tfreecell21633 tfreecell21633;
typedef struct tkeyvaluepairseq103607 tkeyvaluepairseq103607;
typedef struct TY81913 TY81913;
typedef struct TY271092 TY271092;
typedef struct tindex207021 tindex207021;
typedef struct tiitable176212 tiitable176212;
typedef struct tiipairseq176210 tiipairseq176210;
typedef struct tiipair176208 tiipair176208;
typedef struct tidtable169693 tidtable169693;
typedef struct tidpairseq169691 tidpairseq169691;
typedef struct tidpair169689 tidpair169689;
typedef struct tmemfile205204 tmemfile205204;
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
struct tgen415006 {
  tpasscontext218003 Sup;
tdocumentor284005* Doc;
tsym169677* Module;
};
struct tidobj131009 {
  TNimObject Sup;
NI Id;
};
struct TGenericSeq {
NI len;
NI reserved;
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
typedef NIM_CHAR TY611[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY611 data;
};
struct E_Base {
  TNimObject Sup;
E_Base* parent;
NCSTRING name;
NimStringDesc* message;
NimStringDesc* trace;
};
typedef struct {
N_NIMCALL_PTR(NIM_BOOL, ClPrc) (E_Base* e, void* ClEnv);
void* ClEnv;
} TY10626;
struct TSafePoint {
TSafePoint* prev;
NI status;
jmp_buf context;
NIM_BOOL hasRaiseAction;
TY10626 raiseAction;
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
struct ttocentry282008 {
trstnode271016* N;
NimStringDesc* Refname;
NimStringDesc* Header;
};
typedef N_NIMCALL_PTR(NimStringDesc*, tfindfilehandler272016) (NimStringDesc* filename);
typedef N_NIMCALL_PTR(void, tmsghandler272014) (NimStringDesc* filename, NI line, NI col, NU8 msgkind, NimStringDesc* arg);
typedef NimStringDesc* TY282036[5];
struct trstgenerator282012 {
  TNimObject Sup;
NU8 Target;
tstringtable103609* Config;
NI Splitafter;
TY282028* Tocpart;
NIM_BOOL Hastoc;
NimStringDesc* Theindex;
NU8 Options;
tfindfilehandler272016 Findfile;
tmsghandler272014 Msghandler;
NimStringDesc* Filename;
TY282036 Meta;
};
typedef trope126007* tsections284003[23];
struct tdocumentor284005 {
  trstgenerator282012 Sup;
trope126007* Moddesc;
NI Id;
tsections284003 Toc;
tsections284003 Section;
NimStringDesc* Indexvalfilename;
};
typedef N_NIMCALL_PTR(tpasscontext218003*, tpassopen218007) (tsym169677* module);
typedef N_NIMCALL_PTR(tpasscontext218003*, tpassopencached218009) (tsym169677* module, trodreader207023* rd);
typedef N_NIMCALL_PTR(tnode169647*, tpassprocess218013) (tpasscontext218003* p, tnode169647* toplevelstmt);
typedef N_NIMCALL_PTR(tnode169647*, tpassclose218011) (tpasscontext218003* p, tnode169647* n);
struct tpass218015 {
tpassopen218007 Field0;
tpassopencached218009 Field1;
tpassprocess218013 Field2;
tpassclose218011 Field3;
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
struct trope126007 {
  TNimObject Sup;
trope126007* Left;
trope126007* Right;
NI Length;
NimStringDesc* Data;
};
struct tlistentry100011 {
  TNimObject Sup;
tlistentry100011* Prev;
tlistentry100011* Next;
};
struct tlib169665 {
  tlistentry100011 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope126007* Name;
tnode169647* Path;
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
struct TY81913 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
struct tstringtable103609 {
  TNimObject Sup;
NI Counter;
tkeyvaluepairseq103607* Data;
NU8 Mode;
};
struct trstnode271016 {
NU8 Kind;
NimStringDesc* Text;
NI Level;
TY271092* Sons;
};
struct tiipair176208 {
NI Key;
NI Val;
};
struct tiitable176212 {
NI Counter;
tiipairseq176210* Data;
};
struct tindex207021 {
NI Lastidxkey;
NI Lastidxval;
tiitable176212 Tab;
NimStringDesc* R;
NI Offset;
};
struct tidpair169689 {
tidobj131009* Key;
TNimObject* Val;
};
struct tidtable169693 {
NI Counter;
tidpairseq169691* Data;
};
struct tmemfile205204 {
void* Mem;
NI Size;
int Handle;
};
struct trodreader207023 {
  TNimObject Sup;
NI Pos;
NCSTRING S;
NU32 Options;
NU8 Reason;
TY169763* Moddeps;
TY169763* Files;
NI Dataidx;
NI Convertersidx;
NI Initidx;
NI Interfidx;
NI Compilerprocsidx;
NI Methodsidx;
NimStringDesc* Filename;
tindex207021 Index;
tindex207021 Imports;
NI Readerindex;
NI Line;
NI Moduleid;
tidtable169693 Syms;
tmemfile205204 Memfile;
tsymseq169649* Methods;
NIM_BOOL Inviewmode;
};
struct tfreecell21633 {
tfreecell21633* Next;
NI Zerofield;
};
struct ttypeseq169679 {
  TGenericSeq Sup;
  ttype169681* data[SEQ_DECL_SIZE];
};
struct TY169771 {
  TGenericSeq Sup;
  tinstantiation169667* data[SEQ_DECL_SIZE];
};
struct tsymseq169649 {
  TGenericSeq Sup;
  tsym169677* data[SEQ_DECL_SIZE];
};
struct TY282028 {
  TGenericSeq Sup;
  ttocentry282008 data[SEQ_DECL_SIZE];
};
struct tnodeseq169641 {
  TGenericSeq Sup;
  tnode169647* data[SEQ_DECL_SIZE];
};
struct TY169763 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct tkeyvaluepairseq103607 {
  TGenericSeq Sup;
  TY81913 data[SEQ_DECL_SIZE];
};
struct TY271092 {
  TGenericSeq Sup;
  trstnode271016* data[SEQ_DECL_SIZE];
};
struct tiipairseq176210 {
  TGenericSeq Sup;
  tiipair176208 data[SEQ_DECL_SIZE];
};
struct tidpairseq169691 {
  TGenericSeq Sup;
  tidpair169689 data[SEQ_DECL_SIZE];
};
N_NIMCALL(tnode169647*, close_415012)(tpasscontext218003* p, tnode169647* n);
N_NIMCALL(void, chckObj)(TNimType* obj, TNimType* subclass);
N_NIMCALL(void, writeoutput_286003)(tdocumentor284005* d, NimStringDesc* filename, NimStringDesc* outext, NIM_BOOL usewarning);
N_NIMCALL(NimStringDesc*, tofilename_129088)(NI32 fileidx);
static N_INLINE(void, pushSafePoint)(TSafePoint* s);
N_NIMCALL(void, generateindex_285988)(tdocumentor284005* d);
static N_INLINE(void, popSafePoint)(void);
static N_INLINE(void, setFrame)(TFrame* s);
N_NIMCALL(NIM_BOOL, isObj)(TNimType* obj, TNimType* subclass);
static N_INLINE(E_Base*, getCurrentException)(void);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(void, popCurrentException)(void);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell38846*, usrtocell_42243)(void* usr);
static N_INLINE(void, rtladdzct_43402)(tcell38846* c);
N_NOINLINE(void, addzct_42215)(tcellseq38862* s, tcell38846* c);
N_NIMCALL(void, reraiseException)(void);
N_NIMCALL(tnode169647*, processnode_415040)(tpasscontext218003* c, tnode169647* n);
N_NIMCALL(void, generatedoc_284902)(tdocumentor284005* d, tnode169647* n);
N_NIMCALL(tpasscontext218003*, myopen_415048)(tsym169677* module);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP6787)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(tdocumentor284005*, newdocumentor_284038)(NimStringDesc* filename, tstringtable103609* config);
N_NIMCALL(void, finishdoc2pass_415076)(NimStringDesc* project);
STRING_LITERAL(TMP6785, "html", 4);
NIM_CONST tpass218015 docgen2pass_415073 = {myopen_415048,
NIM_NIL,
processnode_415040,
close_415012}
;
extern TNimType NTI218003; /* TPassContext */
TNimType NTI415006; /* TGen */
extern TNimType NTI284007; /* PDoc */
extern TNimType NTI169645; /* PSym */
extern NIM_BOOL gwholeproject_105118;
extern TSafePoint* exchandler_12028;
extern TFrame* frameptr_12027;
extern TNimType NTI1033; /* EIO */
extern E_Base* currexception_12030;
extern tgcheap40816 gch_40842;
TNimType NTI415008; /* PGen */
extern tstringtable103609* gconfigvars_105188;

static N_INLINE(void, pushSafePoint)(TSafePoint* s) {
	(*s).hasRaiseAction = NIM_FALSE;
	(*s).prev = exchandler_12028;
	exchandler_12028 = s;
}

static N_INLINE(void, popSafePoint)(void) {
	exchandler_12028 = (*exchandler_12028).prev;
}

static N_INLINE(void, setFrame)(TFrame* s) {
	frameptr_12027 = s;
}

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_12027;
	frameptr_12027 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_12027 = (*frameptr_12027).prev;
}

static N_INLINE(E_Base*, getCurrentException)(void) {
	E_Base* result;
	nimfr("getCurrentException", "system.nim")
	result = 0;
	nimln(2215, "system.nim");
	result = currexception_12030;
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

static N_INLINE(void, popCurrentException)(void) {
	asgnRefNoCycle((void**) &currexception_12030, (*currexception_12030).parent);
}

N_NIMCALL(tnode169647*, close_415012)(tpasscontext218003* p, tnode169647* n) {
	tnode169647* result;
	tgen415006* g;
	NIM_BOOL usewarning;
	nimfr("close", "docgen2.nim")
	result = 0;
	nimln(23, "docgen2.nim");
	if (p) chckObj((*p).Sup.m_type, (&NTI415006));
	g = ((tgen415006*) (p));
	nimln(24, "docgen2.nim");
	nimln(717, "system.nim");
	nimln(717, "system.nim");
	usewarning = !((((*(*g).Module).Flags &(1<<((((NU8) 12))&31)))!=0));
	nimln(25, "docgen2.nim");
	{
		NIM_BOOL LOC3;
		NimStringDesc* LOC7;
		TSafePoint TMP6786;
		nimln(25, "docgen2.nim");
		LOC3 = gwholeproject_105118;
		if (LOC3) goto LA4;
		nimln(716, "system.nim");
		LOC3 = (((*(*g).Module).Flags &(1<<((((NU8) 12))&31)))!=0);
		LA4: ;
		if (!LOC3) goto LA5;
		nimln(26, "docgen2.nim");
		nimln(892, "ast.nim");
		LOC7 = 0;
		LOC7 = tofilename_129088(((NI32) ((*(*g).Module).Position)));
		writeoutput_286003((*g).Doc, LOC7, ((NimStringDesc*) &TMP6785), usewarning);
		nimln(27, "docgen2.nim");
		pushSafePoint(&TMP6786);
		TMP6786.status = setjmp(TMP6786.context);
		if (TMP6786.status == 0) {
			nimln(28, "docgen2.nim");
			generateindex_285988((*g).Doc);
			popSafePoint();
		}
		else {
			popSafePoint();
			setFrame((TFrame*)&F);
			if (isObj(getCurrentException()->Sup.m_type, (&NTI1033))) {
				TMP6786.status = 0;
				popCurrentException();
			}
		}
		if (TMP6786.status != 0) reraiseException();
	}
	LA5: ;
	popFrame();
	return result;
}

N_NIMCALL(tnode169647*, processnode_415040)(tpasscontext218003* c, tnode169647* n) {
	tnode169647* result;
	tgen415006* g;
	nimfr("processNode", "docgen2.nim")
	result = 0;
	nimln(33, "docgen2.nim");
	result = n;
	nimln(34, "docgen2.nim");
	if (c) chckObj((*c).Sup.m_type, (&NTI415006));
	g = ((tgen415006*) (c));
	nimln(35, "docgen2.nim");
	generatedoc_284902((*g).Doc, n);
	popFrame();
	return result;
}
N_NIMCALL(void, TMP6787)(void* p, NI op) {
	tgen415006* a;
	a = (tgen415006*)p;
	nimGCvisit((void*)(*a).Doc, op);
	nimGCvisit((void*)(*a).Module, op);
}

N_NIMCALL(tpasscontext218003*, myopen_415048)(tsym169677* module) {
	tpasscontext218003* result;
	tgen415006* g;
	tdocumentor284005* d;
	NimStringDesc* LOC1;
	nimfr("myOpen", "docgen2.nim")
	result = 0;
	g = 0;
	nimln(39, "docgen2.nim");
	g = (tgen415006*) newObj((&NTI415008), sizeof(tgen415006));
	(*g).Sup.Sup.m_type = (&NTI415006);
	nimln(40, "docgen2.nim");
	asgnRefNoCycle((void**) &(*g).Module, module);
	nimln(41, "docgen2.nim");
	nimln(892, "ast.nim");
	LOC1 = 0;
	LOC1 = tofilename_129088(((NI32) ((*module).Position)));
	d = newdocumentor_284038(LOC1, gconfigvars_105188);
	nimln(42, "docgen2.nim");
	(*d).Sup.Hastoc = NIM_TRUE;
	nimln(43, "docgen2.nim");
	asgnRefNoCycle((void**) &(*g).Doc, d);
	nimln(44, "docgen2.nim");
	result = &g->Sup;
	popFrame();
	return result;
}

N_NIMCALL(void, finishdoc2pass_415076)(NimStringDesc* project) {
	nimfr("finishDoc2Pass", "docgen2.nim")
	popFrame();
}
N_NOINLINE(void, docgen2Init)(void) {
	nimfr("docgen2", "docgen2.nim")
	popFrame();
}

N_NOINLINE(void, docgen2DatInit)(void) {
static TNimNode* TMP6784[2];
static TNimNode TMP6782[3];
NTI415006.size = sizeof(tgen415006);
NTI415006.kind = 17;
NTI415006.base = (&NTI218003);
NTI415006.flags = 2;
TMP6784[0] = &TMP6782[1];
TMP6782[1].kind = 1;
TMP6782[1].offset = offsetof(tgen415006, Doc);
TMP6782[1].typ = (&NTI284007);
TMP6782[1].name = "doc";
TMP6784[1] = &TMP6782[2];
TMP6782[2].kind = 1;
TMP6782[2].offset = offsetof(tgen415006, Module);
TMP6782[2].typ = (&NTI169645);
TMP6782[2].name = "module";
TMP6782[0].len = 2; TMP6782[0].kind = 2; TMP6782[0].sons = &TMP6784[0];
NTI415006.node = &TMP6782[0];
NTI415008.size = sizeof(tgen415006*);
NTI415008.kind = 22;
NTI415008.base = (&NTI415006);
NTI415008.flags = 2;
NTI415008.marker = TMP6787;
}

