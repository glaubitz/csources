/* Generated by Nim Compiler v0.17.2 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
#include <setjmp.h>
#undef LANGUAGE_C
#undef MIPSEB
#undef MIPSEL
#undef PPC
#undef R3000
#undef R4000
#undef i386
#undef linux
#undef mips
#undef near
#undef powerpc
#undef unix
typedef struct tyObject_TPassContext_qNsm39cWb35W2r5AAd9ch87g tyObject_TPassContext_qNsm39cWb35W2r5AAd9ch87g;
typedef struct tyObject_ModuleGraphcolonObjectType__RZI3hCs0FTPYx8StfC81qQ tyObject_ModuleGraphcolonObjectType__RZI3hCs0FTPYx8StfC81qQ;
typedef struct tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw;
typedef struct tyObject_IdentCachecolonObjectType__TzLHS09bRH9a0TYLs39cqcNaw tyObject_IdentCachecolonObjectType__TzLHS09bRH9a0TYLs39cqcNaw;
typedef struct tyObject_TGen_1n9c8bLkAy1k20AgnlhyBBw tyObject_TGen_1n9c8bLkAy1k20AgnlhyBBw;
typedef struct RootObj RootObj;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tyObject_TDocumentor_AoMzi1HUj6N6QwYiA5PvoQ tyObject_TDocumentor_AoMzi1HUj6N6QwYiA5PvoQ;
typedef struct tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g;
typedef struct tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w;
typedef struct tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ;
typedef struct tyObject_GcStack_7fytPA5bBsob6See21YMRA tyObject_GcStack_7fytPA5bBsob6See21YMRA;
typedef struct tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg;
typedef struct tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ;
typedef struct tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw;
typedef struct tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg;
typedef struct tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA;
typedef struct tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw;
typedef struct tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw;
typedef struct tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg;
typedef struct tyTuple_ujsjpB2O9cjj3uDHsXbnSzg tyTuple_ujsjpB2O9cjj3uDHsXbnSzg;
typedef struct tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg;
typedef struct tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ;
typedef struct tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_StringTableObj_DKRIdH9c9cKI7YpQb9c0wKlEw tyObject_StringTableObj_DKRIdH9c9cKI7YpQb9c0wKlEw;
typedef struct tyObject_TIdObj_raN9cHVgzmvaXisezY9aGg9cg tyObject_TIdObj_raN9cHVgzmvaXisezY9aGg9cg;
typedef struct tySequence_zuqP4Riz26Oi5fWgPYVEgA tySequence_zuqP4Riz26Oi5fWgPYVEgA;
typedef struct tySequence_DXS6mEo7PVUFJkirsQ9bNQA tySequence_DXS6mEo7PVUFJkirsQ9bNQA;
typedef struct tyObject_TStrTable_f07aOS3dr28kGa5wcE29aFA tyObject_TStrTable_f07aOS3dr28kGa5wcE29aFA;
typedef struct tySequence_sksVpmPRIkNR9axiwtD1Guw tySequence_sksVpmPRIkNR9axiwtD1Guw;
typedef struct tyObject_TType_LTUWCZolpovw9cWE3JBWSUw tyObject_TType_LTUWCZolpovw9cWE3JBWSUw;
typedef struct tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g;
typedef struct tyObject_TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw tyObject_TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw;
typedef struct tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw;
typedef struct tyObject_TLoc_EtHNvCB0bgfu9bFjzx9cb6aA tyObject_TLoc_EtHNvCB0bgfu9bFjzx9cb6aA;
typedef struct tyObject_RopeObj_HF4qJnb6xiOddgPmsxodtQ tyObject_RopeObj_HF4qJnb6xiOddgPmsxodtQ;
typedef struct tyObject_TLib_NBMxlJ6g3utqUlplqTTHkA tyObject_TLib_NBMxlJ6g3utqUlplqTTHkA;
typedef struct tySequence_YLg9aN9cjdxVYWdZ7YCb9batg tySequence_YLg9aN9cjdxVYWdZ7YCb9batg;
typedef struct tyObject_TFileInfo_UOayjckboTXG9aVx8iKOs9aQ tyObject_TFileInfo_UOayjckboTXG9aVx8iKOs9aQ;
typedef struct tySequence_LViedqhb8iWVoqgZs5LifA tySequence_LViedqhb8iWVoqgZs5LifA;
typedef struct tyObject_RstGenerator_bnsEnRKte9bKKfeTFpYaoSQ tyObject_RstGenerator_bnsEnRKte9bKKfeTFpYaoSQ;
typedef struct tySequence_b7kA8pLABz0wMAUNGYo6Wg tySequence_b7kA8pLABz0wMAUNGYo6Wg;
typedef struct tyObject_Table_zjMaDBasw1LnKbj11akpfw tyObject_Table_zjMaDBasw1LnKbj11akpfw;
typedef struct tySequence_pUxI6Ljo6IKKHXKOZkQ7Og tySequence_pUxI6Ljo6IKKHXKOZkQ7Og;
typedef struct tyObject_JsonNodeObj_df9bshXB7C9cTiWPIOtX3j1Q tyObject_JsonNodeObj_df9bshXB7C9cTiWPIOtX3j1Q;
typedef struct Exception Exception;
typedef struct TSafePoint TSafePoint;
typedef struct tyObject_IntSet_PQrmFm4BXFkFSVOUl1ojSg tyObject_IntSet_PQrmFm4BXFkFSVOUl1ojSg;
typedef struct tyObject_Trunk_ul49aWfv9aes8cutmeltT3gQ tyObject_Trunk_ul49aWfv9aes8cutmeltT3gQ;
typedef struct tySequence_9brg1xNurxcus33lU4IE1Dw tySequence_9brg1xNurxcus33lU4IE1Dw;
typedef struct tyObject_Table_tfmlwa8ktiw8woWAs5vhtQ tyObject_Table_tfmlwa8ktiw8woWAs5vhtQ;
typedef struct tySequence_kxu4GK0onha2t9bo86mdVAg tySequence_kxu4GK0onha2t9bo86mdVAg;
typedef struct tySequence_48JTohSgTy339bRxHzUD8KA tySequence_48JTohSgTy339bRxHzUD8KA;
typedef struct tyObject_ConfigRefcolonObjectType__LaK09ayL9alwKUad7rts0rTw tyObject_ConfigRefcolonObjectType__LaK09ayL9alwKUad7rts0rTw;
typedef struct tySequence_npTAlnSu9cyJr3PNURLEKhQ tySequence_npTAlnSu9cyJr3PNURLEKhQ;
typedef struct tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w;
typedef struct tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ;
typedef struct tySequence_4eQHGndY6XBYpFOH09apV8Q tySequence_4eQHGndY6XBYpFOH09apV8Q;
typedef struct tyObject_TInstantiation_5LqgVn6Tq9ainQRK7TQAQxA tyObject_TInstantiation_5LqgVn6Tq9ainQRK7TQAQxA;
typedef struct tySequence_iGkpo9aKQdr3NWelKC4cnJA tySequence_iGkpo9aKQdr3NWelKC4cnJA;
typedef struct tySequence_ehmV9bTklH2Gt9cXHV9c0HLeQ tySequence_ehmV9bTklH2Gt9cXHV9c0HLeQ;
typedef struct tyObject_TocEntry_z7kal23LlR1mL50YJIPMCw tyObject_TocEntry_z7kal23LlR1mL50YJIPMCw;
typedef struct tyObject_RstNode_CjRS2xrmuD58kdGedE3yyg tyObject_RstNode_CjRS2xrmuD58kdGedE3yyg;
typedef struct tyTuple_sr3s7uVHpu9cEbbDnCSg8yQ tyTuple_sr3s7uVHpu9cEbbDnCSg8yQ;
typedef struct tyObject_OrderedTable_AF39bJ7XDr6gpANuGpxkHrw tyObject_OrderedTable_AF39bJ7XDr6gpANuGpxkHrw;
typedef struct tySequence_MlAD6nAPq9bHKla9cWiIZP0g tySequence_MlAD6nAPq9bHKla9cWiIZP0g;
typedef struct tySequence_oLpBKXzW3hF9aCVMo5EymfQ tySequence_oLpBKXzW3hF9aCVMo5EymfQ;
typedef struct tyTuple_xDU9bZmv1ZbZkJDaATBekIQ tyTuple_xDU9bZmv1ZbZkJDaATBekIQ;
typedef struct tyObject_HashSet_pOhUohTPuRItuGmDY0Ddzg tyObject_HashSet_pOhUohTPuRItuGmDY0Ddzg;
typedef struct tySequence_4eRCaZmrYLLw2k30GPTiMw tySequence_4eRCaZmrYLLw2k30GPTiMw;
typedef struct tyTuple_c3iwyH3aQEvxlw6WDIN9c0g tyTuple_c3iwyH3aQEvxlw6WDIN9c0g;
typedef struct tyTuple_UV3llMMYFckfui8YMBuUZA tyTuple_UV3llMMYFckfui8YMBuUZA;
typedef struct tyTuple_a09bGTAl9ceOKTAytYdkbyKg tyTuple_a09bGTAl9ceOKTAytYdkbyKg;
typedef struct tySequence_sawZST1Esj3o7EY9ayWwGPw tySequence_sawZST1Esj3o7EY9ayWwGPw;
typedef struct tyTuple_awOivLjlO76sGdHY7nQUjQ tyTuple_awOivLjlO76sGdHY7nQUjQ;
typedef struct tyTuple_QeWl6B6ffS4pU6WWrtcrDw tyTuple_QeWl6B6ffS4pU6WWrtcrDw;
typedef NU8 tyEnum_TNimKind_jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 tySet_tyEnum_TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ;
typedef N_NIMCALL_PTR(void, tyProc_ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, tyProc_WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct TNimType {
NI size;
tyEnum_TNimKind_jIBKr1ejBgsfM33Kxw4j7A kind;
tySet_tyEnum_TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ flags;
TNimType* base;
TNimNode* node;
void* finalizer;
tyProc_ojoeKfW4VYIm36I9cpDTQIg marker;
tyProc_WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
struct RootObj {
TNimType* m_type;
};
struct tyObject_TPassContext_qNsm39cWb35W2r5AAd9ch87g {
  RootObj Sup;
NIM_BOOL fromCache;
};
struct tyObject_TGen_1n9c8bLkAy1k20AgnlhyBBw {
  tyObject_TPassContext_qNsm39cWb35W2r5AAd9ch87g Sup;
tyObject_TDocumentor_AoMzi1HUj6N6QwYiA5PvoQ* doc;
tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw* module;
};
typedef NU8 tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g {
NI refcount;
TNimType* typ;
};
struct tyObject_GcStack_7fytPA5bBsob6See21YMRA {
void* bottom;
};
struct tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w {
NI len;
NI cap;
tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g** d;
};
typedef tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* tyArray_SiRwrEKZdLgxqz9a9aoVBglg[512];
typedef tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw* tyArray_lh2A89ahMmYg9bCmpVaplLbA[256];
struct tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA {
tyArray_lh2A89ahMmYg9bCmpVaplLbA data;
};
typedef tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* tyArray_0aOLqZchNi8nWtMTi8ND8w[2];
struct tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw {
tyArray_0aOLqZchNi8nWtMTi8ND8w link;
NI key;
NI upperBound;
NI level;
};
struct tyTuple_ujsjpB2O9cjj3uDHsXbnSzg {
tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* Field0;
NI Field1;
};
typedef tyTuple_ujsjpB2O9cjj3uDHsXbnSzg tyArray_LzOv2eCDGiceMKQstCLmhw[30];
struct tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg {
NI len;
tyArray_LzOv2eCDGiceMKQstCLmhw chunks;
tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg* next;
};
struct tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg {
NI minLargeObj;
NI maxLargeObj;
tyArray_SiRwrEKZdLgxqz9a9aoVBglg freeSmallChunks;
tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw* llmem;
NI currMem;
NI maxMem;
NI freeMem;
NI lastSize;
tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* freeChunksList;
tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA chunkStarts;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* root;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* deleted;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* last;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* freeAvlNodes;
NIM_BOOL locked;
NIM_BOOL blockChunkSizeIncrease;
NI nextChunkSize;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw bottomData;
tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg heapLinks;
};
struct tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg {
NI stackScans;
NI cycleCollections;
NI maxThreshold;
NI maxStackSize;
NI maxStackCells;
NI cycleTableSize;
NI64 maxPause;
};
struct tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ {
NI counter;
NI max;
tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg* head;
tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg** data;
};
struct tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ {
tyObject_GcStack_7fytPA5bBsob6See21YMRA stack;
NI cycleThreshold;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w zct;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w decStack;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w tempStack;
NI recGcLock;
tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg region;
tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg stat;
tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ marked;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w additionalRoots;
};
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct tyObject_TIdObj_raN9cHVgzmvaXisezY9aGg9cg {
  RootObj Sup;
NI id;
};
typedef NU8 tyEnum_TSymKind_cNCW9acsSznmEccl1fgQwkw;
struct tyObject_TStrTable_f07aOS3dr28kGa5wcE29aFA {
NI counter;
tySequence_sksVpmPRIkNR9axiwtD1Guw* data;
};
typedef NU16 tyEnum_TMagic_shZhZOdbVC5nnFvcXQAImg;
struct tyObject_TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw {
NI16 line;
NI16 col;
NI32 fileIndex;
};
typedef NU64 tySet_tyEnum_TSymFlag_K9ay6LWMat9bUiT9bIbMxpDHw;
typedef NU32 tySet_tyEnum_TOption_WspMeQySXNP2XoTWR5MTgg;
typedef NU8 tyEnum_TLocKind_O7PRFZKuiBBWbku09cayVBg;
typedef NU8 tyEnum_TStorageLoc_JK9cKMX3XnqHaUky9b6gkGEw;
typedef NU16 tySet_tyEnum_TLocFlag_o2bqJgR4ceIupnUSpxiudA;
struct tyObject_TLoc_EtHNvCB0bgfu9bFjzx9cb6aA {
tyEnum_TLocKind_O7PRFZKuiBBWbku09cayVBg k;
tyEnum_TStorageLoc_JK9cKMX3XnqHaUky9b6gkGEw s;
tySet_tyEnum_TLocFlag_o2bqJgR4ceIupnUSpxiudA flags;
tyObject_TType_LTUWCZolpovw9cWE3JBWSUw* t;
tyObject_RopeObj_HF4qJnb6xiOddgPmsxodtQ* r;
};
struct tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw {
  tyObject_TIdObj_raN9cHVgzmvaXisezY9aGg9cg Sup;
tyEnum_TSymKind_cNCW9acsSznmEccl1fgQwkw kind;
union{
struct {tySequence_zuqP4Riz26Oi5fWgPYVEgA* typeInstCache;
} S1;
struct {tySequence_DXS6mEo7PVUFJkirsQ9bNQA* procInstCache;
tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw* gcUnsafetyReason;
} S2;
struct {tySequence_DXS6mEo7PVUFJkirsQ9bNQA* usedGenerics;
tyObject_TStrTable_f07aOS3dr28kGa5wcE29aFA tab;
} S3;
struct {tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw* guard;
NI bitsize;
} S4;
} kindU;
tyEnum_TMagic_shZhZOdbVC5nnFvcXQAImg magic;
tyObject_TType_LTUWCZolpovw9cWE3JBWSUw* typ;
tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g* name;
tyObject_TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw info;
tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw* owner;
tySet_tyEnum_TSymFlag_K9ay6LWMat9bUiT9bIbMxpDHw flags;
tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* ast;
tySet_tyEnum_TOption_WspMeQySXNP2XoTWR5MTgg options;
NI position;
NI offset;
tyObject_TLoc_EtHNvCB0bgfu9bFjzx9cb6aA loc;
tyObject_TLib_NBMxlJ6g3utqUlplqTTHkA* annex;
tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* constraint;
};
struct tyObject_TFileInfo_UOayjckboTXG9aVx8iKOs9aQ {
NimStringDesc* fullPath;
NimStringDesc* projPath;
NimStringDesc* shortName;
tyObject_RopeObj_HF4qJnb6xiOddgPmsxodtQ* quotedName;
tyObject_RopeObj_HF4qJnb6xiOddgPmsxodtQ* quotedFullName;
tySequence_LViedqhb8iWVoqgZs5LifA* lines;
NimStringDesc* dirtyfile;
};
typedef NU8 tyEnum_OutputTarget_lDlBg9cTod71s9abpUj82lsw;
typedef NU8 tySet_tyEnum_RstParseOption_fiZmsylYkyh6nEciRZcPsw;
typedef N_NIMCALL_PTR(NimStringDesc*, tyProc_zTTG1BW0RKgQJxZCxtMtzw) (NimStringDesc* filename);
typedef NU8 tyEnum_MsgKind_iviJnHlj9acPYlnNRbd9bhkQ;
typedef N_NIMCALL_PTR(void, tyProc_tyrxeYd2fCCwD9a8BTYcYJA) (NimStringDesc* filename, NI line, NI col, tyEnum_MsgKind_iviJnHlj9acPYlnNRbd9bhkQ msgKind, NimStringDesc* arg);
typedef NimStringDesc* tyArray_C9cQfUOxfT2Mk6yT19cPu9aIA[5];
struct tyObject_Table_zjMaDBasw1LnKbj11akpfw {
tySequence_pUxI6Ljo6IKKHXKOZkQ7Og* data;
NI counter;
};
struct tyObject_RstGenerator_bnsEnRKte9bKKfeTFpYaoSQ {
  RootObj Sup;
tyEnum_OutputTarget_lDlBg9cTod71s9abpUj82lsw target;
tyObject_StringTableObj_DKRIdH9c9cKI7YpQb9c0wKlEw* config;
NI splitAfter;
NI listingCounter;
tySequence_b7kA8pLABz0wMAUNGYo6Wg* tocPart;
NIM_BOOL hasToc;
NimStringDesc* theIndex;
tySet_tyEnum_RstParseOption_fiZmsylYkyh6nEciRZcPsw options;
tyProc_zTTG1BW0RKgQJxZCxtMtzw findFile;
tyProc_tyrxeYd2fCCwD9a8BTYcYJA msgHandler;
NimStringDesc* filename;
tyArray_C9cQfUOxfT2Mk6yT19cPu9aIA meta;
NimStringDesc* currentSection;
tyObject_Table_zjMaDBasw1LnKbj11akpfw seenIndexTerms;
};
typedef tyObject_RopeObj_HF4qJnb6xiOddgPmsxodtQ* tyArray_YAK3AUlia0Xx2JCfYWAUzg[25];
struct tyObject_TDocumentor_AoMzi1HUj6N6QwYiA5PvoQ {
  tyObject_RstGenerator_bnsEnRKte9bKKfeTFpYaoSQ Sup;
tyObject_RopeObj_HF4qJnb6xiOddgPmsxodtQ* modDesc;
NI id;
tyArray_YAK3AUlia0Xx2JCfYWAUzg toc;
tyArray_YAK3AUlia0Xx2JCfYWAUzg section;
NimStringDesc* indexValFilename;
NimStringDesc* analytics;
tyObject_StringTableObj_DKRIdH9c9cKI7YpQb9c0wKlEw* seenSymbols;
tyObject_JsonNodeObj_df9bshXB7C9cTiWPIOtX3j1Q* jArray;
tyObject_TStrTable_f07aOS3dr28kGa5wcE29aFA types;
NIM_BOOL isPureRst;
};
typedef NU8 tyEnum_TSymFlag_K9ay6LWMat9bUiT9bIbMxpDHw;
struct Exception {
  RootObj Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
NimStringDesc* trace;
Exception* up;
};
typedef struct {
N_NIMCALL_PTR(NIM_BOOL, ClP_0) (Exception* e, void* ClE_0);
void* ClE_0;
} tyProc_KeeAOYBd84Ofsw6Y7LizaQ;
struct TSafePoint {
TSafePoint* prev;
NI status;
jmp_buf context;
NIM_BOOL hasRaiseAction;
tyProc_KeeAOYBd84Ofsw6Y7LizaQ raiseAction;
};
typedef NI tyArray_emiAJ8okywrJw7ZHLzlXbQ[34];
struct tyObject_IntSet_PQrmFm4BXFkFSVOUl1ojSg {
NI elems;
NI counter;
NI max;
tyObject_Trunk_ul49aWfv9aes8cutmeltT3gQ* head;
tySequence_9brg1xNurxcus33lU4IE1Dw* data;
tyArray_emiAJ8okywrJw7ZHLzlXbQ a;
};
struct tyObject_Table_tfmlwa8ktiw8woWAs5vhtQ {
tySequence_kxu4GK0onha2t9bo86mdVAg* data;
NI counter;
};
typedef struct {
N_NIMCALL_PTR(NIM_BOOL, ClP_0) (void* ClE_0);
void* ClE_0;
} tyProc_xdLb0cyzx3FuM6Q4NnRTpQ;
struct tyObject_ModuleGraphcolonObjectType__RZI3hCs0FTPYx8StfC81qQ {
tySequence_sksVpmPRIkNR9axiwtD1Guw* modules;
tyObject_TStrTable_f07aOS3dr28kGa5wcE29aFA packageSyms;
tyObject_IntSet_PQrmFm4BXFkFSVOUl1ojSg deps;
NIM_BOOL suggestMode;
NIM_BOOL invalidTransitiveClosure;
tyObject_Table_tfmlwa8ktiw8woWAs5vhtQ inclToMod;
tySequence_48JTohSgTy339bRxHzUD8KA* importStack;
RootObj* backend;
tyObject_ConfigRefcolonObjectType__LaK09ayL9alwKUad7rts0rTw* config;
tyProc_xdLb0cyzx3FuM6Q4NnRTpQ doStopCompile;
tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw* usageSym;
tySequence_sksVpmPRIkNR9axiwtD1Guw* owners;
tySequence_npTAlnSu9cyJr3PNURLEKhQ* methods;
};
typedef tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g* tyArray_CBfZt49asUfAsBVM7a3Rc9cw[8192];
struct tyObject_IdentCachecolonObjectType__TzLHS09bRH9a0TYLs39cqcNaw {
tyArray_CBfZt49asUfAsBVM7a3Rc9cw buckets;
NI wordCounter;
tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g* idAnon;
tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g* idDelegator;
tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g* emptyIdent;
};
struct tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w {
NI prevSize;
NI size;
};
struct tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ {
  tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w Sup;
tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* next;
tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* prev;
tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ* freeList;
NI free;
NI acc;
NF data;
};
struct tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw {
NI size;
NI acc;
tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw* next;
};
struct tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg {
  tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w Sup;
tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* next;
tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* prev;
NF data;
};
typedef NI tyArray_9a8QARi5WsUggNU9bom7kzTQ[8];
struct tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw {
tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw* next;
NI key;
tyArray_9a8QARi5WsUggNU9bom7kzTQ bits;
};
struct tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg {
tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg* next;
NI key;
tyArray_9a8QARi5WsUggNU9bom7kzTQ bits;
};
typedef NU8 tyEnum_StringTableMode_G9c4wVDFIzf0xHmQvxso9a9cQ;
struct tyObject_StringTableObj_DKRIdH9c9cKI7YpQb9c0wKlEw {
  RootObj Sup;
NI counter;
tySequence_4eQHGndY6XBYpFOH09apV8Q* data;
tyEnum_StringTableMode_G9c4wVDFIzf0xHmQvxso9a9cQ mode;
};
typedef NU8 tyEnum_TTypeKind_9a3YiReNVD0IJHWFKgXRe9ag;
typedef NU8 tyEnum_TCallingConvention_yjAJ8w0h1PBaSwSGJ3P7IA;
typedef NU64 tySet_tyEnum_TTypeFlag_x2m5g1NpbmDig4wLT3Ylhw;
struct tyObject_TType_LTUWCZolpovw9cWE3JBWSUw {
  tyObject_TIdObj_raN9cHVgzmvaXisezY9aGg9cg Sup;
tyEnum_TTypeKind_9a3YiReNVD0IJHWFKgXRe9ag kind;
tyEnum_TCallingConvention_yjAJ8w0h1PBaSwSGJ3P7IA callConv;
tySet_tyEnum_TTypeFlag_x2m5g1NpbmDig4wLT3Ylhw flags;
tySequence_zuqP4Riz26Oi5fWgPYVEgA* sons;
tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n;
tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw* owner;
tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw* sym;
tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw* destructor;
tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw* deepCopy;
tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw* assignment;
tySequence_iGkpo9aKQdr3NWelKC4cnJA* methods;
NI64 size;
NI16 align;
NI16 lockLevel;
tyObject_TLoc_EtHNvCB0bgfu9bFjzx9cb6aA loc;
tyObject_TType_LTUWCZolpovw9cWE3JBWSUw* typeInst;
};
struct tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g {
  tyObject_TIdObj_raN9cHVgzmvaXisezY9aGg9cg Sup;
NimStringDesc* s;
tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g* next;
NI h;
};
typedef NU32 tySet_tyEnum_TNodeFlag_jyh9acXHkhZANSSvPIY7ZLg;
typedef NU8 tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw;
struct tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw {
tyObject_TType_LTUWCZolpovw9cWE3JBWSUw* typ;
tyObject_TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw info;
tySet_tyEnum_TNodeFlag_jyh9acXHkhZANSSvPIY7ZLg flags;
tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw kind;
union{
struct {NI64 intVal;
} S1;
struct {NF floatVal;
} S2;
struct {NimStringDesc* strVal;
} S3;
struct {tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw* sym;
} S4;
struct {tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g* ident;
} S5;
struct {tySequence_ehmV9bTklH2Gt9cXHV9c0HLeQ* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
struct tyObject_RopeObj_HF4qJnb6xiOddgPmsxodtQ {
  RootObj Sup;
tyObject_RopeObj_HF4qJnb6xiOddgPmsxodtQ* left;
tyObject_RopeObj_HF4qJnb6xiOddgPmsxodtQ* right;
NI length;
NimStringDesc* data;
};
typedef NU8 tyEnum_TLibKind_9b8v60kso59bBaw9cp8B9a9apKQ;
struct tyObject_TLib_NBMxlJ6g3utqUlplqTTHkA {
tyEnum_TLibKind_9b8v60kso59bBaw9cp8B9a9apKQ kind;
NIM_BOOL generated;
NIM_BOOL isOverriden;
tyObject_RopeObj_HF4qJnb6xiOddgPmsxodtQ* name;
tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* path;
};
struct tyObject_TocEntry_z7kal23LlR1mL50YJIPMCw {
tyObject_RstNode_CjRS2xrmuD58kdGedE3yyg* n;
NimStringDesc* refname;
NimStringDesc* header;
};
struct tyTuple_sr3s7uVHpu9cEbbDnCSg8yQ {
NI Field0;
NimStringDesc* Field1;
NI Field2;
};
typedef NU8 tyEnum_JsonNodeKind_RUngo7nCHe6O8aBGIcrhtg;
struct tyObject_OrderedTable_AF39bJ7XDr6gpANuGpxkHrw {
tySequence_MlAD6nAPq9bHKla9cWiIZP0g* data;
NI counter;
NI first;
NI last;
};
struct tyObject_JsonNodeObj_df9bshXB7C9cTiWPIOtX3j1Q {
tyEnum_JsonNodeKind_RUngo7nCHe6O8aBGIcrhtg kind;
union{
struct {NimStringDesc* str;
} S1;
struct {NI64 num;
} S2;
struct {NF fnum;
} S3;
struct {NIM_BOOL bval;
} S4;
struct {tyObject_OrderedTable_AF39bJ7XDr6gpANuGpxkHrw fields;
} S6;
struct {tySequence_oLpBKXzW3hF9aCVMo5EymfQ* elems;
} S7;
} kindU;
};
struct tyObject_Trunk_ul49aWfv9aes8cutmeltT3gQ {
tyObject_Trunk_ul49aWfv9aes8cutmeltT3gQ* next;
NI key;
tyArray_9a8QARi5WsUggNU9bom7kzTQ bits;
};
struct tyTuple_xDU9bZmv1ZbZkJDaATBekIQ {
NI Field0;
NI32 Field1;
NI32 Field2;
};
struct tyObject_HashSet_pOhUohTPuRItuGmDY0Ddzg {
tySequence_4eRCaZmrYLLw2k30GPTiMw* data;
NI counter;
};
struct tyObject_ConfigRefcolonObjectType__LaK09ayL9alwKUad7rts0rTw {
tyObject_HashSet_pOhUohTPuRItuGmDY0Ddzg cppDefines;
NimStringDesc* headerFile;
};
struct tyTuple_c3iwyH3aQEvxlw6WDIN9c0g {
tySequence_sksVpmPRIkNR9axiwtD1Guw* Field0;
tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw* Field1;
};
struct tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ {
tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ* next;
NI zeroField;
};
struct tyTuple_UV3llMMYFckfui8YMBuUZA {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
struct tyObject_TInstantiation_5LqgVn6Tq9ainQRK7TQAQxA {
tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw* sym;
tySequence_zuqP4Riz26Oi5fWgPYVEgA* concreteTypes;
NI compilesId;
};
struct tyTuple_a09bGTAl9ceOKTAytYdkbyKg {
NI Field0;
tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw* Field1;
};
typedef NU8 tyEnum_RstNodeKind_Q1jM9a8f0MKlvbLZpipB3qg;
struct tyObject_RstNode_CjRS2xrmuD58kdGedE3yyg {
tyEnum_RstNodeKind_Q1jM9a8f0MKlvbLZpipB3qg kind;
NimStringDesc* text;
NI level;
tySequence_sawZST1Esj3o7EY9ayWwGPw* sons;
};
struct tyTuple_awOivLjlO76sGdHY7nQUjQ {
NI Field0;
NI Field1;
NimStringDesc* Field2;
tyObject_JsonNodeObj_df9bshXB7C9cTiWPIOtX3j1Q* Field3;
};
struct tyTuple_QeWl6B6ffS4pU6WWrtcrDw {
NI Field0;
NimStringDesc* Field1;
};
struct tySequence_YLg9aN9cjdxVYWdZ7YCb9batg {
  TGenericSeq Sup;
  tyObject_TFileInfo_UOayjckboTXG9aVx8iKOs9aQ data[SEQ_DECL_SIZE];
};
struct tySequence_zuqP4Riz26Oi5fWgPYVEgA {
  TGenericSeq Sup;
  tyObject_TType_LTUWCZolpovw9cWE3JBWSUw* data[SEQ_DECL_SIZE];
};
struct tySequence_DXS6mEo7PVUFJkirsQ9bNQA {
  TGenericSeq Sup;
  tyObject_TInstantiation_5LqgVn6Tq9ainQRK7TQAQxA* data[SEQ_DECL_SIZE];
};
struct tySequence_sksVpmPRIkNR9axiwtD1Guw {
  TGenericSeq Sup;
  tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw* data[SEQ_DECL_SIZE];
};
struct tySequence_LViedqhb8iWVoqgZs5LifA {
  TGenericSeq Sup;
  tyObject_RopeObj_HF4qJnb6xiOddgPmsxodtQ* data[SEQ_DECL_SIZE];
};
struct tySequence_b7kA8pLABz0wMAUNGYo6Wg {
  TGenericSeq Sup;
  tyObject_TocEntry_z7kal23LlR1mL50YJIPMCw data[SEQ_DECL_SIZE];
};
struct tySequence_pUxI6Ljo6IKKHXKOZkQ7Og {
  TGenericSeq Sup;
  tyTuple_sr3s7uVHpu9cEbbDnCSg8yQ data[SEQ_DECL_SIZE];
};
struct tySequence_9brg1xNurxcus33lU4IE1Dw {
  TGenericSeq Sup;
  tyObject_Trunk_ul49aWfv9aes8cutmeltT3gQ* data[SEQ_DECL_SIZE];
};
struct tySequence_kxu4GK0onha2t9bo86mdVAg {
  TGenericSeq Sup;
  tyTuple_xDU9bZmv1ZbZkJDaATBekIQ data[SEQ_DECL_SIZE];
};
struct tySequence_48JTohSgTy339bRxHzUD8KA {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct tySequence_npTAlnSu9cyJr3PNURLEKhQ {
  TGenericSeq Sup;
  tyTuple_c3iwyH3aQEvxlw6WDIN9c0g data[SEQ_DECL_SIZE];
};
struct tySequence_4eQHGndY6XBYpFOH09apV8Q {
  TGenericSeq Sup;
  tyTuple_UV3llMMYFckfui8YMBuUZA data[SEQ_DECL_SIZE];
};
struct tySequence_iGkpo9aKQdr3NWelKC4cnJA {
  TGenericSeq Sup;
  tyTuple_a09bGTAl9ceOKTAytYdkbyKg data[SEQ_DECL_SIZE];
};
struct tySequence_ehmV9bTklH2Gt9cXHV9c0HLeQ {
  TGenericSeq Sup;
  tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* data[SEQ_DECL_SIZE];
};
struct tySequence_MlAD6nAPq9bHKla9cWiIZP0g {
  TGenericSeq Sup;
  tyTuple_awOivLjlO76sGdHY7nQUjQ data[SEQ_DECL_SIZE];
};
struct tySequence_oLpBKXzW3hF9aCVMo5EymfQ {
  TGenericSeq Sup;
  tyObject_JsonNodeObj_df9bshXB7C9cTiWPIOtX3j1Q* data[SEQ_DECL_SIZE];
};
struct tySequence_4eRCaZmrYLLw2k30GPTiMw {
  TGenericSeq Sup;
  tyTuple_QeWl6B6ffS4pU6WWrtcrDw data[SEQ_DECL_SIZE];
};
struct tySequence_sawZST1Esj3o7EY9ayWwGPw {
  TGenericSeq Sup;
  tyObject_RstNode_CjRS2xrmuD58kdGedE3yyg* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
static N_NIMCALL(void, Marker_tyRef_AVGCMPDeV3LjhYUWMtIGNg)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr);
static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_NOINLINE(void, addZCT_fCDI7oO1NNVXXURtxSzsRw)(tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w* s, tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_NIMCALL(tyObject_TDocumentor_AoMzi1HUj6N6QwYiA5PvoQ*, newDocumentor_rSEpP0BL6scT9c33BSLRVKA)(NimStringDesc* filename, tyObject_StringTableObj_DKRIdH9c9cKI7YpQb9c0wKlEw* config);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incRef_9cAA5YuQAAC3MVbnGeV86swsystem)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(void, decRef_MV4BBk6J1qu70IbBxwEn4wsystem)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_NIMCALL(void, generateJson_9b0I15wtPowpEmmkrKBaI4w_3)(tyObject_TDocumentor_AoMzi1HUj6N6QwYiA5PvoQ* d, tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n);
N_NIMCALL(void, writeOutputJson_UPjOukO9a2qO3DBJCbtcQ1A_2)(tyObject_TDocumentor_AoMzi1HUj6N6QwYiA5PvoQ* d, NimStringDesc* filename, NimStringDesc* outExt, NIM_BOOL useWarning);
static N_INLINE(void, pushSafePoint)(TSafePoint* s);
N_NIMCALL(void, generateIndex_wjz2ZVW4SxHaKoMYPYCeKw)(tyObject_TDocumentor_AoMzi1HUj6N6QwYiA5PvoQ* d);
static N_INLINE(void, popSafePoint)(void);
N_NIMCALL(NIM_BOOL, isObj)(TNimType* obj, TNimType* subclass);
static N_INLINE(Exception*, getCurrentException)(void);
static N_INLINE(void, popCurrentException)(void);
N_NIMCALL(void, reraiseException)(void);
N_NIMCALL(void, generateDoc_9b0I15wtPowpEmmkrKBaI4w)(tyObject_TDocumentor_AoMzi1HUj6N6QwYiA5PvoQ* d, tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n);
N_NIMCALL(void, writeOutput_UPjOukO9a2qO3DBJCbtcQ1A)(tyObject_TDocumentor_AoMzi1HUj6N6QwYiA5PvoQ* d, NimStringDesc* filename, NimStringDesc* outExt, NIM_BOOL useWarning);
extern TNimType NTI_qNsm39cWb35W2r5AAd9ch87g_;
TNimType NTI_1n9c8bLkAy1k20AgnlhyBBw_;
extern TNimType NTI_cx9b0GT2NB8xz1hKV89ay5lQ_;
extern TNimType NTI_83n62yi1b9bgUtRR9axFWW9ag_;
TNimType NTI_AVGCMPDeV3LjhYUWMtIGNg_;
extern tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ gch_IcYaEuuWivYAS86vFMTS3Q;
extern tySequence_YLg9aN9cjdxVYWdZ7YCb9batg* fileInfos_0nMtuXd9csTLLtuDok8ckXw;
extern tyObject_StringTableObj_DKRIdH9c9cKI7YpQb9c0wKlEw* gConfigVars_0Vkej44DF5osh1Rc3US8qw;
extern NI gMainPackageId_9cwEOFAmQDogkWTNLtVENxw;
extern NIM_BOOL gWholeProject_MjauEmf9c7n25a6W6FpTptQ;
extern TSafePoint* excHandler_rqLlY5bs9atDw2OXYqJEn5g;
extern TNimType NTI_9czoZw3pzPyrBmb5zTHY1OQ_;
extern Exception* currException_9bVPeDJlYTi9bQApZpfH8wjg;
STRING_LITERAL(TM_87tQLGE73DKq5cz9cph1IqQ_3, "\?\?\?", 3);
STRING_LITERAL(TM_87tQLGE73DKq5cz9cph1IqQ_4, ".json", 5);
STRING_LITERAL(TM_87tQLGE73DKq5cz9cph1IqQ_6, "html", 4);
static N_NIMCALL(void, Marker_tyRef_AVGCMPDeV3LjhYUWMtIGNg)(void* p, NI op) {
	tyObject_TGen_1n9c8bLkAy1k20AgnlhyBBw* a;
	a = (tyObject_TGen_1n9c8bLkAy1k20AgnlhyBBw*)p;
	nimGCvisit((void*)(*a).doc, op);
	nimGCvisit((void*)(*a).module, op);
}

static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr) {
	tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* result;
	result = (tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
	result = ((tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g))))));
	return result;
}

static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	addZCT_fCDI7oO1NNVXXURtxSzsRw((&gch_IcYaEuuWivYAS86vFMTS3Q.zct), c);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c;
		if (!!((src == NIM_NIL))) goto LA3_;
		c = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem(src);
		(*c).refcount += ((NI) 8);
	}
	LA3_: ;
	{
		tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c_2;
		if (!!(((*dest) == NIM_NIL))) goto LA7_;
		c_2 = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem((*dest));
		{
			(*c_2).refcount -= ((NI) 8);
			if (!((NU64)((*c_2).refcount) < (NU64)(((NI) 8)))) goto LA11_;
			rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system(c_2);
		}
		LA11_: ;
	}
	LA7_: ;
	(*dest) = src;
}

static N_INLINE(void, incRef_9cAA5YuQAAC3MVbnGeV86swsystem)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	(*c).refcount = (NI)((NU64)((*c).refcount) + (NU64)(((NI) 8)));
}

static N_INLINE(void, decRef_MV4BBk6J1qu70IbBxwEn4wsystem)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3_;
		rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system(c);
	}
	LA3_: ;
}

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	{
		tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* T5_;
		if (!!((src == NIM_NIL))) goto LA3_;
		T5_ = (tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T5_ = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem(src);
		incRef_9cAA5YuQAAC3MVbnGeV86swsystem(T5_);
	}
	LA3_: ;
	{
		tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* T10_;
		if (!!(((*dest) == NIM_NIL))) goto LA8_;
		T10_ = (tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T10_ = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem((*dest));
		decRef_MV4BBk6J1qu70IbBxwEn4wsystem(T10_);
	}
	LA8_: ;
	(*dest) = src;
}

N_NIMCALL(tyObject_TPassContext_qNsm39cWb35W2r5AAd9ch87g*, myOpen_rpfo9abXCMEv9a9bRFmJZFMRw)(tyObject_ModuleGraphcolonObjectType__RZI3hCs0FTPYx8StfC81qQ* graph, tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw* module, tyObject_IdentCachecolonObjectType__TzLHS09bRH9a0TYLs39cqcNaw* cache) {
	tyObject_TPassContext_qNsm39cWb35W2r5AAd9ch87g* result;
	tyObject_TGen_1n9c8bLkAy1k20AgnlhyBBw* g;
	tyObject_TDocumentor_AoMzi1HUj6N6QwYiA5PvoQ* d;
	NimStringDesc* T1_;
	result = (tyObject_TPassContext_qNsm39cWb35W2r5AAd9ch87g*)0;
	g = (tyObject_TGen_1n9c8bLkAy1k20AgnlhyBBw*)0;
	g = (tyObject_TGen_1n9c8bLkAy1k20AgnlhyBBw*) newObj((&NTI_AVGCMPDeV3LjhYUWMtIGNg_), sizeof(tyObject_TGen_1n9c8bLkAy1k20AgnlhyBBw));
	(*g).Sup.Sup.m_type = (&NTI_1n9c8bLkAy1k20AgnlhyBBw_);
	asgnRefNoCycle((void**) (&(*g).module), module);
	T1_ = (NimStringDesc*)0;
	{
		if (!(((NI32) ((*module).position)) < ((NI32) 0))) goto LA4_;
		T1_ = copyString(((NimStringDesc*) &TM_87tQLGE73DKq5cz9cph1IqQ_3));
	}
	goto LA2_;
	LA4_: ;
	{
		T1_ = copyString(fileInfos_0nMtuXd9csTLLtuDok8ckXw->data[((NI32) ((*module).position))].projPath);
	}
	LA2_: ;
	d = newDocumentor_rSEpP0BL6scT9c33BSLRVKA(T1_, gConfigVars_0Vkej44DF5osh1Rc3US8qw);
	(*d).Sup.hasToc = NIM_TRUE;
	asgnRef((void**) (&(*g).doc), d);
	result = &g->Sup;
	return result;
}

N_NIMCALL(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*, processNodeJson_LQRyeStN9aRWJcDweUXsVpg)(tyObject_TPassContext_qNsm39cWb35W2r5AAd9ch87g* c, tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n) {
	tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* result;
	tyObject_TGen_1n9c8bLkAy1k20AgnlhyBBw* g;
	result = (tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*)0;
	result = n;
	g = ((tyObject_TGen_1n9c8bLkAy1k20AgnlhyBBw*) (c));
	generateJson_9b0I15wtPowpEmmkrKBaI4w_3((*g).doc, n);
	return result;
}

static N_INLINE(void, pushSafePoint)(TSafePoint* s) {
	(*s).hasRaiseAction = NIM_FALSE;
	(*s).prev = excHandler_rqLlY5bs9atDw2OXYqJEn5g;
	excHandler_rqLlY5bs9atDw2OXYqJEn5g = s;
}

static N_INLINE(void, popSafePoint)(void) {
	excHandler_rqLlY5bs9atDw2OXYqJEn5g = (*excHandler_rqLlY5bs9atDw2OXYqJEn5g).prev;
}

static N_INLINE(Exception*, getCurrentException)(void) {
	Exception* result;
	result = (Exception*)0;
	result = currException_9bVPeDJlYTi9bQApZpfH8wjg;
	return result;
}

static N_INLINE(void, popCurrentException)(void) {
	asgnRef((void**) (&currException_9bVPeDJlYTi9bQApZpfH8wjg), (*currException_9bVPeDJlYTi9bQApZpfH8wjg).up);
}

N_NIMCALL(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*, closeJson_qpYYCfxDyNmwR1J59b7C3lw)(tyObject_ModuleGraphcolonObjectType__RZI3hCs0FTPYx8StfC81qQ* graph, tyObject_TPassContext_qNsm39cWb35W2r5AAd9ch87g* p, tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n) {
	tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* result;
	tyObject_TGen_1n9c8bLkAy1k20AgnlhyBBw* g;
	NIM_BOOL useWarning;
	result = (tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*)0;
	g = ((tyObject_TGen_1n9c8bLkAy1k20AgnlhyBBw*) (p));
	useWarning = !((((*(*g).module).flags &((NU64)1<<((NU)(((tyEnum_TSymFlag_K9ay6LWMat9bUiT9bIbMxpDHw) 12))&63U)))!=0));
	{
		NIM_BOOL T3_;
		NIM_BOOL T4_;
		NimStringDesc* T9_;
		TSafePoint TM_87tQLGE73DKq5cz9cph1IqQ_5;
		T3_ = (NIM_BOOL)0;
		T4_ = (NIM_BOOL)0;
		T4_ = ((*(*(*g).module).owner).Sup.id == gMainPackageId_9cwEOFAmQDogkWTNLtVENxw);
		if (!(T4_)) goto LA5_;
		T4_ = gWholeProject_MjauEmf9c7n25a6W6FpTptQ;
		LA5_: ;
		T3_ = T4_;
		if (T3_) goto LA6_;
		T3_ = (((*(*g).module).flags &((NU64)1<<((NU)(((tyEnum_TSymFlag_K9ay6LWMat9bUiT9bIbMxpDHw) 12))&63U)))!=0);
		LA6_: ;
		if (!T3_) goto LA7_;
		T9_ = (NimStringDesc*)0;
		{
			if (!(((NI32) ((*(*g).module).position)) < ((NI32) 0))) goto LA12_;
			T9_ = copyString(((NimStringDesc*) &TM_87tQLGE73DKq5cz9cph1IqQ_3));
		}
		goto LA10_;
		LA12_: ;
		{
			T9_ = copyString(fileInfos_0nMtuXd9csTLLtuDok8ckXw->data[((NI32) ((*(*g).module).position))].projPath);
		}
		LA10_: ;
		writeOutputJson_UPjOukO9a2qO3DBJCbtcQ1A_2((*g).doc, T9_, ((NimStringDesc*) &TM_87tQLGE73DKq5cz9cph1IqQ_4), useWarning);
		pushSafePoint(&TM_87tQLGE73DKq5cz9cph1IqQ_5);
		TM_87tQLGE73DKq5cz9cph1IqQ_5.status = setjmp(TM_87tQLGE73DKq5cz9cph1IqQ_5.context);
		if (TM_87tQLGE73DKq5cz9cph1IqQ_5.status == 0) {
			generateIndex_wjz2ZVW4SxHaKoMYPYCeKw((*g).doc);
			popSafePoint();
		}
		else {
			popSafePoint();
			if (isObj(getCurrentException()->Sup.m_type, (&NTI_9czoZw3pzPyrBmb5zTHY1OQ_))) {
				TM_87tQLGE73DKq5cz9cph1IqQ_5.status = 0;
				popCurrentException();
			}
		}
		if (TM_87tQLGE73DKq5cz9cph1IqQ_5.status != 0) reraiseException();
	}
	LA7_: ;
	return result;
}

N_NIMCALL(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*, processNode_LQRyeStN9aRWJcDweUXsVpg_2)(tyObject_TPassContext_qNsm39cWb35W2r5AAd9ch87g* c, tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n) {
	tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* result;
	tyObject_TGen_1n9c8bLkAy1k20AgnlhyBBw* g;
	result = (tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*)0;
	result = n;
	g = ((tyObject_TGen_1n9c8bLkAy1k20AgnlhyBBw*) (c));
	generateDoc_9b0I15wtPowpEmmkrKBaI4w((*g).doc, n);
	return result;
}

N_NIMCALL(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*, close_qpYYCfxDyNmwR1J59b7C3lw_2)(tyObject_ModuleGraphcolonObjectType__RZI3hCs0FTPYx8StfC81qQ* graph, tyObject_TPassContext_qNsm39cWb35W2r5AAd9ch87g* p, tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n) {
	tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* result;
	tyObject_TGen_1n9c8bLkAy1k20AgnlhyBBw* g;
	NIM_BOOL useWarning;
	result = (tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*)0;
	g = ((tyObject_TGen_1n9c8bLkAy1k20AgnlhyBBw*) (p));
	useWarning = !((((*(*g).module).flags &((NU64)1<<((NU)(((tyEnum_TSymFlag_K9ay6LWMat9bUiT9bIbMxpDHw) 12))&63U)))!=0));
	{
		NIM_BOOL T3_;
		NIM_BOOL T4_;
		NimStringDesc* T9_;
		TSafePoint TM_87tQLGE73DKq5cz9cph1IqQ_7;
		T3_ = (NIM_BOOL)0;
		T4_ = (NIM_BOOL)0;
		T4_ = ((*(*(*g).module).owner).Sup.id == gMainPackageId_9cwEOFAmQDogkWTNLtVENxw);
		if (!(T4_)) goto LA5_;
		T4_ = gWholeProject_MjauEmf9c7n25a6W6FpTptQ;
		LA5_: ;
		T3_ = T4_;
		if (T3_) goto LA6_;
		T3_ = (((*(*g).module).flags &((NU64)1<<((NU)(((tyEnum_TSymFlag_K9ay6LWMat9bUiT9bIbMxpDHw) 12))&63U)))!=0);
		LA6_: ;
		if (!T3_) goto LA7_;
		T9_ = (NimStringDesc*)0;
		{
			if (!(((NI32) ((*(*g).module).position)) < ((NI32) 0))) goto LA12_;
			T9_ = copyString(((NimStringDesc*) &TM_87tQLGE73DKq5cz9cph1IqQ_3));
		}
		goto LA10_;
		LA12_: ;
		{
			T9_ = copyString(fileInfos_0nMtuXd9csTLLtuDok8ckXw->data[((NI32) ((*(*g).module).position))].projPath);
		}
		LA10_: ;
		writeOutput_UPjOukO9a2qO3DBJCbtcQ1A((*g).doc, T9_, ((NimStringDesc*) &TM_87tQLGE73DKq5cz9cph1IqQ_6), useWarning);
		pushSafePoint(&TM_87tQLGE73DKq5cz9cph1IqQ_7);
		TM_87tQLGE73DKq5cz9cph1IqQ_7.status = setjmp(TM_87tQLGE73DKq5cz9cph1IqQ_7.context);
		if (TM_87tQLGE73DKq5cz9cph1IqQ_7.status == 0) {
			generateIndex_wjz2ZVW4SxHaKoMYPYCeKw((*g).doc);
			popSafePoint();
		}
		else {
			popSafePoint();
			if (isObj(getCurrentException()->Sup.m_type, (&NTI_9czoZw3pzPyrBmb5zTHY1OQ_))) {
				TM_87tQLGE73DKq5cz9cph1IqQ_7.status = 0;
				popCurrentException();
			}
		}
		if (TM_87tQLGE73DKq5cz9cph1IqQ_7.status != 0) reraiseException();
	}
	LA7_: ;
	return result;
}

N_NIMCALL(void, finishDoc2Pass_pE3h5lr2g9bTHoEs1gBt2xg)(NimStringDesc* project) {
}
NIM_EXTERNC N_NOINLINE(void, compiler_docgen2Init000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_docgen2DatInit000)(void) {
static TNimNode* TM_87tQLGE73DKq5cz9cph1IqQ_2[2];
static TNimNode TM_87tQLGE73DKq5cz9cph1IqQ_0[3];
NTI_1n9c8bLkAy1k20AgnlhyBBw_.size = sizeof(tyObject_TGen_1n9c8bLkAy1k20AgnlhyBBw);
NTI_1n9c8bLkAy1k20AgnlhyBBw_.kind = 17;
NTI_1n9c8bLkAy1k20AgnlhyBBw_.base = (&NTI_qNsm39cWb35W2r5AAd9ch87g_);
TM_87tQLGE73DKq5cz9cph1IqQ_2[0] = &TM_87tQLGE73DKq5cz9cph1IqQ_0[1];
TM_87tQLGE73DKq5cz9cph1IqQ_0[1].kind = 1;
TM_87tQLGE73DKq5cz9cph1IqQ_0[1].offset = offsetof(tyObject_TGen_1n9c8bLkAy1k20AgnlhyBBw, doc);
TM_87tQLGE73DKq5cz9cph1IqQ_0[1].typ = (&NTI_cx9b0GT2NB8xz1hKV89ay5lQ_);
TM_87tQLGE73DKq5cz9cph1IqQ_0[1].name = "doc";
TM_87tQLGE73DKq5cz9cph1IqQ_2[1] = &TM_87tQLGE73DKq5cz9cph1IqQ_0[2];
TM_87tQLGE73DKq5cz9cph1IqQ_0[2].kind = 1;
TM_87tQLGE73DKq5cz9cph1IqQ_0[2].offset = offsetof(tyObject_TGen_1n9c8bLkAy1k20AgnlhyBBw, module);
TM_87tQLGE73DKq5cz9cph1IqQ_0[2].typ = (&NTI_83n62yi1b9bgUtRR9axFWW9ag_);
TM_87tQLGE73DKq5cz9cph1IqQ_0[2].name = "module";
TM_87tQLGE73DKq5cz9cph1IqQ_0[0].len = 2; TM_87tQLGE73DKq5cz9cph1IqQ_0[0].kind = 2; TM_87tQLGE73DKq5cz9cph1IqQ_0[0].sons = &TM_87tQLGE73DKq5cz9cph1IqQ_2[0];
NTI_1n9c8bLkAy1k20AgnlhyBBw_.node = &TM_87tQLGE73DKq5cz9cph1IqQ_0[0];
NTI_AVGCMPDeV3LjhYUWMtIGNg_.size = sizeof(tyObject_TGen_1n9c8bLkAy1k20AgnlhyBBw*);
NTI_AVGCMPDeV3LjhYUWMtIGNg_.kind = 22;
NTI_AVGCMPDeV3LjhYUWMtIGNg_.base = (&NTI_1n9c8bLkAy1k20AgnlhyBBw_);
NTI_AVGCMPDeV3LjhYUWMtIGNg_.marker = Marker_tyRef_AVGCMPDeV3LjhYUWMtIGNg;
}
