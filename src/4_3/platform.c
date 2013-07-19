/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"
typedef struct tinfoos123040 tinfoos123040;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tinfocpu123445 tinfocpu123445;
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
struct tinfoos123040 {
NimStringDesc* Field0;
NimStringDesc* Field1;
NimStringDesc* Field2;
NimStringDesc* Field3;
NimStringDesc* Field4;
NimStringDesc* Field5;
NimStringDesc* Field6;
NimStringDesc* Field7;
NimStringDesc* Field8;
NimStringDesc* Field9;
NimStringDesc* Field10;
NimStringDesc* Field11;
NU8 Field12;
};
typedef tinfoos123040 TY123060[23];
typedef NimStringDesc* TY123455[2];
struct tinfocpu123445 {
NimStringDesc* Field0;
NI Field1;
NU8 Field2;
NI Field3;
NI Field4;
};
typedef tinfocpu123445 TY123460[14];
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
typedef NI TY21621[8];
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
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct tfreecell21633 {
tfreecell21633* Next;
NI Zerofield;
};
N_NIMCALL(void, settarget_123586)(NU8 o, NU8 c);
N_NIMCALL(void, hiddenraiseassert_71620)(NimStringDesc* msg);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, divInt)(NI a, NI b);
N_NOINLINE(void, raiseDivByZero)(void);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell38846*, usrtocell_42243)(void* usr);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(void, rtladdzct_43402)(tcell38846* c);
N_NOINLINE(void, addzct_42215)(tcellseq38862* s, tcell38846* c);
N_NIMCALL(NU8, nametoos_123569)(NimStringDesc* name);
N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(NU8, nametocpu_123573)(NimStringDesc* name);
STRING_LITERAL(TMP366, "DOS", 3);
STRING_LITERAL(TMP367, "..", 2);
STRING_LITERAL(TMP368, "$1.dll", 6);
STRING_LITERAL(TMP369, "/", 1);
STRING_LITERAL(TMP370, ".obj", 4);
STRING_LITERAL(TMP371, "\015\012", 2);
STRING_LITERAL(TMP372, ";", 1);
STRING_LITERAL(TMP373, "\\", 1);
STRING_LITERAL(TMP374, ".bat", 4);
STRING_LITERAL(TMP375, ".", 1);
STRING_LITERAL(TMP376, ".exe", 4);
STRING_LITERAL(TMP377, "Windows", 7);
STRING_LITERAL(TMP378, "OS2", 3);
STRING_LITERAL(TMP379, "Linux", 5);
STRING_LITERAL(TMP380, "lib$1.so", 8);
STRING_LITERAL(TMP381, ".o", 2);
STRING_LITERAL(TMP382, "\012", 1);
STRING_LITERAL(TMP383, ":", 1);
STRING_LITERAL(TMP384, ".sh", 3);
STRING_LITERAL(TMP385, "", 0);
STRING_LITERAL(TMP386, "MorphOS", 7);
STRING_LITERAL(TMP387, "SkyOS", 5);
STRING_LITERAL(TMP388, "Solaris", 7);
STRING_LITERAL(TMP389, "Irix", 4);
STRING_LITERAL(TMP390, "NetBSD", 6);
STRING_LITERAL(TMP391, "FreeBSD", 7);
STRING_LITERAL(TMP392, "OpenBSD", 7);
STRING_LITERAL(TMP393, "AIX", 3);
STRING_LITERAL(TMP394, "PalmOS", 6);
STRING_LITERAL(TMP395, "QNX", 3);
STRING_LITERAL(TMP396, "Amiga", 5);
STRING_LITERAL(TMP397, "$1.library", 10);
STRING_LITERAL(TMP398, "Atari", 5);
STRING_LITERAL(TMP399, ".tpp", 4);
STRING_LITERAL(TMP400, "Netware", 7);
STRING_LITERAL(TMP401, "$1.nlm", 6);
STRING_LITERAL(TMP402, ".nlm", 4);
STRING_LITERAL(TMP403, "MacOS", 5);
STRING_LITERAL(TMP404, "::", 2);
STRING_LITERAL(TMP405, "$1Lib", 5);
STRING_LITERAL(TMP406, "\015", 1);
STRING_LITERAL(TMP407, ",", 1);
STRING_LITERAL(TMP408, "MacOSX", 6);
STRING_LITERAL(TMP409, "lib$1.dylib", 11);
STRING_LITERAL(TMP410, "Haiku", 5);
STRING_LITERAL(TMP411, "JS", 2);
STRING_LITERAL(TMP412, "NimrodVM", 8);
STRING_LITERAL(TMP413, "Standalone", 10);
NIM_CONST TY123060 os_123059 = {{((NimStringDesc*) &TMP366),
((NimStringDesc*) &TMP367),
((NimStringDesc*) &TMP368),
((NimStringDesc*) &TMP369),
((NimStringDesc*) &TMP370),
((NimStringDesc*) &TMP371),
((NimStringDesc*) &TMP372),
((NimStringDesc*) &TMP373),
((NimStringDesc*) &TMP374),
((NimStringDesc*) &TMP375),
((NimStringDesc*) &TMP376),
((NimStringDesc*) &TMP375),
2}
,
{((NimStringDesc*) &TMP377),
((NimStringDesc*) &TMP367),
((NimStringDesc*) &TMP368),
((NimStringDesc*) &TMP369),
((NimStringDesc*) &TMP370),
((NimStringDesc*) &TMP371),
((NimStringDesc*) &TMP372),
((NimStringDesc*) &TMP373),
((NimStringDesc*) &TMP374),
((NimStringDesc*) &TMP375),
((NimStringDesc*) &TMP376),
((NimStringDesc*) &TMP375),
2}
,
{((NimStringDesc*) &TMP378),
((NimStringDesc*) &TMP367),
((NimStringDesc*) &TMP368),
((NimStringDesc*) &TMP369),
((NimStringDesc*) &TMP370),
((NimStringDesc*) &TMP371),
((NimStringDesc*) &TMP372),
((NimStringDesc*) &TMP373),
((NimStringDesc*) &TMP374),
((NimStringDesc*) &TMP375),
((NimStringDesc*) &TMP376),
((NimStringDesc*) &TMP375),
2}
,
{((NimStringDesc*) &TMP379),
((NimStringDesc*) &TMP367),
((NimStringDesc*) &TMP380),
((NimStringDesc*) &TMP369),
((NimStringDesc*) &TMP381),
((NimStringDesc*) &TMP382),
((NimStringDesc*) &TMP383),
((NimStringDesc*) &TMP369),
((NimStringDesc*) &TMP384),
((NimStringDesc*) &TMP375),
((NimStringDesc*) &TMP385),
((NimStringDesc*) &TMP375),
5}
,
{((NimStringDesc*) &TMP386),
((NimStringDesc*) &TMP367),
((NimStringDesc*) &TMP380),
((NimStringDesc*) &TMP369),
((NimStringDesc*) &TMP381),
((NimStringDesc*) &TMP382),
((NimStringDesc*) &TMP383),
((NimStringDesc*) &TMP369),
((NimStringDesc*) &TMP384),
((NimStringDesc*) &TMP375),
((NimStringDesc*) &TMP385),
((NimStringDesc*) &TMP375),
5}
,
{((NimStringDesc*) &TMP387),
((NimStringDesc*) &TMP367),
((NimStringDesc*) &TMP380),
((NimStringDesc*) &TMP369),
((NimStringDesc*) &TMP381),
((NimStringDesc*) &TMP382),
((NimStringDesc*) &TMP383),
((NimStringDesc*) &TMP369),
((NimStringDesc*) &TMP384),
((NimStringDesc*) &TMP375),
((NimStringDesc*) &TMP385),
((NimStringDesc*) &TMP375),
5}
,
{((NimStringDesc*) &TMP388),
((NimStringDesc*) &TMP367),
((NimStringDesc*) &TMP380),
((NimStringDesc*) &TMP369),
((NimStringDesc*) &TMP381),
((NimStringDesc*) &TMP382),
((NimStringDesc*) &TMP383),
((NimStringDesc*) &TMP369),
((NimStringDesc*) &TMP384),
((NimStringDesc*) &TMP375),
((NimStringDesc*) &TMP385),
((NimStringDesc*) &TMP375),
5}
,
{((NimStringDesc*) &TMP389),
((NimStringDesc*) &TMP367),
((NimStringDesc*) &TMP380),
((NimStringDesc*) &TMP369),
((NimStringDesc*) &TMP381),
((NimStringDesc*) &TMP382),
((NimStringDesc*) &TMP383),
((NimStringDesc*) &TMP369),
((NimStringDesc*) &TMP384),
((NimStringDesc*) &TMP375),
((NimStringDesc*) &TMP385),
((NimStringDesc*) &TMP375),
5}
,
{((NimStringDesc*) &TMP390),
((NimStringDesc*) &TMP367),
((NimStringDesc*) &TMP380),
((NimStringDesc*) &TMP369),
((NimStringDesc*) &TMP381),
((NimStringDesc*) &TMP382),
((NimStringDesc*) &TMP383),
((NimStringDesc*) &TMP369),
((NimStringDesc*) &TMP384),
((NimStringDesc*) &TMP375),
((NimStringDesc*) &TMP385),
((NimStringDesc*) &TMP375),
5}
,
{((NimStringDesc*) &TMP391),
((NimStringDesc*) &TMP367),
((NimStringDesc*) &TMP380),
((NimStringDesc*) &TMP369),
((NimStringDesc*) &TMP381),
((NimStringDesc*) &TMP382),
((NimStringDesc*) &TMP383),
((NimStringDesc*) &TMP369),
((NimStringDesc*) &TMP384),
((NimStringDesc*) &TMP375),
((NimStringDesc*) &TMP385),
((NimStringDesc*) &TMP375),
5}
,
{((NimStringDesc*) &TMP392),
((NimStringDesc*) &TMP367),
((NimStringDesc*) &TMP380),
((NimStringDesc*) &TMP369),
((NimStringDesc*) &TMP381),
((NimStringDesc*) &TMP382),
((NimStringDesc*) &TMP383),
((NimStringDesc*) &TMP369),
((NimStringDesc*) &TMP384),
((NimStringDesc*) &TMP375),
((NimStringDesc*) &TMP385),
((NimStringDesc*) &TMP375),
5}
,
{((NimStringDesc*) &TMP393),
((NimStringDesc*) &TMP367),
((NimStringDesc*) &TMP380),
((NimStringDesc*) &TMP369),
((NimStringDesc*) &TMP381),
((NimStringDesc*) &TMP382),
((NimStringDesc*) &TMP383),
((NimStringDesc*) &TMP369),
((NimStringDesc*) &TMP384),
((NimStringDesc*) &TMP375),
((NimStringDesc*) &TMP385),
((NimStringDesc*) &TMP375),
5}
,
{((NimStringDesc*) &TMP394),
((NimStringDesc*) &TMP367),
((NimStringDesc*) &TMP380),
((NimStringDesc*) &TMP369),
((NimStringDesc*) &TMP381),
((NimStringDesc*) &TMP382),
((NimStringDesc*) &TMP383),
((NimStringDesc*) &TMP369),
((NimStringDesc*) &TMP384),
((NimStringDesc*) &TMP375),
((NimStringDesc*) &TMP385),
((NimStringDesc*) &TMP375),
1}
,
{((NimStringDesc*) &TMP395),
((NimStringDesc*) &TMP367),
((NimStringDesc*) &TMP380),
((NimStringDesc*) &TMP369),
((NimStringDesc*) &TMP381),
((NimStringDesc*) &TMP382),
((NimStringDesc*) &TMP383),
((NimStringDesc*) &TMP369),
((NimStringDesc*) &TMP384),
((NimStringDesc*) &TMP375),
((NimStringDesc*) &TMP385),
((NimStringDesc*) &TMP375),
5}
,
{((NimStringDesc*) &TMP396),
((NimStringDesc*) &TMP367),
((NimStringDesc*) &TMP397),
((NimStringDesc*) &TMP369),
((NimStringDesc*) &TMP381),
((NimStringDesc*) &TMP382),
((NimStringDesc*) &TMP383),
((NimStringDesc*) &TMP369),
((NimStringDesc*) &TMP384),
((NimStringDesc*) &TMP375),
((NimStringDesc*) &TMP385),
((NimStringDesc*) &TMP375),
1}
,
{((NimStringDesc*) &TMP398),
((NimStringDesc*) &TMP367),
((NimStringDesc*) &TMP368),
((NimStringDesc*) &TMP369),
((NimStringDesc*) &TMP381),
((NimStringDesc*) &TMP382),
((NimStringDesc*) &TMP383),
((NimStringDesc*) &TMP369),
((NimStringDesc*) &TMP385),
((NimStringDesc*) &TMP375),
((NimStringDesc*) &TMP399),
((NimStringDesc*) &TMP375),
1}
,
{((NimStringDesc*) &TMP400),
((NimStringDesc*) &TMP367),
((NimStringDesc*) &TMP401),
((NimStringDesc*) &TMP369),
((NimStringDesc*) &TMP385),
((NimStringDesc*) &TMP371),
((NimStringDesc*) &TMP383),
((NimStringDesc*) &TMP369),
((NimStringDesc*) &TMP384),
((NimStringDesc*) &TMP375),
((NimStringDesc*) &TMP402),
((NimStringDesc*) &TMP375),
2}
,
{((NimStringDesc*) &TMP403),
((NimStringDesc*) &TMP404),
((NimStringDesc*) &TMP405),
((NimStringDesc*) &TMP383),
((NimStringDesc*) &TMP381),
((NimStringDesc*) &TMP406),
((NimStringDesc*) &TMP407),
((NimStringDesc*) &TMP383),
((NimStringDesc*) &TMP385),
((NimStringDesc*) &TMP383),
((NimStringDesc*) &TMP385),
((NimStringDesc*) &TMP375),
2}
,
{((NimStringDesc*) &TMP408),
((NimStringDesc*) &TMP367),
((NimStringDesc*) &TMP409),
((NimStringDesc*) &TMP383),
((NimStringDesc*) &TMP381),
((NimStringDesc*) &TMP382),
((NimStringDesc*) &TMP383),
((NimStringDesc*) &TMP369),
((NimStringDesc*) &TMP384),
((NimStringDesc*) &TMP375),
((NimStringDesc*) &TMP385),
((NimStringDesc*) &TMP375),
13}
,
{((NimStringDesc*) &TMP410),
((NimStringDesc*) &TMP367),
((NimStringDesc*) &TMP380),
((NimStringDesc*) &TMP383),
((NimStringDesc*) &TMP381),
((NimStringDesc*) &TMP382),
((NimStringDesc*) &TMP383),
((NimStringDesc*) &TMP369),
((NimStringDesc*) &TMP384),
((NimStringDesc*) &TMP375),
((NimStringDesc*) &TMP385),
((NimStringDesc*) &TMP375),
13}
,
{((NimStringDesc*) &TMP411),
((NimStringDesc*) &TMP367),
((NimStringDesc*) &TMP380),
((NimStringDesc*) &TMP369),
((NimStringDesc*) &TMP381),
((NimStringDesc*) &TMP382),
((NimStringDesc*) &TMP383),
((NimStringDesc*) &TMP369),
((NimStringDesc*) &TMP384),
((NimStringDesc*) &TMP375),
((NimStringDesc*) &TMP385),
((NimStringDesc*) &TMP375),
0}
,
{((NimStringDesc*) &TMP412),
((NimStringDesc*) &TMP367),
((NimStringDesc*) &TMP380),
((NimStringDesc*) &TMP369),
((NimStringDesc*) &TMP381),
((NimStringDesc*) &TMP382),
((NimStringDesc*) &TMP383),
((NimStringDesc*) &TMP369),
((NimStringDesc*) &TMP384),
((NimStringDesc*) &TMP375),
((NimStringDesc*) &TMP385),
((NimStringDesc*) &TMP375),
0}
,
{((NimStringDesc*) &TMP413),
((NimStringDesc*) &TMP367),
((NimStringDesc*) &TMP380),
((NimStringDesc*) &TMP369),
((NimStringDesc*) &TMP381),
((NimStringDesc*) &TMP382),
((NimStringDesc*) &TMP383),
((NimStringDesc*) &TMP369),
((NimStringDesc*) &TMP384),
((NimStringDesc*) &TMP375),
((NimStringDesc*) &TMP385),
((NimStringDesc*) &TMP375),
0}
}
;
STRING_LITERAL(TMP414, "littleEndian", 12);
STRING_LITERAL(TMP415, "bigEndian", 9);
NIM_CONST TY123455 endiantostr_123454 = {((NimStringDesc*) &TMP414),
((NimStringDesc*) &TMP415)}
;
STRING_LITERAL(TMP416, "i386", 4);
STRING_LITERAL(TMP417, "m68k", 4);
STRING_LITERAL(TMP418, "alpha", 5);
STRING_LITERAL(TMP419, "powerpc", 7);
STRING_LITERAL(TMP420, "powerpc64", 9);
STRING_LITERAL(TMP421, "sparc", 5);
STRING_LITERAL(TMP422, "vm", 2);
STRING_LITERAL(TMP423, "ia64", 4);
STRING_LITERAL(TMP424, "amd64", 5);
STRING_LITERAL(TMP425, "mips", 4);
STRING_LITERAL(TMP426, "arm", 3);
STRING_LITERAL(TMP427, "js", 2);
STRING_LITERAL(TMP428, "nimrodvm", 8);
STRING_LITERAL(TMP429, "avr", 3);
NIM_CONST TY123460 cpu_123459 = {{((NimStringDesc*) &TMP416),
32,
((NU8) 0),
64,
32}
,
{((NimStringDesc*) &TMP417),
32,
((NU8) 1),
64,
32}
,
{((NimStringDesc*) &TMP418),
64,
((NU8) 0),
64,
64}
,
{((NimStringDesc*) &TMP419),
32,
((NU8) 1),
64,
32}
,
{((NimStringDesc*) &TMP420),
64,
((NU8) 1),
64,
64}
,
{((NimStringDesc*) &TMP421),
32,
((NU8) 1),
64,
32}
,
{((NimStringDesc*) &TMP422),
32,
((NU8) 0),
64,
32}
,
{((NimStringDesc*) &TMP423),
64,
((NU8) 0),
64,
64}
,
{((NimStringDesc*) &TMP424),
64,
((NU8) 0),
64,
64}
,
{((NimStringDesc*) &TMP425),
32,
((NU8) 1),
64,
32}
,
{((NimStringDesc*) &TMP426),
32,
((NU8) 0),
64,
32}
,
{((NimStringDesc*) &TMP427),
32,
((NU8) 1),
64,
32}
,
{((NimStringDesc*) &TMP428),
32,
((NU8) 1),
64,
32}
,
{((NimStringDesc*) &TMP429),
16,
((NU8) 0),
32,
16}
}
;
STRING_LITERAL(TMP430, "not c == cpuNone ", 17);
STRING_LITERAL(TMP431, "not o == osNone ", 16);
STRING_LITERAL(TMP435, "solaris", 7);
NU8 targetcpu_123560;
NU8 hostcpu_123561;
NU8 targetos_123562;
NU8 hostos_123563;
NI intsize_123577;
NI floatsize_123578;
NI ptrsize_123579;
NimStringDesc* tnl_123580;
extern TFrame* frameptr_12027;
extern tgcheap40816 gch_40842;

static N_INLINE(NI, divInt)(NI a, NI b) {
	NI result;
	result = 0;
	{
		if (!(b == 0)) goto LA3;
		raiseDivByZero();
	}
	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = (a == (IL64(-9223372036854775807) - IL64(1)));
		if (!(LOC7)) goto LA8;
		LOC7 = (b == -1);
		LA8: ;
		if (!LOC7) goto LA9;
		raiseOverflow();
	}
	LA9: ;
	result = (NI64)(a / b);
	goto BeforeRet;
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

static N_INLINE(tcell38846*, usrtocell_42243)(void* usr) {
	tcell38846* result;
	nimfr("usrToCell", "gc.nim")
	result = 0;
	nimln(106, "gc.nim");
	nimln(106, "gc.nim");
	nimln(106, "gc.nim");
	result = ((tcell38846*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(tcell38846))))));
	popFrame();
	return result;
}

static N_INLINE(void, rtladdzct_43402)(tcell38846* c) {
	nimfr("rtlAddZCT", "gc.nim")
	nimln(184, "gc.nim");
	addzct_42215(&gch_40842.Zct, c);
	popFrame();
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tcell38846* c;
	nimfr("nimGCunrefNoCycle", "gc.nim")
	nimln(218, "gc.nim");
	c = usrtocell_42243(p);
	nimln(220, "gc.nim");
	{
		nimln(155, "gc.nim");
		(*c).Refcount -= 8;
		nimln(156, "gc.nim");
		if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA3;
		nimln(221, "gc.nim");
		rtladdzct_43402(c);
	}
	LA3: ;
	popFrame();
}

N_NIMCALL(void, settarget_123586)(NU8 o, NU8 c) {
	NI TMP432;
	NI TMP433;
	NI TMP434;
	NimStringDesc* LOC9;
	nimfr("setTarget", "platform.nim")
	nimln(198, "platform.nim");
	{
		nimln(198, "platform.nim");
		nimln(198, "platform.nim");
		nimln(198, "platform.nim");
		if (!!(!((c == ((NU8) 0))))) goto LA3;
		nimln(198, "platform.nim");
		hiddenraiseassert_71620(((NimStringDesc*) &TMP430));
	}
	LA3: ;
	nimln(199, "platform.nim");
	{
		nimln(199, "platform.nim");
		nimln(199, "platform.nim");
		nimln(199, "platform.nim");
		if (!!(!((o == ((NU8) 0))))) goto LA7;
		nimln(199, "platform.nim");
		hiddenraiseassert_71620(((NimStringDesc*) &TMP431));
	}
	LA7: ;
	nimln(201, "platform.nim");
	targetcpu_123560 = c;
	nimln(202, "platform.nim");
	targetos_123562 = o;
	nimln(203, "platform.nim");
	nimln(203, "platform.nim");
	if (c < 1 || c > 14) raiseIndexError();
	TMP432 = divInt(cpu_123459[(c)- 1].Field1, 8);
	intsize_123577 = (NI64)(TMP432);
	nimln(204, "platform.nim");
	nimln(204, "platform.nim");
	if (c < 1 || c > 14) raiseIndexError();
	TMP433 = divInt(cpu_123459[(c)- 1].Field3, 8);
	floatsize_123578 = (NI64)(TMP433);
	nimln(205, "platform.nim");
	nimln(205, "platform.nim");
	if (c < 1 || c > 14) raiseIndexError();
	TMP434 = divInt(cpu_123459[(c)- 1].Field4, 8);
	ptrsize_123579 = (NI64)(TMP434);
	nimln(206, "platform.nim");
	if (o < 1 || o > 23) raiseIndexError();
	LOC9 = 0;
	LOC9 = tnl_123580; tnl_123580 = copyStringRC1(os_123059[(o)- 1].Field5);
	if (LOC9) nimGCunrefNoCycle(LOC9);
	popFrame();
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

N_NIMCALL(NU8, nametoos_123569)(NimStringDesc* name) {
	NU8 result;
	NU8 i_123848;
	NU8 res_123851;
	nimfr("NameToOS", "platform.nim")
	result = 0;
	i_123848 = 0;
	nimln(1274, "system.nim");
	res_123851 = ((NU8) 1);
	nimln(1275, "system.nim");
	while (1) {
		nimln(1275, "system.nim");
		if (!(res_123851 <= ((NU8) 23))) goto LA1;
		nimln(1274, "system.nim");
		i_123848 = res_123851;
		nimln(210, "platform.nim");
		{
			NI LOC4;
			nimln(210, "platform.nim");
			nimln(210, "platform.nim");
			if (i_123848 < 1 || i_123848 > 23) raiseIndexError();
			LOC4 = nsuCmpIgnoreStyle(name, os_123059[(i_123848)- 1].Field0);
			if (!(LOC4 == 0)) goto LA5;
			nimln(211, "platform.nim");
			nimln(211, "platform.nim");
			result = i_123848;
			goto BeforeRet;
		}
		LA5: ;
		nimln(1277, "system.nim");
		res_123851 = addInt(res_123851, 1);
	} LA1: ;
	nimln(212, "platform.nim");
	result = ((NU8) 0);
	BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(NU8, nametocpu_123573)(NimStringDesc* name) {
	NU8 result;
	NU8 i_123901;
	NU8 res_123904;
	nimfr("NameToCPU", "platform.nim")
	result = 0;
	i_123901 = 0;
	nimln(1274, "system.nim");
	res_123904 = ((NU8) 1);
	nimln(1275, "system.nim");
	while (1) {
		nimln(1275, "system.nim");
		if (!(res_123904 <= ((NU8) 14))) goto LA1;
		nimln(1274, "system.nim");
		i_123901 = res_123904;
		nimln(216, "platform.nim");
		{
			NI LOC4;
			nimln(216, "platform.nim");
			nimln(216, "platform.nim");
			if (i_123901 < 1 || i_123901 > 14) raiseIndexError();
			LOC4 = nsuCmpIgnoreStyle(name, cpu_123459[(i_123901)- 1].Field0);
			if (!(LOC4 == 0)) goto LA5;
			nimln(217, "platform.nim");
			nimln(217, "platform.nim");
			result = i_123901;
			goto BeforeRet;
		}
		LA5: ;
		nimln(1277, "system.nim");
		res_123904 = addInt(res_123904, 1);
	} LA1: ;
	nimln(218, "platform.nim");
	result = ((NU8) 0);
	BeforeRet: ;
	popFrame();
	return result;
}
N_NOINLINE(void, platformInit)(void) {
	nimfr("platform", "platform.nim")
	nimln(220, "platform.nim");
	hostcpu_123561 = nametocpu_123573(((NimStringDesc*) &TMP420));
	nimln(221, "platform.nim");
	hostos_123563 = nametoos_123569(((NimStringDesc*) &TMP435));
	nimln(223, "platform.nim");
	settarget_123586(hostos_123563, hostcpu_123561);
	popFrame();
}

N_NOINLINE(void, platformDatInit)(void) {
}

