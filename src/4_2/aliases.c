/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"
typedef struct tnode169647 tnode169647;
typedef struct ttype169681 ttype169681;
typedef struct tintset166041 tintset166041;
typedef struct tlineinfo128308 tlineinfo128308;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tsym169677 tsym169677;
typedef struct tident131015 tident131015;
typedef struct tnodeseq169641 tnodeseq169641;
typedef struct tidobj131009 tidobj131009;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct ttypeseq169679 ttypeseq169679;
typedef struct TY169771 TY169771;
typedef struct tinstantiation169667 tinstantiation169667;
typedef struct tscope169671 tscope169671;
typedef struct tstrtable169651 tstrtable169651;
typedef struct tsymseq169649 tsymseq169649;
typedef struct tloc169661 tloc169661;
typedef struct trope126007 trope126007;
typedef struct tlib169665 tlib169665;
typedef struct ttrunk166037 ttrunk166037;
typedef struct ttrunkseq166039 ttrunkseq166039;
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
struct tintset166041 {
NI Counter;
NI Max;
ttrunk166037* Head;
ttrunkseq166039* Data;
};
struct tident131015 {
  tidobj131009 Sup;
NimStringDesc* S;
tident131015* Next;
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
typedef NI TY21621[8];
struct ttrunk166037 {
ttrunk166037* Next;
NI Key;
TY21621 Bits;
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
struct ttrunkseq166039 {
  TGenericSeq Sup;
  ttrunk166037* data[SEQ_DECL_SIZE];
};
struct TY169763 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(NU8, ispartofaux_300018)(tnode169647* n, ttype169681* b, tintset166041* marker);
static N_INLINE(NI, sonslen_170003)(tnode169647* n);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(void, hiddenraiseassert_71620)(NimStringDesc* msg);
static N_INLINE(tnode169647*, lastson_170011)(tnode169647* n);
N_NIMCALL(void, internalerror_129699)(NimStringDesc* errmsg);
N_NIMCALL(void, internalerror_129687)(tlineinfo128308 info, NimStringDesc* errmsg);
N_NIMCALL(NU8, ispartofaux_300011)(ttype169681* a, ttype169681* b, tintset166041* marker);
N_NIMCALL(NIM_BOOL, containsorincl_166875)(tintset166041* s, NI key);
N_NIMCALL(NIM_BOOL, comparetypes_201867)(ttype169681* x, ttype169681* y, NU8 cmp, NU8 flags);
static N_INLINE(ttype169681*, lastson_170015)(ttype169681* n);
static N_INLINE(NI, sonslen_170007)(ttype169681* n);
N_NIMCALL(NU8, ispartof_300331)(ttype169681* a, ttype169681* b);
N_NIMCALL(void, initintset_166899)(tintset166041* Result);
N_NOINLINE(void, chckNil)(void* p);
N_NIMCALL(NU8, ispartof_300340)(tnode169647* a, tnode169647* b);
static N_INLINE(tnode169647*, HEX5BHEX5D_170276)(tnode169647* n, NI i);
static N_INLINE(NI, len_170082)(tnode169647* n);
N_NIMCALL(NIM_BOOL, isdeepconstexpr_195631)(tnode169647* n);
N_NIMCALL(NIM_BOOL, samevalue_176268)(tnode169647* a, tnode169647* b);
static NIM_CONST TY169850 TMP4750 = {
0xEC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP4751, "sons", 4);
STRING_LITERAL(TMP4753, "n.sons[0].Kind == nkSym ", 24);
STRING_LITERAL(TMP4756, "isPartOfAux(record case branch)", 31);
static NIM_CONST TY169850 TMP4757 = {
0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP4758, "sym", 3);
STRING_LITERAL(TMP4759, "isPartOfAux()", 13);
NIM_CONST NU32 varkinds_300351 = 4384;
NIM_CONST TY169850 ix0kinds_300509 = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x64, 0x00, 0x00,
0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00}
;
NIM_CONST TY169850 ix1kinds_300511 = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1C,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00}
;
NIM_CONST TY169850 derefkinds_300513 = {
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

static N_INLINE(NI, sonslen_170003)(tnode169647* n) {
	NI result;
	nimfr("sonsLen", "ast.nim")
	result = 0;
	nimln(1175, "ast.nim");
	{
		nimln(1175, "ast.nim");
		if (((TMP4750[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4751));
		if (!(*n).kindU.S6.Sons == 0) goto LA3;
		nimln(1175, "ast.nim");
		result = 0;
	}
	goto LA1;
	LA3: ;
	{
		nimln(1176, "ast.nim");
		nimln(1176, "ast.nim");
		if (((TMP4750[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4751));
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

static N_INLINE(tnode169647*, lastson_170011)(tnode169647* n) {
	tnode169647* result;
	NI LOC1;
	NI TMP4755;
	nimfr("lastSon", "ast.nim")
	result = 0;
	nimln(1287, "ast.nim");
	if (((TMP4750[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4751));
	nimln(1287, "ast.nim");
	nimln(1287, "ast.nim");
	LOC1 = sonslen_170003(n);
	TMP4755 = subInt(LOC1, 1);
	if ((NU)((NI64)(TMP4755)) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
	result = (*n).kindU.S6.Sons->data[(NI64)(TMP4755)];
	popFrame();
	return result;
}

N_NIMCALL(NU8, ispartofaux_300018)(tnode169647* n, ttype169681* b, tintset166041* marker) {
	NU8 result;
	nimfr("isPartOfAux", "aliases.nim")
	result = 0;
	nimln(22, "aliases.nim");
	result = ((NU8) 0);
	nimln(23, "aliases.nim");
	switch ((*n).Kind) {
	case ((NU8) 131):
	{
		NI i_300033;
		NI HEX3Atmp_300262;
		NI LOC2;
		NI TMP4752;
		NI res_300264;
		i_300033 = 0;
		HEX3Atmp_300262 = 0;
		nimln(25, "aliases.nim");
		nimln(25, "aliases.nim");
		nimln(25, "aliases.nim");
		LOC2 = sonslen_170003(n);
		TMP4752 = subInt(LOC2, 1);
		HEX3Atmp_300262 = (NI64)(TMP4752);
		nimln(1274, "system.nim");
		res_300264 = 0;
		nimln(1275, "system.nim");
		while (1) {
			nimln(1275, "system.nim");
			if (!(res_300264 <= HEX3Atmp_300262)) goto LA3;
			nimln(1274, "system.nim");
			i_300033 = res_300264;
			nimln(26, "aliases.nim");
			if (((TMP4750[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4751));
			if ((NU)(i_300033) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
			result = ispartofaux_300018((*n).kindU.S6.Sons->data[i_300033], b, marker);
			nimln(27, "aliases.nim");
			{
				nimln(27, "aliases.nim");
				if (!(result == ((NU8) 2))) goto LA6;
				nimln(27, "aliases.nim");
				goto BeforeRet;
			}
			LA6: ;
			nimln(1277, "system.nim");
			res_300264 = addInt(res_300264, 1);
		} LA3: ;
	}
	break;
	case ((NU8) 132):
	{
		NI i_300225;
		NI HEX3Atmp_300266;
		NI LOC17;
		NI TMP4754;
		NI res_300268;
		nimln(29, "aliases.nim");
		{
			nimln(29, "aliases.nim");
			nimln(29, "aliases.nim");
			if (((TMP4750[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4751));
			if ((NU)(0) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
			if (!!(((*(*n).kindU.S6.Sons->data[0]).Kind == ((NU8) 3)))) goto LA11;
			nimln(29, "aliases.nim");
			hiddenraiseassert_71620(((NimStringDesc*) &TMP4753));
		}
		LA11: ;
		nimln(30, "aliases.nim");
		if (((TMP4750[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4751));
		if ((NU)(0) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
		result = ispartofaux_300018((*n).kindU.S6.Sons->data[0], b, marker);
		nimln(31, "aliases.nim");
		{
			nimln(31, "aliases.nim");
			if (!(result == ((NU8) 2))) goto LA15;
			nimln(31, "aliases.nim");
			goto BeforeRet;
		}
		LA15: ;
		i_300225 = 0;
		HEX3Atmp_300266 = 0;
		nimln(32, "aliases.nim");
		nimln(32, "aliases.nim");
		nimln(32, "aliases.nim");
		LOC17 = sonslen_170003(n);
		TMP4754 = subInt(LOC17, 1);
		HEX3Atmp_300266 = (NI64)(TMP4754);
		nimln(1274, "system.nim");
		res_300268 = 1;
		nimln(1275, "system.nim");
		while (1) {
			nimln(1275, "system.nim");
			if (!(res_300268 <= HEX3Atmp_300266)) goto LA18;
			nimln(1274, "system.nim");
			i_300225 = res_300268;
			nimln(33, "aliases.nim");
			if (((TMP4750[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4751));
			if ((NU)(i_300225) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
			switch ((*(*n).kindU.S6.Sons->data[i_300225]).Kind) {
			case ((NU8) 85):
			case ((NU8) 88):
			{
				tnode169647* LOC20;
				nimln(35, "aliases.nim");
				nimln(35, "aliases.nim");
				if (((TMP4750[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4751));
				if ((NU)(i_300225) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
				LOC20 = 0;
				LOC20 = lastson_170011((*n).kindU.S6.Sons->data[i_300225]);
				result = ispartofaux_300018(LOC20, b, marker);
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
				internalerror_129699(((NimStringDesc*) &TMP4756));
			}
			break;
			}
			nimln(1277, "system.nim");
			res_300268 = addInt(res_300268, 1);
		} LA18: ;
	}
	break;
	case ((NU8) 3):
	{
		nimln(39, "aliases.nim");
		if (!(((TMP4757[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP4758));
		result = ispartofaux_300011((*(*n).kindU.S4.Sym).Typ, b, marker);
	}
	break;
	default:
	{
		nimln(40, "aliases.nim");
		internalerror_129687((*n).Info, ((NimStringDesc*) &TMP4759));
	}
	break;
	}
	BeforeRet: ;
	popFrame();
	return result;
}

static N_INLINE(NI, sonslen_170007)(ttype169681* n) {
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

static N_INLINE(ttype169681*, lastson_170015)(ttype169681* n) {
	ttype169681* result;
	NI LOC1;
	NI TMP4760;
	nimfr("lastSon", "ast.nim")
	result = 0;
	nimln(1290, "ast.nim");
	nimln(1290, "ast.nim");
	nimln(1290, "ast.nim");
	LOC1 = sonslen_170007(n);
	TMP4760 = subInt(LOC1, 1);
	if ((NU)((NI64)(TMP4760)) >= (NU)((*n).Sons->Sup.len)) raiseIndexError();
	result = (*n).Sons->data[(NI64)(TMP4760)];
	popFrame();
	return result;
}

N_NIMCALL(NU8, ispartofaux_300011)(ttype169681* a, ttype169681* b, tintset166041* marker) {
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
		LOC9 = containsorincl_166875(marker, (*a).Sup.Id);
		if (!LOC9) goto LA10;
		nimln(45, "aliases.nim");
		goto BeforeRet;
	}
	LA10: ;
	nimln(46, "aliases.nim");
	{
		NIM_BOOL LOC14;
		nimln(46, "aliases.nim");
		LOC14 = comparetypes_201867(a, b, ((NU8) 1), 0);
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
		result = ispartofaux_300011((*a).Sons->data[0], b, marker);
		nimln(50, "aliases.nim");
		{
			nimln(50, "aliases.nim");
			if (!(result == ((NU8) 0))) goto LA20;
			nimln(50, "aliases.nim");
			result = ispartofaux_300018((*a).N, b, marker);
		}
		LA20: ;
	}
	break;
	case ((NU8) 11):
	case ((NU8) 13):
	{
		ttype169681* LOC23;
		nimln(52, "aliases.nim");
		nimln(52, "aliases.nim");
		LOC23 = 0;
		LOC23 = lastson_170015(a);
		result = ispartofaux_300011(LOC23, b, marker);
	}
	break;
	case ((NU8) 16):
	case ((NU8) 4):
	case ((NU8) 19):
	case ((NU8) 18):
	{
		NI i_300317;
		NI HEX3Atmp_300324;
		NI LOC25;
		NI TMP4761;
		NI res_300326;
		i_300317 = 0;
		HEX3Atmp_300324 = 0;
		nimln(54, "aliases.nim");
		nimln(54, "aliases.nim");
		nimln(54, "aliases.nim");
		LOC25 = sonslen_170007(a);
		TMP4761 = subInt(LOC25, 1);
		HEX3Atmp_300324 = (NI64)(TMP4761);
		nimln(1274, "system.nim");
		res_300326 = 0;
		nimln(1275, "system.nim");
		while (1) {
			nimln(1275, "system.nim");
			if (!(res_300326 <= HEX3Atmp_300324)) goto LA26;
			nimln(1274, "system.nim");
			i_300317 = res_300326;
			nimln(55, "aliases.nim");
			if ((NU)(i_300317) >= (NU)((*a).Sons->Sup.len)) raiseIndexError();
			result = ispartofaux_300011((*a).Sons->data[i_300317], b, marker);
			nimln(56, "aliases.nim");
			{
				nimln(56, "aliases.nim");
				if (!(result == ((NU8) 2))) goto LA29;
				nimln(56, "aliases.nim");
				goto BeforeRet;
			}
			LA29: ;
			nimln(1277, "system.nim");
			res_300326 = addInt(res_300326, 1);
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

N_NIMCALL(NU8, ispartof_300331)(ttype169681* a, ttype169681* b) {
	NU8 result;
	tintset166041 marker;
	nimfr("isPartOf", "aliases.nim")
	result = 0;
	nimln(61, "aliases.nim");
	chckNil((void*)&marker);
	memset((void*)&marker, 0, sizeof(marker));
	initintset_166899(&marker);
	nimln(63, "aliases.nim");
	result = ispartofaux_300011(b, a, &marker);
	popFrame();
	return result;
}

static N_INLINE(tnode169647*, HEX5BHEX5D_170276)(tnode169647* n, NI i) {
	tnode169647* result;
	nimfr("[]", "ast.nim")
	result = 0;
	nimln(866, "ast.nim");
	if (((TMP4750[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4751));
	if ((NU)(i) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
	result = (*n).kindU.S6.Sons->data[i];
	popFrame();
	return result;
}

static N_INLINE(NI, len_170082)(tnode169647* n) {
	NI result;
	nimfr("len", "ast.nim")
	result = 0;
	nimln(852, "ast.nim");
	{
		nimln(852, "ast.nim");
		if (((TMP4750[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4751));
		if (!(*n).kindU.S6.Sons == 0) goto LA3;
		nimln(852, "ast.nim");
		result = 0;
	}
	goto LA1;
	LA3: ;
	{
		nimln(853, "ast.nim");
		nimln(853, "ast.nim");
		if (((TMP4750[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4751));
		result = (*n).kindU.S6.Sons->Sup.len;
	}
	LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(NU8, ispartof_300340)(tnode169647* a, tnode169647* b) {
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
				if (!(((TMP4757[(*a).Kind/8] &(1<<((*a).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP4758));
				if (!(((TMP4757[(*b).Kind/8] &(1<<((*b).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP4758));
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
				if (!(((TMP4757[(*a).Kind/8] &(1<<((*a).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP4758));
				LOC11 = ((4384 &(1<<(((*(*a).kindU.S4.Sym).Kind)&31)))!=0);
				if (LOC11) goto LA12;
				nimln(716, "system.nim");
				if (!(((TMP4757[(*b).Kind/8] &(1<<((*b).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP4758));
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
					if (!(((TMP4757[(*a).Kind/8] &(1<<((*a).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP4758));
					if (!(((TMP4757[(*b).Kind/8] &(1<<((*b).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP4758));
					LOC18 = ispartof_300331((*(*a).kindU.S4.Sym).Typ, (*(*b).kindU.S4.Sym).Typ);
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
			tnode169647* LOC22;
			tnode169647* LOC23;
			nimln(109, "aliases.nim");
			nimln(109, "aliases.nim");
			LOC22 = 0;
			LOC22 = HEX5BHEX5D_170276(a, 0);
			nimln(109, "aliases.nim");
			LOC23 = 0;
			LOC23 = HEX5BHEX5D_170276(b, 0);
			result = ispartof_300340(LOC22, LOC23);
			nimln(110, "aliases.nim");
			{
				NIM_BOOL LOC26;
				NI LOC27;
				NI LOC29;
				nimln(110, "aliases.nim");
				nimln(688, "system.nim");
				nimln(110, "aliases.nim");
				LOC27 = len_170082(a);
				LOC26 = (2 <= LOC27);
				if (!(LOC26)) goto LA28;
				nimln(688, "system.nim");
				nimln(110, "aliases.nim");
				LOC29 = len_170082(b);
				LOC26 = (2 <= LOC29);
				LA28: ;
				if (!LOC26) goto LA30;
				nimln(112, "aliases.nim");
				{
					NIM_BOOL LOC34;
					NIM_BOOL LOC35;
					tnode169647* LOC37;
					tnode169647* LOC39;
					tnode169647* x;
					tnode169647* y;
					nimln(112, "aliases.nim");
					nimln(112, "aliases.nim");
					nimln(112, "aliases.nim");
					LOC35 = (result == ((NU8) 2));
					if (!(LOC35)) goto LA36;
					nimln(112, "aliases.nim");
					nimln(112, "aliases.nim");
					LOC37 = 0;
					LOC37 = HEX5BHEX5D_170276(a, 1);
					LOC35 = isdeepconstexpr_195631(LOC37);
					LA36: ;
					LOC34 = LOC35;
					if (!(LOC34)) goto LA38;
					nimln(112, "aliases.nim");
					nimln(112, "aliases.nim");
					LOC39 = 0;
					LOC39 = HEX5BHEX5D_170276(b, 1);
					LOC34 = isdeepconstexpr_195631(LOC39);
					LA38: ;
					if (!LOC34) goto LA40;
					nimln(115, "aliases.nim");
					nimln(115, "aliases.nim");
					{
						tnode169647* LOC44;
						tnode169647* LOC47;
						nimln(115, "aliases.nim");
						nimln(115, "aliases.nim");
						LOC44 = 0;
						LOC44 = HEX5BHEX5D_170276(a, 1);
						if (!((*LOC44).Kind == ((NU8) 58))) goto LA45;
						nimln(115, "aliases.nim");
						nimln(115, "aliases.nim");
						LOC47 = 0;
						LOC47 = HEX5BHEX5D_170276(a, 1);
						x = HEX5BHEX5D_170276(LOC47, 1);
					}
					goto LA42;
					LA45: ;
					{
						nimln(115, "aliases.nim");
						x = HEX5BHEX5D_170276(a, 1);
					}
					LA42: ;
					nimln(116, "aliases.nim");
					nimln(116, "aliases.nim");
					{
						tnode169647* LOC51;
						tnode169647* LOC54;
						nimln(116, "aliases.nim");
						nimln(116, "aliases.nim");
						LOC51 = 0;
						LOC51 = HEX5BHEX5D_170276(b, 1);
						if (!((*LOC51).Kind == ((NU8) 58))) goto LA52;
						nimln(116, "aliases.nim");
						nimln(116, "aliases.nim");
						LOC54 = 0;
						LOC54 = HEX5BHEX5D_170276(b, 1);
						y = HEX5BHEX5D_170276(LOC54, 1);
					}
					goto LA49;
					LA52: ;
					{
						nimln(116, "aliases.nim");
						y = HEX5BHEX5D_170276(b, 1);
					}
					LA49: ;
					nimln(118, "aliases.nim");
					{
						NIM_BOOL LOC58;
						nimln(118, "aliases.nim");
						LOC58 = samevalue_176268(x, y);
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
						LOC69 = ispartof_300331((*a).Typ, (*b).Typ);
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
			tnode169647* LOC73;
			tnode169647* LOC74;
			nimln(127, "aliases.nim");
			nimln(127, "aliases.nim");
			LOC73 = 0;
			LOC73 = HEX5BHEX5D_170276(a, 0);
			nimln(127, "aliases.nim");
			LOC74 = 0;
			LOC74 = HEX5BHEX5D_170276(b, 0);
			result = ispartof_300340(LOC73, LOC74);
			nimln(128, "aliases.nim");
			{
				nimln(684, "system.nim");
				nimln(684, "system.nim");
				if (!!((result == ((NU8) 0)))) goto LA77;
				nimln(130, "aliases.nim");
				{
					tnode169647* LOC81;
					tnode169647* LOC82;
					nimln(684, "system.nim");
					nimln(684, "system.nim");
					nimln(130, "aliases.nim");
					LOC81 = 0;
					LOC81 = HEX5BHEX5D_170276(a, 1);
					if (!(((TMP4757[(*LOC81).Kind/8] &(1<<((*LOC81).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP4758));
					nimln(130, "aliases.nim");
					LOC82 = 0;
					LOC82 = HEX5BHEX5D_170276(b, 1);
					if (!(((TMP4757[(*LOC82).Kind/8] &(1<<((*LOC82).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP4758));
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
			tnode169647* LOC86;
			tnode169647* LOC87;
			nimln(134, "aliases.nim");
			nimln(134, "aliases.nim");
			LOC86 = 0;
			LOC86 = HEX5BHEX5D_170276(a, 0);
			nimln(134, "aliases.nim");
			LOC87 = 0;
			LOC87 = HEX5BHEX5D_170276(b, 0);
			result = ispartof_300340(LOC86, LOC87);
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
					LOC94 = ispartof_300331((*a).Typ, (*b).Typ);
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
			tnode169647* LOC98;
			tnode169647* LOC99;
			nimln(140, "aliases.nim");
			nimln(140, "aliases.nim");
			LOC98 = 0;
			LOC98 = HEX5BHEX5D_170276(a, 1);
			nimln(140, "aliases.nim");
			LOC99 = 0;
			LOC99 = HEX5BHEX5D_170276(b, 1);
			result = ispartof_300340(LOC98, LOC99);
		}
		break;
		case ((NU8) 67):
		case ((NU8) 66):
		case ((NU8) 46):
		{
			tnode169647* LOC101;
			tnode169647* LOC102;
			nimln(142, "aliases.nim");
			nimln(142, "aliases.nim");
			LOC101 = 0;
			LOC101 = HEX5BHEX5D_170276(a, 0);
			nimln(142, "aliases.nim");
			LOC102 = 0;
			LOC102 = HEX5BHEX5D_170276(b, 0);
			result = ispartof_300340(LOC101, LOC102);
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
			tnode169647* LOC106;
			nimln(155, "aliases.nim");
			nimln(155, "aliases.nim");
			LOC106 = 0;
			LOC106 = HEX5BHEX5D_170276(b, 0);
			result = ispartof_300340(a, LOC106);
		}
		break;
		case ((NU8) 65):
		case ((NU8) 47):
		{
			nimln(159, "aliases.nim");
			{
				NU8 LOC110;
				tnode169647* LOC113;
				nimln(684, "system.nim");
				nimln(684, "system.nim");
				nimln(159, "aliases.nim");
				LOC110 = ispartof_300331((*a).Typ, (*b).Typ);
				if (!!((LOC110 == ((NU8) 0)))) goto LA111;
				nimln(160, "aliases.nim");
				nimln(160, "aliases.nim");
				LOC113 = 0;
				LOC113 = HEX5BHEX5D_170276(b, 0);
				result = ispartof_300340(a, LOC113);
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
			tnode169647* LOC119;
			nimln(165, "aliases.nim");
			nimln(165, "aliases.nim");
			LOC119 = 0;
			LOC119 = HEX5BHEX5D_170276(b, 1);
			result = ispartof_300340(a, LOC119);
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
				tnode169647* LOC122;
				nimln(172, "aliases.nim");
				nimln(172, "aliases.nim");
				LOC122 = 0;
				LOC122 = HEX5BHEX5D_170276(a, 0);
				result = ispartof_300340(LOC122, b);
			}
			break;
			case ((NU8) 58):
			case ((NU8) 59):
			case ((NU8) 60):
			{
				tnode169647* LOC124;
				nimln(174, "aliases.nim");
				nimln(174, "aliases.nim");
				LOC124 = 0;
				LOC124 = HEX5BHEX5D_170276(a, 1);
				result = ispartof_300340(LOC124, b);
			}
			break;
			case ((NU8) 65):
			case ((NU8) 47):
			{
				nimln(177, "aliases.nim");
				{
					NU8 LOC128;
					tnode169647* LOC131;
					nimln(684, "system.nim");
					nimln(684, "system.nim");
					nimln(177, "aliases.nim");
					LOC128 = ispartof_300331((*a).Typ, (*b).Typ);
					if (!!((LOC128 == ((NU8) 0)))) goto LA129;
					nimln(178, "aliases.nim");
					nimln(178, "aliases.nim");
					LOC131 = 0;
					LOC131 = HEX5BHEX5D_170276(a, 0);
					result = ispartof_300340(LOC131, b);
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

