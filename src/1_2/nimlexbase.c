/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct tbaselexer164018 tbaselexer164018;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tllstream163204 tllstream163204;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef NU8 TY108134[32];
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
struct TGenericSeq {
NI len;
NI reserved;
};
typedef NIM_CHAR TY611[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY611 data;
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
N_NIMCALL(void, closebaselexer_164036)(tbaselexer164018* l);
N_NOCONV(void, dealloc_4011)(void* p);
N_NIMCALL(void, llstreamclose_163238)(tllstream163204* s);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(void, fillbuffer_164073)(tbaselexer164018* l);
N_NIMCALL(void, hiddenraiseassert_72820)(NimStringDesc* msg);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(NI, mulInt)(NI a, NI b);
N_NIMCALL(NI, llstreamread_163242)(tllstream163204* s, void* buf, NI buflen);
static N_INLINE(NI, divInt)(NI a, NI b);
N_NOINLINE(void, raiseDivByZero)(void);
N_NOCONV(void*, realloc_4007)(void* p, NI newsize);
N_NIMCALL(NI, fillbaselexer_164813)(tbaselexer164018* l, NI pos);
N_NIMCALL(NI, handlecr_164051)(tbaselexer164018* l, NI pos);
N_NIMCALL(NI, handlelf_164057)(tbaselexer164018* l, NI pos);
N_NIMCALL(void, skiputf8bom_165415)(tbaselexer164018* l);
N_NIMCALL(void, openbaselexer_164027)(tbaselexer164018* l, tllstream163204* inputstream, NI buflen);
N_NOCONV(void*, alloc_4001)(NI size);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(NI, getcolnumber_164046)(tbaselexer164018* l, NI pos);
N_NIMCALL(NimStringDesc*, getcurrentline_164041)(tbaselexer164018* l, NIM_BOOL marker);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(NimStringDesc*, nsuRepeatChar)(NI count, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
NIM_CONST TY108134 newlines_164014 = {
0x00, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP1561, "L.sentinel < L.bufLen ", 22);
STRING_LITERAL(TMP1564, "0 <= toCopy ", 12);
STRING_LITERAL(TMP1572, "s < L.bufLen ", 13);
STRING_LITERAL(TMP1576, "L.bufLen - oldBufLen == oldBufLen ", 34);
STRING_LITERAL(TMP1582, "pos <= L.sentinel ", 18);
STRING_LITERAL(TMP1584, "L.buf[pos] == \'\\x0D\' ", 21);
STRING_LITERAL(TMP1585, "L.buf[pos] == \'\\x0A\' ", 21);
STRING_LITERAL(TMP1586, "0 < bufLen ", 11);
STRING_LITERAL(TMP1590, "", 0);
STRING_LITERAL(TMP1591, "\015\012", 2);
STRING_LITERAL(TMP1592, "^\015\012", 3);
extern TFrame* frameptr_12027;
extern TNimType NTI1009; /* TObject */
TNimType NTI164018; /* TBaseLexer */
extern TNimType NTI105; /* int */
extern TNimType NTI145; /* cstring */
extern TNimType NTI163206; /* PLLStream */

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_12027;
	frameptr_12027 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_12027 = (*frameptr_12027).prev;
}

N_NIMCALL(void, closebaselexer_164036)(tbaselexer164018* l) {
	nimfr("closeBaseLexer", "nimlexbase.nim")
	nimln(71, "nimlexbase.nim");
	dealloc_4011(((void*) ((*l).Buf)));
	nimln(72, "nimlexbase.nim");
	llstreamclose_163238((*l).Stream);
	popFrame();
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

N_NIMCALL(void, fillbuffer_164073)(tbaselexer164018* l) {
	NI charsread;
	NI tocopy;
	NI s;
	NI oldbuflen;
	NI TMP1562;
	NI TMP1563;
	NI TMP1567;
	NI TMP1568;
	NI LOC13;
	NI TMP1569;
	NI TMP1570;
	nimfr("FillBuffer", "nimlexbase.nim")
	charsread = 0;
	tocopy = 0;
	s = 0;
	oldbuflen = 0;
	nimln(82, "nimlexbase.nim");
	{
		nimln(82, "nimlexbase.nim");
		nimln(82, "nimlexbase.nim");
		if (!!(((*l).Sentinel < (*l).Buflen))) goto LA3;
		nimln(82, "nimlexbase.nim");
		hiddenraiseassert_72820(((NimStringDesc*) &TMP1561));
	}
	LA3: ;
	nimln(83, "nimlexbase.nim");
	nimln(83, "nimlexbase.nim");
	nimln(83, "nimlexbase.nim");
	TMP1562 = subInt((*l).Buflen, (*l).Sentinel);
	TMP1563 = subInt((NI64)(TMP1562), 1);
	tocopy = (NI64)(TMP1563);
	nimln(84, "nimlexbase.nim");
	{
		nimln(84, "nimlexbase.nim");
		nimln(84, "nimlexbase.nim");
		if (!!((0 <= tocopy))) goto LA7;
		nimln(84, "nimlexbase.nim");
		hiddenraiseassert_72820(((NimStringDesc*) &TMP1564));
	}
	LA7: ;
	nimln(85, "nimlexbase.nim");
	{
		NI TMP1565;
		NI TMP1566;
		nimln(692, "system.nim");
		if (!(0 < tocopy)) goto LA11;
		nimln(86, "nimlexbase.nim");
		nimln(86, "nimlexbase.nim");
		TMP1565 = addInt((*l).Sentinel, 1);
		nimln(86, "nimlexbase.nim");
		TMP1566 = mulInt(tocopy, 1);
		memmove(((void*) ((*l).Buf)), ((void*) (&(*l).Buf[(NI64)(TMP1565)])), (NI64)(TMP1566));
	}
	LA11: ;
	nimln(88, "nimlexbase.nim");
	nimln(89, "nimlexbase.nim");
	nimln(88, "nimlexbase.nim");
	nimln(89, "nimlexbase.nim");
	nimln(89, "nimlexbase.nim");
	TMP1567 = addInt((*l).Sentinel, 1);
	TMP1568 = mulInt((NI64)(TMP1567), 1);
	LOC13 = llstreamread_163242((*l).Stream, ((void*) (&(*l).Buf[tocopy])), (NI64)(TMP1568));
	TMP1569 = divInt(LOC13, 1);
	charsread = (NI64)(TMP1569);
	nimln(90, "nimlexbase.nim");
	nimln(90, "nimlexbase.nim");
	TMP1570 = addInt(tocopy, charsread);
	s = (NI64)(TMP1570);
	nimln(91, "nimlexbase.nim");
	{
		NI TMP1571;
		nimln(91, "nimlexbase.nim");
		nimln(91, "nimlexbase.nim");
		TMP1571 = addInt((*l).Sentinel, 1);
		if (!(charsread < (NI64)(TMP1571))) goto LA16;
		nimln(92, "nimlexbase.nim");
		(*l).Buf[s] = 0;
		nimln(93, "nimlexbase.nim");
		(*l).Sentinel = s;
	}
	goto LA14;
	LA16: ;
	{
		nimln(96, "nimlexbase.nim");
		s = subInt(s, 1);
		nimln(97, "nimlexbase.nim");
		while (1) {
			nimln(98, "nimlexbase.nim");
			{
				nimln(98, "nimlexbase.nim");
				nimln(98, "nimlexbase.nim");
				if (!!((s < (*l).Buflen))) goto LA22;
				nimln(98, "nimlexbase.nim");
				hiddenraiseassert_72820(((NimStringDesc*) &TMP1572));
			}
			LA22: ;
			nimln(99, "nimlexbase.nim");
			while (1) {
				NIM_BOOL LOC25;
				nimln(99, "nimlexbase.nim");
				nimln(688, "system.nim");
				LOC25 = (0 <= s);
				if (!(LOC25)) goto LA26;
				nimln(99, "nimlexbase.nim");
				nimln(716, "system.nim");
				LOC25 = !((((NU8)((*l).Buf[s])) == ((NU8)(13)) || ((NU8)((*l).Buf[s])) == ((NU8)(10))));
				LA26: ;
				if (!LOC25) goto LA24;
				nimln(99, "nimlexbase.nim");
				s = subInt(s, 1);
			} LA24: ;
			nimln(100, "nimlexbase.nim");
			{
				nimln(688, "system.nim");
				if (!(0 <= s)) goto LA29;
				nimln(102, "nimlexbase.nim");
				(*l).Sentinel = s;
				nimln(103, "nimlexbase.nim");
				goto LA19;
			}
			goto LA27;
			LA29: ;
			{
				NI TMP1573;
				NI TMP1574;
				void* LOC32;
				NI TMP1577;
				NI LOC37;
				NI TMP1578;
				NI TMP1581;
				nimln(107, "nimlexbase.nim");
				oldbuflen = (*l).Buflen;
				nimln(108, "nimlexbase.nim");
				nimln(108, "nimlexbase.nim");
				TMP1573 = mulInt((*l).Buflen, 2);
				(*l).Buflen = (NI64)(TMP1573);
				nimln(109, "nimlexbase.nim");
				nimln(109, "nimlexbase.nim");
				nimln(109, "nimlexbase.nim");
				TMP1574 = mulInt((*l).Buflen, 1);
				LOC32 = realloc_4007(((void*) ((*l).Buf)), (NI64)(TMP1574));
				(*l).Buf = ((NCSTRING) (LOC32));
				nimln(110, "nimlexbase.nim");
				{
					NI TMP1575;
					nimln(110, "nimlexbase.nim");
					nimln(110, "nimlexbase.nim");
					nimln(110, "nimlexbase.nim");
					TMP1575 = subInt((*l).Buflen, oldbuflen);
					if (!!(((NI64)(TMP1575) == oldbuflen))) goto LA35;
					nimln(110, "nimlexbase.nim");
					hiddenraiseassert_72820(((NimStringDesc*) &TMP1576));
				}
				LA35: ;
				nimln(111, "nimlexbase.nim");
				nimln(112, "nimlexbase.nim");
				nimln(111, "nimlexbase.nim");
				nimln(112, "nimlexbase.nim");
				TMP1577 = mulInt(oldbuflen, 1);
				LOC37 = llstreamread_163242((*l).Stream, ((void*) (&(*l).Buf[oldbuflen])), (NI64)(TMP1577));
				TMP1578 = divInt(LOC37, 1);
				charsread = (NI64)(TMP1578);
				nimln(113, "nimlexbase.nim");
				{
					NI TMP1579;
					NI TMP1580;
					nimln(113, "nimlexbase.nim");
					if (!(charsread < oldbuflen)) goto LA40;
					nimln(114, "nimlexbase.nim");
					nimln(114, "nimlexbase.nim");
					TMP1579 = addInt(oldbuflen, charsread);
					(*l).Buf[(NI64)(TMP1579)] = 0;
					nimln(115, "nimlexbase.nim");
					nimln(115, "nimlexbase.nim");
					TMP1580 = addInt(oldbuflen, charsread);
					(*l).Sentinel = (NI64)(TMP1580);
					nimln(116, "nimlexbase.nim");
					goto LA19;
				}
				LA40: ;
				nimln(117, "nimlexbase.nim");
				nimln(117, "nimlexbase.nim");
				TMP1581 = subInt((*l).Buflen, 1);
				s = (NI64)(TMP1581);
			}
			LA27: ;
		} LA19: ;
	}
	LA14: ;
	popFrame();
}

N_NIMCALL(NI, fillbaselexer_164813)(tbaselexer164018* l, NI pos) {
	NI result;
	nimfr("fillBaseLexer", "nimlexbase.nim")
	result = 0;
	nimln(120, "nimlexbase.nim");
	{
		nimln(120, "nimlexbase.nim");
		nimln(120, "nimlexbase.nim");
		if (!!((pos <= (*l).Sentinel))) goto LA3;
		nimln(120, "nimlexbase.nim");
		hiddenraiseassert_72820(((NimStringDesc*) &TMP1582));
	}
	LA3: ;
	nimln(121, "nimlexbase.nim");
	{
		NI TMP1583;
		nimln(121, "nimlexbase.nim");
		if (!(pos < (*l).Sentinel)) goto LA7;
		nimln(122, "nimlexbase.nim");
		nimln(122, "nimlexbase.nim");
		TMP1583 = addInt(pos, 1);
		result = (NI64)(TMP1583);
	}
	goto LA5;
	LA7: ;
	{
		nimln(124, "nimlexbase.nim");
		fillbuffer_164073(l);
		nimln(125, "nimlexbase.nim");
		(*l).Bufpos = 0;
		nimln(126, "nimlexbase.nim");
		result = 0;
	}
	LA5: ;
	nimln(127, "nimlexbase.nim");
	(*l).Linestart = result;
	popFrame();
	return result;
}

N_NIMCALL(NI, handlecr_164051)(tbaselexer164018* l, NI pos) {
	NI result;
	nimfr("HandleCR", "nimlexbase.nim")
	result = 0;
	nimln(130, "nimlexbase.nim");
	{
		nimln(130, "nimlexbase.nim");
		nimln(130, "nimlexbase.nim");
		if (!!(((NU8)((*l).Buf[pos]) == (NU8)(13)))) goto LA3;
		nimln(130, "nimlexbase.nim");
		hiddenraiseassert_72820(((NimStringDesc*) &TMP1584));
	}
	LA3: ;
	nimln(131, "nimlexbase.nim");
	(*l).Linenumber = addInt((*l).Linenumber, 1);
	nimln(132, "nimlexbase.nim");
	result = fillbaselexer_164813(l, pos);
	nimln(133, "nimlexbase.nim");
	{
		nimln(133, "nimlexbase.nim");
		if (!((NU8)((*l).Buf[result]) == (NU8)(10))) goto LA7;
		nimln(134, "nimlexbase.nim");
		result = fillbaselexer_164813(l, result);
	}
	LA7: ;
	popFrame();
	return result;
}

N_NIMCALL(NI, handlelf_164057)(tbaselexer164018* l, NI pos) {
	NI result;
	nimfr("HandleLF", "nimlexbase.nim")
	result = 0;
	nimln(137, "nimlexbase.nim");
	{
		nimln(137, "nimlexbase.nim");
		nimln(137, "nimlexbase.nim");
		if (!!(((NU8)((*l).Buf[pos]) == (NU8)(10)))) goto LA3;
		nimln(137, "nimlexbase.nim");
		hiddenraiseassert_72820(((NimStringDesc*) &TMP1585));
	}
	LA3: ;
	nimln(138, "nimlexbase.nim");
	(*l).Linenumber = addInt((*l).Linenumber, 1);
	nimln(139, "nimlexbase.nim");
	result = fillbaselexer_164813(l, pos);
	popFrame();
	return result;
}

N_NIMCALL(void, skiputf8bom_165415)(tbaselexer164018* l) {
	nimfr("skip_UTF_8_BOM", "nimlexbase.nim")
	nimln(142, "nimlexbase.nim");
	{
		NIM_BOOL LOC3;
		NIM_BOOL LOC4;
		nimln(142, "nimlexbase.nim");
		nimln(142, "nimlexbase.nim");
		nimln(142, "nimlexbase.nim");
		LOC4 = ((NU8)((*l).Buf[0]) == (NU8)(239));
		if (!(LOC4)) goto LA5;
		nimln(142, "nimlexbase.nim");
		LOC4 = ((NU8)((*l).Buf[1]) == (NU8)(187));
		LA5: ;
		LOC3 = LOC4;
		if (!(LOC3)) goto LA6;
		nimln(142, "nimlexbase.nim");
		LOC3 = ((NU8)((*l).Buf[2]) == (NU8)(191));
		LA6: ;
		if (!LOC3) goto LA7;
		nimln(143, "nimlexbase.nim");
		(*l).Bufpos = addInt((*l).Bufpos, 3);
		nimln(144, "nimlexbase.nim");
		(*l).Linestart = addInt((*l).Linestart, 3);
	}
	LA7: ;
	popFrame();
}

N_NIMCALL(void, openbaselexer_164027)(tbaselexer164018* l, tllstream163204* inputstream, NI buflen) {
	NI TMP1587;
	void* LOC5;
	NI TMP1588;
	nimfr("openBaseLexer", "nimlexbase.nim")
	nimln(147, "nimlexbase.nim");
	{
		nimln(147, "nimlexbase.nim");
		nimln(147, "nimlexbase.nim");
		if (!!((0 < buflen))) goto LA3;
		nimln(147, "nimlexbase.nim");
		hiddenraiseassert_72820(((NimStringDesc*) &TMP1586));
	}
	LA3: ;
	nimln(148, "nimlexbase.nim");
	(*l).Bufpos = 0;
	nimln(149, "nimlexbase.nim");
	(*l).Buflen = buflen;
	nimln(150, "nimlexbase.nim");
	nimln(150, "nimlexbase.nim");
	nimln(150, "nimlexbase.nim");
	TMP1587 = mulInt(buflen, 1);
	LOC5 = alloc_4001((NI64)(TMP1587));
	(*l).Buf = ((NCSTRING) (LOC5));
	nimln(151, "nimlexbase.nim");
	nimln(151, "nimlexbase.nim");
	TMP1588 = subInt(buflen, 1);
	(*l).Sentinel = (NI64)(TMP1588);
	nimln(152, "nimlexbase.nim");
	(*l).Linestart = 0;
	nimln(153, "nimlexbase.nim");
	(*l).Linenumber = 1;
	nimln(154, "nimlexbase.nim");
	unsureAsgnRef((void**) &(*l).Stream, inputstream);
	nimln(155, "nimlexbase.nim");
	fillbuffer_164073(l);
	nimln(156, "nimlexbase.nim");
	skiputf8bom_165415(l);
	popFrame();
}

N_NIMCALL(NI, getcolnumber_164046)(tbaselexer164018* l, NI pos) {
	NI result;
	NI TMP1589;
	nimfr("getColNumber", "nimlexbase.nim")
	result = 0;
	nimln(159, "nimlexbase.nim");
	nimln(159, "nimlexbase.nim");
	nimln(159, "nimlexbase.nim");
	TMP1589 = subInt(pos, (*l).Linestart);
	if ((NI64)(TMP1589) == (IL64(-9223372036854775807) - IL64(1))) raiseOverflow();
	result = (NI64)abs((NI64)(TMP1589));
	popFrame();
	return result;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) (&(*dest).data[((*dest).Sup.len)- 0])), ((NCSTRING) ((*src).data)), (NI64)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(NimStringDesc*, getcurrentline_164041)(tbaselexer164018* l, NIM_BOOL marker) {
	NimStringDesc* result;
	NI i;
	nimfr("getCurrentLine", "nimlexbase.nim")
	result = 0;
	nimln(162, "nimlexbase.nim");
	result = copyString(((NimStringDesc*) &TMP1590));
	nimln(163, "nimlexbase.nim");
	i = (*l).Linestart;
	nimln(164, "nimlexbase.nim");
	while (1) {
		nimln(164, "nimlexbase.nim");
		nimln(716, "system.nim");
		if (!!((((NU8)((*l).Buf[i])) == ((NU8)(13)) || ((NU8)((*l).Buf[i])) == ((NU8)(10)) || ((NU8)((*l).Buf[i])) == ((NU8)(0))))) goto LA1;
		nimln(165, "nimlexbase.nim");
		result = addChar(result, (*l).Buf[i]);
		nimln(166, "nimlexbase.nim");
		i = addInt(i, 1);
	} LA1: ;
	nimln(167, "nimlexbase.nim");
	result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TMP1591));
	nimln(168, "nimlexbase.nim");
	{
		NimStringDesc* LOC6;
		NI LOC7;
		NimStringDesc* LOC8;
		if (!marker) goto LA4;
		nimln(169, "nimlexbase.nim");
		nimln(169, "nimlexbase.nim");
		LOC6 = 0;
		nimln(169, "nimlexbase.nim");
		nimln(169, "nimlexbase.nim");
		LOC7 = getcolnumber_164046(l, (*l).Bufpos);
		LOC8 = 0;
		LOC8 = nsuRepeatChar(LOC7, 32);
		LOC6 = rawNewString(LOC8->Sup.len + 3);
appendString(LOC6, LOC8);
appendString(LOC6, ((NimStringDesc*) &TMP1592));
		result = resizeString(result, LOC6->Sup.len + 0);
appendString(result, LOC6);
	}
	LA4: ;
	popFrame();
	return result;
}
N_NOINLINE(void, nimlexbaseInit)(void) {
	nimfr("nimlexbase", "nimlexbase.nim")
	popFrame();
}

N_NOINLINE(void, nimlexbaseDatInit)(void) {
static TNimNode* TMP1829[7];
static TNimNode TMP1536[8];
NTI164018.size = sizeof(tbaselexer164018);
NTI164018.kind = 17;
NTI164018.base = (&NTI1009);
NTI164018.flags = 2;
TMP1829[0] = &TMP1536[1];
TMP1536[1].kind = 1;
TMP1536[1].offset = offsetof(tbaselexer164018, Bufpos);
TMP1536[1].typ = (&NTI105);
TMP1536[1].name = "bufpos";
TMP1829[1] = &TMP1536[2];
TMP1536[2].kind = 1;
TMP1536[2].offset = offsetof(tbaselexer164018, Buf);
TMP1536[2].typ = (&NTI145);
TMP1536[2].name = "buf";
TMP1829[2] = &TMP1536[3];
TMP1536[3].kind = 1;
TMP1536[3].offset = offsetof(tbaselexer164018, Buflen);
TMP1536[3].typ = (&NTI105);
TMP1536[3].name = "bufLen";
TMP1829[3] = &TMP1536[4];
TMP1536[4].kind = 1;
TMP1536[4].offset = offsetof(tbaselexer164018, Stream);
TMP1536[4].typ = (&NTI163206);
TMP1536[4].name = "stream";
TMP1829[4] = &TMP1536[5];
TMP1536[5].kind = 1;
TMP1536[5].offset = offsetof(tbaselexer164018, Linenumber);
TMP1536[5].typ = (&NTI105);
TMP1536[5].name = "LineNumber";
TMP1829[5] = &TMP1536[6];
TMP1536[6].kind = 1;
TMP1536[6].offset = offsetof(tbaselexer164018, Sentinel);
TMP1536[6].typ = (&NTI105);
TMP1536[6].name = "sentinel";
TMP1829[6] = &TMP1536[7];
TMP1536[7].kind = 1;
TMP1536[7].offset = offsetof(tbaselexer164018, Linestart);
TMP1536[7].typ = (&NTI105);
TMP1536[7].name = "lineStart";
TMP1536[0].len = 7; TMP1536[0].kind = 2; TMP1536[0].sons = &TMP1829[0];
NTI164018.node = &TMP1536[0];
}

