/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"
typedef struct trope125007 trope125007;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tnode168647 tnode168647;
typedef struct tpasscontext217003 tpasscontext217003;
typedef struct tgen413010 tgen413010;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TNimObject TNimObject;
typedef struct tsym168677 tsym168677;
typedef struct ttype168681 ttype168681;
typedef struct tlineinfo127308 tlineinfo127308;
typedef struct tident130015 tident130015;
typedef struct tnodeseq168641 tnodeseq168641;
typedef struct tidobj130009 tidobj130009;
typedef struct ttypeseq168679 ttypeseq168679;
typedef struct TY168771 TY168771;
typedef struct tinstantiation168667 tinstantiation168667;
typedef struct tscope168671 tscope168671;
typedef struct tstrtable168651 tstrtable168651;
typedef struct tsymseq168649 tsymseq168649;
typedef struct tloc168661 tloc168661;
typedef struct tlib168665 tlib168665;
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
typedef struct tpass217015 tpass217015;
typedef struct trodreader206023 trodreader206023;
typedef struct TY168763 TY168763;
typedef struct tlistentry100011 tlistentry100011;
typedef struct tbasechunk21641 tbasechunk21641;
typedef struct tfreecell21633 tfreecell21633;
typedef struct tindex206021 tindex206021;
typedef struct tiitable175212 tiitable175212;
typedef struct tiipairseq175210 tiipairseq175210;
typedef struct tiipair175208 tiipair175208;
typedef struct tidtable168693 tidtable168693;
typedef struct tidpairseq168691 tidpairseq168691;
typedef struct tidpair168689 tidpair168689;
typedef struct tmemfile204204 tmemfile204204;
struct TGenericSeq {
NI len;
NI reserved;
};
typedef NIM_CHAR TY611[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY611 data;
};
typedef trope125007* TY176141[2];
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
struct tpasscontext217003 {
  TNimObject Sup;
NIM_BOOL Fromcache;
};
struct tgen413010 {
  tpasscontext217003 Sup;
tsym168677* Module;
};
struct tlineinfo127308 {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct tnode168647 {
ttype168681* Typ;
tlineinfo127308 Info;
NU8 Flags;
NU8 Kind;
union {
struct {NI64 Intval;
} S1;
struct {NF64 Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {tsym168677* Sym;
} S4;
struct {tident130015* Ident;
} S5;
struct {tnodeseq168641* Sons;
} S6;
} kindU;
NimStringDesc* Comment;
};
typedef NU8 TY168850[19];
struct tidobj130009 {
  TNimObject Sup;
NI Id;
};
struct tstrtable168651 {
NI Counter;
tsymseq168649* Data;
};
struct tloc168661 {
NU8 K;
NU8 S;
NU8 Flags;
ttype168681* T;
trope125007* R;
trope125007* Heaproot;
NI A;
};
struct tsym168677 {
  tidobj130009 Sup;
NU8 Kind;
union {
struct {ttypeseq168679* Typeinstcache;
} S1;
struct {TY168771* Procinstcache;
tscope168671* Scope;
} S2;
struct {TY168771* Usedgenerics;
tstrtable168651 Tab;
} S3;
} kindU;
NU16 Magic;
ttype168681* Typ;
tident130015* Name;
tlineinfo127308 Info;
tsym168677* Owner;
NU32 Flags;
tnode168647* Ast;
NU32 Options;
NI Position;
NI Offset;
tloc168661 Loc;
tlib168665* Annex;
tnode168647* Constraint;
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
typedef N_NIMCALL_PTR(tpasscontext217003*, tpassopen217007) (tsym168677* module);
typedef N_NIMCALL_PTR(tpasscontext217003*, tpassopencached217009) (tsym168677* module, trodreader206023* rd);
typedef N_NIMCALL_PTR(tnode168647*, tpassprocess217013) (tpasscontext217003* p, tnode168647* toplevelstmt);
typedef N_NIMCALL_PTR(tnode168647*, tpassclose217011) (tpasscontext217003* p, tnode168647* n);
struct tpass217015 {
tpassopen217007 Field0;
tpassopencached217009 Field1;
tpassprocess217013 Field2;
tpassclose217011 Field3;
};
struct trope125007 {
  TNimObject Sup;
trope125007* Left;
trope125007* Right;
NI Length;
NimStringDesc* Data;
};
struct ttype168681 {
  tidobj130009 Sup;
NU8 Kind;
NU8 Callconv;
NU32 Flags;
ttypeseq168679* Sons;
tnode168647* N;
tsym168677* Destructor;
tsym168677* Owner;
tsym168677* Sym;
NI64 Size;
NI Align;
tloc168661 Loc;
};
struct tinstantiation168667 {
tsym168677* Sym;
ttypeseq168679* Concretetypes;
TY168763* Usedby;
};
struct tscope168671 {
NI Depthlevel;
tstrtable168651 Symbols;
tscope168671* Parent;
};
struct tlistentry100011 {
  TNimObject Sup;
tlistentry100011* Prev;
tlistentry100011* Next;
};
struct tlib168665 {
  tlistentry100011 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope125007* Name;
tnode168647* Path;
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
struct tiipair175208 {
NI Key;
NI Val;
};
struct tiitable175212 {
NI Counter;
tiipairseq175210* Data;
};
struct tindex206021 {
NI Lastidxkey;
NI Lastidxval;
tiitable175212 Tab;
NimStringDesc* R;
NI Offset;
};
struct tidpair168689 {
tidobj130009* Key;
TNimObject* Val;
};
struct tidtable168693 {
NI Counter;
tidpairseq168691* Data;
};
struct tmemfile204204 {
void* Mem;
NI Size;
int Handle;
};
struct trodreader206023 {
  TNimObject Sup;
NI Pos;
NCSTRING S;
NU32 Options;
NU8 Reason;
TY168763* Moddeps;
TY168763* Files;
NI Dataidx;
NI Convertersidx;
NI Initidx;
NI Interfidx;
NI Compilerprocsidx;
NI Methodsidx;
NimStringDesc* Filename;
tindex206021 Index;
tindex206021 Imports;
NI Readerindex;
NI Line;
NI Moduleid;
tidtable168693 Syms;
tmemfile204204 Memfile;
tsymseq168649* Methods;
NIM_BOOL Inviewmode;
};
struct tfreecell21633 {
tfreecell21633* Next;
NI Zerofield;
};
struct tnodeseq168641 {
  TGenericSeq Sup;
  tnode168647* data[SEQ_DECL_SIZE];
};
struct ttypeseq168679 {
  TGenericSeq Sup;
  ttype168681* data[SEQ_DECL_SIZE];
};
struct TY168771 {
  TGenericSeq Sup;
  tinstantiation168667* data[SEQ_DECL_SIZE];
};
struct tsymseq168649 {
  TGenericSeq Sup;
  tsym168677* data[SEQ_DECL_SIZE];
};
struct TY168763 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct tiipairseq175210 {
  TGenericSeq Sup;
  tiipair175208 data[SEQ_DECL_SIZE];
};
struct tidpairseq168691 {
  TGenericSeq Sup;
  tidpair168689 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, adddependencyaux_413018)(NimStringDesc* importing, NimStringDesc* imported);
N_NIMCALL(void, appf_125085)(trope125007** c, NimStringDesc* frmt, trope125007** args, NI argsLen0);
N_NIMCALL(trope125007*, torope_125058)(NimStringDesc* s);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(tnode168647*, adddotdependency_413030)(tpasscontext217003* c, tnode168647* n);
N_NIMCALL(void, chckObj)(TNimType* obj, TNimType* subclass);
static N_INLINE(NI, sonslen_169003)(tnode168647* n);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(NimStringDesc*, getmodulename_257012)(tnode168647* n);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(void, generatedot_413005)(NimStringDesc* project);
N_NIMCALL(void, writerope_126407)(trope125007* head, NimStringDesc* filename, NIM_BOOL usewarning);
N_NIMCALL(trope125007*, ropef_125079)(NimStringDesc* frmt, trope125007** args, NI argsLen0);
N_NIMCALL(NimStringDesc*, nosChangeFileExt)(NimStringDesc* filename, NimStringDesc* ext);
N_NIMCALL(NimStringDesc*, nosextractFilename)(NimStringDesc* path);
N_NIMCALL(tpasscontext217003*, myopen_413108)(tsym168677* module);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP6774)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell38846*, usrtocell_42243)(void* usr);
static N_INLINE(void, rtladdzct_43402)(tcell38846* c);
N_NOINLINE(void, addzct_42215)(tcellseq38862* s, tcell38846* c);
STRING_LITERAL(TMP6766, "$1 -> $2;$n", 11);
static NIM_CONST TY168850 TMP6767 = {
0xEC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP6768, "sons", 4);
STRING_LITERAL(TMP6771, "digraph $1 {$n$2}$n", 19);
STRING_LITERAL(TMP6772, "", 0);
STRING_LITERAL(TMP6773, "dot", 3);
NIM_CONST tpass217015 gendependpass_413131 = {myopen_413108,
NIM_NIL,
adddotdependency_413030,
NIM_NIL}
;
trope125007* gdotgraph_413015;
extern TFrame* frameptr_12027;
extern TNimType NTI217003; /* TPassContext */
TNimType NTI413010; /* TGen */
extern TNimType NTI168645; /* PSym */
TNimType NTI413012; /* PGen */
extern tgcheap40816 gch_40842;

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_12027;
	frameptr_12027 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_12027 = (*frameptr_12027).prev;
}

N_NIMCALL(void, adddependencyaux_413018)(NimStringDesc* importing, NimStringDesc* imported) {
	TY176141 LOC1;
	nimfr("addDependencyAux", "depends.nim")
	nimln(25, "depends.nim");
	memset((void*)LOC1, 0, sizeof(LOC1));
	nimln(25, "depends.nim");
	LOC1[0] = torope_125058(importing);
	nimln(25, "depends.nim");
	LOC1[1] = torope_125058(imported);
	appf_125085(&gdotgraph_413015, ((NimStringDesc*) &TMP6766), LOC1, 2);
	popFrame();
}

static N_INLINE(NI, sonslen_169003)(tnode168647* n) {
	NI result;
	nimfr("sonsLen", "ast.nim")
	result = 0;
	nimln(1175, "ast.nim");
	{
		nimln(1175, "ast.nim");
		if (((TMP6767[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP6768));
		if (!(*n).kindU.S6.Sons == 0) goto LA3;
		nimln(1175, "ast.nim");
		result = 0;
	}
	goto LA1;
	LA3: ;
	{
		nimln(1176, "ast.nim");
		nimln(1176, "ast.nim");
		if (((TMP6767[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP6768));
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

N_NIMCALL(tnode168647*, adddotdependency_413030)(tpasscontext217003* c, tnode168647* n) {
	tnode168647* result;
	tgen413010* g;
	nimfr("addDotDependency", "depends.nim")
	result = 0;
	nimln(29, "depends.nim");
	result = n;
	nimln(30, "depends.nim");
	if (c) chckObj((*c).Sup.m_type, (&NTI413010));
	g = ((tgen413010*) (c));
	nimln(31, "depends.nim");
	switch ((*n).Kind) {
	case ((NU8) 115):
	{
		NI i_413044;
		NI HEX3Atmp_413086;
		NI LOC2;
		NI TMP6769;
		NI res_413088;
		i_413044 = 0;
		HEX3Atmp_413086 = 0;
		nimln(33, "depends.nim");
		nimln(33, "depends.nim");
		nimln(33, "depends.nim");
		LOC2 = sonslen_169003(n);
		TMP6769 = subInt(LOC2, 1);
		HEX3Atmp_413086 = (NI32)(TMP6769);
		nimln(1274, "system.nim");
		res_413088 = 0;
		nimln(1275, "system.nim");
		while (1) {
			NimStringDesc* imported;
			nimln(1275, "system.nim");
			if (!(res_413088 <= HEX3Atmp_413086)) goto LA3;
			nimln(1274, "system.nim");
			i_413044 = res_413088;
			nimln(34, "depends.nim");
			if (((TMP6767[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP6768));
			if ((NU)(i_413044) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
			imported = getmodulename_257012((*n).kindU.S6.Sons->data[i_413044]);
			nimln(35, "depends.nim");
			adddependencyaux_413018((*(*(*g).Module).Name).S, imported);
			nimln(1277, "system.nim");
			res_413088 = addInt(res_413088, 1);
		} LA3: ;
	}
	break;
	case ((NU8) 119):
	case ((NU8) 116):
	{
		NimStringDesc* imported;
		nimln(37, "depends.nim");
		if (((TMP6767[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP6768));
		if ((NU)(0) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
		imported = getmodulename_257012((*n).kindU.S6.Sons->data[0]);
		nimln(38, "depends.nim");
		adddependencyaux_413018((*(*(*g).Module).Name).S, imported);
	}
	break;
	case ((NU8) 114):
	case ((NU8) 111):
	case ((NU8) 124):
	case ((NU8) 125):
	{
		NI i_413075;
		NI HEX3Atmp_413090;
		NI LOC6;
		NI TMP6770;
		NI res_413092;
		i_413075 = 0;
		HEX3Atmp_413090 = 0;
		nimln(40, "depends.nim");
		nimln(40, "depends.nim");
		nimln(40, "depends.nim");
		LOC6 = sonslen_169003(n);
		TMP6770 = subInt(LOC6, 1);
		HEX3Atmp_413090 = (NI32)(TMP6770);
		nimln(1274, "system.nim");
		res_413092 = 0;
		nimln(1275, "system.nim");
		while (1) {
			tnode168647* LOC8;
			nimln(1275, "system.nim");
			if (!(res_413092 <= HEX3Atmp_413090)) goto LA7;
			nimln(1274, "system.nim");
			i_413075 = res_413092;
			nimln(40, "depends.nim");
			nimln(40, "depends.nim");
			if (((TMP6767[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP6768));
			if ((NU)(i_413075) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
			LOC8 = 0;
			LOC8 = adddotdependency_413030(c, (*n).kindU.S6.Sons->data[i_413075]);
			nimln(1277, "system.nim");
			res_413092 = addInt(res_413092, 1);
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

N_NIMCALL(void, generatedot_413005)(NimStringDesc* project) {
	TY176141 LOC1;
	NimStringDesc* LOC2;
	NimStringDesc* LOC3;
	trope125007* LOC4;
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
	LOC3 = nosChangeFileExt(LOC2, ((NimStringDesc*) &TMP6772));
	LOC1[0] = torope_125058(LOC3);
	LOC1[1] = gdotgraph_413015;
	LOC4 = 0;
	LOC4 = ropef_125079(((NimStringDesc*) &TMP6771), LOC1, 2);
	nimln(47, "depends.nim");
	LOC5 = 0;
	LOC5 = nosChangeFileExt(project, ((NimStringDesc*) &TMP6773));
	writerope_126407(LOC4, LOC5, NIM_FALSE);
	popFrame();
}
N_NIMCALL(void, TMP6774)(void* p, NI op) {
	tgen413010* a;
	a = (tgen413010*)p;
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

N_NIMCALL(tpasscontext217003*, myopen_413108)(tsym168677* module) {
	tpasscontext217003* result;
	tgen413010* g;
	nimfr("myOpen", "depends.nim")
	result = 0;
	g = 0;
	nimln(51, "depends.nim");
	g = (tgen413010*) newObj((&NTI413012), sizeof(tgen413010));
	(*g).Sup.Sup.m_type = (&NTI413010);
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
static TNimNode TMP6764[1];
NTI413010.size = sizeof(tgen413010);
NTI413010.kind = 17;
NTI413010.base = (&NTI217003);
NTI413010.flags = 2;
TMP6764[0].kind = 1;
TMP6764[0].offset = offsetof(tgen413010, Module);
TMP6764[0].typ = (&NTI168645);
TMP6764[0].name = "module";
NTI413010.node = &TMP6764[0];
NTI413012.size = sizeof(tgen413010*);
NTI413012.kind = 22;
NTI413012.base = (&NTI413010);
NTI413012.flags = 2;
NTI413012.marker = TMP6774;
}

