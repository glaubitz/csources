/* Generated by Nim Compiler v0.14.3 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
typedef struct Tsym290834 Tsym290834;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttype290840 Ttype290840;
typedef struct Tstrtable290806 Tstrtable290806;
typedef struct Tsymseq290804 Tsymseq290804;
typedef struct Tidobj197004 Tidobj197004;
typedef struct TNimObject TNimObject;
typedef struct Ttypeseq290836 Ttypeseq290836;
typedef struct Tnode290802 Tnode290802;
typedef struct TY290960 TY290960;
typedef struct Tloc290816 Tloc290816;
typedef struct Ropeobj177006 Ropeobj177006;
typedef struct TGenericSeq TGenericSeq;
typedef struct Cell46904 Cell46904;
typedef struct Cellseq46920 Cellseq46920;
typedef struct Gcheap49418 Gcheap49418;
typedef struct Gcstack49416 Gcstack49416;
typedef struct Memregion29086 Memregion29086;
typedef struct Smallchunk29040 Smallchunk29040;
typedef struct Llchunk29080 Llchunk29080;
typedef struct Bigchunk29042 Bigchunk29042;
typedef struct Intset29014 Intset29014;
typedef struct Trunk29010 Trunk29010;
typedef struct Avlnode29084 Avlnode29084;
typedef struct Gcstat49414 Gcstat49414;
typedef struct Cellset46916 Cellset46916;
typedef struct Pagedesc46912 Pagedesc46912;
typedef struct NimStringDesc NimStringDesc;
typedef struct Tident197010 Tident197010;
typedef struct TY290929 TY290929;
typedef struct Tlineinfo189336 Tlineinfo189336;
typedef struct Tlib290820 Tlib290820;
typedef struct Tidentiter297063 Tidentiter297063;
typedef struct Tnodeseq290796 Tnodeseq290796;
typedef struct TY290961 TY290961;
typedef struct Basechunk29038 Basechunk29038;
typedef struct Freecell29030 Freecell29030;
typedef struct Tinstantiation290824 Tinstantiation290824;
typedef struct Tlistentry147007 Tlistentry147007;
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
typedef Ttype290840* TY336008[63];
struct  Tstrtable290806  {
NI counter;
Tsymseq290804* data;
};
typedef Ttype290840* TY336216[70];
struct  TNimObject  {
TNimType* m_type;
};
struct  Tidobj197004  {
  TNimObject Sup;
NI id;
};
typedef NU8 Ttypekind290244;
typedef NU8 Tcallingconvention290002;
typedef NU32 Ttypeflag290431Set;
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
struct  TGenericSeq  {
NI len;
NI reserved;
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
typedef Smallchunk29040* TY29101[512];
typedef Trunk29010* Trunkbuckets29012[256];
struct  Intset29014  {
Trunkbuckets29012 data;
};
struct  Memregion29086  {
NI minlargeobj;
NI maxlargeobj;
TY29101 freesmallchunks;
Llchunk29080* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk29042* freechunkslist;
Intset29014 chunkstarts;
Avlnode29084* root;
Avlnode29084* deleted;
Avlnode29084* last;
Avlnode29084* freeavlnodes;
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
Memregion29086 region;
Gcstat49414 stat;
Cellset46916 marked;
Cellseq46920 additionalroots;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 Tsymkind290435;
typedef NU16 Tmagic290524;
struct  Tlineinfo189336  {
NI16 line;
NI16 col;
NI32 fileindex;
};
typedef NU32 Tsymflag290184Set;
typedef NU32 Toption168009Set;
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
typedef NU16 Tmsgkind189002;
struct  Tidentiter297063  {
NI h;
Tident197010* name;
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
struct TY290961 {
NI Field0;
Tsym290834* Field1;
};
struct  Ropeobj177006  {
  TNimObject Sup;
Ropeobj177006* left;
Ropeobj177006* right;
NI length;
NimStringDesc* data;
};
struct  Gcstack49416  {
Gcstack49416* prev;
Gcstack49416* next;
void* starts;
void* pos;
NI maxstacksize;
};
struct  Basechunk29038  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk29040  {
  Basechunk29038 Sup;
Smallchunk29040* next;
Smallchunk29040* prev;
Freecell29030* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk29080  {
NI size;
NI acc;
Llchunk29080* next;
};
struct  Bigchunk29042  {
  Basechunk29038 Sup;
Bigchunk29042* next;
Bigchunk29042* prev;
NI align;
NF data;
};
typedef NI TY29019[8];
struct  Trunk29010  {
Trunk29010* next;
NI key;
TY29019 bits;
};
typedef Avlnode29084* TY29091[2];
struct  Avlnode29084  {
TY29091 link;
NI key;
NI upperbound;
NI level;
};
struct  Pagedesc46912  {
Pagedesc46912* next;
NI key;
TY29019 bits;
};
struct  Tident197010  {
  Tidobj197004 Sup;
NimStringDesc* s;
Tident197010* next;
NI h;
};
struct  Tlistentry147007  {
  TNimObject Sup;
Tlistentry147007* prev;
Tlistentry147007* next;
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
struct  Freecell29030  {
Freecell29030* next;
NI zerofield;
};
struct  Tinstantiation290824  {
Tsym290834* sym;
Ttypeseq290836* concretetypes;
NI compilesid;
};
struct Ttypeseq290836 {
  TGenericSeq Sup;
  Ttype290840* data[SEQ_DECL_SIZE];
};
struct Tsymseq290804 {
  TGenericSeq Sup;
  Tsym290834* data[SEQ_DECL_SIZE];
};
struct TY290960 {
  TGenericSeq Sup;
  TY290961 data[SEQ_DECL_SIZE];
};
struct TY290929 {
  TGenericSeq Sup;
  Tinstantiation290824* data[SEQ_DECL_SIZE];
};
struct Tnodeseq290796 {
  TGenericSeq Sup;
  Tnode290802* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d0, NI op0);
N_NIMCALL(void, T3937434831_2)(void);
N_NIMCALL(void, nimRegisterGlobalMarker)(Globalmarkerproc55402 markerproc0);
N_NIMCALL(void, T3937434831_3)(void);
N_NIMCALL(void, T3937434831_4)(void);
N_NIMCALL(void, T3937434831_5)(void);
N_NIMCALL(void, T3937434831_6)(void);
N_NIMCALL(void, initstrtable_294001_850551059)(Tstrtable290806* x0);
static N_INLINE(void, nimGCunrefNoCycle)(void* p0);
static N_INLINE(Cell46904*, usrtocell_51040_1689653243)(void* usr0);
static N_INLINE(void, rtladdzct_52201_1689653243)(Cell46904* c0);
N_NOINLINE(void, addzct_51017_1689653243)(Cellseq46920* s0, Cell46904* c0);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ0, NI len0);
static N_INLINE(Ttype290840*, skipintlit_336653_3937434831)(Ttype290840* t0);
N_NIMCALL(Ttype290840*, getsystype_336150_3937434831)(Ttypekind290244 kind0);
N_NIMCALL(Ttype290840*, systypefromname_336145_3937434831)(NimStringDesc* name0);
N_NIMCALL(Tsym290834*, getsyssym_336038_3937434831)(NimStringDesc* name0);
N_NIMCALL(Tsym290834*, strtableget_297045_2984716966)(Tstrtable290806 t0, Tident197010* name0);
N_NIMCALL(Tident197010*, getident_197441_791273810)(NimStringDesc* identifier0);
N_NIMCALL(void, rawmessage_192612_155036129)(Tmsgkind189002 msg0, NimStringDesc* arg0);
N_NIMCALL(Tsym290834*, newsym_291683_850551059)(Tsymkind290435 symkind0, Tident197010* name0, Tsym290834* owner0, Tlineinfo189336 info0);
N_NIMCALL(Ttype290840*, newtype_293107_850551059)(Ttypekind290244 kind0, Tsym290834* owner0);
static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0);
N_NIMCALL(void, loadstub_333223_1724185294)(Tsym290834* s0);
N_NIMCALL(Ttype290840*, newsystype_336033_3937434831)(Ttypekind290244 kind0, NI size0);
N_NIMCALL(void, internalerror_194113_155036129)(NimStringDesc* errmsg0);
static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0);
static N_INLINE(void, copymem_7485_1689653243)(void* dest0, void* source0, NI size0);
N_NIMCALL(NimStringDesc*, reprEnum)(NI e0, TNimType* typ0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space0);
N_NIMCALL(TGenericSeq*, incrSeqV2)(TGenericSeq* seq0, NI elemsize0);
N_NIMCALL(void, propagatetoowner_294176_850551059)(Ttype290840* owner0, Ttype290840* elem0);
N_NIMCALL(Tsym290834*, initidentiter_297066_2984716966)(Tidentiter297063* ti0, Tstrtable290806 tab0, Tident197010* s0);
N_NIMCALL(Tsym290834*, nextidentiter_297072_2984716966)(Tidentiter297063* ti0, Tstrtable290806 tab0);
N_NIMCALL(void, strtableadd_297040_2984716966)(Tstrtable290806* t0, Tsym290834* n0);
N_NIMCALL(void, localerror_194085_155036129)(Tlineinfo189336 info0, NimStringDesc* arg0);
N_NIMCALL(NimStringDesc*, HEX24_190431_155036129)(Tlineinfo189336 info0);
N_NIMCALL(Ttype290840*, copytype_293470_850551059)(Ttype290840* t0, Tsym290834* owner0, NIM_BOOL keepid0);
N_NIMCALL(Ttype290840*, getintlittype_336627_3937434831)(Tnode290802* literal0);
N_NIMCALL(void, internalerror_194100_155036129)(Tlineinfo189336 info0, NimStringDesc* errmsg0);
STRING_LITERAL(T3937434831_7, "int", 3);
STRING_LITERAL(T3937434831_8, "int8", 4);
STRING_LITERAL(T3937434831_9, "int16", 5);
STRING_LITERAL(T3937434831_10, "int32", 5);
STRING_LITERAL(T3937434831_11, "int64", 5);
STRING_LITERAL(T3937434831_12, "uint", 4);
STRING_LITERAL(T3937434831_13, "uint8", 5);
STRING_LITERAL(T3937434831_14, "uint16", 6);
STRING_LITERAL(T3937434831_15, "uint32", 6);
STRING_LITERAL(T3937434831_16, "uint64", 6);
STRING_LITERAL(T3937434831_17, "float", 5);
STRING_LITERAL(T3937434831_18, "float32", 7);
STRING_LITERAL(T3937434831_19, "float64", 7);
STRING_LITERAL(T3937434831_20, "float128", 8);
STRING_LITERAL(T3937434831_21, "bool", 4);
STRING_LITERAL(T3937434831_22, "char", 4);
STRING_LITERAL(T3937434831_23, "string", 6);
STRING_LITERAL(T3937434831_24, "cstring", 7);
STRING_LITERAL(T3937434831_25, "pointer", 7);
STRING_LITERAL(T3937434831_26, "request for typekind: ", 22);
STRING_LITERAL(T3937434831_27, "wanted: ", 8);
STRING_LITERAL(T3937434831_28, " got: ", 6);
STRING_LITERAL(T3937434831_29, "type not found: ", 16);
STRING_LITERAL(T3937434831_30, "symbol conflicts with other .exportNims symbol at: ", 51);
STRING_LITERAL(T3937434831_31, "invalid int size", 16);
Tsym290834* systemmodule_336004_3937434831;
extern TNimType NTI290800; /* PSym */
TY336008 gsystypes_336009_3937434831;
extern TNimType NTI290798; /* PType */
TNimType NTI336008; /* array[TTypeKind, PType] */
Tstrtable290806 compilerprocs_336010_3937434831;
extern TNimType NTI290806; /* TStrTable */
Tstrtable290806 exposed_336011_3937434831;
TY336216 inttypecache_336217_3937434831;
TNimType NTI336216; /* array[-5..64, PType] */
extern TNimType NTI290836; /* TTypeSeq */
extern Gcheap49418 gch_49458_1689653243;
extern NI ptrsize_175643_4151366050;
extern TNimType NTI290244; /* TTypeKind */
extern Tstrtable290806 rodcompilerprocs_330078_1724185294;
extern NI intsize_175641_4151366050;
N_NIMCALL(void, T3937434831_2)(void) {
	nimGCvisit((void*)systemmodule_336004_3937434831, 0);
}
N_NIMCALL(void, T3937434831_3)(void) {
	NI LOC1;
	LOC1 = (NI)0;
	for (LOC1 = 0; LOC1 < 63; LOC1++) {
	nimGCvisit((void*)gsystypes_336009_3937434831[LOC1], 0);
	}
}
N_NIMCALL(void, T3937434831_4)(void) {
	nimGCvisit((void*)compilerprocs_336010_3937434831.data, 0);
}
N_NIMCALL(void, T3937434831_5)(void) {
	nimGCvisit((void*)exposed_336011_3937434831.data, 0);
}
N_NIMCALL(void, T3937434831_6)(void) {
	NI LOC1;
	LOC1 = (NI)0;
	for (LOC1 = 0; LOC1 < 70; LOC1++) {
	nimGCvisit((void*)inttypecache_336217_3937434831[LOC1], 0);
	}
}

static N_INLINE(Cell46904*, usrtocell_51040_1689653243)(void* usr0) {
	Cell46904* result0;
	result0 = (Cell46904*)0;
	result0 = ((Cell46904*) ((NI)((NU64)(((NI) (usr0))) - (NU64)(((NI)sizeof(Cell46904))))));
	return result0;
}

static N_INLINE(void, rtladdzct_52201_1689653243)(Cell46904* c0) {
	addzct_51017_1689653243((&gch_49458_1689653243.zct), c0);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p0) {
	Cell46904* c0;
	c0 = usrtocell_51040_1689653243(p0);
	{
		(*c0).refcount -= ((NI) 8);
		if (!((NU64)((*c0).refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_52201_1689653243(c0);
	}
	LA3: ;
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
			if (!((NU64)((*c0).refcount) < (NU64)(((NI) 8)))) goto LA11;
			rtladdzct_52201_1689653243(c0);
		}
		LA11: ;
	}
	LA7: ;
	(*dest0) = src0;
}

N_NIMCALL(Tsym290834*, getsyssym_336038_3937434831)(NimStringDesc* name0) {
	Tsym290834* result0;
	Tident197010* LOC1;
	result0 = (Tsym290834*)0;
	LOC1 = (Tident197010*)0;
	LOC1 = getident_197441_791273810(name0);
	result0 = strtableget_297045_2984716966((*systemmodule_336004_3937434831).kindU.S3.tab, LOC1);
	{
		Tident197010* LOC6;
		if (!(result0 == NIM_NIL)) goto LA4;
		rawmessage_192612_155036129(((Tmsgkind189002) 68), name0);
		LOC6 = (Tident197010*)0;
		LOC6 = getident_197441_791273810(name0);
		result0 = newsym_291683_850551059(((Tsymkind290435) 0), LOC6, systemmodule_336004_3937434831, (*systemmodule_336004_3937434831).info);
		asgnRefNoCycle((void**) (&(*result0).typ), newtype_293107_850551059(((Ttypekind290244) 50), systemmodule_336004_3937434831));
	}
	LA4: ;
	{
		if (!((*result0).kind == ((Tsymkind290435) 22))) goto LA9;
		loadstub_333223_1724185294(result0);
	}
	LA9: ;
	{
		if (!((*result0).kind == ((Tsymkind290435) 24))) goto LA13;
		result0 = (*result0).owner;
	}
	LA13: ;
	return result0;
}

N_NIMCALL(Ttype290840*, systypefromname_336145_3937434831)(NimStringDesc* name0) {
	Ttype290840* result0;
	Tsym290834* LOC1;
	result0 = (Ttype290840*)0;
	LOC1 = (Tsym290834*)0;
	LOC1 = getsyssym_336038_3937434831(name0);
	result0 = (*LOC1).typ;
	return result0;
}

N_NIMCALL(Ttype290840*, newsystype_336033_3937434831)(Ttypekind290244 kind0, NI size0) {
	Ttype290840* result0;
	result0 = (Ttype290840*)0;
	result0 = newtype_293107_850551059(kind0, systemmodule_336004_3937434831);
	(*result0).size = ((NI64) (size0));
	(*result0).align = ((NI16) (size0));
	return result0;
}

static N_INLINE(void, copymem_7485_1689653243)(void* dest0, void* source0, NI size0) {
	void* LOC1;
	LOC1 = (void*)0;
	LOC1 = memcpy(dest0, source0, ((size_t) (size0)));
}

static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0) {
	copymem_7485_1689653243(((void*) ((&(*dest0).data[((*dest0).Sup.len)- 0]))), ((void*) ((*src0).data)), ((NI) ((NI)((*src0).Sup.len + ((NI) 1)))));
	(*dest0).Sup.len += (*src0).Sup.len;
}

N_NIMCALL(Ttype290840*, getsystype_336150_3937434831)(Ttypekind290244 kind0) {
	Ttype290840* result0;
{	result0 = (Ttype290840*)0;
	result0 = gsystypes_336009_3937434831[(kind0)- 0];
	{
		if (!(result0 == NIM_NIL)) goto LA3;
		switch (kind0) {
		case ((Ttypekind290244) 31):
		{
			result0 = systypefromname_336145_3937434831(((NimStringDesc*) &T3937434831_7));
		}
		break;
		case ((Ttypekind290244) 32):
		{
			result0 = systypefromname_336145_3937434831(((NimStringDesc*) &T3937434831_8));
		}
		break;
		case ((Ttypekind290244) 33):
		{
			result0 = systypefromname_336145_3937434831(((NimStringDesc*) &T3937434831_9));
		}
		break;
		case ((Ttypekind290244) 34):
		{
			result0 = systypefromname_336145_3937434831(((NimStringDesc*) &T3937434831_10));
		}
		break;
		case ((Ttypekind290244) 35):
		{
			result0 = systypefromname_336145_3937434831(((NimStringDesc*) &T3937434831_11));
		}
		break;
		case ((Ttypekind290244) 40):
		{
			result0 = systypefromname_336145_3937434831(((NimStringDesc*) &T3937434831_12));
		}
		break;
		case ((Ttypekind290244) 41):
		{
			result0 = systypefromname_336145_3937434831(((NimStringDesc*) &T3937434831_13));
		}
		break;
		case ((Ttypekind290244) 42):
		{
			result0 = systypefromname_336145_3937434831(((NimStringDesc*) &T3937434831_14));
		}
		break;
		case ((Ttypekind290244) 43):
		{
			result0 = systypefromname_336145_3937434831(((NimStringDesc*) &T3937434831_15));
		}
		break;
		case ((Ttypekind290244) 44):
		{
			result0 = systypefromname_336145_3937434831(((NimStringDesc*) &T3937434831_16));
		}
		break;
		case ((Ttypekind290244) 36):
		{
			result0 = systypefromname_336145_3937434831(((NimStringDesc*) &T3937434831_17));
		}
		break;
		case ((Ttypekind290244) 37):
		{
			result0 = systypefromname_336145_3937434831(((NimStringDesc*) &T3937434831_18));
		}
		break;
		case ((Ttypekind290244) 38):
		{
			result0 = systypefromname_336145_3937434831(((NimStringDesc*) &T3937434831_19));
			goto BeforeRet;
		}
		break;
		case ((Ttypekind290244) 39):
		{
			result0 = systypefromname_336145_3937434831(((NimStringDesc*) &T3937434831_20));
		}
		break;
		case ((Ttypekind290244) 1):
		{
			result0 = systypefromname_336145_3937434831(((NimStringDesc*) &T3937434831_21));
		}
		break;
		case ((Ttypekind290244) 2):
		{
			result0 = systypefromname_336145_3937434831(((NimStringDesc*) &T3937434831_22));
		}
		break;
		case ((Ttypekind290244) 28):
		{
			result0 = systypefromname_336145_3937434831(((NimStringDesc*) &T3937434831_23));
		}
		break;
		case ((Ttypekind290244) 29):
		{
			result0 = systypefromname_336145_3937434831(((NimStringDesc*) &T3937434831_24));
		}
		break;
		case ((Ttypekind290244) 26):
		{
			result0 = systypefromname_336145_3937434831(((NimStringDesc*) &T3937434831_25));
		}
		break;
		case ((Ttypekind290244) 5):
		{
			result0 = newsystype_336033_3937434831(((Ttypekind290244) 5), ptrsize_175643_4151366050);
		}
		break;
		default:
		{
			NimStringDesc* LOC26;
			LOC26 = (NimStringDesc*)0;
			LOC26 = rawNewString(reprEnum((NI)kind0, (&NTI290244))->Sup.len + 22);
appendString(LOC26, ((NimStringDesc*) &T3937434831_26));
appendString(LOC26, reprEnum((NI)kind0, (&NTI290244)));
			internalerror_194113_155036129(LOC26);
		}
		break;
		}
		asgnRefNoCycle((void**) (&gsystypes_336009_3937434831[(kind0)- 0]), result0);
	}
	LA3: ;
	{
		NimStringDesc* LOC31;
		if (!!(((*result0).kind == kind0))) goto LA29;
		LOC31 = (NimStringDesc*)0;
		LOC31 = rawNewString(reprEnum((NI)kind0, (&NTI290244))->Sup.len + reprEnum((NI)(*result0).kind, (&NTI290244))->Sup.len + 14);
appendString(LOC31, ((NimStringDesc*) &T3937434831_27));
appendString(LOC31, reprEnum((NI)kind0, (&NTI290244)));
appendString(LOC31, ((NimStringDesc*) &T3937434831_28));
appendString(LOC31, reprEnum((NI)(*result0).kind, (&NTI290244)));
		internalerror_194113_155036129(LOC31);
	}
	LA29: ;
	{
		NimStringDesc* LOC36;
		if (!(result0 == NIM_NIL)) goto LA34;
		LOC36 = (NimStringDesc*)0;
		LOC36 = rawNewString(reprEnum((NI)kind0, (&NTI290244))->Sup.len + 16);
appendString(LOC36, ((NimStringDesc*) &T3937434831_29));
appendString(LOC36, reprEnum((NI)kind0, (&NTI290244)));
		internalerror_194113_155036129(LOC36);
	}
	LA34: ;
	}BeforeRet: ;
	return result0;
}

static N_INLINE(Ttype290840*, skipintlit_336653_3937434831)(Ttype290840* t0) {
	Ttype290840* result0;
{	result0 = (Ttype290840*)0;
	{
		if (!!(((*t0).n == NIM_NIL))) goto LA3;
		{
			if (!((IL64(70866960384) &((NU64)1<<((NU)((*t0).kind)&63U)))!=0)) goto LA7;
			result0 = getsystype_336150_3937434831((*t0).kind);
			goto BeforeRet;
		}
		LA7: ;
	}
	LA3: ;
	result0 = t0;
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(void, addsonskipintlit_336680_3937434831)(Ttype290840* father0, Ttype290840* son0) {
	Ttype290840* s0;
	{
		if (!(*father0).sons == 0) goto LA3;
		if ((*father0).sons) nimGCunrefNoCycle((*father0).sons);
		(*father0).sons = (Ttypeseq290836*) newSeqRC1((&NTI290836), 0);
	}
	LA3: ;
	s0 = skipintlit_336653_3937434831(son0);
	(*father0).sons = (Ttypeseq290836*) incrSeqV2(&((*father0).sons)->Sup, sizeof(Ttype290840*));
	asgnRefNoCycle((void**) (&(*father0).sons->data[(*father0).sons->Sup.len]), s0);
	++(*father0).sons->Sup.len;
	propagatetoowner_294176_850551059(father0, s0);
}

N_NIMCALL(Ttype290840*, nilorsysint_336015_3937434831)(void) {
	Ttype290840* result0;
	result0 = (Ttype290840*)0;
	result0 = gsystypes_336009_3937434831[(((Ttypekind290244) 31))- 0];
	return result0;
}

N_NIMCALL(Tsym290834*, getsysmagic_336076_3937434831)(NimStringDesc* name0, Tmagic290524 m0) {
	Tsym290834* result0;
	Tidentiter297063 ti0;
	Tident197010* id0;
	Tsym290834* r0;
{	result0 = (Tsym290834*)0;
	memset((void*)(&ti0), 0, sizeof(ti0));
	id0 = getident_197441_791273810(name0);
	r0 = initidentiter_297066_2984716966((&ti0), (*systemmodule_336004_3937434831).kindU.S3.tab, id0);
	{
		while (1) {
			if (!!((r0 == NIM_NIL))) goto LA2;
			{
				if (!((*r0).kind == ((Tsymkind290435) 22))) goto LA5;
				loadstub_333223_1724185294(r0);
			}
			LA5: ;
			{
				if (!((*r0).magic == m0)) goto LA9;
				{
					if (!((*(*(*r0).typ).sons->data[((NI) 0)]).kind == ((Ttypekind290244) 31))) goto LA13;
					result0 = r0;
					goto BeforeRet;
				}
				LA13: ;
				result0 = r0;
			}
			LA9: ;
			r0 = nextidentiter_297072_2984716966((&ti0), (*systemmodule_336004_3937434831).kindU.S3.tab);
		} LA2: ;
	}
	{
		if (!!((result0 == NIM_NIL))) goto LA17;
		goto BeforeRet;
	}
	LA17: ;
	rawmessage_192612_155036129(((Tmsgkind189002) 68), name0);
	result0 = newsym_291683_850551059(((Tsymkind290435) 0), id0, systemmodule_336004_3937434831, (*systemmodule_336004_3937434831).info);
	asgnRefNoCycle((void**) (&(*result0).typ), newtype_293107_850551059(((Ttypekind290244) 50), systemmodule_336004_3937434831));
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(Tsym290834*, getcompilerproc_336748_3937434831)(NimStringDesc* name0) {
	Tsym290834* result0;
	Tident197010* ident0;
	result0 = (Tsym290834*)0;
	ident0 = getident_197441_791273810(name0);
	result0 = strtableget_297045_2984716966(compilerprocs_336010_3937434831, ident0);
	{
		if (!(result0 == NIM_NIL)) goto LA3;
		result0 = strtableget_297045_2984716966(rodcompilerprocs_330078_1724185294, ident0);
		{
			if (!!((result0 == NIM_NIL))) goto LA7;
			strtableadd_297040_2984716966((&compilerprocs_336010_3937434831), result0);
			{
				if (!((*result0).kind == ((Tsymkind290435) 22))) goto LA11;
				loadstub_333223_1724185294(result0);
			}
			LA11: ;
			{
				if (!((*result0).kind == ((Tsymkind290435) 24))) goto LA15;
				result0 = (*result0).owner;
			}
			LA15: ;
		}
		LA7: ;
	}
	LA3: ;
	return result0;
}

N_NIMCALL(void, registercompilerproc_336797_3937434831)(Tsym290834* s0) {
	strtableadd_297040_2984716966((&compilerprocs_336010_3937434831), s0);
}

N_NIMCALL(void, registernimscriptsymbol_336801_3937434831)(Tsym290834* s0) {
	Tsym290834* conflict0;
	conflict0 = strtableget_297045_2984716966(exposed_336011_3937434831, (*s0).name);
	{
		if (!(conflict0 == NIM_NIL)) goto LA3;
		strtableadd_297040_2984716966((&exposed_336011_3937434831), s0);
	}
	goto LA1;
	LA3: ;
	{
		NimStringDesc* LOC6;
		NimStringDesc* LOC7;
		LOC6 = (NimStringDesc*)0;
		LOC7 = (NimStringDesc*)0;
		LOC7 = HEX24_190431_155036129((*conflict0).info);
		LOC6 = rawNewString(LOC7->Sup.len + 51);
appendString(LOC6, ((NimStringDesc*) &T3937434831_30));
appendString(LOC6, LOC7);
		localerror_194085_155036129((*s0).info, LOC6);
	}
	LA1: ;
}

N_NIMCALL(Ttype290840*, getintlittype_336627_3937434831)(Tnode290802* literal0) {
	Ttype290840* result0;
	NI64 value0;
	result0 = (Ttype290840*)0;
	value0 = (*literal0).kindU.S1.intval;
	{
		NIM_BOOL LOC3;
		LOC3 = (NIM_BOOL)0;
		LOC3 = (IL64(-5) <= value0);
		if (!(LOC3)) goto LA4;
		LOC3 = (value0 <= IL64(64));
		LA4: ;
		if (!LOC3) goto LA5;
		result0 = inttypecache_336217_3937434831[(((NI) (value0)))- -5];
		{
			Ttype290840* ti0;
			if (!(result0 == NIM_NIL)) goto LA9;
			ti0 = getsystype_336150_3937434831(((Ttypekind290244) 31));
			result0 = copytype_293470_850551059(ti0, (*ti0).owner, NIM_FALSE);
			asgnRefNoCycle((void**) (&(*result0).n), literal0);
			asgnRefNoCycle((void**) (&inttypecache_336217_3937434831[(((NI) (value0)))- -5]), result0);
		}
		LA9: ;
	}
	goto LA1;
	LA5: ;
	{
		Ttype290840* ti0;
		ti0 = getsystype_336150_3937434831(((Ttypekind290244) 31));
		result0 = copytype_293470_850551059(ti0, (*ti0).owner, NIM_FALSE);
		asgnRefNoCycle((void**) (&(*result0).n), literal0);
	}
	LA1: ;
	return result0;
}

N_NIMCALL(Ttype290840*, getfloatlittype_336649_3937434831)(Tnode290802* literal0) {
	Ttype290840* result0;
	result0 = (Ttype290840*)0;
	result0 = newsystype_336033_3937434831(((Ttypekind290244) 36), ((NI) 8));
	asgnRefNoCycle((void**) (&(*result0).n), literal0);
	return result0;
}

N_NIMCALL(void, setintlittype_336719_3937434831)(Tnode290802* result0) {
	NI64 i0;
	i0 = (*result0).kindU.S1.intval;
	switch (intsize_175641_4151366050) {
	case ((NI) 8):
	{
		asgnRefNoCycle((void**) (&(*result0).typ), getintlittype_336627_3937434831(result0));
	}
	break;
	case ((NI) 4):
	{
		{
			NIM_BOOL LOC5;
			LOC5 = (NIM_BOOL)0;
			LOC5 = (IL64(-2147483648) <= i0);
			if (!(LOC5)) goto LA6;
			LOC5 = (i0 <= IL64(2147483647));
			LA6: ;
			if (!LOC5) goto LA7;
			asgnRefNoCycle((void**) (&(*result0).typ), getintlittype_336627_3937434831(result0));
		}
		goto LA3;
		LA7: ;
		{
			asgnRefNoCycle((void**) (&(*result0).typ), getsystype_336150_3937434831(((Ttypekind290244) 35)));
		}
		LA3: ;
	}
	break;
	case ((NI) 2):
	{
		{
			NIM_BOOL LOC13;
			LOC13 = (NIM_BOOL)0;
			LOC13 = (IL64(-32768) <= i0);
			if (!(LOC13)) goto LA14;
			LOC13 = (i0 <= IL64(32767));
			LA14: ;
			if (!LOC13) goto LA15;
			asgnRefNoCycle((void**) (&(*result0).typ), getintlittype_336627_3937434831(result0));
		}
		goto LA11;
		LA15: ;
		{
			NIM_BOOL LOC18;
			LOC18 = (NIM_BOOL)0;
			LOC18 = (IL64(-2147483648) <= i0);
			if (!(LOC18)) goto LA19;
			LOC18 = (i0 <= IL64(2147483647));
			LA19: ;
			if (!LOC18) goto LA20;
			asgnRefNoCycle((void**) (&(*result0).typ), getsystype_336150_3937434831(((Ttypekind290244) 34)));
		}
		goto LA11;
		LA20: ;
		{
			asgnRefNoCycle((void**) (&(*result0).typ), getsystype_336150_3937434831(((Ttypekind290244) 35)));
		}
		LA11: ;
	}
	break;
	case ((NI) 1):
	{
		{
			NIM_BOOL LOC26;
			LOC26 = (NIM_BOOL)0;
			LOC26 = (IL64(-128) <= i0);
			if (!(LOC26)) goto LA27;
			LOC26 = (i0 <= IL64(127));
			LA27: ;
			if (!LOC26) goto LA28;
			asgnRefNoCycle((void**) (&(*result0).typ), getintlittype_336627_3937434831(result0));
		}
		goto LA24;
		LA28: ;
		{
			NIM_BOOL LOC31;
			LOC31 = (NIM_BOOL)0;
			LOC31 = (IL64(-32768) <= i0);
			if (!(LOC31)) goto LA32;
			LOC31 = (i0 <= IL64(32767));
			LA32: ;
			if (!LOC31) goto LA33;
			asgnRefNoCycle((void**) (&(*result0).typ), getsystype_336150_3937434831(((Ttypekind290244) 33)));
		}
		goto LA24;
		LA33: ;
		{
			NIM_BOOL LOC36;
			LOC36 = (NIM_BOOL)0;
			LOC36 = (IL64(-2147483648) <= i0);
			if (!(LOC36)) goto LA37;
			LOC36 = (i0 <= IL64(2147483647));
			LA37: ;
			if (!LOC36) goto LA38;
			asgnRefNoCycle((void**) (&(*result0).typ), getsystype_336150_3937434831(((Ttypekind290244) 34)));
		}
		goto LA24;
		LA38: ;
		{
			asgnRefNoCycle((void**) (&(*result0).typ), getsystype_336150_3937434831(((Ttypekind290244) 35)));
		}
		LA24: ;
	}
	break;
	default:
	{
		internalerror_194100_155036129((*result0).info, ((NimStringDesc*) &T3937434831_31));
	}
	break;
	}
}

N_NIMCALL(void, resetsystypes_336219_3937434831)(void) {
	asgnRefNoCycle((void**) (&systemmodule_336004_3937434831), NIM_NIL);
	initstrtable_294001_850551059((&compilerprocs_336010_3937434831));
	initstrtable_294001_850551059((&exposed_336011_3937434831));
	{
		Ttypekind290244 i_336414_3937434831;
		NI res_336618_3937434831;
		i_336414_3937434831 = (Ttypekind290244)0;
		res_336618_3937434831 = ((NI) 0);
		{
			while (1) {
				if (!(res_336618_3937434831 <= ((NI) 62))) goto LA3;
				i_336414_3937434831 = ((Ttypekind290244) (res_336618_3937434831));
				asgnRefNoCycle((void**) (&gsystypes_336009_3937434831[(i_336414_3937434831)- 0]), NIM_NIL);
				res_336618_3937434831 += ((NI) 1);
			} LA3: ;
		}
	}
	{
		NI i_336614_3937434831;
		NI res_336624_3937434831;
		i_336614_3937434831 = (NI)0;
		res_336624_3937434831 = ((NI) -5);
		{
			while (1) {
				if (!(res_336624_3937434831 <= ((NI) 64))) goto LA6;
				i_336614_3937434831 = ((NI) (res_336624_3937434831));
				asgnRefNoCycle((void**) (&inttypecache_336217_3937434831[(i_336614_3937434831)- -5]), NIM_NIL);
				res_336624_3937434831 += ((NI) 1);
			} LA6: ;
		}
	}
}
NIM_EXTERNC N_NOINLINE(void, compiler_magicsysInit000)(void) {
nimRegisterGlobalMarker(T3937434831_2);
nimRegisterGlobalMarker(T3937434831_3);
nimRegisterGlobalMarker(T3937434831_4);
nimRegisterGlobalMarker(T3937434831_5);
nimRegisterGlobalMarker(T3937434831_6);
	initstrtable_294001_850551059((&compilerprocs_336010_3937434831));
	initstrtable_294001_850551059((&exposed_336011_3937434831));
}

NIM_EXTERNC N_NOINLINE(void, compiler_magicsysDatInit000)(void) {
NTI336008.size = sizeof(TY336008);
NTI336008.kind = 16;
NTI336008.base = (&NTI290798);
NTI336008.flags = 2;
NTI336216.size = sizeof(TY336216);
NTI336216.kind = 16;
NTI336216.base = (&NTI290798);
NTI336216.flags = 2;
}

