/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"
typedef struct tpasscontext217003 tpasscontext217003;
typedef struct tsym168677 tsym168677;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tidobj130009 tidobj130009;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct ttypeseq168679 ttypeseq168679;
typedef struct ttype168681 ttype168681;
typedef struct TY168771 TY168771;
typedef struct tinstantiation168667 tinstantiation168667;
typedef struct tscope168671 tscope168671;
typedef struct tstrtable168651 tstrtable168651;
typedef struct tsymseq168649 tsymseq168649;
typedef struct tident130015 tident130015;
typedef struct tlineinfo127308 tlineinfo127308;
typedef struct tnode168647 tnode168647;
typedef struct tloc168661 tloc168661;
typedef struct trope125007 trope125007;
typedef struct tlib168665 tlib168665;
typedef struct tnodeseq168641 tnodeseq168641;
typedef struct tpass217015 tpass217015;
typedef struct trodreader206023 trodreader206023;
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
typedef struct TY168763 TY168763;
typedef struct tlistentry100011 tlistentry100011;
typedef struct tindex206021 tindex206021;
typedef struct tiitable175212 tiitable175212;
typedef struct tiipairseq175210 tiipairseq175210;
typedef struct tiipair175208 tiipair175208;
typedef struct tidtable168693 tidtable168693;
typedef struct tidpairseq168691 tidpairseq168691;
typedef struct tidpair168689 tidpair168689;
typedef struct tmemfile204204 tmemfile204204;
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
struct tstrtable168651 {
NI Counter;
tsymseq168649* Data;
};
struct tlineinfo127308 {
NI16 Line;
NI16 Col;
NI32 Fileindex;
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
typedef NU8 TY168850[19];
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
struct tpasscontext217003 {
  TNimObject Sup;
NIM_BOOL Fromcache;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
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
struct trope125007 {
  TNimObject Sup;
trope125007* Left;
trope125007* Right;
NI Length;
NimStringDesc* Data;
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
struct tnodeseq168641 {
  TGenericSeq Sup;
  tnode168647* data[SEQ_DECL_SIZE];
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
N_NIMCALL(tpasscontext217003*, verboseopen_412005)(tsym168677* s);
N_NIMCALL(void, rawmessage_128521)(NU16 msg, NimStringDesc* arg);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(tnode168647*, verboseprocess_412013)(tpasscontext217003* context, tnode168647* n);
N_NIMCALL(void, internalerror_128702)(NimStringDesc* errmsg);
N_NIMCALL(void, message_128683)(tlineinfo127308 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x);
N_NIMCALL(tnode168647*, cleanup_412045)(tpasscontext217003* c, tnode168647* n);
static N_INLINE(NI, sonslen_169003)(tnode168647* n);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(tsym168677*, getmodule_175187)(tsym168677* s);
N_NIMCALL(NIM_BOOL, astneeded_217082)(tsym168677* s);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell38846*, usrtocell_42243)(void* usr);
static N_INLINE(void, rtladdzct_43402)(tcell38846* c);
N_NOINLINE(void, addzct_42215)(tcellseq38862* s, tcell38846* c);
STRING_LITERAL(TMP6758, "logpass: context is not nil", 27);
NIM_CONST tpass217015 verbosepass_412043 = {verboseopen_412005,
NIM_NIL,
verboseprocess_412013,
NIM_NIL}
;
static NIM_CONST TY168850 TMP6759 = {
0xEC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP6760, "sons", 4);
static NIM_CONST TY168850 TMP6762 = {
0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP6763, "sym", 3);
NIM_CONST tpass217015 cleanuppass_412152 = {NIM_NIL,
NIM_NIL,
cleanup_412045,
cleanup_412045}
;
extern NI gverbosity_105116;
extern TFrame* frameptr_12027;
extern NU64 gnotes_127870;
extern NI gbackendid_167006;
extern NU32 gglobaloptions_105108;
extern tnode168647* emptynode_169305;
extern tgcheap40816 gch_40842;

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_12027;
	frameptr_12027 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_12027 = (*frameptr_12027).prev;
}

N_NIMCALL(tpasscontext217003*, verboseopen_412005)(tsym168677* s) {
	tpasscontext217003* result;
	nimfr("verboseOpen", "passaux.nim")
	result = 0;
	nimln(17, "passaux.nim");
	result = NIM_NIL;
	nimln(18, "passaux.nim");
	{
		nimln(692, "system.nim");
		if (!(0 < gverbosity_105116)) goto LA3;
		nimln(18, "passaux.nim");
		rawmessage_128521(((NU16) 252), (*(*s).Name).S);
	}
	LA3: ;
	popFrame();
	return result;
}

N_NIMCALL(tnode168647*, verboseprocess_412013)(tpasscontext217003* context, tnode168647* n) {
	tnode168647* result;
	nimfr("verboseProcess", "passaux.nim")
	result = 0;
	nimln(21, "passaux.nim");
	result = n;
	nimln(22, "passaux.nim");
	{
		nimln(684, "system.nim");
		nimln(684, "system.nim");
		if (!!((context == NIM_NIL))) goto LA3;
		nimln(22, "passaux.nim");
		internalerror_128702(((NimStringDesc*) &TMP6758));
	}
	LA3: ;
	nimln(23, "passaux.nim");
	{
		NimStringDesc* LOC9;
		nimln(23, "passaux.nim");
		if (!(gverbosity_105116 == 3)) goto LA7;
		nimln(26, "passaux.nim");
		gnotes_127870 |=((NI64)(1)<<(((((NU16) 252)- 220))%(sizeof(NI64)*8)));
		nimln(27, "passaux.nim");
		nimln(27, "passaux.nim");
		LOC9 = 0;
		LOC9 = nimIntToStr(gbackendid_167006);
		message_128683((*n).Info, ((NU16) 252), LOC9);
	}
	LA7: ;
	popFrame();
	return result;
}

static N_INLINE(NI, sonslen_169003)(tnode168647* n) {
	NI result;
	nimfr("sonsLen", "ast.nim")
	result = 0;
	nimln(1175, "ast.nim");
	{
		nimln(1175, "ast.nim");
		if (((TMP6759[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP6760));
		if (!(*n).kindU.S6.Sons == 0) goto LA3;
		nimln(1175, "ast.nim");
		result = 0;
	}
	goto LA1;
	LA3: ;
	{
		nimln(1176, "ast.nim");
		nimln(1176, "ast.nim");
		if (((TMP6759[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP6760));
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

N_NIMCALL(tnode168647*, cleanup_412045)(tpasscontext217003* c, tnode168647* n) {
	tnode168647* result;
	nimfr("cleanUp", "passaux.nim")
	result = 0;
	nimln(32, "passaux.nim");
	result = n;
	nimln(34, "passaux.nim");
	{
		NIM_BOOL LOC3;
		nimln(34, "passaux.nim");
		nimln(716, "system.nim");
		LOC3 = ((gglobaloptions_105108 &(1<<((((NU8) 2))&31)))!=0);
		if (LOC3) goto LA4;
		nimln(34, "passaux.nim");
		LOC3 = (n == NIM_NIL);
		LA4: ;
		if (!LOC3) goto LA5;
		nimln(34, "passaux.nim");
		goto BeforeRet;
	}
	LA5: ;
	nimln(35, "passaux.nim");
	switch ((*n).Kind) {
	case ((NU8) 114):
	{
		NI i_412078;
		NI HEX3Atmp_412145;
		NI LOC8;
		NI TMP6761;
		NI res_412147;
		i_412078 = 0;
		HEX3Atmp_412145 = 0;
		nimln(37, "passaux.nim");
		nimln(37, "passaux.nim");
		nimln(37, "passaux.nim");
		LOC8 = sonslen_169003(n);
		TMP6761 = subInt(LOC8, 1);
		HEX3Atmp_412145 = (NI32)(TMP6761);
		nimln(1274, "system.nim");
		res_412147 = 0;
		nimln(1275, "system.nim");
		while (1) {
			tnode168647* LOC10;
			nimln(1275, "system.nim");
			if (!(res_412147 <= HEX3Atmp_412145)) goto LA9;
			nimln(1274, "system.nim");
			i_412078 = res_412147;
			nimln(37, "passaux.nim");
			nimln(37, "passaux.nim");
			if (((TMP6759[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP6760));
			if ((NU)(i_412078) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
			LOC10 = 0;
			LOC10 = cleanup_412045(c, (*n).kindU.S6.Sons->data[i_412078]);
			nimln(1277, "system.nim");
			res_412147 = addInt(res_412147, 1);
		} LA9: ;
	}
	break;
	case ((NU8) 79):
	case ((NU8) 80):
	{
		nimln(39, "passaux.nim");
		{
			tsym168677* s;
			nimln(39, "passaux.nim");
			if (((TMP6759[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP6760));
			if ((NU)(0) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
			if (!((*(*n).kindU.S6.Sons->data[0]).Kind == ((NU8) 3))) goto LA14;
			nimln(40, "passaux.nim");
			if (((TMP6759[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP6760));
			if ((NU)(0) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
			if (!(((TMP6762[(*(*n).kindU.S6.Sons->data[0]).Kind/8] &(1<<((*(*n).kindU.S6.Sons->data[0]).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP6763));
			s = (*(*n).kindU.S6.Sons->data[0]).kindU.S4.Sym;
			nimln(41, "passaux.nim");
			{
				NIM_BOOL LOC18;
				tsym168677* LOC19;
				NIM_BOOL LOC21;
				nimln(41, "passaux.nim");
				nimln(717, "system.nim");
				nimln(717, "system.nim");
				nimln(41, "passaux.nim");
				LOC19 = 0;
				LOC19 = getmodule_175187(s);
				LOC18 = !((((*LOC19).Flags &(1<<((((NU8) 25))&31)))!=0));
				if (!(LOC18)) goto LA20;
				nimln(41, "passaux.nim");
				nimln(41, "passaux.nim");
				LOC21 = astneeded_217082(s);
				LOC18 = !(LOC21);
				LA20: ;
				if (!LOC18) goto LA22;
				nimln(42, "passaux.nim");
				if (((TMP6759[(*(*s).Ast).Kind/8] &(1<<((*(*s).Ast).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP6760));
				if ((NU)(6) >= (NU)((*(*s).Ast).kindU.S6.Sons->Sup.len)) raiseIndexError();
				asgnRefNoCycle((void**) &(*(*s).Ast).kindU.S6.Sons->data[6], emptynode_169305);
			}
			LA22: ;
		}
		LA14: ;
	}
	break;
	default:
	{
	}
	break;
	}
	BeforeRet: ;
	popFrame();
	return result;
}
N_NOINLINE(void, passauxInit)(void) {
	nimfr("passaux", "passaux.nim")
	popFrame();
}

N_NOINLINE(void, passauxDatInit)(void) {
}

