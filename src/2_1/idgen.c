/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <stdio.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tidobj131009 tidobj131009;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
struct TGenericSeq {
NI len;
NI reserved;
};
typedef NIM_CHAR TY611[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY611 data;
};
typedef NimStringDesc* TY105474[1];
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
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
static N_INLINE(NI, getid_168402)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NI, backendid_168419)(void);
static N_INLINE(void, setid_168436)(NI id);
N_NIMCALL(void, idsynchronizationpoint_168445)(NI idrange);
static N_INLINE(NI, divInt)(NI a, NI b);
N_NOINLINE(void, raiseDivByZero)(void);
N_NIMCALL(NI, mulInt)(NI a, NI b);
N_NIMCALL(NimStringDesc*, togid_168450)(NimStringDesc* f);
N_NIMCALL(NimStringDesc*, completegeneratedfilepath_105438)(NimStringDesc* f, NIM_BOOL createsubdir);
N_NIMCALL(void, savemaxids_168456)(NimStringDesc* project);
N_NIMCALL(FILE*, open_9032)(NimStringDesc* filename, NU8 mode, NI bufsize);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x);
N_NIMCALL(void, loadmaxids_168488)(NimStringDesc* project);
N_NIMCALL(NIM_BOOL, open_9017)(FILE** f, NimStringDesc* filename, NU8 mode, NI bufsize);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(NIM_BOOL, readline_9286)(FILE* f, NimStringDesc** line);
N_NIMCALL(NI, nsuParseInt)(NimStringDesc* s);
static N_INLINE(void, writeln_105451)(FILE* f, NimStringDesc** x, NI xLen0);
N_NIMCALL(void, write_9262)(FILE* f, NimStringDesc* s);
STRING_LITERAL(TMP1883, "nimrod.gid", 10);
STRING_LITERAL(TMP6988, "\012", 1);
NI gfrontendid_168005;
NI gbackendid_168006;
extern TFrame* frameptr_12027;

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

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_12027;
	frameptr_12027 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_12027 = (*frameptr_12027).prev;
}

static N_INLINE(NI, getid_168402)(void) {
	NI result;
	nimfr("getID", "idgen.nim")
	result = 0;
	nimln(30, "idgen.nim");
	result = gfrontendid_168005;
	nimln(31, "idgen.nim");
	gfrontendid_168005 = addInt(gfrontendid_168005, 1);
	popFrame();
	return result;
}

static N_INLINE(NI, backendid_168419)(void) {
	NI result;
	nimfr("backendId", "idgen.nim")
	result = 0;
	nimln(34, "idgen.nim");
	result = gbackendid_168006;
	nimln(35, "idgen.nim");
	gbackendid_168006 = addInt(gbackendid_168006, 1);
	popFrame();
	return result;
}

static N_INLINE(void, setid_168436)(NI id) {
	NI TMP1878;
	nimfr("setId", "idgen.nim")
	nimln(38, "idgen.nim");
	nimln(38, "idgen.nim");
	nimln(38, "idgen.nim");
	TMP1878 = addInt(id, 1);
	gfrontendid_168005 = ((gfrontendid_168005 >= (NI32)(TMP1878)) ? gfrontendid_168005 : (NI32)(TMP1878));
	popFrame();
}

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
		LOC7 = (a == (-2147483647 -1));
		if (!(LOC7)) goto LA8;
		LOC7 = (b == -1);
		LA8: ;
		if (!LOC7) goto LA9;
		raiseOverflow();
	}
	LA9: ;
	result = (NI32)(a / b);
	goto BeforeRet;
	BeforeRet: ;
	return result;
}

N_NIMCALL(void, idsynchronizationpoint_168445)(NI idrange) {
	NI TMP1879;
	NI TMP1880;
	NI TMP1881;
	NI TMP1882;
	nimfr("IDsynchronizationPoint", "idgen.nim")
	nimln(41, "idgen.nim");
	nimln(41, "idgen.nim");
	nimln(41, "idgen.nim");
	nimln(41, "idgen.nim");
	nimln(41, "idgen.nim");
	TMP1879 = divInt(gfrontendid_168005, idrange);
	TMP1880 = addInt((NI32)(TMP1879), 1);
	TMP1881 = mulInt((NI32)(TMP1880), idrange);
	TMP1882 = addInt((NI32)(TMP1881), 1);
	gfrontendid_168005 = (NI32)(TMP1882);
	popFrame();
}

N_NIMCALL(NimStringDesc*, togid_168450)(NimStringDesc* f) {
	NimStringDesc* result;
	nimfr("toGid", "idgen.nim")
	result = 0;
	nimln(47, "idgen.nim");
	result = completegeneratedfilepath_105438(((NimStringDesc*) &TMP1883), NIM_TRUE);
	popFrame();
	return result;
}

N_NIMCALL(void, savemaxids_168456)(NimStringDesc* project) {
	FILE* f;
	NimStringDesc* LOC1;
	TY105474 LOC2;
	TY105474 LOC3;
	nimfr("saveMaxIds", "idgen.nim")
	nimln(50, "idgen.nim");
	nimln(50, "idgen.nim");
	LOC1 = 0;
	LOC1 = togid_168450(project);
	f = open_9032(LOC1, ((NU8) 1), -1);
	nimln(51, "idgen.nim");
	memset((void*)LOC2, 0, sizeof(LOC2));
	nimln(51, "idgen.nim");
	nimln(51, "idgen.nim");
	LOC2[0] = nimIntToStr(gfrontendid_168005);
	writeln_105451(f, LOC2, 1);
	nimln(52, "idgen.nim");
	memset((void*)LOC3, 0, sizeof(LOC3));
	nimln(52, "idgen.nim");
	nimln(52, "idgen.nim");
	LOC3[0] = nimIntToStr(gbackendid_168006);
	writeln_105451(f, LOC3, 1);
	nimln(53, "idgen.nim");
	fclose(f);
	popFrame();
}

N_NIMCALL(void, loadmaxids_168488)(NimStringDesc* project) {
	FILE* f;
	nimfr("loadMaxIds", "idgen.nim")
	f = 0;
	nimln(57, "idgen.nim");
	{
		NimStringDesc* LOC3;
		NIM_BOOL LOC4;
		NimStringDesc* line;
		nimln(57, "idgen.nim");
		nimln(57, "idgen.nim");
		LOC3 = 0;
		LOC3 = togid_168450(project);
		LOC4 = open_9017(&f, LOC3, ((NU8) 0), -1);
		if (!LOC4) goto LA5;
		nimln(58, "idgen.nim");
		nimln(58, "idgen.nim");
		line = rawNewString(20);
		nimln(59, "idgen.nim");
		{
			NIM_BOOL LOC9;
			NI frontendid;
			nimln(59, "idgen.nim");
			LOC9 = readline_9286(f, &line);
			if (!LOC9) goto LA10;
			nimln(60, "idgen.nim");
			frontendid = nsuParseInt(line);
			nimln(61, "idgen.nim");
			{
				NIM_BOOL LOC14;
				NI backendid;
				nimln(61, "idgen.nim");
				LOC14 = readline_9286(f, &line);
				if (!LOC14) goto LA15;
				nimln(62, "idgen.nim");
				backendid = nsuParseInt(line);
				nimln(63, "idgen.nim");
				nimln(63, "idgen.nim");
				gfrontendid_168005 = ((gfrontendid_168005 >= frontendid) ? gfrontendid_168005 : frontendid);
				nimln(64, "idgen.nim");
				nimln(64, "idgen.nim");
				gbackendid_168006 = ((gbackendid_168006 >= backendid) ? gbackendid_168006 : backendid);
			}
			LA15: ;
		}
		LA10: ;
		nimln(65, "idgen.nim");
		fclose(f);
	}
	LA5: ;
	popFrame();
}

N_NIMCALL(void, registerid_168201)(tidobj131009* id) {
	nimfr("registerID", "idgen.nim")
	popFrame();
}

static N_INLINE(void, writeln_105451)(FILE* f, NimStringDesc** x, NI xLen0) {
	NimStringDesc* i_105465;
	NI i_105471;
	nimfr("writeln", "sysio.nim")
	i_105465 = 0;
	nimln(1350, "system.nim");
	i_105471 = 0;
	nimln(1351, "system.nim");
	while (1) {
		nimln(1351, "system.nim");
		nimln(1351, "system.nim");
		if (!(i_105471 < xLen0)) goto LA1;
		nimln(1352, "system.nim");
		i_105465 = x[i_105471];
		nimln(159, "sysio.nim");
		write_9262(f, i_105465);
		nimln(1353, "system.nim");
		i_105471 += 1;
	} LA1: ;
	nimln(160, "sysio.nim");
	write_9262(f, ((NimStringDesc*) &TMP6988));
	popFrame();
}
N_NOINLINE(void, idgenInit)(void) {
	nimfr("idgen", "idgen.nim")
	popFrame();
}

N_NOINLINE(void, idgenDatInit)(void) {
}

