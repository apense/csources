/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct Tnode191813 Tnode191813;
typedef struct Ttype191849 Ttype191849;
typedef struct Tlineinfo163338 Tlineinfo163338;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tsym191843 Tsym191843;
typedef struct Tident167021 Tident167021;
typedef struct Tnodeseq191807 Tnodeseq191807;
typedef struct Tidobj167015 Tidobj167015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq191845 Ttypeseq191845;
typedef struct Tscope191837 Tscope191837;
typedef struct TY191944 TY191944;
typedef struct Tstrtable191817 Tstrtable191817;
typedef struct Tsymseq191815 Tsymseq191815;
typedef struct Tloc191827 Tloc191827;
typedef struct Ropeobj161009 Ropeobj161009;
typedef struct Tlib191831 Tlib191831;
typedef struct Intset188056 Intset188056;
typedef struct Ttrunk188052 Ttrunk188052;
typedef struct Ttrunkseq188054 Ttrunkseq188054;
typedef struct Tinstantiation191833 Tinstantiation191833;
typedef struct Tlistentry130022 Tlistentry130022;
typedef struct TY191933 TY191933;
struct  Tlineinfo163338  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tnode191813  {
Ttype191849* typ;
Tlineinfo163338 info;
NU16 flags;
NU8 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym191843* sym;
} S4;
struct {Tident167021* ident;
} S5;
struct {Tnodeseq191807* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
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
struct  Tstrtable191817  {
NI counter;
Tsymseq191815* data;
};
struct  Tloc191827  {
NU8 k;
NU8 s;
NU16 flags;
Ttype191849* t;
Ropeobj161009* r;
Ropeobj161009* heaproot;
};
struct  Tsym191843  {
  Tidobj167015 Sup;
NU8 kind;
union{
struct {Ttypeseq191845* typeinstcache;
Tscope191837* typscope;
} S1;
struct {TY191944* procinstcache;
Tsym191843* gcunsafetyreason;
} S2;
struct {TY191944* usedgenerics;
Tstrtable191817 tab;
} S3;
struct {Tsym191843* guard;
} S4;
} kindU;
NU16 magic;
Ttype191849* typ;
Tident167021* name;
Tlineinfo163338 info;
Tsym191843* owner;
NU32 flags;
Tnode191813* ast;
NU32 options;
NI position;
NI offset;
Tloc191827 loc;
Tlib191831* annex;
Tnode191813* constraint;
};
struct  Intset188056  {
NI counter;
NI max;
Ttrunk188052* head;
Ttrunkseq188054* data;
};
struct  Ttype191849  {
  Tidobj167015 Sup;
NU8 kind;
NU8 callconv;
NU32 flags;
Ttypeseq191845* sons;
Tnode191813* n;
Tsym191843* owner;
Tsym191843* sym;
Tsym191843* destructor;
Tsym191843* deepcopy;
Tsym191843* assignment;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc191827 loc;
};
struct  Tident167021  {
  Tidobj167015 Sup;
NimStringDesc* s;
Tident167021* next;
NI h;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  Tscope191837  {
NI depthlevel;
Tstrtable191817 symbols;
Tnodeseq191807* usingsyms;
Tscope191837* parent;
};
struct  Ropeobj161009  {
  TNimObject Sup;
Ropeobj161009* left;
Ropeobj161009* right;
NI length;
NimStringDesc* data;
};
struct  Tlistentry130022  {
  TNimObject Sup;
Tlistentry130022* prev;
Tlistentry130022* next;
};
struct  Tlib191831  {
  Tlistentry130022 Sup;
NU8 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj161009* name;
Tnode191813* path;
};
typedef NI TY27420[8];
struct  Ttrunk188052  {
Ttrunk188052* next;
NI key;
TY27420 bits;
};
struct  Tinstantiation191833  {
Tsym191843* sym;
Ttypeseq191845* concretetypes;
TY191933* usedby;
};
struct Tnodeseq191807 {
  TGenericSeq Sup;
  Tnode191813* data[SEQ_DECL_SIZE];
};
struct Ttypeseq191845 {
  TGenericSeq Sup;
  Ttype191849* data[SEQ_DECL_SIZE];
};
struct TY191944 {
  TGenericSeq Sup;
  Tinstantiation191833* data[SEQ_DECL_SIZE];
};
struct Tsymseq191815 {
  TGenericSeq Sup;
  Tsym191843* data[SEQ_DECL_SIZE];
};
struct Ttrunkseq188054 {
  TGenericSeq Sup;
  Ttrunk188052* data[SEQ_DECL_SIZE];
};
struct TY191933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(NU8, ispartof_399362)(Ttype191849* a, Ttype191849* b);
N_NIMCALL(void, initintset_188927)(Intset188056* Result);
N_NOINLINE(void, chckNil)(void* p);
N_NIMCALL(NU8, ispartofaux_399020)(Ttype191849* a, Ttype191849* b, Intset188056* marker);
N_NIMCALL(NIM_BOOL, containsorincl_188898)(Intset188056* s, NI key);
N_NIMCALL(NIM_BOOL, comparetypes_228047)(Ttype191849* x, Ttype191849* y, NU8 cmp, NU8 flags);
N_NIMCALL(NU8, ispartofaux_399029)(Tnode191813* n, Ttype191849* b, Intset188056* marker);
N_NIMCALL(NI, sonslen_194403)(Tnode191813* n);
N_NIMCALL(Tnode191813*, lastson_194431)(Tnode191813* n);
N_NIMCALL(void, internalerror_165234)(NimStringDesc* errmsg);
N_NIMCALL(void, internalerror_165215)(Tlineinfo163338 info, NimStringDesc* errmsg);
N_NIMCALL(Ttype191849*, lastson_194442)(Ttype191849* n);
N_NIMCALL(NI, sonslen_194351)(Ttype191849* n);
N_NIMCALL(NU8, ispartof_399375)(Tnode191813* a, Tnode191813* b);
static N_INLINE(Tnode191813*, HEX5BHEX5D_192246)(Tnode191813* n, NI i);
static N_INLINE(NI, len_192097)(Tnode191813* n);
N_NIMCALL(NIM_BOOL, isdeepconstexpr_220459)(Tnode191813* n);
N_NIMCALL(NIM_BOOL, samevalue_199324)(Tnode191813* a, Tnode191813* b);
STRING_LITERAL(TMP3183, "isPartOfAux(record case branch)", 31);
STRING_LITERAL(TMP3184, "isPartOfAux()", 13);

N_NIMCALL(NU8, ispartofaux_399029)(Tnode191813* n, Ttype191849* b, Intset188056* marker) {
	NU8 result;
{	result = 0;
	result = ((NU8) 0);
	switch ((*n).kind) {
	case ((NU8) 138):
	{
		{
			NI i_399048;
			NI HEX3Atmp_399238;
			NI LOC3;
			NI res_399241;
			i_399048 = 0;
			HEX3Atmp_399238 = 0;
			LOC3 = 0;
			LOC3 = sonslen_194403(n);
			HEX3Atmp_399238 = (NI)(LOC3 - ((NI) 1));
			res_399241 = ((NI) 0);
			{
				while (1) {
					if (!(res_399241 <= HEX3Atmp_399238)) goto LA5;
					i_399048 = res_399241;
					result = ispartofaux_399029((*n).kindU.S6.sons->data[i_399048], b, marker);
					{
						if (!(result == ((NU8) 2))) goto LA8;
						goto BeforeRet;
					}
					LA8: ;
					res_399241 += ((NI) 1);
				} LA5: ;
			}
		}
	}
	break;
	case ((NU8) 139):
	{
		result = ispartofaux_399029((*n).kindU.S6.sons->data[((NI) 0)], b, marker);
		{
			if (!(result == ((NU8) 2))) goto LA13;
			goto BeforeRet;
		}
		LA13: ;
		{
			NI i_399223;
			NI HEX3Atmp_399246;
			NI LOC16;
			NI res_399249;
			i_399223 = 0;
			HEX3Atmp_399246 = 0;
			LOC16 = 0;
			LOC16 = sonslen_194403(n);
			HEX3Atmp_399246 = (NI)(LOC16 - ((NI) 1));
			res_399249 = ((NI) 1);
			{
				while (1) {
					if (!(res_399249 <= HEX3Atmp_399246)) goto LA18;
					i_399223 = res_399249;
					switch ((*(*n).kindU.S6.sons->data[i_399223]).kind) {
					case ((NU8) 85):
					case ((NU8) 88):
					{
						Tnode191813* LOC20;
						LOC20 = 0;
						LOC20 = lastson_194431((*n).kindU.S6.sons->data[i_399223]);
						result = ispartofaux_399029(LOC20, b, marker);
						{
							if (!(result == ((NU8) 2))) goto LA23;
							goto BeforeRet;
						}
						LA23: ;
					}
					break;
					default:
					{
						internalerror_165234(((NimStringDesc*) &TMP3183));
					}
					break;
					}
					res_399249 += ((NI) 1);
				} LA18: ;
			}
		}
	}
	break;
	case ((NU8) 3):
	{
		result = ispartofaux_399020((*(*n).kindU.S4.sym).typ, b, marker);
	}
	break;
	default:
	{
		internalerror_165215((*n).info, ((NimStringDesc*) &TMP3184));
	}
	break;
	}
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NU8, ispartofaux_399020)(Ttype191849* a, Ttype191849* b, Intset188056* marker) {
	NU8 result;
{	result = 0;
	result = ((NU8) 0);
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (a == NIM_NIL);
		if (LOC3) goto LA4;
		LOC3 = (b == NIM_NIL);
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	{
		NIM_BOOL LOC9;
		LOC9 = 0;
		LOC9 = containsorincl_188898(marker, (*a).Sup.id);
		if (!LOC9) goto LA10;
		goto BeforeRet;
	}
	LA10: ;
	{
		NIM_BOOL LOC14;
		LOC14 = 0;
		LOC14 = comparetypes_228047(a, b, ((NU8) 1), 0);
		if (!LOC14) goto LA15;
		result = ((NU8) 2);
		goto BeforeRet;
	}
	LA15: ;
	switch ((*a).kind) {
	case ((NU8) 17):
	{
		result = ispartofaux_399020((*a).sons->data[((NI) 0)], b, marker);
		{
			if (!(result == ((NU8) 0))) goto LA20;
			result = ispartofaux_399029((*a).n, b, marker);
		}
		LA20: ;
	}
	break;
	case ((NU8) 11):
	case ((NU8) 13):
	{
		Ttype191849* LOC23;
		LOC23 = 0;
		LOC23 = lastson_194442(a);
		result = ispartofaux_399020(LOC23, b, marker);
	}
	break;
	case ((NU8) 16):
	case ((NU8) 4):
	case ((NU8) 19):
	case ((NU8) 18):
	{
		{
			NI i_399329;
			NI HEX3Atmp_399340;
			NI LOC26;
			NI res_399343;
			i_399329 = 0;
			HEX3Atmp_399340 = 0;
			LOC26 = 0;
			LOC26 = sonslen_194351(a);
			HEX3Atmp_399340 = (NI)(LOC26 - ((NI) 1));
			res_399343 = ((NI) 0);
			{
				while (1) {
					if (!(res_399343 <= HEX3Atmp_399340)) goto LA28;
					i_399329 = res_399343;
					result = ispartofaux_399020((*a).sons->data[i_399329], b, marker);
					{
						if (!(result == ((NU8) 2))) goto LA31;
						goto BeforeRet;
					}
					LA31: ;
					res_399343 += ((NI) 1);
				} LA28: ;
			}
		}
	}
	break;
	default:
	{
	}
	break;
	}
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NU8, ispartof_399362)(Ttype191849* a, Ttype191849* b) {
	NU8 result;
	Intset188056 marker;
	result = 0;
	memset((void*)(&marker), 0, sizeof(marker));
	chckNil((void*)(&marker));
	memset((void*)(&marker), 0, sizeof(marker));
	initintset_188927((&marker));
	result = ispartofaux_399020(b, a, (&marker));
	return result;
}

static N_INLINE(Tnode191813*, HEX5BHEX5D_192246)(Tnode191813* n, NI i) {
	Tnode191813* result;
	result = 0;
	result = (*n).kindU.S6.sons->data[i];
	return result;
}

static N_INLINE(NI, len_192097)(Tnode191813* n) {
	NI result;
	result = 0;
	{
		if (!(*n).kindU.S6.sons == 0) goto LA3;
		result = ((NI) 0);
	}
	goto LA1;
	LA3: ;
	{
		result = ((*n).kindU.S6.sons ? (*n).kindU.S6.sons->Sup.len : 0);
	}
	LA1: ;
	return result;
}

N_NIMCALL(NU8, ispartof_399375)(Tnode191813* a, Tnode191813* b) {
	NU8 result;
	result = 0;
	{
		if (!((*a).kind == (*b).kind)) goto LA3;
		switch ((*a).kind) {
		case ((NU8) 3):
		{
			{
				if (!((*(*a).kindU.S4.sym).Sup.id == (*(*b).kindU.S4.sym).Sup.id)) goto LA8;
				result = ((NU8) 2);
			}
			goto LA6;
			LA8: ;
			{
				NIM_BOOL LOC11;
				LOC11 = 0;
				LOC11 = ((4384 &(1<<(((*(*a).kindU.S4.sym).kind)&31)))!=0);
				if (LOC11) goto LA12;
				LOC11 = ((4384 &(1<<(((*(*b).kindU.S4.sym).kind)&31)))!=0);
				LA12: ;
				if (!LOC11) goto LA13;
				result = ((NU8) 0);
			}
			goto LA6;
			LA13: ;
			{
				{
					NU8 LOC18;
					LOC18 = 0;
					LOC18 = ispartof_399362((*(*a).kindU.S4.sym).typ, (*(*b).kindU.S4.sym).typ);
					if (!!((LOC18 == ((NU8) 0)))) goto LA19;
					result = ((NU8) 1);
				}
				LA19: ;
			}
			LA6: ;
		}
		break;
		case ((NU8) 42):
		{
			Tnode191813* LOC22;
			Tnode191813* LOC23;
			LOC22 = 0;
			LOC22 = HEX5BHEX5D_192246(a, ((NI) 0));
			LOC23 = 0;
			LOC23 = HEX5BHEX5D_192246(b, ((NI) 0));
			result = ispartof_399375(LOC22, LOC23);
			{
				NIM_BOOL LOC26;
				NI LOC27;
				NI LOC29;
				LOC26 = 0;
				LOC27 = 0;
				LOC27 = len_192097(a);
				LOC26 = (((NI) 2) <= LOC27);
				if (!(LOC26)) goto LA28;
				LOC29 = 0;
				LOC29 = len_192097(b);
				LOC26 = (((NI) 2) <= LOC29);
				LA28: ;
				if (!LOC26) goto LA30;
				{
					NIM_BOOL LOC34;
					NIM_BOOL LOC35;
					Tnode191813* LOC37;
					Tnode191813* LOC39;
					Tnode191813* x;
					Tnode191813* y;
					LOC34 = 0;
					LOC35 = 0;
					LOC35 = (result == ((NU8) 2));
					if (!(LOC35)) goto LA36;
					LOC37 = 0;
					LOC37 = HEX5BHEX5D_192246(a, ((NI) 1));
					LOC35 = isdeepconstexpr_220459(LOC37);
					LA36: ;
					LOC34 = LOC35;
					if (!(LOC34)) goto LA38;
					LOC39 = 0;
					LOC39 = HEX5BHEX5D_192246(b, ((NI) 1));
					LOC34 = isdeepconstexpr_220459(LOC39);
					LA38: ;
					if (!LOC34) goto LA40;
					{
						Tnode191813* LOC44;
						Tnode191813* LOC47;
						LOC44 = 0;
						LOC44 = HEX5BHEX5D_192246(a, ((NI) 1));
						if (!((*LOC44).kind == ((NU8) 58))) goto LA45;
						LOC47 = 0;
						LOC47 = HEX5BHEX5D_192246(a, ((NI) 1));
						x = HEX5BHEX5D_192246(LOC47, ((NI) 1));
					}
					goto LA42;
					LA45: ;
					{
						x = HEX5BHEX5D_192246(a, ((NI) 1));
					}
					LA42: ;
					{
						Tnode191813* LOC51;
						Tnode191813* LOC54;
						LOC51 = 0;
						LOC51 = HEX5BHEX5D_192246(b, ((NI) 1));
						if (!((*LOC51).kind == ((NU8) 58))) goto LA52;
						LOC54 = 0;
						LOC54 = HEX5BHEX5D_192246(b, ((NI) 1));
						y = HEX5BHEX5D_192246(LOC54, ((NI) 1));
					}
					goto LA49;
					LA52: ;
					{
						y = HEX5BHEX5D_192246(b, ((NI) 1));
					}
					LA49: ;
					{
						NIM_BOOL LOC58;
						LOC58 = 0;
						LOC58 = samevalue_199324(x, y);
						if (!LOC58) goto LA59;
						result = ((NU8) 2);
					}
					goto LA56;
					LA59: ;
					{
						result = ((NU8) 0);
					}
					LA56: ;
				}
				LA40: ;
			}
			goto LA24;
			LA30: ;
			{
				{
					if (!!((result == ((NU8) 2)))) goto LA65;
					{
						NU8 LOC69;
						LOC69 = 0;
						LOC69 = ispartof_399362((*a).typ, (*b).typ);
						if (!!((LOC69 == ((NU8) 0)))) goto LA70;
						result = ((NU8) 1);
					}
					LA70: ;
				}
				LA65: ;
			}
			LA24: ;
		}
		break;
		case ((NU8) 45):
		{
			Tnode191813* LOC73;
			Tnode191813* LOC74;
			LOC73 = 0;
			LOC73 = HEX5BHEX5D_192246(a, ((NI) 0));
			LOC74 = 0;
			LOC74 = HEX5BHEX5D_192246(b, ((NI) 0));
			result = ispartof_399375(LOC73, LOC74);
			{
				if (!!((result == ((NU8) 0)))) goto LA77;
				{
					Tnode191813* LOC81;
					Tnode191813* LOC82;
					LOC81 = 0;
					LOC81 = HEX5BHEX5D_192246(a, ((NI) 1));
					LOC82 = 0;
					LOC82 = HEX5BHEX5D_192246(b, ((NI) 1));
					if (!!(((*(*LOC81).kindU.S4.sym).Sup.id == (*(*LOC82).kindU.S4.sym).Sup.id))) goto LA83;
					result = ((NU8) 0);
				}
				LA83: ;
			}
			LA77: ;
		}
		break;
		case ((NU8) 65):
		case ((NU8) 47):
		{
			Tnode191813* LOC86;
			Tnode191813* LOC87;
			LOC86 = 0;
			LOC86 = HEX5BHEX5D_192246(a, ((NI) 0));
			LOC87 = 0;
			LOC87 = HEX5BHEX5D_192246(b, ((NI) 0));
			result = ispartof_399375(LOC86, LOC87);
			{
				if (!!((result == ((NU8) 2)))) goto LA90;
				{
					NU8 LOC94;
					LOC94 = 0;
					LOC94 = ispartof_399362((*a).typ, (*b).typ);
					if (!!((LOC94 == ((NU8) 0)))) goto LA95;
					result = ((NU8) 1);
				}
				LA95: ;
			}
			LA90: ;
		}
		break;
		case ((NU8) 58):
		case ((NU8) 59):
		case ((NU8) 60):
		{
			Tnode191813* LOC98;
			Tnode191813* LOC99;
			LOC98 = 0;
			LOC98 = HEX5BHEX5D_192246(a, ((NI) 1));
			LOC99 = 0;
			LOC99 = HEX5BHEX5D_192246(b, ((NI) 1));
			result = ispartof_399375(LOC98, LOC99);
		}
		break;
		case ((NU8) 67):
		case ((NU8) 66):
		case ((NU8) 46):
		{
			Tnode191813* LOC101;
			Tnode191813* LOC102;
			LOC101 = 0;
			LOC101 = HEX5BHEX5D_192246(a, ((NI) 0));
			LOC102 = 0;
			LOC102 = HEX5BHEX5D_192246(b, ((NI) 0));
			result = ispartof_399375(LOC101, LOC102);
		}
		break;
		default:
		{
		}
		break;
		}
	}
	goto LA1;
	LA3: ;
	{
		switch ((*b).kind) {
		case ((NU8) 45):
		case ((NU8) 42):
		case ((NU8) 67):
		case ((NU8) 66):
		case ((NU8) 46):
		{
			Tnode191813* LOC106;
			LOC106 = 0;
			LOC106 = HEX5BHEX5D_192246(b, ((NI) 0));
			result = ispartof_399375(a, LOC106);
		}
		break;
		case ((NU8) 65):
		case ((NU8) 47):
		{
			{
				NU8 LOC110;
				Tnode191813* LOC113;
				LOC110 = 0;
				LOC110 = ispartof_399362((*a).typ, (*b).typ);
				if (!!((LOC110 == ((NU8) 0)))) goto LA111;
				LOC113 = 0;
				LOC113 = HEX5BHEX5D_192246(b, ((NI) 0));
				result = ispartof_399375(a, LOC113);
				{
					if (!(result == ((NU8) 0))) goto LA116;
					result = ((NU8) 1);
				}
				LA116: ;
			}
			LA111: ;
		}
		break;
		case ((NU8) 58):
		case ((NU8) 59):
		case ((NU8) 60):
		{
			Tnode191813* LOC119;
			LOC119 = 0;
			LOC119 = HEX5BHEX5D_192246(b, ((NI) 1));
			result = ispartof_399375(a, LOC119);
		}
		break;
		case ((NU8) 3):
		{
			switch ((*a).kind) {
			case ((NU8) 45):
			case ((NU8) 42):
			case ((NU8) 67):
			case ((NU8) 66):
			case ((NU8) 46):
			{
				Tnode191813* LOC122;
				LOC122 = 0;
				LOC122 = HEX5BHEX5D_192246(a, ((NI) 0));
				result = ispartof_399375(LOC122, b);
			}
			break;
			case ((NU8) 58):
			case ((NU8) 59):
			case ((NU8) 60):
			{
				Tnode191813* LOC124;
				LOC124 = 0;
				LOC124 = HEX5BHEX5D_192246(a, ((NI) 1));
				result = ispartof_399375(LOC124, b);
			}
			break;
			case ((NU8) 65):
			case ((NU8) 47):
			{
				{
					NU8 LOC128;
					Tnode191813* LOC131;
					LOC128 = 0;
					LOC128 = ispartof_399362((*a).typ, (*b).typ);
					if (!!((LOC128 == ((NU8) 0)))) goto LA129;
					LOC131 = 0;
					LOC131 = HEX5BHEX5D_192246(a, ((NI) 0));
					result = ispartof_399375(LOC131, b);
					{
						if (!(result == ((NU8) 0))) goto LA134;
						result = ((NU8) 1);
					}
					LA134: ;
				}
				LA129: ;
			}
			break;
			default:
			{
			}
			break;
			}
		}
		break;
		default:
		{
		}
		break;
		}
	}
	LA1: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_aliasesInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_aliasesDatInit)(void) {
}

