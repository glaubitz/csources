/* Generated by Nim Compiler v0.14.3 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
typedef struct Ropeobj177006 Ropeobj177006;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY527153 TY527153;
typedef struct Tcgen527027 Tcgen527027;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tpasscontext339002 Tpasscontext339002;
typedef struct TNimObject TNimObject;
typedef struct Tsym290834 Tsym290834;
typedef struct NimStringDesc NimStringDesc;
typedef struct Tidtable290850 Tidtable290850;
typedef struct Tidpairseq290848 Tidpairseq290848;
typedef struct Intset266030 Intset266030;
typedef struct Trunk266026 Trunk266026;
typedef struct Trunkseq266028 Trunkseq266028;
typedef struct Tlinkedlist147013 Tlinkedlist147013;
typedef struct Tlistentry147007 Tlistentry147007;
typedef struct Tcproc527021 Tcproc527021;
typedef struct Ttypeseq290836 Ttypeseq290836;
typedef struct Tnodetable290862 Tnodetable290862;
typedef struct Tnodepairseq290860 Tnodepairseq290860;
typedef struct Tsymseq290804 Tsymseq290804;
typedef struct Tlineinfo189336 Tlineinfo189336;
typedef struct Tnodeseq290796 Tnodeseq290796;
typedef struct TY189350 TY189350;
typedef struct TY527095 TY527095;
typedef struct Tblock527019 Tblock527019;
typedef struct Cell46904 Cell46904;
typedef struct Cellseq46920 Cellseq46920;
typedef struct Gcheap49418 Gcheap49418;
typedef struct Gcstack49416 Gcstack49416;
typedef struct Memregion29085 Memregion29085;
typedef struct Smallchunk29039 Smallchunk29039;
typedef struct Llchunk29079 Llchunk29079;
typedef struct Bigchunk29041 Bigchunk29041;
typedef struct Intset29014 Intset29014;
typedef struct Trunk29010 Trunk29010;
typedef struct Avlnode29083 Avlnode29083;
typedef struct Gcstat49414 Gcstat49414;
typedef struct Cellset46916 Cellset46916;
typedef struct Pagedesc46912 Pagedesc46912;
typedef struct Tidobj197004 Tidobj197004;
typedef struct TY290929 TY290929;
typedef struct Tstrtable290806 Tstrtable290806;
typedef struct Ttype290840 Ttype290840;
typedef struct Tident197010 Tident197010;
typedef struct Tnode290802 Tnode290802;
typedef struct Tloc290816 Tloc290816;
typedef struct Tlib290820 Tlib290820;
typedef struct Tidpair290846 Tidpair290846;
typedef struct Tnodepair290858 Tnodepair290858;
typedef struct Basechunk29037 Basechunk29037;
typedef struct Freecell29029 Freecell29029;
typedef struct Tinstantiation290824 Tinstantiation290824;
typedef struct TY290960 TY290960;
typedef struct TY290961 TY290961;
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
typedef N_NIMCALL_PTR(void, Globalmarkerproc55402) (void);
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  Tpasscontext339002  {
  TNimObject Sup;
NIM_BOOL fromcache;
};
typedef Ropeobj177006* Tcfilesections527009[18];
typedef NU8 Codegenflag527025Set;
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tidtable290850  {
NI counter;
Tidpairseq290848* data;
};
struct  Intset266030  {
NI counter;
NI max;
Trunk266026* head;
Trunkseq266028* data;
};
struct  Tlinkedlist147013  {
Tlistentry147007* head;
Tlistentry147007* tail;
NI counter;
};
struct  Tnodetable290862  {
NI counter;
Tnodepairseq290860* data;
};
typedef Ropeobj177006* TY527136[10];
struct  Tcgen527027  {
  Tpasscontext339002 Sup;
Tcfilesections527009 s;
Codegenflag527025Set flags;
Tsym290834* module;
NimStringDesc* filename;
NimStringDesc* cfilename;
Ropeobj177006* tmpbase;
Tidtable290850 typecache;
Tidtable290850 forwtypecache;
Intset266030 declaredthings;
Intset266030 declaredprotos;
Tlinkedlist147013 headerfiles;
Intset266030 typeinfomarker;
Tcproc527021* initproc;
Tcproc527021* postinitproc;
Tcproc527021* preinitproc;
Ttypeseq290836* typestack;
Tnodetable290862 datacache;
Tsymseq290804* forwardedprocs;
NI typenodes;
NI nimtypes;
Ropeobj177006* typenodesname;
Ropeobj177006* nimtypesname;
NI labels;
TY527136 extensionloaders;
Ropeobj177006* injectstmt;
};
typedef NU8 Codegenflag527025;
struct  Tlineinfo189336  {
NI16 line;
NI16 col;
NI32 fileindex;
};
typedef NU32 Toption168009Set;
struct  Tcproc527021  {
Tsym290834* prc;
NIM_BOOL beforeretneeded;
NIM_BOOL threadvaraccessed;
Tlineinfo189336 lastlineinfo;
Tnodeseq290796* nestedtrystmts;
NI inexceptblock;
TY189350* finallysafepoints;
NI labels;
TY527095* blocks;
NI breakidx;
Toption168009Set options;
NI maxframelen;
Tcgen527027* module;
NI withinloop;
NI splitdecls;
NI gcframeid;
Ropeobj177006* gcframetype;
};
typedef Ropeobj177006* Tcprocsections527013[3];
struct  Tblock527019  {
NI id;
Ropeobj177006* label;
Tcprocsections527013 sections;
NIM_BOOL isloop;
NI16 nestedtrystmts;
NI16 nestedexceptstmts;
NI16 framelen;
};
struct  Cell46904  {
NI refcount;
TNimType* typ;
};
struct  Cellseq46920  {
NI len;
NI cap;
Cell46904** d;
};
typedef Smallchunk29039* TY29100[512];
typedef Trunk29010* Trunkbuckets29012[256];
struct  Intset29014  {
Trunkbuckets29012 data;
};
struct  Memregion29085  {
NI minlargeobj;
NI maxlargeobj;
TY29100 freesmallchunks;
Llchunk29079* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk29041* freechunkslist;
Intset29014 chunkstarts;
Avlnode29083* root;
Avlnode29083* deleted;
Avlnode29083* last;
Avlnode29083* freeavlnodes;
NIM_BOOL locked;
};
struct  Gcstat49414  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Cellset46916  {
NI counter;
NI max;
Pagedesc46912* head;
Pagedesc46912** data;
};
struct  Gcheap49418  {
Gcstack49416* stack;
void* stackbottom;
NI cyclethreshold;
Cellseq46920 zct;
Cellseq46920 decstack;
Cellseq46920 tempstack;
NI recgclock;
Memregion29085 region;
Gcstat49414 stat;
Cellset46916 marked;
Cellseq46920 additionalroots;
};
struct  Tidobj197004  {
  TNimObject Sup;
NI id;
};
typedef NU8 Tsymkind290435;
struct  Tstrtable290806  {
NI counter;
Tsymseq290804* data;
};
typedef NU16 Tmagic290524;
typedef NU32 Tsymflag290184Set;
typedef NU8 Tlockind290808;
typedef NU8 Tstorageloc290812;
typedef NU16 Tlocflag290810Set;
struct  Tloc290816  {
Tlockind290808 k;
Tstorageloc290812 s;
Tlocflag290810Set flags;
Ttype290840* t;
Ropeobj177006* r;
};
struct  Tsym290834  {
  Tidobj197004 Sup;
Tsymkind290435 kind;
union{
struct {Ttypeseq290836* typeinstcache;
} S1;
struct {TY290929* procinstcache;
Tsym290834* gcunsafetyreason;
} S2;
struct {TY290929* usedgenerics;
Tstrtable290806 tab;
} S3;
struct {Tsym290834* guard;
NI bitsize;
} S4;
} kindU;
Tmagic290524 magic;
Ttype290840* typ;
Tident197010* name;
Tlineinfo189336 info;
Tsym290834* owner;
Tsymflag290184Set flags;
Tnode290802* ast;
Toption168009Set options;
NI position;
NI offset;
Tloc290816 loc;
Tlib290820* annex;
Tnode290802* constraint;
};
struct  Ropeobj177006  {
  TNimObject Sup;
Ropeobj177006* left;
Ropeobj177006* right;
NI length;
NimStringDesc* data;
};
struct  Tidpair290846  {
Tidobj197004* key;
TNimObject* val;
};
typedef NI TY29018[16];
struct  Trunk266026  {
Trunk266026* next;
NI key;
TY29018 bits;
};
struct  Tlistentry147007  {
  TNimObject Sup;
Tlistentry147007* prev;
Tlistentry147007* next;
};
struct  Tnodepair290858  {
NI h;
Tnode290802* key;
NI val;
};
struct  Gcstack49416  {
Gcstack49416* prev;
Gcstack49416* next;
void* starts;
void* pos;
NI maxstacksize;
};
struct  Basechunk29037  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk29039  {
  Basechunk29037 Sup;
Smallchunk29039* next;
Smallchunk29039* prev;
Freecell29029* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk29079  {
NI size;
NI acc;
Llchunk29079* next;
};
struct  Bigchunk29041  {
  Basechunk29037 Sup;
Bigchunk29041* next;
Bigchunk29041* prev;
NI align;
NF data;
};
struct  Trunk29010  {
Trunk29010* next;
NI key;
TY29018 bits;
};
typedef Avlnode29083* TY29090[2];
struct  Avlnode29083  {
TY29090 link;
NI key;
NI upperbound;
NI level;
};
struct  Pagedesc46912  {
Pagedesc46912* next;
NI key;
TY29018 bits;
};
typedef NU8 Ttypekind290244;
typedef NU8 Tcallingconvention290002;
typedef NU32 Ttypeflag290431Set;
struct  Ttype290840  {
  Tidobj197004 Sup;
Ttypekind290244 kind;
Tcallingconvention290002 callconv;
Ttypeflag290431Set flags;
Ttypeseq290836* sons;
Tnode290802* n;
Tsym290834* owner;
Tsym290834* sym;
Tsym290834* destructor;
Tsym290834* deepcopy;
Tsym290834* assignment;
TY290960* methods;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc290816 loc;
};
struct  Tident197010  {
  Tidobj197004 Sup;
NimStringDesc* s;
Tident197010* next;
NI h;
};
typedef NU16 Tnodeflag290427Set;
typedef NU8 Tnodekind290020;
struct  Tnode290802  {
Ttype290840* typ;
Tlineinfo189336 info;
Tnodeflag290427Set flags;
Tnodekind290020 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym290834* sym;
} S4;
struct {Tident197010* ident;
} S5;
struct {Tnodeseq290796* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
typedef NU8 Tlibkind290818;
struct  Tlib290820  {
  Tlistentry147007 Sup;
Tlibkind290818 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj177006* name;
Tnode290802* path;
};
struct  Freecell29029  {
Freecell29029* next;
NI zerofield;
};
struct  Tinstantiation290824  {
Tsym290834* sym;
Ttypeseq290836* concretetypes;
NI compilesid;
};
struct TY290961 {
NI Field0;
Tsym290834* Field1;
};
struct TY527153 {
  TGenericSeq Sup;
  Tcgen527027* data[SEQ_DECL_SIZE];
};
struct TY527095 {
  TGenericSeq Sup;
  Tblock527019 data[SEQ_DECL_SIZE];
};
struct Tnodeseq290796 {
  TGenericSeq Sup;
  Tnode290802* data[SEQ_DECL_SIZE];
};
struct TY189350 {
  TGenericSeq Sup;
  Ropeobj177006* data[SEQ_DECL_SIZE];
};
struct Tidpairseq290848 {
  TGenericSeq Sup;
  Tidpair290846 data[SEQ_DECL_SIZE];
};
struct Trunkseq266028 {
  TGenericSeq Sup;
  Trunk266026* data[SEQ_DECL_SIZE];
};
struct Ttypeseq290836 {
  TGenericSeq Sup;
  Ttype290840* data[SEQ_DECL_SIZE];
};
struct Tnodepairseq290860 {
  TGenericSeq Sup;
  Tnodepair290858 data[SEQ_DECL_SIZE];
};
struct Tsymseq290804 {
  TGenericSeq Sup;
  Tsym290834* data[SEQ_DECL_SIZE];
};
struct TY290929 {
  TGenericSeq Sup;
  Tinstantiation290824* data[SEQ_DECL_SIZE];
};
struct TY290960 {
  TGenericSeq Sup;
  TY290961 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d0, NI op0);
N_NIMCALL(void, T3723162438_2)(void);
N_NIMCALL(void, nimRegisterGlobalMarker)(Globalmarkerproc55402 markerproc0);
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
static N_INLINE(Cell46904*, usrtocell_51040_1689653243)(void* usr0);
static N_INLINE(void, rtladdzct_52201_1689653243)(Cell46904* c0);
N_NOINLINE(void, addzct_51017_1689653243)(Cellseq46920* s0, Cell46904* c0);
static N_INLINE(void, asgnRef)(void** dest0, void* src0);
static N_INLINE(void, incref_53019_1689653243)(Cell46904* c0);
static N_INLINE(void, decref_52601_1689653243)(Cell46904* c0);
static N_INLINE(void, nimGCunrefNoCycle)(void* p0);
Ropeobj177006* mainmodprocs_527148_3723162438;
extern TNimType NTI177004; /* Rope */
Ropeobj177006* mainmodinit_527149_3723162438;
Ropeobj177006* othermodsinit_527150_3723162438;
Ropeobj177006* maindatinit_527151_3723162438;
Ropeobj177006* gmapping_527152_3723162438;
TY527153* gmodules_527170_3723162438;
extern TNimType NTI339002; /* TPassContext */
TNimType NTI527027; /* TCGen */
TNimType NTI527009; /* TCFileSections */
TNimType NTI527025; /* Codegenflag */
TNimType NTI527112; /* set[Codegenflag] */
extern TNimType NTI290800; /* PSym */
extern TNimType NTI138; /* string */
extern TNimType NTI290850; /* TIdTable */
extern TNimType NTI266030; /* IntSet */
extern TNimType NTI147013; /* TLinkedList */
TNimType NTI527021; /* TCProc */
extern TNimType NTI130; /* bool */
extern TNimType NTI189336; /* TLineInfo */
extern TNimType NTI290796; /* TNodeSeq */
extern TNimType NTI104; /* int */
extern TNimType NTI189350; /* seq[Rope] */
extern TNimType NTI3604; /* Natural */
TNimType NTI527019; /* TBlock */
TNimType NTI527013; /* TCProcSections */
extern TNimType NTI108; /* int16 */
TNimType NTI527095; /* seq[TBlock] */
extern TNimType NTI168011; /* TOptions */
TNimType NTI527017; /* BProc */
extern TNimType NTI290836; /* TTypeSeq */
extern TNimType NTI290862; /* TNodeTable */
extern TNimType NTI290804; /* TSymSeq */
TNimType NTI527136; /* array[48..57, Rope] */
TNimType NTI527015; /* BModule */
TNimType NTI527153; /* seq[BModule] */
NI gforwardedprocscounter_527171_3723162438;
extern Gcheap49418 gch_49458_1689653243;
extern Toption168009Set goptions_168128_2607990831;
N_NIMCALL(void, T3723162438_2)(void) {
	nimGCvisit((void*)mainmodprocs_527148_3723162438, 0);
}
N_NIMCALL(void, T3723162438_3)(void) {
	nimGCvisit((void*)mainmodinit_527149_3723162438, 0);
}
N_NIMCALL(void, T3723162438_4)(void) {
	nimGCvisit((void*)othermodsinit_527150_3723162438, 0);
}
N_NIMCALL(void, T3723162438_5)(void) {
	nimGCvisit((void*)maindatinit_527151_3723162438, 0);
}
N_NIMCALL(void, T3723162438_6)(void) {
	nimGCvisit((void*)gmapping_527152_3723162438, 0);
}
N_NIMCALL(void, T3723162438_13)(void* p, NI op) {
	TY527095* a;
	NI LOC1;
	NI LOC2;
	a = (TY527095*)p;
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
	Tcproc527021* a;
	a = (Tcproc527021*)p;
	nimGCvisit((void*)(*a).prc, op);
	nimGCvisit((void*)(*a).nestedtrystmts, op);
	nimGCvisit((void*)(*a).finallysafepoints, op);
	nimGCvisit((void*)(*a).blocks, op);
	nimGCvisit((void*)(*a).module, op);
	nimGCvisit((void*)(*a).gcframetype, op);
}
N_NIMCALL(void, T3723162438_15)(void* p, NI op) {
	Tcgen527027* a;
	NI LOC1;
	NI LOC2;
	a = (Tcgen527027*)p;
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
	TY527153* a;
	NI LOC1;
	a = (TY527153*)p;
	LOC1 = (NI)0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1], op);
	}
}
N_NIMCALL(void, T3723162438_17)(void) {
	nimGCvisit((void*)gmodules_527170_3723162438, 0);
}

static N_INLINE(Cell46904*, usrtocell_51040_1689653243)(void* usr0) {
	Cell46904* result0;
	result0 = (Cell46904*)0;
	result0 = ((Cell46904*) ((NI)((NU32)(((NI) (usr0))) - (NU32)(((NI)sizeof(Cell46904))))));
	return result0;
}

static N_INLINE(void, rtladdzct_52201_1689653243)(Cell46904* c0) {
	addzct_51017_1689653243((&gch_49458_1689653243.zct), c0);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0) {
	{
		Cell46904* c0;
		if (!!((src0 == NIM_NIL))) goto LA3;
		c0 = usrtocell_51040_1689653243(src0);
		(*c0).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Cell46904* c0;
		if (!!(((*dest0) == NIM_NIL))) goto LA7;
		c0 = usrtocell_51040_1689653243((*dest0));
		{
			(*c0).refcount -= ((NI) 8);
			if (!((NU32)((*c0).refcount) < (NU32)(((NI) 8)))) goto LA11;
			rtladdzct_52201_1689653243(c0);
		}
		LA11: ;
	}
	LA7: ;
	(*dest0) = src0;
}

static N_INLINE(void, incref_53019_1689653243)(Cell46904* c0) {
	(*c0).refcount = (NI)((NU32)((*c0).refcount) + (NU32)(((NI) 8)));
}

static N_INLINE(void, decref_52601_1689653243)(Cell46904* c0) {
	{
		(*c0).refcount -= ((NI) 8);
		if (!((NU32)((*c0).refcount) < (NU32)(((NI) 8)))) goto LA3;
		rtladdzct_52201_1689653243(c0);
	}
	LA3: ;
}

static N_INLINE(void, asgnRef)(void** dest0, void* src0) {
	{
		Cell46904* LOC5;
		if (!!((src0 == NIM_NIL))) goto LA3;
		LOC5 = (Cell46904*)0;
		LOC5 = usrtocell_51040_1689653243(src0);
		incref_53019_1689653243(LOC5);
	}
	LA3: ;
	{
		Cell46904* LOC10;
		if (!!(((*dest0) == NIM_NIL))) goto LA8;
		LOC10 = (Cell46904*)0;
		LOC10 = usrtocell_51040_1689653243((*dest0));
		decref_52601_1689653243(LOC10);
	}
	LA8: ;
	(*dest0) = src0;
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p0) {
	Cell46904* c0;
	c0 = usrtocell_51040_1689653243(p0);
	{
		(*c0).refcount -= ((NI) 8);
		if (!((NU32)((*c0).refcount) < (NU32)(((NI) 8)))) goto LA3;
		rtladdzct_52201_1689653243(c0);
	}
	LA3: ;
}

N_NIMCALL(Tcproc527021*, newproc_527206_3723162438)(Tsym290834* prc0, Tcgen527027* module0) {
	Tcproc527021* result0;
	result0 = (Tcproc527021*)0;
	result0 = (Tcproc527021*) newObj((&NTI527017), sizeof(Tcproc527021));
	asgnRefNoCycle((void**) (&(*result0).prc), prc0);
	asgnRef((void**) (&(*result0).module), module0);
	{
		if (!!((prc0 == NIM_NIL))) goto LA3;
		(*result0).options = (*prc0).options;
	}
	goto LA1;
	LA3: ;
	{
		(*result0).options = goptions_168128_2607990831;
	}
	LA1: ;
	if ((*result0).blocks) nimGCunrefNoCycle((*result0).blocks);
	(*result0).blocks = (TY527095*) newSeqRC1((&NTI527095), ((NI) 1));
	if ((*result0).nestedtrystmts) nimGCunrefNoCycle((*result0).nestedtrystmts);
	(*result0).nestedtrystmts = (Tnodeseq290796*) newSeqRC1((&NTI290796), 0);
	if ((*result0).finallysafepoints) nimGCunrefNoCycle((*result0).finallysafepoints);
	(*result0).finallysafepoints = (TY189350*) newSeqRC1((&NTI189350), 0);
	return result0;
}

N_NIMCALL(Tcgen527027*, bmod_527201_3723162438)(Tsym290834* module0) {
	Tcgen527027* result0;
	result0 = (Tcgen527027*)0;
	result0 = gmodules_527170_3723162438->data[(*module0).position];
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, compiler_cgendataInit000)(void) {
nimRegisterGlobalMarker(T3723162438_2);
nimRegisterGlobalMarker(T3723162438_3);
nimRegisterGlobalMarker(T3723162438_4);
nimRegisterGlobalMarker(T3723162438_5);
nimRegisterGlobalMarker(T3723162438_6);
nimRegisterGlobalMarker(T3723162438_17);
	if (gmodules_527170_3723162438) nimGCunref(gmodules_527170_3723162438);
	gmodules_527170_3723162438 = (TY527153*) newSeqRC1((&NTI527153), 0);
	gforwardedprocscounter_527171_3723162438 = ((NI) 0);
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
NTI527027.size = sizeof(Tcgen527027);
NTI527027.kind = 17;
NTI527027.base = (&NTI339002);
T3723162438_7[0] = &T3723162438_0[1];
NTI527009.size = sizeof(Tcfilesections527009);
NTI527009.kind = 16;
NTI527009.base = (&NTI177004);
NTI527009.flags = 2;
T3723162438_0[1].kind = 1;
T3723162438_0[1].offset = offsetof(Tcgen527027, s);
T3723162438_0[1].typ = (&NTI527009);
T3723162438_0[1].name = "s";
T3723162438_7[1] = &T3723162438_0[2];
NTI527025.size = sizeof(Codegenflag527025);
NTI527025.kind = 14;
NTI527025.base = 0;
NTI527025.flags = 3;
for (T3723162438_10 = 0; T3723162438_10 < 6; T3723162438_10++) {
T3723162438_0[T3723162438_10+3].kind = 1;
T3723162438_0[T3723162438_10+3].offset = T3723162438_10;
T3723162438_0[T3723162438_10+3].name = T3723162438_9[T3723162438_10];
T3723162438_8[T3723162438_10] = &T3723162438_0[T3723162438_10+3];
}
T3723162438_0[9].len = 6; T3723162438_0[9].kind = 2; T3723162438_0[9].sons = &T3723162438_8[0];
NTI527025.node = &T3723162438_0[9];
NTI527112.size = sizeof(Codegenflag527025Set);
NTI527112.kind = 19;
NTI527112.base = (&NTI527025);
NTI527112.flags = 3;
T3723162438_0[10].len = 0; T3723162438_0[10].kind = 0;
NTI527112.node = &T3723162438_0[10];
T3723162438_0[2].kind = 1;
T3723162438_0[2].offset = offsetof(Tcgen527027, flags);
T3723162438_0[2].typ = (&NTI527112);
T3723162438_0[2].name = "flags";
T3723162438_7[2] = &T3723162438_0[11];
T3723162438_0[11].kind = 1;
T3723162438_0[11].offset = offsetof(Tcgen527027, module);
T3723162438_0[11].typ = (&NTI290800);
T3723162438_0[11].name = "module";
T3723162438_7[3] = &T3723162438_0[12];
T3723162438_0[12].kind = 1;
T3723162438_0[12].offset = offsetof(Tcgen527027, filename);
T3723162438_0[12].typ = (&NTI138);
T3723162438_0[12].name = "filename";
T3723162438_7[4] = &T3723162438_0[13];
T3723162438_0[13].kind = 1;
T3723162438_0[13].offset = offsetof(Tcgen527027, cfilename);
T3723162438_0[13].typ = (&NTI138);
T3723162438_0[13].name = "cfilename";
T3723162438_7[5] = &T3723162438_0[14];
T3723162438_0[14].kind = 1;
T3723162438_0[14].offset = offsetof(Tcgen527027, tmpbase);
T3723162438_0[14].typ = (&NTI177004);
T3723162438_0[14].name = "tmpBase";
T3723162438_7[6] = &T3723162438_0[15];
T3723162438_0[15].kind = 1;
T3723162438_0[15].offset = offsetof(Tcgen527027, typecache);
T3723162438_0[15].typ = (&NTI290850);
T3723162438_0[15].name = "typeCache";
T3723162438_7[7] = &T3723162438_0[16];
T3723162438_0[16].kind = 1;
T3723162438_0[16].offset = offsetof(Tcgen527027, forwtypecache);
T3723162438_0[16].typ = (&NTI290850);
T3723162438_0[16].name = "forwTypeCache";
T3723162438_7[8] = &T3723162438_0[17];
T3723162438_0[17].kind = 1;
T3723162438_0[17].offset = offsetof(Tcgen527027, declaredthings);
T3723162438_0[17].typ = (&NTI266030);
T3723162438_0[17].name = "declaredThings";
T3723162438_7[9] = &T3723162438_0[18];
T3723162438_0[18].kind = 1;
T3723162438_0[18].offset = offsetof(Tcgen527027, declaredprotos);
T3723162438_0[18].typ = (&NTI266030);
T3723162438_0[18].name = "declaredProtos";
T3723162438_7[10] = &T3723162438_0[19];
T3723162438_0[19].kind = 1;
T3723162438_0[19].offset = offsetof(Tcgen527027, headerfiles);
T3723162438_0[19].typ = (&NTI147013);
T3723162438_0[19].name = "headerFiles";
T3723162438_7[11] = &T3723162438_0[20];
T3723162438_0[20].kind = 1;
T3723162438_0[20].offset = offsetof(Tcgen527027, typeinfomarker);
T3723162438_0[20].typ = (&NTI266030);
T3723162438_0[20].name = "typeInfoMarker";
T3723162438_7[12] = &T3723162438_0[21];
NTI527021.size = sizeof(Tcproc527021);
NTI527021.kind = 18;
NTI527021.base = 0;
T3723162438_11[0] = &T3723162438_0[23];
T3723162438_0[23].kind = 1;
T3723162438_0[23].offset = offsetof(Tcproc527021, prc);
T3723162438_0[23].typ = (&NTI290800);
T3723162438_0[23].name = "prc";
T3723162438_11[1] = &T3723162438_0[24];
T3723162438_0[24].kind = 1;
T3723162438_0[24].offset = offsetof(Tcproc527021, beforeretneeded);
T3723162438_0[24].typ = (&NTI130);
T3723162438_0[24].name = "beforeRetNeeded";
T3723162438_11[2] = &T3723162438_0[25];
T3723162438_0[25].kind = 1;
T3723162438_0[25].offset = offsetof(Tcproc527021, threadvaraccessed);
T3723162438_0[25].typ = (&NTI130);
T3723162438_0[25].name = "threadVarAccessed";
T3723162438_11[3] = &T3723162438_0[26];
T3723162438_0[26].kind = 1;
T3723162438_0[26].offset = offsetof(Tcproc527021, lastlineinfo);
T3723162438_0[26].typ = (&NTI189336);
T3723162438_0[26].name = "lastLineInfo";
T3723162438_11[4] = &T3723162438_0[27];
T3723162438_0[27].kind = 1;
T3723162438_0[27].offset = offsetof(Tcproc527021, nestedtrystmts);
T3723162438_0[27].typ = (&NTI290796);
T3723162438_0[27].name = "nestedTryStmts";
T3723162438_11[5] = &T3723162438_0[28];
T3723162438_0[28].kind = 1;
T3723162438_0[28].offset = offsetof(Tcproc527021, inexceptblock);
T3723162438_0[28].typ = (&NTI104);
T3723162438_0[28].name = "inExceptBlock";
T3723162438_11[6] = &T3723162438_0[29];
T3723162438_0[29].kind = 1;
T3723162438_0[29].offset = offsetof(Tcproc527021, finallysafepoints);
T3723162438_0[29].typ = (&NTI189350);
T3723162438_0[29].name = "finallySafePoints";
T3723162438_11[7] = &T3723162438_0[30];
T3723162438_0[30].kind = 1;
T3723162438_0[30].offset = offsetof(Tcproc527021, labels);
T3723162438_0[30].typ = (&NTI3604);
T3723162438_0[30].name = "labels";
T3723162438_11[8] = &T3723162438_0[31];
NTI527019.size = sizeof(Tblock527019);
NTI527019.kind = 18;
NTI527019.base = 0;
NTI527019.flags = 2;
T3723162438_12[0] = &T3723162438_0[33];
T3723162438_0[33].kind = 1;
T3723162438_0[33].offset = offsetof(Tblock527019, id);
T3723162438_0[33].typ = (&NTI104);
T3723162438_0[33].name = "id";
T3723162438_12[1] = &T3723162438_0[34];
T3723162438_0[34].kind = 1;
T3723162438_0[34].offset = offsetof(Tblock527019, label);
T3723162438_0[34].typ = (&NTI177004);
T3723162438_0[34].name = "label";
T3723162438_12[2] = &T3723162438_0[35];
NTI527013.size = sizeof(Tcprocsections527013);
NTI527013.kind = 16;
NTI527013.base = (&NTI177004);
NTI527013.flags = 2;
T3723162438_0[35].kind = 1;
T3723162438_0[35].offset = offsetof(Tblock527019, sections);
T3723162438_0[35].typ = (&NTI527013);
T3723162438_0[35].name = "sections";
T3723162438_12[3] = &T3723162438_0[36];
T3723162438_0[36].kind = 1;
T3723162438_0[36].offset = offsetof(Tblock527019, isloop);
T3723162438_0[36].typ = (&NTI130);
T3723162438_0[36].name = "isLoop";
T3723162438_12[4] = &T3723162438_0[37];
T3723162438_0[37].kind = 1;
T3723162438_0[37].offset = offsetof(Tblock527019, nestedtrystmts);
T3723162438_0[37].typ = (&NTI108);
T3723162438_0[37].name = "nestedTryStmts";
T3723162438_12[5] = &T3723162438_0[38];
T3723162438_0[38].kind = 1;
T3723162438_0[38].offset = offsetof(Tblock527019, nestedexceptstmts);
T3723162438_0[38].typ = (&NTI108);
T3723162438_0[38].name = "nestedExceptStmts";
T3723162438_12[6] = &T3723162438_0[39];
T3723162438_0[39].kind = 1;
T3723162438_0[39].offset = offsetof(Tblock527019, framelen);
T3723162438_0[39].typ = (&NTI108);
T3723162438_0[39].name = "frameLen";
T3723162438_0[32].len = 7; T3723162438_0[32].kind = 2; T3723162438_0[32].sons = &T3723162438_12[0];
NTI527019.node = &T3723162438_0[32];
NTI527095.size = sizeof(TY527095*);
NTI527095.kind = 24;
NTI527095.base = (&NTI527019);
NTI527095.flags = 2;
NTI527095.marker = T3723162438_13;
T3723162438_0[31].kind = 1;
T3723162438_0[31].offset = offsetof(Tcproc527021, blocks);
T3723162438_0[31].typ = (&NTI527095);
T3723162438_0[31].name = "blocks";
T3723162438_11[9] = &T3723162438_0[40];
T3723162438_0[40].kind = 1;
T3723162438_0[40].offset = offsetof(Tcproc527021, breakidx);
T3723162438_0[40].typ = (&NTI104);
T3723162438_0[40].name = "breakIdx";
T3723162438_11[10] = &T3723162438_0[41];
T3723162438_0[41].kind = 1;
T3723162438_0[41].offset = offsetof(Tcproc527021, options);
T3723162438_0[41].typ = (&NTI168011);
T3723162438_0[41].name = "options";
T3723162438_11[11] = &T3723162438_0[42];
T3723162438_0[42].kind = 1;
T3723162438_0[42].offset = offsetof(Tcproc527021, maxframelen);
T3723162438_0[42].typ = (&NTI104);
T3723162438_0[42].name = "maxFrameLen";
T3723162438_11[12] = &T3723162438_0[43];
T3723162438_0[43].kind = 1;
T3723162438_0[43].offset = offsetof(Tcproc527021, module);
T3723162438_0[43].typ = (&NTI527015);
T3723162438_0[43].name = "module";
T3723162438_11[13] = &T3723162438_0[44];
T3723162438_0[44].kind = 1;
T3723162438_0[44].offset = offsetof(Tcproc527021, withinloop);
T3723162438_0[44].typ = (&NTI104);
T3723162438_0[44].name = "withinLoop";
T3723162438_11[14] = &T3723162438_0[45];
T3723162438_0[45].kind = 1;
T3723162438_0[45].offset = offsetof(Tcproc527021, splitdecls);
T3723162438_0[45].typ = (&NTI104);
T3723162438_0[45].name = "splitDecls";
T3723162438_11[15] = &T3723162438_0[46];
T3723162438_0[46].kind = 1;
T3723162438_0[46].offset = offsetof(Tcproc527021, gcframeid);
T3723162438_0[46].typ = (&NTI3604);
T3723162438_0[46].name = "gcFrameId";
T3723162438_11[16] = &T3723162438_0[47];
T3723162438_0[47].kind = 1;
T3723162438_0[47].offset = offsetof(Tcproc527021, gcframetype);
T3723162438_0[47].typ = (&NTI177004);
T3723162438_0[47].name = "gcFrameType";
T3723162438_0[22].len = 17; T3723162438_0[22].kind = 2; T3723162438_0[22].sons = &T3723162438_11[0];
NTI527021.node = &T3723162438_0[22];
NTI527017.size = sizeof(Tcproc527021*);
NTI527017.kind = 22;
NTI527017.base = (&NTI527021);
NTI527017.marker = T3723162438_14;
T3723162438_0[21].kind = 1;
T3723162438_0[21].offset = offsetof(Tcgen527027, initproc);
T3723162438_0[21].typ = (&NTI527017);
T3723162438_0[21].name = "initProc";
T3723162438_7[13] = &T3723162438_0[48];
T3723162438_0[48].kind = 1;
T3723162438_0[48].offset = offsetof(Tcgen527027, postinitproc);
T3723162438_0[48].typ = (&NTI527017);
T3723162438_0[48].name = "postInitProc";
T3723162438_7[14] = &T3723162438_0[49];
T3723162438_0[49].kind = 1;
T3723162438_0[49].offset = offsetof(Tcgen527027, preinitproc);
T3723162438_0[49].typ = (&NTI527017);
T3723162438_0[49].name = "preInitProc";
T3723162438_7[15] = &T3723162438_0[50];
T3723162438_0[50].kind = 1;
T3723162438_0[50].offset = offsetof(Tcgen527027, typestack);
T3723162438_0[50].typ = (&NTI290836);
T3723162438_0[50].name = "typeStack";
T3723162438_7[16] = &T3723162438_0[51];
T3723162438_0[51].kind = 1;
T3723162438_0[51].offset = offsetof(Tcgen527027, datacache);
T3723162438_0[51].typ = (&NTI290862);
T3723162438_0[51].name = "dataCache";
T3723162438_7[17] = &T3723162438_0[52];
T3723162438_0[52].kind = 1;
T3723162438_0[52].offset = offsetof(Tcgen527027, forwardedprocs);
T3723162438_0[52].typ = (&NTI290804);
T3723162438_0[52].name = "forwardedProcs";
T3723162438_7[18] = &T3723162438_0[53];
T3723162438_0[53].kind = 1;
T3723162438_0[53].offset = offsetof(Tcgen527027, typenodes);
T3723162438_0[53].typ = (&NTI104);
T3723162438_0[53].name = "typeNodes";
T3723162438_7[19] = &T3723162438_0[54];
T3723162438_0[54].kind = 1;
T3723162438_0[54].offset = offsetof(Tcgen527027, nimtypes);
T3723162438_0[54].typ = (&NTI104);
T3723162438_0[54].name = "nimTypes";
T3723162438_7[20] = &T3723162438_0[55];
T3723162438_0[55].kind = 1;
T3723162438_0[55].offset = offsetof(Tcgen527027, typenodesname);
T3723162438_0[55].typ = (&NTI177004);
T3723162438_0[55].name = "typeNodesName";
T3723162438_7[21] = &T3723162438_0[56];
T3723162438_0[56].kind = 1;
T3723162438_0[56].offset = offsetof(Tcgen527027, nimtypesname);
T3723162438_0[56].typ = (&NTI177004);
T3723162438_0[56].name = "nimTypesName";
T3723162438_7[22] = &T3723162438_0[57];
T3723162438_0[57].kind = 1;
T3723162438_0[57].offset = offsetof(Tcgen527027, labels);
T3723162438_0[57].typ = (&NTI3604);
T3723162438_0[57].name = "labels";
T3723162438_7[23] = &T3723162438_0[58];
NTI527136.size = sizeof(TY527136);
NTI527136.kind = 16;
NTI527136.base = (&NTI177004);
NTI527136.flags = 2;
T3723162438_0[58].kind = 1;
T3723162438_0[58].offset = offsetof(Tcgen527027, extensionloaders);
T3723162438_0[58].typ = (&NTI527136);
T3723162438_0[58].name = "extensionLoaders";
T3723162438_7[24] = &T3723162438_0[59];
T3723162438_0[59].kind = 1;
T3723162438_0[59].offset = offsetof(Tcgen527027, injectstmt);
T3723162438_0[59].typ = (&NTI177004);
T3723162438_0[59].name = "injectStmt";
T3723162438_0[0].len = 25; T3723162438_0[0].kind = 2; T3723162438_0[0].sons = &T3723162438_7[0];
NTI527027.node = &T3723162438_0[0];
NTI527015.size = sizeof(Tcgen527027*);
NTI527015.kind = 22;
NTI527015.base = (&NTI527027);
NTI527015.marker = T3723162438_15;
NTI527153.size = sizeof(TY527153*);
NTI527153.kind = 24;
NTI527153.base = (&NTI527015);
NTI527153.marker = T3723162438_16;
}

