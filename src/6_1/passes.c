/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <stdio.h>
typedef struct tpass218015 tpass218015;
typedef struct tpasscontext218003 tpasscontext218003;
typedef struct tsym169677 tsym169677;
typedef struct trodreader207023 trodreader207023;
typedef struct tnode169647 tnode169647;
typedef struct tidobj131009 tidobj131009;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct ttypeseq169679 ttypeseq169679;
typedef struct ttype169681 ttype169681;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY169771 TY169771;
typedef struct tinstantiation169667 tinstantiation169667;
typedef struct tscope169671 tscope169671;
typedef struct tstrtable169651 tstrtable169651;
typedef struct tsymseq169649 tsymseq169649;
typedef struct tident131015 tident131015;
typedef struct tlineinfo128308 tlineinfo128308;
typedef struct tloc169661 tloc169661;
typedef struct trope126007 trope126007;
typedef struct tlib169665 tlib169665;
typedef struct NimStringDesc NimStringDesc;
typedef struct tnodeseq169641 tnodeseq169641;
typedef struct tpassdata218017 tpassdata218017;
typedef struct TY9355 TY9355;
typedef struct tllstream159204 tllstream159204;
typedef struct tparsers194026 tparsers194026;
typedef struct tparser183203 tparser183203;
typedef struct tlexer162168 tlexer162168;
typedef struct tbaselexer160018 tbaselexer160018;
typedef struct ttoken162166 ttoken162166;
typedef struct TY169763 TY169763;
typedef struct tindex207021 tindex207021;
typedef struct tiitable176212 tiitable176212;
typedef struct tiipairseq176210 tiipairseq176210;
typedef struct tiipair176208 tiipair176208;
typedef struct tidtable169693 tidtable169693;
typedef struct tidpairseq169691 tidpairseq169691;
typedef struct tidpair169689 tidpair169689;
typedef struct tmemfile205204 tmemfile205204;
typedef struct tlistentry100011 tlistentry100011;
typedef N_NIMCALL_PTR(tpasscontext218003*, tpassopen218007) (tsym169677* module);
typedef N_NIMCALL_PTR(tpasscontext218003*, tpassopencached218009) (tsym169677* module, trodreader207023* rd);
typedef N_NIMCALL_PTR(tnode169647*, tpassprocess218013) (tpasscontext218003* p, tnode169647* toplevelstmt);
typedef N_NIMCALL_PTR(tnode169647*, tpassclose218011) (tpasscontext218003* p, tnode169647* n);
struct tpass218015 {
tpassopen218007 Field0;
tpassopencached218009 Field1;
tpassprocess218013 Field2;
tpassclose218011 Field3;
};
typedef N_NIMCALL_PTR(tsym169677*, TY218056) (tsym169677* m, NI32 fileidx);
typedef N_NIMCALL_PTR(tnode169647*, TY218061) (tsym169677* m, NI32 fileidx);
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
struct TGenericSeq {
NI len;
NI reserved;
};
struct tstrtable169651 {
NI Counter;
tsymseq169649* Data;
};
struct tlineinfo128308 {
NI16 Line;
NI16 Col;
NI32 Fileindex;
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
typedef tpass218015 TY218150[10];
struct tpassdata218017 {
tnode169647* Field0;
tnode169647* Field1;
};
struct tpasscontext218003 {
  TNimObject Sup;
NIM_BOOL Fromcache;
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
typedef tpasscontext218003* tpasscontextarray218147[10];
struct tllstream159204 {
  TNimObject Sup;
NU8 Kind;
FILE* F;
NimStringDesc* S;
NI Rd;
NI Wr;
NI Lineoffset;
};
struct tiipair176208 {
NI Key;
NI Val;
};
struct tiitable176212 {
NI Counter;
tiipairseq176210* Data;
};
struct tindex207021 {
NI Lastidxkey;
NI Lastidxval;
tiitable176212 Tab;
NimStringDesc* R;
NI Offset;
};
struct tidpair169689 {
tidobj131009* Key;
TNimObject* Val;
};
struct tidtable169693 {
NI Counter;
tidpairseq169691* Data;
};
struct tmemfile205204 {
void* Mem;
NI Size;
int Handle;
};
struct trodreader207023 {
  TNimObject Sup;
NI Pos;
NCSTRING S;
NU32 Options;
NU8 Reason;
TY169763* Moddeps;
TY169763* Files;
NI Dataidx;
NI Convertersidx;
NI Initidx;
NI Interfidx;
NI Compilerprocsidx;
NI Methodsidx;
NimStringDesc* Filename;
tindex207021 Index;
tindex207021 Imports;
NI Readerindex;
NI Line;
NI Moduleid;
tidtable169693 Syms;
tmemfile205204 Memfile;
tsymseq169649* Methods;
NIM_BOOL Inviewmode;
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
struct tident131015 {
  tidobj131009 Sup;
NimStringDesc* S;
tident131015* Next;
NI H;
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
struct tnodeseq169641 {
  TGenericSeq Sup;
  tnode169647* data[SEQ_DECL_SIZE];
};
struct TY9355 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct TY169763 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct tiipairseq176210 {
  TGenericSeq Sup;
  tiipair176208 data[SEQ_DECL_SIZE];
};
struct tidpairseq169691 {
  TGenericSeq Sup;
  tidpair169689 data[SEQ_DECL_SIZE];
};
N_NIMCALL(tpass218015, makepass_218040)(tpassopen218007 open, tpassopencached218009 opencached, tpassprocess218013 process, tpassclose218011 close);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NIM_BOOL, skipcodegen_218074)(tnode169647* n);
N_NIMCALL(NIM_BOOL, astneeded_218082)(tsym169677* s);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(NIM_BOOL, needsglobalanalysis_217359)(void);
N_NIMCALL(void, clearpasses_218157)(void);
N_NIMCALL(void, registerpass_218161)(tpass218015 p);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(void, carrypass_218178)(tpass218015 p, tsym169677* module, tpassdata218017 m, tpassdata218017* Result);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(void, carrypasses_218194)(tnode169647* nodes, tsym169677* module, tpass218015* passes, NI passesLen0);
N_NIMCALL(void, openpasses_218237)(tpasscontext218003** a, tsym169677* module);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NIMCALL(void, openpassescached_218263)(tpasscontext218003** a, tsym169677* module, trodreader207023* rd);
N_NIMCALL(void, closepasses_218301)(tpasscontext218003** a);
N_NIMCALL(NIM_BOOL, processtoplevelstmt_218328)(tnode169647* n, tpasscontext218003** a);
N_NIMCALL(void, processtoplevelstmtcached_218364)(tnode169647* n, tpasscontext218003** a);
N_NIMCALL(void, closepassescached_218391)(tpasscontext218003** a);
N_NIMCALL(void, processimplicits_218423)(TY9355* implicits, NU8 nodekind, tpasscontext218003** a);
N_NIMCALL(tnode169647*, newnodei_169921)(NU8 kind, tlineinfo128308 info);
N_NIMCALL(tnode169647*, newstrnode_169907)(NU8 kind, NimStringDesc* strval);
N_NIMCALL(void, addson_170029)(tnode169647* father, tnode169647* son);
N_NIMCALL(void, processmodule_218049)(tsym169677* module, tllstream159204* stream, trodreader207023* rd);
N_NIMCALL(void, objectInit)(void* dest, TNimType* typ);
N_NIMCALL(NimStringDesc*, tofullpath_129098)(NI32 fileidx);
N_NIMCALL(tllstream159204*, llstreamopen_159227)(NimStringDesc* filename, NU8 mode);
N_NIMCALL(void, rawmessage_129521)(NU16 msg, NimStringDesc* arg);
N_NIMCALL(void, openparsers_194034)(tparsers194026* p, NI32 fileidx, tllstream159204* inputstream);
N_NIMCALL(tnode169647*, parsetoplevelstmt_194051)(tparsers194026* p);
N_NIMCALL(void, closeparsers_194041)(tparsers194026* p);
N_NIMCALL(void, idsynchronizationpoint_168445)(NI idrange);
N_NIMCALL(tnode169647*, loadinitsection_207064)(trodreader207023* r);
static N_INLINE(NI, sonslen_170003)(tnode169647* n);
static NIM_CONST TY169850 TMP3057 = {
0xEC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP3058, "sons", 4);
extern TFrame* frameptr_12027;
TY218056 gimportmodule_218060;
TY218061 gincludefile_218065;
extern NI gerrorcounter_128871;
TY218150 gpasses_218152;
NI gpasseslen_218153;
extern tlineinfo128308 gcmdlineinfo_128802;
extern TNimType NTI194026; /* TParsers */
extern TY9355* implicitimports_105240;
extern TY9355* implicitincludes_105261;
extern TNimType NTI1009; /* TObject */
TNimType NTI218003; /* TPassContext */
extern TNimType NTI132; /* bool */

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_12027;
	frameptr_12027 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_12027 = (*frameptr_12027).prev;
}

N_NIMCALL(tpass218015, makepass_218040)(tpassopen218007 open, tpassopencached218009 opencached, tpassprocess218013 process, tpassclose218011 close) {
	tpass218015 result;
	nimfr("makePass", "passes.nim")
	memset((void*)&result, 0, sizeof(result));
	nimln(44, "passes.nim");
	result.Field0 = open;
	nimln(45, "passes.nim");
	result.Field1 = opencached;
	nimln(46, "passes.nim");
	result.Field3 = close;
	nimln(47, "passes.nim");
	result.Field2 = process;
	popFrame();
	return result;
}

static N_INLINE(NIM_BOOL, skipcodegen_218074)(tnode169647* n) {
	NIM_BOOL result;
	nimfr("skipCodegen", "passes.nim")
	result = 0;
	nimln(66, "passes.nim");
	nimln(692, "system.nim");
	result = (0 < gerrorcounter_128871);
	popFrame();
	return result;
}

N_NIMCALL(NIM_BOOL, astneeded_218082)(tsym169677* s) {
	NIM_BOOL result;
	nimfr("astNeeded", "passes.nim")
	result = 0;
	nimln(73, "passes.nim");
	{
		NIM_BOOL LOC3;
		NIM_BOOL LOC4;
		NIM_BOOL LOC5;
		nimln(75, "passes.nim");
		nimln(74, "passes.nim");
		nimln(73, "passes.nim");
		nimln(716, "system.nim");
		LOC5 = ((12288 &(1<<(((*s).Kind)&31)))!=0);
		if (!(LOC5)) goto LA6;
		nimln(74, "passes.nim");
		nimln(74, "passes.nim");
		LOC5 = ((8454144 & (*s).Flags) == 0);
		LA6: ;
		LOC4 = LOC5;
		if (!(LOC4)) goto LA7;
		nimln(684, "system.nim");
		nimln(684, "system.nim");
		LOC4 = !(((*(*s).Typ).Callconv == ((NU8) 5)));
		LA7: ;
		LOC3 = LOC4;
		if (!(LOC3)) goto LA8;
		nimln(76, "passes.nim");
		if (((TMP3057[(*(*s).Ast).Kind/8] &(1<<((*(*s).Ast).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3058));
		if ((NU)(2) >= (NU)((*(*s).Ast).kindU.S6.Sons->Sup.len)) raiseIndexError();
		LOC3 = ((*(*(*s).Ast).kindU.S6.Sons->data[2]).Kind == ((NU8) 1));
		LA8: ;
		if (!LOC3) goto LA9;
		nimln(77, "passes.nim");
		result = needsglobalanalysis_217359();
	}
	goto LA1;
	LA9: ;
	{
		nimln(79, "passes.nim");
		result = NIM_TRUE;
	}
	LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(void, clearpasses_218157)(void) {
	nimfr("clearPasses", "passes.nim")
	nimln(92, "passes.nim");
	gpasseslen_218153 = 0;
	popFrame();
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

N_NIMCALL(void, registerpass_218161)(tpass218015 p) {
	nimfr("registerPass", "passes.nim")
	nimln(95, "passes.nim");
	if ((NU)(gpasseslen_218153) > (NU)(9)) raiseIndexError();
	gpasses_218152[(gpasseslen_218153)- 0] = p;
	nimln(96, "passes.nim");
	gpasseslen_218153 = addInt(gpasseslen_218153, 1);
	popFrame();
}

N_NIMCALL(void, carrypass_218178)(tpass218015 p, tsym169677* module, tpassdata218017 m, tpassdata218017* Result) {
	tpasscontext218003* c;
	nimfr("carryPass", "passes.nim")
	nimln(99, "passes.nim");
	c = p.Field0(module);
	nimln(100, "passes.nim");
	unsureAsgnRef((void**) &(*Result).Field0, p.Field2(c, m.Field0));
	nimln(101, "passes.nim");
	nimln(101, "passes.nim");
	{
		nimln(684, "system.nim");
		nimln(684, "system.nim");
		if (!!((p.Field3 == NIM_NIL))) goto LA3;
		nimln(101, "passes.nim");
		unsureAsgnRef((void**) &(*Result).Field1, p.Field3(c, m.Field1));
	}
	goto LA1;
	LA3: ;
	{
		unsureAsgnRef((void**) &(*Result).Field1, m.Field1);
	}
	LA1: ;
	popFrame();
}

N_NIMCALL(void, carrypasses_218194)(tnode169647* nodes, tsym169677* module, tpass218015* passes, NI passesLen0) {
	tpassdata218017 passdata;
	tpass218015 pass_218230;
	NI i_218233;
	nimfr("carryPasses", "passes.nim")
	memset((void*)&passdata, 0, sizeof(passdata));
	nimln(106, "passes.nim");
	passdata.Field0 = nodes;
	memset((void*)&pass_218230, 0, sizeof(pass_218230));
	nimln(1350, "system.nim");
	i_218233 = 0;
	nimln(1351, "system.nim");
	while (1) {
		tpassdata218017 LOC2;
		nimln(1351, "system.nim");
		nimln(1351, "system.nim");
		if (!(i_218233 < passesLen0)) goto LA1;
		nimln(1352, "system.nim");
		if ((NU)(i_218233) >= (NU)(passesLen0)) raiseIndexError();
		pass_218230 = passes[i_218233];
		nimln(108, "passes.nim");
		memset((void*)&LOC2, 0, sizeof(LOC2));
		carrypass_218178(pass_218230, module, passdata, &LOC2);
		passdata.Field0 = LOC2.Field0;
		passdata.Field1 = LOC2.Field1;
		nimln(1353, "system.nim");
		i_218233 = addInt(i_218233, 1);
	} LA1: ;
	popFrame();
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

N_NIMCALL(void, openpasses_218237)(tpasscontext218003** a, tsym169677* module) {
	NI i_218250;
	NI HEX3Atmp_218256;
	NI TMP3059;
	NI res_218258;
	nimfr("openPasses", "passes.nim")
	i_218250 = 0;
	HEX3Atmp_218256 = 0;
	nimln(111, "passes.nim");
	nimln(111, "passes.nim");
	TMP3059 = subInt(gpasseslen_218153, 1);
	HEX3Atmp_218256 = (NI32)(TMP3059);
	nimln(1274, "system.nim");
	res_218258 = 0;
	nimln(1275, "system.nim");
	while (1) {
		nimln(1275, "system.nim");
		if (!(res_218258 <= HEX3Atmp_218256)) goto LA1;
		nimln(1274, "system.nim");
		i_218250 = res_218258;
		nimln(112, "passes.nim");
		{
			nimln(112, "passes.nim");
			nimln(112, "passes.nim");
			if ((NU)(i_218250) > (NU)(9)) raiseIndexError();
			if (!!(gpasses_218152[(i_218250)- 0].Field0 == 0)) goto LA4;
			nimln(113, "passes.nim");
			if ((NU)(i_218250) > (NU)(9)) raiseIndexError();
			if ((NU)(i_218250) > (NU)(9)) raiseIndexError();
			unsureAsgnRef((void**) &a[(i_218250)- 0], gpasses_218152[(i_218250)- 0].Field0(module));
		}
		goto LA2;
		LA4: ;
		{
			nimln(114, "passes.nim");
			if ((NU)(i_218250) > (NU)(9)) raiseIndexError();
			unsureAsgnRef((void**) &a[(i_218250)- 0], NIM_NIL);
		}
		LA2: ;
		nimln(1277, "system.nim");
		res_218258 = addInt(res_218258, 1);
	} LA1: ;
	popFrame();
}

N_NIMCALL(void, openpassescached_218263)(tpasscontext218003** a, tsym169677* module, trodreader207023* rd) {
	NI i_218277;
	NI HEX3Atmp_218294;
	NI TMP3060;
	NI res_218296;
	nimfr("openPassesCached", "passes.nim")
	i_218277 = 0;
	HEX3Atmp_218294 = 0;
	nimln(117, "passes.nim");
	nimln(117, "passes.nim");
	TMP3060 = subInt(gpasseslen_218153, 1);
	HEX3Atmp_218294 = (NI32)(TMP3060);
	nimln(1274, "system.nim");
	res_218296 = 0;
	nimln(1275, "system.nim");
	while (1) {
		nimln(1275, "system.nim");
		if (!(res_218296 <= HEX3Atmp_218294)) goto LA1;
		nimln(1274, "system.nim");
		i_218277 = res_218296;
		nimln(118, "passes.nim");
		{
			nimln(118, "passes.nim");
			nimln(118, "passes.nim");
			if ((NU)(i_218277) > (NU)(9)) raiseIndexError();
			if (!!(gpasses_218152[(i_218277)- 0].Field1 == 0)) goto LA4;
			nimln(119, "passes.nim");
			if ((NU)(i_218277) > (NU)(9)) raiseIndexError();
			if ((NU)(i_218277) > (NU)(9)) raiseIndexError();
			unsureAsgnRef((void**) &a[(i_218277)- 0], gpasses_218152[(i_218277)- 0].Field1(module, rd));
			nimln(120, "passes.nim");
			{
				nimln(684, "system.nim");
				nimln(684, "system.nim");
				if ((NU)(i_218277) > (NU)(9)) raiseIndexError();
				if (!!((a[(i_218277)- 0] == NIM_NIL))) goto LA8;
				nimln(121, "passes.nim");
				if ((NU)(i_218277) > (NU)(9)) raiseIndexError();
				(*a[(i_218277)- 0]).Fromcache = NIM_TRUE;
			}
			LA8: ;
		}
		goto LA2;
		LA4: ;
		{
			nimln(123, "passes.nim");
			if ((NU)(i_218277) > (NU)(9)) raiseIndexError();
			unsureAsgnRef((void**) &a[(i_218277)- 0], NIM_NIL);
		}
		LA2: ;
		nimln(1277, "system.nim");
		res_218296 = addInt(res_218296, 1);
	} LA1: ;
	popFrame();
}

N_NIMCALL(void, closepasses_218301)(tpasscontext218003** a) {
	tnode169647* m;
	NI i_218314;
	NI HEX3Atmp_218321;
	NI TMP3061;
	NI res_218323;
	nimfr("closePasses", "passes.nim")
	nimln(126, "passes.nim");
	m = NIM_NIL;
	i_218314 = 0;
	HEX3Atmp_218321 = 0;
	nimln(127, "passes.nim");
	nimln(127, "passes.nim");
	TMP3061 = subInt(gpasseslen_218153, 1);
	HEX3Atmp_218321 = (NI32)(TMP3061);
	nimln(1274, "system.nim");
	res_218323 = 0;
	nimln(1275, "system.nim");
	while (1) {
		nimln(1275, "system.nim");
		if (!(res_218323 <= HEX3Atmp_218321)) goto LA1;
		nimln(1274, "system.nim");
		i_218314 = res_218323;
		nimln(128, "passes.nim");
		{
			nimln(128, "passes.nim");
			nimln(128, "passes.nim");
			if ((NU)(i_218314) > (NU)(9)) raiseIndexError();
			if (!!(gpasses_218152[(i_218314)- 0].Field3 == 0)) goto LA4;
			nimln(128, "passes.nim");
			if ((NU)(i_218314) > (NU)(9)) raiseIndexError();
			if ((NU)(i_218314) > (NU)(9)) raiseIndexError();
			m = gpasses_218152[(i_218314)- 0].Field3(a[(i_218314)- 0], m);
		}
		LA4: ;
		nimln(129, "passes.nim");
		if ((NU)(i_218314) > (NU)(9)) raiseIndexError();
		unsureAsgnRef((void**) &a[(i_218314)- 0], NIM_NIL);
		nimln(1277, "system.nim");
		res_218323 = addInt(res_218323, 1);
	} LA1: ;
	popFrame();
}

N_NIMCALL(NIM_BOOL, processtoplevelstmt_218328)(tnode169647* n, tpasscontext218003** a) {
	NIM_BOOL result;
	tnode169647* m;
	NI i_218343;
	NI HEX3Atmp_218357;
	NI TMP3062;
	NI res_218359;
	nimfr("processTopLevelStmt", "passes.nim")
	result = 0;
	nimln(133, "passes.nim");
	m = n;
	i_218343 = 0;
	HEX3Atmp_218357 = 0;
	nimln(134, "passes.nim");
	nimln(134, "passes.nim");
	TMP3062 = subInt(gpasseslen_218153, 1);
	HEX3Atmp_218357 = (NI32)(TMP3062);
	nimln(1274, "system.nim");
	res_218359 = 0;
	nimln(1275, "system.nim");
	while (1) {
		nimln(1275, "system.nim");
		if (!(res_218359 <= HEX3Atmp_218357)) goto LA1;
		nimln(1274, "system.nim");
		i_218343 = res_218359;
		nimln(135, "passes.nim");
		{
			nimln(135, "passes.nim");
			nimln(135, "passes.nim");
			if ((NU)(i_218343) > (NU)(9)) raiseIndexError();
			if (!!(gpasses_218152[(i_218343)- 0].Field2 == 0)) goto LA4;
			nimln(136, "passes.nim");
			if ((NU)(i_218343) > (NU)(9)) raiseIndexError();
			if ((NU)(i_218343) > (NU)(9)) raiseIndexError();
			m = gpasses_218152[(i_218343)- 0].Field2(a[(i_218343)- 0], m);
			nimln(137, "passes.nim");
			{
				nimln(137, "passes.nim");
				if (!m == 0) goto LA8;
				nimln(137, "passes.nim");
				nimln(137, "passes.nim");
				result = NIM_FALSE;
				goto BeforeRet;
			}
			LA8: ;
		}
		LA4: ;
		nimln(1277, "system.nim");
		res_218359 = addInt(res_218359, 1);
	} LA1: ;
	nimln(138, "passes.nim");
	result = NIM_TRUE;
	BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(void, processtoplevelstmtcached_218364)(tnode169647* n, tpasscontext218003** a) {
	tnode169647* m;
	NI i_218378;
	NI HEX3Atmp_218384;
	NI TMP3063;
	NI res_218386;
	nimfr("processTopLevelStmtCached", "passes.nim")
	nimln(142, "passes.nim");
	m = n;
	i_218378 = 0;
	HEX3Atmp_218384 = 0;
	nimln(143, "passes.nim");
	nimln(143, "passes.nim");
	TMP3063 = subInt(gpasseslen_218153, 1);
	HEX3Atmp_218384 = (NI32)(TMP3063);
	nimln(1274, "system.nim");
	res_218386 = 0;
	nimln(1275, "system.nim");
	while (1) {
		nimln(1275, "system.nim");
		if (!(res_218386 <= HEX3Atmp_218384)) goto LA1;
		nimln(1274, "system.nim");
		i_218378 = res_218386;
		nimln(144, "passes.nim");
		{
			nimln(144, "passes.nim");
			nimln(144, "passes.nim");
			if ((NU)(i_218378) > (NU)(9)) raiseIndexError();
			if (!!(gpasses_218152[(i_218378)- 0].Field1 == 0)) goto LA4;
			nimln(144, "passes.nim");
			if ((NU)(i_218378) > (NU)(9)) raiseIndexError();
			if ((NU)(i_218378) > (NU)(9)) raiseIndexError();
			m = gpasses_218152[(i_218378)- 0].Field2(a[(i_218378)- 0], m);
		}
		LA4: ;
		nimln(1277, "system.nim");
		res_218386 = addInt(res_218386, 1);
	} LA1: ;
	popFrame();
}

N_NIMCALL(void, closepassescached_218391)(tpasscontext218003** a) {
	tnode169647* m;
	NI i_218404;
	NI HEX3Atmp_218416;
	NI TMP3064;
	NI res_218418;
	nimfr("closePassesCached", "passes.nim")
	nimln(147, "passes.nim");
	m = NIM_NIL;
	i_218404 = 0;
	HEX3Atmp_218416 = 0;
	nimln(148, "passes.nim");
	nimln(148, "passes.nim");
	TMP3064 = subInt(gpasseslen_218153, 1);
	HEX3Atmp_218416 = (NI32)(TMP3064);
	nimln(1274, "system.nim");
	res_218418 = 0;
	nimln(1275, "system.nim");
	while (1) {
		nimln(1275, "system.nim");
		if (!(res_218418 <= HEX3Atmp_218416)) goto LA1;
		nimln(1274, "system.nim");
		i_218404 = res_218418;
		nimln(149, "passes.nim");
		{
			NIM_BOOL LOC4;
			nimln(149, "passes.nim");
			nimln(149, "passes.nim");
			nimln(149, "passes.nim");
			if ((NU)(i_218404) > (NU)(9)) raiseIndexError();
			LOC4 = !(gpasses_218152[(i_218404)- 0].Field1 == 0);
			if (!(LOC4)) goto LA5;
			nimln(149, "passes.nim");
			nimln(149, "passes.nim");
			if ((NU)(i_218404) > (NU)(9)) raiseIndexError();
			LOC4 = !(gpasses_218152[(i_218404)- 0].Field3 == 0);
			LA5: ;
			if (!LOC4) goto LA6;
			nimln(150, "passes.nim");
			if ((NU)(i_218404) > (NU)(9)) raiseIndexError();
			if ((NU)(i_218404) > (NU)(9)) raiseIndexError();
			m = gpasses_218152[(i_218404)- 0].Field3(a[(i_218404)- 0], m);
		}
		LA6: ;
		nimln(151, "passes.nim");
		if ((NU)(i_218404) > (NU)(9)) raiseIndexError();
		unsureAsgnRef((void**) &a[(i_218404)- 0], NIM_NIL);
		nimln(1277, "system.nim");
		res_218418 = addInt(res_218418, 1);
	} LA1: ;
	popFrame();
}

N_NIMCALL(void, processimplicits_218423)(TY9355* implicits, NU8 nodekind, tpasscontext218003** a) {
	NimStringDesc* module_218440;
	NI i_218444;
	nimfr("processImplicits", "passes.nim")
	module_218440 = 0;
	nimln(1366, "system.nim");
	i_218444 = 0;
	nimln(1367, "system.nim");
	while (1) {
		tnode169647* importstmt;
		tnode169647* str;
		nimln(1367, "system.nim");
		nimln(1367, "system.nim");
		if (!(i_218444 < implicits->Sup.len)) goto LA1;
		nimln(1368, "system.nim");
		if ((NU)(i_218444) >= (NU)(implicits->Sup.len)) raiseIndexError();
		module_218440 = implicits->data[i_218444];
		nimln(156, "passes.nim");
		importstmt = newnodei_169921(nodekind, gcmdlineinfo_128802);
		nimln(157, "passes.nim");
		str = newstrnode_169907(((NU8) 20), module_218440);
		nimln(158, "passes.nim");
		(*str).Info = gcmdlineinfo_128802;
		nimln(159, "passes.nim");
		addson_170029(importstmt, str);
		nimln(160, "passes.nim");
		{
			NIM_BOOL LOC4;
			nimln(160, "passes.nim");
			nimln(160, "passes.nim");
			LOC4 = processtoplevelstmt_218328(importstmt, a);
			if (!!(LOC4)) goto LA5;
			nimln(160, "passes.nim");
			goto LA1;
		}
		LA5: ;
		nimln(1369, "system.nim");
		i_218444 = addInt(i_218444, 1);
	} LA1: ;
	popFrame();
}

static N_INLINE(NI, sonslen_170003)(tnode169647* n) {
	NI result;
	nimfr("sonsLen", "ast.nim")
	result = 0;
	nimln(1175, "ast.nim");
	{
		nimln(1175, "ast.nim");
		if (((TMP3057[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3058));
		if (!(*n).kindU.S6.Sons == 0) goto LA3;
		nimln(1175, "ast.nim");
		result = 0;
	}
	goto LA1;
	LA3: ;
	{
		nimln(1176, "ast.nim");
		nimln(1176, "ast.nim");
		if (((TMP3057[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3058));
		result = (*n).kindU.S6.Sons->Sup.len;
	}
	LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(void, processmodule_218049)(tsym169677* module, tllstream159204* stream, trodreader207023* rd) {
	tparsers194026 p;
	tpasscontextarray218147 a;
	tllstream159204* s;
	NI32 fileidx;
	nimfr("processModule", "passes.nim")
	memset((void*)&p, 0, sizeof(p));
	objectInit(&p, (&NTI194026));
	memset((void*)a, 0, sizeof(a));
	s = 0;
	nimln(167, "passes.nim");
	fileidx = ((NI32) ((*module).Position));
	nimln(168, "passes.nim");
	{
		nimln(168, "passes.nim");
		if (!(rd == NIM_NIL)) goto LA3;
		nimln(169, "passes.nim");
		openpasses_218237(a, module);
		nimln(170, "passes.nim");
		{
			NimStringDesc* filename;
			nimln(170, "passes.nim");
			if (!(stream == NIM_NIL)) goto LA7;
			nimln(171, "passes.nim");
			filename = tofullpath_129098(fileidx);
			nimln(172, "passes.nim");
			s = llstreamopen_159227(filename, ((NU8) 0));
			nimln(173, "passes.nim");
			{
				nimln(173, "passes.nim");
				if (!(s == NIM_NIL)) goto LA11;
				nimln(174, "passes.nim");
				rawmessage_129521(((NU16) 3), filename);
				nimln(175, "passes.nim");
				goto BeforeRet;
			}
			LA11: ;
		}
		goto LA5;
		LA7: ;
		{
			nimln(177, "passes.nim");
			s = stream;
		}
		LA5: ;
		nimln(178, "passes.nim");
		while (1) {
			nimln(179, "passes.nim");
			openparsers_194034(&p, fileidx, s);
			nimln(181, "passes.nim");
			{
				nimln(717, "system.nim");
				nimln(717, "system.nim");
				if (!!((((*module).Flags &(1<<((((NU8) 13))&31)))!=0))) goto LA17;
				nimln(186, "passes.nim");
				processimplicits_218423(implicitimports_105240, ((NU8) 115), a);
				nimln(187, "passes.nim");
				processimplicits_218423(implicitincludes_105261, ((NU8) 120), a);
			}
			LA17: ;
			nimln(189, "passes.nim");
			while (1) {
				tnode169647* n;
				nimln(190, "passes.nim");
				n = parsetoplevelstmt_194051(&p);
				nimln(191, "passes.nim");
				{
					nimln(191, "passes.nim");
					if (!((*n).Kind == ((NU8) 1))) goto LA22;
					nimln(191, "passes.nim");
					goto LA19;
				}
				LA22: ;
				nimln(192, "passes.nim");
				{
					NIM_BOOL LOC26;
					nimln(192, "passes.nim");
					nimln(192, "passes.nim");
					LOC26 = processtoplevelstmt_218328(n, a);
					if (!!(LOC26)) goto LA27;
					nimln(192, "passes.nim");
					goto LA19;
				}
				LA27: ;
			} LA19: ;
			nimln(194, "passes.nim");
			closeparsers_194041(&p);
			nimln(195, "passes.nim");
			{
				nimln(684, "system.nim");
				nimln(684, "system.nim");
				if (!!(((*s).Kind == ((NU8) 3)))) goto LA31;
				nimln(195, "passes.nim");
				goto LA14;
			}
			LA31: ;
		} LA14: ;
		nimln(196, "passes.nim");
		closepasses_218301(a);
		nimln(198, "passes.nim");
		idsynchronizationpoint_168445(1000);
	}
	goto LA1;
	LA3: ;
	{
		tnode169647* n;
		NI i_218533;
		NI HEX3Atmp_218550;
		NI LOC34;
		NI TMP3065;
		NI res_218552;
		nimln(200, "passes.nim");
		openpassescached_218263(a, module, rd);
		nimln(201, "passes.nim");
		n = loadinitsection_207064(rd);
		i_218533 = 0;
		HEX3Atmp_218550 = 0;
		nimln(202, "passes.nim");
		nimln(202, "passes.nim");
		nimln(202, "passes.nim");
		LOC34 = sonslen_170003(n);
		TMP3065 = subInt(LOC34, 1);
		HEX3Atmp_218550 = (NI32)(TMP3065);
		nimln(1274, "system.nim");
		res_218552 = 0;
		nimln(1275, "system.nim");
		while (1) {
			nimln(1275, "system.nim");
			if (!(res_218552 <= HEX3Atmp_218550)) goto LA35;
			nimln(1274, "system.nim");
			i_218533 = res_218552;
			nimln(202, "passes.nim");
			if (((TMP3057[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3058));
			if ((NU)(i_218533) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
			processtoplevelstmtcached_218364((*n).kindU.S6.Sons->data[i_218533], a);
			nimln(1277, "system.nim");
			res_218552 = addInt(res_218552, 1);
		} LA35: ;
		nimln(203, "passes.nim");
		closepassescached_218391(a);
	}
	LA1: ;
	BeforeRet: ;
	popFrame();
}
N_NOINLINE(void, passesInit)(void) {
	nimfr("passes", "passes.nim")
	popFrame();
}

N_NOINLINE(void, passesDatInit)(void) {
static TNimNode TMP2946[1];
NTI218003.size = sizeof(tpasscontext218003);
NTI218003.kind = 17;
NTI218003.base = (&NTI1009);
NTI218003.flags = 3;
TMP2946[0].kind = 1;
TMP2946[0].offset = offsetof(tpasscontext218003, Fromcache);
TMP2946[0].typ = (&NTI132);
TMP2946[0].name = "fromCache";
NTI218003.node = &TMP2946[0];
}

