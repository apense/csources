/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"
typedef struct tnode168647 tnode168647;
typedef struct ttype168681 ttype168681;
typedef struct tlineinfo127308 tlineinfo127308;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tsym168677 tsym168677;
typedef struct tident130015 tident130015;
typedef struct tnodeseq168641 tnodeseq168641;
typedef struct tidobj130009 tidobj130009;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct ttypeseq168679 ttypeseq168679;
typedef struct TY168771 TY168771;
typedef struct tinstantiation168667 tinstantiation168667;
typedef struct tscope168671 tscope168671;
typedef struct tstrtable168651 tstrtable168651;
typedef struct tsymseq168649 tsymseq168649;
typedef struct tloc168661 tloc168661;
typedef struct trope125007 trope125007;
typedef struct tlib168665 tlib168665;
typedef struct tcontext254019 tcontext254019;
typedef struct tidentiter175106 tidentiter175106;
typedef struct TY168763 TY168763;
typedef struct tlistentry100011 tlistentry100011;
typedef struct tpasscontext217003 tpasscontext217003;
typedef struct tproccon254009 tproccon254009;
typedef struct tintset165041 tintset165041;
typedef struct ttrunk165037 ttrunk165037;
typedef struct ttrunkseq165039 ttrunkseq165039;
typedef struct tlinkedlist100017 tlinkedlist100017;
typedef struct tidtable168693 tidtable168693;
typedef struct tidpairseq168691 tidpairseq168691;
typedef struct tidpair168689 tidpair168689;
typedef struct tevalcontext245212 tevalcontext245212;
typedef struct TY254100 TY254100;
typedef struct tinstantiationpair254011 tinstantiationpair254011;
typedef struct tstackframe245204 tstackframe245204;
typedef struct tidnodetable168699 tidnodetable168699;
typedef struct tidnodepairseq168697 tidnodepairseq168697;
typedef struct tidnodepair168695 tidnodepair168695;
struct tlineinfo127308 {
NI16 Line;
NI16 Col;
NI32 Fileindex;
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
struct tidentiter175106 {
NI H;
tident130015* Name;
};
struct tscope168671 {
NI Depthlevel;
tstrtable168651 Symbols;
tscope168671* Parent;
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
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct tinstantiation168667 {
tsym168677* Sym;
ttypeseq168679* Concretetypes;
TY168763* Usedby;
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
struct tpasscontext217003 {
  TNimObject Sup;
NIM_BOOL Fromcache;
};
struct tintset165041 {
NI Counter;
NI Max;
ttrunk165037* Head;
ttrunkseq165039* Data;
};
struct tlinkedlist100017 {
tlistentry100011* Head;
tlistentry100011* Tail;
NI Counter;
};
struct tidpair168689 {
tidobj130009* Key;
TNimObject* Val;
};
struct tidtable168693 {
NI Counter;
tidpairseq168691* Data;
};
typedef N_NIMCALL_PTR(tnode168647*, TY254057) (tcontext254019* c, tnode168647* n);
typedef N_NIMCALL_PTR(tnode168647*, TY254062) (tcontext254019* c, tnode168647* n, NU8 flags);
typedef N_NIMCALL_PTR(tnode168647*, TY254070) (tcontext254019* c, tnode168647* n, NU8 flags);
typedef N_NIMCALL_PTR(tnode168647*, TY254078) (tcontext254019* c, tnode168647* n);
typedef N_NIMCALL_PTR(tnode168647*, TY254083) (tcontext254019* c, tnode168647* n, tnode168647* norig, NU32 filter);
typedef N_NIMCALL_PTR(ttype168681*, TY254090) (tcontext254019* c, tnode168647* n, ttype168681* prev);
struct tinstantiationpair254011 {
tsym168677* Genericsym;
tinstantiation168667* Inst;
};
struct tcontext254019 {
  tpasscontext217003 Sup;
tsym168677* Module;
tscope168671* Currentscope;
tscope168671* Importtable;
tscope168671* Toplevelscope;
tproccon254009* P;
tsym168677* Friendmodule;
NI Instcounter;
tsymseq168649* Threadentries;
tintset165041 Ambiguoussymbols;
NI Ingenericcontext;
NI Inunrolledcontext;
NI Incompilescontext;
NI Ingenericinst;
tsymseq168649* Converters;
tsymseq168649* Patterns;
tlinkedlist100017 Optionstack;
tidtable168693 Symmapping;
tlinkedlist100017 Libs;
TY254057 Semconstexpr;
TY254062 Semexpr;
TY254070 Semoperand;
TY254078 Semconstboolexpr;
TY254083 Semoverloadedcall;
TY254090 Semtypenode;
tintset165041 Includedfiles;
tstrtable168651 Userpragmas;
tevalcontext245212* Evalcontext;
tintset165041 Unknownidents;
TY254100* Generics;
NI Lastgenericidx;
};
struct tproccon254009 {
tsym168677* Owner;
tsym168677* Resultsym;
NI Nestedloopcounter;
NI Nestedblockcounter;
NI Intrystmt;
tproccon254009* Next;
};
typedef NI TY21621[16];
struct ttrunk165037 {
ttrunk165037* Next;
NI Key;
TY21621 Bits;
};
struct tidnodepair168695 {
tidobj130009* Key;
tnode168647* Val;
};
struct tidnodetable168699 {
NI Counter;
tidnodepairseq168697* Data;
};
typedef struct {
N_NIMCALL_PTR(tnode168647*, ClPrc) (tnode168647* n, void* ClEnv);
void* ClEnv;
} TY245237;
struct tevalcontext245212 {
  tpasscontext217003 Sup;
tsym168677* Module;
tstackframe245204* Tos;
tnode168647* Lastexception;
tnode168647* Callsite;
NU8 Mode;
NU8 Features;
tidnodetable168699 Globals;
TY245237 Gettype;
};
struct tstackframe245204 {
tsym168677* Prc;
tnodeseq168641* Slots;
tnode168647* Call;
tstackframe245204* Next;
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
struct ttrunkseq165039 {
  TGenericSeq Sup;
  ttrunk165037* data[SEQ_DECL_SIZE];
};
struct tidpairseq168691 {
  TGenericSeq Sup;
  tidpair168689 data[SEQ_DECL_SIZE];
};
struct TY254100 {
  TGenericSeq Sup;
  tinstantiationpair254011 data[SEQ_DECL_SIZE];
};
struct tidnodepairseq168697 {
  TGenericSeq Sup;
  tidnodepair168695 data[SEQ_DECL_SIZE];
};
N_NIMCALL(NIM_BOOL, equalgenericparams_261008)(tnode168647* proca, tnode168647* procb);
static N_INLINE(NI, sonslen_169003)(tnode168647* n);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(void, internalerror_128690)(tlineinfo127308 info, NimStringDesc* errmsg);
N_NIMCALL(NIM_BOOL, sametypeornil_199258)(ttype168681* a, ttype168681* b, NU8 flags);
N_NIMCALL(NIM_BOOL, exprstructuralequivalent_194111)(tnode168647* a, tnode168647* b);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(tsym168677*, searchforproc_261126)(tcontext254019* c, tscope168671* scope, tsym168677* fn);
N_NIMCALL(tsym168677*, initidentiter_175110)(tidentiter175106* ti, tstrtable168651 tab, tident130015* s);
N_NIMCALL(NIM_BOOL, isgenericroutine_173344)(tsym168677* s);
N_NIMCALL(tsym168677*, nextidentiter_175117)(tidentiter175106* ti, tstrtable168651 tab);
N_NIMCALL(NU8, equalparams_195066)(tnode168647* a, tnode168647* b);
N_NIMCALL(void, localerror_128676)(tlineinfo127308 info, NU16 msg, NimStringDesc* arg);
static NIM_CONST TY168850 TMP3613 = {
0xEC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP3614, "sons", 4);
STRING_LITERAL(TMP3616, "equalGenericParams", 18);
static NIM_CONST TY168850 TMP3617 = {
0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP3618, "sym", 3);
extern TFrame* frameptr_12027;

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_12027;
	frameptr_12027 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_12027 = (*frameptr_12027).prev;
}

static N_INLINE(NI, sonslen_169003)(tnode168647* n) {
	NI result;
	nimfr("sonsLen", "ast.nim")
	result = 0;
	nimln(1175, "ast.nim");
	{
		nimln(1175, "ast.nim");
		if (((TMP3613[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3614));
		if (!(*n).kindU.S6.Sons == 0) goto LA3;
		nimln(1175, "ast.nim");
		result = 0;
	}
	goto LA1;
	LA3: ;
	{
		nimln(1176, "ast.nim");
		nimln(1176, "ast.nim");
		if (((TMP3613[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3614));
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

N_NIMCALL(NIM_BOOL, equalgenericparams_261008)(tnode168647* proca, tnode168647* procb) {
	NIM_BOOL result;
	NI i_261021;
	NI HEX3Atmp_261119;
	NI LOC7;
	NI TMP3615;
	NI res_261121;
	nimfr("equalGenericParams", "procfind.nim")
	result = 0;
	nimln(17, "procfind.nim");
	{
		NI LOC3;
		NI LOC4;
		nimln(684, "system.nim");
		nimln(684, "system.nim");
		nimln(17, "procfind.nim");
		LOC3 = sonslen_169003(proca);
		nimln(17, "procfind.nim");
		LOC4 = sonslen_169003(procb);
		if (!!((LOC3 == LOC4))) goto LA5;
		nimln(17, "procfind.nim");
		goto BeforeRet;
	}
	LA5: ;
	i_261021 = 0;
	HEX3Atmp_261119 = 0;
	nimln(18, "procfind.nim");
	nimln(18, "procfind.nim");
	nimln(18, "procfind.nim");
	LOC7 = sonslen_169003(proca);
	TMP3615 = subInt(LOC7, 1);
	HEX3Atmp_261119 = (NI32)(TMP3615);
	nimln(1274, "system.nim");
	res_261121 = 0;
	nimln(1275, "system.nim");
	while (1) {
		tsym168677* a;
		tsym168677* b;
		nimln(1275, "system.nim");
		if (!(res_261121 <= HEX3Atmp_261119)) goto LA8;
		nimln(1274, "system.nim");
		i_261021 = res_261121;
		nimln(19, "procfind.nim");
		{
			nimln(684, "system.nim");
			nimln(684, "system.nim");
			if (((TMP3613[(*proca).Kind/8] &(1<<((*proca).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3614));
			if ((NU)(i_261021) >= (NU)((*proca).kindU.S6.Sons->Sup.len)) raiseIndexError();
			if (!!(((*(*proca).kindU.S6.Sons->data[i_261021]).Kind == ((NU8) 3)))) goto LA11;
			nimln(20, "procfind.nim");
			internalerror_128690((*proca).Info, ((NimStringDesc*) &TMP3616));
			nimln(21, "procfind.nim");
			goto BeforeRet;
		}
		LA11: ;
		nimln(22, "procfind.nim");
		{
			nimln(684, "system.nim");
			nimln(684, "system.nim");
			if (((TMP3613[(*procb).Kind/8] &(1<<((*procb).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3614));
			if ((NU)(i_261021) >= (NU)((*procb).kindU.S6.Sons->Sup.len)) raiseIndexError();
			if (!!(((*(*procb).kindU.S6.Sons->data[i_261021]).Kind == ((NU8) 3)))) goto LA15;
			nimln(23, "procfind.nim");
			internalerror_128690((*procb).Info, ((NimStringDesc*) &TMP3616));
			nimln(24, "procfind.nim");
			goto BeforeRet;
		}
		LA15: ;
		nimln(25, "procfind.nim");
		if (((TMP3613[(*proca).Kind/8] &(1<<((*proca).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3614));
		if ((NU)(i_261021) >= (NU)((*proca).kindU.S6.Sons->Sup.len)) raiseIndexError();
		if (!(((TMP3617[(*(*proca).kindU.S6.Sons->data[i_261021]).Kind/8] &(1<<((*(*proca).kindU.S6.Sons->data[i_261021]).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3618));
		a = (*(*proca).kindU.S6.Sons->data[i_261021]).kindU.S4.Sym;
		nimln(26, "procfind.nim");
		if (((TMP3613[(*procb).Kind/8] &(1<<((*procb).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3614));
		if ((NU)(i_261021) >= (NU)((*procb).kindU.S6.Sons->Sup.len)) raiseIndexError();
		if (!(((TMP3617[(*(*procb).kindU.S6.Sons->data[i_261021]).Kind/8] &(1<<((*(*procb).kindU.S6.Sons->data[i_261021]).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3618));
		b = (*(*procb).kindU.S6.Sons->data[i_261021]).kindU.S4.Sym;
		nimln(27, "procfind.nim");
		{
			NIM_BOOL LOC19;
			NIM_BOOL LOC21;
			nimln(27, "procfind.nim");
			nimln(684, "system.nim");
			nimln(684, "system.nim");
			LOC19 = !(((*(*a).Name).Sup.Id == (*(*b).Name).Sup.Id));
			if (LOC19) goto LA20;
			nimln(28, "procfind.nim");
			nimln(28, "procfind.nim");
			LOC21 = sametypeornil_199258((*a).Typ, (*b).Typ, 2);
			LOC19 = !(LOC21);
			LA20: ;
			if (!LOC19) goto LA22;
			nimln(28, "procfind.nim");
			goto BeforeRet;
		}
		LA22: ;
		nimln(29, "procfind.nim");
		{
			NIM_BOOL LOC26;
			nimln(29, "procfind.nim");
			nimln(684, "system.nim");
			nimln(684, "system.nim");
			LOC26 = !(((*a).Ast == NIM_NIL));
			if (!(LOC26)) goto LA27;
			nimln(684, "system.nim");
			nimln(684, "system.nim");
			LOC26 = !(((*b).Ast == NIM_NIL));
			LA27: ;
			if (!LOC26) goto LA28;
			nimln(30, "procfind.nim");
			{
				NIM_BOOL LOC32;
				nimln(30, "procfind.nim");
				nimln(30, "procfind.nim");
				LOC32 = exprstructuralequivalent_194111((*a).Ast, (*b).Ast);
				if (!!(LOC32)) goto LA33;
				nimln(30, "procfind.nim");
				goto BeforeRet;
			}
			LA33: ;
		}
		LA28: ;
		nimln(1277, "system.nim");
		res_261121 = addInt(res_261121, 1);
	} LA8: ;
	nimln(31, "procfind.nim");
	result = NIM_TRUE;
	BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(tsym168677*, searchforproc_261126)(tcontext254019* c, tscope168671* scope, tsym168677* fn) {
	tsym168677* result;
	tidentiter175106 it;
	nimfr("SearchForProc", "procfind.nim")
	result = 0;
	memset((void*)&it, 0, sizeof(it));
	nimln(38, "procfind.nim");
	result = initidentiter_175110(&it, (*scope).Symbols, (*fn).Name);
	nimln(39, "procfind.nim");
	{
		NIM_BOOL LOC3;
		nimln(39, "procfind.nim");
		LOC3 = isgenericroutine_173344(fn);
		if (!LOC3) goto LA4;
		nimln(43, "procfind.nim");
		while (1) {
			nimln(684, "system.nim");
			nimln(684, "system.nim");
			if (!!((result == NIM_NIL))) goto LA6;
			nimln(44, "procfind.nim");
			{
				NIM_BOOL LOC9;
				tnode168647* genr;
				tnode168647* genf;
				nimln(44, "procfind.nim");
				nimln(44, "procfind.nim");
				LOC9 = ((*result).Kind == (*fn).Kind);
				if (!(LOC9)) goto LA10;
				nimln(44, "procfind.nim");
				LOC9 = isgenericroutine_173344(result);
				LA10: ;
				if (!LOC9) goto LA11;
				nimln(45, "procfind.nim");
				if (((TMP3613[(*(*result).Ast).Kind/8] &(1<<((*(*result).Ast).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3614));
				if ((NU)(2) >= (NU)((*(*result).Ast).kindU.S6.Sons->Sup.len)) raiseIndexError();
				genr = (*(*result).Ast).kindU.S6.Sons->data[2];
				nimln(46, "procfind.nim");
				if (((TMP3613[(*(*fn).Ast).Kind/8] &(1<<((*(*fn).Ast).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3614));
				if ((NU)(2) >= (NU)((*(*fn).Ast).kindU.S6.Sons->Sup.len)) raiseIndexError();
				genf = (*(*fn).Ast).kindU.S6.Sons->data[2];
				nimln(47, "procfind.nim");
				{
					NIM_BOOL LOC15;
					NIM_BOOL LOC16;
					nimln(49, "procfind.nim");
					nimln(47, "procfind.nim");
					nimln(47, "procfind.nim");
					LOC16 = exprstructuralequivalent_194111(genr, genf);
					if (!(LOC16)) goto LA17;
					nimln(48, "procfind.nim");
					if (((TMP3613[(*(*result).Ast).Kind/8] &(1<<((*(*result).Ast).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3614));
					if ((NU)(3) >= (NU)((*(*result).Ast).kindU.S6.Sons->Sup.len)) raiseIndexError();
					if (((TMP3613[(*(*fn).Ast).Kind/8] &(1<<((*(*fn).Ast).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3614));
					if ((NU)(3) >= (NU)((*(*fn).Ast).kindU.S6.Sons->Sup.len)) raiseIndexError();
					LOC16 = exprstructuralequivalent_194111((*(*result).Ast).kindU.S6.Sons->data[3], (*(*fn).Ast).kindU.S6.Sons->data[3]);
					LA17: ;
					LOC15 = LOC16;
					if (!(LOC15)) goto LA18;
					nimln(50, "procfind.nim");
					LOC15 = equalgenericparams_261008(genr, genf);
					LA18: ;
					if (!LOC15) goto LA19;
					nimln(51, "procfind.nim");
					goto BeforeRet;
				}
				LA19: ;
			}
			LA11: ;
			nimln(52, "procfind.nim");
			result = nextidentiter_175117(&it, (*scope).Symbols);
		} LA6: ;
	}
	goto LA1;
	LA4: ;
	{
		nimln(54, "procfind.nim");
		while (1) {
			nimln(684, "system.nim");
			nimln(684, "system.nim");
			if (!!((result == NIM_NIL))) goto LA22;
			nimln(55, "procfind.nim");
			{
				NIM_BOOL LOC25;
				NIM_BOOL LOC27;
				NU8 LOC30;
				nimln(55, "procfind.nim");
				nimln(55, "procfind.nim");
				LOC25 = ((*result).Kind == (*fn).Kind);
				if (!(LOC25)) goto LA26;
				nimln(55, "procfind.nim");
				nimln(55, "procfind.nim");
				LOC27 = isgenericroutine_173344(result);
				LOC25 = !(LOC27);
				LA26: ;
				if (!LOC25) goto LA28;
				nimln(56, "procfind.nim");
				nimln(56, "procfind.nim");
				LOC30 = equalparams_195066((*(*result).Typ).N, (*(*fn).Typ).N);
				switch (LOC30) {
				case ((NU8) 1):
				{
					nimln(58, "procfind.nim");
					goto BeforeRet;
				}
				break;
				case ((NU8) 2):
				{
					nimln(60, "procfind.nim");
					localerror_128676((*fn).Info, ((NU16) 66), (*(*fn).Name).S);
					nimln(61, "procfind.nim");
					goto BeforeRet;
				}
				break;
				case ((NU8) 0):
				{
				}
				break;
				}
			}
			LA28: ;
			nimln(64, "procfind.nim");
			result = nextidentiter_175117(&it, (*scope).Symbols);
		} LA22: ;
	}
	LA1: ;
	BeforeRet: ;
	popFrame();
	return result;
}
N_NOINLINE(void, procfindInit)(void) {
	nimfr("procfind", "procfind.nim")
	popFrame();
}

N_NOINLINE(void, procfindDatInit)(void) {
}

