/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <stdio.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tnode169647 tnode169647;
typedef struct tparsers194026 tparsers194026;
typedef struct tparser183203 tparser183203;
typedef struct tlexer162168 tlexer162168;
typedef struct tbaselexer160018 tbaselexer160018;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tllstream159204 tllstream159204;
typedef struct ttoken162166 ttoken162166;
typedef struct tident131015 tident131015;
typedef struct tidobj131009 tidobj131009;
typedef struct ttype169681 ttype169681;
typedef struct tlineinfo128308 tlineinfo128308;
typedef struct tsym169677 tsym169677;
typedef struct tnodeseq169641 tnodeseq169641;
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
struct TGenericSeq {
NI len;
NI reserved;
};
typedef NIM_CHAR TY611[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY611 data;
};
typedef NimStringDesc* TY194015[3];
typedef NimStringDesc* TY194020[4];
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
struct tbaselexer160018 {
  TNimObject Sup;
NI Bufpos;
NCSTRING Buf;
NI Buflen;
tllstream159204* Stream;
NI Linenumber;
NI Sentinel;
NI Linestart;
};
struct tlexer162168 {
  tbaselexer160018 Sup;
NI32 Fileidx;
NI Indentahead;
};
struct ttoken162166 {
NU8 Toktype;
NI Indent;
tident131015* Ident;
NI64 Inumber;
NF64 Fnumber;
NU8 Base;
NimStringDesc* Literal;
NI Line;
NI Col;
};
struct tparser183203 {
NI Currind;
NIM_BOOL Firsttok;
tlexer162168 Lex;
ttoken162166 Tok;
};
struct tparsers194026 {
NU8 Skin;
tparser183203 Parser;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
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
struct tlineinfo128308 {
NI16 Line;
NI16 Col;
NI32 Fileindex;
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
typedef NimStringDesc* TY139216[1];
struct tllstream159204 {
  TNimObject Sup;
NU8 Kind;
FILE* F;
NimStringDesc* S;
NI Rd;
NI Wr;
NI Lineoffset;
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
N_NIMCALL(tnode169647*, parsefile_194030)(NI32 fileidx);
N_NIMCALL(void, objectInit)(void* dest, TNimType* typ);
N_NIMCALL(NimStringDesc*, tofullpath_129098)(NI32 fileidx);
N_NIMCALL(NIM_BOOL, open_9017)(FILE** f, NimStringDesc* filename, NU8 mode, NI bufsize);
N_NIMCALL(void, rawmessage_129521)(NU16 msg, NimStringDesc* arg);
N_NIMCALL(tllstream159204*, llstreamopen_159222)(FILE** f);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(tnode169647*, parseall_194046)(tparsers194026* p);
N_NIMCALL(tnode169647*, parseall_183209)(tparser183203* p);
N_NIMCALL(tnode169647*, parseall_186004)(tparser183203* p);
N_NIMCALL(void, internalerror_129702)(NimStringDesc* errmsg);
N_NIMCALL(tnode169647*, parsetoplevelstmt_194051)(tparsers194026* p);
N_NIMCALL(tnode169647*, parsetoplevelstmt_183226)(tparser183203* p);
N_NIMCALL(tnode169647*, parsetoplevelstmt_186011)(tparser183203* p);
N_NIMCALL(NI, utf8bom_194091)(NimStringDesc* s);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(NIM_BOOL, containsshebang_194097)(NimStringDesc* s, NI i);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(tnode169647*, parsepipe_194127)(NimStringDesc* filename, tllstream159204* inputstream);
N_NIMCALL(tllstream159204*, llstreamopen_159227)(NimStringDesc* filename, NU8 mode);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(NIM_BOOL, llstreamreadline_159248)(tllstream159204* s, NimStringDesc** line);
N_NIMCALL(void, openparser_183214)(tparser183203* p, NimStringDesc* filename, tllstream159204* inputstream);
N_NIMCALL(tllstream159204*, llstreamopen_159218)(NimStringDesc* data);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
N_NIMCALL(void, closeparser_183221)(tparser183203* p);
N_NIMCALL(void, llstreamclose_159238)(tllstream159204* s);
N_NIMCALL(NU8, getfilter_194191)(tident131015* ident);
N_NIMCALL(NIM_BOOL, identeq_131461)(tident131015* id, NimStringDesc* name);
N_NIMCALL(NU8, getparser_194237)(tident131015* ident);
N_NIMCALL(tident131015*, getcallee_194283)(tnode169647* n);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
N_NIMCALL(NimStringDesc*, rendertree_187046)(tnode169647* n, NU8 renderflags);
N_NIMCALL(tllstream159204*, applyfilter_194350)(tparsers194026* p, tnode169647* n, NimStringDesc* filename, tllstream159204* stdin_194356);
N_NIMCALL(tllstream159204*, filtertmpl_193005)(tllstream159204* stdin_193007, NimStringDesc* filename, tnode169647* call);
N_NIMCALL(tllstream159204*, filterstrip_192008)(tllstream159204* stdin_192010, NimStringDesc* filename, tnode169647* call);
N_NIMCALL(tllstream159204*, filterreplace_192002)(tllstream159204* stdin_192004, NimStringDesc* filename, tnode169647* call);
N_NIMCALL(void, rawmessage_129451)(NU16 msg, NimStringDesc** args, NI argsLen0);
N_NIMCALL(void, msgwriteln_129228)(NimStringDesc* s);
N_NIMCALL(tllstream159204*, evalpipe_194384)(tparsers194026* p, tnode169647* n, NimStringDesc* filename, tllstream159204* start);
N_NIMCALL(void, openparsers_194034)(tparsers194026* p, NI32 fileidx, tllstream159204* inputstream);
N_NIMCALL(void, openparser_183360)(tparser183203* p, NI32 fileidx, tllstream159204* inputstream);
N_NIMCALL(void, closeparsers_194041)(tparsers194026* p);
STRING_LITERAL(TMP2552, "standard", 8);
STRING_LITERAL(TMP2553, "braces", 6);
STRING_LITERAL(TMP2554, "endx", 4);
NIM_CONST TY194015 parsernames_194014 = {((NimStringDesc*) &TMP2552),
((NimStringDesc*) &TMP2553),
((NimStringDesc*) &TMP2554)}
;
STRING_LITERAL(TMP2555, "none", 4);
STRING_LITERAL(TMP2556, "stdtmpl", 7);
STRING_LITERAL(TMP2557, "replace", 7);
STRING_LITERAL(TMP2558, "strip", 5);
NIM_CONST TY194020 filternames_194019 = {((NimStringDesc*) &TMP2555),
((NimStringDesc*) &TMP2556),
((NimStringDesc*) &TMP2557),
((NimStringDesc*) &TMP2558)}
;
STRING_LITERAL(TMP2563, "parser to implement", 19);
static NIM_CONST TY169850 TMP2567 = {
0xEC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP2568, "sons", 4);
static NIM_CONST TY169850 TMP2569 = {
0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP2570, "ident", 5);
STRING_LITERAL(TMP2571, "|", 1);
TNimType NTI194026; /* TParsers */
TNimType NTI194005; /* TParserKind */
extern TNimType NTI183203; /* TParser */
extern TFrame* frameptr_12027;
extern tnode169647* emptynode_170305;
extern NI gverbosity_105116;

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_12027;
	frameptr_12027 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_12027 = (*frameptr_12027).prev;
}

N_NIMCALL(tnode169647*, parsefile_194030)(NI32 fileidx) {
	tnode169647* result;
	tparsers194026 p;
	FILE* f;
	NimStringDesc* filename;
	tllstream159204* LOC6;
	nimfr("parseFile", "syntaxes.nim")
	result = 0;
	memset((void*)&p, 0, sizeof(p));
	objectInit(&p, (&NTI194026));
	f = 0;
	nimln(47, "syntaxes.nim");
	filename = tofullpath_129098(fileidx);
	nimln(48, "syntaxes.nim");
	{
		NIM_BOOL LOC3;
		nimln(48, "syntaxes.nim");
		nimln(48, "syntaxes.nim");
		LOC3 = open_9017(&f, filename, ((NU8) 0), -1);
		if (!!(LOC3)) goto LA4;
		nimln(49, "syntaxes.nim");
		rawmessage_129521(((NU16) 3), filename);
		nimln(50, "syntaxes.nim");
		goto BeforeRet;
	}
	LA4: ;
	nimln(51, "syntaxes.nim");
	nimln(51, "syntaxes.nim");
	LOC6 = 0;
	LOC6 = llstreamopen_159222(&f);
	openparsers_194034(&p, fileidx, LOC6);
	nimln(52, "syntaxes.nim");
	result = parseall_194046(&p);
	nimln(53, "syntaxes.nim");
	closeparsers_194041(&p);
	BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(tnode169647*, parseall_194046)(tparsers194026* p) {
	tnode169647* result;
	nimfr("parseAll", "syntaxes.nim")
	result = 0;
	nimln(56, "syntaxes.nim");
	switch ((*p).Skin) {
	case ((NU8) 0):
	{
		nimln(58, "syntaxes.nim");
		result = parseall_183209(&(*p).Parser);
	}
	break;
	case ((NU8) 1):
	{
		nimln(60, "syntaxes.nim");
		result = parseall_186004(&(*p).Parser);
	}
	break;
	case ((NU8) 2):
	{
		nimln(62, "syntaxes.nim");
		internalerror_129702(((NimStringDesc*) &TMP2563));
		nimln(63, "syntaxes.nim");
		result = emptynode_170305;
	}
	break;
	}
	popFrame();
	return result;
}

N_NIMCALL(tnode169647*, parsetoplevelstmt_194051)(tparsers194026* p) {
	tnode169647* result;
	nimfr("parseTopLevelStmt", "syntaxes.nim")
	result = 0;
	nimln(67, "syntaxes.nim");
	switch ((*p).Skin) {
	case ((NU8) 0):
	{
		nimln(69, "syntaxes.nim");
		result = parsetoplevelstmt_183226(&(*p).Parser);
	}
	break;
	case ((NU8) 1):
	{
		nimln(71, "syntaxes.nim");
		result = parsetoplevelstmt_186011(&(*p).Parser);
	}
	break;
	case ((NU8) 2):
	{
		nimln(73, "syntaxes.nim");
		internalerror_129702(((NimStringDesc*) &TMP2563));
		nimln(74, "syntaxes.nim");
		result = emptynode_170305;
	}
	break;
	}
	popFrame();
	return result;
}

N_NIMCALL(NI, utf8bom_194091)(NimStringDesc* s) {
	NI result;
	nimfr("UTF8_BOM", "syntaxes.nim")
	result = 0;
	nimln(78, "syntaxes.nim");
	{
		NIM_BOOL LOC3;
		NIM_BOOL LOC4;
		nimln(78, "syntaxes.nim");
		nimln(78, "syntaxes.nim");
		nimln(78, "syntaxes.nim");
		if ((NU)(0) > (NU)(s->Sup.len)) raiseIndexError();
		LOC4 = ((NU8)(s->data[0]) == (NU8)(239));
		if (!(LOC4)) goto LA5;
		nimln(78, "syntaxes.nim");
		if ((NU)(1) > (NU)(s->Sup.len)) raiseIndexError();
		LOC4 = ((NU8)(s->data[1]) == (NU8)(187));
		LA5: ;
		LOC3 = LOC4;
		if (!(LOC3)) goto LA6;
		nimln(78, "syntaxes.nim");
		if ((NU)(2) > (NU)(s->Sup.len)) raiseIndexError();
		LOC3 = ((NU8)(s->data[2]) == (NU8)(191));
		LA6: ;
		if (!LOC3) goto LA7;
		nimln(79, "syntaxes.nim");
		result = 3;
	}
	goto LA1;
	LA7: ;
	{
		nimln(81, "syntaxes.nim");
		result = 0;
	}
	LA1: ;
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

N_NIMCALL(NIM_BOOL, containsshebang_194097)(NimStringDesc* s, NI i) {
	NIM_BOOL result;
	nimfr("containsShebang", "syntaxes.nim")
	result = 0;
	nimln(84, "syntaxes.nim");
	{
		NIM_BOOL LOC3;
		NI TMP2564;
		NI j;
		NI TMP2565;
		nimln(84, "syntaxes.nim");
		nimln(84, "syntaxes.nim");
		if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
		LOC3 = ((NU8)(s->data[i]) == (NU8)(35));
		if (!(LOC3)) goto LA4;
		nimln(84, "syntaxes.nim");
		nimln(84, "syntaxes.nim");
		TMP2564 = addInt(i, 1);
		if ((NU)((NI32)(TMP2564)) > (NU)(s->Sup.len)) raiseIndexError();
		LOC3 = ((NU8)(s->data[(NI32)(TMP2564)]) == (NU8)(33));
		LA4: ;
		if (!LOC3) goto LA5;
		nimln(85, "syntaxes.nim");
		nimln(85, "syntaxes.nim");
		TMP2565 = addInt(i, 2);
		j = (NI32)(TMP2565);
		nimln(86, "syntaxes.nim");
		while (1) {
			nimln(716, "system.nim");
			if ((NU)(j) > (NU)(s->Sup.len)) raiseIndexError();
			if (!(((NU8)(s->data[j])) == ((NU8)(32)) || ((NU8)(s->data[j])) == ((NU8)(9)) || ((NU8)(s->data[j])) == ((NU8)(11)) || ((NU8)(s->data[j])) == ((NU8)(13)) || ((NU8)(s->data[j])) == ((NU8)(10)) || ((NU8)(s->data[j])) == ((NU8)(12)))) goto LA7;
			nimln(86, "syntaxes.nim");
			j = addInt(j, 1);
		} LA7: ;
		nimln(87, "syntaxes.nim");
		nimln(87, "syntaxes.nim");
		if ((NU)(j) > (NU)(s->Sup.len)) raiseIndexError();
		result = ((NU8)(s->data[j]) == (NU8)(47));
	}
	LA5: ;
	popFrame();
	return result;
}

N_NIMCALL(tnode169647*, parsepipe_194127)(NimStringDesc* filename, tllstream159204* inputstream) {
	tnode169647* result;
	tllstream159204* s;
	nimfr("parsePipe", "syntaxes.nim")
	result = 0;
	nimln(90, "syntaxes.nim");
	result = emptynode_170305;
	nimln(91, "syntaxes.nim");
	s = llstreamopen_159227(filename, ((NU8) 0));
	nimln(92, "syntaxes.nim");
	{
		NimStringDesc* line;
		NIM_BOOL LOC5;
		NI i;
		nimln(684, "system.nim");
		nimln(684, "system.nim");
		if (!!((s == NIM_NIL))) goto LA3;
		nimln(93, "syntaxes.nim");
		nimln(93, "syntaxes.nim");
		line = rawNewString(80);
		nimln(94, "syntaxes.nim");
		nimln(94, "syntaxes.nim");
		LOC5 = llstreamreadline_159248(s, &line);
		nimln(95, "syntaxes.nim");
		i = utf8bom_194091(line);
		nimln(96, "syntaxes.nim");
		{
			NIM_BOOL LOC8;
			NIM_BOOL LOC11;
			nimln(96, "syntaxes.nim");
			LOC8 = containsshebang_194097(line, i);
			if (!LOC8) goto LA9;
			nimln(97, "syntaxes.nim");
			nimln(97, "syntaxes.nim");
			LOC11 = llstreamreadline_159248(s, &line);
			nimln(98, "syntaxes.nim");
			i = 0;
		}
		LA9: ;
		nimln(99, "syntaxes.nim");
		{
			NIM_BOOL LOC14;
			NI TMP2566;
			tparser183203 q;
			NimStringDesc* LOC19;
			tllstream159204* LOC20;
			nimln(99, "syntaxes.nim");
			nimln(99, "syntaxes.nim");
			if ((NU)(i) > (NU)(line->Sup.len)) raiseIndexError();
			LOC14 = ((NU8)(line->data[i]) == (NU8)(35));
			if (!(LOC14)) goto LA15;
			nimln(99, "syntaxes.nim");
			nimln(99, "syntaxes.nim");
			TMP2566 = addInt(i, 1);
			if ((NU)((NI32)(TMP2566)) > (NU)(line->Sup.len)) raiseIndexError();
			LOC14 = ((NU8)(line->data[(NI32)(TMP2566)]) == (NU8)(33));
			LA15: ;
			if (!LOC14) goto LA16;
			nimln(100, "syntaxes.nim");
			i = addInt(i, 2);
			nimln(101, "syntaxes.nim");
			while (1) {
				nimln(716, "system.nim");
				if ((NU)(i) > (NU)(line->Sup.len)) raiseIndexError();
				if (!(((NU8)(line->data[i])) == ((NU8)(32)) || ((NU8)(line->data[i])) == ((NU8)(9)) || ((NU8)(line->data[i])) == ((NU8)(11)) || ((NU8)(line->data[i])) == ((NU8)(13)) || ((NU8)(line->data[i])) == ((NU8)(10)) || ((NU8)(line->data[i])) == ((NU8)(12)))) goto LA18;
				nimln(101, "syntaxes.nim");
				i = addInt(i, 1);
			} LA18: ;
			memset((void*)&q, 0, sizeof(q));
			objectInit(&q, (&NTI183203));
			nimln(103, "syntaxes.nim");
			nimln(103, "syntaxes.nim");
			nimln(103, "syntaxes.nim");
			LOC19 = 0;
			LOC19 = copyStr(line, i);
			LOC20 = 0;
			LOC20 = llstreamopen_159218(LOC19);
			openparser_183214(&q, filename, LOC20);
			nimln(104, "syntaxes.nim");
			result = parseall_183209(&q);
			nimln(105, "syntaxes.nim");
			closeparser_183221(&q);
		}
		LA16: ;
		nimln(106, "syntaxes.nim");
		llstreamclose_159238(s);
	}
	LA3: ;
	popFrame();
	return result;
}

N_NIMCALL(NU8, getfilter_194191)(tident131015* ident) {
	NU8 result;
	NU8 i_194228;
	NU8 res_194232;
	nimfr("getFilter", "syntaxes.nim")
	result = 0;
	i_194228 = 0;
	nimln(1274, "system.nim");
	res_194232 = ((NU8) 0);
	nimln(1275, "system.nim");
	while (1) {
		nimln(1275, "system.nim");
		if (!(res_194232 <= ((NU8) 3))) goto LA1;
		nimln(1274, "system.nim");
		i_194228 = res_194232;
		nimln(110, "syntaxes.nim");
		{
			NIM_BOOL LOC4;
			nimln(110, "syntaxes.nim");
			LOC4 = identeq_131461(ident, filternames_194019[(i_194228)- 0]);
			if (!LOC4) goto LA5;
			nimln(111, "syntaxes.nim");
			nimln(111, "syntaxes.nim");
			result = i_194228;
			goto BeforeRet;
		}
		LA5: ;
		nimln(1277, "system.nim");
		res_194232 = addInt(res_194232, 1);
	} LA1: ;
	nimln(112, "syntaxes.nim");
	result = ((NU8) 0);
	BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(NU8, getparser_194237)(tident131015* ident) {
	NU8 result;
	NU8 i_194274;
	NU8 res_194278;
	nimfr("getParser", "syntaxes.nim")
	result = 0;
	i_194274 = 0;
	nimln(1274, "system.nim");
	res_194278 = ((NU8) 0);
	nimln(1275, "system.nim");
	while (1) {
		nimln(1275, "system.nim");
		if (!(res_194278 <= ((NU8) 2))) goto LA1;
		nimln(1274, "system.nim");
		i_194274 = res_194278;
		nimln(116, "syntaxes.nim");
		{
			NIM_BOOL LOC4;
			nimln(116, "syntaxes.nim");
			LOC4 = identeq_131461(ident, parsernames_194014[(i_194274)- 0]);
			if (!LOC4) goto LA5;
			nimln(117, "syntaxes.nim");
			nimln(117, "syntaxes.nim");
			result = i_194274;
			goto BeforeRet;
		}
		LA5: ;
		nimln(1277, "system.nim");
		res_194278 = addInt(res_194278, 1);
	} LA1: ;
	nimln(118, "syntaxes.nim");
	rawmessage_129521(((NU16) 30), (*ident).S);
	BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(tident131015*, getcallee_194283)(tnode169647* n) {
	tident131015* result;
	nimfr("getCallee", "syntaxes.nim")
	result = 0;
	nimln(121, "syntaxes.nim");
	{
		NIM_BOOL LOC3;
		nimln(121, "syntaxes.nim");
		nimln(716, "system.nim");
		LOC3 = ((*n).Kind == ((NU8) 27) || (*n).Kind == ((NU8) 29) || (*n).Kind == ((NU8) 30) || (*n).Kind == ((NU8) 31) || (*n).Kind == ((NU8) 26) || (*n).Kind == ((NU8) 28) || (*n).Kind == ((NU8) 32));
		if (!(LOC3)) goto LA4;
		nimln(121, "syntaxes.nim");
		if (((TMP2567[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2568));
		if ((NU)(0) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
		LOC3 = ((*(*n).kindU.S6.Sons->data[0]).Kind == ((NU8) 2));
		LA4: ;
		if (!LOC3) goto LA5;
		nimln(122, "syntaxes.nim");
		if (((TMP2567[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2568));
		if ((NU)(0) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
		if (!(((TMP2569[(*(*n).kindU.S6.Sons->data[0]).Kind/8] &(1<<((*(*n).kindU.S6.Sons->data[0]).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP2570));
		result = (*(*n).kindU.S6.Sons->data[0]).kindU.S5.Ident;
	}
	goto LA1;
	LA5: ;
	{
		nimln(123, "syntaxes.nim");
		if (!((*n).Kind == ((NU8) 2))) goto LA8;
		nimln(124, "syntaxes.nim");
		if (!(((TMP2569[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP2570));
		result = (*n).kindU.S5.Ident;
	}
	goto LA1;
	LA8: ;
	{
		NimStringDesc* LOC11;
		nimln(126, "syntaxes.nim");
		nimln(126, "syntaxes.nim");
		LOC11 = 0;
		LOC11 = rendertree_187046(n, 0);
		rawmessage_129521(((NU16) 163), LOC11);
	}
	LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(tllstream159204*, applyfilter_194350)(tparsers194026* p, tnode169647* n, NimStringDesc* filename, tllstream159204* stdin_194356) {
	tllstream159204* result;
	tident131015* ident;
	NU8 f;
	nimfr("applyFilter", "syntaxes.nim")
	result = 0;
	nimln(130, "syntaxes.nim");
	ident = getcallee_194283(n);
	nimln(131, "syntaxes.nim");
	f = getfilter_194191(ident);
	nimln(132, "syntaxes.nim");
	switch (f) {
	case ((NU8) 0):
	{
		nimln(134, "syntaxes.nim");
		(*p).Skin = getparser_194237(ident);
		nimln(135, "syntaxes.nim");
		result = stdin_194356;
	}
	break;
	case ((NU8) 1):
	{
		nimln(137, "syntaxes.nim");
		result = filtertmpl_193005(stdin_194356, filename, n);
	}
	break;
	case ((NU8) 3):
	{
		nimln(139, "syntaxes.nim");
		result = filterstrip_192008(stdin_194356, filename, n);
	}
	break;
	case ((NU8) 2):
	{
		nimln(141, "syntaxes.nim");
		result = filterreplace_192002(stdin_194356, filename, n);
	}
	break;
	}
	nimln(142, "syntaxes.nim");
	{
		nimln(684, "system.nim");
		nimln(684, "system.nim");
		if (!!((f == ((NU8) 0)))) goto LA7;
		nimln(143, "syntaxes.nim");
		{
			TY139216 LOC13;
			TY139216 LOC14;
			nimln(688, "system.nim");
			if (!(2 <= gverbosity_105116)) goto LA11;
			nimln(144, "syntaxes.nim");
			memset((void*)LOC13, 0, sizeof(LOC13));
			rawmessage_129451(((NU16) 253), LOC13, 0);
			nimln(145, "syntaxes.nim");
			msgwriteln_129228((*result).S);
			nimln(146, "syntaxes.nim");
			memset((void*)LOC14, 0, sizeof(LOC14));
			rawmessage_129451(((NU16) 254), LOC14, 0);
		}
		LA11: ;
	}
	LA7: ;
	popFrame();
	return result;
}

N_NIMCALL(tllstream159204*, evalpipe_194384)(tparsers194026* p, tnode169647* n, NimStringDesc* filename, tllstream159204* start) {
	tllstream159204* result;
	nimfr("evalPipe", "syntaxes.nim")
	result = 0;
	nimln(150, "syntaxes.nim");
	result = start;
	nimln(151, "syntaxes.nim");
	{
		nimln(151, "syntaxes.nim");
		if (!((*n).Kind == ((NU8) 1))) goto LA3;
		nimln(151, "syntaxes.nim");
		goto BeforeRet;
	}
	LA3: ;
	nimln(152, "syntaxes.nim");
	{
		NIM_BOOL LOC7;
		NIM_BOOL LOC8;
		NI i_194448;
		NI res_194502;
		nimln(152, "syntaxes.nim");
		nimln(152, "syntaxes.nim");
		nimln(152, "syntaxes.nim");
		LOC8 = ((*n).Kind == ((NU8) 29));
		if (!(LOC8)) goto LA9;
		nimln(152, "syntaxes.nim");
		if (((TMP2567[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2568));
		if ((NU)(0) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
		LOC8 = ((*(*n).kindU.S6.Sons->data[0]).Kind == ((NU8) 2));
		LA9: ;
		LOC7 = LOC8;
		if (!(LOC7)) goto LA10;
		nimln(153, "syntaxes.nim");
		if (((TMP2567[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2568));
		if ((NU)(0) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
		if (!(((TMP2569[(*(*n).kindU.S6.Sons->data[0]).Kind/8] &(1<<((*(*n).kindU.S6.Sons->data[0]).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP2570));
		LOC7 = identeq_131461((*(*n).kindU.S6.Sons->data[0]).kindU.S5.Ident, ((NimStringDesc*) &TMP2571));
		LA10: ;
		if (!LOC7) goto LA11;
		i_194448 = 0;
		nimln(1274, "system.nim");
		res_194502 = 1;
		nimln(1275, "system.nim");
		while (1) {
			nimln(1275, "system.nim");
			if (!(res_194502 <= 2)) goto LA13;
			nimln(1274, "system.nim");
			i_194448 = res_194502;
			nimln(155, "syntaxes.nim");
			{
				nimln(155, "syntaxes.nim");
				if (((TMP2567[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2568));
				if ((NU)(i_194448) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
				if (!((*(*n).kindU.S6.Sons->data[i_194448]).Kind == ((NU8) 29))) goto LA16;
				nimln(156, "syntaxes.nim");
				if (((TMP2567[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2568));
				if ((NU)(i_194448) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
				result = evalpipe_194384(p, (*n).kindU.S6.Sons->data[i_194448], filename, result);
			}
			goto LA14;
			LA16: ;
			{
				nimln(158, "syntaxes.nim");
				if (((TMP2567[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2568));
				if ((NU)(i_194448) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
				result = applyfilter_194350(p, (*n).kindU.S6.Sons->data[i_194448], filename, result);
			}
			LA14: ;
			nimln(1277, "system.nim");
			res_194502 = addInt(res_194502, 1);
		} LA13: ;
	}
	goto LA5;
	LA11: ;
	{
		nimln(159, "syntaxes.nim");
		if (!((*n).Kind == ((NU8) 114))) goto LA20;
		nimln(160, "syntaxes.nim");
		if (((TMP2567[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2568));
		if ((NU)(0) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
		result = evalpipe_194384(p, (*n).kindU.S6.Sons->data[0], filename, result);
	}
	goto LA5;
	LA20: ;
	{
		nimln(162, "syntaxes.nim");
		result = applyfilter_194350(p, n, filename, result);
	}
	LA5: ;
	BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(void, openparsers_194034)(tparsers194026* p, NI32 fileidx, tllstream159204* inputstream) {
	tllstream159204* s;
	NimStringDesc* filename;
	tnode169647* pipe;
	nimfr("openParsers", "syntaxes.nim")
	s = 0;
	nimln(166, "syntaxes.nim");
	(*p).Skin = ((NU8) 0);
	nimln(167, "syntaxes.nim");
	filename = tofullpath_129098(fileidx);
	nimln(168, "syntaxes.nim");
	pipe = parsepipe_194127(filename, inputstream);
	nimln(169, "syntaxes.nim");
	{
		nimln(684, "system.nim");
		nimln(684, "system.nim");
		if (!!((pipe == NIM_NIL))) goto LA3;
		nimln(169, "syntaxes.nim");
		s = evalpipe_194384(p, pipe, filename, inputstream);
	}
	goto LA1;
	LA3: ;
	{
		nimln(170, "syntaxes.nim");
		s = inputstream;
	}
	LA1: ;
	nimln(171, "syntaxes.nim");
	switch ((*p).Skin) {
	case ((NU8) 0):
	case ((NU8) 1):
	case ((NU8) 2):
	{
		nimln(173, "syntaxes.nim");
		openparser_183360(&(*p).Parser, fileidx, s);
	}
	break;
	}
	popFrame();
}

N_NIMCALL(void, closeparsers_194041)(tparsers194026* p) {
	nimfr("closeParsers", "syntaxes.nim")
	nimln(176, "syntaxes.nim");
	closeparser_183221(&(*p).Parser);
	popFrame();
}
N_NOINLINE(void, syntaxesInit)(void) {
	nimfr("syntaxes", "syntaxes.nim")
	popFrame();
}

N_NOINLINE(void, syntaxesDatInit)(void) {
static TNimNode* TMP2559[2];
static TNimNode* TMP2560[3];
NI TMP2562;
static char* NIM_CONST TMP2561[3] = {
"skinStandard", 
"skinBraces", 
"skinEndX"};
static TNimNode TMP2188[7];
NTI194026.size = sizeof(tparsers194026);
NTI194026.kind = 18;
NTI194026.base = 0;
NTI194026.flags = 2;
TMP2559[0] = &TMP2188[1];
NTI194005.size = sizeof(NU8);
NTI194005.kind = 14;
NTI194005.base = 0;
NTI194005.flags = 3;
for (TMP2562 = 0; TMP2562 < 3; TMP2562++) {
TMP2188[TMP2562+2].kind = 1;
TMP2188[TMP2562+2].offset = TMP2562;
TMP2188[TMP2562+2].name = TMP2561[TMP2562];
TMP2560[TMP2562] = &TMP2188[TMP2562+2];
}
TMP2188[5].len = 3; TMP2188[5].kind = 2; TMP2188[5].sons = &TMP2560[0];
NTI194005.node = &TMP2188[5];
TMP2188[1].kind = 1;
TMP2188[1].offset = offsetof(tparsers194026, Skin);
TMP2188[1].typ = (&NTI194005);
TMP2188[1].name = "skin";
TMP2559[1] = &TMP2188[6];
TMP2188[6].kind = 1;
TMP2188[6].offset = offsetof(tparsers194026, Parser);
TMP2188[6].typ = (&NTI183203);
TMP2188[6].name = "parser";
TMP2188[0].len = 2; TMP2188[0].kind = 2; TMP2188[0].sons = &TMP2559[0];
NTI194026.node = &TMP2188[0];
}

