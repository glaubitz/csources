/* Generated by Nim Compiler v0.14.3 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
typedef struct Ropeobj180006 Ropeobj180006;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY531153 TY531153;
typedef struct Tcgen531027 Tcgen531027;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tpasscontext343002 Tpasscontext343002;
typedef struct TNimObject TNimObject;
typedef struct Tsym294834 Tsym294834;
typedef struct NimStringDesc NimStringDesc;
typedef struct Tidtable294850 Tidtable294850;
typedef struct Tidpairseq294848 Tidpairseq294848;
typedef struct Intset270030 Intset270030;
typedef struct Trunk270026 Trunk270026;
typedef struct Trunkseq270028 Trunkseq270028;
typedef struct Tlinkedlist148013 Tlinkedlist148013;
typedef struct Tlistentry148007 Tlistentry148007;
typedef struct Tcproc531021 Tcproc531021;
typedef struct Ttypeseq294836 Ttypeseq294836;
typedef struct Tnodetable294862 Tnodetable294862;
typedef struct Tnodepairseq294860 Tnodepairseq294860;
typedef struct Tsymseq294804 Tsymseq294804;
typedef struct Tlineinfo193336 Tlineinfo193336;
typedef struct Tnodeseq294796 Tnodeseq294796;
typedef struct TY193350 TY193350;
typedef struct TY531095 TY531095;
typedef struct Tblock531019 Tblock531019;
typedef struct Cell47305 Cell47305;
typedef struct Cellseq47321 Cellseq47321;
typedef struct Gcheap49818 Gcheap49818;
typedef struct Gcstack49816 Gcstack49816;
typedef struct Memregion29485 Memregion29485;
typedef struct Smallchunk29439 Smallchunk29439;
typedef struct Llchunk29479 Llchunk29479;
typedef struct Bigchunk29441 Bigchunk29441;
typedef struct Intset29414 Intset29414;
typedef struct Trunk29410 Trunk29410;
typedef struct Avlnode29483 Avlnode29483;
typedef struct Gcstat49814 Gcstat49814;
typedef struct Cellset47317 Cellset47317;
typedef struct Pagedesc47313 Pagedesc47313;
typedef struct Tidobj201004 Tidobj201004;
typedef struct TY294929 TY294929;
typedef struct Tstrtable294806 Tstrtable294806;
typedef struct Ttype294840 Ttype294840;
typedef struct Tident201010 Tident201010;
typedef struct Tnode294802 Tnode294802;
typedef struct Tloc294816 Tloc294816;
typedef struct Tlib294820 Tlib294820;
typedef struct Tidpair294846 Tidpair294846;
typedef struct Tnodepair294858 Tnodepair294858;
typedef struct Basechunk29437 Basechunk29437;
typedef struct Freecell29429 Freecell29429;
typedef struct Tinstantiation294824 Tinstantiation294824;
typedef struct TY294960 TY294960;
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
typedef N_NIMCALL_PTR(void, Globalmarkerproc55802) (void);
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  Tpasscontext343002  {
  TNimObject Sup;
NIM_BOOL fromcache;
};
typedef Ropeobj180006* Tcfilesections531009[18];
typedef NU8 Codegenflag531025Set;
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tidtable294850  {
NI counter;
Tidpairseq294848* data;
};
struct  Intset270030  {
NI counter;
NI max;
Trunk270026* head;
Trunkseq270028* data;
};
struct  Tlinkedlist148013  {
Tlistentry148007* head;
Tlistentry148007* tail;
NI counter;
};
struct  Tnodetable294862  {
NI counter;
Tnodepairseq294860* data;
};
typedef Ropeobj180006* TY531136[10];
struct  Tcgen531027  {
  Tpasscontext343002 Sup;
Tcfilesections531009 s;
Codegenflag531025Set flags;
Tsym294834* module;
NimStringDesc* filename;
NimStringDesc* cfilename;
Ropeobj180006* tmpbase;
Tidtable294850 typecache;
Tidtable294850 forwtypecache;
Intset270030 declaredthings;
Intset270030 declaredprotos;
Tlinkedlist148013 headerfiles;
Intset270030 typeinfomarker;
Tcproc531021* initproc;
Tcproc531021* postinitproc;
Tcproc531021* preinitproc;
Ttypeseq294836* typestack;
Tnodetable294862 datacache;
Tsymseq294804* forwardedprocs;
NI typenodes;
NI nimtypes;
Ropeobj180006* typenodesname;
Ropeobj180006* nimtypesname;
NI labels;
TY531136 extensionloaders;
Ropeobj180006* injectstmt;
};
typedef NU8 Codegenflag531025;
struct  Tlineinfo193336  {
NI16 line;
NI16 col;
NI32 fileindex;
};
typedef NU32 Toption171009Set;
struct  Tcproc531021  {
Tsym294834* prc;
NIM_BOOL beforeretneeded;
NIM_BOOL threadvaraccessed;
Tlineinfo193336 lastlineinfo;
Tnodeseq294796* nestedtrystmts;
NI inexceptblock;
TY193350* finallysafepoints;
NI labels;
TY531095* blocks;
NI breakidx;
Toption171009Set options;
NI maxframelen;
Tcgen531027* module;
NI withinloop;
NI splitdecls;
NI gcframeid;
Ropeobj180006* gcframetype;
};
typedef Ropeobj180006* Tcprocsections531013[3];
struct  Tblock531019  {
NI id;
Ropeobj180006* label;
Tcprocsections531013 sections;
NIM_BOOL isloop;
NI16 nestedtrystmts;
NI16 nestedexceptstmts;
NI16 framelen;
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
typedef Smallchunk29439* TY29500[512];
typedef Trunk29410* Trunkbuckets29412[256];
struct  Intset29414  {
Trunkbuckets29412 data;
};
struct  Memregion29485  {
NI minlargeobj;
NI maxlargeobj;
TY29500 freesmallchunks;
Llchunk29479* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk29441* freechunkslist;
Intset29414 chunkstarts;
Avlnode29483* root;
Avlnode29483* deleted;
Avlnode29483* last;
Avlnode29483* freeavlnodes;
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
Memregion29485 region;
Gcstat49814 stat;
Cellset47317 marked;
Cellseq47321 additionalroots;
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
struct  Ropeobj180006  {
  TNimObject Sup;
Ropeobj180006* left;
Ropeobj180006* right;
NI length;
NimStringDesc* data;
};
struct  Tidpair294846  {
Tidobj201004* key;
TNimObject* val;
};
typedef NI TY29418[16];
struct  Trunk270026  {
Trunk270026* next;
NI key;
TY29418 bits;
};
struct  Tlistentry148007  {
  TNimObject Sup;
Tlistentry148007* prev;
Tlistentry148007* next;
};
struct  Tnodepair294858  {
NI h;
Tnode294802* key;
NI val;
};
struct  Gcstack49816  {
Gcstack49816* prev;
Gcstack49816* next;
void* starts;
void* pos;
NI maxstacksize;
};
struct  Basechunk29437  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk29439  {
  Basechunk29437 Sup;
Smallchunk29439* next;
Smallchunk29439* prev;
Freecell29429* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk29479  {
NI size;
NI acc;
Llchunk29479* next;
};
struct  Bigchunk29441  {
  Basechunk29437 Sup;
Bigchunk29441* next;
Bigchunk29441* prev;
NI align;
NF data;
};
struct  Trunk29410  {
Trunk29410* next;
NI key;
TY29418 bits;
};
typedef Avlnode29483* TY29490[2];
struct  Avlnode29483  {
TY29490 link;
NI key;
NI upperbound;
NI level;
};
struct  Pagedesc47313  {
Pagedesc47313* next;
NI key;
TY29418 bits;
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
typedef NU16 Tnodeflag294427Set;
typedef NU8 Tnodekind294020;
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
typedef NU8 Tlibkind294818;
struct  Tlib294820  {
  Tlistentry148007 Sup;
Tlibkind294818 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj180006* name;
Tnode294802* path;
};
struct  Freecell29429  {
Freecell29429* next;
NI zerofield;
};
struct  Tinstantiation294824  {
Tsym294834* sym;
Ttypeseq294836* concretetypes;
NI compilesid;
};
struct TY294961 {
NI Field0;
Tsym294834* Field1;
};
struct TY531153 {
  TGenericSeq Sup;
  Tcgen531027* data[SEQ_DECL_SIZE];
};
struct TY531095 {
  TGenericSeq Sup;
  Tblock531019 data[SEQ_DECL_SIZE];
};
struct Tnodeseq294796 {
  TGenericSeq Sup;
  Tnode294802* data[SEQ_DECL_SIZE];
};
struct TY193350 {
  TGenericSeq Sup;
  Ropeobj180006* data[SEQ_DECL_SIZE];
};
struct Tidpairseq294848 {
  TGenericSeq Sup;
  Tidpair294846 data[SEQ_DECL_SIZE];
};
struct Trunkseq270028 {
  TGenericSeq Sup;
  Trunk270026* data[SEQ_DECL_SIZE];
};
struct Ttypeseq294836 {
  TGenericSeq Sup;
  Ttype294840* data[SEQ_DECL_SIZE];
};
struct Tnodepairseq294860 {
  TGenericSeq Sup;
  Tnodepair294858 data[SEQ_DECL_SIZE];
};
struct Tsymseq294804 {
  TGenericSeq Sup;
  Tsym294834* data[SEQ_DECL_SIZE];
};
struct TY294929 {
  TGenericSeq Sup;
  Tinstantiation294824* data[SEQ_DECL_SIZE];
};
struct TY294960 {
  TGenericSeq Sup;
  TY294961 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d0, NI op0);
N_NIMCALL(void, T3723162438_2)(void);
N_NIMCALL(void, nimRegisterGlobalMarker)(Globalmarkerproc55802 markerproc0);
N_NIMCALL(void, T3723162438_3)(void);
N_NIMCALL(void, T3723162438_4)(void);
N_NIMCALL(void, T3723162438_5)(void);
N_NIMCALL(void, T3723162438_6)(void);
N_NIMCALL(void, T3723162438_13)(void* p, NI op);
N_NIMCALL(void, T3723162438_14)(void* p, NI op);
N_NIMCALL(void, T3723162438_15)(void* p, NI op);
N_NIMCALL(void, T3723162438_16)(void* p, NI op);
N_NIMCALL(void, T3723162438_17)(void);
N_NIMCALL(void, nimGCunref)(void* p0);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ0, NI len0);
N_NIMCALL(void*, newObj)(TNimType* typ0, NI size0);
static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0);
static N_INLINE(Cell47305*, usrtocell_51440_1689653243)(void* usr0);
static N_INLINE(void, rtladdzct_52601_1689653243)(Cell47305* c0);
N_NOINLINE(void, addzct_51417_1689653243)(Cellseq47321* s0, Cell47305* c0);
static N_INLINE(void, asgnRef)(void** dest0, void* src0);
static N_INLINE(void, incref_53419_1689653243)(Cell47305* c0);
static N_INLINE(void, decref_53001_1689653243)(Cell47305* c0);
static N_INLINE(void, nimGCunrefNoCycle)(void* p0);
Ropeobj180006* mainmodprocs_531148_3723162438;
extern TNimType NTI180004; /* Rope */
Ropeobj180006* mainmodinit_531149_3723162438;
Ropeobj180006* othermodsinit_531150_3723162438;
Ropeobj180006* maindatinit_531151_3723162438;
Ropeobj180006* gmapping_531152_3723162438;
TY531153* gmodules_531170_3723162438;
extern TNimType NTI343002; /* TPassContext */
TNimType NTI531027; /* TCGen */
TNimType NTI531009; /* TCFileSections */
TNimType NTI531025; /* Codegenflag */
TNimType NTI531112; /* set[Codegenflag] */
extern TNimType NTI294800; /* PSym */
extern TNimType NTI138; /* string */
extern TNimType NTI294850; /* TIdTable */
extern TNimType NTI270030; /* IntSet */
extern TNimType NTI148013; /* TLinkedList */
TNimType NTI531021; /* TCProc */
extern TNimType NTI130; /* bool */
extern TNimType NTI193336; /* TLineInfo */
extern TNimType NTI294796; /* TNodeSeq */
extern TNimType NTI104; /* int */
extern TNimType NTI193350; /* seq[Rope] */
extern TNimType NTI3604; /* Natural */
TNimType NTI531019; /* TBlock */
TNimType NTI531013; /* TCProcSections */
extern TNimType NTI108; /* int16 */
TNimType NTI531095; /* seq[TBlock] */
extern TNimType NTI171011; /* TOptions */
TNimType NTI531017; /* BProc */
extern TNimType NTI294836; /* TTypeSeq */
extern TNimType NTI294862; /* TNodeTable */
extern TNimType NTI294804; /* TSymSeq */
TNimType NTI531136; /* array[48..57, Rope] */
TNimType NTI531015; /* BModule */
TNimType NTI531153; /* seq[BModule] */
NI gforwardedprocscounter_531171_3723162438;
extern Gcheap49818 gch_49858_1689653243;
extern Toption171009Set goptions_171128_2607990831;
N_NIMCALL(void, T3723162438_2)(void) {
	nimGCvisit((void*)mainmodprocs_531148_3723162438, 0);
}
N_NIMCALL(void, T3723162438_3)(void) {
	nimGCvisit((void*)mainmodinit_531149_3723162438, 0);
}
N_NIMCALL(void, T3723162438_4)(void) {
	nimGCvisit((void*)othermodsinit_531150_3723162438, 0);
}
N_NIMCALL(void, T3723162438_5)(void) {
	nimGCvisit((void*)maindatinit_531151_3723162438, 0);
}
N_NIMCALL(void, T3723162438_6)(void) {
	nimGCvisit((void*)gmapping_531152_3723162438, 0);
}
N_NIMCALL(void, T3723162438_13)(void* p, NI op) {
	TY531095* a;
	NI LOC1;
	NI LOC2;
	a = (TY531095*)p;
	LOC1 = (NI)0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].label, op);
	LOC2 = (NI)0;
	for (LOC2 = 0; LOC2 < 3; LOC2++) {
	nimGCvisit((void*)a->data[LOC1].sections[LOC2], op);
	}
	}
}
N_NIMCALL(void, T3723162438_14)(void* p, NI op) {
	Tcproc531021* a;
	a = (Tcproc531021*)p;
	nimGCvisit((void*)(*a).prc, op);
	nimGCvisit((void*)(*a).nestedtrystmts, op);
	nimGCvisit((void*)(*a).finallysafepoints, op);
	nimGCvisit((void*)(*a).blocks, op);
	nimGCvisit((void*)(*a).module, op);
	nimGCvisit((void*)(*a).gcframetype, op);
}
N_NIMCALL(void, T3723162438_15)(void* p, NI op) {
	Tcgen531027* a;
	NI LOC1;
	NI LOC2;
	a = (Tcgen531027*)p;
	LOC1 = (NI)0;
	for (LOC1 = 0; LOC1 < 18; LOC1++) {
	nimGCvisit((void*)(*a).s[LOC1], op);
	}
	nimGCvisit((void*)(*a).module, op);
	nimGCvisit((void*)(*a).filename, op);
	nimGCvisit((void*)(*a).cfilename, op);
	nimGCvisit((void*)(*a).tmpbase, op);
	nimGCvisit((void*)(*a).typecache.data, op);
	nimGCvisit((void*)(*a).forwtypecache.data, op);
	nimGCvisit((void*)(*a).declaredthings.head, op);
	nimGCvisit((void*)(*a).declaredthings.data, op);
	nimGCvisit((void*)(*a).declaredprotos.head, op);
	nimGCvisit((void*)(*a).declaredprotos.data, op);
	nimGCvisit((void*)(*a).headerfiles.head, op);
	nimGCvisit((void*)(*a).headerfiles.tail, op);
	nimGCvisit((void*)(*a).typeinfomarker.head, op);
	nimGCvisit((void*)(*a).typeinfomarker.data, op);
	nimGCvisit((void*)(*a).initproc, op);
	nimGCvisit((void*)(*a).postinitproc, op);
	nimGCvisit((void*)(*a).preinitproc, op);
	nimGCvisit((void*)(*a).typestack, op);
	nimGCvisit((void*)(*a).datacache.data, op);
	nimGCvisit((void*)(*a).forwardedprocs, op);
	nimGCvisit((void*)(*a).typenodesname, op);
	nimGCvisit((void*)(*a).nimtypesname, op);
	LOC2 = (NI)0;
	for (LOC2 = 0; LOC2 < 10; LOC2++) {
	nimGCvisit((void*)(*a).extensionloaders[LOC2], op);
	}
	nimGCvisit((void*)(*a).injectstmt, op);
}
N_NIMCALL(void, T3723162438_16)(void* p, NI op) {
	TY531153* a;
	NI LOC1;
	a = (TY531153*)p;
	LOC1 = (NI)0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1], op);
	}
}
N_NIMCALL(void, T3723162438_17)(void) {
	nimGCvisit((void*)gmodules_531170_3723162438, 0);
}

static N_INLINE(Cell47305*, usrtocell_51440_1689653243)(void* usr0) {
	Cell47305* result0;
	result0 = (Cell47305*)0;
	result0 = ((Cell47305*) ((NI)((NU32)(((NI) (usr0))) - (NU32)(((NI)sizeof(Cell47305))))));
	return result0;
}

static N_INLINE(void, rtladdzct_52601_1689653243)(Cell47305* c0) {
	addzct_51417_1689653243((&gch_49858_1689653243.zct), c0);
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
			if (!((NU32)((*c0).refcount) < (NU32)(((NI) 8)))) goto LA11;
			rtladdzct_52601_1689653243(c0);
		}
		LA11: ;
	}
	LA7: ;
	(*dest0) = src0;
}

static N_INLINE(void, incref_53419_1689653243)(Cell47305* c0) {
	(*c0).refcount = (NI)((NU32)((*c0).refcount) + (NU32)(((NI) 8)));
}

static N_INLINE(void, decref_53001_1689653243)(Cell47305* c0) {
	{
		(*c0).refcount -= ((NI) 8);
		if (!((NU32)((*c0).refcount) < (NU32)(((NI) 8)))) goto LA3;
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

static N_INLINE(void, nimGCunrefNoCycle)(void* p0) {
	Cell47305* c0;
	c0 = usrtocell_51440_1689653243(p0);
	{
		(*c0).refcount -= ((NI) 8);
		if (!((NU32)((*c0).refcount) < (NU32)(((NI) 8)))) goto LA3;
		rtladdzct_52601_1689653243(c0);
	}
	LA3: ;
}

N_NIMCALL(Tcproc531021*, newproc_531206_3723162438)(Tsym294834* prc0, Tcgen531027* module0) {
	Tcproc531021* result0;
	result0 = (Tcproc531021*)0;
	result0 = (Tcproc531021*) newObj((&NTI531017), sizeof(Tcproc531021));
	asgnRefNoCycle((void**) (&(*result0).prc), prc0);
	asgnRef((void**) (&(*result0).module), module0);
	{
		if (!!((prc0 == NIM_NIL))) goto LA3;
		(*result0).options = (*prc0).options;
	}
	goto LA1;
	LA3: ;
	{
		(*result0).options = goptions_171128_2607990831;
	}
	LA1: ;
	if ((*result0).blocks) nimGCunrefNoCycle((*result0).blocks);
	(*result0).blocks = (TY531095*) newSeqRC1((&NTI531095), ((NI) 1));
	if ((*result0).nestedtrystmts) nimGCunrefNoCycle((*result0).nestedtrystmts);
	(*result0).nestedtrystmts = (Tnodeseq294796*) newSeqRC1((&NTI294796), 0);
	if ((*result0).finallysafepoints) nimGCunrefNoCycle((*result0).finallysafepoints);
	(*result0).finallysafepoints = (TY193350*) newSeqRC1((&NTI193350), 0);
	return result0;
}

N_NIMCALL(Tcgen531027*, bmod_531201_3723162438)(Tsym294834* module0) {
	Tcgen531027* result0;
	result0 = (Tcgen531027*)0;
	result0 = gmodules_531170_3723162438->data[(*module0).position];
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, compiler_cgendataInit000)(void) {
nimRegisterGlobalMarker(T3723162438_2);
nimRegisterGlobalMarker(T3723162438_3);
nimRegisterGlobalMarker(T3723162438_4);
nimRegisterGlobalMarker(T3723162438_5);
nimRegisterGlobalMarker(T3723162438_6);
nimRegisterGlobalMarker(T3723162438_17);
	if (gmodules_531170_3723162438) nimGCunref(gmodules_531170_3723162438);
	gmodules_531170_3723162438 = (TY531153*) newSeqRC1((&NTI531153), 0);
	gforwardedprocscounter_531171_3723162438 = ((NI) 0);
}

NIM_EXTERNC N_NOINLINE(void, compiler_cgendataDatInit000)(void) {
static TNimNode* T3723162438_7[25];
static TNimNode* T3723162438_8[6];
NI T3723162438_10;
static char* NIM_CONST T3723162438_9[6] = {
"preventStackTrace", 
"usesThreadVars", 
"frameDeclared", 
"isHeaderFile", 
"includesStringh", 
"objHasKidsValid"};
static TNimNode* T3723162438_11[17];
static TNimNode* T3723162438_12[7];
static TNimNode T3723162438_0[60];
NTI531027.size = sizeof(Tcgen531027);
NTI531027.kind = 17;
NTI531027.base = (&NTI343002);
T3723162438_7[0] = &T3723162438_0[1];
NTI531009.size = sizeof(Tcfilesections531009);
NTI531009.kind = 16;
NTI531009.base = (&NTI180004);
NTI531009.flags = 2;
T3723162438_0[1].kind = 1;
T3723162438_0[1].offset = offsetof(Tcgen531027, s);
T3723162438_0[1].typ = (&NTI531009);
T3723162438_0[1].name = "s";
T3723162438_7[1] = &T3723162438_0[2];
NTI531025.size = sizeof(Codegenflag531025);
NTI531025.kind = 14;
NTI531025.base = 0;
NTI531025.flags = 3;
for (T3723162438_10 = 0; T3723162438_10 < 6; T3723162438_10++) {
T3723162438_0[T3723162438_10+3].kind = 1;
T3723162438_0[T3723162438_10+3].offset = T3723162438_10;
T3723162438_0[T3723162438_10+3].name = T3723162438_9[T3723162438_10];
T3723162438_8[T3723162438_10] = &T3723162438_0[T3723162438_10+3];
}
T3723162438_0[9].len = 6; T3723162438_0[9].kind = 2; T3723162438_0[9].sons = &T3723162438_8[0];
NTI531025.node = &T3723162438_0[9];
NTI531112.size = sizeof(Codegenflag531025Set);
NTI531112.kind = 19;
NTI531112.base = (&NTI531025);
NTI531112.flags = 3;
T3723162438_0[10].len = 0; T3723162438_0[10].kind = 0;
NTI531112.node = &T3723162438_0[10];
T3723162438_0[2].kind = 1;
T3723162438_0[2].offset = offsetof(Tcgen531027, flags);
T3723162438_0[2].typ = (&NTI531112);
T3723162438_0[2].name = "flags";
T3723162438_7[2] = &T3723162438_0[11];
T3723162438_0[11].kind = 1;
T3723162438_0[11].offset = offsetof(Tcgen531027, module);
T3723162438_0[11].typ = (&NTI294800);
T3723162438_0[11].name = "module";
T3723162438_7[3] = &T3723162438_0[12];
T3723162438_0[12].kind = 1;
T3723162438_0[12].offset = offsetof(Tcgen531027, filename);
T3723162438_0[12].typ = (&NTI138);
T3723162438_0[12].name = "filename";
T3723162438_7[4] = &T3723162438_0[13];
T3723162438_0[13].kind = 1;
T3723162438_0[13].offset = offsetof(Tcgen531027, cfilename);
T3723162438_0[13].typ = (&NTI138);
T3723162438_0[13].name = "cfilename";
T3723162438_7[5] = &T3723162438_0[14];
T3723162438_0[14].kind = 1;
T3723162438_0[14].offset = offsetof(Tcgen531027, tmpbase);
T3723162438_0[14].typ = (&NTI180004);
T3723162438_0[14].name = "tmpBase";
T3723162438_7[6] = &T3723162438_0[15];
T3723162438_0[15].kind = 1;
T3723162438_0[15].offset = offsetof(Tcgen531027, typecache);
T3723162438_0[15].typ = (&NTI294850);
T3723162438_0[15].name = "typeCache";
T3723162438_7[7] = &T3723162438_0[16];
T3723162438_0[16].kind = 1;
T3723162438_0[16].offset = offsetof(Tcgen531027, forwtypecache);
T3723162438_0[16].typ = (&NTI294850);
T3723162438_0[16].name = "forwTypeCache";
T3723162438_7[8] = &T3723162438_0[17];
T3723162438_0[17].kind = 1;
T3723162438_0[17].offset = offsetof(Tcgen531027, declaredthings);
T3723162438_0[17].typ = (&NTI270030);
T3723162438_0[17].name = "declaredThings";
T3723162438_7[9] = &T3723162438_0[18];
T3723162438_0[18].kind = 1;
T3723162438_0[18].offset = offsetof(Tcgen531027, declaredprotos);
T3723162438_0[18].typ = (&NTI270030);
T3723162438_0[18].name = "declaredProtos";
T3723162438_7[10] = &T3723162438_0[19];
T3723162438_0[19].kind = 1;
T3723162438_0[19].offset = offsetof(Tcgen531027, headerfiles);
T3723162438_0[19].typ = (&NTI148013);
T3723162438_0[19].name = "headerFiles";
T3723162438_7[11] = &T3723162438_0[20];
T3723162438_0[20].kind = 1;
T3723162438_0[20].offset = offsetof(Tcgen531027, typeinfomarker);
T3723162438_0[20].typ = (&NTI270030);
T3723162438_0[20].name = "typeInfoMarker";
T3723162438_7[12] = &T3723162438_0[21];
NTI531021.size = sizeof(Tcproc531021);
NTI531021.kind = 18;
NTI531021.base = 0;
T3723162438_11[0] = &T3723162438_0[23];
T3723162438_0[23].kind = 1;
T3723162438_0[23].offset = offsetof(Tcproc531021, prc);
T3723162438_0[23].typ = (&NTI294800);
T3723162438_0[23].name = "prc";
T3723162438_11[1] = &T3723162438_0[24];
T3723162438_0[24].kind = 1;
T3723162438_0[24].offset = offsetof(Tcproc531021, beforeretneeded);
T3723162438_0[24].typ = (&NTI130);
T3723162438_0[24].name = "beforeRetNeeded";
T3723162438_11[2] = &T3723162438_0[25];
T3723162438_0[25].kind = 1;
T3723162438_0[25].offset = offsetof(Tcproc531021, threadvaraccessed);
T3723162438_0[25].typ = (&NTI130);
T3723162438_0[25].name = "threadVarAccessed";
T3723162438_11[3] = &T3723162438_0[26];
T3723162438_0[26].kind = 1;
T3723162438_0[26].offset = offsetof(Tcproc531021, lastlineinfo);
T3723162438_0[26].typ = (&NTI193336);
T3723162438_0[26].name = "lastLineInfo";
T3723162438_11[4] = &T3723162438_0[27];
T3723162438_0[27].kind = 1;
T3723162438_0[27].offset = offsetof(Tcproc531021, nestedtrystmts);
T3723162438_0[27].typ = (&NTI294796);
T3723162438_0[27].name = "nestedTryStmts";
T3723162438_11[5] = &T3723162438_0[28];
T3723162438_0[28].kind = 1;
T3723162438_0[28].offset = offsetof(Tcproc531021, inexceptblock);
T3723162438_0[28].typ = (&NTI104);
T3723162438_0[28].name = "inExceptBlock";
T3723162438_11[6] = &T3723162438_0[29];
T3723162438_0[29].kind = 1;
T3723162438_0[29].offset = offsetof(Tcproc531021, finallysafepoints);
T3723162438_0[29].typ = (&NTI193350);
T3723162438_0[29].name = "finallySafePoints";
T3723162438_11[7] = &T3723162438_0[30];
T3723162438_0[30].kind = 1;
T3723162438_0[30].offset = offsetof(Tcproc531021, labels);
T3723162438_0[30].typ = (&NTI3604);
T3723162438_0[30].name = "labels";
T3723162438_11[8] = &T3723162438_0[31];
NTI531019.size = sizeof(Tblock531019);
NTI531019.kind = 18;
NTI531019.base = 0;
NTI531019.flags = 2;
T3723162438_12[0] = &T3723162438_0[33];
T3723162438_0[33].kind = 1;
T3723162438_0[33].offset = offsetof(Tblock531019, id);
T3723162438_0[33].typ = (&NTI104);
T3723162438_0[33].name = "id";
T3723162438_12[1] = &T3723162438_0[34];
T3723162438_0[34].kind = 1;
T3723162438_0[34].offset = offsetof(Tblock531019, label);
T3723162438_0[34].typ = (&NTI180004);
T3723162438_0[34].name = "label";
T3723162438_12[2] = &T3723162438_0[35];
NTI531013.size = sizeof(Tcprocsections531013);
NTI531013.kind = 16;
NTI531013.base = (&NTI180004);
NTI531013.flags = 2;
T3723162438_0[35].kind = 1;
T3723162438_0[35].offset = offsetof(Tblock531019, sections);
T3723162438_0[35].typ = (&NTI531013);
T3723162438_0[35].name = "sections";
T3723162438_12[3] = &T3723162438_0[36];
T3723162438_0[36].kind = 1;
T3723162438_0[36].offset = offsetof(Tblock531019, isloop);
T3723162438_0[36].typ = (&NTI130);
T3723162438_0[36].name = "isLoop";
T3723162438_12[4] = &T3723162438_0[37];
T3723162438_0[37].kind = 1;
T3723162438_0[37].offset = offsetof(Tblock531019, nestedtrystmts);
T3723162438_0[37].typ = (&NTI108);
T3723162438_0[37].name = "nestedTryStmts";
T3723162438_12[5] = &T3723162438_0[38];
T3723162438_0[38].kind = 1;
T3723162438_0[38].offset = offsetof(Tblock531019, nestedexceptstmts);
T3723162438_0[38].typ = (&NTI108);
T3723162438_0[38].name = "nestedExceptStmts";
T3723162438_12[6] = &T3723162438_0[39];
T3723162438_0[39].kind = 1;
T3723162438_0[39].offset = offsetof(Tblock531019, framelen);
T3723162438_0[39].typ = (&NTI108);
T3723162438_0[39].name = "frameLen";
T3723162438_0[32].len = 7; T3723162438_0[32].kind = 2; T3723162438_0[32].sons = &T3723162438_12[0];
NTI531019.node = &T3723162438_0[32];
NTI531095.size = sizeof(TY531095*);
NTI531095.kind = 24;
NTI531095.base = (&NTI531019);
NTI531095.flags = 2;
NTI531095.marker = T3723162438_13;
T3723162438_0[31].kind = 1;
T3723162438_0[31].offset = offsetof(Tcproc531021, blocks);
T3723162438_0[31].typ = (&NTI531095);
T3723162438_0[31].name = "blocks";
T3723162438_11[9] = &T3723162438_0[40];
T3723162438_0[40].kind = 1;
T3723162438_0[40].offset = offsetof(Tcproc531021, breakidx);
T3723162438_0[40].typ = (&NTI104);
T3723162438_0[40].name = "breakIdx";
T3723162438_11[10] = &T3723162438_0[41];
T3723162438_0[41].kind = 1;
T3723162438_0[41].offset = offsetof(Tcproc531021, options);
T3723162438_0[41].typ = (&NTI171011);
T3723162438_0[41].name = "options";
T3723162438_11[11] = &T3723162438_0[42];
T3723162438_0[42].kind = 1;
T3723162438_0[42].offset = offsetof(Tcproc531021, maxframelen);
T3723162438_0[42].typ = (&NTI104);
T3723162438_0[42].name = "maxFrameLen";
T3723162438_11[12] = &T3723162438_0[43];
T3723162438_0[43].kind = 1;
T3723162438_0[43].offset = offsetof(Tcproc531021, module);
T3723162438_0[43].typ = (&NTI531015);
T3723162438_0[43].name = "module";
T3723162438_11[13] = &T3723162438_0[44];
T3723162438_0[44].kind = 1;
T3723162438_0[44].offset = offsetof(Tcproc531021, withinloop);
T3723162438_0[44].typ = (&NTI104);
T3723162438_0[44].name = "withinLoop";
T3723162438_11[14] = &T3723162438_0[45];
T3723162438_0[45].kind = 1;
T3723162438_0[45].offset = offsetof(Tcproc531021, splitdecls);
T3723162438_0[45].typ = (&NTI104);
T3723162438_0[45].name = "splitDecls";
T3723162438_11[15] = &T3723162438_0[46];
T3723162438_0[46].kind = 1;
T3723162438_0[46].offset = offsetof(Tcproc531021, gcframeid);
T3723162438_0[46].typ = (&NTI3604);
T3723162438_0[46].name = "gcFrameId";
T3723162438_11[16] = &T3723162438_0[47];
T3723162438_0[47].kind = 1;
T3723162438_0[47].offset = offsetof(Tcproc531021, gcframetype);
T3723162438_0[47].typ = (&NTI180004);
T3723162438_0[47].name = "gcFrameType";
T3723162438_0[22].len = 17; T3723162438_0[22].kind = 2; T3723162438_0[22].sons = &T3723162438_11[0];
NTI531021.node = &T3723162438_0[22];
NTI531017.size = sizeof(Tcproc531021*);
NTI531017.kind = 22;
NTI531017.base = (&NTI531021);
NTI531017.marker = T3723162438_14;
T3723162438_0[21].kind = 1;
T3723162438_0[21].offset = offsetof(Tcgen531027, initproc);
T3723162438_0[21].typ = (&NTI531017);
T3723162438_0[21].name = "initProc";
T3723162438_7[13] = &T3723162438_0[48];
T3723162438_0[48].kind = 1;
T3723162438_0[48].offset = offsetof(Tcgen531027, postinitproc);
T3723162438_0[48].typ = (&NTI531017);
T3723162438_0[48].name = "postInitProc";
T3723162438_7[14] = &T3723162438_0[49];
T3723162438_0[49].kind = 1;
T3723162438_0[49].offset = offsetof(Tcgen531027, preinitproc);
T3723162438_0[49].typ = (&NTI531017);
T3723162438_0[49].name = "preInitProc";
T3723162438_7[15] = &T3723162438_0[50];
T3723162438_0[50].kind = 1;
T3723162438_0[50].offset = offsetof(Tcgen531027, typestack);
T3723162438_0[50].typ = (&NTI294836);
T3723162438_0[50].name = "typeStack";
T3723162438_7[16] = &T3723162438_0[51];
T3723162438_0[51].kind = 1;
T3723162438_0[51].offset = offsetof(Tcgen531027, datacache);
T3723162438_0[51].typ = (&NTI294862);
T3723162438_0[51].name = "dataCache";
T3723162438_7[17] = &T3723162438_0[52];
T3723162438_0[52].kind = 1;
T3723162438_0[52].offset = offsetof(Tcgen531027, forwardedprocs);
T3723162438_0[52].typ = (&NTI294804);
T3723162438_0[52].name = "forwardedProcs";
T3723162438_7[18] = &T3723162438_0[53];
T3723162438_0[53].kind = 1;
T3723162438_0[53].offset = offsetof(Tcgen531027, typenodes);
T3723162438_0[53].typ = (&NTI104);
T3723162438_0[53].name = "typeNodes";
T3723162438_7[19] = &T3723162438_0[54];
T3723162438_0[54].kind = 1;
T3723162438_0[54].offset = offsetof(Tcgen531027, nimtypes);
T3723162438_0[54].typ = (&NTI104);
T3723162438_0[54].name = "nimTypes";
T3723162438_7[20] = &T3723162438_0[55];
T3723162438_0[55].kind = 1;
T3723162438_0[55].offset = offsetof(Tcgen531027, typenodesname);
T3723162438_0[55].typ = (&NTI180004);
T3723162438_0[55].name = "typeNodesName";
T3723162438_7[21] = &T3723162438_0[56];
T3723162438_0[56].kind = 1;
T3723162438_0[56].offset = offsetof(Tcgen531027, nimtypesname);
T3723162438_0[56].typ = (&NTI180004);
T3723162438_0[56].name = "nimTypesName";
T3723162438_7[22] = &T3723162438_0[57];
T3723162438_0[57].kind = 1;
T3723162438_0[57].offset = offsetof(Tcgen531027, labels);
T3723162438_0[57].typ = (&NTI3604);
T3723162438_0[57].name = "labels";
T3723162438_7[23] = &T3723162438_0[58];
NTI531136.size = sizeof(TY531136);
NTI531136.kind = 16;
NTI531136.base = (&NTI180004);
NTI531136.flags = 2;
T3723162438_0[58].kind = 1;
T3723162438_0[58].offset = offsetof(Tcgen531027, extensionloaders);
T3723162438_0[58].typ = (&NTI531136);
T3723162438_0[58].name = "extensionLoaders";
T3723162438_7[24] = &T3723162438_0[59];
T3723162438_0[59].kind = 1;
T3723162438_0[59].offset = offsetof(Tcgen531027, injectstmt);
T3723162438_0[59].typ = (&NTI180004);
T3723162438_0[59].name = "injectStmt";
T3723162438_0[0].len = 25; T3723162438_0[0].kind = 2; T3723162438_0[0].sons = &T3723162438_7[0];
NTI531027.node = &T3723162438_0[0];
NTI531015.size = sizeof(Tcgen531027*);
NTI531015.kind = 22;
NTI531015.base = (&NTI531027);
NTI531015.marker = T3723162438_15;
NTI531153.size = sizeof(TY531153*);
NTI531153.kind = 24;
NTI531153.base = (&NTI531015);
NTI531153.marker = T3723162438_16;
}

