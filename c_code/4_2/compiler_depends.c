/* Generated by Nim Compiler v0.14.3 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
typedef struct Ropeobj178006 Ropeobj178006;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Tpasscontext341002 Tpasscontext341002;
typedef struct Tsym292834 Tsym292834;
typedef struct Tgen575006 Tgen575006;
typedef struct TNimObject TNimObject;
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
typedef struct Tnode292802 Tnode292802;
typedef struct Ttype292840 Ttype292840;
typedef struct Tlineinfo191336 Tlineinfo191336;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tident199010 Tident199010;
typedef struct Tnodeseq292796 Tnodeseq292796;
typedef struct Tidobj199004 Tidobj199004;
typedef struct Ttypeseq292836 Ttypeseq292836;
typedef struct TY292929 TY292929;
typedef struct Tstrtable292806 Tstrtable292806;
typedef struct Tsymseq292804 Tsymseq292804;
typedef struct Tloc292816 Tloc292816;
typedef struct Tlib292820 Tlib292820;
typedef struct Basechunk29438 Basechunk29438;
typedef struct Freecell29430 Freecell29430;
typedef struct TY292960 TY292960;
typedef struct Tinstantiation292824 Tinstantiation292824;
typedef struct Tlistentry147007 Tlistentry147007;
typedef struct TY292961 TY292961;
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
struct  TNimObject  {
TNimType* m_type;
};
struct  Tpasscontext341002  {
  TNimObject Sup;
NIM_BOOL fromcache;
};
struct  Tgen575006  {
  Tpasscontext341002 Sup;
Tsym292834* module;
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
struct  Tlineinfo191336  {
NI16 line;
NI16 col;
NI32 fileindex;
};
typedef NU16 Tnodeflag292427Set;
typedef NU8 Tnodekind292020;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tnode292802  {
Ttype292840* typ;
Tlineinfo191336 info;
Tnodeflag292427Set flags;
Tnodekind292020 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym292834* sym;
} S4;
struct {Tident199010* ident;
} S5;
struct {Tnodeseq292796* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
typedef Ropeobj178006* TY532811[2];
struct  Tidobj199004  {
  TNimObject Sup;
NI id;
};
typedef NU8 Tsymkind292435;
struct  Tstrtable292806  {
NI counter;
Tsymseq292804* data;
};
typedef NU16 Tmagic292524;
typedef NU32 Tsymflag292184Set;
typedef NU32 Toption169009Set;
typedef NU8 Tlockind292808;
typedef NU8 Tstorageloc292812;
typedef NU16 Tlocflag292810Set;
struct  Tloc292816  {
Tlockind292808 k;
Tstorageloc292812 s;
Tlocflag292810Set flags;
Ttype292840* t;
Ropeobj178006* r;
};
struct  Tsym292834  {
  Tidobj199004 Sup;
Tsymkind292435 kind;
union{
struct {Ttypeseq292836* typeinstcache;
} S1;
struct {TY292929* procinstcache;
Tsym292834* gcunsafetyreason;
} S2;
struct {TY292929* usedgenerics;
Tstrtable292806 tab;
} S3;
struct {Tsym292834* guard;
NI bitsize;
} S4;
} kindU;
Tmagic292524 magic;
Ttype292840* typ;
Tident199010* name;
Tlineinfo191336 info;
Tsym292834* owner;
Tsymflag292184Set flags;
Tnode292802* ast;
Toption169009Set options;
NI position;
NI offset;
Tloc292816 loc;
Tlib292820* annex;
Tnode292802* constraint;
};
struct  Tident199010  {
  Tidobj199004 Sup;
NimStringDesc* s;
Tident199010* next;
NI h;
};
struct  Ropeobj178006  {
  TNimObject Sup;
Ropeobj178006* left;
Ropeobj178006* right;
NI length;
NimStringDesc* data;
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
typedef NU8 Ttypekind292244;
typedef NU8 Tcallingconvention292002;
typedef NU32 Ttypeflag292431Set;
struct  Ttype292840  {
  Tidobj199004 Sup;
Ttypekind292244 kind;
Tcallingconvention292002 callconv;
Ttypeflag292431Set flags;
Ttypeseq292836* sons;
Tnode292802* n;
Tsym292834* owner;
Tsym292834* sym;
Tsym292834* destructor;
Tsym292834* deepcopy;
Tsym292834* assignment;
TY292960* methods;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc292816 loc;
};
struct  Tlistentry147007  {
  TNimObject Sup;
Tlistentry147007* prev;
Tlistentry147007* next;
};
typedef NU8 Tlibkind292818;
struct  Tlib292820  {
  Tlistentry147007 Sup;
Tlibkind292818 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj178006* name;
Tnode292802* path;
};
struct  Freecell29430  {
Freecell29430* next;
NI zerofield;
};
struct TY292961 {
NI Field0;
Tsym292834* Field1;
};
struct  Tinstantiation292824  {
Tsym292834* sym;
Ttypeseq292836* concretetypes;
NI compilesid;
};
struct Tnodeseq292796 {
  TGenericSeq Sup;
  Tnode292802* data[SEQ_DECL_SIZE];
};
struct Ttypeseq292836 {
  TGenericSeq Sup;
  Ttype292840* data[SEQ_DECL_SIZE];
};
struct TY292929 {
  TGenericSeq Sup;
  Tinstantiation292824* data[SEQ_DECL_SIZE];
};
struct Tsymseq292804 {
  TGenericSeq Sup;
  Tsym292834* data[SEQ_DECL_SIZE];
};
struct TY292960 {
  TGenericSeq Sup;
  TY292961 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d0, NI op0);
N_NIMCALL(void, T2841479672_2)(void);
N_NIMCALL(void, nimRegisterGlobalMarker)(Globalmarkerproc55802 markerproc0);
N_NIMCALL(void, T2841479672_3)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ0, NI size0);
static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0);
static N_INLINE(Cell47305*, usrtocell_51440_1689653243)(void* usr0);
static N_INLINE(void, rtladdzct_52601_1689653243)(Cell47305* c0);
N_NOINLINE(void, addzct_51417_1689653243)(Cellseq47321* s0, Cell47305* c0);
N_NIMCALL(NI, sonslen_295351_850551059)(Tnode292802* n0);
N_NIMCALL(NimStringDesc*, getmodulename_348009_2178338529)(Tnode292802* n0);
N_NIMCALL(void, adddependencyaux_575013_2841479672)(NimStringDesc* importing0, NimStringDesc* imported0);
N_NIMCALL(void, addf_179205_2381377266)(Ropeobj178006** c0, NimStringDesc* frmt0, Ropeobj178006** args0, NI args0Len0);
N_NIMCALL(Ropeobj178006*, rope_178277_2381377266)(NimStringDesc* s0);
N_NIMCALL(Tnode292802*, adddotdependency_575020_2841479672)(Tpasscontext341002* c0, Tnode292802* n0);
N_NIMCALL(void, writerope_178836_2381377266)(Ropeobj178006* head0, NimStringDesc* filename0, NIM_BOOL usewarning0);
N_NIMCALL(Ropeobj178006*, HEX25_178905_2381377266)(NimStringDesc* frmt0, Ropeobj178006** args0, NI args0Len0);
N_NIMCALL(NimStringDesc*, noschangeFileExt)(NimStringDesc* filename0, NimStringDesc* ext0);
N_NIMCALL(NimStringDesc*, nosextractFilename)(NimStringDesc* path0);
STRING_LITERAL(T2841479672_4, "$1 -> $2;$n", 11);
STRING_LITERAL(T2841479672_5, "digraph $1 {$n$2}$n", 19);
STRING_LITERAL(T2841479672_6, "", 0);
STRING_LITERAL(T2841479672_7, "dot", 3);
Ropeobj178006* gdotgraph_575011_2841479672;
extern TNimType NTI178004; /* Rope */
extern TNimType NTI341002; /* TPassContext */
TNimType NTI575006; /* TGen */
extern TNimType NTI292800; /* PSym */
TNimType NTI575008; /* PGen */
extern Gcheap49818 gch_49858_1689653243;
N_NIMCALL(void, T2841479672_2)(void) {
	nimGCvisit((void*)gdotgraph_575011_2841479672, 0);
}
N_NIMCALL(void, T2841479672_3)(void* p, NI op) {
	Tgen575006* a;
	a = (Tgen575006*)p;
	nimGCvisit((void*)(*a).module, op);
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

N_NIMCALL(Tpasscontext341002*, myopen_575078_2841479672)(Tsym292834* module0) {
	Tpasscontext341002* result0;
	Tgen575006* g0;
	result0 = (Tpasscontext341002*)0;
	g0 = (Tgen575006*)0;
	g0 = (Tgen575006*) newObj((&NTI575008), sizeof(Tgen575006));
	(*g0).Sup.Sup.m_type = (&NTI575006);
	asgnRefNoCycle((void**) (&(*g0).module), module0);
	result0 = &g0->Sup;
	return result0;
}

N_NIMCALL(void, adddependencyaux_575013_2841479672)(NimStringDesc* importing0, NimStringDesc* imported0) {
	TY532811 LOC1;
	memset((void*)LOC1, 0, sizeof(LOC1));
	LOC1[0] = rope_178277_2381377266(importing0);
	LOC1[1] = rope_178277_2381377266(imported0);
	addf_179205_2381377266(&gdotgraph_575011_2841479672, ((NimStringDesc*) &T2841479672_4), LOC1, 2);
}

N_NIMCALL(Tnode292802*, adddotdependency_575020_2841479672)(Tpasscontext341002* c0, Tnode292802* n0) {
	Tnode292802* result0;
	Tgen575006* g0;
	result0 = (Tnode292802*)0;
	result0 = n0;
	g0 = ((Tgen575006*) (c0));
	switch ((*n0).kind) {
	case ((Tnodekind292020) 116):
	{
		{
			NI i_575037_2841479672;
			NI HEX3Atmp_575058_2841479672;
			NI LOC3;
			NI res_575061_2841479672;
			i_575037_2841479672 = (NI)0;
			HEX3Atmp_575058_2841479672 = (NI)0;
			LOC3 = (NI)0;
			LOC3 = sonslen_295351_850551059(n0);
			HEX3Atmp_575058_2841479672 = (NI)(LOC3 - ((NI) 1));
			res_575061_2841479672 = ((NI) 0);
			{
				while (1) {
					NimStringDesc* imported0;
					if (!(res_575061_2841479672 <= HEX3Atmp_575058_2841479672)) goto LA5;
					i_575037_2841479672 = res_575061_2841479672;
					imported0 = getmodulename_348009_2178338529((*n0).kindU.S6.sons->data[i_575037_2841479672]);
					adddependencyaux_575013_2841479672((*(*(*g0).module).name).s, imported0);
					res_575061_2841479672 += ((NI) 1);
				} LA5: ;
			}
		}
	}
	break;
	case ((Tnodekind292020) 120):
	case ((Tnodekind292020) 117):
	{
		NimStringDesc* imported0;
		imported0 = getmodulename_348009_2178338529((*n0).kindU.S6.sons->data[((NI) 0)]);
		adddependencyaux_575013_2841479672((*(*(*g0).module).name).s, imported0);
	}
	break;
	case ((Tnodekind292020) 115):
	case ((Tnodekind292020) 112):
	case ((Tnodekind292020) 126):
	case ((Tnodekind292020) 127):
	{
		{
			NI i_575055_2841479672;
			NI HEX3Atmp_575066_2841479672;
			NI LOC9;
			NI res_575069_2841479672;
			i_575055_2841479672 = (NI)0;
			HEX3Atmp_575066_2841479672 = (NI)0;
			LOC9 = (NI)0;
			LOC9 = sonslen_295351_850551059(n0);
			HEX3Atmp_575066_2841479672 = (NI)(LOC9 - ((NI) 1));
			res_575069_2841479672 = ((NI) 0);
			{
				while (1) {
					Tnode292802* LOC12;
					if (!(res_575069_2841479672 <= HEX3Atmp_575066_2841479672)) goto LA11;
					i_575055_2841479672 = res_575069_2841479672;
					LOC12 = (Tnode292802*)0;
					LOC12 = adddotdependency_575020_2841479672(c0, (*n0).kindU.S6.sons->data[i_575055_2841479672]);
					res_575069_2841479672 += ((NI) 1);
				} LA11: ;
			}
		}
	}
	break;
	default:
	{
	}
	break;
	}
	return result0;
}

N_NIMCALL(void, generatedot_575002_2841479672)(NimStringDesc* project0) {
	TY532811 LOC1;
	NimStringDesc* LOC2;
	NimStringDesc* LOC3;
	Ropeobj178006* LOC4;
	NimStringDesc* LOC5;
	memset((void*)LOC1, 0, sizeof(LOC1));
	LOC2 = (NimStringDesc*)0;
	LOC2 = nosextractFilename(project0);
	LOC3 = (NimStringDesc*)0;
	LOC3 = noschangeFileExt(LOC2, ((NimStringDesc*) &T2841479672_6));
	LOC1[0] = rope_178277_2381377266(LOC3);
	LOC1[1] = gdotgraph_575011_2841479672;
	LOC4 = (Ropeobj178006*)0;
	LOC4 = HEX25_178905_2381377266(((NimStringDesc*) &T2841479672_5), LOC1, 2);
	LOC5 = (NimStringDesc*)0;
	LOC5 = noschangeFileExt(project0, ((NimStringDesc*) &T2841479672_7));
	writerope_178836_2381377266(LOC4, LOC5, NIM_FALSE);
}
NIM_EXTERNC N_NOINLINE(void, compiler_dependsInit000)(void) {
nimRegisterGlobalMarker(T2841479672_2);
}

NIM_EXTERNC N_NOINLINE(void, compiler_dependsDatInit000)(void) {
static TNimNode T2841479672_0[1];
NTI575006.size = sizeof(Tgen575006);
NTI575006.kind = 17;
NTI575006.base = (&NTI341002);
T2841479672_0[0].kind = 1;
T2841479672_0[0].offset = offsetof(Tgen575006, module);
T2841479672_0[0].typ = (&NTI292800);
T2841479672_0[0].name = "module";
NTI575006.node = &T2841479672_0[0];
NTI575008.size = sizeof(Tgen575006*);
NTI575008.kind = 22;
NTI575008.base = (&NTI575006);
NTI575008.marker = T2841479672_3;
}

