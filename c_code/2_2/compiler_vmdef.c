/* Generated by Nim Compiler v0.14.3 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Tctx345035 Tctx345035;
typedef struct Tpasscontext343002 Tpasscontext343002;
typedef struct TNimObject TNimObject;
typedef struct TY345241 TY345241;
typedef struct TY194083 TY194083;
typedef struct Tnode294802 Tnode294802;
typedef struct Ttypeseq294836 Ttypeseq294836;
typedef struct PprocHEX3Aobjecttype345220 PprocHEX3Aobjecttype345220;
typedef struct Tsym294834 Tsym294834;
typedef struct Tlineinfo193336 Tlineinfo193336;
typedef struct TY345260 TY345260;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY345221 TY345221;
typedef struct TY345226 TY345226;
typedef struct Tblock345017 Tblock345017;
typedef struct TY345201 TY345201;
typedef struct TY345261 TY345261;
typedef struct Vmargs345029 Vmargs345029;
typedef struct TY180027 TY180027;
typedef struct TY180030 TY180030;
typedef struct Cell47305 Cell47305;
typedef struct Cellseq47321 Cellseq47321;
typedef struct Gcheap49818 Gcheap49818;
typedef struct Gcstack49816 Gcstack49816;
typedef struct Memregion29486 Memregion29486;
typedef struct Smallchunk29440 Smallchunk29440;
typedef struct Llchunk29480 Llchunk29480;
typedef struct Bigchunk29442 Bigchunk29442;
typedef struct Intset29414 Intset29414;
typedef struct Trunk29410 Trunk29410;
typedef struct Avlnode29484 Avlnode29484;
typedef struct Gcstat49814 Gcstat49814;
typedef struct Cellset47317 Cellset47317;
typedef struct Pagedesc47313 Pagedesc47313;
typedef struct Ttype294840 Ttype294840;
typedef struct Tident201010 Tident201010;
typedef struct Tnodeseq294796 Tnodeseq294796;
typedef struct Tidobj201004 Tidobj201004;
typedef struct TY294929 TY294929;
typedef struct Tstrtable294806 Tstrtable294806;
typedef struct Tsymseq294804 Tsymseq294804;
typedef struct Tloc294816 Tloc294816;
typedef struct Ropeobj180006 Ropeobj180006;
typedef struct Tlib294820 Tlib294820;
typedef struct Basechunk29438 Basechunk29438;
typedef struct Freecell29430 Freecell29430;
typedef struct TY294960 TY294960;
typedef struct Tinstantiation294824 Tinstantiation294824;
typedef struct Tlistentry148007 Tlistentry148007;
typedef struct TY294961 TY294961;
typedef NU8 Tnimkind3403;
typedef NU8 Tnimtypeflag3409Set;
typedef N_NIMCALL_PTR(void, TY3489) (void* p0, NI op0);
typedef N_NIMCALL_PTR(void*, TY3494) (void* p0);
struct  TNimType  {
NI size;
Tnimkind3403 kind;
Tnimtypeflag3409Set flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3489 marker;
TY3494 deepcopy;
};
typedef NU8 Tnimnodekind3405;
struct  TNimNode  {
Tnimnodekind3405 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  Tpasscontext343002  {
  TNimObject Sup;
NIM_BOOL fromcache;
};
typedef NU8 Tevalmode345019;
typedef NU8 Tsandboxflag345021Set;
struct  Tlineinfo193336  {
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
struct  Tctx345035  {
  Tpasscontext343002 Sup;
TY345241* code;
TY194083* debug;
Tnode294802* globals;
Tnode294802* constants;
Ttypeseq294836* types;
Tnode294802* currentexceptiona;
Tnode294802* currentexceptionb;
NI exceptioninstr;
PprocHEX3Aobjecttype345220* prc;
Tsym294834* module;
Tnode294802* callsite;
Tevalmode345019 mode;
Tsandboxflag345021Set features;
NIM_BOOL traceactive;
NI loopiterations;
Tlineinfo193336 comesfromheuristic;
TY345260* callbacks;
NimStringDesc* errorflag;
};
typedef NU8 Tslotkind345025;
struct TY345226 {
NIM_BOOL Field0;
Tslotkind345025 Field1;
};
typedef TY345226 TY345229[256];
struct  PprocHEX3Aobjecttype345220  {
TY345221* blocks;
Tsym294834* sym;
TY345229 slots;
NI maxslots;
};
struct  Tblock345017  {
Tsym294834* label;
TY345201* fixups;
};
typedef NU8 Tsandboxflag345021;
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (Vmargs345029* args0, void* ClEnv);
void* ClEnv;
} Vmcallback345031;
struct TY345261 {
NimStringDesc* Field0;
Vmcallback345031 Field1;
};
struct TY180027 {
void* Field0;
TY180030* Field1;
};
struct  Cell47305  {
NI refcount;
TNimType* typ;
};
struct  Cellseq47321  {
NI len;
NI cap;
Cell47305** d;
};
typedef Smallchunk29440* TY29501[512];
typedef Trunk29410* Trunkbuckets29412[256];
struct  Intset29414  {
Trunkbuckets29412 data;
};
struct  Memregion29486  {
NI minlargeobj;
NI maxlargeobj;
TY29501 freesmallchunks;
Llchunk29480* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk29442* freechunkslist;
Intset29414 chunkstarts;
Avlnode29484* root;
Avlnode29484* deleted;
Avlnode29484* last;
Avlnode29484* freeavlnodes;
NIM_BOOL locked;
};
struct  Gcstat49814  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Cellset47317  {
NI counter;
NI max;
Pagedesc47313* head;
Pagedesc47313** data;
};
struct  Gcheap49818  {
Gcstack49816* stack;
void* stackbottom;
NI cyclethreshold;
Cellseq47321 zct;
Cellseq47321 decstack;
Cellseq47321 tempstack;
NI recgclock;
Memregion29486 region;
Gcstat49814 stat;
Cellset47317 marked;
Cellseq47321 additionalroots;
};
typedef NU8 Tnodekind294020;
typedef NU16 Tnodeflag294427Set;
struct  Tnode294802  {
Ttype294840* typ;
Tlineinfo193336 info;
Tnodeflag294427Set flags;
Tnodekind294020 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym294834* sym;
} S4;
struct {Tident201010* ident;
} S5;
struct {Tnodeseq294796* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
struct  Tidobj201004  {
  TNimObject Sup;
NI id;
};
typedef NU8 Tsymkind294435;
struct  Tstrtable294806  {
NI counter;
Tsymseq294804* data;
};
typedef NU16 Tmagic294524;
typedef NU32 Tsymflag294184Set;
typedef NU32 Toption171009Set;
typedef NU8 Tlockind294808;
typedef NU8 Tstorageloc294812;
typedef NU16 Tlocflag294810Set;
struct  Tloc294816  {
Tlockind294808 k;
Tstorageloc294812 s;
Tlocflag294810Set flags;
Ttype294840* t;
Ropeobj180006* r;
};
struct  Tsym294834  {
  Tidobj201004 Sup;
Tsymkind294435 kind;
union{
struct {Ttypeseq294836* typeinstcache;
} S1;
struct {TY294929* procinstcache;
Tsym294834* gcunsafetyreason;
} S2;
struct {TY294929* usedgenerics;
Tstrtable294806 tab;
} S3;
struct {Tsym294834* guard;
NI bitsize;
} S4;
} kindU;
Tmagic294524 magic;
Ttype294840* typ;
Tident201010* name;
Tlineinfo193336 info;
Tsym294834* owner;
Tsymflag294184Set flags;
Tnode294802* ast;
Toption171009Set options;
NI position;
NI offset;
Tloc294816 loc;
Tlib294820* annex;
Tnode294802* constraint;
};
struct  Vmargs345029  {
NI ra;
NI rb;
NI rc;
void* slots;
Tnode294802* currentexception;
};
struct TY180030 {
char dummy;
};
struct  Gcstack49816  {
Gcstack49816* prev;
Gcstack49816* next;
void* starts;
void* pos;
NI maxstacksize;
};
struct  Basechunk29438  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk29440  {
  Basechunk29438 Sup;
Smallchunk29440* next;
Smallchunk29440* prev;
Freecell29430* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk29480  {
NI size;
NI acc;
Llchunk29480* next;
};
struct  Bigchunk29442  {
  Basechunk29438 Sup;
Bigchunk29442* next;
Bigchunk29442* prev;
NI align;
NF data;
};
typedef NI TY29419[8];
struct  Trunk29410  {
Trunk29410* next;
NI key;
TY29419 bits;
};
typedef Avlnode29484* TY29491[2];
struct  Avlnode29484  {
TY29491 link;
NI key;
NI upperbound;
NI level;
};
struct  Pagedesc47313  {
Pagedesc47313* next;
NI key;
TY29419 bits;
};
typedef NU8 Ttypekind294244;
typedef NU8 Tcallingconvention294002;
typedef NU32 Ttypeflag294431Set;
struct  Ttype294840  {
  Tidobj201004 Sup;
Ttypekind294244 kind;
Tcallingconvention294002 callconv;
Ttypeflag294431Set flags;
Ttypeseq294836* sons;
Tnode294802* n;
Tsym294834* owner;
Tsym294834* sym;
Tsym294834* destructor;
Tsym294834* deepcopy;
Tsym294834* assignment;
TY294960* methods;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc294816 loc;
};
struct  Tident201010  {
  Tidobj201004 Sup;
NimStringDesc* s;
Tident201010* next;
NI h;
};
struct  Ropeobj180006  {
  TNimObject Sup;
Ropeobj180006* left;
Ropeobj180006* right;
NI length;
NimStringDesc* data;
};
struct  Tlistentry148007  {
  TNimObject Sup;
Tlistentry148007* prev;
Tlistentry148007* next;
};
typedef NU8 Tlibkind294818;
struct  Tlib294820  {
  Tlistentry148007 Sup;
Tlibkind294818 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj180006* name;
Tnode294802* path;
};
struct  Freecell29430  {
Freecell29430* next;
NI zerofield;
};
struct TY294961 {
NI Field0;
Tsym294834* Field1;
};
struct  Tinstantiation294824  {
Tsym294834* sym;
Ttypeseq294836* concretetypes;
NI compilesid;
};
struct TY345241 {
  TGenericSeq Sup;
  NU32 data[SEQ_DECL_SIZE];
};
struct TY345201 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
struct TY345221 {
  TGenericSeq Sup;
  Tblock345017 data[SEQ_DECL_SIZE];
};
struct TY345260 {
  TGenericSeq Sup;
  TY345261 data[SEQ_DECL_SIZE];
};
struct TY194083 {
  TGenericSeq Sup;
  Tlineinfo193336 data[SEQ_DECL_SIZE];
};
struct Ttypeseq294836 {
  TGenericSeq Sup;
  Ttype294840* data[SEQ_DECL_SIZE];
};
struct Tnodeseq294796 {
  TGenericSeq Sup;
  Tnode294802* data[SEQ_DECL_SIZE];
};
struct TY294929 {
  TGenericSeq Sup;
  Tinstantiation294824* data[SEQ_DECL_SIZE];
};
struct Tsymseq294804 {
  TGenericSeq Sup;
  Tsym294834* data[SEQ_DECL_SIZE];
};
struct TY294960 {
  TGenericSeq Sup;
  TY294961 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, T984354655_3)(void* p, NI op);
N_NIMCALL(void, T984354655_6)(void* p, NI op);
N_NIMCALL(void, nimGCvisit)(void* d0, NI op0);
N_NIMCALL(void, T984354655_7)(void* p, NI op);
N_NIMCALL(void, T984354655_12)(void* p, NI op);
N_NIMCALL(void, T984354655_21)(void* p, NI op);
N_NIMCALL(void, T984354655_22)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ0, NI size0);
static N_INLINE(void, nimGCunrefNoCycle)(void* p0);
static N_INLINE(Cell47305*, usrtocell_51440_1689653243)(void* usr0);
static N_INLINE(void, rtladdzct_52601_1689653243)(Cell47305* c0);
N_NOINLINE(void, addzct_51417_1689653243)(Cellseq47321* s0, Cell47305* c0);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ0, NI len0);
N_NIMCALL(Tnode294802*, newnode_295401_850551059)(Tnodekind294020 kind0);
static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0);
N_NIMCALL(Tlineinfo193336, unknownlineinfo_194080_155036129)(void);
N_NIMCALL(void, nimGCunref)(void* p0);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src0);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src0);
N_NIMCALL(TGenericSeq*, incrSeqV2)(TGenericSeq* seq0, NI elemsize0);
static N_INLINE(void, asgnRef)(void** dest0, void* src0);
static N_INLINE(void, incref_53419_1689653243)(Cell47305* c0);
static N_INLINE(void, decref_53001_1689653243)(Cell47305* c0);
STRING_LITERAL(T984354655_23, "", 0);
extern TNimType NTI343002; /* TPassContext */
TNimType NTI345035; /* TCtx */
extern TNimType NTI120; /* uint32 */
TNimType NTI345241; /* seq[TInstr] */
extern TNimType NTI194083; /* seq[TLineInfo] */
extern TNimType NTI294794; /* PNode */
extern TNimType NTI294836; /* TTypeSeq */
extern TNimType NTI104; /* int */
TNimType NTI345220; /* PProc:ObjectType */
TNimType NTI345017; /* TBlock */
extern TNimType NTI294800; /* PSym */
TNimType NTI345201; /* seq[TPosition] */
TNimType NTI345221; /* seq[TBlock] */
TNimType NTI345226; /* tuple[inUse: bool, kind: TSlotKind] */
extern TNimType NTI130; /* bool */
TNimType NTI345025; /* TSlotKind */
TNimType NTI345229; /* array[0..255, tuple[inUse: bool, kind: TSlotKind]] */
TNimType NTI345027; /* PProc */
TNimType NTI345019; /* TEvalMode */
TNimType NTI345021; /* TSandboxFlag */
TNimType NTI345023; /* TSandboxFlags */
extern TNimType NTI193336; /* TLineInfo */
TNimType NTI345261; /* tuple[key: string, value: VmCallback] */
extern TNimType NTI138; /* string */
TNimType NTI345031; /* (pointer, ref tuple[]) */
extern TNimType NTI142; /* pointer */
extern TNimType NTI180029; /* ref tuple[] */
TNimType NTI345260; /* seq[tuple[key: string, value: VmCallback]] */
TNimType NTI345033; /* PCtx */
extern Gcheap49818 gch_49858_1689653243;
N_NIMCALL(void, T984354655_3)(void* p, NI op) {
	TY345241* a;
	NI LOC1;
	a = (TY345241*)p;
	LOC1 = (NI)0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
}
N_NIMCALL(void, T984354655_6)(void* p, NI op) {
	TY345201* a;
	NI LOC1;
	a = (TY345201*)p;
	LOC1 = (NI)0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
}
N_NIMCALL(void, T984354655_7)(void* p, NI op) {
	TY345221* a;
	NI LOC1;
	a = (TY345221*)p;
	LOC1 = (NI)0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].label, op);
	nimGCvisit((void*)a->data[LOC1].fixups, op);
	}
}
N_NIMCALL(void, T984354655_12)(void* p, NI op) {
	PprocHEX3Aobjecttype345220* a;
	NI LOC1;
	a = (PprocHEX3Aobjecttype345220*)p;
	nimGCvisit((void*)(*a).blocks, op);
	nimGCvisit((void*)(*a).sym, op);
	LOC1 = (NI)0;
	for (LOC1 = 0; LOC1 < 256; LOC1++) {
	}
}
N_NIMCALL(void, T984354655_21)(void* p, NI op) {
	TY345260* a;
	NI LOC1;
	a = (TY345260*)p;
	LOC1 = (NI)0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Field0, op);
	nimGCvisit((void*)a->data[LOC1].Field1.ClEnv, op);
	}
}
N_NIMCALL(void, T984354655_22)(void* p, NI op) {
	Tctx345035* a;
	a = (Tctx345035*)p;
	nimGCvisit((void*)(*a).code, op);
	nimGCvisit((void*)(*a).debug, op);
	nimGCvisit((void*)(*a).globals, op);
	nimGCvisit((void*)(*a).constants, op);
	nimGCvisit((void*)(*a).types, op);
	nimGCvisit((void*)(*a).currentexceptiona, op);
	nimGCvisit((void*)(*a).currentexceptionb, op);
	nimGCvisit((void*)(*a).prc, op);
	nimGCvisit((void*)(*a).module, op);
	nimGCvisit((void*)(*a).callsite, op);
	nimGCvisit((void*)(*a).callbacks, op);
	nimGCvisit((void*)(*a).errorflag, op);
}

static N_INLINE(Cell47305*, usrtocell_51440_1689653243)(void* usr0) {
	Cell47305* result0;
	result0 = (Cell47305*)0;
	result0 = ((Cell47305*) ((NI)((NU64)(((NI) (usr0))) - (NU64)(((NI)sizeof(Cell47305))))));
	return result0;
}

static N_INLINE(void, rtladdzct_52601_1689653243)(Cell47305* c0) {
	addzct_51417_1689653243((&gch_49858_1689653243.zct), c0);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p0) {
	Cell47305* c0;
	c0 = usrtocell_51440_1689653243(p0);
	{
		(*c0).refcount -= ((NI) 8);
		if (!((NU64)((*c0).refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_52601_1689653243(c0);
	}
	LA3: ;
}

static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0) {
	{
		Cell47305* c0;
		if (!!((src0 == NIM_NIL))) goto LA3;
		c0 = usrtocell_51440_1689653243(src0);
		(*c0).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Cell47305* c0;
		if (!!(((*dest0) == NIM_NIL))) goto LA7;
		c0 = usrtocell_51440_1689653243((*dest0));
		{
			(*c0).refcount -= ((NI) 8);
			if (!((NU64)((*c0).refcount) < (NU64)(((NI) 8)))) goto LA11;
			rtladdzct_52601_1689653243(c0);
		}
		LA11: ;
	}
	LA7: ;
	(*dest0) = src0;
}

N_NIMCALL(Tctx345035*, newctx_345286_984354655)(Tsym294834* module0) {
	Tctx345035* result0;
	Tctx345035* LOC1;
	PprocHEX3Aobjecttype345220* LOC2;
	NimStringDesc* LOC3;
	result0 = (Tctx345035*)0;
	LOC1 = (Tctx345035*)0;
	LOC1 = (Tctx345035*) newObj((&NTI345033), sizeof(Tctx345035));
	(*LOC1).Sup.Sup.m_type = (&NTI345035);
	if ((*LOC1).code) nimGCunrefNoCycle((*LOC1).code);
	(*LOC1).code = (TY345241*) newSeqRC1((&NTI345241), 0);
	if ((*LOC1).debug) nimGCunrefNoCycle((*LOC1).debug);
	(*LOC1).debug = (TY194083*) newSeqRC1((&NTI194083), 0);
	asgnRefNoCycle((void**) (&(*LOC1).globals), newnode_295401_850551059(((Tnodekind294020) 126)));
	asgnRefNoCycle((void**) (&(*LOC1).constants), newnode_295401_850551059(((Tnodekind294020) 115)));
	if ((*LOC1).types) nimGCunrefNoCycle((*LOC1).types);
	(*LOC1).types = (Ttypeseq294836*) newSeqRC1((&NTI294836), 0);
	LOC2 = (PprocHEX3Aobjecttype345220*)0;
	LOC2 = (PprocHEX3Aobjecttype345220*) newObj((&NTI345027), sizeof(PprocHEX3Aobjecttype345220));
	if ((*LOC2).blocks) nimGCunrefNoCycle((*LOC2).blocks);
	(*LOC2).blocks = (TY345221*) newSeqRC1((&NTI345221), 0);
	asgnRefNoCycle((void**) (&(*LOC1).prc), LOC2);
	asgnRefNoCycle((void**) (&(*LOC1).module), module0);
	(*LOC1).loopiterations = ((NI) 1500000);
	(*LOC1).comesfromheuristic = unknownlineinfo_194080_155036129();
	if ((*LOC1).callbacks) nimGCunref((*LOC1).callbacks);
	(*LOC1).callbacks = (TY345260*) newSeqRC1((&NTI345260), 0);
	LOC3 = (NimStringDesc*)0;
	LOC3 = (*LOC1).errorflag; (*LOC1).errorflag = copyStringRC1(((NimStringDesc*) &T984354655_23));
	if (LOC3) nimGCunrefNoCycle(LOC3);
	result0 = LOC1;
	return result0;
}

static N_INLINE(void, incref_53419_1689653243)(Cell47305* c0) {
	(*c0).refcount = (NI)((NU64)((*c0).refcount) + (NU64)(((NI) 8)));
}

static N_INLINE(void, decref_53001_1689653243)(Cell47305* c0) {
	{
		(*c0).refcount -= ((NI) 8);
		if (!((NU64)((*c0).refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_52601_1689653243(c0);
	}
	LA3: ;
}

static N_INLINE(void, asgnRef)(void** dest0, void* src0) {
	{
		Cell47305* LOC5;
		if (!!((src0 == NIM_NIL))) goto LA3;
		LOC5 = (Cell47305*)0;
		LOC5 = usrtocell_51440_1689653243(src0);
		incref_53419_1689653243(LOC5);
	}
	LA3: ;
	{
		Cell47305* LOC10;
		if (!!(((*dest0) == NIM_NIL))) goto LA8;
		LOC10 = (Cell47305*)0;
		LOC10 = usrtocell_51440_1689653243((*dest0));
		decref_53001_1689653243(LOC10);
	}
	LA8: ;
	(*dest0) = src0;
}

N_NIMCALL(void, registercallback_345393_984354655)(Tctx345035* c0, NimStringDesc* name0, Vmcallback345031 callback0) {
	TY345261 LOC1;
	NimStringDesc* LOC2;
	memset((void*)(&LOC1), 0, sizeof(LOC1));
	LOC1.Field0 = copyString(name0);
	LOC1.Field1.ClEnv = callback0.ClEnv;
	LOC1.Field1.ClPrc = callback0.ClPrc;
	(*c0).callbacks = (TY345260*) incrSeqV2(&((*c0).callbacks)->Sup, sizeof(TY345261));
	LOC2 = (NimStringDesc*)0;
	LOC2 = (*c0).callbacks->data[(*c0).callbacks->Sup.len].Field0; (*c0).callbacks->data[(*c0).callbacks->Sup.len].Field0 = copyStringRC1(LOC1.Field0);
	if (LOC2) nimGCunrefNoCycle(LOC2);
	asgnRef((void**) (&(*c0).callbacks->data[(*c0).callbacks->Sup.len].Field1.ClEnv), LOC1.Field1.ClEnv);
	(*c0).callbacks->data[(*c0).callbacks->Sup.len].Field1.ClPrc = LOC1.Field1.ClPrc;
	++(*c0).callbacks->Sup.len;
}

N_NIMCALL(void, refresh_345372_984354655)(Tctx345035* c0, Tsym294834* module0) {
	PprocHEX3Aobjecttype345220* LOC1;
	asgnRefNoCycle((void**) (&(*c0).module), module0);
	LOC1 = (PprocHEX3Aobjecttype345220*)0;
	LOC1 = (PprocHEX3Aobjecttype345220*) newObj((&NTI345027), sizeof(PprocHEX3Aobjecttype345220));
	if ((*LOC1).blocks) nimGCunrefNoCycle((*LOC1).blocks);
	(*LOC1).blocks = (TY345221*) newSeqRC1((&NTI345221), 0);
	asgnRefNoCycle((void**) (&(*c0).prc), LOC1);
	(*c0).loopiterations = ((NI) 1500000);
}
NIM_EXTERNC N_NOINLINE(void, compiler_vmdefInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_vmdefDatInit000)(void) {
static TNimNode* T984354655_2[18];
static TNimNode* T984354655_4[4];
static TNimNode* T984354655_5[2];
static TNimNode* T984354655_8[2];
static TNimNode* T984354655_9[9];
NI T984354655_11;
static char* NIM_CONST T984354655_10[9] = {
"slotEmpty", 
"slotFixedVar", 
"slotFixedLet", 
"slotTempUnknown", 
"slotTempInt", 
"slotTempFloat", 
"slotTempStr", 
"slotTempComplex", 
"slotTempPerm"};
static TNimNode* T984354655_13[5];
NI T984354655_15;
static char* NIM_CONST T984354655_14[5] = {
"emRepl", 
"emConst", 
"emOptimize", 
"emStaticExpr", 
"emStaticStmt"};
static TNimNode* T984354655_16[3];
NI T984354655_18;
static char* NIM_CONST T984354655_17[3] = {
"allowCast", 
"allowFFI", 
"allowInfiniteLoops"};
static TNimNode* T984354655_19[2];
static TNimNode* T984354655_20[2];
static TNimNode T984354655_0[57];
NTI345035.size = sizeof(Tctx345035);
NTI345035.kind = 17;
NTI345035.base = (&NTI343002);
T984354655_2[0] = &T984354655_0[1];
NTI345241.size = sizeof(TY345241*);
NTI345241.kind = 24;
NTI345241.base = (&NTI120);
NTI345241.flags = 2;
NTI345241.marker = T984354655_3;
T984354655_0[1].kind = 1;
T984354655_0[1].offset = offsetof(Tctx345035, code);
T984354655_0[1].typ = (&NTI345241);
T984354655_0[1].name = "code";
T984354655_2[1] = &T984354655_0[2];
T984354655_0[2].kind = 1;
T984354655_0[2].offset = offsetof(Tctx345035, debug);
T984354655_0[2].typ = (&NTI194083);
T984354655_0[2].name = "debug";
T984354655_2[2] = &T984354655_0[3];
T984354655_0[3].kind = 1;
T984354655_0[3].offset = offsetof(Tctx345035, globals);
T984354655_0[3].typ = (&NTI294794);
T984354655_0[3].name = "globals";
T984354655_2[3] = &T984354655_0[4];
T984354655_0[4].kind = 1;
T984354655_0[4].offset = offsetof(Tctx345035, constants);
T984354655_0[4].typ = (&NTI294794);
T984354655_0[4].name = "constants";
T984354655_2[4] = &T984354655_0[5];
T984354655_0[5].kind = 1;
T984354655_0[5].offset = offsetof(Tctx345035, types);
T984354655_0[5].typ = (&NTI294836);
T984354655_0[5].name = "types";
T984354655_2[5] = &T984354655_0[6];
T984354655_0[6].kind = 1;
T984354655_0[6].offset = offsetof(Tctx345035, currentexceptiona);
T984354655_0[6].typ = (&NTI294794);
T984354655_0[6].name = "currentExceptionA";
T984354655_2[6] = &T984354655_0[7];
T984354655_0[7].kind = 1;
T984354655_0[7].offset = offsetof(Tctx345035, currentexceptionb);
T984354655_0[7].typ = (&NTI294794);
T984354655_0[7].name = "currentExceptionB";
T984354655_2[7] = &T984354655_0[8];
T984354655_0[8].kind = 1;
T984354655_0[8].offset = offsetof(Tctx345035, exceptioninstr);
T984354655_0[8].typ = (&NTI104);
T984354655_0[8].name = "exceptionInstr";
T984354655_2[8] = &T984354655_0[9];
NTI345220.size = sizeof(PprocHEX3Aobjecttype345220);
NTI345220.kind = 18;
NTI345220.base = 0;
NTI345220.flags = 2;
T984354655_4[0] = &T984354655_0[11];
NTI345017.size = sizeof(Tblock345017);
NTI345017.kind = 18;
NTI345017.base = 0;
NTI345017.flags = 2;
T984354655_5[0] = &T984354655_0[13];
T984354655_0[13].kind = 1;
T984354655_0[13].offset = offsetof(Tblock345017, label);
T984354655_0[13].typ = (&NTI294800);
T984354655_0[13].name = "label";
T984354655_5[1] = &T984354655_0[14];
NTI345201.size = sizeof(TY345201*);
NTI345201.kind = 24;
NTI345201.base = (&NTI104);
NTI345201.flags = 2;
NTI345201.marker = T984354655_6;
T984354655_0[14].kind = 1;
T984354655_0[14].offset = offsetof(Tblock345017, fixups);
T984354655_0[14].typ = (&NTI345201);
T984354655_0[14].name = "fixups";
T984354655_0[12].len = 2; T984354655_0[12].kind = 2; T984354655_0[12].sons = &T984354655_5[0];
NTI345017.node = &T984354655_0[12];
NTI345221.size = sizeof(TY345221*);
NTI345221.kind = 24;
NTI345221.base = (&NTI345017);
NTI345221.flags = 2;
NTI345221.marker = T984354655_7;
T984354655_0[11].kind = 1;
T984354655_0[11].offset = offsetof(PprocHEX3Aobjecttype345220, blocks);
T984354655_0[11].typ = (&NTI345221);
T984354655_0[11].name = "blocks";
T984354655_4[1] = &T984354655_0[15];
T984354655_0[15].kind = 1;
T984354655_0[15].offset = offsetof(PprocHEX3Aobjecttype345220, sym);
T984354655_0[15].typ = (&NTI294800);
T984354655_0[15].name = "sym";
T984354655_4[2] = &T984354655_0[16];
NTI345226.size = sizeof(TY345226);
NTI345226.kind = 18;
NTI345226.base = 0;
NTI345226.flags = 3;
T984354655_8[0] = &T984354655_0[18];
T984354655_0[18].kind = 1;
T984354655_0[18].offset = offsetof(TY345226, Field0);
T984354655_0[18].typ = (&NTI130);
T984354655_0[18].name = "Field0";
T984354655_8[1] = &T984354655_0[19];
NTI345025.size = sizeof(Tslotkind345025);
NTI345025.kind = 14;
NTI345025.base = 0;
NTI345025.flags = 3;
for (T984354655_11 = 0; T984354655_11 < 9; T984354655_11++) {
T984354655_0[T984354655_11+20].kind = 1;
T984354655_0[T984354655_11+20].offset = T984354655_11;
T984354655_0[T984354655_11+20].name = T984354655_10[T984354655_11];
T984354655_9[T984354655_11] = &T984354655_0[T984354655_11+20];
}
T984354655_0[29].len = 9; T984354655_0[29].kind = 2; T984354655_0[29].sons = &T984354655_9[0];
NTI345025.node = &T984354655_0[29];
T984354655_0[19].kind = 1;
T984354655_0[19].offset = offsetof(TY345226, Field1);
T984354655_0[19].typ = (&NTI345025);
T984354655_0[19].name = "Field1";
T984354655_0[17].len = 2; T984354655_0[17].kind = 2; T984354655_0[17].sons = &T984354655_8[0];
NTI345226.node = &T984354655_0[17];
NTI345229.size = sizeof(TY345229);
NTI345229.kind = 16;
NTI345229.base = (&NTI345226);
NTI345229.flags = 3;
T984354655_0[16].kind = 1;
T984354655_0[16].offset = offsetof(PprocHEX3Aobjecttype345220, slots);
T984354655_0[16].typ = (&NTI345229);
T984354655_0[16].name = "slots";
T984354655_4[3] = &T984354655_0[30];
T984354655_0[30].kind = 1;
T984354655_0[30].offset = offsetof(PprocHEX3Aobjecttype345220, maxslots);
T984354655_0[30].typ = (&NTI104);
T984354655_0[30].name = "maxSlots";
T984354655_0[10].len = 4; T984354655_0[10].kind = 2; T984354655_0[10].sons = &T984354655_4[0];
NTI345220.node = &T984354655_0[10];
NTI345027.size = sizeof(PprocHEX3Aobjecttype345220*);
NTI345027.kind = 22;
NTI345027.base = (&NTI345220);
NTI345027.flags = 2;
NTI345027.marker = T984354655_12;
T984354655_0[9].kind = 1;
T984354655_0[9].offset = offsetof(Tctx345035, prc);
T984354655_0[9].typ = (&NTI345027);
T984354655_0[9].name = "prc";
T984354655_2[9] = &T984354655_0[31];
T984354655_0[31].kind = 1;
T984354655_0[31].offset = offsetof(Tctx345035, module);
T984354655_0[31].typ = (&NTI294800);
T984354655_0[31].name = "module";
T984354655_2[10] = &T984354655_0[32];
T984354655_0[32].kind = 1;
T984354655_0[32].offset = offsetof(Tctx345035, callsite);
T984354655_0[32].typ = (&NTI294794);
T984354655_0[32].name = "callsite";
T984354655_2[11] = &T984354655_0[33];
NTI345019.size = sizeof(Tevalmode345019);
NTI345019.kind = 14;
NTI345019.base = 0;
NTI345019.flags = 3;
for (T984354655_15 = 0; T984354655_15 < 5; T984354655_15++) {
T984354655_0[T984354655_15+34].kind = 1;
T984354655_0[T984354655_15+34].offset = T984354655_15;
T984354655_0[T984354655_15+34].name = T984354655_14[T984354655_15];
T984354655_13[T984354655_15] = &T984354655_0[T984354655_15+34];
}
T984354655_0[39].len = 5; T984354655_0[39].kind = 2; T984354655_0[39].sons = &T984354655_13[0];
NTI345019.node = &T984354655_0[39];
T984354655_0[33].kind = 1;
T984354655_0[33].offset = offsetof(Tctx345035, mode);
T984354655_0[33].typ = (&NTI345019);
T984354655_0[33].name = "mode";
T984354655_2[12] = &T984354655_0[40];
NTI345021.size = sizeof(Tsandboxflag345021);
NTI345021.kind = 14;
NTI345021.base = 0;
NTI345021.flags = 3;
for (T984354655_18 = 0; T984354655_18 < 3; T984354655_18++) {
T984354655_0[T984354655_18+41].kind = 1;
T984354655_0[T984354655_18+41].offset = T984354655_18;
T984354655_0[T984354655_18+41].name = T984354655_17[T984354655_18];
T984354655_16[T984354655_18] = &T984354655_0[T984354655_18+41];
}
T984354655_0[44].len = 3; T984354655_0[44].kind = 2; T984354655_0[44].sons = &T984354655_16[0];
NTI345021.node = &T984354655_0[44];
NTI345023.size = sizeof(Tsandboxflag345021Set);
NTI345023.kind = 19;
NTI345023.base = (&NTI345021);
NTI345023.flags = 3;
T984354655_0[45].len = 0; T984354655_0[45].kind = 0;
NTI345023.node = &T984354655_0[45];
T984354655_0[40].kind = 1;
T984354655_0[40].offset = offsetof(Tctx345035, features);
T984354655_0[40].typ = (&NTI345023);
T984354655_0[40].name = "features";
T984354655_2[13] = &T984354655_0[46];
T984354655_0[46].kind = 1;
T984354655_0[46].offset = offsetof(Tctx345035, traceactive);
T984354655_0[46].typ = (&NTI130);
T984354655_0[46].name = "traceActive";
T984354655_2[14] = &T984354655_0[47];
T984354655_0[47].kind = 1;
T984354655_0[47].offset = offsetof(Tctx345035, loopiterations);
T984354655_0[47].typ = (&NTI104);
T984354655_0[47].name = "loopIterations";
T984354655_2[15] = &T984354655_0[48];
T984354655_0[48].kind = 1;
T984354655_0[48].offset = offsetof(Tctx345035, comesfromheuristic);
T984354655_0[48].typ = (&NTI193336);
T984354655_0[48].name = "comesFromHeuristic";
T984354655_2[16] = &T984354655_0[49];
NTI345261.size = sizeof(TY345261);
NTI345261.kind = 18;
NTI345261.base = 0;
T984354655_19[0] = &T984354655_0[51];
T984354655_0[51].kind = 1;
T984354655_0[51].offset = offsetof(TY345261, Field0);
T984354655_0[51].typ = (&NTI138);
T984354655_0[51].name = "Field0";
T984354655_19[1] = &T984354655_0[52];
NTI345031.size = sizeof(TY180027);
NTI345031.kind = 18;
NTI345031.base = 0;
NTI345031.flags = 2;
T984354655_20[0] = &T984354655_0[54];
T984354655_0[54].kind = 1;
T984354655_0[54].offset = offsetof(TY180027, Field0);
T984354655_0[54].typ = (&NTI142);
T984354655_0[54].name = "Field0";
T984354655_20[1] = &T984354655_0[55];
T984354655_0[55].kind = 1;
T984354655_0[55].offset = offsetof(TY180027, Field1);
T984354655_0[55].typ = (&NTI180029);
T984354655_0[55].name = "Field1";
T984354655_0[53].len = 2; T984354655_0[53].kind = 2; T984354655_0[53].sons = &T984354655_20[0];
NTI345031.node = &T984354655_0[53];
T984354655_0[52].kind = 1;
T984354655_0[52].offset = offsetof(TY345261, Field1);
T984354655_0[52].typ = (&NTI345031);
T984354655_0[52].name = "Field1";
T984354655_0[50].len = 2; T984354655_0[50].kind = 2; T984354655_0[50].sons = &T984354655_19[0];
NTI345261.node = &T984354655_0[50];
NTI345260.size = sizeof(TY345260*);
NTI345260.kind = 24;
NTI345260.base = (&NTI345261);
NTI345260.marker = T984354655_21;
T984354655_0[49].kind = 1;
T984354655_0[49].offset = offsetof(Tctx345035, callbacks);
T984354655_0[49].typ = (&NTI345260);
T984354655_0[49].name = "callbacks";
T984354655_2[17] = &T984354655_0[56];
T984354655_0[56].kind = 1;
T984354655_0[56].offset = offsetof(Tctx345035, errorflag);
T984354655_0[56].typ = (&NTI138);
T984354655_0[56].name = "errorFlag";
T984354655_0[0].len = 18; T984354655_0[0].kind = 2; T984354655_0[0].sons = &T984354655_2[0];
NTI345035.node = &T984354655_0[0];
NTI345033.size = sizeof(Tctx345035*);
NTI345033.kind = 22;
NTI345033.base = (&NTI345035);
NTI345033.marker = T984354655_22;
}

