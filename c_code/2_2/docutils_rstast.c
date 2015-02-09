/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"
typedef struct trstnode321011 trstnode321011;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct trstnodeseq321009 trstnodeseq321009;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tcell45348 tcell45348;
typedef struct tcellseq45364 tcellseq45364;
typedef struct tgcheap47616 tgcheap47616;
typedef struct tcellset45360 tcellset45360;
typedef struct tpagedesc45356 tpagedesc45356;
typedef struct tmemregion27610 tmemregion27610;
typedef struct tsmallchunk26840 tsmallchunk26840;
typedef struct tllchunk27604 tllchunk27604;
typedef struct tbigchunk26842 tbigchunk26842;
typedef struct tintset26817 tintset26817;
typedef struct ttrunk26813 ttrunk26813;
typedef struct tavlnode27608 tavlnode27608;
typedef struct tgcstat47614 tgcstat47614;
typedef struct tbasechunk26838 tbasechunk26838;
typedef struct tfreecell26830 tfreecell26830;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  trstnode321011  {
NU8 Kind;
NimStringDesc* Text;
NI Level;
trstnodeseq321009* Sons;
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
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  tcell45348  {
NI Refcount;
TNimType* Typ;
};
struct  tcellseq45364  {
NI Len;
NI Cap;
tcell45348** D;
};
struct  tcellset45360  {
NI Counter;
NI Max;
tpagedesc45356* Head;
tpagedesc45356** Data;
};
typedef tsmallchunk26840* TY27622[512];
typedef ttrunk26813* ttrunkbuckets26815[256];
struct  tintset26817  {
ttrunkbuckets26815 Data;
};
struct  tmemregion27610  {
NI Minlargeobj;
NI Maxlargeobj;
TY27622 Freesmallchunks;
tllchunk27604* Llmem;
NI Currmem;
NI Maxmem;
NI Freemem;
NI Lastsize;
tbigchunk26842* Freechunkslist;
tintset26817 Chunkstarts;
tavlnode27608* Root;
tavlnode27608* Deleted;
tavlnode27608* Last;
tavlnode27608* Freeavlnodes;
};
struct  tgcstat47614  {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
NI64 Maxpause;
};
struct  tgcheap47616  {
void* Stackbottom;
NI Cyclethreshold;
tcellseq45364 Zct;
tcellseq45364 Decstack;
tcellset45360 Cycleroots;
tcellseq45364 Tempstack;
NI Recgclock;
tmemregion27610 Region;
tgcstat47614 Stat;
};
typedef NI TY26820[8];
struct  tpagedesc45356  {
tpagedesc45356* Next;
NI Key;
TY26820 Bits;
};
struct  tbasechunk26838  {
NI Prevsize;
NI Size;
NIM_BOOL Used;
};
struct  tsmallchunk26840  {
  tbasechunk26838 Sup;
tsmallchunk26840* Next;
tsmallchunk26840* Prev;
tfreecell26830* Freelist;
NI Free;
NI Acc;
NF Data;
};
struct  tllchunk27604  {
NI Size;
NI Acc;
tllchunk27604* Next;
};
struct  tbigchunk26842  {
  tbasechunk26838 Sup;
tbigchunk26842* Next;
tbigchunk26842* Prev;
NI Align;
NF Data;
};
struct  ttrunk26813  {
ttrunk26813* Next;
NI Key;
TY26820 Bits;
};
typedef tavlnode27608* TY27614[2];
struct  tavlnode27608  {
TY27614 Link;
NI Key;
NI Upperbound;
NI Level;
};
struct  tfreecell26830  {
tfreecell26830* Next;
NI Zerofield;
};
struct trstnodeseq321009 {
  TGenericSeq Sup;
  trstnode321011* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP2478)(void* p, NI op);
N_NIMCALL(void, TMP2479)(void* p, NI op);
N_NIMCALL(trstnode321011*, newrstnode_321105)(NU8 kind);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell45348*, usrtocell_49246)(void* usr);
static N_INLINE(void, rtladdzct_50804)(tcell45348* c);
N_NOINLINE(void, addzct_49217)(tcellseq45364* s, tcell45348* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* seq, NI elemsize);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(void, add_321183)(trstnode321011* father, trstnode321011* son);
TNimType NTI321011; /* TRstNode */
TNimType NTI321005; /* TRstNodeKind */
extern TNimType NTI149; /* string */
extern TNimType NTI108; /* int */
TNimType NTI321009; /* TRstNodeSeq */
TNimType NTI321007; /* PRstNode */
extern tgcheap47616 gch_47644;

N_NIMCALL(NI, len_321084)(trstnode321011* n) {
	NI result;
	result = 0;
	result = (*n).Sons->Sup.len;
	return result;
}

N_NIMCALL(trstnode321011*, lastson_321162)(trstnode321011* n) {
	trstnode321011* result;
	result = 0;
	result = (*n).Sons->data[(NI64)((*n).Sons->Sup.len - 1)];
	return result;
}
N_NIMCALL(void, TMP2478)(void* p, NI op) {
	trstnodeseq321009* a;
	NI LOC1;
	a = (trstnodeseq321009*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1], op);
	}
}
N_NIMCALL(void, TMP2479)(void* p, NI op) {
	trstnode321011* a;
	a = (trstnode321011*)p;
	nimGCvisit((void*)(*a).Text, op);
	nimGCvisit((void*)(*a).Sons, op);
}

static N_INLINE(tcell45348*, usrtocell_49246)(void* usr) {
	tcell45348* result;
	result = 0;
	result = ((tcell45348*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(tcell45348))))));
	return result;
}

static N_INLINE(void, rtladdzct_50804)(tcell45348* c) {
	addzct_49217((&gch_47644.Zct), c);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tcell45348* c;
	c = usrtocell_49246(p);
	{
		(*c).Refcount -= 8;
		if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA3;
		rtladdzct_50804(c);
	}
	LA3: ;
}

N_NIMCALL(trstnode321011*, newrstnode_321105)(NU8 kind) {
	trstnode321011* result;
	result = 0;
	result = (trstnode321011*) newObj((&NTI321007), sizeof(trstnode321011));
	if ((*result).Sons) nimGCunrefNoCycle((*result).Sons);
	(*result).Sons = (trstnodeseq321009*) newSeqRC1((&NTI321009), 0);
	(*result).Kind = kind;
	return result;
}

N_NIMCALL(trstnode321011*, newrstnode_321151)(NU8 kind, NimStringDesc* s) {
	trstnode321011* result;
	NimStringDesc* LOC1;
	result = 0;
	result = newrstnode_321105(kind);
	LOC1 = 0;
	LOC1 = (*result).Text; (*result).Text = copyStringRC1(s);
	if (LOC1) nimGCunrefNoCycle(LOC1);
	return result;
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		tcell45348* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_49246(src);
		(*c).Refcount += 8;
	}
	LA3: ;
	{
		tcell45348* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_49246((*dest));
		{
			(*c).Refcount -= 8;
			if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA11;
			rtladdzct_50804(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

N_NIMCALL(void, add_321183)(trstnode321011* father, trstnode321011* son) {
	(*father).Sons = (trstnodeseq321009*) incrSeq(&((*father).Sons)->Sup, sizeof(trstnode321011*));
	asgnRefNoCycle((void**) (&(*father).Sons->data[(*father).Sons->Sup.len-1]), son);
}

N_NIMCALL(void, addifnotnil_321211)(trstnode321011* father, trstnode321011* son) {
	{
		if (!!((son == NIM_NIL))) goto LA3;
		add_321183(father, son);
	}
	LA3: ;
}
NIM_EXTERNC N_NOINLINE(void, docutils_rstastInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, docutils_rstastDatInit)(void) {
static TNimNode* TMP2474[4];
static TNimNode* TMP2475[65];
NI TMP2477;
static char* NIM_CONST TMP2476[65] = {
"rnInner", 
"rnHeadline", 
"rnOverline", 
"rnTransition", 
"rnParagraph", 
"rnBulletList", 
"rnBulletItem", 
"rnEnumList", 
"rnEnumItem", 
"rnDefList", 
"rnDefItem", 
"rnDefName", 
"rnDefBody", 
"rnFieldList", 
"rnField", 
"rnFieldName", 
"rnFieldBody", 
"rnOptionList", 
"rnOptionListItem", 
"rnOptionGroup", 
"rnOption", 
"rnOptionString", 
"rnOptionArgument", 
"rnDescription", 
"rnLiteralBlock", 
"rnQuotedLiteralBlock", 
"rnLineBlock", 
"rnLineBlockItem", 
"rnBlockQuote", 
"rnTable", 
"rnGridTable", 
"rnTableRow", 
"rnTableHeaderCell", 
"rnTableDataCell", 
"rnLabel", 
"rnFootnote", 
"rnCitation", 
"rnStandaloneHyperlink", 
"rnHyperlink", 
"rnRef", 
"rnDirective", 
"rnDirArg", 
"rnRaw", 
"rnTitle", 
"rnContents", 
"rnImage", 
"rnFigure", 
"rnCodeBlock", 
"rnRawHtml", 
"rnRawLatex", 
"rnContainer", 
"rnIndex", 
"rnSubstitutionDef", 
"rnGeneralRole", 
"rnSub", 
"rnSup", 
"rnIdx", 
"rnEmphasis", 
"rnStrongEmphasis", 
"rnTripleEmphasis", 
"rnInterpretedText", 
"rnInlineLiteral", 
"rnSubstitutionReferences", 
"rnSmiley", 
"rnLeaf"};
static TNimNode TMP881[71];
NTI321011.size = sizeof(trstnode321011);
NTI321011.kind = 18;
NTI321011.base = 0;
NTI321011.flags = 2;
TMP2474[0] = &TMP881[1];
NTI321005.size = sizeof(NU8);
NTI321005.kind = 14;
NTI321005.base = 0;
NTI321005.flags = 3;
for (TMP2477 = 0; TMP2477 < 65; TMP2477++) {
TMP881[TMP2477+2].kind = 1;
TMP881[TMP2477+2].offset = TMP2477;
TMP881[TMP2477+2].name = TMP2476[TMP2477];
TMP2475[TMP2477] = &TMP881[TMP2477+2];
}
TMP881[67].len = 65; TMP881[67].kind = 2; TMP881[67].sons = &TMP2475[0];
NTI321005.node = &TMP881[67];
TMP881[1].kind = 1;
TMP881[1].offset = offsetof(trstnode321011, Kind);
TMP881[1].typ = (&NTI321005);
TMP881[1].name = "kind";
TMP2474[1] = &TMP881[68];
TMP881[68].kind = 1;
TMP881[68].offset = offsetof(trstnode321011, Text);
TMP881[68].typ = (&NTI149);
TMP881[68].name = "text";
TMP2474[2] = &TMP881[69];
TMP881[69].kind = 1;
TMP881[69].offset = offsetof(trstnode321011, Level);
TMP881[69].typ = (&NTI108);
TMP881[69].name = "level";
TMP2474[3] = &TMP881[70];
NTI321009.size = sizeof(trstnodeseq321009*);
NTI321009.kind = 24;
NTI321009.base = (&NTI321007);
NTI321009.flags = 2;
NTI321009.marker = TMP2478;
TMP881[70].kind = 1;
TMP881[70].offset = offsetof(trstnode321011, Sons);
TMP881[70].typ = (&NTI321009);
TMP881[70].name = "sons";
TMP881[0].len = 4; TMP881[0].kind = 2; TMP881[0].sons = &TMP2474[0];
NTI321011.node = &TMP881[0];
NTI321007.size = sizeof(trstnode321011*);
NTI321007.kind = 22;
NTI321007.base = (&NTI321011);
NTI321007.flags = 2;
NTI321007.marker = TMP2479;
}
