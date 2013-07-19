/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>

#include <stdio.h>

#include <stdlib.h>

#include <sys/socket.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
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
typedef struct toptparser415606 toptparser415606;
typedef struct TNimObject TNimObject;
typedef struct TNimNode TNimNode;
typedef struct tlineinfo127308 tlineinfo127308;
typedef struct TY9355 TY9355;
typedef struct tsocketimpl110806 tsocketimpl110806;
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
struct TNimObject {
TNimType* m_type;
};
struct toptparser415606 {
  TNimObject Sup;
NimStringDesc* Cmd;
NI Pos;
NIM_BOOL Inshortstate;
NU8 Kind;
NimStringDesc* Key;
NimStringDesc* Val;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct tlineinfo127308 {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
typedef NimStringDesc* TY138216[1];
typedef N_NIMCALL_PTR(void, TY417079) (void);
typedef NIM_CHAR TY110829[4001];
struct tsocketimpl110806 {
int Fd;
NIM_BOOL Isbuffered;
union {
struct {TY110829 Buffer;
NI Currpos;
NI Buflen;
} S1;
} isbufferedU;
NIM_BOOL Nonblocking;
};
typedef NI TY21621[16];
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
struct tfreecell21633 {
tfreecell21633* Next;
NI Zerofield;
};
struct TY9355 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell38846*, usrtocell_42243)(void* usr);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(void, rtladdzct_43402)(tcell38846* c);
N_NOINLINE(void, addzct_42215)(tcellseq38862* s, tcell38846* c);
N_NIMCALL(void, processcmdline_417007)(NU8 pass, NimStringDesc* cmd);
N_NIMCALL(void, initoptparser_415618)(NimStringDesc* cmdline, toptparser415606* Result);
N_NOINLINE(void, chckNil)(void* p);
N_NIMCALL(void, nponext)(toptparser415606* p);
N_NIMCALL(NI, nsuFindChar)(NimStringDesc* s, NIM_CHAR sub, NI start);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start_63824, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
static N_INLINE(NI, addInt)(NI a, NI b);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(void, processswitch_141016)(NimStringDesc* switch_141018, NimStringDesc* arg, NU8 pass, tlineinfo127308 info);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* seq, NI elemsize);
N_NIMCALL(NimStringDesc*, nosUnixToNativePath)(NimStringDesc* path);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(NimStringDesc*, npocmdLineRest)(toptparser415606* p);
N_NIMCALL(void, rawmessage_128451)(NU16 msg, NimStringDesc** args, NI argsLen0);
N_NIMCALL(void, serve_417077)(TY417079 action);
N_NIMCALL(NimStringDesc*, getconfigvar_105291)(NimStringDesc* key);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NimStringDesc*, readline_9283)(FILE* f);
N_NIMCALL(tsocketimpl110806*, socket_111402)(NU8 domain, NU8 typ, NU8 protocol, NIM_BOOL buffered);
N_NIMCALL(NI, nsuParseInt)(NimStringDesc* s);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
N_NIMCALL(void, bindaddr_112552)(tsocketimpl110806* socket, NI16 port, NimStringDesc* address);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(void, listen_112405)(tsocketimpl110806* socket, int backlog);
N_NIMCALL(void*, newObjRC1)(TNimType* typ, NI size);
N_NIMCALL(void, accept_114201)(tsocketimpl110806* server, tsocketimpl110806** client);
N_NIMCALL(void, readline_118831)(tsocketimpl110806* socket, NimStringDesc** line, NI timeout);
N_NIMCALL(void, send_120204)(tsocketimpl110806* socket, NimStringDesc* data);
N_NIMCALL(void, close_114264)(tsocketimpl110806* socket);
STRING_LITERAL(TMP6792, "", 0);
STRING_LITERAL(TMP6799, "server.type", 11);
STRING_LITERAL(TMP6800, "stdin", 5);
STRING_LITERAL(TMP6801, "tcp", 3);
STRING_LITERAL(TMP6802, "quit", 4);
STRING_LITERAL(TMP6807, "server.port", 11);
STRING_LITERAL(TMP6808, "server.address", 14);
STRING_LITERAL(TMP6833, "\015\012", 2);
STRING_LITERAL(TMP6834, "Invalid server.type:", 20);
NimStringDesc* curcaascmd_417003;
extern TFrame* frameptr_12027;
extern tgcheap40816 gch_40842;
NimStringDesc* lastcaascmd_417004;
NimStringDesc* arguments_417005;
extern TNimType NTI415606; /* TOptParser */
extern tlineinfo127308 gcmdlineinfo_127802;
extern NimStringDesc* command_105197;
extern TY9355* commandargs_105218;
extern NimStringDesc* gprojectname_105191;
extern NU32 gglobaloptions_105108;
extern NI32 gdirtybufferidx_105123;
extern NI32 gdirtyoriginalidx_105124;
extern NI gerrorcounter_127871;
extern tsocketimpl110806* stdoutsocket_127876;
extern TNimType NTI110808; /* TSocket */

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
	result = ((tcell38846*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(tcell38846))))));
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
		if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA3;
		nimln(221, "gc.nim");
		rtladdzct_43402(c);
	}
	LA3: ;
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

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) (&(*dest).data[((*dest).Sup.len)- 0])), ((NCSTRING) ((*src).data)), (NI32)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[((*dest).Sup.len)- 0] = c;
	(*dest).data[((NI32)((*dest).Sup.len + 1))- 0] = 0;
	(*dest).Sup.len += 1;
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	nimfr("asgnRefNoCycle", "gc.nim")
	nimln(236, "gc.nim");
	{
		tcell38846* c;
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
		tcell38846* c;
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

N_NIMCALL(void, processcmdline_417007)(NU8 pass, NimStringDesc* cmd) {
	toptparser415606 p;
	NI argscount;
	nimfr("ProcessCmdLine", "service.nim")
	nimln(31, "service.nim");
	chckNil((void*)&p);
	memset((void*)&p, 0, sizeof(p));
	p.Sup.m_type = (&NTI415606);
	initoptparser_415618(cmd, &p);
	nimln(32, "service.nim");
	argscount = 0;
	nimln(33, "service.nim");
	while (1) {
		nimln(34, "service.nim");
		nponext(&p);
		nimln(35, "service.nim");
		switch (p.Kind) {
		case ((NU8) 0):
		{
			nimln(36, "service.nim");
			goto LA1;
		}
		break;
		case ((NU8) 2):
		case ((NU8) 3):
		{
			NI bracketle;
			nimln(40, "service.nim");
			bracketle = nsuFindChar(p.Key, 91, 0);
			nimln(41, "service.nim");
			{
				NimStringDesc* key;
				NI TMP6797;
				NimStringDesc* val;
				NimStringDesc* LOC8;
				NI TMP6798;
				NimStringDesc* LOC9;
				nimln(688, "system.nim");
				if (!(0 <= bracketle)) goto LA6;
				nimln(42, "service.nim");
				nimln(42, "service.nim");
				nimln(42, "service.nim");
				TMP6797 = subInt(bracketle, 1);
				key = copyStrLast(p.Key, 0, (NI32)(TMP6797));
				nimln(43, "service.nim");
				nimln(43, "service.nim");
				LOC8 = 0;
				nimln(43, "service.nim");
				nimln(43, "service.nim");
				TMP6798 = addInt(bracketle, 1);
				LOC9 = 0;
				LOC9 = copyStr(p.Key, (NI32)(TMP6798));
				LOC8 = rawNewString(LOC9->Sup.len + p.Val->Sup.len + 1);
appendString(LOC8, LOC9);
appendChar(LOC8, 58);
appendString(LOC8, p.Val);
				val = LOC8;
				nimln(44, "service.nim");
				processswitch_141016(key, val, pass, gcmdlineinfo_127802);
			}
			goto LA4;
			LA6: ;
			{
				nimln(46, "service.nim");
				processswitch_141016(p.Key, p.Val, pass, gcmdlineinfo_127802);
			}
			LA4: ;
		}
		break;
		case ((NU8) 1):
		{
			nimln(48, "service.nim");
			{
				NimStringDesc* LOC16;
				nimln(48, "service.nim");
				if (!(argscount == 0)) goto LA14;
				nimln(49, "service.nim");
				LOC16 = 0;
				LOC16 = command_105197; command_105197 = copyStringRC1(p.Key);
				if (LOC16) nimGCunrefNoCycle(LOC16);
			}
			goto LA12;
			LA14: ;
			{
				nimln(51, "service.nim");
				{
					NimStringDesc* LOC22;
					nimln(51, "service.nim");
					if (!(pass == ((NU8) 0))) goto LA20;
					nimln(51, "service.nim");
					commandargs_105218 = (TY9355*) incrSeq(&(commandargs_105218)->Sup, sizeof(NimStringDesc*));
					LOC22 = 0;
					LOC22 = commandargs_105218->data[commandargs_105218->Sup.len-1]; commandargs_105218->data[commandargs_105218->Sup.len-1] = copyStringRC1(p.Key);
					if (LOC22) nimGCunrefNoCycle(LOC22);
				}
				LA20: ;
				nimln(52, "service.nim");
				{
					nimln(52, "service.nim");
					if (!(argscount == 1)) goto LA25;
					nimln(54, "service.nim");
					asgnRefNoCycle((void**) &gprojectname_105191, nosUnixToNativePath(p.Key));
					nimln(55, "service.nim");
					asgnRefNoCycle((void**) &arguments_417005, npocmdLineRest(&p));
					nimln(56, "service.nim");
					goto LA1;
				}
				LA25: ;
			}
			LA12: ;
			nimln(57, "service.nim");
			argscount = addInt(argscount, 1);
		}
		break;
		}
	} LA1: ;
	nimln(59, "service.nim");
	{
		nimln(59, "service.nim");
		if (!(pass == ((NU8) 1))) goto LA29;
		nimln(60, "service.nim");
		{
			NIM_BOOL LOC33;
			TY138216 LOC37;
			nimln(60, "service.nim");
			nimln(717, "system.nim");
			nimln(717, "system.nim");
			LOC33 = !(((gglobaloptions_105108 &(1<<((((NU8) 13))&31)))!=0));
			if (!(LOC33)) goto LA34;
			nimln(684, "system.nim");
			nimln(684, "system.nim");
			LOC33 = !(((arguments_417005) && (arguments_417005)->Sup.len == 0));
			LA34: ;
			if (!LOC33) goto LA35;
			nimln(61, "service.nim");
			memset((void*)LOC37, 0, sizeof(LOC37));
			rawmessage_128451(((NU16) 57), LOC37, 0);
		}
		LA35: ;
	}
	LA29: ;
	popFrame();
}

static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	NIM_BOOL LOC11;
	int LOC13;
	result = 0;
	{
		if (!(a == b)) goto LA3;
		result = NIM_TRUE;
		goto BeforeRet;
	}
	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = (a == NIM_NIL);
		if (LOC7) goto LA8;
		LOC7 = (b == NIM_NIL);
		LA8: ;
		if (!LOC7) goto LA9;
		result = NIM_FALSE;
		goto BeforeRet;
	}
	LA9: ;
	LOC11 = ((*a).Sup.len == (*b).Sup.len);
	if (!(LOC11)) goto LA12;
	LOC13 = memcmp(((NCSTRING) ((*a).data)), ((NCSTRING) ((*b).data)), (NI32)((*a).Sup.len * 1));
	LOC11 = (LOC13 == ((NI32) 0));
	LA12: ;
	result = LOC11;
	goto BeforeRet;
	BeforeRet: ;
	return result;
}

static N_INLINE(NI, chckRange)(NI i, NI a, NI b) {
	NI result;
	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = (a <= i);
		if (!(LOC3)) goto LA4;
		LOC3 = (i <= b);
		LA4: ;
		if (!LOC3) goto LA5;
		result = i;
		goto BeforeRet;
	}
	goto LA1;
	LA5: ;
	{
		raiseRangeError(((NI64) (i)));
	}
	LA1: ;
	BeforeRet: ;
	return result;
}

N_NIMCALL(void, serve_417077)(TY417079 action) {
	NimStringDesc* typ;
	nimfr("serve", "service.nim")
	nimln(72, "service.nim");
	typ = getconfigvar_105291(((NimStringDesc*) &TMP6799));
	nimln(73, "service.nim");
	if (eqStrings(typ, ((NimStringDesc*) &TMP6800))) goto LA1;
	if (eqStrings(typ, ((NimStringDesc*) &TMP6801))) goto LA2;
	if (eqStrings(typ, ((NimStringDesc*) &TMP6792))) goto LA2;
	goto LA3;
	LA1: ;
	{
		nimln(75, "service.nim");
		while (1) {
			NimStringDesc* line;
			NimStringDesc* LOC11;
			nimln(76, "service.nim");
			nimln(76, "service.nim");
			line = readline_9283(stdin);
			nimln(77, "service.nim");
			{
				nimln(77, "service.nim");
				if (!eqStrings(line, ((NimStringDesc*) &TMP6802))) goto LA9;
				nimln(77, "service.nim");
				exit(0);
			}
			LA9: ;
			nimln(65, "service.nim");
			LOC11 = 0;
			LOC11 = curcaascmd_417003; curcaascmd_417003 = copyStringRC1(line);
			if (LOC11) nimGCunrefNoCycle(LOC11);
			nimln(66, "service.nim");
			processcmdline_417007(((NU8) 1), line);
			nimln(67, "service.nim");
			action();
			nimln(68, "service.nim");
			gdirtybufferidx_105123 = ((NI32) 0);
			nimln(69, "service.nim");
			gdirtyoriginalidx_105124 = ((NI32) 0);
			nimln(70, "service.nim");
			gerrorcounter_127871 = 0;
			nimln(79, "service.nim");
			printf("%s\012", (((NimStringDesc*) &TMP6792))->data);
			nimln(80, "service.nim");
			fflush(stdout);
		}
	}
	goto LA4;
	LA2: ;
	{
		tsocketimpl110806* server;
		NimStringDesc* p;
		NI16 port;
		NimStringDesc* LOC19;
		NimStringDesc* inp;
		nimln(83, "service.nim");
		server = socket_111402(((NU8) 2), ((NU8) 1), ((NU8) 6), NIM_TRUE);
		nimln(84, "service.nim");
		p = getconfigvar_105291(((NimStringDesc*) &TMP6807));
		nimln(85, "service.nim");
		nimln(85, "service.nim");
		{
			NI LOC17;
			nimln(692, "system.nim");
			nimln(85, "service.nim");
			if (!(0 < p->Sup.len)) goto LA15;
			nimln(85, "service.nim");
			LOC17 = nsuParseInt(p);
			port = ((NI16)chckRange(LOC17, ((NI16) -32768), ((NI16) 32767)));
		}
		goto LA13;
		LA15: ;
		{
			port = ((NI16) 6000);
		}
		LA13: ;
		nimln(86, "service.nim");
		nimln(86, "service.nim");
		LOC19 = 0;
		LOC19 = getconfigvar_105291(((NimStringDesc*) &TMP6808));
		bindaddr_112552(server, port, LOC19);
		nimln(87, "service.nim");
		inp = copyString(((NimStringDesc*) &TMP6792));
		nimln(88, "service.nim");
		listen_112405(server, SOMAXCONN);
		nimln(89, "service.nim");
		if (stdoutsocket_127876) nimGCunrefNoCycle(stdoutsocket_127876);
		stdoutsocket_127876 = (tsocketimpl110806*) newObjRC1((&NTI110808), sizeof(tsocketimpl110806));
		nimln(90, "service.nim");
		while (1) {
			NimStringDesc* LOC21;
			nimln(91, "service.nim");
			accept_114201(server, &stdoutsocket_127876);
			nimln(92, "service.nim");
			readline_118831(stdoutsocket_127876, &inp, -1);
			nimln(65, "service.nim");
			LOC21 = 0;
			LOC21 = curcaascmd_417003; curcaascmd_417003 = copyStringRC1(inp);
			if (LOC21) nimGCunrefNoCycle(LOC21);
			nimln(66, "service.nim");
			processcmdline_417007(((NU8) 1), inp);
			nimln(67, "service.nim");
			action();
			nimln(68, "service.nim");
			gdirtybufferidx_105123 = ((NI32) 0);
			nimln(69, "service.nim");
			gdirtyoriginalidx_105124 = ((NI32) 0);
			nimln(70, "service.nim");
			gerrorcounter_127871 = 0;
			nimln(94, "service.nim");
			send_120204(stdoutsocket_127876, ((NimStringDesc*) &TMP6833));
			nimln(95, "service.nim");
			close_114264(stdoutsocket_127876);
		}
	}
	goto LA4;
	LA3: ;
	{
		nimln(97, "service.nim");
		printf("%s%s\012", (((NimStringDesc*) &TMP6834))->data, (typ)->data);
		nimln(98, "service.nim");
		exit(1);
	}
	LA4: ;
	popFrame();
}
N_NOINLINE(void, serviceInit)(void) {
	NimStringDesc* LOC1;
	NimStringDesc* LOC2;
	NimStringDesc* LOC3;
	nimfr("service", "service.nim")
	nimln(22, "service.nim");
	LOC1 = 0;
	LOC1 = curcaascmd_417003; curcaascmd_417003 = copyStringRC1(((NimStringDesc*) &TMP6792));
	if (LOC1) nimGCunrefNoCycle(LOC1);
	nimln(23, "service.nim");
	LOC2 = 0;
	LOC2 = lastcaascmd_417004; lastcaascmd_417004 = copyStringRC1(((NimStringDesc*) &TMP6792));
	if (LOC2) nimGCunrefNoCycle(LOC2);
	nimln(26, "service.nim");
	LOC3 = 0;
	LOC3 = arguments_417005; arguments_417005 = copyStringRC1(((NimStringDesc*) &TMP6792));
	if (LOC3) nimGCunrefNoCycle(LOC3);
	popFrame();
}

N_NOINLINE(void, serviceDatInit)(void) {
}

