/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"
typedef struct tnode173647 tnode173647;
typedef struct ttype173681 ttype173681;
typedef struct tintset170041 tintset170041;
typedef struct tlineinfo131308 tlineinfo131308;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tsym173677 tsym173677;
typedef struct tident134015 tident134015;
typedef struct tnodeseq173641 tnodeseq173641;
typedef struct tidobj134009 tidobj134009;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct ttypeseq173679 ttypeseq173679;
typedef struct TY173771 TY173771;
typedef struct tinstantiation173667 tinstantiation173667;
typedef struct tscope173671 tscope173671;
typedef struct tstrtable173651 tstrtable173651;
typedef struct tsymseq173649 tsymseq173649;
typedef struct tloc173661 tloc173661;
typedef struct trope129007 trope129007;
typedef struct tlib173665 tlib173665;
typedef struct ttrunk170037 ttrunk170037;
typedef struct ttrunkseq170039 ttrunkseq170039;
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
struct tstrtable173651 {
NI Counter;
tsymseq173649* Data;
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
struct tintset170041 {
NI Counter;
NI Max;
ttrunk170037* Head;
ttrunkseq170039* Data;
};
struct tident134015 {
  tidobj134009 Sup;
NimStringDesc* S;
tident134015* Next;
NI H;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
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
struct trope129007 {
  TNimObject Sup;
trope129007* Left;
trope129007* Right;
NI Length;
NimStringDesc* Data;
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
typedef NI TY21421[16];
struct ttrunk170037 {
ttrunk170037* Next;
NI Key;
TY21421 Bits;
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
struct ttrunkseq170039 {
  TGenericSeq Sup;
  ttrunk170037* data[SEQ_DECL_SIZE];
};
struct TY173763 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(NU8, ispartofaux_304018)(tnode173647* n, ttype173681* b, tintset170041* marker);
static N_INLINE(NI, sonslen_174003)(tnode173647* n);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(void, hiddenraiseassert_72820)(NimStringDesc* msg);
static N_INLINE(tnode173647*, lastson_174011)(tnode173647* n);
N_NIMCALL(void, internalerror_132702)(NimStringDesc* errmsg);
N_NIMCALL(void, internalerror_132690)(tlineinfo131308 info, NimStringDesc* errmsg);
N_NIMCALL(NU8, ispartofaux_304011)(ttype173681* a, ttype173681* b, tintset170041* marker);
N_NIMCALL(NIM_BOOL, containsorincl_170875)(tintset170041* s, NI key);
N_NIMCALL(NIM_BOOL, comparetypes_205867)(ttype173681* x, ttype173681* y, NU8 cmp, NU8 flags);
static N_INLINE(ttype173681*, lastson_174015)(ttype173681* n);
static N_INLINE(NI, sonslen_174007)(ttype173681* n);
N_NIMCALL(NU8, ispartof_304331)(ttype173681* a, ttype173681* b);
N_NIMCALL(void, initintset_170899)(tintset170041* Result);
N_NOINLINE(void, chckNil)(void* p);
N_NIMCALL(NU8, ispartof_304340)(tnode173647* a, tnode173647* b);
static N_INLINE(tnode173647*, HEX5BHEX5D_174276)(tnode173647* n, NI i);
static N_INLINE(NI, len_174082)(tnode173647* n);
N_NIMCALL(NIM_BOOL, isdeepconstexpr_199631)(tnode173647* n);
N_NIMCALL(NIM_BOOL, samevalue_180268)(tnode173647* a, tnode173647* b);
static NIM_CONST TY173850 TMP4745 = {
0xEC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP4746, "sons", 4);
STRING_LITERAL(TMP4748, "n.sons[0].Kind == nkSym ", 24);
STRING_LITERAL(TMP4751, "isPartOfAux(record case branch)", 31);
static NIM_CONST TY173850 TMP4752 = {
0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP4753, "sym", 3);
STRING_LITERAL(TMP4754, "isPartOfAux()", 13);
NIM_CONST NU32 varkinds_304351 = 4384;
NIM_CONST TY173850 ix0kinds_304509 = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x64, 0x00, 0x00,
0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00}
;
NIM_CONST TY173850 ix1kinds_304511 = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1C,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00}
;
NIM_CONST TY173850 derefkinds_304513 = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00,
0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00}
;
extern TFrame* frameptr_12027;

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_12027;
	frameptr_12027 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_12027 = (*frameptr_12027).prev;
}

static N_INLINE(NI, sonslen_174003)(tnode173647* n) {
	NI result;
	nimfr("sonsLen", "ast.nim")
	result = 0;
	nimln(1175, "ast.nim");
	{
		nimln(1175, "ast.nim");
		if (((TMP4745[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4746));
		if (!(*n).kindU.S6.Sons == 0) goto LA3;
		nimln(1175, "ast.nim");
		result = 0;
	}
	goto LA1;
	LA3: ;
	{
		nimln(1176, "ast.nim");
		nimln(1176, "ast.nim");
		if (((TMP4745[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4746));
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

static N_INLINE(tnode173647*, lastson_174011)(tnode173647* n) {
	tnode173647* result;
	NI LOC1;
	NI TMP4750;
	nimfr("lastSon", "ast.nim")
	result = 0;
	nimln(1287, "ast.nim");
	if (((TMP4745[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4746));
	nimln(1287, "ast.nim");
	nimln(1287, "ast.nim");
	LOC1 = sonslen_174003(n);
	TMP4750 = subInt(LOC1, 1);
	if ((NU)((NI32)(TMP4750)) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
	result = (*n).kindU.S6.Sons->data[(NI32)(TMP4750)];
	popFrame();
	return result;
}

N_NIMCALL(NU8, ispartofaux_304018)(tnode173647* n, ttype173681* b, tintset170041* marker) {
	NU8 result;
	nimfr("isPartOfAux", "aliases.nim")
	result = 0;
	nimln(22, "aliases.nim");
	result = ((NU8) 0);
	nimln(23, "aliases.nim");
	switch ((*n).Kind) {
	case ((NU8) 131):
	{
		NI i_304033;
		NI HEX3Atmp_304262;
		NI LOC2;
		NI TMP4747;
		NI res_304264;
		i_304033 = 0;
		HEX3Atmp_304262 = 0;
		nimln(25, "aliases.nim");
		nimln(25, "aliases.nim");
		nimln(25, "aliases.nim");
		LOC2 = sonslen_174003(n);
		TMP4747 = subInt(LOC2, 1);
		HEX3Atmp_304262 = (NI32)(TMP4747);
		nimln(1274, "system.nim");
		res_304264 = 0;
		nimln(1275, "system.nim");
		while (1) {
			nimln(1275, "system.nim");
			if (!(res_304264 <= HEX3Atmp_304262)) goto LA3;
			nimln(1274, "system.nim");
			i_304033 = res_304264;
			nimln(26, "aliases.nim");
			if (((TMP4745[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4746));
			if ((NU)(i_304033) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
			result = ispartofaux_304018((*n).kindU.S6.Sons->data[i_304033], b, marker);
			nimln(27, "aliases.nim");
			{
				nimln(27, "aliases.nim");
				if (!(result == ((NU8) 2))) goto LA6;
				nimln(27, "aliases.nim");
				goto BeforeRet;
			}
			LA6: ;
			nimln(1277, "system.nim");
			res_304264 = addInt(res_304264, 1);
		} LA3: ;
	}
	break;
	case ((NU8) 132):
	{
		NI i_304225;
		NI HEX3Atmp_304266;
		NI LOC17;
		NI TMP4749;
		NI res_304268;
		nimln(29, "aliases.nim");
		{
			nimln(29, "aliases.nim");
			nimln(29, "aliases.nim");
			if (((TMP4745[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4746));
			if ((NU)(0) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
			if (!!(((*(*n).kindU.S6.Sons->data[0]).Kind == ((NU8) 3)))) goto LA11;
			nimln(29, "aliases.nim");
			hiddenraiseassert_72820(((NimStringDesc*) &TMP4748));
		}
		LA11: ;
		nimln(30, "aliases.nim");
		if (((TMP4745[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4746));
		if ((NU)(0) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
		result = ispartofaux_304018((*n).kindU.S6.Sons->data[0], b, marker);
		nimln(31, "aliases.nim");
		{
			nimln(31, "aliases.nim");
			if (!(result == ((NU8) 2))) goto LA15;
			nimln(31, "aliases.nim");
			goto BeforeRet;
		}
		LA15: ;
		i_304225 = 0;
		HEX3Atmp_304266 = 0;
		nimln(32, "aliases.nim");
		nimln(32, "aliases.nim");
		nimln(32, "aliases.nim");
		LOC17 = sonslen_174003(n);
		TMP4749 = subInt(LOC17, 1);
		HEX3Atmp_304266 = (NI32)(TMP4749);
		nimln(1274, "system.nim");
		res_304268 = 1;
		nimln(1275, "system.nim");
		while (1) {
			nimln(1275, "system.nim");
			if (!(res_304268 <= HEX3Atmp_304266)) goto LA18;
			nimln(1274, "system.nim");
			i_304225 = res_304268;
			nimln(33, "aliases.nim");
			if (((TMP4745[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4746));
			if ((NU)(i_304225) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
			switch ((*(*n).kindU.S6.Sons->data[i_304225]).Kind) {
			case ((NU8) 85):
			case ((NU8) 88):
			{
				tnode173647* LOC20;
				nimln(35, "aliases.nim");
				nimln(35, "aliases.nim");
				if (((TMP4745[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4746));
				if ((NU)(i_304225) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
				LOC20 = 0;
				LOC20 = lastson_174011((*n).kindU.S6.Sons->data[i_304225]);
				result = ispartofaux_304018(LOC20, b, marker);
				nimln(36, "aliases.nim");
				{
					nimln(36, "aliases.nim");
					if (!(result == ((NU8) 2))) goto LA23;
					nimln(36, "aliases.nim");
					goto BeforeRet;
				}
				LA23: ;
			}
			break;
			default:
			{
				nimln(37, "aliases.nim");
				internalerror_132702(((NimStringDesc*) &TMP4751));
			}
			break;
			}
			nimln(1277, "system.nim");
			res_304268 = addInt(res_304268, 1);
		} LA18: ;
	}
	break;
	case ((NU8) 3):
	{
		nimln(39, "aliases.nim");
		if (!(((TMP4752[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP4753));
		result = ispartofaux_304011((*(*n).kindU.S4.Sym).Typ, b, marker);
	}
	break;
	default:
	{
		nimln(40, "aliases.nim");
		internalerror_132690((*n).Info, ((NimStringDesc*) &TMP4754));
	}
	break;
	}
	BeforeRet: ;
	popFrame();
	return result;
}

static N_INLINE(NI, sonslen_174007)(ttype173681* n) {
	NI result;
	nimfr("sonsLen", "ast.nim")
	result = 0;
	nimln(1161, "ast.nim");
	{
		nimln(1161, "ast.nim");
		if (!(*n).Sons == 0) goto LA3;
		nimln(1161, "ast.nim");
		result = 0;
	}
	goto LA1;
	LA3: ;
	{
		nimln(1162, "ast.nim");
		nimln(1162, "ast.nim");
		result = (*n).Sons->Sup.len;
	}
	LA1: ;
	popFrame();
	return result;
}

static N_INLINE(ttype173681*, lastson_174015)(ttype173681* n) {
	ttype173681* result;
	NI LOC1;
	NI TMP4755;
	nimfr("lastSon", "ast.nim")
	result = 0;
	nimln(1290, "ast.nim");
	nimln(1290, "ast.nim");
	nimln(1290, "ast.nim");
	LOC1 = sonslen_174007(n);
	TMP4755 = subInt(LOC1, 1);
	if ((NU)((NI32)(TMP4755)) >= (NU)((*n).Sons->Sup.len)) raiseIndexError();
	result = (*n).Sons->data[(NI32)(TMP4755)];
	popFrame();
	return result;
}

N_NIMCALL(NU8, ispartofaux_304011)(ttype173681* a, ttype173681* b, tintset170041* marker) {
	NU8 result;
	nimfr("isPartOfAux", "aliases.nim")
	result = 0;
	nimln(43, "aliases.nim");
	result = ((NU8) 0);
	nimln(44, "aliases.nim");
	{
		NIM_BOOL LOC3;
		nimln(44, "aliases.nim");
		nimln(44, "aliases.nim");
		LOC3 = (a == NIM_NIL);
		if (LOC3) goto LA4;
		nimln(44, "aliases.nim");
		LOC3 = (b == NIM_NIL);
		LA4: ;
		if (!LOC3) goto LA5;
		nimln(44, "aliases.nim");
		goto BeforeRet;
	}
	LA5: ;
	nimln(45, "aliases.nim");
	{
		NIM_BOOL LOC9;
		nimln(45, "aliases.nim");
		LOC9 = containsorincl_170875(marker, (*a).Sup.Id);
		if (!LOC9) goto LA10;
		nimln(45, "aliases.nim");
		goto BeforeRet;
	}
	LA10: ;
	nimln(46, "aliases.nim");
	{
		NIM_BOOL LOC14;
		nimln(46, "aliases.nim");
		LOC14 = comparetypes_205867(a, b, ((NU8) 1), 0);
		if (!LOC14) goto LA15;
		nimln(46, "aliases.nim");
		nimln(46, "aliases.nim");
		result = ((NU8) 2);
		goto BeforeRet;
	}
	LA15: ;
	nimln(47, "aliases.nim");
	switch ((*a).Kind) {
	case ((NU8) 17):
	{
		nimln(49, "aliases.nim");
		if ((NU)(0) >= (NU)((*a).Sons->Sup.len)) raiseIndexError();
		result = ispartofaux_304011((*a).Sons->data[0], b, marker);
		nimln(50, "aliases.nim");
		{
			nimln(50, "aliases.nim");
			if (!(result == ((NU8) 0))) goto LA20;
			nimln(50, "aliases.nim");
			result = ispartofaux_304018((*a).N, b, marker);
		}
		LA20: ;
	}
	break;
	case ((NU8) 11):
	case ((NU8) 13):
	{
		ttype173681* LOC23;
		nimln(52, "aliases.nim");
		nimln(52, "aliases.nim");
		LOC23 = 0;
		LOC23 = lastson_174015(a);
		result = ispartofaux_304011(LOC23, b, marker);
	}
	break;
	case ((NU8) 16):
	case ((NU8) 4):
	case ((NU8) 19):
	case ((NU8) 18):
	{
		NI i_304317;
		NI HEX3Atmp_304324;
		NI LOC25;
		NI TMP4756;
		NI res_304326;
		i_304317 = 0;
		HEX3Atmp_304324 = 0;
		nimln(54, "aliases.nim");
		nimln(54, "aliases.nim");
		nimln(54, "aliases.nim");
		LOC25 = sonslen_174007(a);
		TMP4756 = subInt(LOC25, 1);
		HEX3Atmp_304324 = (NI32)(TMP4756);
		nimln(1274, "system.nim");
		res_304326 = 0;
		nimln(1275, "system.nim");
		while (1) {
			nimln(1275, "system.nim");
			if (!(res_304326 <= HEX3Atmp_304324)) goto LA26;
			nimln(1274, "system.nim");
			i_304317 = res_304326;
			nimln(55, "aliases.nim");
			if ((NU)(i_304317) >= (NU)((*a).Sons->Sup.len)) raiseIndexError();
			result = ispartofaux_304011((*a).Sons->data[i_304317], b, marker);
			nimln(56, "aliases.nim");
			{
				nimln(56, "aliases.nim");
				if (!(result == ((NU8) 2))) goto LA29;
				nimln(56, "aliases.nim");
				goto BeforeRet;
			}
			LA29: ;
			nimln(1277, "system.nim");
			res_304326 = addInt(res_304326, 1);
		} LA26: ;
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

N_NIMCALL(NU8, ispartof_304331)(ttype173681* a, ttype173681* b) {
	NU8 result;
	tintset170041 marker;
	nimfr("isPartOf", "aliases.nim")
	result = 0;
	nimln(61, "aliases.nim");
	chckNil((void*)&marker);
	memset((void*)&marker, 0, sizeof(marker));
	initintset_170899(&marker);
	nimln(63, "aliases.nim");
	result = ispartofaux_304011(b, a, &marker);
	popFrame();
	return result;
}

static N_INLINE(tnode173647*, HEX5BHEX5D_174276)(tnode173647* n, NI i) {
	tnode173647* result;
	nimfr("[]", "ast.nim")
	result = 0;
	nimln(866, "ast.nim");
	if (((TMP4745[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4746));
	if ((NU)(i) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
	result = (*n).kindU.S6.Sons->data[i];
	popFrame();
	return result;
}

static N_INLINE(NI, len_174082)(tnode173647* n) {
	NI result;
	nimfr("len", "ast.nim")
	result = 0;
	nimln(852, "ast.nim");
	{
		nimln(852, "ast.nim");
		if (((TMP4745[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4746));
		if (!(*n).kindU.S6.Sons == 0) goto LA3;
		nimln(852, "ast.nim");
		result = 0;
	}
	goto LA1;
	LA3: ;
	{
		nimln(853, "ast.nim");
		nimln(853, "ast.nim");
		if (((TMP4745[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4746));
		result = (*n).kindU.S6.Sons->Sup.len;
	}
	LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(NU8, ispartof_304340)(tnode173647* a, tnode173647* b) {
	NU8 result;
	nimfr("isPartOf", "aliases.nim")
	result = 0;
	nimln(94, "aliases.nim");
	{
		nimln(94, "aliases.nim");
		if (!((*a).Kind == (*b).Kind)) goto LA3;
		nimln(95, "aliases.nim");
		switch ((*a).Kind) {
		case ((NU8) 3):
		{
			nimln(99, "aliases.nim");
			{
				nimln(99, "aliases.nim");
				if (!(((TMP4752[(*a).Kind/8] &(1<<((*a).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP4753));
				if (!(((TMP4752[(*b).Kind/8] &(1<<((*b).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP4753));
				if (!((*(*a).kindU.S4.Sym).Sup.Id == (*(*b).kindU.S4.Sym).Sup.Id)) goto LA8;
				nimln(99, "aliases.nim");
				result = ((NU8) 2);
			}
			goto LA6;
			LA8: ;
			{
				NIM_BOOL LOC11;
				nimln(100, "aliases.nim");
				nimln(716, "system.nim");
				if (!(((TMP4752[(*a).Kind/8] &(1<<((*a).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP4753));
				LOC11 = ((4384 &(1<<(((*(*a).kindU.S4.Sym).Kind)&31)))!=0);
				if (LOC11) goto LA12;
				nimln(716, "system.nim");
				if (!(((TMP4752[(*b).Kind/8] &(1<<((*b).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP4753));
				LOC11 = ((4384 &(1<<(((*(*b).kindU.S4.Sym).Kind)&31)))!=0);
				LA12: ;
				if (!LOC11) goto LA13;
				nimln(103, "aliases.nim");
				result = ((NU8) 0);
			}
			goto LA6;
			LA13: ;
			{
				nimln(106, "aliases.nim");
				{
					NU8 LOC18;
					nimln(684, "system.nim");
					nimln(684, "system.nim");
					nimln(106, "aliases.nim");
					if (!(((TMP4752[(*a).Kind/8] &(1<<((*a).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP4753));
					if (!(((TMP4752[(*b).Kind/8] &(1<<((*b).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP4753));
					LOC18 = ispartof_304331((*(*a).kindU.S4.Sym).Typ, (*(*b).kindU.S4.Sym).Typ);
					if (!!((LOC18 == ((NU8) 0)))) goto LA19;
					nimln(107, "aliases.nim");
					result = ((NU8) 1);
				}
				LA19: ;
			}
			LA6: ;
		}
		break;
		case ((NU8) 42):
		{
			tnode173647* LOC22;
			tnode173647* LOC23;
			nimln(109, "aliases.nim");
			nimln(109, "aliases.nim");
			LOC22 = 0;
			LOC22 = HEX5BHEX5D_174276(a, 0);
			nimln(109, "aliases.nim");
			LOC23 = 0;
			LOC23 = HEX5BHEX5D_174276(b, 0);
			result = ispartof_304340(LOC22, LOC23);
			nimln(110, "aliases.nim");
			{
				NIM_BOOL LOC26;
				NI LOC27;
				NI LOC29;
				nimln(110, "aliases.nim");
				nimln(688, "system.nim");
				nimln(110, "aliases.nim");
				LOC27 = len_174082(a);
				LOC26 = (2 <= LOC27);
				if (!(LOC26)) goto LA28;
				nimln(688, "system.nim");
				nimln(110, "aliases.nim");
				LOC29 = len_174082(b);
				LOC26 = (2 <= LOC29);
				LA28: ;
				if (!LOC26) goto LA30;
				nimln(112, "aliases.nim");
				{
					NIM_BOOL LOC34;
					NIM_BOOL LOC35;
					tnode173647* LOC37;
					tnode173647* LOC39;
					tnode173647* x;
					tnode173647* y;
					nimln(112, "aliases.nim");
					nimln(112, "aliases.nim");
					nimln(112, "aliases.nim");
					LOC35 = (result == ((NU8) 2));
					if (!(LOC35)) goto LA36;
					nimln(112, "aliases.nim");
					nimln(112, "aliases.nim");
					LOC37 = 0;
					LOC37 = HEX5BHEX5D_174276(a, 1);
					LOC35 = isdeepconstexpr_199631(LOC37);
					LA36: ;
					LOC34 = LOC35;
					if (!(LOC34)) goto LA38;
					nimln(112, "aliases.nim");
					nimln(112, "aliases.nim");
					LOC39 = 0;
					LOC39 = HEX5BHEX5D_174276(b, 1);
					LOC34 = isdeepconstexpr_199631(LOC39);
					LA38: ;
					if (!LOC34) goto LA40;
					nimln(115, "aliases.nim");
					nimln(115, "aliases.nim");
					{
						tnode173647* LOC44;
						tnode173647* LOC47;
						nimln(115, "aliases.nim");
						nimln(115, "aliases.nim");
						LOC44 = 0;
						LOC44 = HEX5BHEX5D_174276(a, 1);
						if (!((*LOC44).Kind == ((NU8) 58))) goto LA45;
						nimln(115, "aliases.nim");
						nimln(115, "aliases.nim");
						LOC47 = 0;
						LOC47 = HEX5BHEX5D_174276(a, 1);
						x = HEX5BHEX5D_174276(LOC47, 1);
					}
					goto LA42;
					LA45: ;
					{
						nimln(115, "aliases.nim");
						x = HEX5BHEX5D_174276(a, 1);
					}
					LA42: ;
					nimln(116, "aliases.nim");
					nimln(116, "aliases.nim");
					{
						tnode173647* LOC51;
						tnode173647* LOC54;
						nimln(116, "aliases.nim");
						nimln(116, "aliases.nim");
						LOC51 = 0;
						LOC51 = HEX5BHEX5D_174276(b, 1);
						if (!((*LOC51).Kind == ((NU8) 58))) goto LA52;
						nimln(116, "aliases.nim");
						nimln(116, "aliases.nim");
						LOC54 = 0;
						LOC54 = HEX5BHEX5D_174276(b, 1);
						y = HEX5BHEX5D_174276(LOC54, 1);
					}
					goto LA49;
					LA52: ;
					{
						nimln(116, "aliases.nim");
						y = HEX5BHEX5D_174276(b, 1);
					}
					LA49: ;
					nimln(118, "aliases.nim");
					{
						NIM_BOOL LOC58;
						nimln(118, "aliases.nim");
						LOC58 = samevalue_180268(x, y);
						if (!LOC58) goto LA59;
						nimln(118, "aliases.nim");
						result = ((NU8) 2);
					}
					goto LA56;
					LA59: ;
					{
						nimln(119, "aliases.nim");
						result = ((NU8) 0);
					}
					LA56: ;
				}
				LA40: ;
			}
			goto LA24;
			LA30: ;
			{
				nimln(123, "aliases.nim");
				{
					nimln(684, "system.nim");
					nimln(684, "system.nim");
					if (!!((result == ((NU8) 2)))) goto LA65;
					nimln(124, "aliases.nim");
					{
						NU8 LOC69;
						nimln(684, "system.nim");
						nimln(684, "system.nim");
						nimln(124, "aliases.nim");
						LOC69 = ispartof_304331((*a).Typ, (*b).Typ);
						if (!!((LOC69 == ((NU8) 0)))) goto LA70;
						nimln(124, "aliases.nim");
						result = ((NU8) 1);
					}
					LA70: ;
				}
				LA65: ;
			}
			LA24: ;
		}
		break;
		case ((NU8) 45):
		{
			tnode173647* LOC73;
			tnode173647* LOC74;
			nimln(127, "aliases.nim");
			nimln(127, "aliases.nim");
			LOC73 = 0;
			LOC73 = HEX5BHEX5D_174276(a, 0);
			nimln(127, "aliases.nim");
			LOC74 = 0;
			LOC74 = HEX5BHEX5D_174276(b, 0);
			result = ispartof_304340(LOC73, LOC74);
			nimln(128, "aliases.nim");
			{
				nimln(684, "system.nim");
				nimln(684, "system.nim");
				if (!!((result == ((NU8) 0)))) goto LA77;
				nimln(130, "aliases.nim");
				{
					tnode173647* LOC81;
					tnode173647* LOC82;
					nimln(684, "system.nim");
					nimln(684, "system.nim");
					nimln(130, "aliases.nim");
					LOC81 = 0;
					LOC81 = HEX5BHEX5D_174276(a, 1);
					if (!(((TMP4752[(*LOC81).Kind/8] &(1<<((*LOC81).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP4753));
					nimln(130, "aliases.nim");
					LOC82 = 0;
					LOC82 = HEX5BHEX5D_174276(b, 1);
					if (!(((TMP4752[(*LOC82).Kind/8] &(1<<((*LOC82).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP4753));
					if (!!(((*(*LOC81).kindU.S4.Sym).Sup.Id == (*(*LOC82).kindU.S4.Sym).Sup.Id))) goto LA83;
					nimln(131, "aliases.nim");
					result = ((NU8) 0);
				}
				LA83: ;
			}
			LA77: ;
		}
		break;
		case ((NU8) 65):
		case ((NU8) 47):
		{
			tnode173647* LOC86;
			tnode173647* LOC87;
			nimln(134, "aliases.nim");
			nimln(134, "aliases.nim");
			LOC86 = 0;
			LOC86 = HEX5BHEX5D_174276(a, 0);
			nimln(134, "aliases.nim");
			LOC87 = 0;
			LOC87 = HEX5BHEX5D_174276(b, 0);
			result = ispartof_304340(LOC86, LOC87);
			nimln(136, "aliases.nim");
			{
				nimln(684, "system.nim");
				nimln(684, "system.nim");
				if (!!((result == ((NU8) 2)))) goto LA90;
				nimln(137, "aliases.nim");
				{
					NU8 LOC94;
					nimln(684, "system.nim");
					nimln(684, "system.nim");
					nimln(137, "aliases.nim");
					LOC94 = ispartof_304331((*a).Typ, (*b).Typ);
					if (!!((LOC94 == ((NU8) 0)))) goto LA95;
					nimln(137, "aliases.nim");
					result = ((NU8) 1);
				}
				LA95: ;
			}
			LA90: ;
		}
		break;
		case ((NU8) 58):
		case ((NU8) 59):
		case ((NU8) 60):
		{
			tnode173647* LOC98;
			tnode173647* LOC99;
			nimln(140, "aliases.nim");
			nimln(140, "aliases.nim");
			LOC98 = 0;
			LOC98 = HEX5BHEX5D_174276(a, 1);
			nimln(140, "aliases.nim");
			LOC99 = 0;
			LOC99 = HEX5BHEX5D_174276(b, 1);
			result = ispartof_304340(LOC98, LOC99);
		}
		break;
		case ((NU8) 67):
		case ((NU8) 66):
		case ((NU8) 46):
		{
			tnode173647* LOC101;
			tnode173647* LOC102;
			nimln(142, "aliases.nim");
			nimln(142, "aliases.nim");
			LOC101 = 0;
			LOC101 = HEX5BHEX5D_174276(a, 0);
			nimln(142, "aliases.nim");
			LOC102 = 0;
			LOC102 = HEX5BHEX5D_174276(b, 0);
			result = ispartof_304340(LOC101, LOC102);
		}
		break;
		default:
		{
		}
		break;
		}
	}
	goto LA1;
	LA3: ;
	{
		nimln(152, "aliases.nim");
		switch ((*b).Kind) {
		case ((NU8) 45):
		case ((NU8) 42):
		case ((NU8) 67):
		case ((NU8) 66):
		case ((NU8) 46):
		{
			tnode173647* LOC106;
			nimln(155, "aliases.nim");
			nimln(155, "aliases.nim");
			LOC106 = 0;
			LOC106 = HEX5BHEX5D_174276(b, 0);
			result = ispartof_304340(a, LOC106);
		}
		break;
		case ((NU8) 65):
		case ((NU8) 47):
		{
			nimln(159, "aliases.nim");
			{
				NU8 LOC110;
				tnode173647* LOC113;
				nimln(684, "system.nim");
				nimln(684, "system.nim");
				nimln(159, "aliases.nim");
				LOC110 = ispartof_304331((*a).Typ, (*b).Typ);
				if (!!((LOC110 == ((NU8) 0)))) goto LA111;
				nimln(160, "aliases.nim");
				nimln(160, "aliases.nim");
				LOC113 = 0;
				LOC113 = HEX5BHEX5D_174276(b, 0);
				result = ispartof_304340(a, LOC113);
				nimln(161, "aliases.nim");
				{
					nimln(161, "aliases.nim");
					if (!(result == ((NU8) 0))) goto LA116;
					nimln(161, "aliases.nim");
					result = ((NU8) 1);
				}
				LA116: ;
			}
			LA111: ;
		}
		break;
		case ((NU8) 58):
		case ((NU8) 59):
		case ((NU8) 60):
		{
			tnode173647* LOC119;
			nimln(165, "aliases.nim");
			nimln(165, "aliases.nim");
			LOC119 = 0;
			LOC119 = HEX5BHEX5D_174276(b, 1);
			result = ispartof_304340(a, LOC119);
		}
		break;
		case ((NU8) 3):
		{
			nimln(169, "aliases.nim");
			switch ((*a).Kind) {
			case ((NU8) 45):
			case ((NU8) 42):
			case ((NU8) 67):
			case ((NU8) 66):
			case ((NU8) 46):
			{
				tnode173647* LOC122;
				nimln(172, "aliases.nim");
				nimln(172, "aliases.nim");
				LOC122 = 0;
				LOC122 = HEX5BHEX5D_174276(a, 0);
				result = ispartof_304340(LOC122, b);
			}
			break;
			case ((NU8) 58):
			case ((NU8) 59):
			case ((NU8) 60):
			{
				tnode173647* LOC124;
				nimln(174, "aliases.nim");
				nimln(174, "aliases.nim");
				LOC124 = 0;
				LOC124 = HEX5BHEX5D_174276(a, 1);
				result = ispartof_304340(LOC124, b);
			}
			break;
			case ((NU8) 65):
			case ((NU8) 47):
			{
				nimln(177, "aliases.nim");
				{
					NU8 LOC128;
					tnode173647* LOC131;
					nimln(684, "system.nim");
					nimln(684, "system.nim");
					nimln(177, "aliases.nim");
					LOC128 = ispartof_304331((*a).Typ, (*b).Typ);
					if (!!((LOC128 == ((NU8) 0)))) goto LA129;
					nimln(178, "aliases.nim");
					nimln(178, "aliases.nim");
					LOC131 = 0;
					LOC131 = HEX5BHEX5D_174276(a, 0);
					result = ispartof_304340(LOC131, b);
					nimln(179, "aliases.nim");
					{
						nimln(179, "aliases.nim");
						if (!(result == ((NU8) 0))) goto LA134;
						nimln(179, "aliases.nim");
						result = ((NU8) 1);
					}
					LA134: ;
				}
				LA129: ;
			}
			break;
			default:
			{
			}
			break;
			}
		}
		break;
		default:
		{
		}
		break;
		}
	}
	LA1: ;
	popFrame();
	return result;
}
N_NOINLINE(void, aliasesInit)(void) {
	nimfr("aliases", "aliases.nim")
	popFrame();
}

N_NOINLINE(void, aliasesDatInit)(void) {
}

