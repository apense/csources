/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct tbaselexer382014 tbaselexer382014;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tstream133630 tstream133630;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef NU8 TY104134[32];
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
struct tbaselexer382014 {
  TNimObject Sup;
NI Bufpos;
NCSTRING Buf;
NI Buflen;
tstream133630* Input;
NI Linenumber;
NI Sentinel;
NI Linestart;
NIM_BOOL Fileopened;
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
typedef N_NIMCALL_PTR(void, TY133631) (tstream133630* s);
typedef N_NIMCALL_PTR(NIM_BOOL, TY133635) (tstream133630* s);
typedef N_NIMCALL_PTR(void, TY133639) (tstream133630* s, NI pos);
typedef N_NIMCALL_PTR(NI, TY133644) (tstream133630* s);
typedef N_NIMCALL_PTR(NI, TY133648) (tstream133630* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY133654) (tstream133630* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY133660) (tstream133630* s);
struct tstream133630 {
  TNimObject Sup;
TY133631 Closeimpl;
TY133635 Atendimpl;
TY133639 Setpositionimpl;
TY133644 Getpositionimpl;
TY133648 Readdataimpl;
TY133654 Writedataimpl;
TY133660 Flushimpl;
};
N_NIMCALL(void, close_382033)(tbaselexer382014* l);
N_NOCONV(void, dealloc_4011)(void* p);
N_NIMCALL(void, close_133675)(tstream133630* s);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(void, fillbuffer_382070)(tbaselexer382014* l);
N_NIMCALL(void, hiddenraiseassert_71620)(NimStringDesc* msg);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(NI, mulInt)(NI a, NI b);
N_NIMCALL(NI, readdata_133730)(tstream133630* s, void* buffer, NI buflen);
static N_INLINE(NI, divInt)(NI a, NI b);
N_NOINLINE(void, raiseDivByZero)(void);
N_NOCONV(void*, realloc_4007)(void* p, NI newsize);
N_NIMCALL(NI, fillbaselexer_382813)(tbaselexer382014* l, NI pos);
N_NIMCALL(NI, handlecr_382048)(tbaselexer382014* l, NI pos);
N_NIMCALL(NI, handlelf_382054)(tbaselexer382014* l, NI pos);
N_NIMCALL(void, skiputf8bom_383415)(tbaselexer382014* l);
N_NIMCALL(void, open_382024)(tbaselexer382014* l, tstream133630* input, NI buflen);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NOCONV(void*, alloc_4001)(NI size);
N_NIMCALL(NI, getcolnumber_382043)(tbaselexer382014* l, NI pos);
N_NIMCALL(NimStringDesc*, getcurrentline_382038)(tbaselexer382014* l, NIM_BOOL marker);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(NimStringDesc*, nsuRepeatChar)(NI count, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
NIM_CONST TY104134 newlines_382009 = {
0x00, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP6598, "L.sentinel < L.bufLen ", 22);
STRING_LITERAL(TMP6601, "0 <= toCopy ", 12);
STRING_LITERAL(TMP6609, "s < L.bufLen ", 13);
STRING_LITERAL(TMP6613, "L.bufLen - oldBufLen == oldBufLen ", 34);
STRING_LITERAL(TMP6619, "pos <= L.sentinel ", 18);
STRING_LITERAL(TMP6621, "L.buf[pos] == \'\\x0D\' ", 21);
STRING_LITERAL(TMP6622, "L.buf[pos] == \'\\x0A\' ", 21);
STRING_LITERAL(TMP6623, "0 < bufLen ", 11);
STRING_LITERAL(TMP6624, "not input == nil ", 17);
STRING_LITERAL(TMP6628, "", 0);
STRING_LITERAL(TMP6629, "\012", 1);
STRING_LITERAL(TMP6630, "^\012", 2);
extern TFrame* frameptr_12027;
extern TNimType NTI1009; /* TObject */
TNimType NTI382014; /* TBaseLexer */
extern TNimType NTI105; /* int */
extern TNimType NTI145; /* cstring */
extern TNimType NTI133628; /* PStream */
extern TNimType NTI132; /* bool */

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_12027;
	frameptr_12027 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_12027 = (*frameptr_12027).prev;
}

N_NIMCALL(void, close_382033)(tbaselexer382014* l) {
	nimfr("close", "lexbase.nim")
	nimln(66, "lexbase.nim");
	dealloc_4011(((void*) ((*l).Buf)));
	nimln(67, "lexbase.nim");
	close_133675((*l).Input);
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

N_NIMCALL(void, fillbuffer_382070)(tbaselexer382014* l) {
	NI charsread;
	NI tocopy;
	NI s;
	NI oldbuflen;
	NI TMP6599;
	NI TMP6600;
	NI TMP6604;
	NI TMP6605;
	NI LOC13;
	NI TMP6606;
	NI TMP6607;
	nimfr("FillBuffer", "lexbase.nim")
	charsread = 0;
	tocopy = 0;
	s = 0;
	oldbuflen = 0;
	nimln(77, "lexbase.nim");
	{
		nimln(77, "lexbase.nim");
		nimln(77, "lexbase.nim");
		if (!!(((*l).Sentinel < (*l).Buflen))) goto LA3;
		nimln(77, "lexbase.nim");
		hiddenraiseassert_71620(((NimStringDesc*) &TMP6598));
	}
	LA3: ;
	nimln(78, "lexbase.nim");
	nimln(78, "lexbase.nim");
	nimln(78, "lexbase.nim");
	TMP6599 = subInt((*l).Buflen, (*l).Sentinel);
	TMP6600 = subInt((NI32)(TMP6599), 1);
	tocopy = (NI32)(TMP6600);
	nimln(79, "lexbase.nim");
	{
		nimln(79, "lexbase.nim");
		nimln(79, "lexbase.nim");
		if (!!((0 <= tocopy))) goto LA7;
		nimln(79, "lexbase.nim");
		hiddenraiseassert_71620(((NimStringDesc*) &TMP6601));
	}
	LA7: ;
	nimln(80, "lexbase.nim");
	{
		NI TMP6602;
		NI TMP6603;
		nimln(692, "system.nim");
		if (!(0 < tocopy)) goto LA11;
		nimln(81, "lexbase.nim");
		nimln(81, "lexbase.nim");
		TMP6602 = addInt((*l).Sentinel, 1);
		nimln(81, "lexbase.nim");
		TMP6603 = mulInt(tocopy, 1);
		memmove(((void*) ((*l).Buf)), ((void*) (&(*l).Buf[(NI32)(TMP6602)])), (NI32)(TMP6603));
	}
	LA11: ;
	nimln(83, "lexbase.nim");
	nimln(84, "lexbase.nim");
	nimln(83, "lexbase.nim");
	nimln(84, "lexbase.nim");
	nimln(84, "lexbase.nim");
	TMP6604 = addInt((*l).Sentinel, 1);
	TMP6605 = mulInt((NI32)(TMP6604), 1);
	LOC13 = readdata_133730((*l).Input, ((void*) (&(*l).Buf[tocopy])), (NI32)(TMP6605));
	TMP6606 = divInt(LOC13, 1);
	charsread = (NI32)(TMP6606);
	nimln(85, "lexbase.nim");
	nimln(85, "lexbase.nim");
	TMP6607 = addInt(tocopy, charsread);
	s = (NI32)(TMP6607);
	nimln(86, "lexbase.nim");
	{
		NI TMP6608;
		nimln(86, "lexbase.nim");
		nimln(86, "lexbase.nim");
		TMP6608 = addInt((*l).Sentinel, 1);
		if (!(charsread < (NI32)(TMP6608))) goto LA16;
		nimln(87, "lexbase.nim");
		(*l).Buf[s] = 0;
		nimln(88, "lexbase.nim");
		(*l).Sentinel = s;
	}
	goto LA14;
	LA16: ;
	{
		nimln(91, "lexbase.nim");
		s = subInt(s, 1);
		nimln(92, "lexbase.nim");
		while (1) {
			nimln(93, "lexbase.nim");
			{
				nimln(93, "lexbase.nim");
				nimln(93, "lexbase.nim");
				if (!!((s < (*l).Buflen))) goto LA22;
				nimln(93, "lexbase.nim");
				hiddenraiseassert_71620(((NimStringDesc*) &TMP6609));
			}
			LA22: ;
			nimln(94, "lexbase.nim");
			while (1) {
				NIM_BOOL LOC25;
				nimln(94, "lexbase.nim");
				nimln(688, "system.nim");
				LOC25 = (0 <= s);
				if (!(LOC25)) goto LA26;
				nimln(94, "lexbase.nim");
				nimln(716, "system.nim");
				LOC25 = !((((NU8)((*l).Buf[s])) == ((NU8)(13)) || ((NU8)((*l).Buf[s])) == ((NU8)(10))));
				LA26: ;
				if (!LOC25) goto LA24;
				nimln(94, "lexbase.nim");
				s = subInt(s, 1);
			} LA24: ;
			nimln(95, "lexbase.nim");
			{
				nimln(688, "system.nim");
				if (!(0 <= s)) goto LA29;
				nimln(97, "lexbase.nim");
				(*l).Sentinel = s;
				nimln(98, "lexbase.nim");
				goto LA19;
			}
			goto LA27;
			LA29: ;
			{
				NI TMP6610;
				NI TMP6611;
				void* LOC32;
				NI TMP6614;
				NI LOC37;
				NI TMP6615;
				NI TMP6618;
				nimln(102, "lexbase.nim");
				oldbuflen = (*l).Buflen;
				nimln(103, "lexbase.nim");
				nimln(103, "lexbase.nim");
				TMP6610 = mulInt((*l).Buflen, 2);
				(*l).Buflen = (NI32)(TMP6610);
				nimln(104, "lexbase.nim");
				nimln(104, "lexbase.nim");
				nimln(104, "lexbase.nim");
				TMP6611 = mulInt((*l).Buflen, 1);
				LOC32 = realloc_4007(((void*) ((*l).Buf)), (NI32)(TMP6611));
				(*l).Buf = ((NCSTRING) (LOC32));
				nimln(105, "lexbase.nim");
				{
					NI TMP6612;
					nimln(105, "lexbase.nim");
					nimln(105, "lexbase.nim");
					nimln(105, "lexbase.nim");
					TMP6612 = subInt((*l).Buflen, oldbuflen);
					if (!!(((NI32)(TMP6612) == oldbuflen))) goto LA35;
					nimln(105, "lexbase.nim");
					hiddenraiseassert_71620(((NimStringDesc*) &TMP6613));
				}
				LA35: ;
				nimln(106, "lexbase.nim");
				nimln(107, "lexbase.nim");
				nimln(106, "lexbase.nim");
				nimln(107, "lexbase.nim");
				TMP6614 = mulInt(oldbuflen, 1);
				LOC37 = readdata_133730((*l).Input, ((void*) (&(*l).Buf[oldbuflen])), (NI32)(TMP6614));
				TMP6615 = divInt(LOC37, 1);
				charsread = (NI32)(TMP6615);
				nimln(108, "lexbase.nim");
				{
					NI TMP6616;
					NI TMP6617;
					nimln(108, "lexbase.nim");
					if (!(charsread < oldbuflen)) goto LA40;
					nimln(109, "lexbase.nim");
					nimln(109, "lexbase.nim");
					TMP6616 = addInt(oldbuflen, charsread);
					(*l).Buf[(NI32)(TMP6616)] = 0;
					nimln(110, "lexbase.nim");
					nimln(110, "lexbase.nim");
					TMP6617 = addInt(oldbuflen, charsread);
					(*l).Sentinel = (NI32)(TMP6617);
					nimln(111, "lexbase.nim");
					goto LA19;
				}
				LA40: ;
				nimln(112, "lexbase.nim");
				nimln(112, "lexbase.nim");
				TMP6618 = subInt((*l).Buflen, 1);
				s = (NI32)(TMP6618);
			}
			LA27: ;
		} LA19: ;
	}
	LA14: ;
	popFrame();
}

N_NIMCALL(NI, fillbaselexer_382813)(tbaselexer382014* l, NI pos) {
	NI result;
	nimfr("fillBaseLexer", "lexbase.nim")
	result = 0;
	nimln(115, "lexbase.nim");
	{
		nimln(115, "lexbase.nim");
		nimln(115, "lexbase.nim");
		if (!!((pos <= (*l).Sentinel))) goto LA3;
		nimln(115, "lexbase.nim");
		hiddenraiseassert_71620(((NimStringDesc*) &TMP6619));
	}
	LA3: ;
	nimln(116, "lexbase.nim");
	{
		NI TMP6620;
		nimln(116, "lexbase.nim");
		if (!(pos < (*l).Sentinel)) goto LA7;
		nimln(117, "lexbase.nim");
		nimln(117, "lexbase.nim");
		TMP6620 = addInt(pos, 1);
		result = (NI32)(TMP6620);
	}
	goto LA5;
	LA7: ;
	{
		nimln(119, "lexbase.nim");
		fillbuffer_382070(l);
		nimln(120, "lexbase.nim");
		(*l).Bufpos = 0;
		nimln(121, "lexbase.nim");
		result = 0;
	}
	LA5: ;
	nimln(122, "lexbase.nim");
	(*l).Linestart = result;
	popFrame();
	return result;
}

N_NIMCALL(NI, handlecr_382048)(tbaselexer382014* l, NI pos) {
	NI result;
	nimfr("HandleCR", "lexbase.nim")
	result = 0;
	nimln(125, "lexbase.nim");
	{
		nimln(125, "lexbase.nim");
		nimln(125, "lexbase.nim");
		if (!!(((NU8)((*l).Buf[pos]) == (NU8)(13)))) goto LA3;
		nimln(125, "lexbase.nim");
		hiddenraiseassert_71620(((NimStringDesc*) &TMP6621));
	}
	LA3: ;
	nimln(126, "lexbase.nim");
	(*l).Linenumber = addInt((*l).Linenumber, 1);
	nimln(127, "lexbase.nim");
	result = fillbaselexer_382813(l, pos);
	nimln(128, "lexbase.nim");
	{
		nimln(128, "lexbase.nim");
		if (!((NU8)((*l).Buf[result]) == (NU8)(10))) goto LA7;
		nimln(129, "lexbase.nim");
		result = fillbaselexer_382813(l, result);
	}
	LA7: ;
	popFrame();
	return result;
}

N_NIMCALL(NI, handlelf_382054)(tbaselexer382014* l, NI pos) {
	NI result;
	nimfr("HandleLF", "lexbase.nim")
	result = 0;
	nimln(132, "lexbase.nim");
	{
		nimln(132, "lexbase.nim");
		nimln(132, "lexbase.nim");
		if (!!(((NU8)((*l).Buf[pos]) == (NU8)(10)))) goto LA3;
		nimln(132, "lexbase.nim");
		hiddenraiseassert_71620(((NimStringDesc*) &TMP6622));
	}
	LA3: ;
	nimln(133, "lexbase.nim");
	(*l).Linenumber = addInt((*l).Linenumber, 1);
	nimln(134, "lexbase.nim");
	result = fillbaselexer_382813(l, pos);
	popFrame();
	return result;
}

N_NIMCALL(void, skiputf8bom_383415)(tbaselexer382014* l) {
	nimfr("skip_UTF_8_BOM", "lexbase.nim")
	nimln(137, "lexbase.nim");
	{
		NIM_BOOL LOC3;
		NIM_BOOL LOC4;
		nimln(137, "lexbase.nim");
		nimln(137, "lexbase.nim");
		nimln(137, "lexbase.nim");
		LOC4 = ((NU8)((*l).Buf[0]) == (NU8)(239));
		if (!(LOC4)) goto LA5;
		nimln(137, "lexbase.nim");
		LOC4 = ((NU8)((*l).Buf[1]) == (NU8)(187));
		LA5: ;
		LOC3 = LOC4;
		if (!(LOC3)) goto LA6;
		nimln(137, "lexbase.nim");
		LOC3 = ((NU8)((*l).Buf[2]) == (NU8)(191));
		LA6: ;
		if (!LOC3) goto LA7;
		nimln(138, "lexbase.nim");
		(*l).Bufpos = addInt((*l).Bufpos, 3);
		nimln(139, "lexbase.nim");
		(*l).Linestart = addInt((*l).Linestart, 3);
	}
	LA7: ;
	popFrame();
}

N_NIMCALL(void, open_382024)(tbaselexer382014* l, tstream133630* input, NI buflen) {
	NI TMP6625;
	void* LOC9;
	NI TMP6626;
	nimfr("open", "lexbase.nim")
	nimln(142, "lexbase.nim");
	{
		nimln(142, "lexbase.nim");
		nimln(142, "lexbase.nim");
		if (!!((0 < buflen))) goto LA3;
		nimln(142, "lexbase.nim");
		hiddenraiseassert_71620(((NimStringDesc*) &TMP6623));
	}
	LA3: ;
	nimln(143, "lexbase.nim");
	{
		nimln(143, "lexbase.nim");
		nimln(143, "lexbase.nim");
		nimln(143, "lexbase.nim");
		if (!!(!((input == NIM_NIL)))) goto LA7;
		nimln(143, "lexbase.nim");
		hiddenraiseassert_71620(((NimStringDesc*) &TMP6624));
	}
	LA7: ;
	nimln(144, "lexbase.nim");
	unsureAsgnRef((void**) &(*l).Input, input);
	nimln(145, "lexbase.nim");
	(*l).Bufpos = 0;
	nimln(146, "lexbase.nim");
	(*l).Buflen = buflen;
	nimln(147, "lexbase.nim");
	nimln(147, "lexbase.nim");
	nimln(147, "lexbase.nim");
	TMP6625 = mulInt(buflen, 1);
	LOC9 = alloc_4001((NI32)(TMP6625));
	(*l).Buf = ((NCSTRING) (LOC9));
	nimln(148, "lexbase.nim");
	nimln(148, "lexbase.nim");
	TMP6626 = subInt(buflen, 1);
	(*l).Sentinel = (NI32)(TMP6626);
	nimln(149, "lexbase.nim");
	(*l).Linestart = 0;
	nimln(150, "lexbase.nim");
	(*l).Linenumber = 1;
	nimln(151, "lexbase.nim");
	fillbuffer_382070(l);
	nimln(152, "lexbase.nim");
	skiputf8bom_383415(l);
	popFrame();
}

N_NIMCALL(NI, getcolnumber_382043)(tbaselexer382014* l, NI pos) {
	NI result;
	NI TMP6627;
	nimfr("getColNumber", "lexbase.nim")
	result = 0;
	nimln(155, "lexbase.nim");
	nimln(155, "lexbase.nim");
	nimln(155, "lexbase.nim");
	TMP6627 = subInt(pos, (*l).Linestart);
	if ((NI32)(TMP6627) == (-2147483647 -1)) raiseOverflow();
	result = (NI32)abs((NI32)(TMP6627));
	popFrame();
	return result;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) (&(*dest).data[((*dest).Sup.len)- 0])), ((NCSTRING) ((*src).data)), (NI32)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(NimStringDesc*, getcurrentline_382038)(tbaselexer382014* l, NIM_BOOL marker) {
	NimStringDesc* result;
	NI i;
	nimfr("getCurrentLine", "lexbase.nim")
	result = 0;
	i = 0;
	nimln(159, "lexbase.nim");
	result = copyString(((NimStringDesc*) &TMP6628));
	nimln(160, "lexbase.nim");
	i = (*l).Linestart;
	nimln(161, "lexbase.nim");
	while (1) {
		nimln(161, "lexbase.nim");
		nimln(716, "system.nim");
		if (!!((((NU8)((*l).Buf[i])) == ((NU8)(13)) || ((NU8)((*l).Buf[i])) == ((NU8)(10)) || ((NU8)((*l).Buf[i])) == ((NU8)(0))))) goto LA1;
		nimln(162, "lexbase.nim");
		result = addChar(result, (*l).Buf[i]);
		nimln(163, "lexbase.nim");
		i = addInt(i, 1);
	} LA1: ;
	nimln(164, "lexbase.nim");
	result = resizeString(result, 1);
appendString(result, ((NimStringDesc*) &TMP6629));
	nimln(165, "lexbase.nim");
	{
		NimStringDesc* LOC6;
		NI LOC7;
		NimStringDesc* LOC8;
		if (!marker) goto LA4;
		nimln(166, "lexbase.nim");
		nimln(166, "lexbase.nim");
		LOC6 = 0;
		nimln(166, "lexbase.nim");
		nimln(166, "lexbase.nim");
		LOC7 = getcolnumber_382043(l, (*l).Bufpos);
		LOC8 = 0;
		LOC8 = nsuRepeatChar(LOC7, 32);
		LOC6 = rawNewString(LOC8->Sup.len + 2);
appendString(LOC6, LOC8);
appendString(LOC6, ((NimStringDesc*) &TMP6630));
		result = resizeString(result, LOC6->Sup.len + 0);
appendString(result, LOC6);
	}
	LA4: ;
	popFrame();
	return result;
}
N_NOINLINE(void, lexbaseInit)(void) {
	nimfr("lexbase", "lexbase.nim")
	popFrame();
}

N_NOINLINE(void, lexbaseDatInit)(void) {
static TNimNode* TMP6753[8];
static TNimNode TMP6596[9];
NTI382014.size = sizeof(tbaselexer382014);
NTI382014.kind = 17;
NTI382014.base = (&NTI1009);
NTI382014.flags = 2;
TMP6753[0] = &TMP6596[1];
TMP6596[1].kind = 1;
TMP6596[1].offset = offsetof(tbaselexer382014, Bufpos);
TMP6596[1].typ = (&NTI105);
TMP6596[1].name = "bufpos";
TMP6753[1] = &TMP6596[2];
TMP6596[2].kind = 1;
TMP6596[2].offset = offsetof(tbaselexer382014, Buf);
TMP6596[2].typ = (&NTI145);
TMP6596[2].name = "buf";
TMP6753[2] = &TMP6596[3];
TMP6596[3].kind = 1;
TMP6596[3].offset = offsetof(tbaselexer382014, Buflen);
TMP6596[3].typ = (&NTI105);
TMP6596[3].name = "bufLen";
TMP6753[3] = &TMP6596[4];
TMP6596[4].kind = 1;
TMP6596[4].offset = offsetof(tbaselexer382014, Input);
TMP6596[4].typ = (&NTI133628);
TMP6596[4].name = "input";
TMP6753[4] = &TMP6596[5];
TMP6596[5].kind = 1;
TMP6596[5].offset = offsetof(tbaselexer382014, Linenumber);
TMP6596[5].typ = (&NTI105);
TMP6596[5].name = "LineNumber";
TMP6753[5] = &TMP6596[6];
TMP6596[6].kind = 1;
TMP6596[6].offset = offsetof(tbaselexer382014, Sentinel);
TMP6596[6].typ = (&NTI105);
TMP6596[6].name = "sentinel";
TMP6753[6] = &TMP6596[7];
TMP6596[7].kind = 1;
TMP6596[7].offset = offsetof(tbaselexer382014, Linestart);
TMP6596[7].typ = (&NTI105);
TMP6596[7].name = "lineStart";
TMP6753[7] = &TMP6596[8];
TMP6596[8].kind = 1;
TMP6596[8].offset = offsetof(tbaselexer382014, Fileopened);
TMP6596[8].typ = (&NTI132);
TMP6596[8].name = "fileOpened";
TMP6596[0].len = 8; TMP6596[0].kind = 2; TMP6596[0].sons = &TMP6753[0];
NTI382014.node = &TMP6596[0];
}

