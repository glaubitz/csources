/* Generated by Nim Compiler v0.14.3 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
typedef struct Tnodetable290862 Tnodetable290862;
typedef struct Tnode290802 Tnode290802;
typedef struct Tnodepairseq290860 Tnodepairseq290860;
typedef struct Tnodepair290858 Tnodepair290858;
typedef struct TGenericSeq TGenericSeq;
typedef struct Ttype290840 Ttype290840;
typedef struct Tlineinfo189336 Tlineinfo189336;
typedef struct NimStringDesc NimStringDesc;
typedef struct Tsym290834 Tsym290834;
typedef struct Tident197010 Tident197010;
typedef struct Tnodeseq290796 Tnodeseq290796;
typedef struct Tidobj197004 Tidobj197004;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq290836 Ttypeseq290836;
typedef struct TY290929 TY290929;
typedef struct Tstrtable290806 Tstrtable290806;
typedef struct Tsymseq290804 Tsymseq290804;
typedef struct Tloc290816 Tloc290816;
typedef struct Ropeobj177006 Ropeobj177006;
typedef struct Tlib290820 Tlib290820;
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
typedef struct TY290960 TY290960;
typedef struct Tinstantiation290824 Tinstantiation290824;
typedef struct Tlistentry147007 Tlistentry147007;
typedef struct Basechunk29037 Basechunk29037;
typedef struct Freecell29029 Freecell29029;
typedef struct TY290961 TY290961;
struct  Tnodepair290858  {
NI h;
Tnode290802* key;
NI val;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  Tlineinfo189336  {
NI16 line;
NI16 col;
NI32 fileindex;
};
typedef NU16 Tnodeflag290427Set;
typedef NU8 Tnodekind290020;
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
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
struct  TNimObject  {
TNimType* m_type;
};
struct  Tidobj197004  {
  TNimObject Sup;
NI id;
};
struct  Tident197010  {
  Tidobj197004 Sup;
NimStringDesc* s;
Tident197010* next;
NI h;
};
typedef NU8 Tsymkind290435;
struct  Tstrtable290806  {
NI counter;
Tsymseq290804* data;
};
typedef NU16 Tmagic290524;
typedef NU32 Tsymflag290184Set;
typedef NU32 Toption168009Set;
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
struct  Tnodetable290862  {
NI counter;
Tnodepairseq290860* data;
};
typedef NU8 Ttypecmpflag322429Set;
typedef NU8 Tnimnodekind3405;
struct  TNimNode  {
Tnimnodekind3405 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
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
struct  Ropeobj177006  {
  TNimObject Sup;
Ropeobj177006* left;
Ropeobj177006* right;
NI length;
NimStringDesc* data;
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
typedef NI TY29018[16];
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
struct TY290961 {
NI Field0;
Tsym290834* Field1;
};
struct  Tinstantiation290824  {
Tsym290834* sym;
Ttypeseq290836* concretetypes;
NI compilesid;
};
struct  Freecell29029  {
Freecell29029* next;
NI zerofield;
};
struct Tnodepairseq290860 {
  TGenericSeq Sup;
  Tnodepair290858 data[SEQ_DECL_SIZE];
};
struct Tnodeseq290796 {
  TGenericSeq Sup;
  Tnode290802* data[SEQ_DECL_SIZE];
};
struct Ttypeseq290836 {
  TGenericSeq Sup;
  Ttype290840* data[SEQ_DECL_SIZE];
};
struct TY290929 {
  TGenericSeq Sup;
  Tinstantiation290824* data[SEQ_DECL_SIZE];
};
struct Tsymseq290804 {
  TGenericSeq Sup;
  Tsym290834* data[SEQ_DECL_SIZE];
};
struct TY290960 {
  TGenericSeq Sup;
  TY290961 data[SEQ_DECL_SIZE];
};
N_NIMCALL(NI, hashtree_340005_1142335848)(Tnode290802* n0);
static N_INLINE(NI, HEX21HEX26_149005_213663784)(NI h0, NI val0);
N_NIMCALL(NI, hash_149827_213663784)(NimStringDesc* x0);
N_NIMCALL(NI, sonslen_293351_850551059)(Tnode290802* n0);
N_NIMCALL(NI, nodetablerawget_340155_1142335848)(Tnodetable290862 t0, NI k0, Tnode290802* key0);
N_NIMCALL(NIM_BOOL, treesequivalent_340072_1142335848)(Tnode290802* a0, Tnode290802* b0);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a0, NimStringDesc* b0);
static N_INLINE(NIM_BOOL, equalmem_7495_1689653243)(void* a0, void* b0, NI size0);
N_NIMCALL(NIM_BOOL, sametypeornil_322643_3876443242)(Ttype290840* a0, Ttype290840* b0, Ttypecmpflag322429Set flags0);
static N_INLINE(NI, nexttry_297130_2984716966)(NI h0, NI maxhash0);
N_NIMCALL(NIM_BOOL, mustrehash_297126_2984716966)(NI length0, NI counter0);
N_NIMCALL(void*, newSeq)(TNimType* typ0, NI len0);
N_NIMCALL(void, nodetablerawinsert_340185_1142335848)(Tnodepairseq290860** data0, NI k0, Tnode290802* key0, NI val0);
static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0);
static N_INLINE(Cell46904*, usrtocell_51040_1689653243)(void* usr0);
static N_INLINE(void, rtladdzct_52201_1689653243)(Cell46904* c0);
N_NOINLINE(void, addzct_51017_1689653243)(Cellseq46920* s0, Cell46904* c0);
N_NIMCALL(void, unsureAsgnRef)(void** dest0, void* src0);
extern TNimType NTI290860; /* TNodePairSeq */
extern Gcheap49418 gch_49458_1689653243;

static N_INLINE(NI, HEX21HEX26_149005_213663784)(NI h0, NI val0) {
	NI result0;
	result0 = (NI)0;
	result0 = (NI)((NU32)(h0) + (NU32)(val0));
	result0 = (NI)((NU32)(result0) + (NU32)((NI)((NU32)(result0) << (NU32)(((NI) 10)))));
	result0 = (NI)(result0 ^ (NI)((NU32)(result0) >> (NU32)(((NI) 6))));
	return result0;
}

N_NIMCALL(NI, hashtree_340005_1142335848)(Tnode290802* n0) {
	NI result0;
{	result0 = (NI)0;
	{
		if (!(n0 == NIM_NIL)) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	result0 = ((NI) ((*n0).kind));
	switch ((*n0).kind) {
	case ((Tnodekind290020) 1):
	case ((Tnodekind290020) 23):
	case ((Tnodekind290020) 4):
	{
	}
	break;
	case ((Tnodekind290020) 2):
	{
		result0 = HEX21HEX26_149005_213663784(result0, (*(*n0).kindU.S5.ident).h);
	}
	break;
	case ((Tnodekind290020) 3):
	{
		result0 = HEX21HEX26_149005_213663784(result0, (*(*(*n0).kindU.S4.sym).name).h);
	}
	break;
	case ((Tnodekind290020) 5) ... ((Tnodekind290020) 15):
	{
		{
			NIM_BOOL LOC11;
			LOC11 = (NIM_BOOL)0;
			LOC11 = (IL64(-2147483648) <= (*n0).kindU.S1.intval);
			if (!(LOC11)) goto LA12;
			LOC11 = ((*n0).kindU.S1.intval <= IL64(2147483647));
			LA12: ;
			if (!LOC11) goto LA13;
			result0 = HEX21HEX26_149005_213663784(result0, ((NI) ((*n0).kindU.S1.intval)));
		}
		LA13: ;
	}
	break;
	case ((Tnodekind290020) 16) ... ((Tnodekind290020) 18):
	{
		{
			NIM_BOOL LOC18;
			LOC18 = (NIM_BOOL)0;
			LOC18 = (-1.0000000000000000e+06 <= (*n0).kindU.S2.floatval);
			if (!(LOC18)) goto LA19;
			LOC18 = ((*n0).kindU.S2.floatval <= 1.0000000000000000e+06);
			LA19: ;
			if (!LOC18) goto LA20;
			result0 = HEX21HEX26_149005_213663784(result0, float64ToInt32((*n0).kindU.S2.floatval));
		}
		LA20: ;
	}
	break;
	case ((Tnodekind290020) 20) ... ((Tnodekind290020) 22):
	{
		{
			NI LOC27;
			if (!!((*n0).kindU.S3.strval == 0)) goto LA25;
			LOC27 = (NI)0;
			LOC27 = hash_149827_213663784((*n0).kindU.S3.strval);
			result0 = HEX21HEX26_149005_213663784(result0, LOC27);
		}
		LA25: ;
	}
	break;
	default:
	{
		{
			NI i_340058_1142335848;
			NI HEX3Atmp_340065_1142335848;
			NI LOC30;
			NI res_340068_1142335848;
			i_340058_1142335848 = (NI)0;
			HEX3Atmp_340065_1142335848 = (NI)0;
			LOC30 = (NI)0;
			LOC30 = sonslen_293351_850551059(n0);
			HEX3Atmp_340065_1142335848 = (NI)(LOC30 - ((NI) 1));
			res_340068_1142335848 = ((NI) 0);
			{
				while (1) {
					NI LOC33;
					if (!(res_340068_1142335848 <= HEX3Atmp_340065_1142335848)) goto LA32;
					i_340058_1142335848 = res_340068_1142335848;
					LOC33 = (NI)0;
					LOC33 = hashtree_340005_1142335848((*n0).kindU.S6.sons->data[i_340058_1142335848]);
					result0 = HEX21HEX26_149005_213663784(result0, LOC33);
					res_340068_1142335848 += ((NI) 1);
				} LA32: ;
			}
		}
	}
	break;
	}
	}BeforeRet: ;
	return result0;
}

static N_INLINE(NIM_BOOL, equalmem_7495_1689653243)(void* a0, void* b0, NI size0) {
	NIM_BOOL result0;
	int LOC1;
	result0 = (NIM_BOOL)0;
	LOC1 = (int)0;
	LOC1 = memcmp(a0, b0, ((size_t) (size0)));
	result0 = (LOC1 == ((NI32) 0));
	return result0;
}

static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a0, NimStringDesc* b0) {
	NIM_BOOL result0;
	NIM_BOOL LOC11;
{	result0 = (NIM_BOOL)0;
	{
		if (!(a0 == b0)) goto LA3;
		result0 = NIM_TRUE;
		goto BeforeRet;
	}
	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = (NIM_BOOL)0;
		LOC7 = (a0 == NIM_NIL);
		if (LOC7) goto LA8;
		LOC7 = (b0 == NIM_NIL);
		LA8: ;
		if (!LOC7) goto LA9;
		result0 = NIM_FALSE;
		goto BeforeRet;
	}
	LA9: ;
	LOC11 = (NIM_BOOL)0;
	LOC11 = ((*a0).Sup.len == (*b0).Sup.len);
	if (!(LOC11)) goto LA12;
	LOC11 = equalmem_7495_1689653243(((void*) ((*a0).data)), ((void*) ((*b0).data)), ((NI) ((*a0).Sup.len)));
	LA12: ;
	result0 = LOC11;
	goto BeforeRet;
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(NIM_BOOL, treesequivalent_340072_1142335848)(Tnode290802* a0, Tnode290802* b0) {
	NIM_BOOL result0;
{	result0 = (NIM_BOOL)0;
	{
		if (!(a0 == b0)) goto LA3;
		result0 = NIM_TRUE;
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		NIM_BOOL LOC7;
		LOC6 = (NIM_BOOL)0;
		LOC7 = (NIM_BOOL)0;
		LOC7 = !((a0 == NIM_NIL));
		if (!(LOC7)) goto LA8;
		LOC7 = !((b0 == NIM_NIL));
		LA8: ;
		LOC6 = LOC7;
		if (!(LOC6)) goto LA9;
		LOC6 = ((*a0).kind == (*b0).kind);
		LA9: ;
		if (!LOC6) goto LA10;
		switch ((*a0).kind) {
		case ((Tnodekind290020) 1):
		case ((Tnodekind290020) 23):
		case ((Tnodekind290020) 4):
		{
			result0 = NIM_TRUE;
		}
		break;
		case ((Tnodekind290020) 3):
		{
			result0 = ((*(*a0).kindU.S4.sym).Sup.id == (*(*b0).kindU.S4.sym).Sup.id);
		}
		break;
		case ((Tnodekind290020) 2):
		{
			result0 = ((*(*a0).kindU.S5.ident).Sup.id == (*(*b0).kindU.S5.ident).Sup.id);
		}
		break;
		case ((Tnodekind290020) 5) ... ((Tnodekind290020) 15):
		{
			result0 = ((*a0).kindU.S1.intval == (*b0).kindU.S1.intval);
		}
		break;
		case ((Tnodekind290020) 16) ... ((Tnodekind290020) 18):
		{
			result0 = ((*a0).kindU.S2.floatval == (*b0).kindU.S2.floatval);
		}
		break;
		case ((Tnodekind290020) 20) ... ((Tnodekind290020) 22):
		{
			result0 = eqStrings((*a0).kindU.S3.strval, (*b0).kindU.S3.strval);
		}
		break;
		default:
		{
			{
				NI LOC21;
				NI LOC22;
				LOC21 = (NI)0;
				LOC21 = sonslen_293351_850551059(a0);
				LOC22 = (NI)0;
				LOC22 = sonslen_293351_850551059(b0);
				if (!(LOC21 == LOC22)) goto LA23;
				{
					NI i_340144_1142335848;
					NI HEX3Atmp_340148_1142335848;
					NI LOC26;
					NI res_340151_1142335848;
					i_340144_1142335848 = (NI)0;
					HEX3Atmp_340148_1142335848 = (NI)0;
					LOC26 = (NI)0;
					LOC26 = sonslen_293351_850551059(a0);
					HEX3Atmp_340148_1142335848 = (NI)(LOC26 - ((NI) 1));
					res_340151_1142335848 = ((NI) 0);
					{
						while (1) {
							if (!(res_340151_1142335848 <= HEX3Atmp_340148_1142335848)) goto LA28;
							i_340144_1142335848 = res_340151_1142335848;
							{
								NIM_BOOL LOC31;
								LOC31 = (NIM_BOOL)0;
								LOC31 = treesequivalent_340072_1142335848((*a0).kindU.S6.sons->data[i_340144_1142335848], (*b0).kindU.S6.sons->data[i_340144_1142335848]);
								if (!!(LOC31)) goto LA32;
								goto BeforeRet;
							}
							LA32: ;
							res_340151_1142335848 += ((NI) 1);
						} LA28: ;
					}
				}
				result0 = NIM_TRUE;
			}
			LA23: ;
		}
		break;
		}
		{
			if (!result0) goto LA36;
			result0 = sametypeornil_322643_3876443242((*a0).typ, (*b0).typ, 0);
		}
		LA36: ;
	}
	goto LA1;
	LA10: ;
	LA1: ;
	}BeforeRet: ;
	return result0;
}

static N_INLINE(NI, nexttry_297130_2984716966)(NI h0, NI maxhash0) {
	NI result0;
	result0 = (NI)0;
	result0 = (NI)((NI)((NI)(((NI) 5) * h0) + ((NI) 1)) & maxhash0);
	return result0;
}

N_NIMCALL(NI, nodetablerawget_340155_1142335848)(Tnodetable290862 t0, NI k0, Tnode290802* key0) {
	NI result0;
	NI h0;
{	result0 = (NI)0;
	h0 = (NI)(k0 & (t0.data ? (t0.data->Sup.len-1) : -1));
	{
		while (1) {
			if (!!((t0.data->data[h0].key == NIM_NIL))) goto LA2;
			{
				NIM_BOOL LOC5;
				LOC5 = (NIM_BOOL)0;
				LOC5 = (t0.data->data[h0].h == k0);
				if (!(LOC5)) goto LA6;
				LOC5 = treesequivalent_340072_1142335848(t0.data->data[h0].key, key0);
				LA6: ;
				if (!LOC5) goto LA7;
				result0 = h0;
				goto BeforeRet;
			}
			LA7: ;
			h0 = nexttry_297130_2984716966(h0, (t0.data ? (t0.data->Sup.len-1) : -1));
		} LA2: ;
	}
	result0 = ((NI) -1);
	}BeforeRet: ;
	return result0;
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

N_NIMCALL(void, nodetablerawinsert_340185_1142335848)(Tnodepairseq290860** data0, NI k0, Tnode290802* key0, NI val0) {
	NI h0;
	h0 = (NI)(k0 & ((*data0) ? ((*data0)->Sup.len-1) : -1));
	{
		while (1) {
			if (!!(((*data0)->data[h0].key == NIM_NIL))) goto LA2;
			h0 = nexttry_297130_2984716966(h0, ((*data0) ? ((*data0)->Sup.len-1) : -1));
		} LA2: ;
	}
	(*data0)->data[h0].h = k0;
	asgnRefNoCycle((void**) (&(*data0)->data[h0].key), key0);
	(*data0)->data[h0].val = val0;
}

N_NIMCALL(NI, nodetabletestorset_340682_1142335848)(Tnodetable290862* t0, Tnode290802* key0, NI val0) {
	NI result0;
	Tnodepairseq290860* n0;
	NI k0;
	NI index0;
	result0 = (NI)0;
	n0 = (Tnodepairseq290860*)0;
	k0 = hashtree_340005_1142335848(key0);
	index0 = nodetablerawget_340155_1142335848((*t0), k0, key0);
	{
		if (!(((NI) 0) <= index0)) goto LA3;
		result0 = (*t0).data->data[index0].val;
	}
	goto LA1;
	LA3: ;
	{
		{
			NIM_BOOL LOC8;
			Tnodepairseq290860* LOC18;
			LOC8 = (NIM_BOOL)0;
			LOC8 = mustrehash_297126_2984716966(((*t0).data ? (*t0).data->Sup.len : 0), (*t0).counter);
			if (!LOC8) goto LA9;
			n0 = (Tnodepairseq290860*) newSeq((&NTI290860), ((NI) ((NI)(((*t0).data ? (*t0).data->Sup.len : 0) * ((NI) 2)))));
			{
				NI i_340838_1142335848;
				NI HEX3Atmp_340875_1142335848;
				NI res_340878_1142335848;
				i_340838_1142335848 = (NI)0;
				HEX3Atmp_340875_1142335848 = (NI)0;
				HEX3Atmp_340875_1142335848 = ((*t0).data ? ((*t0).data->Sup.len-1) : -1);
				res_340878_1142335848 = ((NI) 0);
				{
					while (1) {
						if (!(res_340878_1142335848 <= HEX3Atmp_340875_1142335848)) goto LA13;
						i_340838_1142335848 = res_340878_1142335848;
						{
							if (!!(((*t0).data->data[i_340838_1142335848].key == NIM_NIL))) goto LA16;
							nodetablerawinsert_340185_1142335848((&n0), (*t0).data->data[i_340838_1142335848].h, (*t0).data->data[i_340838_1142335848].key, (*t0).data->data[i_340838_1142335848].val);
						}
						LA16: ;
						res_340878_1142335848 += ((NI) 1);
					} LA13: ;
				}
			}
			LOC18 = (Tnodepairseq290860*)0;
			LOC18 = (*t0).data;
			unsureAsgnRef((void**) (&(*t0).data), n0);
			n0 = LOC18;
		}
		LA9: ;
		nodetablerawinsert_340185_1142335848((&(*t0).data), k0, key0, val0);
		result0 = val0;
		(*t0).counter += ((NI) 1);
	}
	LA1: ;
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, compiler_treetabInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_treetabDatInit000)(void) {
}

