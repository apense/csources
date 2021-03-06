/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <stdio.h>

#include <string.h>
typedef struct Tidobj167015 Tidobj167015;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NimStringDesc* TY164580[1];
typedef N_NIMCALL_PTR(void, TY3289) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY3294) (void* p);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3289 marker;
TY3294 deepcopy;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  Tidobj167015  {
  TNimObject Sup;
NI id;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
N_NIMCALL(NIM_BOOL, open_13203)(FILE** f, NimStringDesc* filename, NU8 mode, NI bufsize);
N_NIMCALL(NimStringDesc*, togid_190462)(NimStringDesc* f);
N_NIMCALL(NimStringDesc*, completegeneratedfilepath_155001)(NimStringDesc* f, NIM_BOOL createsubdir);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(NIM_BOOL, readline_13481)(FILE* f, NimStringDesc** line);
N_NIMCALL(NI, nsuParseInt)(NimStringDesc* s);
N_NIMCALL(FILE*, open_13217)(NimStringDesc* filename, NU8 mode, NI bufsize);
static N_INLINE(void, writeln_155205)(FILE* f, NimStringDesc** x, NI xLen0);
N_NIMCALL(void, write_13457)(FILE* f, NimStringDesc* s);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x);
STRING_LITERAL(TMP1440, "nimrod.gid", 10);
STRING_LITERAL(TMP4265, "\012", 1);
NI gfrontendid_190012;
NI gbackendid_190013;

N_NIMCALL(void, registerid_190201)(Tidobj167015* id) {
}

N_NIMCALL(NimStringDesc*, togid_190462)(NimStringDesc* f) {
	NimStringDesc* result;
	result = 0;
	result = completegeneratedfilepath_155001(((NimStringDesc*) &TMP1440), NIM_TRUE);
	return result;
}

N_NIMCALL(void, loadmaxids_190510)(NimStringDesc* project) {
	FILE* f;
	f = 0;
	{
		NimStringDesc* LOC3;
		NIM_BOOL LOC4;
		NimStringDesc* line;
		LOC3 = 0;
		LOC3 = togid_190462(project);
		LOC4 = 0;
		LOC4 = open_13203(&f, LOC3, ((NU8) 0), ((NI) -1));
		if (!LOC4) goto LA5;
		line = rawNewString(((NI) 20));
		{
			NIM_BOOL LOC9;
			NI frontendid;
			LOC9 = 0;
			LOC9 = readline_13481(f, (&line));
			if (!LOC9) goto LA10;
			frontendid = nsuParseInt(line);
			{
				NIM_BOOL LOC14;
				NI backendid;
				LOC14 = 0;
				LOC14 = readline_13481(f, (&line));
				if (!LOC14) goto LA15;
				backendid = nsuParseInt(line);
				gfrontendid_190012 = ((gfrontendid_190012 >= frontendid) ? gfrontendid_190012 : frontendid);
				gbackendid_190013 = ((gbackendid_190013 >= backendid) ? gbackendid_190013 : backendid);
			}
			LA15: ;
		}
		LA10: ;
		fclose(f);
	}
	LA5: ;
}

N_NIMCALL(void, idsynchronizationpoint_190453)(NI idrange) {
	gfrontendid_190012 = (NI)((NI)((NI)((NI)(gfrontendid_190012 / idrange) + ((NI) 1)) * idrange) + ((NI) 1));
}

static N_INLINE(void, writeln_155205)(FILE* f, NimStringDesc** x, NI xLen0) {
	{
		NimStringDesc* i_155221;
		NI i_155229;
		i_155221 = 0;
		i_155229 = ((NI) 0);
		{
			while (1) {
				if (!(i_155229 < xLen0)) goto LA3;
				i_155221 = x[i_155229];
				write_13457(f, i_155221);
				i_155229 += ((NI) 1);
			} LA3: ;
		}
	}
	write_13457(f, ((NimStringDesc*) &TMP4265));
}

N_NIMCALL(void, savemaxids_190472)(NimStringDesc* project) {
	FILE* f;
	NimStringDesc* LOC1;
	TY164580 LOC2;
	TY164580 LOC3;
	LOC1 = 0;
	LOC1 = togid_190462(project);
	f = open_13217(LOC1, ((NU8) 1), ((NI) -1));
	memset((void*)LOC2, 0, sizeof(LOC2));
	LOC2[0] = nimIntToStr(gfrontendid_190012);
	writeln_155205(f, LOC2, 1);
	memset((void*)LOC3, 0, sizeof(LOC3));
	LOC3[0] = nimIntToStr(gbackendid_190013);
	writeln_155205(f, LOC3, 1);
	fclose(f);
}
NIM_EXTERNC N_NOINLINE(void, compiler_idgenInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_idgenDatInit)(void) {
}

