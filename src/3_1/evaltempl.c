/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"
typedef struct tnode168647 tnode168647;
typedef struct templctx244006 templctx244006;
typedef struct ttype168681 ttype168681;
typedef struct tlineinfo127308 tlineinfo127308;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tsym168677 tsym168677;
typedef struct tident130015 tident130015;
typedef struct tnodeseq168641 tnodeseq168641;
typedef struct tidobj130009 tidobj130009;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct ttypeseq168679 ttypeseq168679;
typedef struct TY168771 TY168771;
typedef struct tinstantiation168667 tinstantiation168667;
typedef struct tscope168671 tscope168671;
typedef struct tstrtable168651 tstrtable168651;
typedef struct tsymseq168649 tsymseq168649;
typedef struct tloc168661 tloc168661;
typedef struct trope125007 trope125007;
typedef struct tlib168665 tlib168665;
typedef struct tidtable168693 tidtable168693;
typedef struct tidpairseq168691 tidpairseq168691;
typedef struct tidpair168689 tidpair168689;
typedef struct TY71482 TY71482;
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
typedef struct TY168763 TY168763;
typedef struct tlistentry100011 tlistentry100011;
typedef struct tbasechunk21641 tbasechunk21641;
typedef struct tfreecell21633 tfreecell21633;
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
struct tstrtable168651 {
NI Counter;
tsymseq168649* Data;
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
struct tidpair168689 {
tidobj130009* Key;
TNimObject* Val;
};
struct tidtable168693 {
NI Counter;
tidpairseq168691* Data;
};
struct templctx244006 {
tsym168677* Owner;
tsym168677* Gensymowner;
tidtable168693 Mapping;
};
struct TY71482 {
NimStringDesc* Field0;
NI Field1;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
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
struct tident130015 {
  tidobj130009 Sup;
NimStringDesc* S;
tident130015* Next;
NI H;
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
struct tnodeseq168641 {
  TGenericSeq Sup;
  tnode168647* data[SEQ_DECL_SIZE];
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
struct tidpairseq168691 {
  TGenericSeq Sup;
  tidpair168689 data[SEQ_DECL_SIZE];
};
struct TY168763 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, evaltemplateaux_244011)(tnode168647* templ, tnode168647* actual, templctx244006* c, tnode168647* result);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, len_169082)(tnode168647* n);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(void, add_169176)(tnode168647* father, tnode168647* son);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(tnode168647*, copytree_169059)(tnode168647* src);
N_NIMCALL(void, internalerror_128702)(NimStringDesc* errmsg);
N_NIMCALL(TNimObject*, idtableget_175137)(tidtable168693 t, tidobj130009* key);
N_NIMCALL(void, chckObj)(TNimType* obj, TNimType* subclass);
N_NIMCALL(tsym168677*, copysym_168969)(tsym168677* s, NIM_BOOL keepid);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell38849*, usrtocell_42243)(void* usr);
static N_INLINE(void, rtladdzct_43402)(tcell38849* c);
N_NOINLINE(void, addzct_42215)(tcellseq38865* s, tcell38849* c);
N_NIMCALL(void, idtableput_175147)(tidtable168693* t, tidobj130009* key, TNimObject* val);
N_NIMCALL(tnode168647*, newsymnode_170096)(tsym168677* sym, tlineinfo127308 info);
N_NIMCALL(tnode168647*, copynode_169055)(tnode168647* src);
static N_INLINE(NI, sonslen_169003)(tnode168647* n);
N_NIMCALL(tnode168647*, evaltemplateargs_244201)(tnode168647* n, tsym168677* s);
static N_INLINE(NI, sonslen_169007)(ttype168681* n);
N_NIMCALL(void, globalerror_128663)(tlineinfo127308 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(tnode168647*, newnodei_168921)(NU8 kind, tlineinfo127308 info);
N_NIMCALL(void, localerror_128676)(tlineinfo127308 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(void, addson_169029)(tnode168647* father, tnode168647* son);
N_NIMCALL(tnode168647*, evaltemplate_244280)(tnode168647* n, tsym168677* tmpl, tsym168677* gensymowner);
N_NIMCALL(void, initidtable_168942)(tidtable168693* x);
N_NIMCALL(tnode168647*, getbody_208577)(tsym168677* s);
static N_INLINE(NIM_BOOL, isatom_173441)(tnode168647* n);
N_NIMCALL(NimStringDesc*, rendertree_186046)(tnode168647* n, NU8 renderflags);
static N_INLINE(NI, safelen_169124)(tnode168647* n);
N_NIMCALL(NimStringDesc*, HEX24_128780)(TY71482 x);
static NIM_CONST TY168850 TMP3365 = {
0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP3366, "sym", 3);
static NIM_CONST TY168850 TMP3367 = {
0xEC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP3368, "sons", 4);
STRING_LITERAL(TMP3370, "compiler/evaltempl.nim", 22);
NIM_CONST TY71482 TMP3369 = {((NimStringDesc*) &TMP3370),
34}
;
STRING_LITERAL(TMP3372, "", 0);
extern TFrame* frameptr_12027;
extern TNimType NTI168677; /* TSym */
extern tgcheap40816 gch_40842;
NI evaltemplatecounter_244278;

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
		if (((TMP3367[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3368));
		if (!(*n).kindU.S6.Sons == 0) goto LA3;
		nimln(852, "ast.nim");
		result = 0;
	}
	goto LA1;
	LA3: ;
	{
		nimln(853, "ast.nim");
		nimln(853, "ast.nim");
		if (((TMP3367[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3368));
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

static N_INLINE(NI, sonslen_169003)(tnode168647* n) {
	NI result;
	nimfr("sonsLen", "ast.nim")
	result = 0;
	nimln(1175, "ast.nim");
	{
		nimln(1175, "ast.nim");
		if (((TMP3367[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3368));
		if (!(*n).kindU.S6.Sons == 0) goto LA3;
		nimln(1175, "ast.nim");
		result = 0;
	}
	goto LA1;
	LA3: ;
	{
		nimln(1176, "ast.nim");
		nimln(1176, "ast.nim");
		if (((TMP3367[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3368));
		result = (*n).kindU.S6.Sons->Sup.len;
	}
	LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(void, evaltemplateaux_244011)(tnode168647* templ, tnode168647* actual, templctx244006* c, tnode168647* result) {
	nimfr("evalTemplateAux", "evaltempl.nim")
	nimln(23, "evaltempl.nim");
	switch ((*templ).Kind) {
	case ((NU8) 3):
	{
		tsym168677* s;
		nimln(25, "evaltempl.nim");
		if (!(((TMP3365[(*templ).Kind/8] &(1<<((*templ).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3366));
		s = (*templ).kindU.S4.Sym;
		nimln(26, "evaltempl.nim");
		{
			nimln(26, "evaltempl.nim");
			if (!((*(*s).Owner).Sup.Id == (*(*c).Owner).Sup.Id)) goto LA4;
			nimln(27, "evaltempl.nim");
			{
				tnode168647* x;
				nimln(27, "evaltempl.nim");
				if (!((*s).Kind == ((NU8) 3))) goto LA8;
				nimln(28, "evaltempl.nim");
				if (((TMP3367[(*actual).Kind/8] &(1<<((*actual).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3368));
				if ((NU)((*s).Position) >= (NU)((*actual).kindU.S6.Sons->Sup.len)) raiseIndexError();
				x = (*actual).kindU.S6.Sons->data[(*s).Position];
				nimln(29, "evaltempl.nim");
				{
					tnode168647* y_244052;
					NI i_244101;
					NI HEX3Atmp_244103;
					NI LOC14;
					NI res_244105;
					nimln(29, "evaltempl.nim");
					if (!((*x).Kind == ((NU8) 145))) goto LA12;
					y_244052 = 0;
					i_244101 = 0;
					HEX3Atmp_244103 = 0;
					nimln(1376, "ast.nim");
					nimln(1376, "ast.nim");
					nimln(1376, "ast.nim");
					LOC14 = len_169082(x);
					HEX3Atmp_244103 = subInt(LOC14, 1);
					nimln(1281, "system.nim");
					res_244105 = 0;
					nimln(1282, "system.nim");
					while (1) {
						nimln(1282, "system.nim");
						if (!(res_244105 <= HEX3Atmp_244103)) goto LA15;
						nimln(1281, "system.nim");
						i_244101 = res_244105;
						nimln(1376, "ast.nim");
						if (((TMP3367[(*x).Kind/8] &(1<<((*x).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3368));
						if ((NU)(i_244101) >= (NU)((*x).kindU.S6.Sons->Sup.len)) raiseIndexError();
						y_244052 = (*x).kindU.S6.Sons->data[i_244101];
						nimln(30, "evaltempl.nim");
						add_169176(result, y_244052);
						nimln(1284, "system.nim");
						res_244105 = addInt(res_244105, 1);
					} LA15: ;
				}
				goto LA10;
				LA12: ;
				{
					tnode168647* LOC17;
					nimln(32, "evaltempl.nim");
					nimln(32, "evaltempl.nim");
					LOC17 = 0;
					LOC17 = copytree_169059(x);
					add_169176(result, LOC17);
				}
				LA10: ;
			}
			goto LA6;
			LA8: ;
			{
				tsym168677* x;
				TNimObject* LOC24;
				tnode168647* LOC29;
				nimln(793, "msgs.nim");
				{
					NimStringDesc* LOC23;
					nimln(793, "msgs.nim");
					nimln(716, "system.nim");
					if (!!((((*s).Flags &(1<<((((NU8) 31))&31)))!=0))) goto LA21;
					nimln(793, "msgs.nim");
					nimln(793, "msgs.nim");
					LOC23 = 0;
					LOC23 = HEX24_128780(TMP3369);
					internalerror_128702(LOC23);
				}
				LA21: ;
				nimln(35, "evaltempl.nim");
				nimln(35, "evaltempl.nim");
				LOC24 = 0;
				LOC24 = idtableget_175137((*c).Mapping, &s->Sup);
				if (LOC24) chckObj((*LOC24).m_type, (&NTI168677));
				x = ((tsym168677*) (LOC24));
				nimln(36, "evaltempl.nim");
				{
					nimln(36, "evaltempl.nim");
					if (!(x == NIM_NIL)) goto LA27;
					nimln(37, "evaltempl.nim");
					x = copysym_168969(s, NIM_FALSE);
					nimln(38, "evaltempl.nim");
					asgnRefNoCycle((void**) &(*x).Owner, (*c).Gensymowner);
					nimln(39, "evaltempl.nim");
					idtableput_175147(&(*c).Mapping, &s->Sup, &x->Sup.Sup);
				}
				LA27: ;
				nimln(40, "evaltempl.nim");
				nimln(40, "evaltempl.nim");
				LOC29 = 0;
				LOC29 = newsymnode_170096(x, (*templ).Info);
				add_169176(result, LOC29);
			}
			LA6: ;
		}
		goto LA2;
		LA4: ;
		{
			tnode168647* LOC31;
			nimln(42, "evaltempl.nim");
			nimln(42, "evaltempl.nim");
			LOC31 = 0;
			LOC31 = copynode_169055(templ);
			add_169176(result, LOC31);
		}
		LA2: ;
	}
	break;
	case ((NU8) 0) ... ((NU8) 2):
	case ((NU8) 4) ... ((NU8) 23):
	{
		tnode168647* LOC33;
		nimln(44, "evaltempl.nim");
		nimln(44, "evaltempl.nim");
		LOC33 = 0;
		LOC33 = copynode_169055(templ);
		add_169176(result, LOC33);
	}
	break;
	default:
	{
		tnode168647* res;
		NI i_244089;
		NI HEX3Atmp_244106;
		NI LOC35;
		NI TMP3371;
		NI res_244108;
		nimln(46, "evaltempl.nim");
		res = copynode_169055(templ);
		i_244089 = 0;
		HEX3Atmp_244106 = 0;
		nimln(47, "evaltempl.nim");
		nimln(47, "evaltempl.nim");
		nimln(47, "evaltempl.nim");
		LOC35 = sonslen_169003(templ);
		TMP3371 = subInt(LOC35, 1);
		HEX3Atmp_244106 = (NI32)(TMP3371);
		nimln(1274, "system.nim");
		res_244108 = 0;
		nimln(1275, "system.nim");
		while (1) {
			nimln(1275, "system.nim");
			if (!(res_244108 <= HEX3Atmp_244106)) goto LA36;
			nimln(1274, "system.nim");
			i_244089 = res_244108;
			nimln(48, "evaltempl.nim");
			if (((TMP3367[(*templ).Kind/8] &(1<<((*templ).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3368));
			if ((NU)(i_244089) >= (NU)((*templ).kindU.S6.Sons->Sup.len)) raiseIndexError();
			evaltemplateaux_244011((*templ).kindU.S6.Sons->data[i_244089], actual, c, res);
			nimln(1277, "system.nim");
			res_244108 = addInt(res_244108, 1);
		} LA36: ;
		nimln(49, "evaltempl.nim");
		add_169176(result, res);
	}
	break;
	}
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

N_NIMCALL(tnode168647*, evaltemplateargs_244201)(tnode168647* n, tsym168677* s) {
	tnode168647* result;
	NI a;
	NI f;
	NI i_244218;
	NI HEX3Atmp_244271;
	NI TMP3373;
	NI res_244273;
	nimfr("evalTemplateArgs", "evaltempl.nim")
	result = 0;
	a = 0;
	nimln(81, "evaltempl.nim");
	switch ((*n).Kind) {
	case ((NU8) 27):
	case ((NU8) 29):
	case ((NU8) 30):
	case ((NU8) 31):
	case ((NU8) 26):
	case ((NU8) 28):
	{
		nimln(83, "evaltempl.nim");
		a = sonslen_169003(n);
	}
	break;
	default:
	{
		nimln(84, "evaltempl.nim");
		a = 0;
	}
	break;
	}
	nimln(85, "evaltempl.nim");
	f = sonslen_169007((*s).Typ);
	nimln(86, "evaltempl.nim");
	{
		nimln(692, "system.nim");
		if (!(f < a)) goto LA5;
		nimln(86, "evaltempl.nim");
		globalerror_128663((*n).Info, ((NU16) 133), ((NimStringDesc*) &TMP3372));
	}
	LA5: ;
	nimln(88, "evaltempl.nim");
	result = newnodei_168921(((NU8) 145), (*n).Info);
	i_244218 = 0;
	HEX3Atmp_244271 = 0;
	nimln(89, "evaltempl.nim");
	nimln(89, "evaltempl.nim");
	TMP3373 = subInt(f, 1);
	HEX3Atmp_244271 = (NI32)(TMP3373);
	nimln(1274, "system.nim");
	res_244273 = 1;
	nimln(1275, "system.nim");
	while (1) {
		tnode168647* arg;
		nimln(1275, "system.nim");
		if (!(res_244273 <= HEX3Atmp_244271)) goto LA7;
		nimln(1274, "system.nim");
		i_244218 = res_244273;
		nimln(90, "evaltempl.nim");
		nimln(90, "evaltempl.nim");
		{
			nimln(90, "evaltempl.nim");
			if (!(i_244218 < a)) goto LA10;
			if (((TMP3367[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3368));
			if ((NU)(i_244218) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
			arg = (*n).kindU.S6.Sons->data[i_244218];
		}
		goto LA8;
		LA10: ;
		{
			nimln(90, "evaltempl.nim");
			if (((TMP3367[(*(*(*s).Typ).N).Kind/8] &(1<<((*(*(*s).Typ).N).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3368));
			if ((NU)(i_244218) >= (NU)((*(*(*s).Typ).N).kindU.S6.Sons->Sup.len)) raiseIndexError();
			if (!(((TMP3365[(*(*(*(*s).Typ).N).kindU.S6.Sons->data[i_244218]).Kind/8] &(1<<((*(*(*(*s).Typ).N).kindU.S6.Sons->data[i_244218]).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3366));
			arg = copytree_169059((*(*(*(*(*s).Typ).N).kindU.S6.Sons->data[i_244218]).kindU.S4.Sym).Ast);
		}
		LA8: ;
		nimln(91, "evaltempl.nim");
		{
			NIM_BOOL LOC15;
			nimln(91, "evaltempl.nim");
			nimln(91, "evaltempl.nim");
			LOC15 = (arg == NIM_NIL);
			if (LOC15) goto LA16;
			nimln(91, "evaltempl.nim");
			LOC15 = ((*arg).Kind == ((NU8) 1));
			LA16: ;
			if (!LOC15) goto LA17;
			nimln(92, "evaltempl.nim");
			localerror_128676((*n).Info, ((NU16) 133), ((NimStringDesc*) &TMP3372));
		}
		LA17: ;
		nimln(93, "evaltempl.nim");
		addson_169029(result, arg);
		nimln(1277, "system.nim");
		res_244273 = addInt(res_244273, 1);
	} LA7: ;
	popFrame();
	return result;
}

static N_INLINE(NIM_BOOL, isatom_173441)(tnode168647* n) {
	NIM_BOOL result;
	NIM_BOOL LOC1;
	nimfr("isAtom", "ast.nim")
	result = 0;
	nimln(1379, "ast.nim");
	nimln(1379, "ast.nim");
	nimln(688, "system.nim");
	LOC1 = (((NU8) 0) <= (*n).Kind);
	if (!(LOC1)) goto LA2;
	nimln(1379, "ast.nim");
	LOC1 = ((*n).Kind <= ((NU8) 23));
	LA2: ;
	result = LOC1;
	popFrame();
	return result;
}

static N_INLINE(NI, safelen_169124)(tnode168647* n) {
	NI result;
	nimfr("safeLen", "ast.nim")
	result = 0;
	nimln(857, "ast.nim");
	{
		NIM_BOOL LOC3;
		nimln(857, "ast.nim");
		nimln(716, "system.nim");
		LOC3 = ((*n).Kind >= ((NU8) 0) && (*n).Kind <= ((NU8) 23));
		if (LOC3) goto LA4;
		nimln(857, "ast.nim");
		if (((TMP3367[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3368));
		LOC3 = (*n).kindU.S6.Sons == 0;
		LA4: ;
		if (!LOC3) goto LA5;
		nimln(857, "ast.nim");
		result = 0;
	}
	goto LA1;
	LA5: ;
	{
		nimln(858, "ast.nim");
		nimln(858, "ast.nim");
		if (((TMP3367[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3368));
		result = (*n).kindU.S6.Sons->Sup.len;
	}
	LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(tnode168647*, evaltemplate_244280)(tnode168647* n, tsym168677* tmpl, tsym168677* gensymowner) {
	tnode168647* result;
	tnode168647* args;
	templctx244006 ctx;
	tnode168647* body;
	nimfr("evalTemplate", "evaltempl.nim")
	result = 0;
	nimln(99, "evaltempl.nim");
	evaltemplatecounter_244278 = addInt(evaltemplatecounter_244278, 1);
	nimln(100, "evaltempl.nim");
	{
		nimln(692, "system.nim");
		if (!(100 < evaltemplatecounter_244278)) goto LA3;
		nimln(101, "evaltempl.nim");
		globalerror_128663((*n).Info, ((NU16) 183), ((NimStringDesc*) &TMP3372));
		nimln(102, "evaltempl.nim");
		result = n;
	}
	LA3: ;
	nimln(105, "evaltempl.nim");
	args = evaltemplateargs_244201(n, tmpl);
	memset((void*)&ctx, 0, sizeof(ctx));
	nimln(107, "evaltempl.nim");
	ctx.Owner = tmpl;
	nimln(108, "evaltempl.nim");
	ctx.Gensymowner = gensymowner;
	nimln(109, "evaltempl.nim");
	initidtable_168942(&ctx.Mapping);
	nimln(111, "evaltempl.nim");
	body = getbody_208577(tmpl);
	nimln(112, "evaltempl.nim");
	{
		NIM_BOOL LOC7;
		nimln(112, "evaltempl.nim");
		LOC7 = isatom_173441(body);
		if (!LOC7) goto LA8;
		nimln(113, "evaltempl.nim");
		result = newnodei_168921(((NU8) 37), (*body).Info);
		nimln(114, "evaltempl.nim");
		evaltemplateaux_244011(body, args, &ctx, result);
		nimln(115, "evaltempl.nim");
		{
			NI LOC12;
			nimln(115, "evaltempl.nim");
			nimln(115, "evaltempl.nim");
			LOC12 = len_169082(result);
			if (!(LOC12 == 1)) goto LA13;
			nimln(115, "evaltempl.nim");
			if (((TMP3367[(*result).Kind/8] &(1<<((*result).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3368));
			if ((NU)(0) >= (NU)((*result).kindU.S6.Sons->Sup.len)) raiseIndexError();
			result = (*result).kindU.S6.Sons->data[0];
		}
		goto LA10;
		LA13: ;
		{
			NimStringDesc* LOC16;
			nimln(117, "evaltempl.nim");
			nimln(118, "evaltempl.nim");
			LOC16 = 0;
			LOC16 = rendertree_186046(result, 4);
			globalerror_128663((*result).Info, ((NU16) 1), LOC16);
		}
		LA10: ;
	}
	goto LA5;
	LA8: ;
	{
		NI i_244326;
		NI HEX3Atmp_244351;
		NI LOC18;
		NI TMP3374;
		NI res_244353;
		nimln(120, "evaltempl.nim");
		result = copynode_169055(body);
		i_244326 = 0;
		HEX3Atmp_244351 = 0;
		nimln(122, "evaltempl.nim");
		nimln(122, "evaltempl.nim");
		nimln(122, "evaltempl.nim");
		LOC18 = safelen_169124(body);
		TMP3374 = subInt(LOC18, 1);
		HEX3Atmp_244351 = (NI32)(TMP3374);
		nimln(1274, "system.nim");
		res_244353 = 0;
		nimln(1275, "system.nim");
		while (1) {
			nimln(1275, "system.nim");
			if (!(res_244353 <= HEX3Atmp_244351)) goto LA19;
			nimln(1274, "system.nim");
			i_244326 = res_244353;
			nimln(123, "evaltempl.nim");
			if (((TMP3367[(*body).Kind/8] &(1<<((*body).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3368));
			if ((NU)(i_244326) >= (NU)((*body).kindU.S6.Sons->Sup.len)) raiseIndexError();
			evaltemplateaux_244011((*body).kindU.S6.Sons->data[i_244326], args, &ctx, result);
			nimln(1277, "system.nim");
			res_244353 = addInt(res_244353, 1);
		} LA19: ;
	}
	LA5: ;
	nimln(125, "evaltempl.nim");
	evaltemplatecounter_244278 = subInt(evaltemplatecounter_244278, 1);
	popFrame();
	return result;
}
N_NOINLINE(void, evaltemplInit)(void) {
	nimfr("evaltempl", "evaltempl.nim")
	nimln(95, "evaltempl.nim");
	evaltemplatecounter_244278 = 0;
	popFrame();
}

N_NOINLINE(void, evaltemplDatInit)(void) {
}

