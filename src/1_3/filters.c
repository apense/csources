/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <stdio.h>
typedef struct tnode173647 tnode173647;
typedef struct tlineinfo131308 tlineinfo131308;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct ttype173681 ttype173681;
typedef struct tsym173677 tsym173677;
typedef struct tident134015 tident134015;
typedef struct tnodeseq173641 tnodeseq173641;
typedef struct tllstream163204 tllstream163204;
typedef struct tidobj134009 tidobj134009;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct ttypeseq173679 ttypeseq173679;
typedef struct tloc173661 tloc173661;
typedef struct trope129007 trope129007;
typedef struct TY173771 TY173771;
typedef struct tinstantiation173667 tinstantiation173667;
typedef struct tscope173671 tscope173671;
typedef struct tstrtable173651 tstrtable173651;
typedef struct tsymseq173649 tsymseq173649;
typedef struct tlib173665 tlib173665;
typedef struct TY173763 TY173763;
typedef struct tlistentry104011 tlistentry104011;
struct tlineinfo131308 {
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
struct tnode173647 {
ttype173681* Typ;
tlineinfo131308 Info;
NU8 Flags;
NU8 Kind;
union {
struct {NI64 Intval;
} S1;
struct {NF64 Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {tsym173677* Sym;
} S4;
struct {tident134015* Ident;
} S5;
struct {tnodeseq173641* Sons;
} S6;
} kindU;
NimStringDesc* Comment;
};
typedef NU8 TY173850[19];
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
struct tidobj134009 {
  TNimObject Sup;
NI Id;
};
struct tloc173661 {
NU8 K;
NU8 S;
NU8 Flags;
ttype173681* T;
trope129007* R;
trope129007* Heaproot;
NI A;
};
struct ttype173681 {
  tidobj134009 Sup;
NU8 Kind;
NU8 Callconv;
NU32 Flags;
ttypeseq173679* Sons;
tnode173647* N;
tsym173677* Destructor;
tsym173677* Owner;
tsym173677* Sym;
NI64 Size;
NI Align;
tloc173661 Loc;
};
struct tstrtable173651 {
NI Counter;
tsymseq173649* Data;
};
struct tsym173677 {
  tidobj134009 Sup;
NU8 Kind;
union {
struct {ttypeseq173679* Typeinstcache;
} S1;
struct {TY173771* Procinstcache;
tscope173671* Scope;
} S2;
struct {TY173771* Usedgenerics;
tstrtable173651 Tab;
} S3;
} kindU;
NU16 Magic;
ttype173681* Typ;
tident134015* Name;
tlineinfo131308 Info;
tsym173677* Owner;
NU32 Flags;
tnode173647* Ast;
NU32 Options;
NI Position;
NI Offset;
tloc173661 Loc;
tlib173665* Annex;
tnode173647* Constraint;
};
struct tident134015 {
  tidobj134009 Sup;
NimStringDesc* S;
tident134015* Next;
NI H;
};
struct tllstream163204 {
  TNimObject Sup;
NU8 Kind;
FILE* F;
NimStringDesc* S;
NI Rd;
NI Wr;
NI Lineoffset;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct trope129007 {
  TNimObject Sup;
trope129007* Left;
trope129007* Right;
NI Length;
NimStringDesc* Data;
};
struct tinstantiation173667 {
tsym173677* Sym;
ttypeseq173679* Concretetypes;
TY173763* Usedby;
};
struct tscope173671 {
NI Depthlevel;
tstrtable173651 Symbols;
tscope173671* Parent;
};
struct tlistentry104011 {
  TNimObject Sup;
tlistentry104011* Prev;
tlistentry104011* Next;
};
struct tlib173665 {
  tlistentry104011 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope129007* Name;
tnode173647* Path;
};
struct tnodeseq173641 {
  TGenericSeq Sup;
  tnode173647* data[SEQ_DECL_SIZE];
};
struct ttypeseq173679 {
  TGenericSeq Sup;
  ttype173681* data[SEQ_DECL_SIZE];
};
struct TY173771 {
  TGenericSeq Sup;
  tinstantiation173667* data[SEQ_DECL_SIZE];
};
struct tsymseq173649 {
  TGenericSeq Sup;
  tsym173677* data[SEQ_DECL_SIZE];
};
struct TY173763 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, invalidpragma_196036)(tnode173647* n);
N_NIMCALL(void, localerror_132673)(tlineinfo131308 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(NimStringDesc*, rendertree_191046)(tnode173647* n, NU8 renderflags);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(tnode173647*, getarg_196042)(tnode173647* n, NimStringDesc* name, NI pos);
static N_INLINE(NI, sonslen_174003)(tnode173647* n);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(NIM_BOOL, identeq_134461)(tident134015* id, NimStringDesc* name);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(NIM_CHAR, chararg_196014)(tnode173647* n, NimStringDesc* name, NI pos, NIM_CHAR default_196019);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
N_NIMCALL(NimStringDesc*, strarg_196021)(tnode173647* n, NimStringDesc* name, NI pos, NimStringDesc* default_196026);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NIM_BOOL, boolarg_196028)(tnode173647* n, NimStringDesc* name, NI pos, NIM_BOOL default_196033);
N_NIMCALL(tllstream163204*, filterstrip_196008)(tllstream163204* stdin_196010, NimStringDesc* filename, tnode173647* call);
N_NIMCALL(tllstream163204*, llstreamopen_163218)(NimStringDesc* data);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(NIM_BOOL, llstreamreadline_163248)(tllstream163204* s, NimStringDesc** line);
N_NIMCALL(NimStringDesc*, nsuStrip)(NimStringDesc* s, NIM_BOOL leading, NIM_BOOL trailing);
N_NIMCALL(NIM_BOOL, nsuStartsWith)(NimStringDesc* s, NimStringDesc* prefix);
N_NIMCALL(void, llstreamwriteln_163274)(tllstream163204* s, NimStringDesc* data);
N_NIMCALL(void, llstreamclose_163238)(tllstream163204* s);
N_NIMCALL(tllstream163204*, filterreplace_196002)(tllstream163204* stdin_196004, NimStringDesc* filename, tnode173647* call);
N_NIMCALL(NimStringDesc*, nsuReplaceStr)(NimStringDesc* s, NimStringDesc* sub, NimStringDesc* by);
static NIM_CONST TY173850 TMP2505 = {
0xEC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP2506, "sons", 4);
static NIM_CONST TY173850 TMP2508 = {
0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP2509, "ident", 5);
static NIM_CONST TY173850 TMP2510 = {
0xE0, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP2511, "intVal", 6);
static NIM_CONST TY173850 TMP2512 = {
0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP2513, "strVal", 6);
STRING_LITERAL(TMP2514, "true", 4);
STRING_LITERAL(TMP2515, "false", 5);
STRING_LITERAL(TMP2516, "startswith", 10);
STRING_LITERAL(TMP2517, "", 0);
STRING_LITERAL(TMP2518, "leading", 7);
STRING_LITERAL(TMP2519, "trailing", 8);
STRING_LITERAL(TMP2521, "sub", 3);
STRING_LITERAL(TMP2522, "by", 2);
extern TFrame* frameptr_12027;

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_12027;
	frameptr_12027 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_12027 = (*frameptr_12027).prev;
}

N_NIMCALL(void, invalidpragma_196036)(tnode173647* n) {
	NimStringDesc* LOC1;
	nimfr("invalidPragma", "filters.nim")
	nimln(25, "filters.nim");
	nimln(25, "filters.nim");
	LOC1 = 0;
	LOC1 = rendertree_191046(n, 4);
	localerror_132673((*n).Info, ((NU16) 163), LOC1);
	popFrame();
}

static N_INLINE(NI, sonslen_174003)(tnode173647* n) {
	NI result;
	nimfr("sonsLen", "ast.nim")
	result = 0;
	nimln(1175, "ast.nim");
	{
		nimln(1175, "ast.nim");
		if (((TMP2505[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2506));
		if (!(*n).kindU.S6.Sons == 0) goto LA3;
		nimln(1175, "ast.nim");
		result = 0;
	}
	goto LA1;
	LA3: ;
	{
		nimln(1176, "ast.nim");
		nimln(1176, "ast.nim");
		if (((TMP2505[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2506));
		result = (*n).kindU.S6.Sons->Sup.len;
	}
	LA1: ;
	popFrame();
	return result;
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

N_NIMCALL(tnode173647*, getarg_196042)(tnode173647* n, NimStringDesc* name, NI pos) {
	tnode173647* result;
	NI i_196066;
	NI HEX3Atmp_196169;
	NI LOC5;
	NI TMP2507;
	NI res_196171;
	nimfr("getArg", "filters.nim")
	result = 0;
	nimln(28, "filters.nim");
	result = NIM_NIL;
	nimln(29, "filters.nim");
	{
		nimln(716, "system.nim");
		if (!((*n).Kind >= ((NU8) 1) && (*n).Kind <= ((NU8) 23))) goto LA3;
		nimln(29, "filters.nim");
		goto BeforeRet;
	}
	LA3: ;
	i_196066 = 0;
	HEX3Atmp_196169 = 0;
	nimln(30, "filters.nim");
	nimln(30, "filters.nim");
	nimln(30, "filters.nim");
	LOC5 = sonslen_174003(n);
	TMP2507 = subInt(LOC5, 1);
	HEX3Atmp_196169 = (NI64)(TMP2507);
	nimln(1274, "system.nim");
	res_196171 = 1;
	nimln(1275, "system.nim");
	while (1) {
		nimln(1275, "system.nim");
		if (!(res_196171 <= HEX3Atmp_196169)) goto LA6;
		nimln(1274, "system.nim");
		i_196066 = res_196171;
		nimln(31, "filters.nim");
		{
			nimln(31, "filters.nim");
			if (((TMP2505[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2506));
			if ((NU)(i_196066) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
			if (!((*(*n).kindU.S6.Sons->data[i_196066]).Kind == ((NU8) 33))) goto LA9;
			nimln(32, "filters.nim");
			{
				nimln(684, "system.nim");
				nimln(684, "system.nim");
				if (((TMP2505[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2506));
				if ((NU)(i_196066) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
				if (((TMP2505[(*(*n).kindU.S6.Sons->data[i_196066]).Kind/8] &(1<<((*(*n).kindU.S6.Sons->data[i_196066]).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2506));
				if ((NU)(0) >= (NU)((*(*n).kindU.S6.Sons->data[i_196066]).kindU.S6.Sons->Sup.len)) raiseIndexError();
				if (!!(((*(*(*n).kindU.S6.Sons->data[i_196066]).kindU.S6.Sons->data[0]).Kind == ((NU8) 2)))) goto LA13;
				nimln(32, "filters.nim");
				invalidpragma_196036(n);
			}
			LA13: ;
			nimln(33, "filters.nim");
			{
				NIM_BOOL LOC17;
				nimln(33, "filters.nim");
				if (((TMP2505[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2506));
				if ((NU)(i_196066) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
				if (((TMP2505[(*(*n).kindU.S6.Sons->data[i_196066]).Kind/8] &(1<<((*(*n).kindU.S6.Sons->data[i_196066]).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2506));
				if ((NU)(0) >= (NU)((*(*n).kindU.S6.Sons->data[i_196066]).kindU.S6.Sons->Sup.len)) raiseIndexError();
				if (!(((TMP2508[(*(*(*n).kindU.S6.Sons->data[i_196066]).kindU.S6.Sons->data[0]).Kind/8] &(1<<((*(*(*n).kindU.S6.Sons->data[i_196066]).kindU.S6.Sons->data[0]).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP2509));
				LOC17 = identeq_134461((*(*(*n).kindU.S6.Sons->data[i_196066]).kindU.S6.Sons->data[0]).kindU.S5.Ident, name);
				if (!LOC17) goto LA18;
				nimln(34, "filters.nim");
				nimln(34, "filters.nim");
				if (((TMP2505[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2506));
				if ((NU)(i_196066) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
				if (((TMP2505[(*(*n).kindU.S6.Sons->data[i_196066]).Kind/8] &(1<<((*(*n).kindU.S6.Sons->data[i_196066]).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2506));
				if ((NU)(1) >= (NU)((*(*n).kindU.S6.Sons->data[i_196066]).kindU.S6.Sons->Sup.len)) raiseIndexError();
				result = (*(*n).kindU.S6.Sons->data[i_196066]).kindU.S6.Sons->data[1];
				goto BeforeRet;
			}
			LA18: ;
		}
		goto LA7;
		LA9: ;
		{
			nimln(35, "filters.nim");
			if (!(i_196066 == pos)) goto LA21;
			nimln(36, "filters.nim");
			nimln(36, "filters.nim");
			if (((TMP2505[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2506));
			if ((NU)(i_196066) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
			result = (*n).kindU.S6.Sons->data[i_196066];
			goto BeforeRet;
		}
		goto LA7;
		LA21: ;
		LA7: ;
		nimln(1277, "system.nim");
		res_196171 = addInt(res_196171, 1);
	} LA6: ;
	BeforeRet: ;
	popFrame();
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

N_NIMCALL(NIM_CHAR, chararg_196014)(tnode173647* n, NimStringDesc* name, NI pos, NIM_CHAR default_196019) {
	NIM_CHAR result;
	tnode173647* x;
	nimfr("charArg", "filters.nim")
	result = 0;
	nimln(39, "filters.nim");
	x = getarg_196042(n, name, pos);
	nimln(40, "filters.nim");
	{
		nimln(40, "filters.nim");
		if (!(x == NIM_NIL)) goto LA3;
		nimln(40, "filters.nim");
		result = default_196019;
	}
	goto LA1;
	LA3: ;
	{
		nimln(41, "filters.nim");
		if (!((*x).Kind == ((NU8) 5))) goto LA6;
		nimln(41, "filters.nim");
		nimln(41, "filters.nim");
		if (!(((TMP2510[(*x).Kind/8] &(1<<((*x).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP2511));
		result = ((NIM_CHAR) (((NI)chckRange(((NI) ((*x).kindU.S1.Intval)), 0, 255))));
	}
	goto LA1;
	LA6: ;
	{
		nimln(42, "filters.nim");
		invalidpragma_196036(n);
	}
	LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(NimStringDesc*, strarg_196021)(tnode173647* n, NimStringDesc* name, NI pos, NimStringDesc* default_196026) {
	NimStringDesc* result;
	tnode173647* x;
	nimfr("strArg", "filters.nim")
	result = 0;
	nimln(45, "filters.nim");
	x = getarg_196042(n, name, pos);
	nimln(46, "filters.nim");
	{
		nimln(46, "filters.nim");
		if (!(x == NIM_NIL)) goto LA3;
		nimln(46, "filters.nim");
		result = copyString(default_196026);
	}
	goto LA1;
	LA3: ;
	{
		nimln(716, "system.nim");
		if (!((*x).Kind >= ((NU8) 20) && (*x).Kind <= ((NU8) 22))) goto LA6;
		nimln(47, "filters.nim");
		if (!(((TMP2512[(*x).Kind/8] &(1<<((*x).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP2513));
		result = copyString((*x).kindU.S3.Strval);
	}
	goto LA1;
	LA6: ;
	{
		nimln(48, "filters.nim");
		invalidpragma_196036(n);
	}
	LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(NIM_BOOL, boolarg_196028)(tnode173647* n, NimStringDesc* name, NI pos, NIM_BOOL default_196033) {
	NIM_BOOL result;
	tnode173647* x;
	nimfr("boolArg", "filters.nim")
	result = 0;
	nimln(51, "filters.nim");
	x = getarg_196042(n, name, pos);
	nimln(52, "filters.nim");
	{
		nimln(52, "filters.nim");
		if (!(x == NIM_NIL)) goto LA3;
		nimln(52, "filters.nim");
		result = default_196033;
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		nimln(53, "filters.nim");
		nimln(53, "filters.nim");
		LOC6 = ((*x).Kind == ((NU8) 2));
		if (!(LOC6)) goto LA7;
		nimln(53, "filters.nim");
		if (!(((TMP2508[(*x).Kind/8] &(1<<((*x).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP2509));
		LOC6 = identeq_134461((*x).kindU.S5.Ident, ((NimStringDesc*) &TMP2514));
		LA7: ;
		if (!LOC6) goto LA8;
		nimln(53, "filters.nim");
		result = NIM_TRUE;
	}
	goto LA1;
	LA8: ;
	{
		NIM_BOOL LOC11;
		nimln(54, "filters.nim");
		nimln(54, "filters.nim");
		LOC11 = ((*x).Kind == ((NU8) 2));
		if (!(LOC11)) goto LA12;
		nimln(54, "filters.nim");
		if (!(((TMP2508[(*x).Kind/8] &(1<<((*x).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP2509));
		LOC11 = identeq_134461((*x).kindU.S5.Ident, ((NimStringDesc*) &TMP2515));
		LA12: ;
		if (!LOC11) goto LA13;
		nimln(54, "filters.nim");
		result = NIM_FALSE;
	}
	goto LA1;
	LA13: ;
	{
		nimln(55, "filters.nim");
		invalidpragma_196036(n);
	}
	LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(tllstream163204*, filterstrip_196008)(tllstream163204* stdin_196010, NimStringDesc* filename, tnode173647* call) {
	tllstream163204* result;
	NimStringDesc* pattern;
	NIM_BOOL leading;
	NIM_BOOL trailing;
	NimStringDesc* line;
	nimfr("filterStrip", "filters.nim")
	result = 0;
	nimln(58, "filters.nim");
	pattern = strarg_196021(call, ((NimStringDesc*) &TMP2516), 1, ((NimStringDesc*) &TMP2517));
	nimln(59, "filters.nim");
	leading = boolarg_196028(call, ((NimStringDesc*) &TMP2518), 2, NIM_TRUE);
	nimln(60, "filters.nim");
	trailing = boolarg_196028(call, ((NimStringDesc*) &TMP2519), 3, NIM_TRUE);
	nimln(61, "filters.nim");
	result = llstreamopen_163218(((NimStringDesc*) &TMP2517));
	nimln(62, "filters.nim");
	nimln(62, "filters.nim");
	line = rawNewString(80);
	nimln(63, "filters.nim");
	while (1) {
		NIM_BOOL LOC2;
		NimStringDesc* stripped;
		nimln(63, "filters.nim");
		LOC2 = llstreamreadline_163248(stdin_196010, &line);
		if (!LOC2) goto LA1;
		nimln(64, "filters.nim");
		stripped = nsuStrip(line, leading, trailing);
		nimln(65, "filters.nim");
		{
			NIM_BOOL LOC5;
			nimln(65, "filters.nim");
			nimln(65, "filters.nim");
			nimln(65, "filters.nim");
			LOC5 = (pattern->Sup.len == 0);
			if (LOC5) goto LA6;
			nimln(65, "filters.nim");
			LOC5 = nsuStartsWith(stripped, pattern);
			LA6: ;
			if (!LOC5) goto LA7;
			nimln(66, "filters.nim");
			llstreamwriteln_163274(result, stripped);
		}
		goto LA3;
		LA7: ;
		{
			nimln(68, "filters.nim");
			llstreamwriteln_163274(result, line);
		}
		LA3: ;
	} LA1: ;
	nimln(69, "filters.nim");
	llstreamclose_163238(stdin_196010);
	popFrame();
	return result;
}

N_NIMCALL(tllstream163204*, filterreplace_196002)(tllstream163204* stdin_196004, NimStringDesc* filename, tnode173647* call) {
	tllstream163204* result;
	NimStringDesc* sub;
	NimStringDesc* by;
	NimStringDesc* line;
	nimfr("filterReplace", "filters.nim")
	result = 0;
	nimln(72, "filters.nim");
	sub = strarg_196021(call, ((NimStringDesc*) &TMP2521), 1, ((NimStringDesc*) &TMP2517));
	nimln(73, "filters.nim");
	{
		nimln(73, "filters.nim");
		nimln(73, "filters.nim");
		if (!(sub->Sup.len == 0)) goto LA3;
		nimln(73, "filters.nim");
		invalidpragma_196036(call);
	}
	LA3: ;
	nimln(74, "filters.nim");
	by = strarg_196021(call, ((NimStringDesc*) &TMP2522), 2, ((NimStringDesc*) &TMP2517));
	nimln(75, "filters.nim");
	result = llstreamopen_163218(((NimStringDesc*) &TMP2517));
	nimln(76, "filters.nim");
	nimln(76, "filters.nim");
	line = rawNewString(80);
	nimln(77, "filters.nim");
	while (1) {
		NIM_BOOL LOC6;
		NimStringDesc* LOC7;
		nimln(77, "filters.nim");
		LOC6 = llstreamreadline_163248(stdin_196004, &line);
		if (!LOC6) goto LA5;
		nimln(78, "filters.nim");
		nimln(78, "filters.nim");
		LOC7 = 0;
		LOC7 = nsuReplaceStr(line, sub, by);
		llstreamwriteln_163274(result, LOC7);
	} LA5: ;
	nimln(79, "filters.nim");
	llstreamclose_163238(stdin_196004);
	popFrame();
	return result;
}
N_NOINLINE(void, filtersInit)(void) {
	nimfr("filters", "filters.nim")
	popFrame();
}

N_NOINLINE(void, filtersDatInit)(void) {
}

