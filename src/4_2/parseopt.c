/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct toptparser416606 toptparser416606;
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
struct toptparser416606 {
  TNimObject Sup;
NimStringDesc* Cmd;
NI Pos;
NIM_BOOL Inshortstate;
NU8 Kind;
NimStringDesc* Key;
NimStringDesc* Val;
};
typedef NU8 TY104134[32];
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
N_NIMCALL(void, initoptparser_416618)(NimStringDesc* cmdline, toptparser416606* Result);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NI, paramcount_98633)(void);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, quoteifcontainswhite_78720)(NimStringDesc* s);
N_NIMCALL(NimStringDesc*, paramstr_98605)(NI i);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(NI, parseword_416802)(NimStringDesc* s, NI i, NimStringDesc** w, TY104134 delim);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(void, handleshortoption_416882)(toptparser416606* p);
N_NIMCALL(void, nponext)(toptparser416606* p);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newlen);
N_NIMCALL(NimStringDesc*, npocmdLineRest)(toptparser416606* p);
N_NIMCALL(NimStringDesc*, nsuStrip)(NimStringDesc* s, NIM_BOOL leading, NIM_BOOL trailing);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start_63824, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
static N_INLINE(NI, subInt)(NI a, NI b);
STRING_LITERAL(TMP6790, "", 0);
STRING_LITERAL(TMP6793, "", 0);
static NIM_CONST TY104134 TMP6794 = {
0x01, 0x02, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
static NIM_CONST TY104134 TMP6795 = {
0x01, 0x02, 0x00, 0x00, 0x01, 0x00, 0x00, 0x24,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
extern TFrame* frameptr_12027;
extern TNimType NTI1009; /* TObject */
TNimType NTI416606; /* TOptParser */
extern TNimType NTI143; /* string */
extern TNimType NTI105; /* int */
extern TNimType NTI132; /* bool */
TNimType NTI416604; /* TCmdLineKind */

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) (&(*dest).data[((*dest).Sup.len)- 0])), ((NCSTRING) ((*src).data)), (NI64)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[((*dest).Sup.len)- 0] = c;
	(*dest).data[((NI64)((*dest).Sup.len + 1))- 0] = 0;
	(*dest).Sup.len += 1;
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

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_12027;
	frameptr_12027 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_12027 = (*frameptr_12027).prev;
}

N_NIMCALL(void, initoptparser_416618)(NimStringDesc* cmdline, toptparser416606* Result) {
	nimfr("initOptParser", "parseopt.nim")
	nimln(44, "parseopt.nim");
	(*Result).Pos = 0;
	nimln(45, "parseopt.nim");
	(*Result).Inshortstate = NIM_FALSE;
	nimln(46, "parseopt.nim");
	{
		nimln(684, "system.nim");
		nimln(684, "system.nim");
		if (!!(((cmdline) && (cmdline)->Sup.len == 0))) goto LA3;
		nimln(47, "parseopt.nim");
		unsureAsgnRef((void**) &(*Result).Cmd, copyString(cmdline));
	}
	goto LA1;
	LA3: ;
	{
		NI i_416630;
		NI HEX3Atmp_416632;
		NI res_416634;
		nimln(49, "parseopt.nim");
		unsureAsgnRef((void**) &(*Result).Cmd, copyString(((NimStringDesc*) &TMP6790)));
		i_416630 = 0;
		HEX3Atmp_416632 = 0;
		nimln(50, "parseopt.nim");
		HEX3Atmp_416632 = paramcount_98633();
		nimln(1274, "system.nim");
		res_416634 = 1;
		nimln(1275, "system.nim");
		while (1) {
			NimStringDesc* LOC7;
			NimStringDesc* LOC8;
			NimStringDesc* LOC9;
			nimln(1275, "system.nim");
			if (!(res_416634 <= HEX3Atmp_416632)) goto LA6;
			nimln(1274, "system.nim");
			i_416630 = res_416634;
			nimln(51, "parseopt.nim");
			nimln(51, "parseopt.nim");
			LOC7 = 0;
			nimln(51, "parseopt.nim");
			nimln(51, "parseopt.nim");
			LOC8 = 0;
			LOC8 = paramstr_98605(i_416630);
			LOC9 = 0;
			LOC9 = quoteifcontainswhite_78720(LOC8);
			LOC7 = rawNewString((*Result).Cmd->Sup.len + LOC9->Sup.len + 1);
appendString(LOC7, (*Result).Cmd);
appendString(LOC7, LOC9);
appendChar(LOC7, 32);
			unsureAsgnRef((void**) &(*Result).Cmd, LOC7);
			nimln(1277, "system.nim");
			res_416634 = addInt(res_416634, 1);
		} LA6: ;
	}
	LA1: ;
	nimln(52, "parseopt.nim");
	(*Result).Kind = ((NU8) 0);
	nimln(53, "parseopt.nim");
	unsureAsgnRef((void**) &(*Result).Key, copyString(((NimStringDesc*) &TMP6793)));
	nimln(54, "parseopt.nim");
	unsureAsgnRef((void**) &(*Result).Val, copyString(((NimStringDesc*) &TMP6793)));
	popFrame();
}

N_NIMCALL(NI, parseword_416802)(NimStringDesc* s, NI i, NimStringDesc** w, TY104134 delim) {
	NI result;
	nimfr("parseWord", "parseopt.nim")
	result = 0;
	nimln(58, "parseopt.nim");
	result = i;
	nimln(59, "parseopt.nim");
	{
		nimln(59, "parseopt.nim");
		if ((NU)(result) > (NU)(s->Sup.len)) raiseIndexError();
		if (!((NU8)(s->data[result]) == (NU8)(34))) goto LA3;
		nimln(60, "parseopt.nim");
		result = addInt(result, 1);
		nimln(61, "parseopt.nim");
		while (1) {
			nimln(61, "parseopt.nim");
			nimln(716, "system.nim");
			if ((NU)(result) > (NU)(s->Sup.len)) raiseIndexError();
			if (!!((((NU8)(s->data[result])) == ((NU8)(0)) || ((NU8)(s->data[result])) == ((NU8)(34))))) goto LA5;
			nimln(62, "parseopt.nim");
			if ((NU)(result) > (NU)(s->Sup.len)) raiseIndexError();
			(*w) = addChar((*w), s->data[result]);
			nimln(63, "parseopt.nim");
			result = addInt(result, 1);
		} LA5: ;
		nimln(64, "parseopt.nim");
		{
			nimln(64, "parseopt.nim");
			if ((NU)(result) > (NU)(s->Sup.len)) raiseIndexError();
			if (!((NU8)(s->data[result]) == (NU8)(34))) goto LA8;
			nimln(64, "parseopt.nim");
			result = addInt(result, 1);
		}
		LA8: ;
	}
	goto LA1;
	LA3: ;
	{
		nimln(66, "parseopt.nim");
		while (1) {
			nimln(66, "parseopt.nim");
			nimln(716, "system.nim");
			if ((NU)(result) > (NU)(s->Sup.len)) raiseIndexError();
			if (!!(((delim[((NU8)(s->data[result]))/8] &(1<<(((NU8)(s->data[result]))%8)))!=0))) goto LA11;
			nimln(67, "parseopt.nim");
			if ((NU)(result) > (NU)(s->Sup.len)) raiseIndexError();
			(*w) = addChar((*w), s->data[result]);
			nimln(68, "parseopt.nim");
			result = addInt(result, 1);
		} LA11: ;
	}
	LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(void, handleshortoption_416882)(toptparser416606* p) {
	NI i;
	nimfr("handleShortOption", "parseopt.nim")
	nimln(71, "parseopt.nim");
	i = (*p).Pos;
	nimln(72, "parseopt.nim");
	(*p).Kind = ((NU8) 3);
	nimln(73, "parseopt.nim");
	if ((NU)(i) > (NU)((*p).Cmd->Sup.len)) raiseIndexError();
	(*p).Key = addChar((*p).Key, (*p).Cmd->data[i]);
	nimln(74, "parseopt.nim");
	i = addInt(i, 1);
	nimln(75, "parseopt.nim");
	(*p).Inshortstate = NIM_TRUE;
	nimln(76, "parseopt.nim");
	while (1) {
		nimln(716, "system.nim");
		if ((NU)(i) > (NU)((*p).Cmd->Sup.len)) raiseIndexError();
		if (!(((NU8)((*p).Cmd->data[i])) == ((NU8)(9)) || ((NU8)((*p).Cmd->data[i])) == ((NU8)(32)))) goto LA1;
		nimln(77, "parseopt.nim");
		i = addInt(i, 1);
		nimln(78, "parseopt.nim");
		(*p).Inshortstate = NIM_FALSE;
	} LA1: ;
	nimln(79, "parseopt.nim");
	{
		nimln(716, "system.nim");
		if ((NU)(i) > (NU)((*p).Cmd->Sup.len)) raiseIndexError();
		if (!(((NU8)((*p).Cmd->data[i])) == ((NU8)(58)) || ((NU8)((*p).Cmd->data[i])) == ((NU8)(61)))) goto LA4;
		nimln(80, "parseopt.nim");
		i = addInt(i, 1);
		nimln(81, "parseopt.nim");
		(*p).Inshortstate = NIM_FALSE;
		nimln(82, "parseopt.nim");
		while (1) {
			nimln(716, "system.nim");
			if ((NU)(i) > (NU)((*p).Cmd->Sup.len)) raiseIndexError();
			if (!(((NU8)((*p).Cmd->data[i])) == ((NU8)(9)) || ((NU8)((*p).Cmd->data[i])) == ((NU8)(32)))) goto LA6;
			nimln(82, "parseopt.nim");
			i = addInt(i, 1);
		} LA6: ;
		nimln(83, "parseopt.nim");
		i = parseword_416802((*p).Cmd, i, &(*p).Val, TMP6794);
	}
	LA4: ;
	nimln(84, "parseopt.nim");
	{
		nimln(84, "parseopt.nim");
		if ((NU)(i) > (NU)((*p).Cmd->Sup.len)) raiseIndexError();
		if (!((NU8)((*p).Cmd->data[i]) == (NU8)(0))) goto LA9;
		nimln(84, "parseopt.nim");
		(*p).Inshortstate = NIM_FALSE;
	}
	LA9: ;
	nimln(85, "parseopt.nim");
	(*p).Pos = i;
	popFrame();
}

N_NIMCALL(void, nponext)(toptparser416606* p) {
	NI i;
	nimfr("next", "parseopt.nim")
	nimln(91, "parseopt.nim");
	i = (*p).Pos;
	nimln(92, "parseopt.nim");
	while (1) {
		nimln(716, "system.nim");
		if ((NU)(i) > (NU)((*p).Cmd->Sup.len)) raiseIndexError();
		if (!(((NU8)((*p).Cmd->data[i])) == ((NU8)(9)) || ((NU8)((*p).Cmd->data[i])) == ((NU8)(32)))) goto LA1;
		nimln(92, "parseopt.nim");
		i = addInt(i, 1);
	} LA1: ;
	nimln(93, "parseopt.nim");
	(*p).Pos = i;
	nimln(94, "parseopt.nim");
	(*p).Key = setLengthStr((*p).Key, 0);
	nimln(95, "parseopt.nim");
	(*p).Val = setLengthStr((*p).Val, 0);
	nimln(96, "parseopt.nim");
	{
		if (!(*p).Inshortstate) goto LA4;
		nimln(97, "parseopt.nim");
		handleshortoption_416882(p);
		nimln(98, "parseopt.nim");
		goto BeforeRet;
	}
	LA4: ;
	nimln(99, "parseopt.nim");
	if ((NU)(i) > (NU)((*p).Cmd->Sup.len)) raiseIndexError();
	switch (((NU8)((*p).Cmd->data[i]))) {
	case 0:
	{
		nimln(101, "parseopt.nim");
		(*p).Kind = ((NU8) 0);
	}
	break;
	case 45:
	{
		nimln(103, "parseopt.nim");
		i = addInt(i, 1);
		nimln(104, "parseopt.nim");
		{
			nimln(104, "parseopt.nim");
			if ((NU)(i) > (NU)((*p).Cmd->Sup.len)) raiseIndexError();
			if (!((NU8)((*p).Cmd->data[i]) == (NU8)(45))) goto LA10;
			nimln(105, "parseopt.nim");
			(*p).Kind = ((NU8) 2);
			nimln(106, "parseopt.nim");
			i = addInt(i, 1);
			nimln(107, "parseopt.nim");
			i = parseword_416802((*p).Cmd, i, &(*p).Key, TMP6795);
			nimln(108, "parseopt.nim");
			while (1) {
				nimln(716, "system.nim");
				if ((NU)(i) > (NU)((*p).Cmd->Sup.len)) raiseIndexError();
				if (!(((NU8)((*p).Cmd->data[i])) == ((NU8)(9)) || ((NU8)((*p).Cmd->data[i])) == ((NU8)(32)))) goto LA12;
				nimln(108, "parseopt.nim");
				i = addInt(i, 1);
			} LA12: ;
			nimln(109, "parseopt.nim");
			{
				nimln(716, "system.nim");
				if ((NU)(i) > (NU)((*p).Cmd->Sup.len)) raiseIndexError();
				if (!(((NU8)((*p).Cmd->data[i])) == ((NU8)(58)) || ((NU8)((*p).Cmd->data[i])) == ((NU8)(61)))) goto LA15;
				nimln(110, "parseopt.nim");
				i = addInt(i, 1);
				nimln(111, "parseopt.nim");
				while (1) {
					nimln(716, "system.nim");
					if ((NU)(i) > (NU)((*p).Cmd->Sup.len)) raiseIndexError();
					if (!(((NU8)((*p).Cmd->data[i])) == ((NU8)(9)) || ((NU8)((*p).Cmd->data[i])) == ((NU8)(32)))) goto LA17;
					nimln(111, "parseopt.nim");
					i = addInt(i, 1);
				} LA17: ;
				nimln(112, "parseopt.nim");
				(*p).Pos = parseword_416802((*p).Cmd, i, &(*p).Val, TMP6794);
			}
			goto LA13;
			LA15: ;
			{
				nimln(114, "parseopt.nim");
				(*p).Pos = i;
			}
			LA13: ;
		}
		goto LA8;
		LA10: ;
		{
			nimln(116, "parseopt.nim");
			(*p).Pos = i;
			nimln(117, "parseopt.nim");
			handleshortoption_416882(p);
		}
		LA8: ;
	}
	break;
	default:
	{
		nimln(119, "parseopt.nim");
		(*p).Kind = ((NU8) 1);
		nimln(120, "parseopt.nim");
		(*p).Pos = parseword_416802((*p).Cmd, i, &(*p).Key, TMP6794);
	}
	break;
	}
	BeforeRet: ;
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

N_NIMCALL(NimStringDesc*, npocmdLineRest)(toptparser416606* p) {
	NimStringDesc* result;
	NI TMP6796;
	NimStringDesc* LOC1;
	nimfr("cmdLineRest", "parseopt.nim")
	result = 0;
	nimln(125, "parseopt.nim");
	nimln(125, "parseopt.nim");
	nimln(125, "parseopt.nim");
	nimln(125, "parseopt.nim");
	nimln(125, "parseopt.nim");
	TMP6796 = subInt((*p).Cmd->Sup.len, 1);
	LOC1 = 0;
	LOC1 = copyStrLast((*p).Cmd, (*p).Pos, (NI64)(TMP6796));
	result = nsuStrip(LOC1, NIM_TRUE, NIM_TRUE);
	popFrame();
	return result;
}
N_NOINLINE(void, parseoptInit)(void) {
	nimfr("parseopt", "parseopt.nim")
	popFrame();
}

N_NOINLINE(void, parseoptDatInit)(void) {
static TNimNode* TMP6798[6];
static TNimNode* TMP6799[4];
NI TMP6801;
static char* NIM_CONST TMP6800[4] = {
"cmdEnd", 
"cmdArgument", 
"cmdLongoption", 
"cmdShortOption"};
static TNimNode TMP6788[12];
NTI416606.size = sizeof(toptparser416606);
NTI416606.kind = 17;
NTI416606.base = (&NTI1009);
NTI416606.flags = 2;
TMP6798[0] = &TMP6788[1];
TMP6788[1].kind = 1;
TMP6788[1].offset = offsetof(toptparser416606, Cmd);
TMP6788[1].typ = (&NTI143);
TMP6788[1].name = "cmd";
TMP6798[1] = &TMP6788[2];
TMP6788[2].kind = 1;
TMP6788[2].offset = offsetof(toptparser416606, Pos);
TMP6788[2].typ = (&NTI105);
TMP6788[2].name = "pos";
TMP6798[2] = &TMP6788[3];
TMP6788[3].kind = 1;
TMP6788[3].offset = offsetof(toptparser416606, Inshortstate);
TMP6788[3].typ = (&NTI132);
TMP6788[3].name = "inShortState";
TMP6798[3] = &TMP6788[4];
NTI416604.size = sizeof(NU8);
NTI416604.kind = 14;
NTI416604.base = 0;
NTI416604.flags = 3;
for (TMP6801 = 0; TMP6801 < 4; TMP6801++) {
TMP6788[TMP6801+5].kind = 1;
TMP6788[TMP6801+5].offset = TMP6801;
TMP6788[TMP6801+5].name = TMP6800[TMP6801];
TMP6799[TMP6801] = &TMP6788[TMP6801+5];
}
TMP6788[9].len = 4; TMP6788[9].kind = 2; TMP6788[9].sons = &TMP6799[0];
NTI416604.node = &TMP6788[9];
TMP6788[4].kind = 1;
TMP6788[4].offset = offsetof(toptparser416606, Kind);
TMP6788[4].typ = (&NTI416604);
TMP6788[4].name = "kind";
TMP6798[4] = &TMP6788[10];
TMP6788[10].kind = 1;
TMP6788[10].offset = offsetof(toptparser416606, Key);
TMP6788[10].typ = (&NTI143);
TMP6788[10].name = "key";
TMP6798[5] = &TMP6788[11];
TMP6788[11].kind = 1;
TMP6788[11].offset = offsetof(toptparser416606, Val);
TMP6788[11].typ = (&NTI143);
TMP6788[11].name = "val";
TMP6788[0].len = 6; TMP6788[0].kind = 2; TMP6788[0].sons = &TMP6798[0];
NTI416606.node = &TMP6788[0];
}

