/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct tnode168647 tnode168647;
typedef struct ttype168681 ttype168681;
typedef struct tlineinfo127308 tlineinfo127308;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tsym168677 tsym168677;
typedef struct tident130015 tident130015;
typedef struct tnodeseq168641 tnodeseq168641;
typedef struct tinfocpu122445 tinfocpu122445;
typedef struct tidtable168693 tidtable168693;
typedef struct tidpairseq168691 tidpairseq168691;
typedef struct tidpair168689 tidpair168689;
typedef struct tidobj130009 tidobj130009;
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
typedef struct ttypeseq168679 ttypeseq168679;
typedef struct tloc168661 tloc168661;
typedef struct trope125007 trope125007;
typedef struct TY168771 TY168771;
typedef struct tinstantiation168667 tinstantiation168667;
typedef struct tscope168671 tscope168671;
typedef struct tstrtable168651 tstrtable168651;
typedef struct tsymseq168649 tsymseq168649;
typedef struct tlib168665 tlib168665;
typedef struct tbasechunk21641 tbasechunk21641;
typedef struct tfreecell21633 tfreecell21633;
typedef struct TY168763 TY168763;
typedef struct tlistentry100011 tlistentry100011;
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
struct tinfocpu122445 {
NimStringDesc* Field0;
NI Field1;
NU8 Field2;
NI Field3;
NI Field4;
};
typedef tinfocpu122445 TY122460[14];
struct tidpair168689 {
tidobj130009* Key;
TNimObject* Val;
};
struct tidtable168693 {
NI Counter;
tidpairseq168691* Data;
};
typedef tidtable168693 TY335190[52];
typedef ttype168681* TY211039[52];
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
struct tidobj130009 {
  TNimObject Sup;
NI Id;
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
struct tstrtable168651 {
NI Counter;
tsymseq168649* Data;
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
struct trope125007 {
  TNimObject Sup;
trope125007* Left;
trope125007* Right;
NI Length;
NimStringDesc* Data;
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
struct tfreecell21633 {
tfreecell21633* Next;
NI Zerofield;
};
struct tnodeseq168641 {
  TGenericSeq Sup;
  tnode168647* data[SEQ_DECL_SIZE];
};
struct tidpairseq168691 {
  TGenericSeq Sup;
  tidpair168689 data[SEQ_DECL_SIZE];
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
N_NIMCALL(tnode168647*, getpragmastmt_335008)(tnode168647* n, NU8 w);
static N_INLINE(NI, len_169082)(tnode168647* n);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(tnode168647*, HEX5BHEX5D_169276)(tnode168647* n, NI i);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(NU8, whichpragma_194848)(tnode168647* n);
N_NIMCALL(NIM_BOOL, stmtscontainpragma_335074)(tnode168647* n, NU8 w);
N_NIMCALL(NI64, hashstring_335092)(NimStringDesc* s);
N_NIMCALL(void, inittypetables_335199)(void);
N_NIMCALL(void, initidtable_168942)(tidtable168693* x);
N_NIMCALL(void, resetcaches_335244)(void);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell38846*, usrtocell_42243)(void* usr);
static N_INLINE(void, rtladdzct_43402)(tcell38846* c);
N_NOINLINE(void, addzct_42215)(tcellseq38862* s, tcell38846* c);
N_NIMCALL(ttype168681*, getuniquetype_335401)(ttype168681* key);
N_NIMCALL(void, internalerror_128702)(NimStringDesc* errmsg);
static N_INLINE(ttype168681*, lastson_169015)(ttype168681* n);
static N_INLINE(NI, sonslen_169007)(ttype168681* n);
N_NIMCALL(NIM_BOOL, idtablehasobjectaskey_175154)(tidtable168693 t, tidobj130009* key);
N_NIMCALL(void, chckObj)(TNimType* obj, TNimType* subclass);
N_NIMCALL(NIM_BOOL, samebackendtype_200846)(ttype168681* x, ttype168681* y);
N_NIMCALL(void, idtableput_175147)(tidtable168693* t, tidobj130009* key, TNimObject* val);
N_NIMCALL(TNimObject*, idtableget_175137)(tidtable168693 t, tidobj130009* key);
N_NIMCALL(NIM_BOOL, sametype_200837)(ttype168681* x, ttype168681* y);
N_NIMCALL(TNimObject*, tablegettype_335550)(tidtable168693 tab, ttype168681* key);
N_NIMCALL(NimStringDesc*, makesinglelinecstring_335596)(NimStringDesc* s);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, tocchar_127440)(NIM_CHAR c);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(trope125007*, makellvmstring_335606)(NimStringDesc* s);
static N_INLINE(NI, modInt)(NI a, NI b);
N_NOINLINE(void, raiseDivByZero)(void);
N_NIMCALL(void, app_125040)(trope125007** a, trope125007* b);
N_NIMCALL(trope125007*, torope_125058)(NimStringDesc* s);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newlen);
N_NIMCALL(NimStringDesc*, nsuToHex)(NI64 x, NI len);
static NIM_CONST TY168850 TMP5239 = {
0xEC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP5240, "sons", 4);
extern NIM_CONST TY122460 cpu_122459;
STRING_LITERAL(TMP5243, "value expected, but got a type", 30);
STRING_LITERAL(TMP5244, "GetUniqueType", 13);
STRING_LITERAL(TMP5246, "\"", 1);
STRING_LITERAL(TMP5247, "c\"", 2);
STRING_LITERAL(TMP5251, "\\00\"", 4);
extern TFrame* frameptr_12027;
extern NU8 targetcpu_122560;
TY335190 gtypetable_335192;
TY211039 gcanonicaltypes_335195;
extern tgcheap40816 gch_40842;
extern TNimType NTI168681; /* TType */

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_12027;
	frameptr_12027 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_12027 = (*frameptr_12027).prev;
}

static N_INLINE(NI, len_169082)(tnode168647* n) {
	NI result;
	nimfr("len", "ast.nim")
	result = 0;
	nimln(852, "ast.nim");
	{
		nimln(852, "ast.nim");
		if (((TMP5239[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP5240));
		if (!(*n).kindU.S6.Sons == 0) goto LA3;
		nimln(852, "ast.nim");
		result = 0;
	}
	goto LA1;
	LA3: ;
	{
		nimln(853, "ast.nim");
		nimln(853, "ast.nim");
		if (((TMP5239[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP5240));
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

static N_INLINE(tnode168647*, HEX5BHEX5D_169276)(tnode168647* n, NI i) {
	tnode168647* result;
	nimfr("[]", "ast.nim")
	result = 0;
	nimln(866, "ast.nim");
	if (((TMP5239[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP5240));
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

N_NIMCALL(tnode168647*, getpragmastmt_335008)(tnode168647* n, NU8 w) {
	tnode168647* result;
	nimfr("getPragmaStmt", "ccgutils.nim")
	result = 0;
	nimln(17, "ccgutils.nim");
	switch ((*n).Kind) {
	case ((NU8) 114):
	{
		NI i_335028;
		NI HEX3Atmp_335062;
		NI LOC2;
		NI res_335064;
		i_335028 = 0;
		HEX3Atmp_335062 = 0;
		nimln(19, "ccgutils.nim");
		nimln(19, "ccgutils.nim");
		nimln(19, "ccgutils.nim");
		LOC2 = len_169082(n);
		HEX3Atmp_335062 = subInt(LOC2, 1);
		nimln(1281, "system.nim");
		res_335064 = 0;
		nimln(1282, "system.nim");
		while (1) {
			tnode168647* LOC4;
			nimln(1282, "system.nim");
			if (!(res_335064 <= HEX3Atmp_335062)) goto LA3;
			nimln(1281, "system.nim");
			i_335028 = res_335064;
			nimln(20, "ccgutils.nim");
			nimln(20, "ccgutils.nim");
			LOC4 = 0;
			LOC4 = HEX5BHEX5D_169276(n, i_335028);
			result = getpragmastmt_335008(LOC4, w);
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
			res_335064 = addInt(res_335064, 1);
		} LA3: ;
	}
	break;
	case ((NU8) 90):
	{
		NI i_335055;
		NI HEX3Atmp_335066;
		NI LOC10;
		NI res_335068;
		i_335055 = 0;
		HEX3Atmp_335066 = 0;
		nimln(23, "ccgutils.nim");
		nimln(23, "ccgutils.nim");
		nimln(23, "ccgutils.nim");
		LOC10 = len_169082(n);
		HEX3Atmp_335066 = subInt(LOC10, 1);
		nimln(1281, "system.nim");
		res_335068 = 0;
		nimln(1282, "system.nim");
		while (1) {
			nimln(1282, "system.nim");
			if (!(res_335068 <= HEX3Atmp_335066)) goto LA11;
			nimln(1281, "system.nim");
			i_335055 = res_335068;
			nimln(24, "ccgutils.nim");
			{
				tnode168647* LOC14;
				NU8 LOC15;
				nimln(24, "ccgutils.nim");
				nimln(24, "ccgutils.nim");
				nimln(24, "ccgutils.nim");
				LOC14 = 0;
				LOC14 = HEX5BHEX5D_169276(n, i_335055);
				LOC15 = whichpragma_194848(LOC14);
				if (!(LOC15 == w)) goto LA16;
				nimln(24, "ccgutils.nim");
				nimln(24, "ccgutils.nim");
				result = HEX5BHEX5D_169276(n, i_335055);
				goto BeforeRet;
			}
			LA16: ;
			nimln(1284, "system.nim");
			res_335068 = addInt(res_335068, 1);
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

N_NIMCALL(NIM_BOOL, stmtscontainpragma_335074)(tnode168647* n, NU8 w) {
	NIM_BOOL result;
	tnode168647* LOC1;
	nimfr("stmtsContainPragma", "ccgutils.nim")
	result = 0;
	nimln(28, "ccgutils.nim");
	nimln(684, "system.nim");
	nimln(684, "system.nim");
	nimln(28, "ccgutils.nim");
	LOC1 = 0;
	LOC1 = getpragmastmt_335008(n, w);
	result = !((LOC1 == NIM_NIL));
	popFrame();
	return result;
}

N_NIMCALL(NI64, hashstring_335092)(NimStringDesc* s) {
	NI64 result;
	nimfr("hashString", "ccgutils.nim")
	result = 0;
	nimln(32, "ccgutils.nim");
	{
		NI64 b;
		NI i_335105;
		NI HEX3Atmp_335177;
		NI TMP5241;
		NI res_335179;
		nimln(32, "ccgutils.nim");
		if (targetcpu_122560 < 1 || targetcpu_122560 > 14) raiseIndexError();
		if (!(cpu_122459[(targetcpu_122560)- 1].Field4 == 64)) goto LA3;
		nimln(35, "ccgutils.nim");
		b = 0;
		i_335105 = 0;
		HEX3Atmp_335177 = 0;
		nimln(36, "ccgutils.nim");
		nimln(36, "ccgutils.nim");
		nimln(36, "ccgutils.nim");
		TMP5241 = subInt(s->Sup.len, 1);
		HEX3Atmp_335177 = (NI32)(TMP5241);
		nimln(1274, "system.nim");
		res_335179 = 0;
		nimln(1275, "system.nim");
		while (1) {
			nimln(1275, "system.nim");
			if (!(res_335179 <= HEX3Atmp_335177)) goto LA5;
			nimln(1274, "system.nim");
			i_335105 = res_335179;
			nimln(37, "ccgutils.nim");
			nimln(37, "ccgutils.nim");
			nimln(37, "ccgutils.nim");
			if ((NU)(i_335105) > (NU)(s->Sup.len)) raiseIndexError();
			b = (NI64)((NU64)(b) + (NU64)(((NI64) (((NU8)(s->data[i_335105]))))));
			nimln(38, "ccgutils.nim");
			nimln(38, "ccgutils.nim");
			nimln(38, "ccgutils.nim");
			b = (NI64)((NU64)(b) + (NU64)((NI64)((NU64)(b) << (NU64)(10))));
			nimln(39, "ccgutils.nim");
			nimln(39, "ccgutils.nim");
			nimln(39, "ccgutils.nim");
			b = (NI64)(b ^ (NI64)((NU64)(b) >> (NU64)(6)));
			nimln(1277, "system.nim");
			res_335179 = addInt(res_335179, 1);
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
		NI i_335121;
		NI HEX3Atmp_335182;
		NI TMP5242;
		NI res_335184;
		nimln(45, "ccgutils.nim");
		a = ((NI32) 0);
		i_335121 = 0;
		HEX3Atmp_335182 = 0;
		nimln(46, "ccgutils.nim");
		nimln(46, "ccgutils.nim");
		nimln(46, "ccgutils.nim");
		TMP5242 = subInt(s->Sup.len, 1);
		HEX3Atmp_335182 = (NI32)(TMP5242);
		nimln(1274, "system.nim");
		res_335184 = 0;
		nimln(1275, "system.nim");
		while (1) {
			nimln(1275, "system.nim");
			if (!(res_335184 <= HEX3Atmp_335182)) goto LA7;
			nimln(1274, "system.nim");
			i_335121 = res_335184;
			nimln(47, "ccgutils.nim");
			nimln(47, "ccgutils.nim");
			nimln(47, "ccgutils.nim");
			if ((NU)(i_335121) > (NU)(s->Sup.len)) raiseIndexError();
			a = (NI32)((NU32)(a) + (NU32)(((NI32) (((NU8)(s->data[i_335121]))))));
			nimln(48, "ccgutils.nim");
			nimln(48, "ccgutils.nim");
			nimln(48, "ccgutils.nim");
			a = (NI32)((NU32)(a) + (NU32)((NI32)((NU32)(a) << (NU32)(((NI32) 10)))));
			nimln(49, "ccgutils.nim");
			nimln(49, "ccgutils.nim");
			nimln(49, "ccgutils.nim");
			a = (NI32)(a ^ (NI32)((NU32)(a) >> (NU32)(((NI32) 6))));
			nimln(1277, "system.nim");
			res_335184 = addInt(res_335184, 1);
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

N_NIMCALL(void, inittypetables_335199)(void) {
	NU8 i_335234;
	NU8 res_335239;
	nimfr("initTypeTables", "ccgutils.nim")
	i_335234 = 0;
	nimln(1274, "system.nim");
	res_335239 = ((NU8) 0);
	nimln(1275, "system.nim");
	while (1) {
		nimln(1275, "system.nim");
		if (!(res_335239 <= ((NU8) 51))) goto LA1;
		nimln(1274, "system.nim");
		i_335234 = res_335239;
		nimln(60, "ccgutils.nim");
		initidtable_168942(&gtypetable_335192[(i_335234)- 0]);
		nimln(1277, "system.nim");
		res_335239 = addInt(res_335239, 1);
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

N_NIMCALL(void, resetcaches_335244)(void) {
	NU8 i_335253;
	NU8 res_335255;
	nimfr("resetCaches", "ccgutils.nim")
	nimln(64, "ccgutils.nim");
	inittypetables_335199();
	i_335253 = 0;
	nimln(1281, "system.nim");
	res_335255 = ((NU8) 0);
	nimln(1282, "system.nim");
	while (1) {
		nimln(1282, "system.nim");
		if (!(res_335255 <= ((NU8) 51))) goto LA1;
		nimln(1281, "system.nim");
		i_335253 = res_335255;
		nimln(66, "ccgutils.nim");
		asgnRefNoCycle((void**) &gcanonicaltypes_335195[(i_335253)- 0], NIM_NIL);
		nimln(1284, "system.nim");
		res_335255 = addInt(res_335255, 1);
	} LA1: ;
	popFrame();
}

static N_INLINE(NI, sonslen_169007)(ttype168681* n) {
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

static N_INLINE(ttype168681*, lastson_169015)(ttype168681* n) {
	ttype168681* result;
	NI LOC1;
	NI TMP5245;
	nimfr("lastSon", "ast.nim")
	result = 0;
	nimln(1290, "ast.nim");
	nimln(1290, "ast.nim");
	nimln(1290, "ast.nim");
	LOC1 = sonslen_169007(n);
	TMP5245 = subInt(LOC1, 1);
	if ((NU)((NI32)(TMP5245)) >= (NU)((*n).Sons->Sup.len)) raiseIndexError();
	result = (*n).Sons->data[(NI32)(TMP5245)];
	popFrame();
	return result;
}

N_NIMCALL(ttype168681*, getuniquetype_335401)(ttype168681* key) {
	ttype168681* result;
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
		result = gcanonicaltypes_335195[(k)- 0];
		nimln(86, "ccgutils.nim");
		{
			nimln(86, "ccgutils.nim");
			if (!(result == NIM_NIL)) goto LA9;
			nimln(87, "ccgutils.nim");
			asgnRefNoCycle((void**) &gcanonicaltypes_335195[(k)- 0], key);
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
		internalerror_128702(((NimStringDesc*) &TMP5243));
	}
	break;
	case ((NU8) 12):
	{
		nimln(92, "ccgutils.nim");
		internalerror_128702(((NimStringDesc*) &TMP5244));
	}
	break;
	case ((NU8) 11):
	case ((NU8) 13):
	case ((NU8) 15):
	case ((NU8) 47):
	case ((NU8) 46):
	case ((NU8) 49):
	{
		ttype168681* LOC14;
		nimln(94, "ccgutils.nim");
		nimln(94, "ccgutils.nim");
		LOC14 = 0;
		LOC14 = lastson_169015(key);
		result = getuniquetype_335401(LOC14);
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
		NI h_335436;
		NI HEX3Atmp_335533;
		NI res_335535;
		nimln(105, "ccgutils.nim");
		{
			NIM_BOOL LOC18;
			nimln(105, "ccgutils.nim");
			LOC18 = idtablehasobjectaskey_175154(gtypetable_335192[(k)- 0], &key->Sup);
			if (!LOC18) goto LA19;
			nimln(105, "ccgutils.nim");
			nimln(105, "ccgutils.nim");
			result = key;
			goto BeforeRet;
		}
		LA19: ;
		h_335436 = 0;
		HEX3Atmp_335533 = 0;
		nimln(106, "ccgutils.nim");
		nimln(106, "ccgutils.nim");
		HEX3Atmp_335533 = (gtypetable_335192[(k)- 0].Data->Sup.len-1);
		nimln(1274, "system.nim");
		res_335535 = 0;
		nimln(1275, "system.nim");
		while (1) {
			ttype168681* t;
			nimln(1275, "system.nim");
			if (!(res_335535 <= HEX3Atmp_335533)) goto LA21;
			nimln(1274, "system.nim");
			h_335436 = res_335535;
			nimln(107, "ccgutils.nim");
			if ((NU)(h_335436) >= (NU)(gtypetable_335192[(k)- 0].Data->Sup.len)) raiseIndexError();
			if (gtypetable_335192[(k)- 0].Data->data[h_335436].Key) chckObj((*gtypetable_335192[(k)- 0].Data->data[h_335436].Key).Sup.m_type, (&NTI168681));
			t = ((ttype168681*) (gtypetable_335192[(k)- 0].Data->data[h_335436].Key));
			nimln(108, "ccgutils.nim");
			{
				NIM_BOOL LOC24;
				nimln(108, "ccgutils.nim");
				nimln(684, "system.nim");
				nimln(684, "system.nim");
				LOC24 = !((t == NIM_NIL));
				if (!(LOC24)) goto LA25;
				nimln(108, "ccgutils.nim");
				LOC24 = samebackendtype_200846(t, key);
				LA25: ;
				if (!LOC24) goto LA26;
				nimln(109, "ccgutils.nim");
				nimln(109, "ccgutils.nim");
				result = t;
				goto BeforeRet;
			}
			LA26: ;
			nimln(1277, "system.nim");
			res_335535 = addInt(res_335535, 1);
		} LA21: ;
		nimln(110, "ccgutils.nim");
		idtableput_175147(&gtypetable_335192[(k)- 0], &key->Sup, &key->Sup.Sup);
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
			LOC33 = idtableget_175137(gtypetable_335192[(k)- 0], &key->Sup);
			if (LOC33) chckObj((*LOC33).m_type, (&NTI168681));
			result = ((ttype168681*) (LOC33));
			nimln(116, "ccgutils.nim");
			{
				nimln(116, "ccgutils.nim");
				if (!(result == NIM_NIL)) goto LA36;
				nimln(117, "ccgutils.nim");
				idtableput_175147(&gtypetable_335192[(k)- 0], &key->Sup, &key->Sup.Sup);
				nimln(118, "ccgutils.nim");
				result = key;
			}
			LA36: ;
		}
		goto LA29;
		LA31: ;
		{
			NI h_335479;
			NI HEX3Atmp_335537;
			NI res_335539;
			nimln(121, "ccgutils.nim");
			{
				NIM_BOOL LOC41;
				nimln(121, "ccgutils.nim");
				LOC41 = idtablehasobjectaskey_175154(gtypetable_335192[(k)- 0], &key->Sup);
				if (!LOC41) goto LA42;
				nimln(121, "ccgutils.nim");
				nimln(121, "ccgutils.nim");
				result = key;
				goto BeforeRet;
			}
			LA42: ;
			h_335479 = 0;
			HEX3Atmp_335537 = 0;
			nimln(122, "ccgutils.nim");
			nimln(122, "ccgutils.nim");
			HEX3Atmp_335537 = (gtypetable_335192[(k)- 0].Data->Sup.len-1);
			nimln(1274, "system.nim");
			res_335539 = 0;
			nimln(1275, "system.nim");
			while (1) {
				ttype168681* t;
				nimln(1275, "system.nim");
				if (!(res_335539 <= HEX3Atmp_335537)) goto LA44;
				nimln(1274, "system.nim");
				h_335479 = res_335539;
				nimln(123, "ccgutils.nim");
				if ((NU)(h_335479) >= (NU)(gtypetable_335192[(k)- 0].Data->Sup.len)) raiseIndexError();
				if (gtypetable_335192[(k)- 0].Data->data[h_335479].Key) chckObj((*gtypetable_335192[(k)- 0].Data->data[h_335479].Key).Sup.m_type, (&NTI168681));
				t = ((ttype168681*) (gtypetable_335192[(k)- 0].Data->data[h_335479].Key));
				nimln(124, "ccgutils.nim");
				{
					NIM_BOOL LOC47;
					nimln(124, "ccgutils.nim");
					nimln(684, "system.nim");
					nimln(684, "system.nim");
					LOC47 = !((t == NIM_NIL));
					if (!(LOC47)) goto LA48;
					nimln(124, "ccgutils.nim");
					LOC47 = sametype_200837(t, key);
					LA48: ;
					if (!LOC47) goto LA49;
					nimln(125, "ccgutils.nim");
					nimln(125, "ccgutils.nim");
					result = t;
					goto BeforeRet;
				}
				LA49: ;
				nimln(1277, "system.nim");
				res_335539 = addInt(res_335539, 1);
			} LA44: ;
			nimln(126, "ccgutils.nim");
			idtableput_175147(&gtypetable_335192[(k)- 0], &key->Sup, &key->Sup.Sup);
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
		LOC52 = idtableget_175137(gtypetable_335192[(k)- 0], &key->Sup);
		if (LOC52) chckObj((*LOC52).m_type, (&NTI168681));
		result = ((ttype168681*) (LOC52));
		nimln(130, "ccgutils.nim");
		{
			nimln(130, "ccgutils.nim");
			if (!(result == NIM_NIL)) goto LA55;
			nimln(131, "ccgutils.nim");
			idtableput_175147(&gtypetable_335192[(k)- 0], &key->Sup, &key->Sup.Sup);
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
			NI h_335519;
			NI HEX3Atmp_335541;
			NI res_335543;
			nimln(139, "ccgutils.nim");
			{
				NIM_BOOL LOC65;
				nimln(139, "ccgutils.nim");
				LOC65 = idtablehasobjectaskey_175154(gtypetable_335192[(k)- 0], &key->Sup);
				if (!LOC65) goto LA66;
				nimln(139, "ccgutils.nim");
				nimln(139, "ccgutils.nim");
				result = key;
				goto BeforeRet;
			}
			LA66: ;
			h_335519 = 0;
			HEX3Atmp_335541 = 0;
			nimln(140, "ccgutils.nim");
			nimln(140, "ccgutils.nim");
			HEX3Atmp_335541 = (gtypetable_335192[(k)- 0].Data->Sup.len-1);
			nimln(1274, "system.nim");
			res_335543 = 0;
			nimln(1275, "system.nim");
			while (1) {
				ttype168681* t;
				nimln(1275, "system.nim");
				if (!(res_335543 <= HEX3Atmp_335541)) goto LA68;
				nimln(1274, "system.nim");
				h_335519 = res_335543;
				nimln(141, "ccgutils.nim");
				if ((NU)(h_335519) >= (NU)(gtypetable_335192[(k)- 0].Data->Sup.len)) raiseIndexError();
				if (gtypetable_335192[(k)- 0].Data->data[h_335519].Key) chckObj((*gtypetable_335192[(k)- 0].Data->data[h_335519].Key).Sup.m_type, (&NTI168681));
				t = ((ttype168681*) (gtypetable_335192[(k)- 0].Data->data[h_335519].Key));
				nimln(142, "ccgutils.nim");
				{
					NIM_BOOL LOC71;
					nimln(142, "ccgutils.nim");
					nimln(684, "system.nim");
					nimln(684, "system.nim");
					LOC71 = !((t == NIM_NIL));
					if (!(LOC71)) goto LA72;
					nimln(142, "ccgutils.nim");
					LOC71 = samebackendtype_200846(t, key);
					LA72: ;
					if (!LOC71) goto LA73;
					nimln(143, "ccgutils.nim");
					nimln(143, "ccgutils.nim");
					result = t;
					goto BeforeRet;
				}
				LA73: ;
				nimln(1277, "system.nim");
				res_335543 = addInt(res_335543, 1);
			} LA68: ;
			nimln(144, "ccgutils.nim");
			idtableput_175147(&gtypetable_335192[(k)- 0], &key->Sup, &key->Sup.Sup);
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

N_NIMCALL(TNimObject*, tablegettype_335550)(tidtable168693 tab, ttype168681* key) {
	TNimObject* result;
	nimfr("TableGetType", "ccgutils.nim")
	result = 0;
	nimln(149, "ccgutils.nim");
	result = idtableget_175137(tab, &key->Sup);
	nimln(150, "ccgutils.nim");
	{
		NIM_BOOL LOC3;
		NI h_335576;
		NI HEX3Atmp_335589;
		NI res_335591;
		nimln(150, "ccgutils.nim");
		nimln(150, "ccgutils.nim");
		LOC3 = (result == NIM_NIL);
		if (!(LOC3)) goto LA4;
		nimln(692, "system.nim");
		LOC3 = (0 < tab.Counter);
		LA4: ;
		if (!LOC3) goto LA5;
		h_335576 = 0;
		HEX3Atmp_335589 = 0;
		nimln(153, "ccgutils.nim");
		nimln(153, "ccgutils.nim");
		HEX3Atmp_335589 = (tab.Data->Sup.len-1);
		nimln(1274, "system.nim");
		res_335591 = 0;
		nimln(1275, "system.nim");
		while (1) {
			ttype168681* t;
			nimln(1275, "system.nim");
			if (!(res_335591 <= HEX3Atmp_335589)) goto LA7;
			nimln(1274, "system.nim");
			h_335576 = res_335591;
			nimln(154, "ccgutils.nim");
			if ((NU)(h_335576) >= (NU)(tab.Data->Sup.len)) raiseIndexError();
			if (tab.Data->data[h_335576].Key) chckObj((*tab.Data->data[h_335576].Key).Sup.m_type, (&NTI168681));
			t = ((ttype168681*) (tab.Data->data[h_335576].Key));
			nimln(155, "ccgutils.nim");
			{
				nimln(684, "system.nim");
				nimln(684, "system.nim");
				if (!!((t == NIM_NIL))) goto LA10;
				nimln(156, "ccgutils.nim");
				{
					NIM_BOOL LOC14;
					nimln(156, "ccgutils.nim");
					LOC14 = sametype_200837(t, key);
					if (!LOC14) goto LA15;
					nimln(157, "ccgutils.nim");
					nimln(157, "ccgutils.nim");
					if ((NU)(h_335576) >= (NU)(tab.Data->Sup.len)) raiseIndexError();
					result = tab.Data->data[h_335576].Val;
					goto BeforeRet;
				}
				LA15: ;
			}
			LA10: ;
			nimln(1277, "system.nim");
			res_335591 = addInt(res_335591, 1);
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

N_NIMCALL(NimStringDesc*, makesinglelinecstring_335596)(NimStringDesc* s) {
	NimStringDesc* result;
	NIM_CHAR c_335600;
	NI i_335602;
	nimfr("makeSingleLineCString", "ccgutils.nim")
	result = 0;
	nimln(160, "ccgutils.nim");
	result = copyString(((NimStringDesc*) &TMP5246));
	c_335600 = 0;
	nimln(1373, "system.nim");
	i_335602 = 0;
	nimln(1374, "system.nim");
	while (1) {
		NimStringDesc* LOC2;
		nimln(1374, "system.nim");
		nimln(1374, "system.nim");
		if (!(i_335602 < s->Sup.len)) goto LA1;
		nimln(1375, "system.nim");
		if ((NU)(i_335602) > (NU)(s->Sup.len)) raiseIndexError();
		c_335600 = s->data[i_335602];
		nimln(162, "ccgutils.nim");
		nimln(162, "ccgutils.nim");
		LOC2 = 0;
		LOC2 = tocchar_127440(c_335600);
		result = resizeString(result, LOC2->Sup.len + 0);
appendString(result, LOC2);
		nimln(1376, "system.nim");
		i_335602 = addInt(i_335602, 1);
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

N_NIMCALL(trope125007*, makellvmstring_335606)(NimStringDesc* s) {
	trope125007* result;
	NimStringDesc* res;
	NI i_335620;
	NI HEX3Atmp_335630;
	NI TMP5248;
	NI res_335632;
	trope125007* LOC10;
	nimfr("makeLLVMString", "ccgutils.nim")
	result = 0;
	nimln(167, "ccgutils.nim");
	result = NIM_NIL;
	nimln(168, "ccgutils.nim");
	res = copyString(((NimStringDesc*) &TMP5247));
	i_335620 = 0;
	HEX3Atmp_335630 = 0;
	nimln(169, "ccgutils.nim");
	nimln(169, "ccgutils.nim");
	nimln(169, "ccgutils.nim");
	TMP5248 = subInt(s->Sup.len, 1);
	HEX3Atmp_335630 = (NI32)(TMP5248);
	nimln(1274, "system.nim");
	res_335632 = 0;
	nimln(1275, "system.nim");
	while (1) {
		nimln(1275, "system.nim");
		if (!(res_335632 <= HEX3Atmp_335630)) goto LA1;
		nimln(1274, "system.nim");
		i_335620 = res_335632;
		nimln(170, "ccgutils.nim");
		{
			NI TMP5249;
			NI TMP5250;
			trope125007* LOC6;
			nimln(170, "ccgutils.nim");
			nimln(170, "ccgutils.nim");
			nimln(170, "ccgutils.nim");
			TMP5249 = addInt(i_335620, 1);
			TMP5250 = modInt((NI32)(TMP5249), 64);
			if (!(((NI) ((NI32)(TMP5250))) == 0)) goto LA4;
			nimln(171, "ccgutils.nim");
			nimln(171, "ccgutils.nim");
			LOC6 = 0;
			LOC6 = torope_125058(res);
			app_125040(&result, LOC6);
			nimln(172, "ccgutils.nim");
			res = setLengthStr(res, 0);
		}
		LA4: ;
		nimln(173, "ccgutils.nim");
		if ((NU)(i_335620) > (NU)(s->Sup.len)) raiseIndexError();
		switch (((NU8)(s->data[i_335620]))) {
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
			if ((NU)(i_335620) > (NU)(s->Sup.len)) raiseIndexError();
			LOC8 = 0;
			LOC8 = nsuToHex(((NI64) (((NU8)(s->data[i_335620])))), 2);
			res = resizeString(res, LOC8->Sup.len + 0);
appendString(res, LOC8);
		}
		break;
		default:
		{
			nimln(177, "ccgutils.nim");
			if ((NU)(i_335620) > (NU)(s->Sup.len)) raiseIndexError();
			res = addChar(res, s->data[i_335620]);
		}
		break;
		}
		nimln(1277, "system.nim");
		res_335632 = addInt(res_335632, 1);
	} LA1: ;
	nimln(178, "ccgutils.nim");
	res = resizeString(res, 4);
appendString(res, ((NimStringDesc*) &TMP5251));
	nimln(179, "ccgutils.nim");
	nimln(179, "ccgutils.nim");
	LOC10 = 0;
	LOC10 = torope_125058(res);
	app_125040(&result, LOC10);
	popFrame();
	return result;
}
N_NOINLINE(void, ccgutilsInit)(void) {
	nimfr("ccgutils", "ccgutils.nim")
	nimln(181, "ccgutils.nim");
	inittypetables_335199();
	popFrame();
}

N_NOINLINE(void, ccgutilsDatInit)(void) {
}

