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
typedef struct tinfocpu123445 tinfocpu123445;
typedef struct tidtable169693 tidtable169693;
typedef struct tidpairseq169691 tidpairseq169691;
typedef struct tidpair169689 tidpair169689;
typedef struct tidobj131009 tidobj131009;
typedef struct TNimObject TNimObject;
typedef struct tcell38846 tcell38846;
typedef struct TNimType TNimType;
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
typedef struct tbasechunk21641 tbasechunk21641;
typedef struct tfreecell21633 tfreecell21633;
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
struct tinfocpu123445 {
NimStringDesc* Field0;
NI Field1;
NU8 Field2;
NI Field3;
NI Field4;
};
typedef tinfocpu123445 TY123460[14];
struct tidpair169689 {
tidobj131009* Key;
TNimObject* Val;
};
struct tidtable169693 {
NI Counter;
tidpairseq169691* Data;
};
typedef tidtable169693 TY336190[52];
typedef ttype169681* TY212039[52];
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
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
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
struct tfreecell21633 {
tfreecell21633* Next;
NI Zerofield;
};
struct tnodeseq169641 {
  TGenericSeq Sup;
  tnode169647* data[SEQ_DECL_SIZE];
};
struct tidpairseq169691 {
  TGenericSeq Sup;
  tidpair169689 data[SEQ_DECL_SIZE];
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
N_NIMCALL(tnode169647*, getpragmastmt_336008)(tnode169647* n, NU8 w);
static N_INLINE(NI, len_170082)(tnode169647* n);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(tnode169647*, HEX5BHEX5D_170276)(tnode169647* n, NI i);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(NU8, whichpragma_195848)(tnode169647* n);
N_NIMCALL(NIM_BOOL, stmtscontainpragma_336074)(tnode169647* n, NU8 w);
N_NIMCALL(NI64, hashstring_336092)(NimStringDesc* s);
N_NIMCALL(void, inittypetables_336199)(void);
N_NIMCALL(void, initidtable_169942)(tidtable169693* x);
N_NIMCALL(void, resetcaches_336244)(void);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell38846*, usrtocell_42243)(void* usr);
static N_INLINE(void, rtladdzct_43402)(tcell38846* c);
N_NOINLINE(void, addzct_42215)(tcellseq38862* s, tcell38846* c);
N_NIMCALL(ttype169681*, getuniquetype_336401)(ttype169681* key);
N_NIMCALL(void, internalerror_129702)(NimStringDesc* errmsg);
static N_INLINE(ttype169681*, lastson_170015)(ttype169681* n);
static N_INLINE(NI, sonslen_170007)(ttype169681* n);
N_NIMCALL(NIM_BOOL, idtablehasobjectaskey_176154)(tidtable169693 t, tidobj131009* key);
N_NIMCALL(void, chckObj)(TNimType* obj, TNimType* subclass);
N_NIMCALL(NIM_BOOL, samebackendtype_201846)(ttype169681* x, ttype169681* y);
N_NIMCALL(void, idtableput_176147)(tidtable169693* t, tidobj131009* key, TNimObject* val);
N_NIMCALL(TNimObject*, idtableget_176137)(tidtable169693 t, tidobj131009* key);
N_NIMCALL(NIM_BOOL, sametype_201837)(ttype169681* x, ttype169681* y);
N_NIMCALL(TNimObject*, tablegettype_336550)(tidtable169693 tab, ttype169681* key);
N_NIMCALL(NimStringDesc*, makesinglelinecstring_336596)(NimStringDesc* s);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, tocchar_128440)(NIM_CHAR c);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(trope126007*, makellvmstring_336606)(NimStringDesc* s);
static N_INLINE(NI, modInt)(NI a, NI b);
N_NOINLINE(void, raiseDivByZero)(void);
N_NIMCALL(void, app_126040)(trope126007** a, trope126007* b);
N_NIMCALL(trope126007*, torope_126058)(NimStringDesc* s);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newlen);
N_NIMCALL(NimStringDesc*, nsuToHex)(NI64 x, NI len);
static NIM_CONST TY169850 TMP5246 = {
0xEC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP5247, "sons", 4);
extern NIM_CONST TY123460 cpu_123459;
STRING_LITERAL(TMP5250, "value expected, but got a type", 30);
STRING_LITERAL(TMP5251, "GetUniqueType", 13);
STRING_LITERAL(TMP5253, "\"", 1);
STRING_LITERAL(TMP5254, "c\"", 2);
STRING_LITERAL(TMP5258, "\\00\"", 4);
extern TFrame* frameptr_12027;
extern NU8 targetcpu_123560;
TY336190 gtypetable_336192;
TY212039 gcanonicaltypes_336195;
extern tgcheap40816 gch_40842;
extern TNimType NTI169681; /* TType */

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_12027;
	frameptr_12027 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_12027 = (*frameptr_12027).prev;
}

static N_INLINE(NI, len_170082)(tnode169647* n) {
	NI result;
	nimfr("len", "ast.nim")
	result = 0;
	nimln(852, "ast.nim");
	{
		nimln(852, "ast.nim");
		if (((TMP5246[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP5247));
		if (!(*n).kindU.S6.Sons == 0) goto LA3;
		nimln(852, "ast.nim");
		result = 0;
	}
	goto LA1;
	LA3: ;
	{
		nimln(853, "ast.nim");
		nimln(853, "ast.nim");
		if (((TMP5246[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP5247));
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

static N_INLINE(tnode169647*, HEX5BHEX5D_170276)(tnode169647* n, NI i) {
	tnode169647* result;
	nimfr("[]", "ast.nim")
	result = 0;
	nimln(866, "ast.nim");
	if (((TMP5246[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP5247));
	if ((NU)(i) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
	result = (*n).kindU.S6.Sons->data[i];
	popFrame();
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

N_NIMCALL(tnode169647*, getpragmastmt_336008)(tnode169647* n, NU8 w) {
	tnode169647* result;
	nimfr("getPragmaStmt", "ccgutils.nim")
	result = 0;
	nimln(17, "ccgutils.nim");
	switch ((*n).Kind) {
	case ((NU8) 114):
	{
		NI i_336028;
		NI HEX3Atmp_336062;
		NI LOC2;
		NI res_336064;
		i_336028 = 0;
		HEX3Atmp_336062 = 0;
		nimln(19, "ccgutils.nim");
		nimln(19, "ccgutils.nim");
		nimln(19, "ccgutils.nim");
		LOC2 = len_170082(n);
		HEX3Atmp_336062 = subInt(LOC2, 1);
		nimln(1281, "system.nim");
		res_336064 = 0;
		nimln(1282, "system.nim");
		while (1) {
			tnode169647* LOC4;
			nimln(1282, "system.nim");
			if (!(res_336064 <= HEX3Atmp_336062)) goto LA3;
			nimln(1281, "system.nim");
			i_336028 = res_336064;
			nimln(20, "ccgutils.nim");
			nimln(20, "ccgutils.nim");
			LOC4 = 0;
			LOC4 = HEX5BHEX5D_170276(n, i_336028);
			result = getpragmastmt_336008(LOC4, w);
			nimln(21, "ccgutils.nim");
			{
				nimln(684, "system.nim");
				nimln(684, "system.nim");
				if (!!((result == NIM_NIL))) goto LA7;
				nimln(21, "ccgutils.nim");
				goto LA3;
			}
			LA7: ;
			nimln(1284, "system.nim");
			res_336064 = addInt(res_336064, 1);
		} LA3: ;
	}
	break;
	case ((NU8) 90):
	{
		NI i_336055;
		NI HEX3Atmp_336066;
		NI LOC10;
		NI res_336068;
		i_336055 = 0;
		HEX3Atmp_336066 = 0;
		nimln(23, "ccgutils.nim");
		nimln(23, "ccgutils.nim");
		nimln(23, "ccgutils.nim");
		LOC10 = len_170082(n);
		HEX3Atmp_336066 = subInt(LOC10, 1);
		nimln(1281, "system.nim");
		res_336068 = 0;
		nimln(1282, "system.nim");
		while (1) {
			nimln(1282, "system.nim");
			if (!(res_336068 <= HEX3Atmp_336066)) goto LA11;
			nimln(1281, "system.nim");
			i_336055 = res_336068;
			nimln(24, "ccgutils.nim");
			{
				tnode169647* LOC14;
				NU8 LOC15;
				nimln(24, "ccgutils.nim");
				nimln(24, "ccgutils.nim");
				nimln(24, "ccgutils.nim");
				LOC14 = 0;
				LOC14 = HEX5BHEX5D_170276(n, i_336055);
				LOC15 = whichpragma_195848(LOC14);
				if (!(LOC15 == w)) goto LA16;
				nimln(24, "ccgutils.nim");
				nimln(24, "ccgutils.nim");
				result = HEX5BHEX5D_170276(n, i_336055);
				goto BeforeRet;
			}
			LA16: ;
			nimln(1284, "system.nim");
			res_336068 = addInt(res_336068, 1);
		} LA11: ;
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

N_NIMCALL(NIM_BOOL, stmtscontainpragma_336074)(tnode169647* n, NU8 w) {
	NIM_BOOL result;
	tnode169647* LOC1;
	nimfr("stmtsContainPragma", "ccgutils.nim")
	result = 0;
	nimln(28, "ccgutils.nim");
	nimln(684, "system.nim");
	nimln(684, "system.nim");
	nimln(28, "ccgutils.nim");
	LOC1 = 0;
	LOC1 = getpragmastmt_336008(n, w);
	result = !((LOC1 == NIM_NIL));
	popFrame();
	return result;
}

N_NIMCALL(NI64, hashstring_336092)(NimStringDesc* s) {
	NI64 result;
	nimfr("hashString", "ccgutils.nim")
	result = 0;
	nimln(32, "ccgutils.nim");
	{
		NI64 b;
		NI i_336105;
		NI HEX3Atmp_336177;
		NI TMP5248;
		NI res_336179;
		nimln(32, "ccgutils.nim");
		if (targetcpu_123560 < 1 || targetcpu_123560 > 14) raiseIndexError();
		if (!(cpu_123459[(targetcpu_123560)- 1].Field4 == 64)) goto LA3;
		nimln(35, "ccgutils.nim");
		b = 0;
		i_336105 = 0;
		HEX3Atmp_336177 = 0;
		nimln(36, "ccgutils.nim");
		nimln(36, "ccgutils.nim");
		nimln(36, "ccgutils.nim");
		TMP5248 = subInt(s->Sup.len, 1);
		HEX3Atmp_336177 = (NI32)(TMP5248);
		nimln(1274, "system.nim");
		res_336179 = 0;
		nimln(1275, "system.nim");
		while (1) {
			nimln(1275, "system.nim");
			if (!(res_336179 <= HEX3Atmp_336177)) goto LA5;
			nimln(1274, "system.nim");
			i_336105 = res_336179;
			nimln(37, "ccgutils.nim");
			nimln(37, "ccgutils.nim");
			nimln(37, "ccgutils.nim");
			if ((NU)(i_336105) > (NU)(s->Sup.len)) raiseIndexError();
			b = (NI64)((NU64)(b) + (NU64)(((NI64) (((NU8)(s->data[i_336105]))))));
			nimln(38, "ccgutils.nim");
			nimln(38, "ccgutils.nim");
			nimln(38, "ccgutils.nim");
			b = (NI64)((NU64)(b) + (NU64)((NI64)((NU64)(b) << (NU64)(10))));
			nimln(39, "ccgutils.nim");
			nimln(39, "ccgutils.nim");
			nimln(39, "ccgutils.nim");
			b = (NI64)(b ^ (NI64)((NU64)(b) >> (NU64)(6)));
			nimln(1277, "system.nim");
			res_336179 = addInt(res_336179, 1);
		} LA5: ;
		nimln(40, "ccgutils.nim");
		nimln(40, "ccgutils.nim");
		nimln(40, "ccgutils.nim");
		b = (NI64)((NU64)(b) + (NU64)((NI64)((NU64)(b) << (NU64)(3))));
		nimln(41, "ccgutils.nim");
		nimln(41, "ccgutils.nim");
		nimln(41, "ccgutils.nim");
		b = (NI64)(b ^ (NI64)((NU64)(b) >> (NU64)(11)));
		nimln(42, "ccgutils.nim");
		nimln(42, "ccgutils.nim");
		nimln(42, "ccgutils.nim");
		b = (NI64)((NU64)(b) + (NU64)((NI64)((NU64)(b) << (NU64)(15))));
		nimln(43, "ccgutils.nim");
		result = b;
	}
	goto LA1;
	LA3: ;
	{
		NI32 a;
		NI i_336121;
		NI HEX3Atmp_336182;
		NI TMP5249;
		NI res_336184;
		nimln(45, "ccgutils.nim");
		a = ((NI32) 0);
		i_336121 = 0;
		HEX3Atmp_336182 = 0;
		nimln(46, "ccgutils.nim");
		nimln(46, "ccgutils.nim");
		nimln(46, "ccgutils.nim");
		TMP5249 = subInt(s->Sup.len, 1);
		HEX3Atmp_336182 = (NI32)(TMP5249);
		nimln(1274, "system.nim");
		res_336184 = 0;
		nimln(1275, "system.nim");
		while (1) {
			nimln(1275, "system.nim");
			if (!(res_336184 <= HEX3Atmp_336182)) goto LA7;
			nimln(1274, "system.nim");
			i_336121 = res_336184;
			nimln(47, "ccgutils.nim");
			nimln(47, "ccgutils.nim");
			nimln(47, "ccgutils.nim");
			if ((NU)(i_336121) > (NU)(s->Sup.len)) raiseIndexError();
			a = (NI32)((NU32)(a) + (NU32)(((NI32) (((NU8)(s->data[i_336121]))))));
			nimln(48, "ccgutils.nim");
			nimln(48, "ccgutils.nim");
			nimln(48, "ccgutils.nim");
			a = (NI32)((NU32)(a) + (NU32)((NI32)((NU32)(a) << (NU32)(((NI32) 10)))));
			nimln(49, "ccgutils.nim");
			nimln(49, "ccgutils.nim");
			nimln(49, "ccgutils.nim");
			a = (NI32)(a ^ (NI32)((NU32)(a) >> (NU32)(((NI32) 6))));
			nimln(1277, "system.nim");
			res_336184 = addInt(res_336184, 1);
		} LA7: ;
		nimln(50, "ccgutils.nim");
		nimln(50, "ccgutils.nim");
		nimln(50, "ccgutils.nim");
		a = (NI32)((NU32)(a) + (NU32)((NI32)((NU32)(a) << (NU32)(((NI32) 3)))));
		nimln(51, "ccgutils.nim");
		nimln(51, "ccgutils.nim");
		nimln(51, "ccgutils.nim");
		a = (NI32)(a ^ (NI32)((NU32)(a) >> (NU32)(((NI32) 11))));
		nimln(52, "ccgutils.nim");
		nimln(52, "ccgutils.nim");
		nimln(52, "ccgutils.nim");
		a = (NI32)((NU32)(a) + (NU32)((NI32)((NU32)(a) << (NU32)(((NI32) 15)))));
		nimln(53, "ccgutils.nim");
		result = ((NI64) (a));
	}
	LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(void, inittypetables_336199)(void) {
	NU8 i_336234;
	NU8 res_336239;
	nimfr("initTypeTables", "ccgutils.nim")
	i_336234 = 0;
	nimln(1274, "system.nim");
	res_336239 = ((NU8) 0);
	nimln(1275, "system.nim");
	while (1) {
		nimln(1275, "system.nim");
		if (!(res_336239 <= ((NU8) 51))) goto LA1;
		nimln(1274, "system.nim");
		i_336234 = res_336239;
		nimln(60, "ccgutils.nim");
		initidtable_169942(&gtypetable_336192[(i_336234)- 0]);
		nimln(1277, "system.nim");
		res_336239 = addInt(res_336239, 1);
	} LA1: ;
	popFrame();
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

N_NIMCALL(void, resetcaches_336244)(void) {
	NU8 i_336253;
	NU8 res_336255;
	nimfr("resetCaches", "ccgutils.nim")
	nimln(64, "ccgutils.nim");
	inittypetables_336199();
	i_336253 = 0;
	nimln(1281, "system.nim");
	res_336255 = ((NU8) 0);
	nimln(1282, "system.nim");
	while (1) {
		nimln(1282, "system.nim");
		if (!(res_336255 <= ((NU8) 51))) goto LA1;
		nimln(1281, "system.nim");
		i_336253 = res_336255;
		nimln(66, "ccgutils.nim");
		asgnRefNoCycle((void**) &gcanonicaltypes_336195[(i_336253)- 0], NIM_NIL);
		nimln(1284, "system.nim");
		res_336255 = addInt(res_336255, 1);
	} LA1: ;
	popFrame();
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
	NI TMP5252;
	nimfr("lastSon", "ast.nim")
	result = 0;
	nimln(1290, "ast.nim");
	nimln(1290, "ast.nim");
	nimln(1290, "ast.nim");
	LOC1 = sonslen_170007(n);
	TMP5252 = subInt(LOC1, 1);
	if ((NU)((NI32)(TMP5252)) >= (NU)((*n).Sons->Sup.len)) raiseIndexError();
	result = (*n).Sons->data[(NI32)(TMP5252)];
	popFrame();
	return result;
}

N_NIMCALL(ttype169681*, getuniquetype_336401)(ttype169681* key) {
	ttype169681* result;
	NU8 k;
	nimfr("GetUniqueType", "ccgutils.nim")
	result = 0;
	nimln(75, "ccgutils.nim");
	{
		nimln(75, "ccgutils.nim");
		if (!(key == NIM_NIL)) goto LA3;
		nimln(75, "ccgutils.nim");
		goto BeforeRet;
	}
	LA3: ;
	nimln(76, "ccgutils.nim");
	k = (*key).Kind;
	nimln(77, "ccgutils.nim");
	switch (k) {
	case ((NU8) 1):
	case ((NU8) 2):
	case ((NU8) 31) ... ((NU8) 44):
	{
		nimln(82, "ccgutils.nim");
		result = key;
	}
	break;
	case ((NU8) 3):
	case ((NU8) 5):
	case ((NU8) 6):
	case ((NU8) 7):
	case ((NU8) 26):
	case ((NU8) 28):
	case ((NU8) 29):
	case ((NU8) 0):
	case ((NU8) 45):
	{
		nimln(85, "ccgutils.nim");
		result = gcanonicaltypes_336195[(k)- 0];
		nimln(86, "ccgutils.nim");
		{
			nimln(86, "ccgutils.nim");
			if (!(result == NIM_NIL)) goto LA9;
			nimln(87, "ccgutils.nim");
			asgnRefNoCycle((void**) &gcanonicaltypes_336195[(k)- 0], key);
			nimln(88, "ccgutils.nim");
			result = key;
		}
		LA9: ;
	}
	break;
	case ((NU8) 8):
	case ((NU8) 51):
	{
		nimln(90, "ccgutils.nim");
		internalerror_129702(((NimStringDesc*) &TMP5250));
	}
	break;
	case ((NU8) 12):
	{
		nimln(92, "ccgutils.nim");
		internalerror_129702(((NimStringDesc*) &TMP5251));
	}
	break;
	case ((NU8) 11):
	case ((NU8) 13):
	case ((NU8) 15):
	case ((NU8) 47):
	case ((NU8) 46):
	case ((NU8) 49):
	{
		ttype169681* LOC14;
		nimln(94, "ccgutils.nim");
		nimln(94, "ccgutils.nim");
		LOC14 = 0;
		LOC14 = lastson_170015(key);
		result = getuniquetype_336401(LOC14);
	}
	break;
	case ((NU8) 4):
	case ((NU8) 9):
	case ((NU8) 10):
	case ((NU8) 27):
	case ((NU8) 16):
	case ((NU8) 19):
	case ((NU8) 20):
	case ((NU8) 18):
	case ((NU8) 21):
	case ((NU8) 22):
	case ((NU8) 24):
	case ((NU8) 30):
	case ((NU8) 48):
	case ((NU8) 50):
	case ((NU8) 23):
	{
		NI h_336436;
		NI HEX3Atmp_336533;
		NI res_336535;
		nimln(105, "ccgutils.nim");
		{
			NIM_BOOL LOC18;
			nimln(105, "ccgutils.nim");
			LOC18 = idtablehasobjectaskey_176154(gtypetable_336192[(k)- 0], &key->Sup);
			if (!LOC18) goto LA19;
			nimln(105, "ccgutils.nim");
			nimln(105, "ccgutils.nim");
			result = key;
			goto BeforeRet;
		}
		LA19: ;
		h_336436 = 0;
		HEX3Atmp_336533 = 0;
		nimln(106, "ccgutils.nim");
		nimln(106, "ccgutils.nim");
		HEX3Atmp_336533 = (gtypetable_336192[(k)- 0].Data->Sup.len-1);
		nimln(1274, "system.nim");
		res_336535 = 0;
		nimln(1275, "system.nim");
		while (1) {
			ttype169681* t;
			nimln(1275, "system.nim");
			if (!(res_336535 <= HEX3Atmp_336533)) goto LA21;
			nimln(1274, "system.nim");
			h_336436 = res_336535;
			nimln(107, "ccgutils.nim");
			if ((NU)(h_336436) >= (NU)(gtypetable_336192[(k)- 0].Data->Sup.len)) raiseIndexError();
			if (gtypetable_336192[(k)- 0].Data->data[h_336436].Key) chckObj((*gtypetable_336192[(k)- 0].Data->data[h_336436].Key).Sup.m_type, (&NTI169681));
			t = ((ttype169681*) (gtypetable_336192[(k)- 0].Data->data[h_336436].Key));
			nimln(108, "ccgutils.nim");
			{
				NIM_BOOL LOC24;
				nimln(108, "ccgutils.nim");
				nimln(684, "system.nim");
				nimln(684, "system.nim");
				LOC24 = !((t == NIM_NIL));
				if (!(LOC24)) goto LA25;
				nimln(108, "ccgutils.nim");
				LOC24 = samebackendtype_201846(t, key);
				LA25: ;
				if (!LOC24) goto LA26;
				nimln(109, "ccgutils.nim");
				nimln(109, "ccgutils.nim");
				result = t;
				goto BeforeRet;
			}
			LA26: ;
			nimln(1277, "system.nim");
			res_336535 = addInt(res_336535, 1);
		} LA21: ;
		nimln(110, "ccgutils.nim");
		idtableput_176147(&gtypetable_336192[(k)- 0], &key->Sup, &key->Sup.Sup);
		nimln(111, "ccgutils.nim");
		result = key;
	}
	break;
	case ((NU8) 17):
	{
		nimln(113, "ccgutils.nim");
		{
			TNimObject* LOC33;
			nimln(717, "system.nim");
			nimln(717, "system.nim");
			if (!!((((*key).Flags &(1<<((((NU8) 8))&31)))!=0))) goto LA31;
			nimln(115, "ccgutils.nim");
			nimln(115, "ccgutils.nim");
			LOC33 = 0;
			LOC33 = idtableget_176137(gtypetable_336192[(k)- 0], &key->Sup);
			if (LOC33) chckObj((*LOC33).m_type, (&NTI169681));
			result = ((ttype169681*) (LOC33));
			nimln(116, "ccgutils.nim");
			{
				nimln(116, "ccgutils.nim");
				if (!(result == NIM_NIL)) goto LA36;
				nimln(117, "ccgutils.nim");
				idtableput_176147(&gtypetable_336192[(k)- 0], &key->Sup, &key->Sup.Sup);
				nimln(118, "ccgutils.nim");
				result = key;
			}
			LA36: ;
		}
		goto LA29;
		LA31: ;
		{
			NI h_336479;
			NI HEX3Atmp_336537;
			NI res_336539;
			nimln(121, "ccgutils.nim");
			{
				NIM_BOOL LOC41;
				nimln(121, "ccgutils.nim");
				LOC41 = idtablehasobjectaskey_176154(gtypetable_336192[(k)- 0], &key->Sup);
				if (!LOC41) goto LA42;
				nimln(121, "ccgutils.nim");
				nimln(121, "ccgutils.nim");
				result = key;
				goto BeforeRet;
			}
			LA42: ;
			h_336479 = 0;
			HEX3Atmp_336537 = 0;
			nimln(122, "ccgutils.nim");
			nimln(122, "ccgutils.nim");
			HEX3Atmp_336537 = (gtypetable_336192[(k)- 0].Data->Sup.len-1);
			nimln(1274, "system.nim");
			res_336539 = 0;
			nimln(1275, "system.nim");
			while (1) {
				ttype169681* t;
				nimln(1275, "system.nim");
				if (!(res_336539 <= HEX3Atmp_336537)) goto LA44;
				nimln(1274, "system.nim");
				h_336479 = res_336539;
				nimln(123, "ccgutils.nim");
				if ((NU)(h_336479) >= (NU)(gtypetable_336192[(k)- 0].Data->Sup.len)) raiseIndexError();
				if (gtypetable_336192[(k)- 0].Data->data[h_336479].Key) chckObj((*gtypetable_336192[(k)- 0].Data->data[h_336479].Key).Sup.m_type, (&NTI169681));
				t = ((ttype169681*) (gtypetable_336192[(k)- 0].Data->data[h_336479].Key));
				nimln(124, "ccgutils.nim");
				{
					NIM_BOOL LOC47;
					nimln(124, "ccgutils.nim");
					nimln(684, "system.nim");
					nimln(684, "system.nim");
					LOC47 = !((t == NIM_NIL));
					if (!(LOC47)) goto LA48;
					nimln(124, "ccgutils.nim");
					LOC47 = sametype_201837(t, key);
					LA48: ;
					if (!LOC47) goto LA49;
					nimln(125, "ccgutils.nim");
					nimln(125, "ccgutils.nim");
					result = t;
					goto BeforeRet;
				}
				LA49: ;
				nimln(1277, "system.nim");
				res_336539 = addInt(res_336539, 1);
			} LA44: ;
			nimln(126, "ccgutils.nim");
			idtableput_176147(&gtypetable_336192[(k)- 0], &key->Sup, &key->Sup.Sup);
			nimln(127, "ccgutils.nim");
			result = key;
		}
		LA29: ;
	}
	break;
	case ((NU8) 14):
	{
		TNimObject* LOC52;
		nimln(129, "ccgutils.nim");
		nimln(129, "ccgutils.nim");
		LOC52 = 0;
		LOC52 = idtableget_176137(gtypetable_336192[(k)- 0], &key->Sup);
		if (LOC52) chckObj((*LOC52).m_type, (&NTI169681));
		result = ((ttype169681*) (LOC52));
		nimln(130, "ccgutils.nim");
		{
			nimln(130, "ccgutils.nim");
			if (!(result == NIM_NIL)) goto LA55;
			nimln(131, "ccgutils.nim");
			idtableput_176147(&gtypetable_336192[(k)- 0], &key->Sup, &key->Sup.Sup);
			nimln(132, "ccgutils.nim");
			result = key;
		}
		LA55: ;
	}
	break;
	case ((NU8) 25):
	{
		nimln(135, "ccgutils.nim");
		{
			nimln(684, "system.nim");
			nimln(684, "system.nim");
			if (!!(((*key).Callconv == ((NU8) 8)))) goto LA60;
			nimln(136, "ccgutils.nim");
			result = key;
		}
		goto LA58;
		LA60: ;
		{
			NI h_336519;
			NI HEX3Atmp_336541;
			NI res_336543;
			nimln(139, "ccgutils.nim");
			{
				NIM_BOOL LOC65;
				nimln(139, "ccgutils.nim");
				LOC65 = idtablehasobjectaskey_176154(gtypetable_336192[(k)- 0], &key->Sup);
				if (!LOC65) goto LA66;
				nimln(139, "ccgutils.nim");
				nimln(139, "ccgutils.nim");
				result = key;
				goto BeforeRet;
			}
			LA66: ;
			h_336519 = 0;
			HEX3Atmp_336541 = 0;
			nimln(140, "ccgutils.nim");
			nimln(140, "ccgutils.nim");
			HEX3Atmp_336541 = (gtypetable_336192[(k)- 0].Data->Sup.len-1);
			nimln(1274, "system.nim");
			res_336543 = 0;
			nimln(1275, "system.nim");
			while (1) {
				ttype169681* t;
				nimln(1275, "system.nim");
				if (!(res_336543 <= HEX3Atmp_336541)) goto LA68;
				nimln(1274, "system.nim");
				h_336519 = res_336543;
				nimln(141, "ccgutils.nim");
				if ((NU)(h_336519) >= (NU)(gtypetable_336192[(k)- 0].Data->Sup.len)) raiseIndexError();
				if (gtypetable_336192[(k)- 0].Data->data[h_336519].Key) chckObj((*gtypetable_336192[(k)- 0].Data->data[h_336519].Key).Sup.m_type, (&NTI169681));
				t = ((ttype169681*) (gtypetable_336192[(k)- 0].Data->data[h_336519].Key));
				nimln(142, "ccgutils.nim");
				{
					NIM_BOOL LOC71;
					nimln(142, "ccgutils.nim");
					nimln(684, "system.nim");
					nimln(684, "system.nim");
					LOC71 = !((t == NIM_NIL));
					if (!(LOC71)) goto LA72;
					nimln(142, "ccgutils.nim");
					LOC71 = samebackendtype_201846(t, key);
					LA72: ;
					if (!LOC71) goto LA73;
					nimln(143, "ccgutils.nim");
					nimln(143, "ccgutils.nim");
					result = t;
					goto BeforeRet;
				}
				LA73: ;
				nimln(1277, "system.nim");
				res_336543 = addInt(res_336543, 1);
			} LA68: ;
			nimln(144, "ccgutils.nim");
			idtableput_176147(&gtypetable_336192[(k)- 0], &key->Sup, &key->Sup.Sup);
			nimln(145, "ccgutils.nim");
			result = key;
		}
		LA58: ;
	}
	break;
	}
	BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(TNimObject*, tablegettype_336550)(tidtable169693 tab, ttype169681* key) {
	TNimObject* result;
	nimfr("TableGetType", "ccgutils.nim")
	result = 0;
	nimln(149, "ccgutils.nim");
	result = idtableget_176137(tab, &key->Sup);
	nimln(150, "ccgutils.nim");
	{
		NIM_BOOL LOC3;
		NI h_336576;
		NI HEX3Atmp_336589;
		NI res_336591;
		nimln(150, "ccgutils.nim");
		nimln(150, "ccgutils.nim");
		LOC3 = (result == NIM_NIL);
		if (!(LOC3)) goto LA4;
		nimln(692, "system.nim");
		LOC3 = (0 < tab.Counter);
		LA4: ;
		if (!LOC3) goto LA5;
		h_336576 = 0;
		HEX3Atmp_336589 = 0;
		nimln(153, "ccgutils.nim");
		nimln(153, "ccgutils.nim");
		HEX3Atmp_336589 = (tab.Data->Sup.len-1);
		nimln(1274, "system.nim");
		res_336591 = 0;
		nimln(1275, "system.nim");
		while (1) {
			ttype169681* t;
			nimln(1275, "system.nim");
			if (!(res_336591 <= HEX3Atmp_336589)) goto LA7;
			nimln(1274, "system.nim");
			h_336576 = res_336591;
			nimln(154, "ccgutils.nim");
			if ((NU)(h_336576) >= (NU)(tab.Data->Sup.len)) raiseIndexError();
			if (tab.Data->data[h_336576].Key) chckObj((*tab.Data->data[h_336576].Key).Sup.m_type, (&NTI169681));
			t = ((ttype169681*) (tab.Data->data[h_336576].Key));
			nimln(155, "ccgutils.nim");
			{
				nimln(684, "system.nim");
				nimln(684, "system.nim");
				if (!!((t == NIM_NIL))) goto LA10;
				nimln(156, "ccgutils.nim");
				{
					NIM_BOOL LOC14;
					nimln(156, "ccgutils.nim");
					LOC14 = sametype_201837(t, key);
					if (!LOC14) goto LA15;
					nimln(157, "ccgutils.nim");
					nimln(157, "ccgutils.nim");
					if ((NU)(h_336576) >= (NU)(tab.Data->Sup.len)) raiseIndexError();
					result = tab.Data->data[h_336576].Val;
					goto BeforeRet;
				}
				LA15: ;
			}
			LA10: ;
			nimln(1277, "system.nim");
			res_336591 = addInt(res_336591, 1);
		} LA7: ;
	}
	LA5: ;
	BeforeRet: ;
	popFrame();
	return result;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) (&(*dest).data[((*dest).Sup.len)- 0])), ((NCSTRING) ((*src).data)), (NI32)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(NimStringDesc*, makesinglelinecstring_336596)(NimStringDesc* s) {
	NimStringDesc* result;
	NIM_CHAR c_336600;
	NI i_336602;
	nimfr("makeSingleLineCString", "ccgutils.nim")
	result = 0;
	nimln(160, "ccgutils.nim");
	result = copyString(((NimStringDesc*) &TMP5253));
	c_336600 = 0;
	nimln(1373, "system.nim");
	i_336602 = 0;
	nimln(1374, "system.nim");
	while (1) {
		NimStringDesc* LOC2;
		nimln(1374, "system.nim");
		nimln(1374, "system.nim");
		if (!(i_336602 < s->Sup.len)) goto LA1;
		nimln(1375, "system.nim");
		if ((NU)(i_336602) > (NU)(s->Sup.len)) raiseIndexError();
		c_336600 = s->data[i_336602];
		nimln(162, "ccgutils.nim");
		nimln(162, "ccgutils.nim");
		LOC2 = 0;
		LOC2 = tocchar_128440(c_336600);
		result = resizeString(result, LOC2->Sup.len + 0);
appendString(result, LOC2);
		nimln(1376, "system.nim");
		i_336602 = addInt(i_336602, 1);
	} LA1: ;
	nimln(163, "ccgutils.nim");
	result = addChar(result, 34);
	popFrame();
	return result;
}

static N_INLINE(NI, modInt)(NI a, NI b) {
	NI result;
	result = 0;
	{
		if (!(b == 0)) goto LA3;
		raiseDivByZero();
	}
	LA3: ;
	result = (NI32)(a % b);
	goto BeforeRet;
	BeforeRet: ;
	return result;
}

N_NIMCALL(trope126007*, makellvmstring_336606)(NimStringDesc* s) {
	trope126007* result;
	NimStringDesc* res;
	NI i_336620;
	NI HEX3Atmp_336630;
	NI TMP5255;
	NI res_336632;
	trope126007* LOC10;
	nimfr("makeLLVMString", "ccgutils.nim")
	result = 0;
	nimln(167, "ccgutils.nim");
	result = NIM_NIL;
	nimln(168, "ccgutils.nim");
	res = copyString(((NimStringDesc*) &TMP5254));
	i_336620 = 0;
	HEX3Atmp_336630 = 0;
	nimln(169, "ccgutils.nim");
	nimln(169, "ccgutils.nim");
	nimln(169, "ccgutils.nim");
	TMP5255 = subInt(s->Sup.len, 1);
	HEX3Atmp_336630 = (NI32)(TMP5255);
	nimln(1274, "system.nim");
	res_336632 = 0;
	nimln(1275, "system.nim");
	while (1) {
		nimln(1275, "system.nim");
		if (!(res_336632 <= HEX3Atmp_336630)) goto LA1;
		nimln(1274, "system.nim");
		i_336620 = res_336632;
		nimln(170, "ccgutils.nim");
		{
			NI TMP5256;
			NI TMP5257;
			trope126007* LOC6;
			nimln(170, "ccgutils.nim");
			nimln(170, "ccgutils.nim");
			nimln(170, "ccgutils.nim");
			TMP5256 = addInt(i_336620, 1);
			TMP5257 = modInt((NI32)(TMP5256), 64);
			if (!(((NI) ((NI32)(TMP5257))) == 0)) goto LA4;
			nimln(171, "ccgutils.nim");
			nimln(171, "ccgutils.nim");
			LOC6 = 0;
			LOC6 = torope_126058(res);
			app_126040(&result, LOC6);
			nimln(172, "ccgutils.nim");
			res = setLengthStr(res, 0);
		}
		LA4: ;
		nimln(173, "ccgutils.nim");
		if ((NU)(i_336620) > (NU)(s->Sup.len)) raiseIndexError();
		switch (((NU8)(s->data[i_336620]))) {
		case 0 ... 31:
		case 128 ... 255:
		case 34:
		case 92:
		{
			NimStringDesc* LOC8;
			nimln(175, "ccgutils.nim");
			res = addChar(res, 92);
			nimln(176, "ccgutils.nim");
			nimln(176, "ccgutils.nim");
			nimln(176, "ccgutils.nim");
			if ((NU)(i_336620) > (NU)(s->Sup.len)) raiseIndexError();
			LOC8 = 0;
			LOC8 = nsuToHex(((NI64) (((NU8)(s->data[i_336620])))), 2);
			res = resizeString(res, LOC8->Sup.len + 0);
appendString(res, LOC8);
		}
		break;
		default:
		{
			nimln(177, "ccgutils.nim");
			if ((NU)(i_336620) > (NU)(s->Sup.len)) raiseIndexError();
			res = addChar(res, s->data[i_336620]);
		}
		break;
		}
		nimln(1277, "system.nim");
		res_336632 = addInt(res_336632, 1);
	} LA1: ;
	nimln(178, "ccgutils.nim");
	res = resizeString(res, 4);
appendString(res, ((NimStringDesc*) &TMP5258));
	nimln(179, "ccgutils.nim");
	nimln(179, "ccgutils.nim");
	LOC10 = 0;
	LOC10 = torope_126058(res);
	app_126040(&result, LOC10);
	popFrame();
	return result;
}
N_NOINLINE(void, ccgutilsInit)(void) {
	nimfr("ccgutils", "ccgutils.nim")
	nimln(181, "ccgutils.nim");
	inittypetables_336199();
	popFrame();
}

N_NOINLINE(void, ccgutilsDatInit)(void) {
}

