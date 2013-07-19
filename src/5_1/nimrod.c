/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>

#include <setjmp.h>

#include <stdlib.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct E_Base E_Base;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TSafePoint TSafePoint;
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
typedef struct TY94237 TY94237;
typedef struct tbasechunk21641 tbasechunk21641;
typedef struct tfreecell21633 tfreecell21633;
struct TGenericSeq {
NI len;
NI reserved;
};
typedef NIM_CHAR TY611[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY611 data;
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
struct E_Base {
  TNimObject Sup;
E_Base* parent;
NCSTRING name;
NimStringDesc* message;
NimStringDesc* trace;
};
typedef struct {
N_NIMCALL_PTR(NIM_BOOL, ClPrc) (E_Base* e, void* ClEnv);
void* ClEnv;
} TY10626;
struct TSafePoint {
TSafePoint* prev;
NI status;
jmp_buf context;
NIM_BOOL hasRaiseAction;
TY10626 raiseAction;
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
struct TY94237 {
NimStringDesc* Field0;
NimStringDesc* Field1;
NimStringDesc* Field2;
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
N_NIMCALL(NimStringDesc*, prependcurdir_423401)(NimStringDesc* f);
N_NIMCALL(NIM_BOOL, nosisAbsolute)(NimStringDesc* path);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(void, handlecmdline_423603)(void);
N_NIMCALL(NI, paramcount_98633)(void);
N_NIMCALL(void, writecommandlineusage_142002)(void);
N_NIMCALL(void, processcmdline_418007)(NU8 pass, NimStringDesc* cmd);
static N_INLINE(void, pushSafePoint)(TSafePoint* s);
N_NIMCALL(NimStringDesc*, canonicalizepath_105315)(NimStringDesc* path);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell38849*, usrtocell_42243)(void* usr);
static N_INLINE(void, rtladdzct_43402)(tcell38849* c);
N_NOINLINE(void, addzct_42215)(tcellseq38865* s, tcell38849* c);
static N_INLINE(void, popSafePoint)(void);
static N_INLINE(void, setFrame)(TFrame* s);
N_NIMCALL(NIM_BOOL, isObj)(TNimType* obj, TNimType* subclass);
static N_INLINE(E_Base*, getCurrentException)(void);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(void, popCurrentException)(void);
N_NIMCALL(void, reraiseException)(void);
N_NIMCALL(void, nossplitFile)(NimStringDesc* path, TY94237* Result);
N_NOINLINE(void, chckNil)(void* p);
N_NIMCALL(NimStringDesc*, nosgetCurrentDir)(void);
N_NIMCALL(void, loadconfigs_165454)(NimStringDesc* cfg);
N_NIMCALL(void, initvars_138646)(void);
N_NIMCALL(void, maincommand_421812)(void);
N_NIMCALL(NimStringDesc*, gcgetstatistics_6021)(void);
N_NIMCALL(NimStringDesc*, quoteifcontainswhite_78720)(NimStringDesc* s);
N_NIMCALL(NimStringDesc*, completecfilepath_138675)(NimStringDesc* cfile, NIM_BOOL createsubdir);
N_NIMCALL(NimStringDesc*, nosChangeFileExt)(NimStringDesc* filename, NimStringDesc* ext);
N_NIMCALL(void, execexternalprogram_138707)(NimStringDesc* cmd);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(void, gcdisablemarkandsweep_6019)(void);
N_NIMCALL(void, initdefines_132067)(void);
static N_INLINE(void, initStackBottom)(void);
N_NOINLINE(void, setStackBottom)(void* thestackbottom);
N_NOINLINE(void, systemInit)(void);
N_NOINLINE(void, systemDatInit)(void);
N_NOINLINE(void, parseutilsInit)(void);
N_NOINLINE(void, parseutilsDatInit)(void);
N_NOINLINE(void, strutilsInit)(void);
N_NOINLINE(void, strutilsDatInit)(void);
N_NOINLINE(void, timesInit)(void);
N_NOINLINE(void, timesDatInit)(void);
N_NOINLINE(void, posixInit)(void);
N_NOINLINE(void, posixDatInit)(void);
N_NOINLINE(void, osInit)(void);
N_NOINLINE(void, osDatInit)(void);
N_NOINLINE(void, listsInit)(void);
N_NOINLINE(void, listsDatInit)(void);
N_NOINLINE(void, hashesInit)(void);
N_NOINLINE(void, hashesDatInit)(void);
N_NOINLINE(void, strtabsInit)(void);
N_NOINLINE(void, strtabsDatInit)(void);
N_NOINLINE(void, optionsInit)(void);
N_NOINLINE(void, optionsDatInit)(void);
N_NOINLINE(void, mathInit)(void);
N_NOINLINE(void, mathDatInit)(void);
N_NOINLINE(void, tablesInit)(void);
N_NOINLINE(void, tablesDatInit)(void);
N_NOINLINE(void, socketsInit)(void);
N_NOINLINE(void, socketsDatInit)(void);
N_NOINLINE(void, platformInit)(void);
N_NOINLINE(void, platformDatInit)(void);
N_NOINLINE(void, crcInit)(void);
N_NOINLINE(void, crcDatInit)(void);
N_NOINLINE(void, ropesInit)(void);
N_NOINLINE(void, ropesDatInit)(void);
N_NOINLINE(void, msgsInit)(void);
N_NOINLINE(void, msgsDatInit)(void);
N_NOINLINE(void, nversionInit)(void);
N_NOINLINE(void, nversionDatInit)(void);
N_NOINLINE(void, identsInit)(void);
N_NOINLINE(void, identsDatInit)(void);
N_NOINLINE(void, condsymsInit)(void);
N_NOINLINE(void, condsymsDatInit)(void);
N_NOINLINE(void, streamsInit)(void);
N_NOINLINE(void, streamsDatInit)(void);
N_NOINLINE(void, osprocInit)(void);
N_NOINLINE(void, osprocDatInit)(void);
N_NOINLINE(void, extccompInit)(void);
N_NOINLINE(void, extccompDatInit)(void);
N_NOINLINE(void, wordrecgInit)(void);
N_NOINLINE(void, wordrecgDatInit)(void);
N_NOINLINE(void, babelcmdInit)(void);
N_NOINLINE(void, babelcmdDatInit)(void);
N_NOINLINE(void, commandsInit)(void);
N_NOINLINE(void, commandsDatInit)(void);
N_NOINLINE(void, llstreamInit)(void);
N_NOINLINE(void, llstreamDatInit)(void);
N_NOINLINE(void, nimlexbaseInit)(void);
N_NOINLINE(void, nimlexbaseDatInit)(void);
N_NOINLINE(void, lexerInit)(void);
N_NOINLINE(void, lexerDatInit)(void);
N_NOINLINE(void, nimconfInit)(void);
N_NOINLINE(void, nimconfDatInit)(void);
N_NOINLINE(void, intsetsInit)(void);
N_NOINLINE(void, intsetsDatInit)(void);
N_NOINLINE(void, idgenInit)(void);
N_NOINLINE(void, idgenDatInit)(void);
N_NOINLINE(void, astInit)(void);
N_NOINLINE(void, astDatInit)(void);
N_NOINLINE(void, rodutilsInit)(void);
N_NOINLINE(void, rodutilsDatInit)(void);
N_NOINLINE(void, astalgoInit)(void);
N_NOINLINE(void, astalgoDatInit)(void);
N_NOINLINE(void, parserInit)(void);
N_NOINLINE(void, parserDatInit)(void);
N_NOINLINE(void, pbracesInit)(void);
N_NOINLINE(void, pbracesDatInit)(void);
N_NOINLINE(void, rendererInit)(void);
N_NOINLINE(void, rendererDatInit)(void);
N_NOINLINE(void, filtersInit)(void);
N_NOINLINE(void, filtersDatInit)(void);
N_NOINLINE(void, filter_tmplInit)(void);
N_NOINLINE(void, filter_tmplDatInit)(void);
N_NOINLINE(void, syntaxesInit)(void);
N_NOINLINE(void, syntaxesDatInit)(void);
N_NOINLINE(void, treesInit)(void);
N_NOINLINE(void, treesDatInit)(void);
N_NOINLINE(void, typesInit)(void);
N_NOINLINE(void, typesDatInit)(void);
N_NOINLINE(void, memfilesInit)(void);
N_NOINLINE(void, memfilesDatInit)(void);
N_NOINLINE(void, rodreadInit)(void);
N_NOINLINE(void, rodreadDatInit)(void);
N_NOINLINE(void, magicsysInit)(void);
N_NOINLINE(void, magicsysDatInit)(void);
N_NOINLINE(void, bitsetsInit)(void);
N_NOINLINE(void, bitsetsDatInit)(void);
N_NOINLINE(void, nimsetsInit)(void);
N_NOINLINE(void, nimsetsDatInit)(void);
N_NOINLINE(void, semthreadsInit)(void);
N_NOINLINE(void, semthreadsDatInit)(void);
N_NOINLINE(void, passesInit)(void);
N_NOINLINE(void, passesDatInit)(void);
N_NOINLINE(void, treetabInit)(void);
N_NOINLINE(void, treetabDatInit)(void);
N_NOINLINE(void, saturateInit)(void);
N_NOINLINE(void, saturateDatInit)(void);
N_NOINLINE(void, semfoldInit)(void);
N_NOINLINE(void, semfoldDatInit)(void);
N_NOINLINE(void, guardsInit)(void);
N_NOINLINE(void, guardsDatInit)(void);
N_NOINLINE(void, sempass2Init)(void);
N_NOINLINE(void, sempass2DatInit)(void);
N_NOINLINE(void, cgmethInit)(void);
N_NOINLINE(void, cgmethDatInit)(void);
N_NOINLINE(void, lambdaliftingInit)(void);
N_NOINLINE(void, lambdaliftingDatInit)(void);
N_NOINLINE(void, transfInit)(void);
N_NOINLINE(void, transfDatInit)(void);
N_NOINLINE(void, evaltemplInit)(void);
N_NOINLINE(void, evaltemplDatInit)(void);
N_NOINLINE(void, evalsInit)(void);
N_NOINLINE(void, evalsDatInit)(void);
N_NOINLINE(void, semdataInit)(void);
N_NOINLINE(void, semdataDatInit)(void);
N_NOINLINE(void, lookupsInit)(void);
N_NOINLINE(void, lookupsDatInit)(void);
N_NOINLINE(void, importerInit)(void);
N_NOINLINE(void, importerDatInit)(void);
N_NOINLINE(void, rodwriteInit)(void);
N_NOINLINE(void, rodwriteDatInit)(void);
N_NOINLINE(void, procfindInit)(void);
N_NOINLINE(void, procfindDatInit)(void);
N_NOINLINE(void, pragmasInit)(void);
N_NOINLINE(void, pragmasDatInit)(void);
N_NOINLINE(void, semtypinstInit)(void);
N_NOINLINE(void, semtypinstDatInit)(void);
N_NOINLINE(void, parampatternsInit)(void);
N_NOINLINE(void, parampatternsDatInit)(void);
N_NOINLINE(void, rstastInit)(void);
N_NOINLINE(void, rstastDatInit)(void);
N_NOINLINE(void, rstInit)(void);
N_NOINLINE(void, rstDatInit)(void);
N_NOINLINE(void, highliteInit)(void);
N_NOINLINE(void, highliteDatInit)(void);
N_NOINLINE(void, rstgenInit)(void);
N_NOINLINE(void, rstgenDatInit)(void);
N_NOINLINE(void, docgenInit)(void);
N_NOINLINE(void, docgenDatInit)(void);
N_NOINLINE(void, algorithmInit)(void);
N_NOINLINE(void, algorithmDatInit)(void);
N_NOINLINE(void, sequtilsInit)(void);
N_NOINLINE(void, sequtilsDatInit)(void);
N_NOINLINE(void, sigmatchInit)(void);
N_NOINLINE(void, sigmatchDatInit)(void);
N_NOINLINE(void, aliasesInit)(void);
N_NOINLINE(void, aliasesDatInit)(void);
N_NOINLINE(void, patternsInit)(void);
N_NOINLINE(void, patternsDatInit)(void);
N_NOINLINE(void, semInit)(void);
N_NOINLINE(void, semDatInit)(void);
N_NOINLINE(void, ccgutilsInit)(void);
N_NOINLINE(void, ccgutilsDatInit)(void);
N_NOINLINE(void, cgendataInit)(void);
N_NOINLINE(void, cgendataDatInit)(void);
N_NOINLINE(void, ccgmergeInit)(void);
N_NOINLINE(void, ccgmergeDatInit)(void);
N_NOINLINE(void, cgenInit)(void);
N_NOINLINE(void, cgenDatInit)(void);
N_NOINLINE(void, jsgenInit)(void);
N_NOINLINE(void, jsgenDatInit)(void);
N_NOINLINE(void, lexbaseInit)(void);
N_NOINLINE(void, lexbaseDatInit)(void);
N_NOINLINE(void, unicodeInit)(void);
N_NOINLINE(void, unicodeDatInit)(void);
N_NOINLINE(void, jsonInit)(void);
N_NOINLINE(void, jsonDatInit)(void);
N_NOINLINE(void, passauxInit)(void);
N_NOINLINE(void, passauxDatInit)(void);
N_NOINLINE(void, dependsInit)(void);
N_NOINLINE(void, dependsDatInit)(void);
N_NOINLINE(void, docgen2Init)(void);
N_NOINLINE(void, docgen2DatInit)(void);
N_NOINLINE(void, parseoptInit)(void);
N_NOINLINE(void, parseoptDatInit)(void);
N_NOINLINE(void, serviceInit)(void);
N_NOINLINE(void, serviceDatInit)(void);
N_NOINLINE(void, modulesInit)(void);
N_NOINLINE(void, modulesDatInit)(void);
N_NOINLINE(void, prettyInit)(void);
N_NOINLINE(void, prettyDatInit)(void);
N_NOINLINE(void, mainInit)(void);
N_NOINLINE(void, mainDatInit)(void);
N_NOINLINE(void, nimrodInit)(void);
N_NOINLINE(void, nimrodDatInit)(void);
STRING_LITERAL(TMP6968, "./", 2);
STRING_LITERAL(TMP6969, "", 0);
STRING_LITERAL(TMP6971, "nimrod.cfg", 10);
STRING_LITERAL(TMP6972, "js", 2);
STRING_LITERAL(TMP6973, "node ", 5);
extern TFrame* frameptr_12027;
extern NimStringDesc* gprojectname_105191;
extern TSafePoint* exchandler_12028;
extern NimStringDesc* gprojectfull_105193;
extern tgcheap40816 gch_40842;
extern TNimType NTI1035; /* EOS */
extern E_Base* currexception_12030;
extern NimStringDesc* gprojectpath_105192;
extern NI gverbosity_105116;
extern NI gerrorcounter_128871;
extern NU32 gglobaloptions_105108;
extern NU8 gcmd_105110;
extern NimStringDesc* arguments_418005;

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) (&(*dest).data[((*dest).Sup.len)- 0])), ((NCSTRING) ((*src).data)), (NI32)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_12027;
	frameptr_12027 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_12027 = (*frameptr_12027).prev;
}

N_NIMCALL(NimStringDesc*, prependcurdir_423401)(NimStringDesc* f) {
	NimStringDesc* result;
	nimfr("prependCurDir", "nimrod.nim")
	result = 0;
	nimln(29, "nimrod.nim");
	{
		NIM_BOOL LOC3;
		nimln(29, "nimrod.nim");
		LOC3 = nosisAbsolute(f);
		if (!LOC3) goto LA4;
		nimln(29, "nimrod.nim");
		result = copyString(f);
	}
	goto LA1;
	LA4: ;
	{
		NimStringDesc* LOC7;
		nimln(30, "nimrod.nim");
		nimln(30, "nimrod.nim");
		LOC7 = 0;
		LOC7 = rawNewString(f->Sup.len + 2);
appendString(LOC7, ((NimStringDesc*) &TMP6968));
appendString(LOC7, f);
		result = LOC7;
	}
	LA1: ;
	popFrame();
	return result;
}

static N_INLINE(void, pushSafePoint)(TSafePoint* s) {
	(*s).hasRaiseAction = NIM_FALSE;
	(*s).prev = exchandler_12028;
	exchandler_12028 = s;
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

static N_INLINE(void, popSafePoint)(void) {
	exchandler_12028 = (*exchandler_12028).prev;
}

static N_INLINE(void, setFrame)(TFrame* s) {
	frameptr_12027 = s;
}

static N_INLINE(E_Base*, getCurrentException)(void) {
	E_Base* result;
	nimfr("getCurrentException", "system.nim")
	result = 0;
	nimln(2215, "system.nim");
	result = currexception_12030;
	popFrame();
	return result;
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tcell38849* c;
	nimfr("nimGCunrefNoCycle", "gc.nim")
	nimln(218, "gc.nim");
	c = usrtocell_42243(p);
	nimln(220, "gc.nim");
	{
		nimln(155, "gc.nim");
		(*c).Refcount -= 8;
		nimln(156, "gc.nim");
		if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA3;
		nimln(221, "gc.nim");
		rtladdzct_43402(c);
	}
	LA3: ;
	popFrame();
}

static N_INLINE(void, popCurrentException)(void) {
	asgnRefNoCycle((void**) &currexception_12030, (*currexception_12030).parent);
}

static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[((*dest).Sup.len)- 0] = c;
	(*dest).data[((NI32)((*dest).Sup.len + 1))- 0] = 0;
	(*dest).Sup.len += 1;
}

N_NIMCALL(void, handlecmdline_423603)(void) {
	nimfr("HandleCmdLine", "nimrod.nim")
	nimln(35, "nimrod.nim");
	{
		NI LOC3;
		nimln(35, "nimrod.nim");
		nimln(35, "nimrod.nim");
		LOC3 = paramcount_98633();
		if (!(LOC3 == 0)) goto LA4;
		nimln(36, "nimrod.nim");
		writecommandlineusage_142002();
	}
	goto LA1;
	LA4: ;
	{
		nimln(39, "nimrod.nim");
		processcmdline_418007(((NU8) 0), ((NimStringDesc*) &TMP6969));
		nimln(40, "nimrod.nim");
		{
			TSafePoint TMP6970;
			TY94237 p;
			NimStringDesc* LOC15;
			NimStringDesc* LOC16;
			nimln(684, "system.nim");
			nimln(684, "system.nim");
			if (!!(((gprojectname_105191) && (gprojectname_105191)->Sup.len == 0))) goto LA9;
			nimln(41, "nimrod.nim");
			pushSafePoint(&TMP6970);
			TMP6970.status = setjmp(TMP6970.context);
			if (TMP6970.status == 0) {
				nimln(42, "nimrod.nim");
				asgnRefNoCycle((void**) &gprojectfull_105193, canonicalizepath_105315(gprojectname_105191));
				popSafePoint();
			}
			else {
				popSafePoint();
				setFrame((TFrame*)&F);
				if (isObj(getCurrentException()->Sup.m_type, (&NTI1035))) {
					NimStringDesc* LOC14;
					TMP6970.status = 0;
					nimln(44, "nimrod.nim");
					LOC14 = 0;
					LOC14 = gprojectfull_105193; gprojectfull_105193 = copyStringRC1(gprojectname_105191);
					if (LOC14) nimGCunrefNoCycle(LOC14);
					popCurrentException();
				}
			}
			if (TMP6970.status != 0) reraiseException();
			nimln(45, "nimrod.nim");
			chckNil((void*)&p);
			memset((void*)&p, 0, sizeof(p));
			nossplitFile(gprojectfull_105193, &p);
			nimln(46, "nimrod.nim");
			LOC15 = 0;
			LOC15 = gprojectpath_105192; gprojectpath_105192 = copyStringRC1(p.Field0);
			if (LOC15) nimGCunrefNoCycle(LOC15);
			nimln(47, "nimrod.nim");
			LOC16 = 0;
			LOC16 = gprojectname_105191; gprojectname_105191 = copyStringRC1(p.Field1);
			if (LOC16) nimGCunrefNoCycle(LOC16);
		}
		goto LA7;
		LA9: ;
		{
			nimln(49, "nimrod.nim");
			asgnRefNoCycle((void**) &gprojectpath_105192, nosgetCurrentDir());
		}
		LA7: ;
		nimln(50, "nimrod.nim");
		loadconfigs_165454(((NimStringDesc*) &TMP6971));
		nimln(53, "nimrod.nim");
		initvars_138646();
		nimln(54, "nimrod.nim");
		processcmdline_418007(((NU8) 1), ((NimStringDesc*) &TMP6969));
		nimln(55, "nimrod.nim");
		maincommand_421812();
		nimln(56, "nimrod.nim");
		{
			NimStringDesc* LOC22;
			nimln(688, "system.nim");
			if (!(2 <= gverbosity_105116)) goto LA20;
			nimln(56, "nimrod.nim");
			nimln(56, "nimrod.nim");
			LOC22 = 0;
			LOC22 = gcgetstatistics_6021();
			printf("%s\012", (LOC22)->data);
		}
		LA20: ;
		nimln(58, "nimrod.nim");
		{
			nimln(58, "nimrod.nim");
			if (!(gerrorcounter_128871 == 0)) goto LA25;
			nimln(62, "nimrod.nim");
			{
				nimln(716, "system.nim");
				if (!((gglobaloptions_105108 &(1<<((((NU8) 13))&31)))!=0)) goto LA29;
				nimln(63, "nimrod.nim");
				{
					NimStringDesc* ex;
					NimStringDesc* LOC35;
					NimStringDesc* LOC36;
					NimStringDesc* LOC37;
					NimStringDesc* LOC38;
					nimln(63, "nimrod.nim");
					if (!(gcmd_105110 == ((NU8) 4))) goto LA33;
					nimln(64, "nimrod.nim");
					nimln(65, "nimrod.nim");
					nimln(65, "nimrod.nim");
					nimln(65, "nimrod.nim");
					LOC35 = 0;
					LOC35 = nosChangeFileExt(gprojectfull_105193, ((NimStringDesc*) &TMP6972));
					LOC36 = 0;
					LOC36 = prependcurdir_423401(LOC35);
					LOC37 = 0;
					LOC37 = completecfilepath_138675(LOC36, NIM_TRUE);
					ex = quoteifcontainswhite_78720(LOC37);
					nimln(66, "nimrod.nim");
					nimln(66, "nimrod.nim");
					LOC38 = 0;
					LOC38 = rawNewString(ex->Sup.len + arguments_418005->Sup.len + 6);
appendString(LOC38, ((NimStringDesc*) &TMP6973));
appendString(LOC38, ex);
appendChar(LOC38, 32);
appendString(LOC38, arguments_418005);
					execexternalprogram_138707(LOC38);
				}
				goto LA31;
				LA33: ;
				{
					NimStringDesc* ex;
					NimStringDesc* LOC40;
					NimStringDesc* LOC41;
					NimStringDesc* LOC42;
					nimln(68, "nimrod.nim");
					nimln(69, "nimrod.nim");
					nimln(69, "nimrod.nim");
					LOC40 = 0;
					LOC40 = nosChangeFileExt(gprojectfull_105193, ((NimStringDesc*) &TMP6969));
					LOC41 = 0;
					LOC41 = prependcurdir_423401(LOC40);
					ex = quoteifcontainswhite_78720(LOC41);
					nimln(70, "nimrod.nim");
					nimln(70, "nimrod.nim");
					LOC42 = 0;
					LOC42 = rawNewString(ex->Sup.len + arguments_418005->Sup.len + 1);
appendString(LOC42, ex);
appendChar(LOC42, 32);
appendString(LOC42, arguments_418005);
					execexternalprogram_138707(LOC42);
				}
				LA31: ;
			}
			LA29: ;
		}
		LA25: ;
	}
	LA1: ;
	popFrame();
}

static N_INLINE(void, initStackBottom)(void) {
	void* volatile locals;
	locals = 0;
	locals = ((void*) (&locals));
	setStackBottom(locals);
}
int cmdCount;
char** cmdLine;
char** gEnv;
N_CDECL(void, NimMain)(void) {
	systemDatInit();
	parseutilsDatInit();
	strutilsDatInit();
	timesDatInit();
	posixDatInit();
	osDatInit();
	listsDatInit();
	hashesDatInit();
	strtabsDatInit();
	optionsDatInit();
	mathDatInit();
	tablesDatInit();
	socketsDatInit();
	platformDatInit();
	crcDatInit();
	ropesDatInit();
	msgsDatInit();
	nversionDatInit();
	identsDatInit();
	condsymsDatInit();
	streamsDatInit();
	osprocDatInit();
	extccompDatInit();
	wordrecgDatInit();
	babelcmdDatInit();
	commandsDatInit();
	llstreamDatInit();
	nimlexbaseDatInit();
	lexerDatInit();
	nimconfDatInit();
	intsetsDatInit();
	idgenDatInit();
	astDatInit();
	rodutilsDatInit();
	astalgoDatInit();
	parserDatInit();
	pbracesDatInit();
	rendererDatInit();
	filtersDatInit();
	filter_tmplDatInit();
	syntaxesDatInit();
	treesDatInit();
	typesDatInit();
	memfilesDatInit();
	rodreadDatInit();
	magicsysDatInit();
	bitsetsDatInit();
	nimsetsDatInit();
	semthreadsDatInit();
	passesDatInit();
	treetabDatInit();
	saturateDatInit();
	semfoldDatInit();
	guardsDatInit();
	sempass2DatInit();
	cgmethDatInit();
	lambdaliftingDatInit();
	transfDatInit();
	evaltemplDatInit();
	evalsDatInit();
	semdataDatInit();
	lookupsDatInit();
	importerDatInit();
	rodwriteDatInit();
	procfindDatInit();
	pragmasDatInit();
	semtypinstDatInit();
	parampatternsDatInit();
	rstastDatInit();
	rstDatInit();
	highliteDatInit();
	rstgenDatInit();
	docgenDatInit();
	algorithmDatInit();
	sequtilsDatInit();
	sigmatchDatInit();
	aliasesDatInit();
	patternsDatInit();
	semDatInit();
	ccgutilsDatInit();
	cgendataDatInit();
	ccgmergeDatInit();
	cgenDatInit();
	jsgenDatInit();
	lexbaseDatInit();
	unicodeDatInit();
	jsonDatInit();
	passauxDatInit();
	dependsDatInit();
	docgen2DatInit();
	parseoptDatInit();
	serviceDatInit();
	modulesDatInit();
	prettyDatInit();
	mainDatInit();
	nimrodDatInit();
	initStackBottom();
	systemInit();
	parseutilsInit();
	strutilsInit();
	timesInit();
	posixInit();
	osInit();
	listsInit();
	hashesInit();
	strtabsInit();
	optionsInit();
	mathInit();
	tablesInit();
	socketsInit();
	platformInit();
	crcInit();
	ropesInit();
	msgsInit();
	nversionInit();
	identsInit();
	condsymsInit();
	streamsInit();
	osprocInit();
	extccompInit();
	wordrecgInit();
	babelcmdInit();
	commandsInit();
	llstreamInit();
	nimlexbaseInit();
	lexerInit();
	nimconfInit();
	intsetsInit();
	idgenInit();
	astInit();
	rodutilsInit();
	astalgoInit();
	parserInit();
	pbracesInit();
	rendererInit();
	filtersInit();
	filter_tmplInit();
	syntaxesInit();
	treesInit();
	typesInit();
	memfilesInit();
	rodreadInit();
	magicsysInit();
	bitsetsInit();
	nimsetsInit();
	semthreadsInit();
	passesInit();
	treetabInit();
	saturateInit();
	semfoldInit();
	guardsInit();
	sempass2Init();
	cgmethInit();
	lambdaliftingInit();
	transfInit();
	evaltemplInit();
	evalsInit();
	semdataInit();
	lookupsInit();
	importerInit();
	rodwriteInit();
	procfindInit();
	pragmasInit();
	semtypinstInit();
	parampatternsInit();
	rstastInit();
	rstInit();
	highliteInit();
	rstgenInit();
	docgenInit();
	algorithmInit();
	sequtilsInit();
	sigmatchInit();
	aliasesInit();
	patternsInit();
	semInit();
	ccgutilsInit();
	cgendataInit();
	ccgmergeInit();
	cgenInit();
	jsgenInit();
	lexbaseInit();
	unicodeInit();
	jsonInit();
	passauxInit();
	dependsInit();
	docgen2Init();
	parseoptInit();
	serviceInit();
	modulesInit();
	prettyInit();
	mainInit();
	nimrodInit();
}
int main(int argc, char** args, char** env) {
	cmdLine = args;
	cmdCount = argc;
	gEnv = env;
	NimMain();
	return nim_program_result;
}
N_NOINLINE(void, nimrodInit)(void) {
	nimfr("nimrod", "nimrod.nim")
	nimln(77, "nimrod.nim");
	gcdisablemarkandsweep_6019();
	nimln(78, "nimrod.nim");
	initdefines_132067();
	nimln(79, "nimrod.nim");
	handlecmdline_423603();
	nimln(80, "nimrod.nim");
	nimln(692, "system.nim");
	exit(((NI) (((NI8) ((0 < gerrorcounter_128871))))));
	popFrame();
}

N_NOINLINE(void, nimrodDatInit)(void) {
}

