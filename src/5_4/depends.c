/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"
typedef struct trope126007 trope126007;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tnode169647 tnode169647;
typedef struct tpasscontext218003 tpasscontext218003;
typedef struct tgen414010 tgen414010;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TNimObject TNimObject;
typedef struct tsym169677 tsym169677;
typedef struct ttype169681 ttype169681;
typedef struct tlineinfo128308 tlineinfo128308;
typedef struct tident131015 tident131015;
typedef struct tnodeseq169641 tnodeseq169641;
typedef struct tidobj131009 tidobj131009;
typedef struct ttypeseq169679 ttypeseq169679;
typedef struct TY169771 TY169771;
typedef struct tinstantiation169667 tinstantiation169667;
typedef struct tscope169671 tscope169671;
typedef struct tstrtable169651 tstrtable169651;
typedef struct tsymseq169649 tsymseq169649;
typedef struct tloc169661 tloc169661;
typedef struct tlib169665 tlib169665;
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
typedef struct tpass218015 tpass218015;
typedef struct trodreader207023 trodreader207023;
typedef struct TY169763 TY169763;
typedef struct tlistentry100011 tlistentry100011;
typedef struct tbasechunk21641 tbasechunk21641;
typedef struct tfreecell21633 tfreecell21633;
typedef struct tindex207021 tindex207021;
typedef struct tiitable176212 tiitable176212;
typedef struct tiipairseq176210 tiipairseq176210;
typedef struct tiipair176208 tiipair176208;
typedef struct tidtable169693 tidtable169693;
typedef struct tidpairseq169691 tidpairseq169691;
typedef struct tidpair169689 tidpair169689;
typedef struct tmemfile205204 tmemfile205204;
struct TGenericSeq {
NI len;
NI reserved;
};
typedef NIM_CHAR TY611[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY611 data;
};
typedef trope126007* TY177141[2];
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
struct tgen414010 {
  tpasscontext218003 Sup;
tsym169677* Module;
};
struct tlineinfo128308 {
NI16 Line;
NI16 Col;
NI32 Fileindex;
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
typedef NU8 TY169850[19];
struct tidobj131009 {
  TNimObject Sup;
NI Id;
};
struct tstrtable169651 {
NI Counter;
tsymseq169649* Data;
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
struct tident131015 {
  tidobj131009 Sup;
NimStringDesc* S;
tident131015* Next;
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
struct trope126007 {
  TNimObject Sup;
trope126007* Left;
trope126007* Right;
NI Length;
NimStringDesc* Data;
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
struct tnodeseq169641 {
  TGenericSeq Sup;
  tnode169647* data[SEQ_DECL_SIZE];
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
struct TY169763 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct tiipairseq176210 {
  TGenericSeq Sup;
  tiipair176208 data[SEQ_DECL_SIZE];
};
struct tidpairseq169691 {
  TGenericSeq Sup;
  tidpair169689 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, adddependencyaux_414018)(NimStringDesc* importing, NimStringDesc* imported);
N_NIMCALL(void, appf_126085)(trope126007** c, NimStringDesc* frmt, trope126007** args, NI argsLen0);
N_NIMCALL(trope126007*, torope_126058)(NimStringDesc* s);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(tnode169647*, adddotdependency_414030)(tpasscontext218003* c, tnode169647* n);
N_NIMCALL(void, chckObj)(TNimType* obj, TNimType* subclass);
static N_INLINE(NI, sonslen_170003)(tnode169647* n);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(NimStringDesc*, getmodulename_258012)(tnode169647* n);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(void, generatedot_414005)(NimStringDesc* project);
N_NIMCALL(void, writerope_127407)(trope126007* head, NimStringDesc* filename, NIM_BOOL usewarning);
N_NIMCALL(trope126007*, ropef_126079)(NimStringDesc* frmt, trope126007** args, NI argsLen0);
N_NIMCALL(NimStringDesc*, nosChangeFileExt)(NimStringDesc* filename, NimStringDesc* ext);
N_NIMCALL(NimStringDesc*, nosextractFilename)(NimStringDesc* path);
N_NIMCALL(tpasscontext218003*, myopen_414108)(tsym169677* module);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP6781)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell38846*, usrtocell_42243)(void* usr);
static N_INLINE(void, rtladdzct_43402)(tcell38846* c);
N_NOINLINE(void, addzct_42215)(tcellseq38862* s, tcell38846* c);
STRING_LITERAL(TMP6773, "$1 -> $2;$n", 11);
static NIM_CONST TY169850 TMP6774 = {
0xEC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP6775, "sons", 4);
STRING_LITERAL(TMP6778, "digraph $1 {$n$2}$n", 19);
STRING_LITERAL(TMP6779, "", 0);
STRING_LITERAL(TMP6780, "dot", 3);
NIM_CONST tpass218015 gendependpass_414131 = {myopen_414108,
NIM_NIL,
adddotdependency_414030,
NIM_NIL}
;
trope126007* gdotgraph_414015;
extern TFrame* frameptr_12027;
extern TNimType NTI218003; /* TPassContext */
TNimType NTI414010; /* TGen */
extern TNimType NTI169645; /* PSym */
TNimType NTI414012; /* PGen */
extern tgcheap40816 gch_40842;

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_12027;
	frameptr_12027 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_12027 = (*frameptr_12027).prev;
}

N_NIMCALL(void, adddependencyaux_414018)(NimStringDesc* importing, NimStringDesc* imported) {
	TY177141 LOC1;
	nimfr("addDependencyAux", "depends.nim")
	nimln(25, "depends.nim");
	memset((void*)LOC1, 0, sizeof(LOC1));
	nimln(25, "depends.nim");
	LOC1[0] = torope_126058(importing);
	nimln(25, "depends.nim");
	LOC1[1] = torope_126058(imported);
	appf_126085(&gdotgraph_414015, ((NimStringDesc*) &TMP6773), LOC1, 2);
	popFrame();
}

static N_INLINE(NI, sonslen_170003)(tnode169647* n) {
	NI result;
	nimfr("sonsLen", "ast.nim")
	result = 0;
	nimln(1175, "ast.nim");
	{
		nimln(1175, "ast.nim");
		if (((TMP6774[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP6775));
		if (!(*n).kindU.S6.Sons == 0) goto LA3;
		nimln(1175, "ast.nim");
		result = 0;
	}
	goto LA1;
	LA3: ;
	{
		nimln(1176, "ast.nim");
		nimln(1176, "ast.nim");
		if (((TMP6774[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP6775));
		result = (*n).kindU.S6.Sons->Sup.len;
	}
	LA1: ;
	popFrame();
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

N_NIMCALL(tnode169647*, adddotdependency_414030)(tpasscontext218003* c, tnode169647* n) {
	tnode169647* result;
	tgen414010* g;
	nimfr("addDotDependency", "depends.nim")
	result = 0;
	nimln(29, "depends.nim");
	result = n;
	nimln(30, "depends.nim");
	if (c) chckObj((*c).Sup.m_type, (&NTI414010));
	g = ((tgen414010*) (c));
	nimln(31, "depends.nim");
	switch ((*n).Kind) {
	case ((NU8) 115):
	{
		NI i_414044;
		NI HEX3Atmp_414086;
		NI LOC2;
		NI TMP6776;
		NI res_414088;
		i_414044 = 0;
		HEX3Atmp_414086 = 0;
		nimln(33, "depends.nim");
		nimln(33, "depends.nim");
		nimln(33, "depends.nim");
		LOC2 = sonslen_170003(n);
		TMP6776 = subInt(LOC2, 1);
		HEX3Atmp_414086 = (NI32)(TMP6776);
		nimln(1274, "system.nim");
		res_414088 = 0;
		nimln(1275, "system.nim");
		while (1) {
			NimStringDesc* imported;
			nimln(1275, "system.nim");
			if (!(res_414088 <= HEX3Atmp_414086)) goto LA3;
			nimln(1274, "system.nim");
			i_414044 = res_414088;
			nimln(34, "depends.nim");
			if (((TMP6774[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP6775));
			if ((NU)(i_414044) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
			imported = getmodulename_258012((*n).kindU.S6.Sons->data[i_414044]);
			nimln(35, "depends.nim");
			adddependencyaux_414018((*(*(*g).Module).Name).S, imported);
			nimln(1277, "system.nim");
			res_414088 = addInt(res_414088, 1);
		} LA3: ;
	}
	break;
	case ((NU8) 119):
	case ((NU8) 116):
	{
		NimStringDesc* imported;
		nimln(37, "depends.nim");
		if (((TMP6774[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP6775));
		if ((NU)(0) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
		imported = getmodulename_258012((*n).kindU.S6.Sons->data[0]);
		nimln(38, "depends.nim");
		adddependencyaux_414018((*(*(*g).Module).Name).S, imported);
	}
	break;
	case ((NU8) 114):
	case ((NU8) 111):
	case ((NU8) 124):
	case ((NU8) 125):
	{
		NI i_414075;
		NI HEX3Atmp_414090;
		NI LOC6;
		NI TMP6777;
		NI res_414092;
		i_414075 = 0;
		HEX3Atmp_414090 = 0;
		nimln(40, "depends.nim");
		nimln(40, "depends.nim");
		nimln(40, "depends.nim");
		LOC6 = sonslen_170003(n);
		TMP6777 = subInt(LOC6, 1);
		HEX3Atmp_414090 = (NI32)(TMP6777);
		nimln(1274, "system.nim");
		res_414092 = 0;
		nimln(1275, "system.nim");
		while (1) {
			tnode169647* LOC8;
			nimln(1275, "system.nim");
			if (!(res_414092 <= HEX3Atmp_414090)) goto LA7;
			nimln(1274, "system.nim");
			i_414075 = res_414092;
			nimln(40, "depends.nim");
			nimln(40, "depends.nim");
			if (((TMP6774[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP6775));
			if ((NU)(i_414075) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
			LOC8 = 0;
			LOC8 = adddotdependency_414030(c, (*n).kindU.S6.Sons->data[i_414075]);
			nimln(1277, "system.nim");
			res_414092 = addInt(res_414092, 1);
		} LA7: ;
	}
	break;
	default:
	{
	}
	break;
	}
	popFrame();
	return result;
}

N_NIMCALL(void, generatedot_414005)(NimStringDesc* project) {
	TY177141 LOC1;
	NimStringDesc* LOC2;
	NimStringDesc* LOC3;
	trope126007* LOC4;
	NimStringDesc* LOC5;
	nimfr("generateDot", "depends.nim")
	nimln(45, "depends.nim");
	nimln(45, "depends.nim");
	memset((void*)LOC1, 0, sizeof(LOC1));
	nimln(46, "depends.nim");
	nimln(46, "depends.nim");
	nimln(46, "depends.nim");
	LOC2 = 0;
	LOC2 = nosextractFilename(project);
	LOC3 = 0;
	LOC3 = nosChangeFileExt(LOC2, ((NimStringDesc*) &TMP6779));
	LOC1[0] = torope_126058(LOC3);
	LOC1[1] = gdotgraph_414015;
	LOC4 = 0;
	LOC4 = ropef_126079(((NimStringDesc*) &TMP6778), LOC1, 2);
	nimln(47, "depends.nim");
	LOC5 = 0;
	LOC5 = nosChangeFileExt(project, ((NimStringDesc*) &TMP6780));
	writerope_127407(LOC4, LOC5, NIM_FALSE);
	popFrame();
}
N_NIMCALL(void, TMP6781)(void* p, NI op) {
	tgen414010* a;
	a = (tgen414010*)p;
	nimGCvisit((void*)(*a).Module, op);
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

N_NIMCALL(tpasscontext218003*, myopen_414108)(tsym169677* module) {
	tpasscontext218003* result;
	tgen414010* g;
	nimfr("myOpen", "depends.nim")
	result = 0;
	g = 0;
	nimln(51, "depends.nim");
	g = (tgen414010*) newObj((&NTI414012), sizeof(tgen414010));
	(*g).Sup.Sup.m_type = (&NTI414010);
	nimln(52, "depends.nim");
	asgnRefNoCycle((void**) &(*g).Module, module);
	nimln(53, "depends.nim");
	result = &g->Sup;
	popFrame();
	return result;
}
N_NOINLINE(void, dependsInit)(void) {
	nimfr("depends", "depends.nim")
	popFrame();
}

N_NOINLINE(void, dependsDatInit)(void) {
static TNimNode TMP6771[1];
NTI414010.size = sizeof(tgen414010);
NTI414010.kind = 17;
NTI414010.base = (&NTI218003);
NTI414010.flags = 2;
TMP6771[0].kind = 1;
TMP6771[0].offset = offsetof(tgen414010, Module);
TMP6771[0].typ = (&NTI169645);
TMP6771[0].name = "module";
NTI414010.node = &TMP6771[0];
NTI414012.size = sizeof(tgen414010*);
NTI414012.kind = 22;
NTI414012.base = (&NTI414010);
NTI414012.flags = 2;
NTI414012.marker = TMP6781;
}

