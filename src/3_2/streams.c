/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct eio1033 eio1033;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct esystem1031 esystem1031;
typedef struct esynch1029 esynch1029;
typedef struct E_Base E_Base;
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
typedef struct tstream132630 tstream132630;
typedef struct tstringstream133006 tstringstream133006;
typedef struct tfilestream133125 tfilestream133125;
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
struct esynch1029 {
  E_Base Sup;
};
struct esystem1031 {
  esynch1029 Sup;
};
struct eio1033 {
  esystem1031 Sup;
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
typedef N_NIMCALL_PTR(void, TY132631) (tstream132630* s);
typedef N_NIMCALL_PTR(NIM_BOOL, TY132635) (tstream132630* s);
typedef N_NIMCALL_PTR(void, TY132639) (tstream132630* s, NI pos);
typedef N_NIMCALL_PTR(NI, TY132644) (tstream132630* s);
typedef N_NIMCALL_PTR(NI, TY132648) (tstream132630* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY132654) (tstream132630* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY132660) (tstream132630* s);
struct tstream132630 {
  TNimObject Sup;
TY132631 Closeimpl;
TY132635 Atendimpl;
TY132639 Setpositionimpl;
TY132644 Getpositionimpl;
TY132648 Readdataimpl;
TY132654 Writedataimpl;
TY132660 Flushimpl;
};
struct tstringstream133006 {
  tstream132630 Sup;
NimStringDesc* Data;
NI Pos;
};
struct tfilestream133125 {
  tstream132630 Sup;
FILE* F;
};
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
N_NIMCALL(eio1033*, neweio_132605)(NimStringDesc* msg);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell38849*, usrtocell_42243)(void* usr);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(void, rtladdzct_43402)(tcell38849* c);
N_NOINLINE(void, addzct_42215)(tcellseq38865* s, tcell38849* c);
N_NIMCALL(void, flush_132665)(tstream132630* s);
N_NIMCALL(void, close_132675)(tstream132630* s);
N_NIMCALL(void, close_132685)(tstream132630* s, tstream132630* unused);
N_NIMCALL(NIM_BOOL, atend_132691)(tstream132630* s);
N_NIMCALL(NIM_BOOL, atend_132697)(tstream132630* s, tstream132630* unused);
N_NIMCALL(void, setposition_132704)(tstream132630* s, NI pos);
N_NIMCALL(void, setposition_132710)(tstream132630* s, tstream132630* unused, NI pos);
N_NIMCALL(NI, getposition_132717)(tstream132630* s);
N_NIMCALL(NI, getposition_132723)(tstream132630* s, tstream132630* unused);
N_NIMCALL(NI, readdata_132730)(tstream132630* s, void* buffer, NI buflen);
N_NIMCALL(NI, readdata_132738)(tstream132630* s, tstream132630* unused, void* buffer, NI buflen);
N_NIMCALL(void, writedata_132747)(tstream132630* s, void* buffer, NI buflen);
N_NIMCALL(void, writedata_132754)(tstream132630* s, tstream132630* unused, void* buffer, NI buflen);
N_NIMCALL(void, write_132771)(tstream132630* s, NimStringDesc* x);
N_NIMCALL(void, writeln_132777)(tstream132630* s, NimStringDesc** args, NI argsLen0);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(NIM_CHAR, readchar_132807)(tstream132630* s);
N_NIMCALL(NIM_BOOL, readbool_132814)(tstream132630* s);
N_NIMCALL(NI8, readint8_132836)(tstream132630* s);
N_NIMCALL(NI16, readint16_132858)(tstream132630* s);
N_NIMCALL(NI32, readint32_132880)(tstream132630* s);
N_NIMCALL(NI64, readint64_132902)(tstream132630* s);
N_NIMCALL(NF32, readfloat32_132924)(tstream132630* s);
N_NIMCALL(NF64, readfloat64_132946)(tstream132630* s);
N_NIMCALL(NimStringDesc*, readstr_132968)(tstream132630* s, NI length);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newlen);
N_NIMCALL(NIM_BOOL, readline_132979)(tstream132630* s, NimStringDesc** line);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, readline_132993)(tstream132630* s);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NIM_BOOL, ssatend_133010)(tstream132630* s_133012);
N_NIMCALL(void, chckObj)(TNimType* obj, TNimType* subclass);
N_NIMCALL(void, sssetposition_133017)(tstream132630* s_133019, NI pos);
N_NIMCALL(NI, ssgetposition_133037)(tstream132630* s_133039);
N_NIMCALL(NI, ssreaddata_133044)(tstream132630* s_133046, void* buffer, NI buflen);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NIMCALL(void, sswritedata_133072)(tstream132630* s_133074, void* buffer, NI buflen);
N_NIMCALL(void, ssclose_133095)(tstream132630* s_133097);
N_NIMCALL(tstringstream133006*, newstringstream_133101)(NimStringDesc* s);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP889)(void* p, NI op);
N_NIMCALL(void, fsclose_133128)(tstream132630* s);
N_NIMCALL(void, fsflush_133144)(tstream132630* s);
N_NIMCALL(NIM_BOOL, fsatend_133149)(tstream132630* s);
N_NIMCALL(NIM_BOOL, endoffile_9227)(FILE* f);
N_NIMCALL(void, fssetposition_133155)(tstream132630* s, NI pos);
N_NIMCALL(void, setfilepos_9341)(FILE* f, NI64 pos);
N_NIMCALL(NI, fsgetposition_133161)(tstream132630* s);
N_NIMCALL(NI64, getfilepos_9345)(FILE* f);
N_NIMCALL(NI, fsreaddata_133168)(tstream132630* s, void* buffer, NI buflen);
N_NIMCALL(NI, readbuffer_9317)(FILE* f, void* buffer, NI len);
N_NIMCALL(void, fswritedata_133176)(tstream132630* s, void* buffer, NI buflen);
N_NIMCALL(NI, writebuffer_9336)(FILE* f, void* buffer, NI len);
N_NIMCALL(void, raiseException)(E_Base* e, NCSTRING ename);
N_NIMCALL(tfilestream133125*, newfilestream_133183)(FILE* f);
N_NIMCALL(void, TMP891)(void* p, NI op);
N_NIMCALL(tfilestream133125*, newfilestream_133204)(NimStringDesc* filename, NU8 mode);
N_NIMCALL(NIM_BOOL, open_9017)(FILE** f, NimStringDesc* filename, NU8 mode, NI bufsize);
N_NIMCALL(void, TMP898)(void* p, NI op);
N_NIMCALL(void, read_132821)(tstream132630* s, NIM_BOOL* result);
N_NIMCALL(void, read_132843)(tstream132630* s, NI8* result);
N_NIMCALL(void, read_132865)(tstream132630* s, NI16* result);
N_NIMCALL(void, read_132887)(tstream132630* s, NI32* result);
N_NIMCALL(void, read_132909)(tstream132630* s, NI64* result);
N_NIMCALL(void, read_132931)(tstream132630* s, NF32* result);
N_NIMCALL(void, read_132953)(tstream132630* s, NF64* result);
N_NIMCALL(NI, clamp_133023)(NI x, NI a, NI b);
STRING_LITERAL(TMP883, "\012", 1);
STRING_LITERAL(TMP884, "", 0);
STRING_LITERAL(TMP890, "cannot write to stream", 22);
STRING_LITERAL(TMP6983, "cannot read from stream", 23);
extern TNimType NTI9201; /* ref EIO */
extern TNimType NTI1033; /* EIO */
extern TFrame* frameptr_12027;
extern tgcheap40816 gch_40842;
extern TNimType NTI1009; /* TObject */
TNimType NTI132630; /* TStream */
TNimType NTI132631; /* proc (PStream) */
TNimType NTI132635; /* proc (PStream): bool */
TNimType NTI132639; /* proc (PStream, int) */
TNimType NTI132644; /* proc (PStream): int */
TNimType NTI132648; /* proc (PStream, pointer, int): int */
TNimType NTI132654; /* proc (PStream, pointer, int) */
TNimType NTI132660; /* proc (PStream) */
TNimType NTI133006; /* TStringStream */
extern TNimType NTI143; /* string */
extern TNimType NTI105; /* int */
TNimType NTI133004; /* PStringStream */
TNimType NTI133125; /* TFileStream */
extern TNimType NTI9004; /* TFile */
TNimType NTI133123; /* PFileStream */
TNimType NTI132628; /* PStream */

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

N_NIMCALL(eio1033*, neweio_132605)(NimStringDesc* msg) {
	eio1033* result;
	NimStringDesc* LOC1;
	nimfr("newEIO", "streams.nim")
	result = 0;
	nimln(16, "streams.nim");
	result = (eio1033*) newObj((&NTI9201), sizeof(eio1033));
	(*result).Sup.Sup.Sup.Sup.m_type = (&NTI1033);
	nimln(17, "streams.nim");
	LOC1 = 0;
	LOC1 = (*result).Sup.Sup.Sup.message; (*result).Sup.Sup.Sup.message = copyStringRC1(msg);
	if (LOC1) nimGCunrefNoCycle(LOC1);
	popFrame();
	return result;
}

N_NIMCALL(void, flush_132665)(tstream132630* s) {
	nimfr("flush", "streams.nim")
	nimln(38, "streams.nim");
	{
		nimln(38, "streams.nim");
		nimln(38, "streams.nim");
		if (!!((*s).Flushimpl == 0)) goto LA3;
		nimln(38, "streams.nim");
		(*s).Flushimpl(s);
	}
	LA3: ;
	popFrame();
}

N_NIMCALL(void, close_132675)(tstream132630* s) {
	nimfr("close", "streams.nim")
	nimln(42, "streams.nim");
	{
		nimln(42, "streams.nim");
		nimln(42, "streams.nim");
		if (!!((*s).Closeimpl == 0)) goto LA3;
		nimln(42, "streams.nim");
		(*s).Closeimpl(s);
	}
	LA3: ;
	popFrame();
}

N_NIMCALL(void, close_132685)(tstream132630* s, tstream132630* unused) {
	nimfr("close", "streams.nim")
	nimln(46, "streams.nim");
	(*s).Closeimpl(s);
	popFrame();
}

N_NIMCALL(NIM_BOOL, atend_132691)(tstream132630* s) {
	NIM_BOOL result;
	nimfr("atEnd", "streams.nim")
	result = 0;
	nimln(51, "streams.nim");
	result = (*s).Atendimpl(s);
	popFrame();
	return result;
}

N_NIMCALL(NIM_BOOL, atend_132697)(tstream132630* s, tstream132630* unused) {
	NIM_BOOL result;
	nimfr("atEnd", "streams.nim")
	result = 0;
	nimln(56, "streams.nim");
	result = (*s).Atendimpl(s);
	popFrame();
	return result;
}

N_NIMCALL(void, setposition_132704)(tstream132630* s, NI pos) {
	nimfr("setPosition", "streams.nim")
	nimln(60, "streams.nim");
	(*s).Setpositionimpl(s, pos);
	popFrame();
}

N_NIMCALL(void, setposition_132710)(tstream132630* s, tstream132630* unused, NI pos) {
	nimfr("setPosition", "streams.nim")
	nimln(64, "streams.nim");
	(*s).Setpositionimpl(s, pos);
	popFrame();
}

N_NIMCALL(NI, getposition_132717)(tstream132630* s) {
	NI result;
	nimfr("getPosition", "streams.nim")
	result = 0;
	nimln(68, "streams.nim");
	result = (*s).Getpositionimpl(s);
	popFrame();
	return result;
}

N_NIMCALL(NI, getposition_132723)(tstream132630* s, tstream132630* unused) {
	NI result;
	nimfr("getPosition", "streams.nim")
	result = 0;
	nimln(72, "streams.nim");
	result = (*s).Getpositionimpl(s);
	popFrame();
	return result;
}

N_NIMCALL(NI, readdata_132730)(tstream132630* s, void* buffer, NI buflen) {
	NI result;
	nimfr("readData", "streams.nim")
	result = 0;
	nimln(76, "streams.nim");
	result = (*s).Readdataimpl(s, buffer, buflen);
	popFrame();
	return result;
}

N_NIMCALL(NI, readdata_132738)(tstream132630* s, tstream132630* unused, void* buffer, NI buflen) {
	NI result;
	nimfr("readData", "streams.nim")
	result = 0;
	nimln(81, "streams.nim");
	result = (*s).Readdataimpl(s, buffer, buflen);
	popFrame();
	return result;
}

N_NIMCALL(void, writedata_132747)(tstream132630* s, void* buffer, NI buflen) {
	nimfr("writeData", "streams.nim")
	nimln(86, "streams.nim");
	(*s).Writedataimpl(s, buffer, buflen);
	popFrame();
}

N_NIMCALL(void, writedata_132754)(tstream132630* s, tstream132630* unused, void* buffer, NI buflen) {
	nimfr("writeData", "streams.nim")
	nimln(92, "streams.nim");
	(*s).Writedataimpl(s, buffer, buflen);
	popFrame();
}

N_NIMCALL(void, write_132771)(tstream132630* s, NimStringDesc* x) {
	nimfr("write", "streams.nim")
	nimln(107, "streams.nim");
	nimln(107, "streams.nim");
	writedata_132747(s, ((void*) (x->data)), x->Sup.len);
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

N_NIMCALL(void, writeln_132777)(tstream132630* s, NimStringDesc** args, NI argsLen0) {
	NimStringDesc* str_132790;
	NI i_132792;
	nimfr("writeln", "streams.nim")
	str_132790 = 0;
	nimln(1350, "system.nim");
	i_132792 = 0;
	nimln(1351, "system.nim");
	while (1) {
		nimln(1351, "system.nim");
		nimln(1351, "system.nim");
		if (!(i_132792 < argsLen0)) goto LA1;
		nimln(1352, "system.nim");
		if ((NU)(i_132792) >= (NU)(argsLen0)) raiseIndexError();
		str_132790 = args[i_132792];
		nimln(112, "streams.nim");
		write_132771(s, str_132790);
		nimln(1353, "system.nim");
		i_132792 = addInt(i_132792, 1);
	} LA1: ;
	nimln(113, "streams.nim");
	write_132771(s, ((NimStringDesc*) &TMP883));
	popFrame();
}

N_NIMCALL(NIM_CHAR, readchar_132807)(tstream132630* s) {
	NIM_CHAR result;
	nimfr("readChar", "streams.nim")
	result = 0;
	nimln(123, "streams.nim");
	{
		NI LOC3;
		nimln(684, "system.nim");
		nimln(684, "system.nim");
		nimln(123, "streams.nim");
		LOC3 = readdata_132730(s, ((void*) (&result)), 1);
		if (!!((LOC3 == 1))) goto LA4;
		nimln(123, "streams.nim");
		result = 0;
	}
	LA4: ;
	popFrame();
	return result;
}

N_NIMCALL(NIM_BOOL, readbool_132814)(tstream132630* s) {
	NIM_BOOL result;
	nimfr("readBool", "streams.nim")
	result = 0;
	nimln(127, "streams.nim");
	read_132821(s, &result);
	popFrame();
	return result;
}

N_NIMCALL(NI8, readint8_132836)(tstream132630* s) {
	NI8 result;
	nimfr("readInt8", "streams.nim")
	result = 0;
	nimln(131, "streams.nim");
	read_132843(s, &result);
	popFrame();
	return result;
}

N_NIMCALL(NI16, readint16_132858)(tstream132630* s) {
	NI16 result;
	nimfr("readInt16", "streams.nim")
	result = 0;
	nimln(135, "streams.nim");
	read_132865(s, &result);
	popFrame();
	return result;
}

N_NIMCALL(NI32, readint32_132880)(tstream132630* s) {
	NI32 result;
	nimfr("readInt32", "streams.nim")
	result = 0;
	nimln(139, "streams.nim");
	read_132887(s, &result);
	popFrame();
	return result;
}

N_NIMCALL(NI64, readint64_132902)(tstream132630* s) {
	NI64 result;
	nimfr("readInt64", "streams.nim")
	result = 0;
	nimln(143, "streams.nim");
	read_132909(s, &result);
	popFrame();
	return result;
}

N_NIMCALL(NF32, readfloat32_132924)(tstream132630* s) {
	NF32 result;
	nimfr("readFloat32", "streams.nim")
	result = 0;
	nimln(147, "streams.nim");
	read_132931(s, &result);
	popFrame();
	return result;
}

N_NIMCALL(NF64, readfloat64_132946)(tstream132630* s) {
	NF64 result;
	nimfr("readFloat64", "streams.nim")
	result = 0;
	nimln(151, "streams.nim");
	read_132953(s, &result);
	popFrame();
	return result;
}

N_NIMCALL(NimStringDesc*, readstr_132968)(tstream132630* s, NI length) {
	NimStringDesc* result;
	NI l;
	nimfr("readStr", "streams.nim")
	result = 0;
	nimln(156, "streams.nim");
	nimln(156, "streams.nim");
	result = mnewString(length);
	nimln(157, "streams.nim");
	if ((NU)(0) > (NU)(result->Sup.len)) raiseIndexError();
	l = readdata_132730(s, ((void*) (&result->data[0])), length);
	nimln(158, "streams.nim");
	{
		nimln(684, "system.nim");
		nimln(684, "system.nim");
		if (!!((l == length))) goto LA3;
		nimln(158, "streams.nim");
		result = setLengthStr(result, l);
	}
	LA3: ;
	popFrame();
	return result;
}

N_NIMCALL(NIM_BOOL, readline_132979)(tstream132630* s, NimStringDesc** line) {
	NIM_BOOL result;
	nimfr("readLine", "streams.nim")
	result = 0;
	nimln(167, "streams.nim");
	(*line) = setLengthStr((*line), 0);
	nimln(168, "streams.nim");
	while (1) {
		NIM_CHAR c;
		nimln(169, "streams.nim");
		c = readchar_132807(s);
		nimln(170, "streams.nim");
		{
			nimln(170, "streams.nim");
			if (!((NU8)(c) == (NU8)(13))) goto LA4;
			nimln(171, "streams.nim");
			c = readchar_132807(s);
			nimln(172, "streams.nim");
			goto LA1;
		}
		goto LA2;
		LA4: ;
		{
			nimln(173, "streams.nim");
			if (!((NU8)(c) == (NU8)(10))) goto LA7;
			nimln(173, "streams.nim");
			goto LA1;
		}
		goto LA2;
		LA7: ;
		{
			nimln(174, "streams.nim");
			if (!((NU8)(c) == (NU8)(0))) goto LA10;
			nimln(175, "streams.nim");
			{
				nimln(692, "system.nim");
				nimln(175, "streams.nim");
				if (!(0 < (*line)->Sup.len)) goto LA14;
				nimln(175, "streams.nim");
				goto LA1;
			}
			goto LA12;
			LA14: ;
			{
				nimln(176, "streams.nim");
				nimln(176, "streams.nim");
				result = NIM_FALSE;
				goto BeforeRet;
			}
			LA12: ;
		}
		goto LA2;
		LA10: ;
		LA2: ;
		nimln(177, "streams.nim");
		(*line) = addChar((*line), c);
	} LA1: ;
	nimln(178, "streams.nim");
	result = NIM_TRUE;
	BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(NimStringDesc*, readline_132993)(tstream132630* s) {
	NimStringDesc* result;
	nimfr("readLine", "streams.nim")
	result = 0;
	nimln(183, "streams.nim");
	result = copyString(((NimStringDesc*) &TMP884));
	nimln(184, "streams.nim");
	while (1) {
		NIM_CHAR c;
		nimln(185, "streams.nim");
		c = readchar_132807(s);
		nimln(186, "streams.nim");
		{
			nimln(186, "streams.nim");
			if (!((NU8)(c) == (NU8)(13))) goto LA4;
			nimln(187, "streams.nim");
			c = readchar_132807(s);
			nimln(188, "streams.nim");
			goto LA1;
		}
		LA4: ;
		nimln(189, "streams.nim");
		{
			NIM_BOOL LOC8;
			nimln(189, "streams.nim");
			nimln(189, "streams.nim");
			LOC8 = ((NU8)(c) == (NU8)(10));
			if (LOC8) goto LA9;
			nimln(189, "streams.nim");
			LOC8 = ((NU8)(c) == (NU8)(0));
			LA9: ;
			if (!LOC8) goto LA10;
			nimln(190, "streams.nim");
			goto LA1;
		}
		goto LA6;
		LA10: ;
		{
			nimln(192, "streams.nim");
			result = addChar(result, c);
		}
		LA6: ;
	} LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(NIM_BOOL, ssatend_133010)(tstream132630* s_133012) {
	NIM_BOOL result;
	tstringstream133006* s;
	nimfr("ssAtEnd", "streams.nim")
	result = 0;
	nimln(201, "streams.nim");
	if (s_133012) chckObj((*s_133012).Sup.m_type, (&NTI133006));
	s = ((tstringstream133006*) (s_133012));
	nimln(202, "streams.nim");
	nimln(202, "streams.nim");
	nimln(688, "system.nim");
	nimln(202, "streams.nim");
	result = ((*s).Data->Sup.len <= (*s).Pos);
	goto BeforeRet;
	BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(void, sssetposition_133017)(tstream132630* s_133019, NI pos) {
	tstringstream133006* s;
	nimfr("ssSetPosition", "streams.nim")
	nimln(205, "streams.nim");
	if (s_133019) chckObj((*s_133019).Sup.m_type, (&NTI133006));
	s = ((tstringstream133006*) (s_133019));
	nimln(206, "streams.nim");
	nimln(206, "streams.nim");
	(*s).Pos = clamp_133023(pos, 0, ((*s).Data->Sup.len-1));
	popFrame();
}

N_NIMCALL(NI, ssgetposition_133037)(tstream132630* s_133039) {
	NI result;
	tstringstream133006* s;
	nimfr("ssGetPosition", "streams.nim")
	result = 0;
	nimln(209, "streams.nim");
	if (s_133039) chckObj((*s_133039).Sup.m_type, (&NTI133006));
	s = ((tstringstream133006*) (s_133039));
	nimln(210, "streams.nim");
	nimln(210, "streams.nim");
	result = (*s).Pos;
	goto BeforeRet;
	BeforeRet: ;
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

N_NIMCALL(NI, ssreaddata_133044)(tstream132630* s_133046, void* buffer, NI buflen) {
	NI result;
	tstringstream133006* s;
	NI TMP887;
	nimfr("ssReadData", "streams.nim")
	result = 0;
	nimln(213, "streams.nim");
	if (s_133046) chckObj((*s_133046).Sup.m_type, (&NTI133006));
	s = ((tstringstream133006*) (s_133046));
	nimln(214, "streams.nim");
	nimln(214, "streams.nim");
	nimln(214, "streams.nim");
	nimln(214, "streams.nim");
	TMP887 = subInt((*s).Data->Sup.len, (*s).Pos);
	result = ((buflen <= (NI64)(TMP887)) ? buflen : (NI64)(TMP887));
	nimln(215, "streams.nim");
	{
		nimln(692, "system.nim");
		if (!(0 < result)) goto LA3;
		nimln(216, "streams.nim");
		if ((NU)((*s).Pos) > (NU)((*s).Data->Sup.len)) raiseIndexError();
		memcpy(buffer, ((void*) (&(*s).Data->data[(*s).Pos])), result);
		nimln(217, "streams.nim");
		(*s).Pos = addInt((*s).Pos, result);
	}
	LA3: ;
	popFrame();
	return result;
}

N_NIMCALL(void, sswritedata_133072)(tstream132630* s_133074, void* buffer, NI buflen) {
	tstringstream133006* s;
	nimfr("ssWriteData", "streams.nim")
	nimln(220, "streams.nim");
	if (s_133074) chckObj((*s_133074).Sup.m_type, (&NTI133006));
	s = ((tstringstream133006*) (s_133074));
	nimln(221, "streams.nim");
	{
		NI TMP888;
		nimln(692, "system.nim");
		if (!(0 < buflen)) goto LA3;
		nimln(222, "streams.nim");
		nimln(222, "streams.nim");
		nimln(222, "streams.nim");
		TMP888 = addInt((*s).Data->Sup.len, buflen);
		(*s).Data = setLengthStr((*s).Data, (NI64)(TMP888));
		nimln(223, "streams.nim");
		if ((NU)((*s).Pos) > (NU)((*s).Data->Sup.len)) raiseIndexError();
		memcpy(((void*) (&(*s).Data->data[(*s).Pos])), buffer, buflen);
		nimln(224, "streams.nim");
		(*s).Pos = addInt((*s).Pos, buflen);
	}
	LA3: ;
	popFrame();
}

N_NIMCALL(void, ssclose_133095)(tstream132630* s_133097) {
	tstringstream133006* s;
	NimStringDesc* LOC1;
	nimfr("ssClose", "streams.nim")
	nimln(227, "streams.nim");
	if (s_133097) chckObj((*s_133097).Sup.m_type, (&NTI133006));
	s = ((tstringstream133006*) (s_133097));
	nimln(228, "streams.nim");
	LOC1 = 0;
	LOC1 = (*s).Data; (*s).Data = copyStringRC1(NIM_NIL);
	if (LOC1) nimGCunrefNoCycle(LOC1);
	popFrame();
}
N_NIMCALL(void, TMP889)(void* p, NI op) {
	tstringstream133006* a;
	a = (tstringstream133006*)p;
	nimGCvisit((void*)(*a).Data, op);
}

N_NIMCALL(tstringstream133006*, newstringstream_133101)(NimStringDesc* s) {
	tstringstream133006* result;
	NimStringDesc* LOC1;
	nimfr("newStringStream", "streams.nim")
	result = 0;
	nimln(232, "streams.nim");
	result = (tstringstream133006*) newObj((&NTI133004), sizeof(tstringstream133006));
	(*result).Sup.Sup.m_type = (&NTI133006);
	nimln(233, "streams.nim");
	LOC1 = 0;
	LOC1 = (*result).Data; (*result).Data = copyStringRC1(s);
	if (LOC1) nimGCunrefNoCycle(LOC1);
	nimln(234, "streams.nim");
	(*result).Pos = 0;
	nimln(235, "streams.nim");
	(*result).Sup.Closeimpl = ssclose_133095;
	nimln(236, "streams.nim");
	(*result).Sup.Atendimpl = ssatend_133010;
	nimln(237, "streams.nim");
	(*result).Sup.Setpositionimpl = sssetposition_133017;
	nimln(238, "streams.nim");
	(*result).Sup.Getpositionimpl = ssgetposition_133037;
	nimln(239, "streams.nim");
	(*result).Sup.Readdataimpl = ssreaddata_133044;
	nimln(240, "streams.nim");
	(*result).Sup.Writedataimpl = sswritedata_133072;
	popFrame();
	return result;
}

N_NIMCALL(void, fsclose_133128)(tstream132630* s) {
	nimfr("fsClose", "streams.nim")
	nimln(248, "streams.nim");
	{
		nimln(684, "system.nim");
		nimln(684, "system.nim");
		if (s) chckObj((*s).Sup.m_type, (&NTI133125));
		if (!!(((*((tfilestream133125*) (s))).F == NIM_NIL))) goto LA3;
		nimln(249, "streams.nim");
		if (s) chckObj((*s).Sup.m_type, (&NTI133125));
		fclose((*((tfilestream133125*) (s))).F);
		nimln(250, "streams.nim");
		if (s) chckObj((*s).Sup.m_type, (&NTI133125));
		(*((tfilestream133125*) (s))).F = NIM_NIL;
	}
	LA3: ;
	popFrame();
}

N_NIMCALL(void, fsflush_133144)(tstream132630* s) {
	nimfr("fsFlush", "streams.nim")
	nimln(251, "streams.nim");
	if (s) chckObj((*s).Sup.m_type, (&NTI133125));
	fflush((*((tfilestream133125*) (s))).F);
	popFrame();
}

N_NIMCALL(NIM_BOOL, fsatend_133149)(tstream132630* s) {
	NIM_BOOL result;
	nimfr("fsAtEnd", "streams.nim")
	result = 0;
	nimln(252, "streams.nim");
	nimln(252, "streams.nim");
	if (s) chckObj((*s).Sup.m_type, (&NTI133125));
	result = endoffile_9227((*((tfilestream133125*) (s))).F);
	goto BeforeRet;
	BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(void, fssetposition_133155)(tstream132630* s, NI pos) {
	nimfr("fsSetPosition", "streams.nim")
	nimln(253, "streams.nim");
	if (s) chckObj((*s).Sup.m_type, (&NTI133125));
	setfilepos_9341((*((tfilestream133125*) (s))).F, ((NI64) (pos)));
	popFrame();
}

N_NIMCALL(NI, fsgetposition_133161)(tstream132630* s) {
	NI result;
	NI64 LOC1;
	nimfr("fsGetPosition", "streams.nim")
	result = 0;
	nimln(254, "streams.nim");
	nimln(254, "streams.nim");
	nimln(254, "streams.nim");
	if (s) chckObj((*s).Sup.m_type, (&NTI133125));
	LOC1 = getfilepos_9345((*((tfilestream133125*) (s))).F);
	result = ((NI) (LOC1));
	goto BeforeRet;
	BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(NI, fsreaddata_133168)(tstream132630* s, void* buffer, NI buflen) {
	NI result;
	nimfr("fsReadData", "streams.nim")
	result = 0;
	nimln(257, "streams.nim");
	if (s) chckObj((*s).Sup.m_type, (&NTI133125));
	result = readbuffer_9317((*((tfilestream133125*) (s))).F, buffer, buflen);
	popFrame();
	return result;
}

N_NIMCALL(void, fswritedata_133176)(tstream132630* s, void* buffer, NI buflen) {
	nimfr("fsWriteData", "streams.nim")
	nimln(260, "streams.nim");
	{
		NI LOC3;
		eio1033* LOC6;
		nimln(684, "system.nim");
		nimln(684, "system.nim");
		nimln(260, "streams.nim");
		if (s) chckObj((*s).Sup.m_type, (&NTI133125));
		LOC3 = writebuffer_9336((*((tfilestream133125*) (s))).F, buffer, buflen);
		if (!!((LOC3 == buflen))) goto LA4;
		nimln(261, "streams.nim");
		LOC6 = 0;
		LOC6 = neweio_132605(((NimStringDesc*) &TMP890));
		nimln(261, "streams.nim");
		raiseException((E_Base*)LOC6, "EIO");
	}
	LA4: ;
	popFrame();
}
N_NIMCALL(void, TMP891)(void* p, NI op) {
	tfilestream133125* a;
	a = (tfilestream133125*)p;
}

N_NIMCALL(tfilestream133125*, newfilestream_133183)(FILE* f) {
	tfilestream133125* result;
	nimfr("newFileStream", "streams.nim")
	result = 0;
	nimln(265, "streams.nim");
	result = (tfilestream133125*) newObj((&NTI133123), sizeof(tfilestream133125));
	(*result).Sup.Sup.m_type = (&NTI133125);
	nimln(266, "streams.nim");
	(*result).F = f;
	nimln(267, "streams.nim");
	(*result).Sup.Closeimpl = fsclose_133128;
	nimln(268, "streams.nim");
	(*result).Sup.Atendimpl = fsatend_133149;
	nimln(269, "streams.nim");
	(*result).Sup.Setpositionimpl = fssetposition_133155;
	nimln(270, "streams.nim");
	(*result).Sup.Getpositionimpl = fsgetposition_133161;
	nimln(271, "streams.nim");
	(*result).Sup.Readdataimpl = fsreaddata_133168;
	nimln(272, "streams.nim");
	(*result).Sup.Writedataimpl = fswritedata_133176;
	nimln(273, "streams.nim");
	(*result).Sup.Flushimpl = fsflush_133144;
	popFrame();
	return result;
}

N_NIMCALL(tfilestream133125*, newfilestream_133204)(NimStringDesc* filename, NU8 mode) {
	tfilestream133125* result;
	FILE* f;
	nimfr("newFileStream", "streams.nim")
	result = 0;
	f = 0;
	nimln(280, "streams.nim");
	{
		NIM_BOOL LOC3;
		nimln(280, "streams.nim");
		LOC3 = open_9017(&f, filename, mode, -1);
		if (!LOC3) goto LA4;
		nimln(280, "streams.nim");
		result = newfilestream_133183(f);
	}
	LA4: ;
	popFrame();
	return result;
}
N_NIMCALL(void, TMP898)(void* p, NI op) {
	tstream132630* a;
	a = (tstream132630*)p;
}

N_NIMCALL(void, read_132821)(tstream132630* s, NIM_BOOL* result) {
	nimfr("read", "streams.nim")
	nimln(117, "streams.nim");
	{
		NI LOC3;
		eio1033* LOC6;
		nimln(684, "system.nim");
		nimln(684, "system.nim");
		nimln(117, "streams.nim");
		LOC3 = readdata_132730(s, ((void*) (result)), 1);
		if (!!((LOC3 == 1))) goto LA4;
		nimln(118, "streams.nim");
		LOC6 = 0;
		LOC6 = neweio_132605(((NimStringDesc*) &TMP6983));
		nimln(118, "streams.nim");
		raiseException((E_Base*)LOC6, "EIO");
	}
	LA4: ;
	popFrame();
}

N_NIMCALL(void, read_132843)(tstream132630* s, NI8* result) {
	nimfr("read", "streams.nim")
	nimln(117, "streams.nim");
	{
		NI LOC3;
		eio1033* LOC6;
		nimln(684, "system.nim");
		nimln(684, "system.nim");
		nimln(117, "streams.nim");
		LOC3 = readdata_132730(s, ((void*) (result)), 1);
		if (!!((LOC3 == 1))) goto LA4;
		nimln(118, "streams.nim");
		LOC6 = 0;
		LOC6 = neweio_132605(((NimStringDesc*) &TMP6983));
		nimln(118, "streams.nim");
		raiseException((E_Base*)LOC6, "EIO");
	}
	LA4: ;
	popFrame();
}

N_NIMCALL(void, read_132865)(tstream132630* s, NI16* result) {
	nimfr("read", "streams.nim")
	nimln(117, "streams.nim");
	{
		NI LOC3;
		eio1033* LOC6;
		nimln(684, "system.nim");
		nimln(684, "system.nim");
		nimln(117, "streams.nim");
		LOC3 = readdata_132730(s, ((void*) (result)), 2);
		if (!!((LOC3 == 2))) goto LA4;
		nimln(118, "streams.nim");
		LOC6 = 0;
		LOC6 = neweio_132605(((NimStringDesc*) &TMP6983));
		nimln(118, "streams.nim");
		raiseException((E_Base*)LOC6, "EIO");
	}
	LA4: ;
	popFrame();
}

N_NIMCALL(void, read_132887)(tstream132630* s, NI32* result) {
	nimfr("read", "streams.nim")
	nimln(117, "streams.nim");
	{
		NI LOC3;
		eio1033* LOC6;
		nimln(684, "system.nim");
		nimln(684, "system.nim");
		nimln(117, "streams.nim");
		LOC3 = readdata_132730(s, ((void*) (result)), 4);
		if (!!((LOC3 == 4))) goto LA4;
		nimln(118, "streams.nim");
		LOC6 = 0;
		LOC6 = neweio_132605(((NimStringDesc*) &TMP6983));
		nimln(118, "streams.nim");
		raiseException((E_Base*)LOC6, "EIO");
	}
	LA4: ;
	popFrame();
}

N_NIMCALL(void, read_132909)(tstream132630* s, NI64* result) {
	nimfr("read", "streams.nim")
	nimln(117, "streams.nim");
	{
		NI LOC3;
		eio1033* LOC6;
		nimln(684, "system.nim");
		nimln(684, "system.nim");
		nimln(117, "streams.nim");
		LOC3 = readdata_132730(s, ((void*) (result)), 8);
		if (!!((LOC3 == 8))) goto LA4;
		nimln(118, "streams.nim");
		LOC6 = 0;
		LOC6 = neweio_132605(((NimStringDesc*) &TMP6983));
		nimln(118, "streams.nim");
		raiseException((E_Base*)LOC6, "EIO");
	}
	LA4: ;
	popFrame();
}

N_NIMCALL(void, read_132931)(tstream132630* s, NF32* result) {
	nimfr("read", "streams.nim")
	nimln(117, "streams.nim");
	{
		NI LOC3;
		eio1033* LOC6;
		nimln(684, "system.nim");
		nimln(684, "system.nim");
		nimln(117, "streams.nim");
		LOC3 = readdata_132730(s, ((void*) (result)), 4);
		if (!!((LOC3 == 4))) goto LA4;
		nimln(118, "streams.nim");
		LOC6 = 0;
		LOC6 = neweio_132605(((NimStringDesc*) &TMP6983));
		nimln(118, "streams.nim");
		raiseException((E_Base*)LOC6, "EIO");
	}
	LA4: ;
	popFrame();
}

N_NIMCALL(void, read_132953)(tstream132630* s, NF64* result) {
	nimfr("read", "streams.nim")
	nimln(117, "streams.nim");
	{
		NI LOC3;
		eio1033* LOC6;
		nimln(684, "system.nim");
		nimln(684, "system.nim");
		nimln(117, "streams.nim");
		LOC3 = readdata_132730(s, ((void*) (result)), 8);
		if (!!((LOC3 == 8))) goto LA4;
		nimln(118, "streams.nim");
		LOC6 = 0;
		LOC6 = neweio_132605(((NimStringDesc*) &TMP6983));
		nimln(118, "streams.nim");
		raiseException((E_Base*)LOC6, "EIO");
	}
	LA4: ;
	popFrame();
}

N_NIMCALL(NI, clamp_133023)(NI x, NI a, NI b) {
	NI result;
	nimfr("clamp", "system.nim")
	result = 0;
	nimln(1344, "system.nim");
	{
		nimln(1344, "system.nim");
		if (!(x < a)) goto LA3;
		nimln(1344, "system.nim");
		nimln(1344, "system.nim");
		result = a;
		goto BeforeRet;
	}
	LA3: ;
	nimln(1345, "system.nim");
	{
		nimln(692, "system.nim");
		if (!(b < x)) goto LA7;
		nimln(1345, "system.nim");
		nimln(1345, "system.nim");
		result = b;
		goto BeforeRet;
	}
	LA7: ;
	nimln(1346, "system.nim");
	nimln(1346, "system.nim");
	result = x;
	goto BeforeRet;
	BeforeRet: ;
	popFrame();
	return result;
}
N_NOINLINE(void, streamsInit)(void) {
	nimfr("streams", "streams.nim")
	popFrame();
}

N_NOINLINE(void, streamsDatInit)(void) {
static TNimNode* TMP885[7];
static TNimNode* TMP886[2];
static TNimNode TMP881[12];
NTI132630.size = sizeof(tstream132630);
NTI132630.kind = 17;
NTI132630.base = (&NTI1009);
NTI132630.flags = 3;
TMP885[0] = &TMP881[1];
NTI132631.size = sizeof(TY132631);
NTI132631.kind = 25;
NTI132631.base = 0;
NTI132631.flags = 3;
TMP881[1].kind = 1;
TMP881[1].offset = offsetof(tstream132630, Closeimpl);
TMP881[1].typ = (&NTI132631);
TMP881[1].name = "closeImpl";
TMP885[1] = &TMP881[2];
NTI132635.size = sizeof(TY132635);
NTI132635.kind = 25;
NTI132635.base = 0;
NTI132635.flags = 3;
TMP881[2].kind = 1;
TMP881[2].offset = offsetof(tstream132630, Atendimpl);
TMP881[2].typ = (&NTI132635);
TMP881[2].name = "atEndImpl";
TMP885[2] = &TMP881[3];
NTI132639.size = sizeof(TY132639);
NTI132639.kind = 25;
NTI132639.base = 0;
NTI132639.flags = 3;
TMP881[3].kind = 1;
TMP881[3].offset = offsetof(tstream132630, Setpositionimpl);
TMP881[3].typ = (&NTI132639);
TMP881[3].name = "setPositionImpl";
TMP885[3] = &TMP881[4];
NTI132644.size = sizeof(TY132644);
NTI132644.kind = 25;
NTI132644.base = 0;
NTI132644.flags = 3;
TMP881[4].kind = 1;
TMP881[4].offset = offsetof(tstream132630, Getpositionimpl);
TMP881[4].typ = (&NTI132644);
TMP881[4].name = "getPositionImpl";
TMP885[4] = &TMP881[5];
NTI132648.size = sizeof(TY132648);
NTI132648.kind = 25;
NTI132648.base = 0;
NTI132648.flags = 3;
TMP881[5].kind = 1;
TMP881[5].offset = offsetof(tstream132630, Readdataimpl);
TMP881[5].typ = (&NTI132648);
TMP881[5].name = "readDataImpl";
TMP885[5] = &TMP881[6];
NTI132654.size = sizeof(TY132654);
NTI132654.kind = 25;
NTI132654.base = 0;
NTI132654.flags = 3;
TMP881[6].kind = 1;
TMP881[6].offset = offsetof(tstream132630, Writedataimpl);
TMP881[6].typ = (&NTI132654);
TMP881[6].name = "writeDataImpl";
TMP885[6] = &TMP881[7];
NTI132660.size = sizeof(TY132660);
NTI132660.kind = 25;
NTI132660.base = 0;
NTI132660.flags = 3;
TMP881[7].kind = 1;
TMP881[7].offset = offsetof(tstream132630, Flushimpl);
TMP881[7].typ = (&NTI132660);
TMP881[7].name = "flushImpl";
TMP881[0].len = 7; TMP881[0].kind = 2; TMP881[0].sons = &TMP885[0];
NTI132630.node = &TMP881[0];
NTI133006.size = sizeof(tstringstream133006);
NTI133006.kind = 17;
NTI133006.base = (&NTI132630);
NTI133006.flags = 2;
TMP886[0] = &TMP881[9];
TMP881[9].kind = 1;
TMP881[9].offset = offsetof(tstringstream133006, Data);
TMP881[9].typ = (&NTI143);
TMP881[9].name = "data";
TMP886[1] = &TMP881[10];
TMP881[10].kind = 1;
TMP881[10].offset = offsetof(tstringstream133006, Pos);
TMP881[10].typ = (&NTI105);
TMP881[10].name = "pos";
TMP881[8].len = 2; TMP881[8].kind = 2; TMP881[8].sons = &TMP886[0];
NTI133006.node = &TMP881[8];
NTI133004.size = sizeof(tstringstream133006*);
NTI133004.kind = 22;
NTI133004.base = (&NTI133006);
NTI133004.flags = 2;
NTI133004.marker = TMP889;
NTI133125.size = sizeof(tfilestream133125);
NTI133125.kind = 17;
NTI133125.base = (&NTI132630);
NTI133125.flags = 3;
TMP881[11].kind = 1;
TMP881[11].offset = offsetof(tfilestream133125, F);
TMP881[11].typ = (&NTI9004);
TMP881[11].name = "f";
NTI133125.node = &TMP881[11];
NTI133123.size = sizeof(tfilestream133125*);
NTI133123.kind = 22;
NTI133123.base = (&NTI133125);
NTI133123.flags = 2;
NTI133123.marker = TMP891;
NTI132628.size = sizeof(tstream132630*);
NTI132628.kind = 22;
NTI132628.base = (&NTI132630);
NTI132628.flags = 2;
NTI132628.marker = TMP898;
}

