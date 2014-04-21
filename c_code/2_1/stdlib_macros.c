/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef NU8 TY326043[20];
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef N_NIMCALL_PTR(void, TY2289) (void* p, NI op);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY2289 marker;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
N_NIMCALL(NimStringDesc*, HEX24_326997)(TY326043 x_327003);
N_NIMCALL(NimStringDesc*, collectiontostring_327007)(TY326043 x_327011, NimStringDesc* b_327013, NimStringDesc* e_327015);
N_NIMCALL(NIM_BOOL, eqident_328619)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
NIM_CONST TY326043 nnkliterals_326042 = {
0xE0, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
NIM_CONST TY326043 nnkcallkinds_326044 = {
0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
NIM_CONST TY326043 routinenodes_326969 = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00,
0x00, 0x80, 0x11, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
NIM_CONST TY326043 atomicnodes_326971 = {
0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
NIM_CONST TY326043 callnodes_326973 = {
0x00, 0x00, 0x00, 0xFC, 0x01, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
TNimType NTI325806; /* TNimrodNodeKind */
extern TFrame* frameptr_13038;

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_13038;
	frameptr_13038 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_13038 = (*frameptr_13038).prev;
}

N_NIMCALL(NIM_BOOL, eqident_328619)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	NI LOC1;
	nimfr("eqIdent", "macros.nim")
	result = 0;
	nimln(716, "macros.nim");
	nimln(716, "macros.nim");
	nimln(716, "macros.nim");
	LOC1 = 0;
	LOC1 = nsuCmpIgnoreStyle(a, b);
	result = (LOC1 == 0);
	popFrame();
	return result;
}
N_NOINLINE(void, stdlibmacrosInit)(void) {
	nimfr("macros", "macros.nim")
	popFrame();
}

N_NOINLINE(void, stdlibmacrosDatInit)(void) {
static TNimNode* TMP4637[153];
NI TMP4639;
static char* NIM_CONST TMP4638[153] = {
"nnkNone", 
"nnkEmpty", 
"nnkIdent", 
"nnkSym", 
"nnkType", 
"nnkCharLit", 
"nnkIntLit", 
"nnkInt8Lit", 
"nnkInt16Lit", 
"nnkInt32Lit", 
"nnkInt64Lit", 
"nnkUIntLit", 
"nnkUInt8Lit", 
"nnkUInt16Lit", 
"nnkUInt32Lit", 
"nnkUInt64Lit", 
"nnkFloatLit", 
"nnkFloat32Lit", 
"nnkFloat64Lit", 
"nnkFloat128Lit", 
"nnkStrLit", 
"nnkRStrLit", 
"nnkTripleStrLit", 
"nnkNilLit", 
"nnkMetaNode", 
"nnkDotCall", 
"nnkCommand", 
"nnkCall", 
"nnkCallStrLit", 
"nnkInfix", 
"nnkPrefix", 
"nnkPostfix", 
"nnkHiddenCallConv", 
"nnkExprEqExpr", 
"nnkExprColonExpr", 
"nnkIdentDefs", 
"nnkVarTuple", 
"nnkPar", 
"nnkObjConstr", 
"nnkCurly", 
"nnkCurlyExpr", 
"nnkBracket", 
"nnkBracketExpr", 
"nnkPragmaExpr", 
"nnkRange", 
"nnkDotExpr", 
"nnkCheckedFieldExpr", 
"nnkDerefExpr", 
"nnkIfExpr", 
"nnkElifExpr", 
"nnkElseExpr", 
"nnkLambda", 
"nnkDo", 
"nnkAccQuoted", 
"nnkTableConstr", 
"nnkBind", 
"nnkClosedSymChoice", 
"nnkOpenSymChoice", 
"nnkHiddenStdConv", 
"nnkHiddenSubConv", 
"nnkConv", 
"nnkCast", 
"nnkStaticExpr", 
"nnkAddr", 
"nnkHiddenAddr", 
"nnkHiddenDeref", 
"nnkObjDownConv", 
"nnkObjUpConv", 
"nnkChckRangeF", 
"nnkChckRange64", 
"nnkChckRange", 
"nnkStringToCString", 
"nnkCStringToString", 
"nnkAsgn", 
"nnkFastAsgn", 
"nnkGenericParams", 
"nnkFormalParams", 
"nnkOfInherit", 
"nnkImportAs", 
"nnkProcDef", 
"nnkMethodDef", 
"nnkConverterDef", 
"nnkMacroDef", 
"nnkTemplateDef", 
"nnkIteratorDef", 
"nnkOfBranch", 
"nnkElifBranch", 
"nnkExceptBranch", 
"nnkElse", 
"nnkAsmStmt", 
"nnkPragma", 
"nnkPragmaBlock", 
"nnkIfStmt", 
"nnkWhenStmt", 
"nnkForStmt", 
"nnkParForStmt", 
"nnkWhileStmt", 
"nnkCaseStmt", 
"nnkTypeSection", 
"nnkVarSection", 
"nnkLetSection", 
"nnkConstSection", 
"nnkConstDef", 
"nnkTypeDef", 
"nnkYieldStmt", 
"nnkTryStmt", 
"nnkFinally", 
"nnkRaiseStmt", 
"nnkReturnStmt", 
"nnkBreakStmt", 
"nnkContinueStmt", 
"nnkBlockStmt", 
"nnkStaticStmt", 
"nnkDiscardStmt", 
"nnkStmtList", 
"nnkImportStmt", 
"nnkImportExceptStmt", 
"nnkExportStmt", 
"nnkExportExceptStmt", 
"nnkFromStmt", 
"nnkIncludeStmt", 
"nnkBindStmt", 
"nnkMixinStmt", 
"nnkUsingStmt", 
"nnkCommentStmt", 
"nnkStmtListExpr", 
"nnkBlockExpr", 
"nnkStmtListType", 
"nnkBlockType", 
"nnkWith", 
"nnkWithout", 
"nnkTypeOfExpr", 
"nnkObjectTy", 
"nnkTupleTy", 
"nnkTypeClassTy", 
"nnkStaticTy", 
"nnkRecList", 
"nnkRecCase", 
"nnkRecWhen", 
"nnkRefTy", 
"nnkPtrTy", 
"nnkVarTy", 
"nnkConstTy", 
"nnkMutableTy", 
"nnkDistinctTy", 
"nnkProcTy", 
"nnkIteratorTy", 
"nnkSharedTy", 
"nnkEnumTy", 
"nnkEnumFieldDef", 
"nnkArglist", 
"nnkPattern", 
"nnkReturnToken"};
static TNimNode TMP4635[154];
NTI325806.size = sizeof(NU8);
NTI325806.kind = 14;
NTI325806.base = 0;
NTI325806.flags = 3;
for (TMP4639 = 0; TMP4639 < 153; TMP4639++) {
TMP4635[TMP4639+0].kind = 1;
TMP4635[TMP4639+0].offset = TMP4639;
TMP4635[TMP4639+0].name = TMP4638[TMP4639];
TMP4637[TMP4639] = &TMP4635[TMP4639+0];
}
TMP4635[153].len = 153; TMP4635[153].kind = 2; TMP4635[153].sons = &TMP4637[0];
NTI325806.node = &TMP4635[153];
}
