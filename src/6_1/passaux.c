/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"
typedef struct tpasscontext218003 tpasscontext218003;
typedef struct tsym169677 tsym169677;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tidobj131009 tidobj131009;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct ttypeseq169679 ttypeseq169679;
typedef struct ttype169681 ttype169681;
typedef struct TY169771 TY169771;
typedef struct tinstantiation169667 tinstantiation169667;
typedef struct tscope169671 tscope169671;
typedef struct tstrtable169651 tstrtable169651;
typedef struct tsymseq169649 tsymseq169649;
typedef struct tident131015 tident131015;
typedef struct tlineinfo128308 tlineinfo128308;
typedef struct tnode169647 tnode169647;
typedef struct tloc169661 tloc169661;
typedef struct trope126007 trope126007;
typedef struct tlib169665 tlib169665;
typedef struct tnodeseq169641 tnodeseq169641;
typedef struct tpass218015 tpass218015;
typedef struct trodreader207023 trodreader207023;
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
typedef struct TY169763 TY169763;
typedef struct tlistentry100011 tlistentry100011;
typedef struct tindex207021 tindex207021;
typedef struct tiitable176212 tiitable176212;
typedef struct tiipairseq176210 tiipairseq176210;
typedef struct tiipair176208 tiipair176208;
typedef struct tidtable169693 tidtable169693;
typedef struct tidpairseq169691 tidpairseq169691;
typedef struct tidpair169689 tidpair169689;
typedef struct tmemfile205204 tmemfile205204;
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
struct tident131015 {
  tidobj131009 Sup;
NimStringDesc* S;
tident131015* Next;
NI H;
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
typedef NU8 TY169850[19];
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
struct tpasscontext218003 {
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
typedef NI TY21621[16];
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
struct tnodeseq169641 {
  TGenericSeq Sup;
  tnode169647* data[SEQ_DECL_SIZE];
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
N_NIMCALL(tpasscontext218003*, verboseopen_413005)(tsym169677* s);
N_NIMCALL(void, rawmessage_129521)(NU16 msg, NimStringDesc* arg);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(tnode169647*, verboseprocess_413013)(tpasscontext218003* context, tnode169647* n);
N_NIMCALL(void, internalerror_129702)(NimStringDesc* errmsg);
N_NIMCALL(void, message_129683)(tlineinfo128308 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x);
N_NIMCALL(tnode169647*, cleanup_413045)(tpasscontext218003* c, tnode169647* n);
static N_INLINE(NI, sonslen_170003)(tnode169647* n);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(tsym169677*, getmodule_176187)(tsym169677* s);
N_NIMCALL(NIM_BOOL, astneeded_218082)(tsym169677* s);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell38849*, usrtocell_42243)(void* usr);
static N_INLINE(void, rtladdzct_43402)(tcell38849* c);
N_NOINLINE(void, addzct_42215)(tcellseq38865* s, tcell38849* c);
STRING_LITERAL(TMP6768, "logpass: context is not nil", 27);
NIM_CONST tpass218015 verbosepass_413043 = {verboseopen_413005,
NIM_NIL,
verboseprocess_413013,
NIM_NIL}
;
static NIM_CONST TY169850 TMP6769 = {
0xEC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP6770, "sons", 4);
static NIM_CONST TY169850 TMP6772 = {
0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP6773, "sym", 3);
NIM_CONST tpass218015 cleanuppass_413152 = {NIM_NIL,
NIM_NIL,
cleanup_413045,
cleanup_413045}
;
extern NI gverbosity_105116;
extern TFrame* frameptr_12027;
extern NU64 gnotes_128870;
extern NI gbackendid_168006;
extern NU32 gglobaloptions_105108;
extern tnode169647* emptynode_170305;
extern tgcheap40816 gch_40842;

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_12027;
	frameptr_12027 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_12027 = (*frameptr_12027).prev;
}

N_NIMCALL(tpasscontext218003*, verboseopen_413005)(tsym169677* s) {
	tpasscontext218003* result;
	nimfr("verboseOpen", "passaux.nim")
	result = 0;
	nimln(17, "passaux.nim");
	result = NIM_NIL;
	nimln(18, "passaux.nim");
	{
		nimln(692, "system.nim");
		if (!(0 < gverbosity_105116)) goto LA3;
		nimln(18, "passaux.nim");
		rawmessage_129521(((NU16) 252), (*(*s).Name).S);
	}
	LA3: ;
	popFrame();
	return result;
}

N_NIMCALL(tnode169647*, verboseprocess_413013)(tpasscontext218003* context, tnode169647* n) {
	tnode169647* result;
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
		internalerror_129702(((NimStringDesc*) &TMP6768));
	}
	LA3: ;
	nimln(23, "passaux.nim");
	{
		NimStringDesc* LOC9;
		nimln(23, "passaux.nim");
		if (!(gverbosity_105116 == 3)) goto LA7;
		nimln(26, "passaux.nim");
		gnotes_128870 |=((NI64)(1)<<(((((NU16) 252)- 220))%(sizeof(NI64)*8)));
		nimln(27, "passaux.nim");
		nimln(27, "passaux.nim");
		LOC9 = 0;
		LOC9 = nimIntToStr(gbackendid_168006);
		message_129683((*n).Info, ((NU16) 252), LOC9);
	}
	LA7: ;
	popFrame();
	return result;
}

static N_INLINE(NI, sonslen_170003)(tnode169647* n) {
	NI result;
	nimfr("sonsLen", "ast.nim")
	result = 0;
	nimln(1175, "ast.nim");
	{
		nimln(1175, "ast.nim");
		if (((TMP6769[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP6770));
		if (!(*n).kindU.S6.Sons == 0) goto LA3;
		nimln(1175, "ast.nim");
		result = 0;
	}
	goto LA1;
	LA3: ;
	{
		nimln(1176, "ast.nim");
		nimln(1176, "ast.nim");
		if (((TMP6769[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP6770));
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

static N_INLINE(tcell38849*, usrtocell_42243)(void* usr) {
	tcell38849* result;
	nimfr("usrToCell", "gc.nim")
	result = 0;
	nimln(106, "gc.nim");
	nimln(106, "gc.nim");
	nimln(106, "gc.nim");
	result = ((tcell38849*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(tcell38849))))));
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

N_NIMCALL(tnode169647*, cleanup_413045)(tpasscontext218003* c, tnode169647* n) {
	tnode169647* result;
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
		NI i_413078;
		NI HEX3Atmp_413145;
		NI LOC8;
		NI TMP6771;
		NI res_413147;
		i_413078 = 0;
		HEX3Atmp_413145 = 0;
		nimln(37, "passaux.nim");
		nimln(37, "passaux.nim");
		nimln(37, "passaux.nim");
		LOC8 = sonslen_170003(n);
		TMP6771 = subInt(LOC8, 1);
		HEX3Atmp_413145 = (NI32)(TMP6771);
		nimln(1274, "system.nim");
		res_413147 = 0;
		nimln(1275, "system.nim");
		while (1) {
			tnode169647* LOC10;
			nimln(1275, "system.nim");
			if (!(res_413147 <= HEX3Atmp_413145)) goto LA9;
			nimln(1274, "system.nim");
			i_413078 = res_413147;
			nimln(37, "passaux.nim");
			nimln(37, "passaux.nim");
			if (((TMP6769[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP6770));
			if ((NU)(i_413078) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
			LOC10 = 0;
			LOC10 = cleanup_413045(c, (*n).kindU.S6.Sons->data[i_413078]);
			nimln(1277, "system.nim");
			res_413147 = addInt(res_413147, 1);
		} LA9: ;
	}
	break;
	case ((NU8) 79):
	case ((NU8) 80):
	{
		nimln(39, "passaux.nim");
		{
			tsym169677* s;
			nimln(39, "passaux.nim");
			if (((TMP6769[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP6770));
			if ((NU)(0) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
			if (!((*(*n).kindU.S6.Sons->data[0]).Kind == ((NU8) 3))) goto LA14;
			nimln(40, "passaux.nim");
			if (((TMP6769[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP6770));
			if ((NU)(0) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
			if (!(((TMP6772[(*(*n).kindU.S6.Sons->data[0]).Kind/8] &(1<<((*(*n).kindU.S6.Sons->data[0]).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP6773));
			s = (*(*n).kindU.S6.Sons->data[0]).kindU.S4.Sym;
			nimln(41, "passaux.nim");
			{
				NIM_BOOL LOC18;
				tsym169677* LOC19;
				NIM_BOOL LOC21;
				nimln(41, "passaux.nim");
				nimln(717, "system.nim");
				nimln(717, "system.nim");
				nimln(41, "passaux.nim");
				LOC19 = 0;
				LOC19 = getmodule_176187(s);
				LOC18 = !((((*LOC19).Flags &(1<<((((NU8) 25))&31)))!=0));
				if (!(LOC18)) goto LA20;
				nimln(41, "passaux.nim");
				nimln(41, "passaux.nim");
				LOC21 = astneeded_218082(s);
				LOC18 = !(LOC21);
				LA20: ;
				if (!LOC18) goto LA22;
				nimln(42, "passaux.nim");
				if (((TMP6769[(*(*s).Ast).Kind/8] &(1<<((*(*s).Ast).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP6770));
				if ((NU)(6) >= (NU)((*(*s).Ast).kindU.S6.Sons->Sup.len)) raiseIndexError();
				asgnRefNoCycle((void**) &(*(*s).Ast).kindU.S6.Sons->data[6], emptynode_170305);
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

