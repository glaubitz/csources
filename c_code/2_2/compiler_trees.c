/* Generated by Nim Compiler v0.14.3 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
typedef struct Tnode294802 Tnode294802;
typedef struct Ttype294840 Ttype294840;
typedef struct Tlineinfo193336 Tlineinfo193336;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tsym294834 Tsym294834;
typedef struct Tident201010 Tident201010;
typedef struct Tnodeseq294796 Tnodeseq294796;
typedef struct Tidobj201004 Tidobj201004;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq294836 Ttypeseq294836;
typedef struct TY294929 TY294929;
typedef struct Tstrtable294806 Tstrtable294806;
typedef struct Tsymseq294804 Tsymseq294804;
typedef struct Tloc294816 Tloc294816;
typedef struct Ropeobj180006 Ropeobj180006;
typedef struct Tlib294820 Tlib294820;
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
typedef struct TY294960 TY294960;
typedef struct Tinstantiation294824 Tinstantiation294824;
typedef struct Tlistentry148007 Tlistentry148007;
typedef struct Basechunk29438 Basechunk29438;
typedef struct Freecell29430 Freecell29430;
typedef struct TY294961 TY294961;
struct  Tlineinfo193336  {
NI16 line;
NI16 col;
NI32 fileindex;
};
typedef NU16 Tnodeflag294427Set;
typedef NU8 Tnodekind294020;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
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
struct  Tident201010  {
  Tidobj201004 Sup;
NimStringDesc* s;
Tident201010* next;
NI h;
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
typedef NU64 Ttypekind294244Set;
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
typedef NU8 Tnodeflag294427;
typedef NU16 Tspecialword277003;
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
struct TY294961 {
NI Field0;
Tsym294834* Field1;
};
struct  Tinstantiation294824  {
Tsym294834* sym;
Ttypeseq294836* concretetypes;
NI compilesid;
};
struct  Freecell29430  {
Freecell29430* next;
NI zerofield;
};
struct Tnodeseq294796 {
  TGenericSeq Sup;
  Tnode294802* data[SEQ_DECL_SIZE];
};
struct Ttypeseq294836 {
  TGenericSeq Sup;
  Ttype294840* data[SEQ_DECL_SIZE];
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
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a0, NimStringDesc* b0);
static N_INLINE(NIM_BOOL, equalmem_7495_1689653243)(void* a0, void* b0, NI size0);
N_NIMCALL(NI, sonslen_297351_850551059)(Tnode294802* n0);
N_NIMCALL(NIM_BOOL, exprstructuralequivalent_320311_2616423590)(Tnode294802* a0, Tnode294802* b0, NIM_BOOL strictsymequality0);
N_NIMCALL(void*, newSeq)(TNimType* typ0, NI len0);
N_NIMCALL(NIM_BOOL, cyclictreeaux_320004_2616423590)(Tnode294802* n0, Tnodeseq294796** visited0);
N_NIMCALL(TGenericSeq*, incrSeqV2)(TGenericSeq* seq0, NI elemsize0);
static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0);
static N_INLINE(Cell47305*, usrtocell_51440_1689653243)(void* usr0);
static N_INLINE(void, rtladdzct_52601_1689653243)(Cell47305* c0);
N_NOINLINE(void, addzct_51417_1689653243)(Cellseq47321* s0, Cell47305* c0);
static N_INLINE(Tnode294802*, pop_320246_1689653243)(Tnodeseq294796** s0);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* seq0, NI elemsize0, NI newlen0);
N_NIMCALL(Tnode294802*, newnodei_296197_850551059)(Tnodekind294020 kind0, Tlineinfo193336 info0);
N_NIMCALL(void, unneststmts_320936_2616423590)(Tnode294802* n0, Tnode294802* result0);
static N_INLINE(NI, len_295081_850551059)(Tnode294802* n0);
N_NIMCALL(void, add_295136_850551059)(Tnode294802* father0, Tnode294802* son0);
N_NIMCALL(Tnode294802*, newnodei_296401_850551059)(Tnodekind294020 kind0, Tlineinfo193336 info0, NI children0);
N_NIMCALL(NIM_BOOL, isdeepconstexpr_320566_2616423590)(Tnode294802* n0);
N_NIMCALL(Ttype294840*, skiptypes_298099_850551059)(Ttype294840* t0, Ttypekind294244Set kinds0);
N_NIMCALL(NIM_BOOL, iscaseobj_320536_2616423590)(Tnode294802* n0);
static N_INLINE(NI, safelen_295103_850551059)(Tnode294802* n0);
static N_INLINE(Tnode294802*, HEX5BHEX5D_295238_850551059)(Tnode294802* n0, NI i0);
N_NIMCALL(Tspecialword277003, whichkeyword_277365_1391470768)(Tident201010* id0);
extern TNimType NTI294796; /* TNodeSeq */
extern Gcheap49818 gch_49858_1689653243;

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

N_NIMCALL(NIM_BOOL, exprstructuralequivalent_320311_2616423590)(Tnode294802* a0, Tnode294802* b0, NIM_BOOL strictsymequality0) {
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
		case ((Tnodekind294020) 3):
		{
			{
				if (!strictsymequality0) goto LA15;
				result0 = ((*a0).kindU.S4.sym == (*b0).kindU.S4.sym);
			}
			goto LA13;
			LA15: ;
			{
				result0 = ((*(*(*a0).kindU.S4.sym).name).Sup.id == (*(*(*b0).kindU.S4.sym).name).Sup.id);
			}
			LA13: ;
		}
		break;
		case ((Tnodekind294020) 2):
		{
			result0 = ((*(*a0).kindU.S5.ident).Sup.id == (*(*b0).kindU.S5.ident).Sup.id);
		}
		break;
		case ((Tnodekind294020) 5) ... ((Tnodekind294020) 10):
		{
			result0 = ((*a0).kindU.S1.intval == (*b0).kindU.S1.intval);
		}
		break;
		case ((Tnodekind294020) 16) ... ((Tnodekind294020) 18):
		{
			result0 = ((*a0).kindU.S2.floatval == (*b0).kindU.S2.floatval);
		}
		break;
		case ((Tnodekind294020) 20) ... ((Tnodekind294020) 22):
		{
			result0 = eqStrings((*a0).kindU.S3.strval, (*b0).kindU.S3.strval);
		}
		break;
		case ((Tnodekind294020) 1):
		case ((Tnodekind294020) 23):
		case ((Tnodekind294020) 4):
		{
			result0 = NIM_TRUE;
		}
		break;
		default:
		{
			{
				NI LOC26;
				NI LOC27;
				LOC26 = (NI)0;
				LOC26 = sonslen_297351_850551059(a0);
				LOC27 = (NI)0;
				LOC27 = sonslen_297351_850551059(b0);
				if (!(LOC26 == LOC27)) goto LA28;
				{
					NI i_320397_2616423590;
					NI HEX3Atmp_320401_2616423590;
					NI LOC31;
					NI res_320404_2616423590;
					i_320397_2616423590 = (NI)0;
					HEX3Atmp_320401_2616423590 = (NI)0;
					LOC31 = (NI)0;
					LOC31 = sonslen_297351_850551059(a0);
					HEX3Atmp_320401_2616423590 = (NI)(LOC31 - ((NI) 1));
					res_320404_2616423590 = ((NI) 0);
					{
						while (1) {
							if (!(res_320404_2616423590 <= HEX3Atmp_320401_2616423590)) goto LA33;
							i_320397_2616423590 = res_320404_2616423590;
							{
								NIM_BOOL LOC36;
								LOC36 = (NIM_BOOL)0;
								LOC36 = exprstructuralequivalent_320311_2616423590((*a0).kindU.S6.sons->data[i_320397_2616423590], (*b0).kindU.S6.sons->data[i_320397_2616423590], strictsymequality0);
								if (!!(LOC36)) goto LA37;
								goto BeforeRet;
							}
							LA37: ;
							res_320404_2616423590 += ((NI) 1);
						} LA33: ;
					}
				}
				result0 = NIM_TRUE;
			}
			LA28: ;
		}
		break;
		}
	}
	goto LA1;
	LA10: ;
	LA1: ;
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(Tmagic294524, getmagic_320502_2616423590)(Tnode294802* op0) {
	Tmagic294524 result0;
	result0 = (Tmagic294524)0;
	switch ((*op0).kind) {
	case ((Tnodekind294020) 27):
	case ((Tnodekind294020) 29):
	case ((Tnodekind294020) 30):
	case ((Tnodekind294020) 31):
	case ((Tnodekind294020) 26):
	case ((Tnodekind294020) 28):
	case ((Tnodekind294020) 32):
	{
		switch ((*(*op0).kindU.S6.sons->data[((NI) 0)]).kind) {
		case ((Tnodekind294020) 3):
		{
			result0 = (*(*(*op0).kindU.S6.sons->data[((NI) 0)]).kindU.S4.sym).magic;
		}
		break;
		default:
		{
			result0 = ((Tmagic294524) 0);
		}
		break;
		}
	}
	break;
	default:
	{
		result0 = ((Tmagic294524) 0);
	}
	break;
	}
	return result0;
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

static N_INLINE(Tnode294802*, pop_320246_1689653243)(Tnodeseq294796** s0) {
	Tnode294802* result0;
	NI L0;
	result0 = (Tnode294802*)0;
	L0 = (NI)(((*s0) ? (*s0)->Sup.len : 0) - ((NI) 1));
	result0 = (*s0)->data[L0];
	(*s0) = (Tnodeseq294796*) setLengthSeq(&((*s0))->Sup, sizeof(Tnode294802*), ((NI) (L0)));
	return result0;
}

N_NIMCALL(NIM_BOOL, cyclictreeaux_320004_2616423590)(Tnode294802* n0, Tnodeseq294796** visited0) {
	NIM_BOOL result0;
{	result0 = (NIM_BOOL)0;
	{
		if (!(n0 == NIM_NIL)) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	{
		Tnode294802* v_320202_2616423590;
		Tnodeseq294796* HEX3Atmp_320274_2616423590;
		NI i_320277_2616423590;
		NI L_320279_2616423590;
		v_320202_2616423590 = (Tnode294802*)0;
		HEX3Atmp_320274_2616423590 = (Tnodeseq294796*)0;
		HEX3Atmp_320274_2616423590 = (*visited0);
		i_320277_2616423590 = ((NI) 0);
		L_320279_2616423590 = (HEX3Atmp_320274_2616423590 ? HEX3Atmp_320274_2616423590->Sup.len : 0);
		{
			while (1) {
				if (!(i_320277_2616423590 < L_320279_2616423590)) goto LA7;
				v_320202_2616423590 = HEX3Atmp_320274_2616423590->data[i_320277_2616423590];
				{
					if (!(v_320202_2616423590 == n0)) goto LA10;
					result0 = NIM_TRUE;
					goto BeforeRet;
				}
				LA10: ;
				i_320277_2616423590 += ((NI) 1);
			} LA7: ;
		}
	}
	{
		Tnode294802* LOC24;
		if (!!(((*n0).kind >= ((Tnodekind294020) 1) && (*n0).kind <= ((Tnodekind294020) 23)))) goto LA14;
		(*visited0) = (Tnodeseq294796*) incrSeqV2(&((*visited0))->Sup, sizeof(Tnode294802*));
		asgnRefNoCycle((void**) (&(*visited0)->data[(*visited0)->Sup.len]), n0);
		++(*visited0)->Sup.len;
		{
			Tnode294802* nson_320244_2616423590;
			Tnodeseq294796* HEX3Atmp_320281_2616423590;
			NI i_320284_2616423590;
			NI L_320286_2616423590;
			nson_320244_2616423590 = (Tnode294802*)0;
			HEX3Atmp_320281_2616423590 = (Tnodeseq294796*)0;
			HEX3Atmp_320281_2616423590 = (*n0).kindU.S6.sons;
			i_320284_2616423590 = ((NI) 0);
			L_320286_2616423590 = (HEX3Atmp_320281_2616423590 ? HEX3Atmp_320281_2616423590->Sup.len : 0);
			{
				while (1) {
					if (!(i_320284_2616423590 < L_320286_2616423590)) goto LA18;
					nson_320244_2616423590 = HEX3Atmp_320281_2616423590->data[i_320284_2616423590];
					{
						NIM_BOOL LOC21;
						LOC21 = (NIM_BOOL)0;
						LOC21 = cyclictreeaux_320004_2616423590(nson_320244_2616423590, visited0);
						if (!LOC21) goto LA22;
						result0 = NIM_TRUE;
						goto BeforeRet;
					}
					LA22: ;
					i_320284_2616423590 += ((NI) 1);
				} LA18: ;
			}
		}
		LOC24 = (Tnode294802*)0;
		LOC24 = pop_320246_1689653243(visited0);
	}
	LA14: ;
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(NIM_BOOL, cyclictree_320287_2616423590)(Tnode294802* n0) {
	NIM_BOOL result0;
	Tnodeseq294796* visited0;
	result0 = (NIM_BOOL)0;
	visited0 = (Tnodeseq294796*) newSeq((&NTI294796), 0);
	result0 = cyclictreeaux_320004_2616423590(n0, (&visited0));
	return result0;
}

static N_INLINE(NI, len_295081_850551059)(Tnode294802* n0) {
	NI result0;
	result0 = (NI)0;
	{
		if (!(*n0).kindU.S6.sons == 0) goto LA3;
		result0 = ((NI) 0);
	}
	goto LA1;
	LA3: ;
	{
		result0 = ((*n0).kindU.S6.sons ? (*n0).kindU.S6.sons->Sup.len : 0);
	}
	LA1: ;
	return result0;
}

N_NIMCALL(void, unneststmts_320936_2616423590)(Tnode294802* n0, Tnode294802* result0) {
	{
		if (!((*n0).kind == ((Tnodekind294020) 115))) goto LA3;
		{
			Tnode294802* x_320949_2616423590;
			x_320949_2616423590 = (Tnode294802*)0;
			{
				NI i_320966_2616423590;
				NI HEX3Atmp_320968_2616423590;
				NI LOC7;
				NI res_320970_2616423590;
				i_320966_2616423590 = (NI)0;
				HEX3Atmp_320968_2616423590 = (NI)0;
				LOC7 = (NI)0;
				LOC7 = len_295081_850551059(n0);
				HEX3Atmp_320968_2616423590 = (LOC7 - 1);
				res_320970_2616423590 = ((NI) 0);
				{
					while (1) {
						if (!(res_320970_2616423590 <= HEX3Atmp_320968_2616423590)) goto LA9;
						i_320966_2616423590 = res_320970_2616423590;
						x_320949_2616423590 = (*n0).kindU.S6.sons->data[i_320966_2616423590];
						unneststmts_320936_2616423590(x_320949_2616423590, result0);
						res_320970_2616423590 += ((NI) 1);
					} LA9: ;
				}
			}
		}
	}
	goto LA1;
	LA3: ;
	{
		if (!!(((*n0).kind == ((Tnodekind294020) 125) || (*n0).kind == ((Tnodekind294020) 23)))) goto LA11;
		add_295136_850551059(result0, n0);
	}
	goto LA1;
	LA11: ;
	LA1: ;
}

N_NIMCALL(Tnode294802*, flattenstmts_320973_2616423590)(Tnode294802* n0) {
	Tnode294802* result0;
	result0 = (Tnode294802*)0;
	result0 = newnodei_296197_850551059(((Tnodekind294020) 115), (*n0).info);
	unneststmts_320936_2616423590(n0, result0);
	{
		NI LOC3;
		LOC3 = (NI)0;
		LOC3 = len_295081_850551059(result0);
		if (!(LOC3 == ((NI) 1))) goto LA4;
		result0 = (*result0).kindU.S6.sons->data[((NI) 0)];
	}
	LA4: ;
	return result0;
}

N_NIMCALL(Tnode294802*, extractrange_320979_2616423590)(Tnodekind294020 k0, Tnode294802* n0, NI a0, NI b0) {
	Tnode294802* result0;
	result0 = (Tnode294802*)0;
	result0 = newnodei_296401_850551059(k0, (*n0).info, (NI)((NI)(b0 - a0) + ((NI) 1)));
	{
		NI i_320995_2616423590;
		NI HEX3Atmp_320999_2616423590;
		NI res_321002_2616423590;
		i_320995_2616423590 = (NI)0;
		HEX3Atmp_320999_2616423590 = (NI)0;
		HEX3Atmp_320999_2616423590 = (NI)(b0 - a0);
		res_321002_2616423590 = ((NI) 0);
		{
			while (1) {
				if (!(res_321002_2616423590 <= HEX3Atmp_320999_2616423590)) goto LA3;
				i_320995_2616423590 = res_321002_2616423590;
				asgnRefNoCycle((void**) (&(*result0).kindU.S6.sons->data[i_320995_2616423590]), (*n0).kindU.S6.sons->data[(NI)(i_320995_2616423590 + a0)]);
				res_321002_2616423590 += ((NI) 1);
			} LA3: ;
		}
	}
	return result0;
}

static N_INLINE(NI, safelen_295103_850551059)(Tnode294802* n0) {
	NI result0;
	result0 = (NI)0;
	{
		NIM_BOOL LOC3;
		LOC3 = (NIM_BOOL)0;
		LOC3 = ((*n0).kind >= ((Tnodekind294020) 0) && (*n0).kind <= ((Tnodekind294020) 23));
		if (LOC3) goto LA4;
		LOC3 = (*n0).kindU.S6.sons == 0;
		LA4: ;
		if (!LOC3) goto LA5;
		result0 = ((NI) 0);
	}
	goto LA1;
	LA5: ;
	{
		result0 = ((*n0).kindU.S6.sons ? (*n0).kindU.S6.sons->Sup.len : 0);
	}
	LA1: ;
	return result0;
}

static N_INLINE(Tnode294802*, HEX5BHEX5D_295238_850551059)(Tnode294802* n0, NI i0) {
	Tnode294802* result0;
	result0 = (Tnode294802*)0;
	result0 = (*n0).kindU.S6.sons->data[i0];
	return result0;
}

N_NIMCALL(NIM_BOOL, iscaseobj_320536_2616423590)(Tnode294802* n0) {
	NIM_BOOL result0;
{	result0 = (NIM_BOOL)0;
	{
		if (!((*n0).kind == ((Tnodekind294020) 139))) goto LA3;
		result0 = NIM_TRUE;
		goto BeforeRet;
	}
	LA3: ;
	{
		NI i_320558_2616423590;
		NI HEX3Atmp_320561_2616423590;
		NI i_320564_2616423590;
		i_320558_2616423590 = (NI)0;
		HEX3Atmp_320561_2616423590 = (NI)0;
		HEX3Atmp_320561_2616423590 = safelen_295103_850551059(n0);
		i_320564_2616423590 = ((NI) 0);
		{
			while (1) {
				if (!(i_320564_2616423590 < HEX3Atmp_320561_2616423590)) goto LA7;
				i_320558_2616423590 = i_320564_2616423590;
				{
					Tnode294802* LOC10;
					NIM_BOOL LOC11;
					LOC10 = (Tnode294802*)0;
					LOC10 = HEX5BHEX5D_295238_850551059(n0, i_320558_2616423590);
					LOC11 = (NIM_BOOL)0;
					LOC11 = iscaseobj_320536_2616423590(LOC10);
					if (!LOC11) goto LA12;
					result0 = NIM_TRUE;
					goto BeforeRet;
				}
				LA12: ;
				i_320564_2616423590 += ((NI) 1);
			} LA7: ;
		}
	}
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(NIM_BOOL, isdeepconstexpr_320566_2616423590)(Tnode294802* n0) {
	NIM_BOOL result0;
{	result0 = (NIM_BOOL)0;
	switch ((*n0).kind) {
	case ((Tnodekind294020) 5) ... ((Tnodekind294020) 10):
	case ((Tnodekind294020) 20) ... ((Tnodekind294020) 22):
	case ((Tnodekind294020) 16) ... ((Tnodekind294020) 18):
	case ((Tnodekind294020) 23):
	{
		result0 = NIM_TRUE;
	}
	break;
	case ((Tnodekind294020) 33):
	case ((Tnodekind294020) 34):
	case ((Tnodekind294020) 58):
	case ((Tnodekind294020) 59):
	{
		result0 = isdeepconstexpr_320566_2616423590((*n0).kindU.S6.sons->data[((NI) 1)]);
	}
	break;
	case ((Tnodekind294020) 39):
	case ((Tnodekind294020) 41):
	case ((Tnodekind294020) 37):
	case ((Tnodekind294020) 38):
	case ((Tnodekind294020) 155):
	{
		{
			NI i_320815_2616423590;
			NI HEX3Atmp_320848_2616423590;
			NI HEX3Atmp_320849_2616423590;
			NI LOC5;
			NI res_320852_2616423590;
			i_320815_2616423590 = (NI)0;
			HEX3Atmp_320848_2616423590 = (NI)0;
			HEX3Atmp_320849_2616423590 = (NI)0;
			HEX3Atmp_320848_2616423590 = ((*n0).kind == ((Tnodekind294020) 38));
			LOC5 = (NI)0;
			LOC5 = len_295081_850551059(n0);
			HEX3Atmp_320849_2616423590 = (LOC5 - 1);
			res_320852_2616423590 = ((NI) (HEX3Atmp_320848_2616423590));
			{
				while (1) {
					if (!(res_320852_2616423590 <= HEX3Atmp_320849_2616423590)) goto LA7;
					i_320815_2616423590 = res_320852_2616423590;
					{
						NIM_BOOL LOC10;
						LOC10 = (NIM_BOOL)0;
						LOC10 = isdeepconstexpr_320566_2616423590((*n0).kindU.S6.sons->data[i_320815_2616423590]);
						if (!!(LOC10)) goto LA11;
						result0 = NIM_FALSE;
						goto BeforeRet;
					}
					LA11: ;
					res_320852_2616423590 += ((NI) 1);
				} LA7: ;
			}
		}
		{
			if (!(*n0).typ == 0) goto LA15;
			result0 = NIM_TRUE;
		}
		goto LA13;
		LA15: ;
		{
			Ttype294840* t0;
			t0 = skiptypes_298099_850551059((*n0).typ, 10240);
			{
				if (!((6291456 &((NU64)1<<((NU)((*t0).kind)&63U)))!=0)) goto LA20;
				result0 = NIM_FALSE;
				goto BeforeRet;
			}
			LA20: ;
			{
				NIM_BOOL LOC24;
				NIM_BOOL LOC26;
				LOC24 = (NIM_BOOL)0;
				LOC24 = !(((*t0).kind == ((Ttypekind294244) 17)));
				if (LOC24) goto LA25;
				LOC26 = (NIM_BOOL)0;
				LOC26 = iscaseobj_320536_2616423590((*t0).n);
				LOC24 = !(LOC26);
				LA25: ;
				if (!LOC24) goto LA27;
				result0 = NIM_TRUE;
			}
			LA27: ;
		}
		LA13: ;
	}
	break;
	default:
	{
	}
	break;
	}
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(NIM_BOOL, isconstexpr_320510_2616423590)(Tnode294802* n0) {
	NIM_BOOL result0;
	NIM_BOOL LOC1;
	result0 = (NIM_BOOL)0;
	LOC1 = (NIM_BOOL)0;
	LOC1 = ((*n0).kind >= ((Tnodekind294020) 5) && (*n0).kind <= ((Tnodekind294020) 23));
	if (LOC1) goto LA2;
	LOC1 = (((*n0).flags &(1U<<((NU)(((Tnodeflag294427) 4))&15U)))!=0);
	LA2: ;
	result0 = LOC1;
	return result0;
}

N_NIMCALL(Tspecialword277003, whichpragma_320911_2616423590)(Tnode294802* n0) {
	Tspecialword277003 result0;
	Tnode294802* key0;
	result0 = (Tspecialword277003)0;
	{
		if (!((*n0).kind == ((Tnodekind294020) 34))) goto LA3;
		key0 = (*n0).kindU.S6.sons->data[((NI) 0)];
	}
	goto LA1;
	LA3: ;
	{
		key0 = n0;
	}
	LA1: ;
	{
		if (!((*key0).kind == ((Tnodekind294020) 2))) goto LA8;
		result0 = whichkeyword_277365_1391470768((*key0).kindU.S5.ident);
	}
	LA8: ;
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, compiler_treesInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_treesDatInit000)(void) {
}

