/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct ttable127335 ttable127335;
typedef struct tkeyvaluepairseq127340 tkeyvaluepairseq127340;
typedef struct tkeyvaluepair127345 tkeyvaluepair127345;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct ttable214068 ttable214068;
typedef struct tkeyvaluepairseq214073 tkeyvaluepairseq214073;
typedef struct tkeyvaluepair214078 tkeyvaluepair214078;
typedef struct tcall214008 tcall214008;
typedef struct tsym168677 tsym168677;
typedef struct TY214019 TY214019;
typedef struct ttable214028 ttable214028;
typedef struct tkeyvaluepairseq214033 tkeyvaluepairseq214033;
typedef struct tkeyvaluepair214038 tkeyvaluepair214038;
typedef struct tidobj130009 tidobj130009;
typedef struct TNimObject TNimObject;
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
typedef struct TY168763 TY168763;
typedef struct tnodeseq168641 tnodeseq168641;
typedef struct tlistentry100011 tlistentry100011;
struct TGenericSeq {
NI len;
NI reserved;
};
typedef NIM_CHAR TY611[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY611 data;
};
struct tkeyvaluepair127345 {
NU8 Field0;
NimStringDesc* Field1;
NI32 Field2;
};
struct ttable127335 {
tkeyvaluepairseq127340* Data;
NI Counter;
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
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct tcall214008 {
tsym168677* Callee;
TY214019* Args;
};
struct tkeyvaluepair214078 {
NU8 Field0;
tcall214008 Field1;
NU8 Field2;
};
struct ttable214068 {
tkeyvaluepairseq214073* Data;
NI Counter;
};
struct tkeyvaluepair214038 {
NU8 Field0;
NI Field1;
NU8 Field2;
};
struct ttable214028 {
tkeyvaluepairseq214033* Data;
NI Counter;
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
struct tkeyvaluepairseq127340 {
  TGenericSeq Sup;
  tkeyvaluepair127345 data[SEQ_DECL_SIZE];
};
struct TY214019 {
  TGenericSeq Sup;
  NU8 data[SEQ_DECL_SIZE];
};
struct tkeyvaluepairseq214073 {
  TGenericSeq Sup;
  tkeyvaluepair214078 data[SEQ_DECL_SIZE];
};
struct tkeyvaluepairseq214033 {
  TGenericSeq Sup;
  tkeyvaluepair214038 data[SEQ_DECL_SIZE];
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
struct tnodeseq168641 {
  TGenericSeq Sup;
  tnode168647* data[SEQ_DECL_SIZE];
};
static N_INLINE(NIM_BOOL, mustrehash_108283)(NI length, NI counter);
N_NIMCALL(void, hiddenraiseassert_71620)(NimStringDesc* msg);
N_NIMCALL(NI, mulInt)(NI a, NI b);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NI, nexttry_108407)(NI h, NI maxhash);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP767)(void* p, NI op);
N_NIMCALL(void, TMP3010)(void* p, NI op);
N_NIMCALL(void, TMP3016)(void* p, NI op);
STRING_LITERAL(TMP349, "counter < length ", 17);
extern TFrame* frameptr_12027;
TNimType NTI127335; /* TTable */
TNimType NTI127345; /* TKeyValuePair */
TNimType NTI108005; /* TSlotEnum */
extern TNimType NTI143; /* string */
extern TNimType NTI111; /* int32 */
TNimType NTI127340; /* TKeyValuePairSeq */
extern TNimType NTI105; /* int */
TNimType NTI214068; /* TTable */
TNimType NTI214078; /* TKeyValuePair */
extern TNimType NTI214008; /* TCall */
extern TNimType NTI214006; /* TThreadOwner */
TNimType NTI214073; /* TKeyValuePairSeq */
TNimType NTI214028; /* TTable */
TNimType NTI214038; /* TKeyValuePair */
TNimType NTI214033; /* TKeyValuePairSeq */

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

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_12027;
	frameptr_12027 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_12027 = (*frameptr_12027).prev;
}

static N_INLINE(NIM_BOOL, mustrehash_108283)(NI length, NI counter) {
	NIM_BOOL result;
	NIM_BOOL LOC5;
	NI TMP350;
	NI TMP351;
	NI TMP352;
	nimfr("mustRehash", "tables.nim")
	result = 0;
	nimln(66, "tables.nim");
	{
		nimln(66, "tables.nim");
		nimln(66, "tables.nim");
		if (!!((counter < length))) goto LA3;
		nimln(66, "tables.nim");
		hiddenraiseassert_71620(((NimStringDesc*) &TMP349));
	}
	LA3: ;
	nimln(67, "tables.nim");
	nimln(67, "tables.nim");
	nimln(67, "tables.nim");
	nimln(67, "tables.nim");
	TMP350 = mulInt(length, 2);
	nimln(67, "tables.nim");
	TMP351 = mulInt(counter, 3);
	LOC5 = ((NI64)(TMP350) < (NI64)(TMP351));
	if (LOC5) goto LA6;
	nimln(67, "tables.nim");
	nimln(67, "tables.nim");
	TMP352 = subInt(length, counter);
	LOC5 = ((NI64)(TMP352) < 4);
	LA6: ;
	result = LOC5;
	popFrame();
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

static N_INLINE(NI, nexttry_108407)(NI h, NI maxhash) {
	NI result;
	NI TMP353;
	NI TMP354;
	nimfr("nextTry", "tables.nim")
	result = 0;
	nimln(70, "tables.nim");
	nimln(70, "tables.nim");
	nimln(70, "tables.nim");
	nimln(70, "tables.nim");
	TMP353 = mulInt(5, h);
	TMP354 = addInt((NI64)(TMP353), 1);
	result = (NI)((NI64)(TMP354) & maxhash);
	popFrame();
	return result;
}
N_NIMCALL(void, TMP767)(void* p, NI op) {
	tkeyvaluepairseq127340* a;
	NI LOC1;
	a = (tkeyvaluepairseq127340*)p;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Field1, op);
	}
}
N_NIMCALL(void, TMP3010)(void* p, NI op) {
	tkeyvaluepairseq214073* a;
	NI LOC1;
	a = (tkeyvaluepairseq214073*)p;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Field1.Callee, op);
	nimGCvisit((void*)a->data[LOC1].Field1.Args, op);
	}
}
N_NIMCALL(void, TMP3016)(void* p, NI op) {
	tkeyvaluepairseq214033* a;
	NI LOC1;
	a = (tkeyvaluepairseq214033*)p;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
}
N_NOINLINE(void, tablesInit)(void) {
	nimfr("tables", "tables.nim")
	popFrame();
}

N_NOINLINE(void, tablesDatInit)(void) {
static TNimNode* TMP762[2];
static TNimNode* TMP763[3];
static TNimNode* TMP764[3];
NI TMP766;
static char* NIM_CONST TMP765[3] = {
"seEmpty", 
"seFilled", 
"seDeleted"};
static TNimNode* TMP3003[2];
static TNimNode* TMP3004[3];
static TNimNode* TMP3014[2];
static TNimNode* TMP3015[3];
static TNimNode TMP345[25];
NTI127335.size = sizeof(ttable127335);
NTI127335.kind = 18;
NTI127335.base = 0;
NTI127335.flags = 2;
TMP762[0] = &TMP345[1];
NTI127345.size = sizeof(tkeyvaluepair127345);
NTI127345.kind = 18;
NTI127345.base = 0;
NTI127345.flags = 2;
TMP763[0] = &TMP345[3];
NTI108005.size = sizeof(NU8);
NTI108005.kind = 14;
NTI108005.base = 0;
NTI108005.flags = 3;
for (TMP766 = 0; TMP766 < 3; TMP766++) {
TMP345[TMP766+4].kind = 1;
TMP345[TMP766+4].offset = TMP766;
TMP345[TMP766+4].name = TMP765[TMP766];
TMP764[TMP766] = &TMP345[TMP766+4];
}
TMP345[7].len = 3; TMP345[7].kind = 2; TMP345[7].sons = &TMP764[0];
NTI108005.node = &TMP345[7];
TMP345[3].kind = 1;
TMP345[3].offset = offsetof(tkeyvaluepair127345, Field0);
TMP345[3].typ = (&NTI108005);
TMP345[3].name = "Field0";
TMP763[1] = &TMP345[8];
TMP345[8].kind = 1;
TMP345[8].offset = offsetof(tkeyvaluepair127345, Field1);
TMP345[8].typ = (&NTI143);
TMP345[8].name = "Field1";
TMP763[2] = &TMP345[9];
TMP345[9].kind = 1;
TMP345[9].offset = offsetof(tkeyvaluepair127345, Field2);
TMP345[9].typ = (&NTI111);
TMP345[9].name = "Field2";
TMP345[2].len = 3; TMP345[2].kind = 2; TMP345[2].sons = &TMP763[0];
NTI127345.node = &TMP345[2];
NTI127340.size = sizeof(tkeyvaluepairseq127340*);
NTI127340.kind = 24;
NTI127340.base = (&NTI127345);
NTI127340.flags = 2;
NTI127340.marker = TMP767;
TMP345[1].kind = 1;
TMP345[1].offset = offsetof(ttable127335, Data);
TMP345[1].typ = (&NTI127340);
TMP345[1].name = "data";
TMP762[1] = &TMP345[10];
TMP345[10].kind = 1;
TMP345[10].offset = offsetof(ttable127335, Counter);
TMP345[10].typ = (&NTI105);
TMP345[10].name = "counter";
TMP345[0].len = 2; TMP345[0].kind = 2; TMP345[0].sons = &TMP762[0];
NTI127335.node = &TMP345[0];
NTI214068.size = sizeof(ttable214068);
NTI214068.kind = 18;
NTI214068.base = 0;
NTI214068.flags = 2;
TMP3003[0] = &TMP345[12];
NTI214078.size = sizeof(tkeyvaluepair214078);
NTI214078.kind = 18;
NTI214078.base = 0;
NTI214078.flags = 2;
TMP3004[0] = &TMP345[14];
TMP345[14].kind = 1;
TMP345[14].offset = offsetof(tkeyvaluepair214078, Field0);
TMP345[14].typ = (&NTI108005);
TMP345[14].name = "Field0";
TMP3004[1] = &TMP345[15];
TMP345[15].kind = 1;
TMP345[15].offset = offsetof(tkeyvaluepair214078, Field1);
TMP345[15].typ = (&NTI214008);
TMP345[15].name = "Field1";
TMP3004[2] = &TMP345[16];
TMP345[16].kind = 1;
TMP345[16].offset = offsetof(tkeyvaluepair214078, Field2);
TMP345[16].typ = (&NTI214006);
TMP345[16].name = "Field2";
TMP345[13].len = 3; TMP345[13].kind = 2; TMP345[13].sons = &TMP3004[0];
NTI214078.node = &TMP345[13];
NTI214073.size = sizeof(tkeyvaluepairseq214073*);
NTI214073.kind = 24;
NTI214073.base = (&NTI214078);
NTI214073.flags = 2;
NTI214073.marker = TMP3010;
TMP345[12].kind = 1;
TMP345[12].offset = offsetof(ttable214068, Data);
TMP345[12].typ = (&NTI214073);
TMP345[12].name = "data";
TMP3003[1] = &TMP345[17];
TMP345[17].kind = 1;
TMP345[17].offset = offsetof(ttable214068, Counter);
TMP345[17].typ = (&NTI105);
TMP345[17].name = "counter";
TMP345[11].len = 2; TMP345[11].kind = 2; TMP345[11].sons = &TMP3003[0];
NTI214068.node = &TMP345[11];
NTI214028.size = sizeof(ttable214028);
NTI214028.kind = 18;
NTI214028.base = 0;
NTI214028.flags = 2;
TMP3014[0] = &TMP345[19];
NTI214038.size = sizeof(tkeyvaluepair214038);
NTI214038.kind = 18;
NTI214038.base = 0;
NTI214038.flags = 3;
TMP3015[0] = &TMP345[21];
TMP345[21].kind = 1;
TMP345[21].offset = offsetof(tkeyvaluepair214038, Field0);
TMP345[21].typ = (&NTI108005);
TMP345[21].name = "Field0";
TMP3015[1] = &TMP345[22];
TMP345[22].kind = 1;
TMP345[22].offset = offsetof(tkeyvaluepair214038, Field1);
TMP345[22].typ = (&NTI105);
TMP345[22].name = "Field1";
TMP3015[2] = &TMP345[23];
TMP345[23].kind = 1;
TMP345[23].offset = offsetof(tkeyvaluepair214038, Field2);
TMP345[23].typ = (&NTI214006);
TMP345[23].name = "Field2";
TMP345[20].len = 3; TMP345[20].kind = 2; TMP345[20].sons = &TMP3015[0];
NTI214038.node = &TMP345[20];
NTI214033.size = sizeof(tkeyvaluepairseq214033*);
NTI214033.kind = 24;
NTI214033.base = (&NTI214038);
NTI214033.flags = 2;
NTI214033.marker = TMP3016;
TMP345[19].kind = 1;
TMP345[19].offset = offsetof(ttable214028, Data);
TMP345[19].typ = (&NTI214033);
TMP345[19].name = "data";
TMP3014[1] = &TMP345[24];
TMP345[24].kind = 1;
TMP345[24].offset = offsetof(ttable214028, Counter);
TMP345[24].typ = (&NTI105);
TMP345[24].name = "counter";
TMP345[18].len = 2; TMP345[18].kind = 2; TMP345[18].sons = &TMP3014[0];
NTI214028.node = &TMP345[18];
}

