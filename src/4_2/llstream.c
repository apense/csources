/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <stdio.h>

#include <string.h>
typedef struct tllstream159204 tllstream159204;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
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
struct tllstream159204 {
  TNimObject Sup;
NU8 Kind;
FILE* F;
NimStringDesc* S;
NI Rd;
NI Wr;
NI Lineoffset;
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
typedef NU8 TY104134[32];
typedef NI TY21621[8];
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
N_NIMCALL(tllstream159204*, llstreamopen_159218)(NimStringDesc* data);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP1548)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell38849*, usrtocell_42243)(void* usr);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(void, rtladdzct_43402)(tcell38849* c);
N_NOINLINE(void, addzct_42215)(tcellseq38865* s, tcell38849* c);
N_NIMCALL(tllstream159204*, llstreamopen_159222)(FILE** f);
N_NIMCALL(tllstream159204*, llstreamopen_159227)(NimStringDesc* filename, NU8 mode);
N_NIMCALL(NIM_BOOL, open_9017)(FILE** f, NimStringDesc* filename, NU8 mode, NI bufsize);
N_NIMCALL(tllstream159204*, llstreamopen_159232)(void);
N_NIMCALL(tllstream159204*, llstreamopenstdin_159235)(void);
N_NIMCALL(void, llstreamclose_159238)(tllstream159204* s);
N_NIMCALL(NIM_BOOL, readlinefromstdin_159391)(NimStringDesc* prompt, NimStringDesc** line);
N_NIMCALL(void, write_9262)(FILE* f, NimStringDesc* s);
N_NIMCALL(NIM_BOOL, readline_9286)(FILE* f, NimStringDesc** line);
N_NIMCALL(NIM_BOOL, endswith_159602)(NimStringDesc* x, TY104134 s);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(NIM_BOOL, endswithopr_159638)(NimStringDesc* x);
static N_INLINE(NIM_BOOL, continueline_159644)(NimStringDesc* line, NIM_BOOL intriplestring);
N_NIMCALL(NI, counttriples_159661)(NimStringDesc* s);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(NI, llreadfromstdin_159707)(tllstream159204* s, void* buf, NI buflen);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(NI, llstreamread_159242)(tllstream159204* s, void* buf, NI buflen);
N_NIMCALL(NI, readbuffer_9317)(FILE* f, void* buffer, NI len);
N_NIMCALL(NIM_BOOL, llstreamreadline_159248)(tllstream159204* s, NimStringDesc** line);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newlen);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(void, llstreamwrite_159258)(tllstream159204* s, NimStringDesc* data);
N_NIMCALL(void, llstreamwriteln_159274)(tllstream159204* s, NimStringDesc* data);
N_NIMCALL(void, llstreamwrite_159263)(tllstream159204* s, NIM_CHAR data);
N_NIMCALL(NI, writebuffer_9336)(FILE* f, void* buffer, NI len);
N_NIMCALL(void, llstreamwrite_159268)(tllstream159204* s, void* buf, NI buflen);
N_NIMCALL(NimStringDesc*, llstreamreadall_159254)(tllstream159204* s);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
STRING_LITERAL(TMP1549, "", 0);
NIM_CONST TY104134 linecontinuationoprs_159633 = {
0x00, 0x00, 0x00, 0x00, 0x72, 0xBC, 0x00, 0xD0,
0x01, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x50,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
NIM_CONST TY104134 additionallinecontinuationoprs_159635 = {
0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x24,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
static NIM_CONST TY104134 TMP1551 = {
0x00, 0x00, 0x00, 0x00, 0x72, 0xBC, 0x00, 0xD0,
0x01, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x50,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
static NIM_CONST TY104134 TMP1552 = {
0x00, 0x00, 0x00, 0x00, 0x7A, 0xBC, 0x00, 0xF4,
0x01, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x50,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP1555, ">>> ", 4);
STRING_LITERAL(TMP1556, "... ", 4);
STRING_LITERAL(TMP1557, "\012", 1);
extern TNimType NTI1009; /* TObject */
TNimType NTI159204; /* TLLStream */
TNimType NTI159202; /* TLLStreamKind */
extern TNimType NTI9004; /* TFile */
extern TNimType NTI143; /* string */
extern TNimType NTI105; /* int */
TNimType NTI159206; /* PLLStream */
extern TFrame* frameptr_12027;
extern tgcheap40816 gch_40842;
N_NIMCALL(void, TMP1548)(void* p, NI op) {
	tllstream159204* a;
	a = (tllstream159204*)p;
	nimGCvisit((void*)(*a).S, op);
}

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_12027;
	frameptr_12027 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_12027 = (*frameptr_12027).prev;
}

static N_INLINE(tcell38849*, usrtocell_42243)(void* usr) {
	tcell38849* result;
	nimfr("usrToCell", "gc.nim")
	result = 0;
	nimln(106, "gc.nim");
	nimln(106, "gc.nim");
	nimln(106, "gc.nim");
	result = ((tcell38849*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(tcell38849))))));
	popFrame();
	return result;
}

static N_INLINE(void, rtladdzct_43402)(tcell38849* c) {
	nimfr("rtlAddZCT", "gc.nim")
	nimln(184, "gc.nim");
	addzct_42215(&gch_40842.Zct, c);
	popFrame();
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
		if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA3;
		nimln(221, "gc.nim");
		rtladdzct_43402(c);
	}
	LA3: ;
	popFrame();
}

N_NIMCALL(tllstream159204*, llstreamopen_159218)(NimStringDesc* data) {
	tllstream159204* result;
	NimStringDesc* LOC1;
	nimfr("LLStreamOpen", "llstream.nim")
	result = 0;
	nimln(49, "llstream.nim");
	result = (tllstream159204*) newObj((&NTI159206), sizeof(tllstream159204));
	(*result).Sup.m_type = (&NTI159204);
	nimln(50, "llstream.nim");
	LOC1 = 0;
	LOC1 = (*result).S; (*result).S = copyStringRC1(data);
	if (LOC1) nimGCunrefNoCycle(LOC1);
	nimln(51, "llstream.nim");
	(*result).Kind = ((NU8) 1);
	popFrame();
	return result;
}

N_NIMCALL(tllstream159204*, llstreamopen_159222)(FILE** f) {
	tllstream159204* result;
	nimfr("LLStreamOpen", "llstream.nim")
	result = 0;
	nimln(54, "llstream.nim");
	result = (tllstream159204*) newObj((&NTI159206), sizeof(tllstream159204));
	(*result).Sup.m_type = (&NTI159204);
	nimln(55, "llstream.nim");
	(*result).F = (*f);
	nimln(56, "llstream.nim");
	(*result).Kind = ((NU8) 2);
	popFrame();
	return result;
}

N_NIMCALL(tllstream159204*, llstreamopen_159227)(NimStringDesc* filename, NU8 mode) {
	tllstream159204* result;
	nimfr("LLStreamOpen", "llstream.nim")
	result = 0;
	nimln(59, "llstream.nim");
	result = (tllstream159204*) newObj((&NTI159206), sizeof(tllstream159204));
	(*result).Sup.m_type = (&NTI159204);
	nimln(60, "llstream.nim");
	(*result).Kind = ((NU8) 2);
	nimln(61, "llstream.nim");
	{
		NIM_BOOL LOC3;
		nimln(61, "llstream.nim");
		nimln(61, "llstream.nim");
		LOC3 = open_9017(&(*result).F, filename, mode, -1);
		if (!!(LOC3)) goto LA4;
		nimln(61, "llstream.nim");
		result = NIM_NIL;
	}
	LA4: ;
	popFrame();
	return result;
}

N_NIMCALL(tllstream159204*, llstreamopen_159232)(void) {
	tllstream159204* result;
	nimfr("LLStreamOpen", "llstream.nim")
	result = 0;
	nimln(64, "llstream.nim");
	result = (tllstream159204*) newObj((&NTI159206), sizeof(tllstream159204));
	(*result).Sup.m_type = (&NTI159204);
	nimln(65, "llstream.nim");
	(*result).Kind = ((NU8) 0);
	popFrame();
	return result;
}

N_NIMCALL(tllstream159204*, llstreamopenstdin_159235)(void) {
	tllstream159204* result;
	NimStringDesc* LOC1;
	nimfr("LLStreamOpenStdIn", "llstream.nim")
	result = 0;
	nimln(68, "llstream.nim");
	result = (tllstream159204*) newObj((&NTI159206), sizeof(tllstream159204));
	(*result).Sup.m_type = (&NTI159204);
	nimln(69, "llstream.nim");
	(*result).Kind = ((NU8) 3);
	nimln(70, "llstream.nim");
	LOC1 = 0;
	LOC1 = (*result).S; (*result).S = copyStringRC1(((NimStringDesc*) &TMP1549));
	if (LOC1) nimGCunrefNoCycle(LOC1);
	nimln(71, "llstream.nim");
	(*result).Lineoffset = -1;
	popFrame();
	return result;
}

N_NIMCALL(void, llstreamclose_159238)(tllstream159204* s) {
	nimfr("LLStreamClose", "llstream.nim")
	nimln(74, "llstream.nim");
	switch ((*s).Kind) {
	case ((NU8) 0):
	case ((NU8) 1):
	case ((NU8) 3):
	{
	}
	break;
	case ((NU8) 2):
	{
		nimln(78, "llstream.nim");
		fclose((*s).F);
	}
	break;
	}
	popFrame();
}

N_NIMCALL(NIM_BOOL, readlinefromstdin_159391)(NimStringDesc* prompt, NimStringDesc** line) {
	NIM_BOOL result;
	nimfr("ReadLineFromStdin", "llstream.nim")
	result = 0;
	nimln(83, "llstream.nim");
	write_9262(stdout, prompt);
	nimln(84, "llstream.nim");
	result = readline_9286(stdin, line);
	popFrame();
	return result;
}

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

N_NIMCALL(NIM_BOOL, endswith_159602)(NimStringDesc* x, TY104134 s) {
	NIM_BOOL result;
	NI i;
	NI TMP1550;
	nimfr("endsWith", "llstream.nim")
	result = 0;
	nimln(87, "llstream.nim");
	nimln(87, "llstream.nim");
	nimln(87, "llstream.nim");
	TMP1550 = subInt(x->Sup.len, 1);
	i = (NI64)(TMP1550);
	nimln(88, "llstream.nim");
	while (1) {
		NIM_BOOL LOC2;
		nimln(88, "llstream.nim");
		nimln(688, "system.nim");
		LOC2 = (0 <= i);
		if (!(LOC2)) goto LA3;
		nimln(88, "llstream.nim");
		if ((NU)(i) > (NU)(x->Sup.len)) raiseIndexError();
		LOC2 = ((NU8)(x->data[i]) == (NU8)(32));
		LA3: ;
		if (!LOC2) goto LA1;
		nimln(88, "llstream.nim");
		i = subInt(i, 1);
	} LA1: ;
	nimln(89, "llstream.nim");
	{
		NIM_BOOL LOC6;
		nimln(89, "llstream.nim");
		nimln(688, "system.nim");
		LOC6 = (0 <= i);
		if (!(LOC6)) goto LA7;
		nimln(716, "system.nim");
		if ((NU)(i) > (NU)(x->Sup.len)) raiseIndexError();
		LOC6 = ((s[((NU8)(x->data[i]))/8] &(1<<(((NU8)(x->data[i]))%8)))!=0);
		LA7: ;
		if (!LOC6) goto LA8;
		nimln(90, "llstream.nim");
		result = NIM_TRUE;
	}
	LA8: ;
	popFrame();
	return result;
}

N_NIMCALL(NIM_BOOL, endswithopr_159638)(NimStringDesc* x) {
	NIM_BOOL result;
	nimfr("endsWithOpr", "llstream.nim")
	result = 0;
	nimln(99, "llstream.nim");
	result = endswith_159602(x, TMP1551);
	popFrame();
	return result;
}

static N_INLINE(NIM_BOOL, continueline_159644)(NimStringDesc* line, NIM_BOOL intriplestring) {
	NIM_BOOL result;
	NIM_BOOL LOC1;
	NIM_BOOL LOC2;
	nimfr("continueLine", "llstream.nim")
	result = 0;
	nimln(102, "llstream.nim");
	nimln(103, "llstream.nim");
	nimln(102, "llstream.nim");
	LOC2 = intriplestring;
	if (LOC2) goto LA3;
	nimln(103, "llstream.nim");
	if ((NU)(0) > (NU)(line->Sup.len)) raiseIndexError();
	LOC2 = ((NU8)(line->data[0]) == (NU8)(32));
	LA3: ;
	LOC1 = LOC2;
	if (LOC1) goto LA4;
	nimln(104, "llstream.nim");
	LOC1 = endswith_159602(line, TMP1552);
	LA4: ;
	result = LOC1;
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

N_NIMCALL(NI, counttriples_159661)(NimStringDesc* s) {
	NI result;
	NI i;
	nimfr("countTriples", "llstream.nim")
	result = 0;
	nimln(107, "llstream.nim");
	i = 0;
	nimln(108, "llstream.nim");
	while (1) {
		nimln(108, "llstream.nim");
		nimln(108, "llstream.nim");
		if (!(i < s->Sup.len)) goto LA1;
		nimln(109, "llstream.nim");
		{
			NIM_BOOL LOC4;
			NIM_BOOL LOC5;
			NI TMP1553;
			NI TMP1554;
			nimln(109, "llstream.nim");
			nimln(109, "llstream.nim");
			nimln(109, "llstream.nim");
			if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
			LOC5 = ((NU8)(s->data[i]) == (NU8)(34));
			if (!(LOC5)) goto LA6;
			nimln(109, "llstream.nim");
			nimln(109, "llstream.nim");
			TMP1553 = addInt(i, 1);
			if ((NU)((NI64)(TMP1553)) > (NU)(s->Sup.len)) raiseIndexError();
			LOC5 = ((NU8)(s->data[(NI64)(TMP1553)]) == (NU8)(34));
			LA6: ;
			LOC4 = LOC5;
			if (!(LOC4)) goto LA7;
			nimln(109, "llstream.nim");
			nimln(109, "llstream.nim");
			TMP1554 = addInt(i, 2);
			if ((NU)((NI64)(TMP1554)) > (NU)(s->Sup.len)) raiseIndexError();
			LOC4 = ((NU8)(s->data[(NI64)(TMP1554)]) == (NU8)(34));
			LA7: ;
			if (!LOC4) goto LA8;
			nimln(110, "llstream.nim");
			result = addInt(result, 1);
			nimln(111, "llstream.nim");
			i = addInt(i, 2);
		}
		LA8: ;
		nimln(112, "llstream.nim");
		i = addInt(i, 1);
	} LA1: ;
	popFrame();
	return result;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) (&(*dest).data[((*dest).Sup.len)- 0])), ((NCSTRING) ((*src).data)), (NI64)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(NI, llreadfromstdin_159707)(tllstream159204* s, void* buf, NI buflen) {
	NI result;
	NimStringDesc* LOC1;
	NimStringDesc* line;
	NI triples;
	NI TMP1558;
	nimfr("LLreadFromStdin", "llstream.nim")
	result = 0;
	nimln(115, "llstream.nim");
	LOC1 = 0;
	LOC1 = (*s).S; (*s).S = copyStringRC1(((NimStringDesc*) &TMP1549));
	if (LOC1) nimGCunrefNoCycle(LOC1);
	nimln(116, "llstream.nim");
	(*s).Rd = 0;
	nimln(117, "llstream.nim");
	nimln(117, "llstream.nim");
	line = rawNewString(120);
	nimln(118, "llstream.nim");
	triples = 0;
	nimln(119, "llstream.nim");
	while (1) {
		NimStringDesc* LOC3;
		NIM_BOOL LOC9;
		NI LOC10;
		nimln(119, "llstream.nim");
		LOC3 = 0;
		nimln(119, "llstream.nim");
		{
			nimln(119, "llstream.nim");
			nimln(119, "llstream.nim");
			if (!((*s).S->Sup.len == 0)) goto LA6;
			LOC3 = copyString(((NimStringDesc*) &TMP1555));
		}
		goto LA4;
		LA6: ;
		{
			LOC3 = copyString(((NimStringDesc*) &TMP1556));
		}
		LA4: ;
		LOC9 = readlinefromstdin_159391(LOC3, &line);
		if (!LOC9) goto LA2;
		nimln(120, "llstream.nim");
		(*s).S = resizeString((*s).S, line->Sup.len + 0);
appendString((*s).S, line);
		nimln(121, "llstream.nim");
		(*s).S = resizeString((*s).S, 1);
appendString((*s).S, ((NimStringDesc*) &TMP1557));
		nimln(122, "llstream.nim");
		nimln(122, "llstream.nim");
		LOC10 = counttriples_159661(line);
		triples = addInt(triples, LOC10);
		nimln(123, "llstream.nim");
		{
			NIM_BOOL LOC13;
			nimln(123, "llstream.nim");
			nimln(123, "llstream.nim");
			nimln(123, "llstream.nim");
			nimln(123, "llstream.nim");
			LOC13 = continueline_159644(line, (((NI) ((NI)(triples & 1))) == 1));
			if (!!(LOC13)) goto LA14;
			nimln(123, "llstream.nim");
			goto LA2;
		}
		LA14: ;
	} LA2: ;
	nimln(124, "llstream.nim");
	(*s).Lineoffset = addInt((*s).Lineoffset, 1);
	nimln(125, "llstream.nim");
	nimln(125, "llstream.nim");
	nimln(125, "llstream.nim");
	nimln(125, "llstream.nim");
	TMP1558 = subInt((*s).S->Sup.len, (*s).Rd);
	result = ((buflen <= (NI64)(TMP1558)) ? buflen : (NI64)(TMP1558));
	nimln(126, "llstream.nim");
	{
		nimln(692, "system.nim");
		if (!(0 < result)) goto LA18;
		nimln(127, "llstream.nim");
		if ((NU)((*s).Rd) > (NU)((*s).S->Sup.len)) raiseIndexError();
		memcpy(buf, ((void*) (&(*s).S->data[(*s).Rd])), result);
		nimln(128, "llstream.nim");
		(*s).Rd = addInt((*s).Rd, result);
	}
	LA18: ;
	popFrame();
	return result;
}

N_NIMCALL(NI, llstreamread_159242)(tllstream159204* s, void* buf, NI buflen) {
	NI result;
	nimfr("LLStreamRead", "llstream.nim")
	result = 0;
	nimln(131, "llstream.nim");
	switch ((*s).Kind) {
	case ((NU8) 0):
	{
		nimln(133, "llstream.nim");
		result = 0;
	}
	break;
	case ((NU8) 1):
	{
		NI TMP1559;
		nimln(135, "llstream.nim");
		nimln(135, "llstream.nim");
		nimln(135, "llstream.nim");
		nimln(135, "llstream.nim");
		TMP1559 = subInt((*s).S->Sup.len, (*s).Rd);
		result = ((buflen <= (NI64)(TMP1559)) ? buflen : (NI64)(TMP1559));
		nimln(136, "llstream.nim");
		{
			NI TMP1560;
			nimln(692, "system.nim");
			if (!(0 < result)) goto LA5;
			nimln(137, "llstream.nim");
			nimln(137, "llstream.nim");
			TMP1560 = addInt(0, (*s).Rd);
			if ((NU)((NI64)(TMP1560)) > (NU)((*s).S->Sup.len)) raiseIndexError();
			memcpy(buf, ((void*) (&(*s).S->data[(NI64)(TMP1560)])), result);
			nimln(138, "llstream.nim");
			(*s).Rd = addInt((*s).Rd, result);
		}
		LA5: ;
	}
	break;
	case ((NU8) 2):
	{
		nimln(140, "llstream.nim");
		result = readbuffer_9317((*s).F, buf, buflen);
	}
	break;
	case ((NU8) 3):
	{
		nimln(142, "llstream.nim");
		result = llreadfromstdin_159707(s, buf, buflen);
	}
	break;
	}
	popFrame();
	return result;
}

N_NIMCALL(NIM_BOOL, llstreamreadline_159248)(tllstream159204* s, NimStringDesc** line) {
	NIM_BOOL result;
	nimfr("LLStreamReadLine", "llstream.nim")
	result = 0;
	nimln(145, "llstream.nim");
	(*line) = setLengthStr((*line), 0);
	nimln(146, "llstream.nim");
	switch ((*s).Kind) {
	case ((NU8) 0):
	{
		nimln(148, "llstream.nim");
		result = NIM_TRUE;
	}
	break;
	case ((NU8) 1):
	{
		NIM_BOOL LOC11;
		nimln(150, "llstream.nim");
		while (1) {
			nimln(150, "llstream.nim");
			nimln(150, "llstream.nim");
			if (!((*s).Rd < (*s).S->Sup.len)) goto LA3;
			nimln(151, "llstream.nim");
			if ((NU)((*s).Rd) > (NU)((*s).S->Sup.len)) raiseIndexError();
			switch (((NU8)((*s).S->data[(*s).Rd]))) {
			case 13:
			{
				nimln(153, "llstream.nim");
				(*s).Rd = addInt((*s).Rd, 1);
				nimln(154, "llstream.nim");
				{
					nimln(154, "llstream.nim");
					if ((NU)((*s).Rd) > (NU)((*s).S->Sup.len)) raiseIndexError();
					if (!((NU8)((*s).S->data[(*s).Rd]) == (NU8)(10))) goto LA7;
					nimln(154, "llstream.nim");
					(*s).Rd = addInt((*s).Rd, 1);
				}
				LA7: ;
				nimln(155, "llstream.nim");
				goto LA3;
			}
			break;
			case 10:
			{
				nimln(157, "llstream.nim");
				(*s).Rd = addInt((*s).Rd, 1);
				nimln(158, "llstream.nim");
				goto LA3;
			}
			break;
			default:
			{
				nimln(160, "llstream.nim");
				if ((NU)((*s).Rd) > (NU)((*s).S->Sup.len)) raiseIndexError();
				(*line) = addChar((*line), (*s).S->data[(*s).Rd]);
				nimln(161, "llstream.nim");
				(*s).Rd = addInt((*s).Rd, 1);
			}
			break;
			}
		} LA3: ;
		nimln(162, "llstream.nim");
		nimln(162, "llstream.nim");
		nimln(692, "system.nim");
		nimln(162, "llstream.nim");
		LOC11 = (0 < (*line)->Sup.len);
		if (LOC11) goto LA12;
		nimln(162, "llstream.nim");
		nimln(162, "llstream.nim");
		LOC11 = ((*s).Rd < (*s).S->Sup.len);
		LA12: ;
		result = LOC11;
	}
	break;
	case ((NU8) 2):
	{
		nimln(164, "llstream.nim");
		result = readline_9286((*s).F, line);
	}
	break;
	case ((NU8) 3):
	{
		nimln(166, "llstream.nim");
		result = readline_9286(stdin, line);
	}
	break;
	}
	popFrame();
	return result;
}

N_NIMCALL(void, llstreamwrite_159258)(tllstream159204* s, NimStringDesc* data) {
	nimfr("LLStreamWrite", "llstream.nim")
	nimln(169, "llstream.nim");
	switch ((*s).Kind) {
	case ((NU8) 0):
	case ((NU8) 3):
	{
	}
	break;
	case ((NU8) 1):
	{
		nimln(173, "llstream.nim");
		(*s).S = resizeString((*s).S, data->Sup.len + 0);
appendString((*s).S, data);
		nimln(174, "llstream.nim");
		nimln(174, "llstream.nim");
		(*s).Wr = addInt((*s).Wr, data->Sup.len);
	}
	break;
	case ((NU8) 2):
	{
		nimln(176, "llstream.nim");
		write_9262((*s).F, data);
	}
	break;
	}
	popFrame();
}

N_NIMCALL(void, llstreamwriteln_159274)(tllstream159204* s, NimStringDesc* data) {
	nimfr("LLStreamWriteln", "llstream.nim")
	nimln(179, "llstream.nim");
	llstreamwrite_159258(s, data);
	nimln(180, "llstream.nim");
	llstreamwrite_159258(s, ((NimStringDesc*) &TMP1557));
	popFrame();
}

N_NIMCALL(void, llstreamwrite_159263)(tllstream159204* s, NIM_CHAR data) {
	NIM_CHAR c;
	nimfr("LLStreamWrite", "llstream.nim")
	c = 0;
	nimln(184, "llstream.nim");
	switch ((*s).Kind) {
	case ((NU8) 0):
	case ((NU8) 3):
	{
	}
	break;
	case ((NU8) 1):
	{
		nimln(188, "llstream.nim");
		(*s).S = addChar((*s).S, data);
		nimln(189, "llstream.nim");
		(*s).Wr = addInt((*s).Wr, 1);
	}
	break;
	case ((NU8) 2):
	{
		NI LOC4;
		nimln(191, "llstream.nim");
		c = data;
		nimln(192, "llstream.nim");
		nimln(192, "llstream.nim");
		LOC4 = writebuffer_9336((*s).F, ((void*) (&c)), 1);
	}
	break;
	}
	popFrame();
}

N_NIMCALL(void, llstreamwrite_159268)(tllstream159204* s, void* buf, NI buflen) {
	nimfr("LLStreamWrite", "llstream.nim")
	nimln(195, "llstream.nim");
	switch ((*s).Kind) {
	case ((NU8) 0):
	case ((NU8) 3):
	{
	}
	break;
	case ((NU8) 1):
	{
		nimln(199, "llstream.nim");
		{
			NI TMP1561;
			NI TMP1562;
			nimln(692, "system.nim");
			if (!(0 < buflen)) goto LA5;
			nimln(200, "llstream.nim");
			nimln(200, "llstream.nim");
			nimln(200, "llstream.nim");
			TMP1561 = addInt((*s).S->Sup.len, buflen);
			(*s).S = setLengthStr((*s).S, (NI64)(TMP1561));
			nimln(201, "llstream.nim");
			nimln(201, "llstream.nim");
			TMP1562 = addInt(0, (*s).Wr);
			if ((NU)((NI64)(TMP1562)) > (NU)((*s).S->Sup.len)) raiseIndexError();
			memcpy(((void*) (&(*s).S->data[(NI64)(TMP1562)])), buf, buflen);
			nimln(202, "llstream.nim");
			(*s).Wr = addInt((*s).Wr, buflen);
		}
		LA5: ;
	}
	break;
	case ((NU8) 2):
	{
		NI LOC8;
		nimln(204, "llstream.nim");
		nimln(204, "llstream.nim");
		LOC8 = writebuffer_9336((*s).F, buf, buflen);
	}
	break;
	}
	popFrame();
}

N_NIMCALL(NimStringDesc*, llstreamreadall_159254)(tllstream159204* s) {
	NimStringDesc* result;
	NI bytes;
	NI i;
	nimfr("LLStreamReadAll", "llstream.nim")
	result = 0;
	bytes = 0;
	i = 0;
	nimln(210, "llstream.nim");
	switch ((*s).Kind) {
	case ((NU8) 0):
	case ((NU8) 3):
	{
		nimln(212, "llstream.nim");
		result = copyString(((NimStringDesc*) &TMP1549));
	}
	break;
	case ((NU8) 1):
	{
		nimln(214, "llstream.nim");
		{
			nimln(214, "llstream.nim");
			if (!((*s).Rd == 0)) goto LA5;
			nimln(214, "llstream.nim");
			result = copyString((*s).S);
		}
		goto LA3;
		LA5: ;
		{
			nimln(215, "llstream.nim");
			nimln(215, "llstream.nim");
			result = copyStr((*s).S, (*s).Rd);
		}
		LA3: ;
		nimln(216, "llstream.nim");
		nimln(216, "llstream.nim");
		(*s).Rd = (*s).S->Sup.len;
	}
	break;
	case ((NU8) 2):
	{
		nimln(218, "llstream.nim");
		nimln(218, "llstream.nim");
		result = mnewString(2048);
		nimln(219, "llstream.nim");
		if ((NU)(0) > (NU)(result->Sup.len)) raiseIndexError();
		bytes = readbuffer_9317((*s).F, ((void*) (&result->data[0])), 2048);
		nimln(220, "llstream.nim");
		i = bytes;
		nimln(221, "llstream.nim");
		while (1) {
			NI TMP1563;
			NI TMP1564;
			nimln(221, "llstream.nim");
			if (!(bytes == 2048)) goto LA9;
			nimln(222, "llstream.nim");
			nimln(222, "llstream.nim");
			TMP1563 = addInt(i, 2048);
			result = setLengthStr(result, (NI64)(TMP1563));
			nimln(223, "llstream.nim");
			nimln(223, "llstream.nim");
			TMP1564 = addInt(i, 0);
			if ((NU)((NI64)(TMP1564)) > (NU)(result->Sup.len)) raiseIndexError();
			bytes = readbuffer_9317((*s).F, ((void*) (&result->data[(NI64)(TMP1564)])), 2048);
			nimln(224, "llstream.nim");
			i = addInt(i, bytes);
		} LA9: ;
		nimln(225, "llstream.nim");
		result = setLengthStr(result, i);
	}
	break;
	}
	popFrame();
	return result;
}
N_NOINLINE(void, llstreamInit)(void) {
	nimfr("llstream", "llstream.nim")
	popFrame();
}

N_NOINLINE(void, llstreamDatInit)(void) {
static TNimNode* TMP1544[6];
static TNimNode* TMP1545[4];
NI TMP1547;
static char* NIM_CONST TMP1546[4] = {
"llsNone", 
"llsString", 
"llsFile", 
"llsStdIn"};
static TNimNode TMP1542[12];
NTI159204.size = sizeof(tllstream159204);
NTI159204.kind = 17;
NTI159204.base = (&NTI1009);
NTI159204.flags = 2;
TMP1544[0] = &TMP1542[1];
NTI159202.size = sizeof(NU8);
NTI159202.kind = 14;
NTI159202.base = 0;
NTI159202.flags = 3;
for (TMP1547 = 0; TMP1547 < 4; TMP1547++) {
TMP1542[TMP1547+2].kind = 1;
TMP1542[TMP1547+2].offset = TMP1547;
TMP1542[TMP1547+2].name = TMP1546[TMP1547];
TMP1545[TMP1547] = &TMP1542[TMP1547+2];
}
TMP1542[6].len = 4; TMP1542[6].kind = 2; TMP1542[6].sons = &TMP1545[0];
NTI159202.node = &TMP1542[6];
TMP1542[1].kind = 1;
TMP1542[1].offset = offsetof(tllstream159204, Kind);
TMP1542[1].typ = (&NTI159202);
TMP1542[1].name = "kind";
TMP1544[1] = &TMP1542[7];
TMP1542[7].kind = 1;
TMP1542[7].offset = offsetof(tllstream159204, F);
TMP1542[7].typ = (&NTI9004);
TMP1542[7].name = "f";
TMP1544[2] = &TMP1542[8];
TMP1542[8].kind = 1;
TMP1542[8].offset = offsetof(tllstream159204, S);
TMP1542[8].typ = (&NTI143);
TMP1542[8].name = "s";
TMP1544[3] = &TMP1542[9];
TMP1542[9].kind = 1;
TMP1542[9].offset = offsetof(tllstream159204, Rd);
TMP1542[9].typ = (&NTI105);
TMP1542[9].name = "rd";
TMP1544[4] = &TMP1542[10];
TMP1542[10].kind = 1;
TMP1542[10].offset = offsetof(tllstream159204, Wr);
TMP1542[10].typ = (&NTI105);
TMP1542[10].name = "wr";
TMP1544[5] = &TMP1542[11];
TMP1542[11].kind = 1;
TMP1542[11].offset = offsetof(tllstream159204, Lineoffset);
TMP1542[11].typ = (&NTI105);
TMP1542[11].name = "lineOffset";
TMP1542[0].len = 6; TMP1542[0].kind = 2; TMP1542[0].sons = &TMP1544[0];
NTI159204.node = &TMP1542[0];
NTI159206.size = sizeof(tllstream159204*);
NTI159206.kind = 22;
NTI159206.base = (&NTI159204);
NTI159206.flags = 2;
NTI159206.marker = TMP1548;
}
