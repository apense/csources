/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <stdio.h>
typedef struct tnode169647 tnode169647;
typedef struct tlineinfo128308 tlineinfo128308;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct ttype169681 ttype169681;
typedef struct tsym169677 tsym169677;
typedef struct tident131015 tident131015;
typedef struct tnodeseq169641 tnodeseq169641;
typedef struct tllstream159204 tllstream159204;
typedef struct tidobj131009 tidobj131009;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct ttypeseq169679 ttypeseq169679;
typedef struct tloc169661 tloc169661;
typedef struct trope126007 trope126007;
typedef struct TY169771 TY169771;
typedef struct tinstantiation169667 tinstantiation169667;
typedef struct tscope169671 tscope169671;
typedef struct tstrtable169651 tstrtable169651;
typedef struct tsymseq169649 tsymseq169649;
typedef struct tlib169665 tlib169665;
typedef struct TY169763 TY169763;
typedef struct tlistentry100011 tlistentry100011;
struct tlineinfo128308 {
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
struct tloc169661 {
NU8 K;
NU8 S;
NU8 Flags;
ttype169681* T;
trope126007* R;
trope126007* Heaproot;
NI A;
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
struct tstrtable169651 {
NI Counter;
tsymseq169649* Data;
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
struct tllstream159204 {
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
struct trope126007 {
  TNimObject Sup;
trope126007* Left;
trope126007* Right;
NI Length;
NimStringDesc* Data;
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
N_NIMCALL(void, invalidpragma_192036)(tnode169647* n);
N_NIMCALL(void, localerror_129676)(tlineinfo128308 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(NimStringDesc*, rendertree_187046)(tnode169647* n, NU8 renderflags);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(tnode169647*, getarg_192042)(tnode169647* n, NimStringDesc* name, NI pos);
static N_INLINE(NI, sonslen_170003)(tnode169647* n);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(NIM_BOOL, identeq_131461)(tident131015* id, NimStringDesc* name);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(NIM_CHAR, chararg_192014)(tnode169647* n, NimStringDesc* name, NI pos, NIM_CHAR default_192019);
N_NIMCALL(NI64, chckRange64)(NI64 i, NI64 a, NI64 b);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
N_NIMCALL(NimStringDesc*, strarg_192021)(tnode169647* n, NimStringDesc* name, NI pos, NimStringDesc* default_192026);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NIM_BOOL, boolarg_192028)(tnode169647* n, NimStringDesc* name, NI pos, NIM_BOOL default_192033);
N_NIMCALL(tllstream159204*, filterstrip_192008)(tllstream159204* stdin_192010, NimStringDesc* filename, tnode169647* call);
N_NIMCALL(tllstream159204*, llstreamopen_159218)(NimStringDesc* data);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(NIM_BOOL, llstreamreadline_159248)(tllstream159204* s, NimStringDesc** line);
N_NIMCALL(NimStringDesc*, nsuStrip)(NimStringDesc* s, NIM_BOOL leading, NIM_BOOL trailing);
N_NIMCALL(NIM_BOOL, nsuStartsWith)(NimStringDesc* s, NimStringDesc* prefix);
N_NIMCALL(void, llstreamwriteln_159274)(tllstream159204* s, NimStringDesc* data);
N_NIMCALL(void, llstreamclose_159238)(tllstream159204* s);
N_NIMCALL(tllstream159204*, filterreplace_192002)(tllstream159204* stdin_192004, NimStringDesc* filename, tnode169647* call);
N_NIMCALL(NimStringDesc*, nsuReplaceStr)(NimStringDesc* s, NimStringDesc* sub, NimStringDesc* by);
static NIM_CONST TY169850 TMP2509 = {
0xEC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP2510, "sons", 4);
static NIM_CONST TY169850 TMP2512 = {
0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP2513, "ident", 5);
static NIM_CONST TY169850 TMP2514 = {
0xE0, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP2515, "intVal", 6);
static NIM_CONST TY169850 TMP2516 = {
0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP2517, "strVal", 6);
STRING_LITERAL(TMP2518, "true", 4);
STRING_LITERAL(TMP2519, "false", 5);
STRING_LITERAL(TMP2520, "startswith", 10);
STRING_LITERAL(TMP2521, "", 0);
STRING_LITERAL(TMP2522, "leading", 7);
STRING_LITERAL(TMP2523, "trailing", 8);
STRING_LITERAL(TMP2525, "sub", 3);
STRING_LITERAL(TMP2526, "by", 2);
extern TFrame* frameptr_12027;

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_12027;
	frameptr_12027 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_12027 = (*frameptr_12027).prev;
}

N_NIMCALL(void, invalidpragma_192036)(tnode169647* n) {
	NimStringDesc* LOC1;
	nimfr("invalidPragma", "filters.nim")
	nimln(25, "filters.nim");
	nimln(25, "filters.nim");
	LOC1 = 0;
	LOC1 = rendertree_187046(n, 4);
	localerror_129676((*n).Info, ((NU16) 163), LOC1);
	popFrame();
}

static N_INLINE(NI, sonslen_170003)(tnode169647* n) {
	NI result;
	nimfr("sonsLen", "ast.nim")
	result = 0;
	nimln(1175, "ast.nim");
	{
		nimln(1175, "ast.nim");
		if (((TMP2509[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2510));
		if (!(*n).kindU.S6.Sons == 0) goto LA3;
		nimln(1175, "ast.nim");
		result = 0;
	}
	goto LA1;
	LA3: ;
	{
		nimln(1176, "ast.nim");
		nimln(1176, "ast.nim");
		if (((TMP2509[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2510));
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

N_NIMCALL(tnode169647*, getarg_192042)(tnode169647* n, NimStringDesc* name, NI pos) {
	tnode169647* result;
	NI i_192066;
	NI HEX3Atmp_192169;
	NI LOC5;
	NI TMP2511;
	NI res_192171;
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
	i_192066 = 0;
	HEX3Atmp_192169 = 0;
	nimln(30, "filters.nim");
	nimln(30, "filters.nim");
	nimln(30, "filters.nim");
	LOC5 = sonslen_170003(n);
	TMP2511 = subInt(LOC5, 1);
	HEX3Atmp_192169 = (NI32)(TMP2511);
	nimln(1274, "system.nim");
	res_192171 = 1;
	nimln(1275, "system.nim");
	while (1) {
		nimln(1275, "system.nim");
		if (!(res_192171 <= HEX3Atmp_192169)) goto LA6;
		nimln(1274, "system.nim");
		i_192066 = res_192171;
		nimln(31, "filters.nim");
		{
			nimln(31, "filters.nim");
			if (((TMP2509[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2510));
			if ((NU)(i_192066) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
			if (!((*(*n).kindU.S6.Sons->data[i_192066]).Kind == ((NU8) 33))) goto LA9;
			nimln(32, "filters.nim");
			{
				nimln(684, "system.nim");
				nimln(684, "system.nim");
				if (((TMP2509[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2510));
				if ((NU)(i_192066) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
				if (((TMP2509[(*(*n).kindU.S6.Sons->data[i_192066]).Kind/8] &(1<<((*(*n).kindU.S6.Sons->data[i_192066]).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2510));
				if ((NU)(0) >= (NU)((*(*n).kindU.S6.Sons->data[i_192066]).kindU.S6.Sons->Sup.len)) raiseIndexError();
				if (!!(((*(*(*n).kindU.S6.Sons->data[i_192066]).kindU.S6.Sons->data[0]).Kind == ((NU8) 2)))) goto LA13;
				nimln(32, "filters.nim");
				invalidpragma_192036(n);
			}
			LA13: ;
			nimln(33, "filters.nim");
			{
				NIM_BOOL LOC17;
				nimln(33, "filters.nim");
				if (((TMP2509[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2510));
				if ((NU)(i_192066) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
				if (((TMP2509[(*(*n).kindU.S6.Sons->data[i_192066]).Kind/8] &(1<<((*(*n).kindU.S6.Sons->data[i_192066]).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2510));
				if ((NU)(0) >= (NU)((*(*n).kindU.S6.Sons->data[i_192066]).kindU.S6.Sons->Sup.len)) raiseIndexError();
				if (!(((TMP2512[(*(*(*n).kindU.S6.Sons->data[i_192066]).kindU.S6.Sons->data[0]).Kind/8] &(1<<((*(*(*n).kindU.S6.Sons->data[i_192066]).kindU.S6.Sons->data[0]).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP2513));
				LOC17 = identeq_131461((*(*(*n).kindU.S6.Sons->data[i_192066]).kindU.S6.Sons->data[0]).kindU.S5.Ident, name);
				if (!LOC17) goto LA18;
				nimln(34, "filters.nim");
				nimln(34, "filters.nim");
				if (((TMP2509[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2510));
				if ((NU)(i_192066) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
				if (((TMP2509[(*(*n).kindU.S6.Sons->data[i_192066]).Kind/8] &(1<<((*(*n).kindU.S6.Sons->data[i_192066]).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2510));
				if ((NU)(1) >= (NU)((*(*n).kindU.S6.Sons->data[i_192066]).kindU.S6.Sons->Sup.len)) raiseIndexError();
				result = (*(*n).kindU.S6.Sons->data[i_192066]).kindU.S6.Sons->data[1];
				goto BeforeRet;
			}
			LA18: ;
		}
		goto LA7;
		LA9: ;
		{
			nimln(35, "filters.nim");
			if (!(i_192066 == pos)) goto LA21;
			nimln(36, "filters.nim");
			nimln(36, "filters.nim");
			if (((TMP2509[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2510));
			if ((NU)(i_192066) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
			result = (*n).kindU.S6.Sons->data[i_192066];
			goto BeforeRet;
		}
		goto LA7;
		LA21: ;
		LA7: ;
		nimln(1277, "system.nim");
		res_192171 = addInt(res_192171, 1);
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

N_NIMCALL(NIM_CHAR, chararg_192014)(tnode169647* n, NimStringDesc* name, NI pos, NIM_CHAR default_192019) {
	NIM_CHAR result;
	tnode169647* x;
	nimfr("charArg", "filters.nim")
	result = 0;
	nimln(39, "filters.nim");
	x = getarg_192042(n, name, pos);
	nimln(40, "filters.nim");
	{
		nimln(40, "filters.nim");
		if (!(x == NIM_NIL)) goto LA3;
		nimln(40, "filters.nim");
		result = default_192019;
	}
	goto LA1;
	LA3: ;
	{
		nimln(41, "filters.nim");
		if (!((*x).Kind == ((NU8) 5))) goto LA6;
		nimln(41, "filters.nim");
		nimln(41, "filters.nim");
		if (!(((TMP2514[(*x).Kind/8] &(1<<((*x).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP2515));
		result = ((NIM_CHAR) (((NI)chckRange(((NI)chckRange64((*x).kindU.S1.Intval, (-2147483647 -1), 2147483647)), 0, 255))));
	}
	goto LA1;
	LA6: ;
	{
		nimln(42, "filters.nim");
		invalidpragma_192036(n);
	}
	LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(NimStringDesc*, strarg_192021)(tnode169647* n, NimStringDesc* name, NI pos, NimStringDesc* default_192026) {
	NimStringDesc* result;
	tnode169647* x;
	nimfr("strArg", "filters.nim")
	result = 0;
	nimln(45, "filters.nim");
	x = getarg_192042(n, name, pos);
	nimln(46, "filters.nim");
	{
		nimln(46, "filters.nim");
		if (!(x == NIM_NIL)) goto LA3;
		nimln(46, "filters.nim");
		result = copyString(default_192026);
	}
	goto LA1;
	LA3: ;
	{
		nimln(716, "system.nim");
		if (!((*x).Kind >= ((NU8) 20) && (*x).Kind <= ((NU8) 22))) goto LA6;
		nimln(47, "filters.nim");
		if (!(((TMP2516[(*x).Kind/8] &(1<<((*x).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP2517));
		result = copyString((*x).kindU.S3.Strval);
	}
	goto LA1;
	LA6: ;
	{
		nimln(48, "filters.nim");
		invalidpragma_192036(n);
	}
	LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(NIM_BOOL, boolarg_192028)(tnode169647* n, NimStringDesc* name, NI pos, NIM_BOOL default_192033) {
	NIM_BOOL result;
	tnode169647* x;
	nimfr("boolArg", "filters.nim")
	result = 0;
	nimln(51, "filters.nim");
	x = getarg_192042(n, name, pos);
	nimln(52, "filters.nim");
	{
		nimln(52, "filters.nim");
		if (!(x == NIM_NIL)) goto LA3;
		nimln(52, "filters.nim");
		result = default_192033;
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
		if (!(((TMP2512[(*x).Kind/8] &(1<<((*x).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP2513));
		LOC6 = identeq_131461((*x).kindU.S5.Ident, ((NimStringDesc*) &TMP2518));
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
		if (!(((TMP2512[(*x).Kind/8] &(1<<((*x).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP2513));
		LOC11 = identeq_131461((*x).kindU.S5.Ident, ((NimStringDesc*) &TMP2519));
		LA12: ;
		if (!LOC11) goto LA13;
		nimln(54, "filters.nim");
		result = NIM_FALSE;
	}
	goto LA1;
	LA13: ;
	{
		nimln(55, "filters.nim");
		invalidpragma_192036(n);
	}
	LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(tllstream159204*, filterstrip_192008)(tllstream159204* stdin_192010, NimStringDesc* filename, tnode169647* call) {
	tllstream159204* result;
	NimStringDesc* pattern;
	NIM_BOOL leading;
	NIM_BOOL trailing;
	NimStringDesc* line;
	nimfr("filterStrip", "filters.nim")
	result = 0;
	nimln(58, "filters.nim");
	pattern = strarg_192021(call, ((NimStringDesc*) &TMP2520), 1, ((NimStringDesc*) &TMP2521));
	nimln(59, "filters.nim");
	leading = boolarg_192028(call, ((NimStringDesc*) &TMP2522), 2, NIM_TRUE);
	nimln(60, "filters.nim");
	trailing = boolarg_192028(call, ((NimStringDesc*) &TMP2523), 3, NIM_TRUE);
	nimln(61, "filters.nim");
	result = llstreamopen_159218(((NimStringDesc*) &TMP2521));
	nimln(62, "filters.nim");
	nimln(62, "filters.nim");
	line = rawNewString(80);
	nimln(63, "filters.nim");
	while (1) {
		NIM_BOOL LOC2;
		NimStringDesc* stripped;
		nimln(63, "filters.nim");
		LOC2 = llstreamreadline_159248(stdin_192010, &line);
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
			llstreamwriteln_159274(result, stripped);
		}
		goto LA3;
		LA7: ;
		{
			nimln(68, "filters.nim");
			llstreamwriteln_159274(result, line);
		}
		LA3: ;
	} LA1: ;
	nimln(69, "filters.nim");
	llstreamclose_159238(stdin_192010);
	popFrame();
	return result;
}

N_NIMCALL(tllstream159204*, filterreplace_192002)(tllstream159204* stdin_192004, NimStringDesc* filename, tnode169647* call) {
	tllstream159204* result;
	NimStringDesc* sub;
	NimStringDesc* by;
	NimStringDesc* line;
	nimfr("filterReplace", "filters.nim")
	result = 0;
	nimln(72, "filters.nim");
	sub = strarg_192021(call, ((NimStringDesc*) &TMP2525), 1, ((NimStringDesc*) &TMP2521));
	nimln(73, "filters.nim");
	{
		nimln(73, "filters.nim");
		nimln(73, "filters.nim");
		if (!(sub->Sup.len == 0)) goto LA3;
		nimln(73, "filters.nim");
		invalidpragma_192036(call);
	}
	LA3: ;
	nimln(74, "filters.nim");
	by = strarg_192021(call, ((NimStringDesc*) &TMP2526), 2, ((NimStringDesc*) &TMP2521));
	nimln(75, "filters.nim");
	result = llstreamopen_159218(((NimStringDesc*) &TMP2521));
	nimln(76, "filters.nim");
	nimln(76, "filters.nim");
	line = rawNewString(80);
	nimln(77, "filters.nim");
	while (1) {
		NIM_BOOL LOC6;
		NimStringDesc* LOC7;
		nimln(77, "filters.nim");
		LOC6 = llstreamreadline_159248(stdin_192004, &line);
		if (!LOC6) goto LA5;
		nimln(78, "filters.nim");
		nimln(78, "filters.nim");
		LOC7 = 0;
		LOC7 = nsuReplaceStr(line, sub, by);
		llstreamwriteln_159274(result, LOC7);
	} LA5: ;
	nimln(79, "filters.nim");
	llstreamclose_159238(stdin_192004);
	popFrame();
	return result;
}
N_NOINLINE(void, filtersInit)(void) {
	nimfr("filters", "filters.nim")
	popFrame();
}

N_NOINLINE(void, filtersDatInit)(void) {
}

