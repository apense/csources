/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <stdio.h>
typedef struct tnode173647 tnode173647;
typedef struct tparser187203 tparser187203;
typedef struct ttype173681 ttype173681;
typedef struct tlineinfo131308 tlineinfo131308;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tsym173677 tsym173677;
typedef struct tident134015 tident134015;
typedef struct tnodeseq173641 tnodeseq173641;
typedef struct tlexer166168 tlexer166168;
typedef struct tbaselexer164018 tbaselexer164018;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tllstream163204 tllstream163204;
typedef struct ttoken166166 ttoken166166;
typedef struct tidobj134009 tidobj134009;
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
struct tbaselexer164018 {
  TNimObject Sup;
NI Bufpos;
NCSTRING Buf;
NI Buflen;
tllstream163204* Stream;
NI Linenumber;
NI Sentinel;
NI Linestart;
};
struct tlexer166168 {
  tbaselexer164018 Sup;
NI32 Fileidx;
NI Indentahead;
};
struct ttoken166166 {
NU8 Toktype;
NI Indent;
tident134015* Ident;
NI64 Inumber;
NF64 Fnumber;
NU8 Base;
NimStringDesc* Literal;
NI Line;
NI Col;
};
struct tparser187203 {
NI Currind;
NIM_BOOL Firsttok;
tlexer166168 Lex;
ttoken166166 Tok;
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
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
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
N_NIMCALL(tnode173647*, parseall_190004)(tparser187203* p);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(tnode173647*, parsetoplevelstmt_190011)(tparser187203* p);
extern TFrame* frameptr_12027;

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_12027;
	frameptr_12027 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_12027 = (*frameptr_12027).prev;
}

N_NIMCALL(tnode173647*, parseall_190004)(tparser187203* p) {
	tnode173647* result;
	nimfr("ParseAll", "pbraces.nim")
	result = 0;
	nimln(14, "pbraces.nim");
	result = NIM_NIL;
	popFrame();
	return result;
}

N_NIMCALL(tnode173647*, parsetoplevelstmt_190011)(tparser187203* p) {
	tnode173647* result;
	nimfr("parseTopLevelStmt", "pbraces.nim")
	result = 0;
	nimln(17, "pbraces.nim");
	result = NIM_NIL;
	popFrame();
	return result;
}
N_NOINLINE(void, pbracesInit)(void) {
	nimfr("pbraces", "pbraces.nim")
	popFrame();
}

N_NOINLINE(void, pbracesDatInit)(void) {
}

