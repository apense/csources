/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct tnode169647 tnode169647;
typedef struct ttype169681 ttype169681;
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
typedef struct tnodetable169705 tnodetable169705;
typedef struct tnodepairseq169703 tnodepairseq169703;
typedef struct tnodepair169701 tnodepair169701;
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
typedef struct tbasechunk21641 tbasechunk21641;
typedef struct tfreecell21633 tfreecell21633;
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
struct tident131015 {
  tidobj131009 Sup;
NimStringDesc* S;
tident131015* Next;
NI H;
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
struct tnodepair169701 {
NI H;
tnode169647* Key;
NI Val;
};
struct tnodetable169705 {
NI Counter;
tnodepairseq169703* Data;
};
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
struct tnodepairseq169703 {
  TGenericSeq Sup;
  tnodepair169701 data[SEQ_DECL_SIZE];
};
struct TY169763 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(NI, hashtree_219014)(tnode169647* n);
static N_INLINE(NI, HEX21HEX26_101011)(NI h, NI val);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
N_NIMCALL(NI64, chckRange64)(NI64 i, NI64 a, NI64 b);
N_NIMCALL(NI, hash_101825)(NimStringDesc* x);
static N_INLINE(NI, sonslen_170003)(tnode169647* n);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(NIM_BOOL, treesequivalent_219165)(tnode169647* a, tnode169647* b);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NIM_BOOL, sametypeornil_200258)(ttype169681* a, ttype169681* b, NU8 flags);
N_NIMCALL(NI, nodetablerawget_219343)(tnodetable169705 t, NI k, tnode169647* key);
static N_INLINE(NI, nexttry_176196)(NI h, NI maxhash);
N_NIMCALL(NI, mulInt)(NI a, NI b);
N_NIMCALL(NI, nodetableget_219365)(tnodetable169705 t, tnode169647* key);
N_NIMCALL(void, nodetablerawinsert_219377)(tnodepairseq169703** data, NI k, tnode169647* key, NI val);
N_NIMCALL(void, hiddenraiseassert_71620)(NimStringDesc* msg);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell38849*, usrtocell_42243)(void* usr);
static N_INLINE(void, rtladdzct_43402)(tcell38849* c);
N_NOINLINE(void, addzct_42215)(tcellseq38865* s, tcell38849* c);
N_NIMCALL(void, nodetableput_219605)(tnodetable169705* t, tnode169647* key, NI val);
N_NIMCALL(NIM_BOOL, mustrehash_176191)(NI length, NI counter);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(NI, nodetabletestorset_219881)(tnodetable169705* t, tnode169647* key, NI val);
static NIM_CONST TY169850 TMP3071 = {
0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP3072, "ident", 5);
static NIM_CONST TY169850 TMP3073 = {
0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP3074, "sym", 3);
static NIM_CONST TY169850 TMP3075 = {
0xE0, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP3076, "intVal", 6);
static NIM_CONST TY169850 TMP3077 = {
0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP3078, "floatVal", 8);
static NIM_CONST TY169850 TMP3079 = {
0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP3080, "strVal", 6);
static NIM_CONST TY169850 TMP3081 = {
0xEC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP3082, "sons", 4);
STRING_LITERAL(TMP3087, "data[h].key == nil ", 19);
STRING_LITERAL(TMP3088, "not t.data[index].key == nil ", 29);
extern TFrame* frameptr_12027;
extern tgcheap40816 gch_40842;
extern TNimType NTI169703; /* TNodePairSeq */

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_12027;
	frameptr_12027 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_12027 = (*frameptr_12027).prev;
}

static N_INLINE(NI, HEX21HEX26_101011)(NI h, NI val) {
	NI result;
	nimfr("!&", "hashes.nim")
	result = 0;
	nimln(24, "hashes.nim");
	nimln(24, "hashes.nim");
	result = (NI)((NU32)(h) + (NU32)(val));
	nimln(25, "hashes.nim");
	nimln(25, "hashes.nim");
	nimln(25, "hashes.nim");
	result = (NI)((NU32)(result) + (NU32)((NI)((NU32)(result) << (NU32)(10))));
	nimln(26, "hashes.nim");
	nimln(26, "hashes.nim");
	nimln(26, "hashes.nim");
	result = (NI)(result ^ (NI)((NU32)(result) >> (NU32)(6)));
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
		if (((TMP3081[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3082));
		if (!(*n).kindU.S6.Sons == 0) goto LA3;
		nimln(1175, "ast.nim");
		result = 0;
	}
	goto LA1;
	LA3: ;
	{
		nimln(1176, "ast.nim");
		nimln(1176, "ast.nim");
		if (((TMP3081[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3082));
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

N_NIMCALL(NI, hashtree_219014)(tnode169647* n) {
	NI result;
	nimfr("hashTree", "treetab.nim")
	result = 0;
	nimln(16, "treetab.nim");
	{
		nimln(16, "treetab.nim");
		if (!(n == NIM_NIL)) goto LA3;
		nimln(16, "treetab.nim");
		goto BeforeRet;
	}
	LA3: ;
	nimln(17, "treetab.nim");
	nimln(17, "treetab.nim");
	result = ((NI) ((*n).Kind));
	nimln(18, "treetab.nim");
	switch ((*n).Kind) {
	case ((NU8) 1):
	case ((NU8) 23):
	case ((NU8) 4):
	{
	}
	break;
	case ((NU8) 2):
	{
		nimln(22, "treetab.nim");
		if (!(((TMP3071[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3072));
		result = HEX21HEX26_101011(result, (*(*n).kindU.S5.Ident).H);
	}
	break;
	case ((NU8) 3):
	{
		nimln(24, "treetab.nim");
		if (!(((TMP3073[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3074));
		result = HEX21HEX26_101011(result, (*(*(*n).kindU.S4.Sym).Name).H);
	}
	break;
	case ((NU8) 5) ... ((NU8) 15):
	{
		nimln(26, "treetab.nim");
		{
			NIM_BOOL LOC11;
			nimln(26, "treetab.nim");
			nimln(688, "system.nim");
			if (!(((TMP3075[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3076));
			LOC11 = ((-2147483647 -1) <= (*n).kindU.S1.Intval);
			if (!(LOC11)) goto LA12;
			nimln(26, "treetab.nim");
			if (!(((TMP3075[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3076));
			LOC11 = ((*n).kindU.S1.Intval <= 2147483647);
			LA12: ;
			if (!LOC11) goto LA13;
			nimln(27, "treetab.nim");
			if (!(((TMP3075[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3076));
			result = HEX21HEX26_101011(result, ((NI)chckRange64((*n).kindU.S1.Intval, (-2147483647 -1), 2147483647)));
		}
		LA13: ;
	}
	break;
	case ((NU8) 16) ... ((NU8) 18):
	{
		nimln(29, "treetab.nim");
		{
			NIM_BOOL LOC18;
			nimln(29, "treetab.nim");
			nimln(688, "system.nim");
			if (!(((TMP3077[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3078));
			LOC18 = (-1.0000000000000000e+06 <= ((NF) ((*n).kindU.S2.Floatval)));
			if (!(LOC18)) goto LA19;
			nimln(29, "treetab.nim");
			if (!(((TMP3077[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3078));
			LOC18 = (((NF) ((*n).kindU.S2.Floatval)) <= 1.0000000000000000e+06);
			LA19: ;
			if (!LOC18) goto LA20;
			nimln(30, "treetab.nim");
			nimln(30, "treetab.nim");
			if (!(((TMP3077[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3078));
			result = HEX21HEX26_101011(result, float64ToInt32(((NF) ((*n).kindU.S2.Floatval))));
		}
		LA20: ;
	}
	break;
	case ((NU8) 20) ... ((NU8) 22):
	{
		NI LOC23;
		nimln(32, "treetab.nim");
		nimln(32, "treetab.nim");
		if (!(((TMP3079[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3080));
		LOC23 = hash_101825((*n).kindU.S3.Strval);
		result = HEX21HEX26_101011(result, LOC23);
	}
	break;
	default:
	{
		NI i_219141;
		NI HEX3Atmp_219158;
		NI LOC25;
		NI TMP3083;
		NI res_219160;
		i_219141 = 0;
		HEX3Atmp_219158 = 0;
		nimln(34, "treetab.nim");
		nimln(34, "treetab.nim");
		nimln(34, "treetab.nim");
		LOC25 = sonslen_170003(n);
		TMP3083 = subInt(LOC25, 1);
		HEX3Atmp_219158 = (NI32)(TMP3083);
		nimln(1274, "system.nim");
		res_219160 = 0;
		nimln(1275, "system.nim");
		while (1) {
			NI LOC27;
			nimln(1275, "system.nim");
			if (!(res_219160 <= HEX3Atmp_219158)) goto LA26;
			nimln(1274, "system.nim");
			i_219141 = res_219160;
			nimln(35, "treetab.nim");
			nimln(35, "treetab.nim");
			if (((TMP3081[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3082));
			if ((NU)(i_219141) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
			LOC27 = hashtree_219014((*n).kindU.S6.Sons->data[i_219141]);
			result = HEX21HEX26_101011(result, LOC27);
			nimln(1277, "system.nim");
			res_219160 = addInt(res_219160, 1);
		} LA26: ;
	}
	break;
	}
	BeforeRet: ;
	popFrame();
	return result;
}

static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	NIM_BOOL LOC11;
	int LOC13;
	result = 0;
	{
		if (!(a == b)) goto LA3;
		result = NIM_TRUE;
		goto BeforeRet;
	}
	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = (a == NIM_NIL);
		if (LOC7) goto LA8;
		LOC7 = (b == NIM_NIL);
		LA8: ;
		if (!LOC7) goto LA9;
		result = NIM_FALSE;
		goto BeforeRet;
	}
	LA9: ;
	LOC11 = ((*a).Sup.len == (*b).Sup.len);
	if (!(LOC11)) goto LA12;
	LOC13 = memcmp(((NCSTRING) ((*a).data)), ((NCSTRING) ((*b).data)), (NI32)((*a).Sup.len * 1));
	LOC11 = (LOC13 == ((NI32) 0));
	LA12: ;
	result = LOC11;
	goto BeforeRet;
	BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, treesequivalent_219165)(tnode169647* a, tnode169647* b) {
	NIM_BOOL result;
	nimfr("TreesEquivalent", "treetab.nim")
	result = 0;
	nimln(38, "treetab.nim");
	{
		nimln(38, "treetab.nim");
		if (!(a == b)) goto LA3;
		nimln(39, "treetab.nim");
		result = NIM_TRUE;
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		NIM_BOOL LOC7;
		nimln(40, "treetab.nim");
		nimln(40, "treetab.nim");
		nimln(684, "system.nim");
		nimln(684, "system.nim");
		LOC7 = !((a == NIM_NIL));
		if (!(LOC7)) goto LA8;
		nimln(684, "system.nim");
		nimln(684, "system.nim");
		LOC7 = !((b == NIM_NIL));
		LA8: ;
		LOC6 = LOC7;
		if (!(LOC6)) goto LA9;
		nimln(40, "treetab.nim");
		LOC6 = ((*a).Kind == (*b).Kind);
		LA9: ;
		if (!LOC6) goto LA10;
		nimln(41, "treetab.nim");
		switch ((*a).Kind) {
		case ((NU8) 1):
		case ((NU8) 23):
		case ((NU8) 4):
		{
			nimln(42, "treetab.nim");
			result = NIM_TRUE;
		}
		break;
		case ((NU8) 3):
		{
			nimln(43, "treetab.nim");
			nimln(43, "treetab.nim");
			if (!(((TMP3073[(*a).Kind/8] &(1<<((*a).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3074));
			if (!(((TMP3073[(*b).Kind/8] &(1<<((*b).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3074));
			result = ((*(*a).kindU.S4.Sym).Sup.Id == (*(*b).kindU.S4.Sym).Sup.Id);
		}
		break;
		case ((NU8) 2):
		{
			nimln(44, "treetab.nim");
			nimln(44, "treetab.nim");
			if (!(((TMP3071[(*a).Kind/8] &(1<<((*a).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3072));
			if (!(((TMP3071[(*b).Kind/8] &(1<<((*b).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3072));
			result = ((*(*a).kindU.S5.Ident).Sup.Id == (*(*b).kindU.S5.Ident).Sup.Id);
		}
		break;
		case ((NU8) 5) ... ((NU8) 15):
		{
			nimln(45, "treetab.nim");
			nimln(45, "treetab.nim");
			if (!(((TMP3075[(*a).Kind/8] &(1<<((*a).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3076));
			if (!(((TMP3075[(*b).Kind/8] &(1<<((*b).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3076));
			result = ((*a).kindU.S1.Intval == (*b).kindU.S1.Intval);
		}
		break;
		case ((NU8) 16) ... ((NU8) 18):
		{
			nimln(46, "treetab.nim");
			nimln(46, "treetab.nim");
			if (!(((TMP3077[(*a).Kind/8] &(1<<((*a).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3078));
			if (!(((TMP3077[(*b).Kind/8] &(1<<((*b).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3078));
			result = (((NF) ((*a).kindU.S2.Floatval)) == ((NF) ((*b).kindU.S2.Floatval)));
		}
		break;
		case ((NU8) 20) ... ((NU8) 22):
		{
			nimln(47, "treetab.nim");
			nimln(47, "treetab.nim");
			if (!(((TMP3079[(*a).Kind/8] &(1<<((*a).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3080));
			if (!(((TMP3079[(*b).Kind/8] &(1<<((*b).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3080));
			result = eqStrings((*a).kindU.S3.Strval, (*b).kindU.S3.Strval);
		}
		break;
		default:
		{
			nimln(49, "treetab.nim");
			{
				NI LOC21;
				NI LOC22;
				NI i_219315;
				NI HEX3Atmp_219336;
				NI LOC25;
				NI TMP3084;
				NI res_219338;
				nimln(49, "treetab.nim");
				nimln(49, "treetab.nim");
				LOC21 = sonslen_170003(a);
				nimln(49, "treetab.nim");
				LOC22 = sonslen_170003(b);
				if (!(LOC21 == LOC22)) goto LA23;
				i_219315 = 0;
				HEX3Atmp_219336 = 0;
				nimln(50, "treetab.nim");
				nimln(50, "treetab.nim");
				nimln(50, "treetab.nim");
				LOC25 = sonslen_170003(a);
				TMP3084 = subInt(LOC25, 1);
				HEX3Atmp_219336 = (NI32)(TMP3084);
				nimln(1274, "system.nim");
				res_219338 = 0;
				nimln(1275, "system.nim");
				while (1) {
					nimln(1275, "system.nim");
					if (!(res_219338 <= HEX3Atmp_219336)) goto LA26;
					nimln(1274, "system.nim");
					i_219315 = res_219338;
					nimln(51, "treetab.nim");
					{
						NIM_BOOL LOC29;
						nimln(51, "treetab.nim");
						nimln(51, "treetab.nim");
						if (((TMP3081[(*a).Kind/8] &(1<<((*a).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3082));
						if ((NU)(i_219315) >= (NU)((*a).kindU.S6.Sons->Sup.len)) raiseIndexError();
						if (((TMP3081[(*b).Kind/8] &(1<<((*b).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3082));
						if ((NU)(i_219315) >= (NU)((*b).kindU.S6.Sons->Sup.len)) raiseIndexError();
						LOC29 = treesequivalent_219165((*a).kindU.S6.Sons->data[i_219315], (*b).kindU.S6.Sons->data[i_219315]);
						if (!!(LOC29)) goto LA30;
						nimln(51, "treetab.nim");
						goto BeforeRet;
					}
					LA30: ;
					nimln(1277, "system.nim");
					res_219338 = addInt(res_219338, 1);
				} LA26: ;
				nimln(52, "treetab.nim");
				result = NIM_TRUE;
			}
			LA23: ;
		}
		break;
		}
		nimln(53, "treetab.nim");
		{
			if (!result) goto LA34;
			nimln(53, "treetab.nim");
			result = sametypeornil_200258((*a).Typ, (*b).Typ, 0);
		}
		LA34: ;
	}
	goto LA1;
	LA10: ;
	LA1: ;
	BeforeRet: ;
	popFrame();
	return result;
}

static N_INLINE(NI, nexttry_176196)(NI h, NI maxhash) {
	NI result;
	NI TMP3085;
	NI TMP3086;
	nimfr("nextTry", "astalgo.nim")
	result = 0;
	nimln(449, "astalgo.nim");
	nimln(449, "astalgo.nim");
	nimln(449, "astalgo.nim");
	nimln(449, "astalgo.nim");
	TMP3085 = mulInt(5, h);
	TMP3086 = addInt((NI32)(TMP3085), 1);
	result = (NI)((NI32)(TMP3086) & maxhash);
	popFrame();
	return result;
}

N_NIMCALL(NI, nodetablerawget_219343)(tnodetable169705 t, NI k, tnode169647* key) {
	NI result;
	NI h;
	nimfr("NodeTableRawGet", "treetab.nim")
	result = 0;
	nimln(56, "treetab.nim");
	nimln(56, "treetab.nim");
	nimln(56, "treetab.nim");
	h = (NI)(k & (t.Data->Sup.len-1));
	nimln(57, "treetab.nim");
	while (1) {
		nimln(684, "system.nim");
		nimln(684, "system.nim");
		if ((NU)(h) >= (NU)(t.Data->Sup.len)) raiseIndexError();
		if (!!((t.Data->data[h].Key == NIM_NIL))) goto LA1;
		nimln(58, "treetab.nim");
		{
			NIM_BOOL LOC4;
			nimln(58, "treetab.nim");
			nimln(58, "treetab.nim");
			if ((NU)(h) >= (NU)(t.Data->Sup.len)) raiseIndexError();
			LOC4 = (t.Data->data[h].H == k);
			if (!(LOC4)) goto LA5;
			nimln(58, "treetab.nim");
			if ((NU)(h) >= (NU)(t.Data->Sup.len)) raiseIndexError();
			LOC4 = treesequivalent_219165(t.Data->data[h].Key, key);
			LA5: ;
			if (!LOC4) goto LA6;
			nimln(59, "treetab.nim");
			nimln(59, "treetab.nim");
			result = h;
			goto BeforeRet;
		}
		LA6: ;
		nimln(60, "treetab.nim");
		nimln(60, "treetab.nim");
		h = nexttry_176196(h, (t.Data->Sup.len-1));
	} LA1: ;
	nimln(61, "treetab.nim");
	result = -1;
	BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(NI, nodetableget_219365)(tnodetable169705 t, tnode169647* key) {
	NI result;
	NI index;
	NI LOC1;
	nimfr("NodeTableGet", "treetab.nim")
	result = 0;
	nimln(64, "treetab.nim");
	nimln(64, "treetab.nim");
	LOC1 = hashtree_219014(key);
	index = nodetablerawget_219343(t, LOC1, key);
	nimln(65, "treetab.nim");
	{
		nimln(688, "system.nim");
		if (!(0 <= index)) goto LA4;
		nimln(65, "treetab.nim");
		if ((NU)(index) >= (NU)(t.Data->Sup.len)) raiseIndexError();
		result = t.Data->data[index].Val;
	}
	goto LA2;
	LA4: ;
	{
		nimln(66, "treetab.nim");
		result = (-2147483647 -1);
	}
	LA2: ;
	popFrame();
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

N_NIMCALL(void, nodetablerawinsert_219377)(tnodepairseq169703** data, NI k, tnode169647* key, NI val) {
	NI h;
	nimfr("NodeTableRawInsert", "treetab.nim")
	nimln(70, "treetab.nim");
	nimln(70, "treetab.nim");
	nimln(70, "treetab.nim");
	h = (NI)(k & ((*data)->Sup.len-1));
	nimln(71, "treetab.nim");
	while (1) {
		nimln(684, "system.nim");
		nimln(684, "system.nim");
		if ((NU)(h) >= (NU)((*data)->Sup.len)) raiseIndexError();
		if (!!(((*data)->data[h].Key == NIM_NIL))) goto LA1;
		nimln(71, "treetab.nim");
		nimln(71, "treetab.nim");
		h = nexttry_176196(h, ((*data)->Sup.len-1));
	} LA1: ;
	nimln(72, "treetab.nim");
	{
		nimln(72, "treetab.nim");
		nimln(72, "treetab.nim");
		if ((NU)(h) >= (NU)((*data)->Sup.len)) raiseIndexError();
		if (!!(((*data)->data[h].Key == NIM_NIL))) goto LA4;
		nimln(72, "treetab.nim");
		hiddenraiseassert_71620(((NimStringDesc*) &TMP3087));
	}
	LA4: ;
	nimln(73, "treetab.nim");
	if ((NU)(h) >= (NU)((*data)->Sup.len)) raiseIndexError();
	(*data)->data[h].H = k;
	nimln(74, "treetab.nim");
	if ((NU)(h) >= (NU)((*data)->Sup.len)) raiseIndexError();
	asgnRefNoCycle((void**) &(*data)->data[h].Key, key);
	nimln(75, "treetab.nim");
	if ((NU)(h) >= (NU)((*data)->Sup.len)) raiseIndexError();
	(*data)->data[h].Val = val;
	popFrame();
}

N_NIMCALL(void, nodetableput_219605)(tnodetable169705* t, tnode169647* key, NI val) {
	tnodepairseq169703* n;
	NI k;
	NI index;
	nimfr("NodeTablePut", "treetab.nim")
	n = 0;
	nimln(79, "treetab.nim");
	k = hashtree_219014(key);
	nimln(80, "treetab.nim");
	index = nodetablerawget_219343((*t), k, key);
	nimln(81, "treetab.nim");
	{
		nimln(688, "system.nim");
		if (!(0 <= index)) goto LA3;
		nimln(82, "treetab.nim");
		{
			nimln(82, "treetab.nim");
			nimln(82, "treetab.nim");
			nimln(82, "treetab.nim");
			if ((NU)(index) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
			if (!!(!(((*t).Data->data[index].Key == NIM_NIL)))) goto LA7;
			nimln(82, "treetab.nim");
			hiddenraiseassert_71620(((NimStringDesc*) &TMP3088));
		}
		LA7: ;
		nimln(83, "treetab.nim");
		if ((NU)(index) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
		(*t).Data->data[index].Val = val;
	}
	goto LA1;
	LA3: ;
	{
		nimln(85, "treetab.nim");
		{
			NIM_BOOL LOC12;
			NI TMP3089;
			NI i_219837;
			NI HEX3Atmp_219874;
			NI res_219876;
			tnodepairseq169703* LOC20;
			nimln(85, "treetab.nim");
			nimln(85, "treetab.nim");
			LOC12 = mustrehash_176191((*t).Data->Sup.len, (*t).Counter);
			if (!LOC12) goto LA13;
			nimln(86, "treetab.nim");
			nimln(86, "treetab.nim");
			nimln(86, "treetab.nim");
			TMP3089 = mulInt((*t).Data->Sup.len, 2);
			n = (tnodepairseq169703*) newSeq((&NTI169703), (NI32)(TMP3089));
			i_219837 = 0;
			HEX3Atmp_219874 = 0;
			nimln(87, "treetab.nim");
			nimln(87, "treetab.nim");
			HEX3Atmp_219874 = ((*t).Data->Sup.len-1);
			nimln(1274, "system.nim");
			res_219876 = 0;
			nimln(1275, "system.nim");
			while (1) {
				nimln(1275, "system.nim");
				if (!(res_219876 <= HEX3Atmp_219874)) goto LA15;
				nimln(1274, "system.nim");
				i_219837 = res_219876;
				nimln(88, "treetab.nim");
				{
					nimln(684, "system.nim");
					nimln(684, "system.nim");
					if ((NU)(i_219837) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
					if (!!(((*t).Data->data[i_219837].Key == NIM_NIL))) goto LA18;
					nimln(89, "treetab.nim");
					if ((NU)(i_219837) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
					if ((NU)(i_219837) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
					if ((NU)(i_219837) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
					nodetablerawinsert_219377(&n, (*t).Data->data[i_219837].H, (*t).Data->data[i_219837].Key, (*t).Data->data[i_219837].Val);
				}
				LA18: ;
				nimln(1277, "system.nim");
				res_219876 = addInt(res_219876, 1);
			} LA15: ;
			nimln(90, "treetab.nim");
			LOC20 = 0;
			LOC20 = (*t).Data;
			unsureAsgnRef((void**) &(*t).Data, n);
			n = LOC20;
		}
		LA13: ;
		nimln(91, "treetab.nim");
		nodetablerawinsert_219377(&(*t).Data, k, key, val);
		nimln(92, "treetab.nim");
		(*t).Counter = addInt((*t).Counter, 1);
	}
	LA1: ;
	popFrame();
}

N_NIMCALL(NI, nodetabletestorset_219881)(tnodetable169705* t, tnode169647* key, NI val) {
	NI result;
	tnodepairseq169703* n;
	NI k;
	NI index;
	nimfr("NodeTableTestOrSet", "treetab.nim")
	result = 0;
	n = 0;
	nimln(96, "treetab.nim");
	k = hashtree_219014(key);
	nimln(97, "treetab.nim");
	index = nodetablerawget_219343((*t), k, key);
	nimln(98, "treetab.nim");
	{
		nimln(688, "system.nim");
		if (!(0 <= index)) goto LA3;
		nimln(99, "treetab.nim");
		{
			nimln(99, "treetab.nim");
			nimln(99, "treetab.nim");
			nimln(99, "treetab.nim");
			if ((NU)(index) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
			if (!!(!(((*t).Data->data[index].Key == NIM_NIL)))) goto LA7;
			nimln(99, "treetab.nim");
			hiddenraiseassert_71620(((NimStringDesc*) &TMP3088));
		}
		LA7: ;
		nimln(100, "treetab.nim");
		if ((NU)(index) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
		result = (*t).Data->data[index].Val;
	}
	goto LA1;
	LA3: ;
	{
		nimln(102, "treetab.nim");
		{
			NIM_BOOL LOC12;
			NI TMP3090;
			NI i_220037;
			NI HEX3Atmp_220074;
			NI res_220076;
			tnodepairseq169703* LOC20;
			nimln(102, "treetab.nim");
			nimln(102, "treetab.nim");
			LOC12 = mustrehash_176191((*t).Data->Sup.len, (*t).Counter);
			if (!LOC12) goto LA13;
			nimln(103, "treetab.nim");
			nimln(103, "treetab.nim");
			nimln(103, "treetab.nim");
			TMP3090 = mulInt((*t).Data->Sup.len, 2);
			n = (tnodepairseq169703*) newSeq((&NTI169703), (NI32)(TMP3090));
			i_220037 = 0;
			HEX3Atmp_220074 = 0;
			nimln(104, "treetab.nim");
			nimln(104, "treetab.nim");
			HEX3Atmp_220074 = ((*t).Data->Sup.len-1);
			nimln(1274, "system.nim");
			res_220076 = 0;
			nimln(1275, "system.nim");
			while (1) {
				nimln(1275, "system.nim");
				if (!(res_220076 <= HEX3Atmp_220074)) goto LA15;
				nimln(1274, "system.nim");
				i_220037 = res_220076;
				nimln(105, "treetab.nim");
				{
					nimln(684, "system.nim");
					nimln(684, "system.nim");
					if ((NU)(i_220037) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
					if (!!(((*t).Data->data[i_220037].Key == NIM_NIL))) goto LA18;
					nimln(106, "treetab.nim");
					if ((NU)(i_220037) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
					if ((NU)(i_220037) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
					if ((NU)(i_220037) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
					nodetablerawinsert_219377(&n, (*t).Data->data[i_220037].H, (*t).Data->data[i_220037].Key, (*t).Data->data[i_220037].Val);
				}
				LA18: ;
				nimln(1277, "system.nim");
				res_220076 = addInt(res_220076, 1);
			} LA15: ;
			nimln(107, "treetab.nim");
			LOC20 = 0;
			LOC20 = (*t).Data;
			unsureAsgnRef((void**) &(*t).Data, n);
			n = LOC20;
		}
		LA13: ;
		nimln(108, "treetab.nim");
		nodetablerawinsert_219377(&(*t).Data, k, key, val);
		nimln(109, "treetab.nim");
		result = val;
		nimln(110, "treetab.nim");
		(*t).Counter = addInt((*t).Counter, 1);
	}
	LA1: ;
	popFrame();
	return result;
}
N_NOINLINE(void, treetabInit)(void) {
	nimfr("treetab", "treetab.nim")
	popFrame();
}

N_NOINLINE(void, treetabDatInit)(void) {
}

