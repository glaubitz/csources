/* Generated by Nim Compiler v0.14.3 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
typedef struct Tnode292802 Tnode292802;
typedef struct Ttype292840 Ttype292840;
typedef struct Tlineinfo191336 Tlineinfo191336;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tsym292834 Tsym292834;
typedef struct Tident199010 Tident199010;
typedef struct Tnodeseq292796 Tnodeseq292796;
typedef struct Tidobj199004 Tidobj199004;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq292836 Ttypeseq292836;
typedef struct TY292929 TY292929;
typedef struct Tstrtable292806 Tstrtable292806;
typedef struct Tsymseq292804 Tsymseq292804;
typedef struct Tloc292816 Tloc292816;
typedef struct Ropeobj178006 Ropeobj178006;
typedef struct Tlib292820 Tlib292820;
typedef struct Cell47304 Cell47304;
typedef struct Cellseq47320 Cellseq47320;
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
typedef struct Cellset47316 Cellset47316;
typedef struct Pagedesc47312 Pagedesc47312;
typedef struct TY292960 TY292960;
typedef struct Tinstantiation292824 Tinstantiation292824;
typedef struct Tlistentry147007 Tlistentry147007;
typedef struct Basechunk29437 Basechunk29437;
typedef struct Freecell29429 Freecell29429;
typedef struct TY292961 TY292961;
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
typedef NU8 Tnimnodekind3405;
struct  TNimNode  {
Tnimnodekind3405 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  Cell47304  {
NI refcount;
TNimType* typ;
};
struct  Cellseq47320  {
NI len;
NI cap;
Cell47304** d;
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
struct  Cellset47316  {
NI counter;
NI max;
Pagedesc47312* head;
Pagedesc47312** data;
};
struct  Gcheap49818  {
Gcstack49816* stack;
void* stackbottom;
NI cyclethreshold;
Cellseq47320 zct;
Cellseq47320 decstack;
Cellseq47320 tempstack;
NI recgclock;
Memregion29485 region;
Gcstat49814 stat;
Cellset47316 marked;
Cellseq47320 additionalroots;
};
typedef NU64 Ttypekind292244Set;
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
typedef NU8 Tnodeflag292427;
typedef NU16 Tspecialword275003;
struct  Ropeobj178006  {
  TNimObject Sup;
Ropeobj178006* left;
Ropeobj178006* right;
NI length;
NimStringDesc* data;
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
typedef NI TY29418[16];
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
struct  Pagedesc47312  {
Pagedesc47312* next;
NI key;
TY29418 bits;
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
struct  Freecell29429  {
Freecell29429* next;
NI zerofield;
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
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a0, NimStringDesc* b0);
static N_INLINE(NIM_BOOL, equalmem_7495_1689653243)(void* a0, void* b0, NI size0);
N_NIMCALL(NI, sonslen_295351_850551059)(Tnode292802* n0);
N_NIMCALL(NIM_BOOL, exprstructuralequivalent_318311_2616423590)(Tnode292802* a0, Tnode292802* b0, NIM_BOOL strictsymequality0);
N_NIMCALL(void*, newSeq)(TNimType* typ0, NI len0);
N_NIMCALL(NIM_BOOL, cyclictreeaux_318004_2616423590)(Tnode292802* n0, Tnodeseq292796** visited0);
N_NIMCALL(TGenericSeq*, incrSeqV2)(TGenericSeq* seq0, NI elemsize0);
static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0);
static N_INLINE(Cell47304*, usrtocell_51440_1689653243)(void* usr0);
static N_INLINE(void, rtladdzct_52601_1689653243)(Cell47304* c0);
N_NOINLINE(void, addzct_51417_1689653243)(Cellseq47320* s0, Cell47304* c0);
static N_INLINE(Tnode292802*, pop_318246_1689653243)(Tnodeseq292796** s0);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* seq0, NI elemsize0, NI newlen0);
N_NIMCALL(Tnode292802*, newnodei_294197_850551059)(Tnodekind292020 kind0, Tlineinfo191336 info0);
N_NIMCALL(void, unneststmts_318936_2616423590)(Tnode292802* n0, Tnode292802* result0);
static N_INLINE(NI, len_293081_850551059)(Tnode292802* n0);
N_NIMCALL(void, add_293136_850551059)(Tnode292802* father0, Tnode292802* son0);
N_NIMCALL(Tnode292802*, newnodei_294401_850551059)(Tnodekind292020 kind0, Tlineinfo191336 info0, NI children0);
N_NIMCALL(NIM_BOOL, isdeepconstexpr_318566_2616423590)(Tnode292802* n0);
N_NIMCALL(Ttype292840*, skiptypes_296099_850551059)(Ttype292840* t0, Ttypekind292244Set kinds0);
N_NIMCALL(NIM_BOOL, iscaseobj_318536_2616423590)(Tnode292802* n0);
static N_INLINE(NI, safelen_293103_850551059)(Tnode292802* n0);
static N_INLINE(Tnode292802*, HEX5BHEX5D_293238_850551059)(Tnode292802* n0, NI i0);
N_NIMCALL(Tspecialword275003, whichkeyword_275365_1391470768)(Tident199010* id0);
extern TNimType NTI292796; /* TNodeSeq */
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

N_NIMCALL(NIM_BOOL, exprstructuralequivalent_318311_2616423590)(Tnode292802* a0, Tnode292802* b0, NIM_BOOL strictsymequality0) {
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
		case ((Tnodekind292020) 3):
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
		case ((Tnodekind292020) 2):
		{
			result0 = ((*(*a0).kindU.S5.ident).Sup.id == (*(*b0).kindU.S5.ident).Sup.id);
		}
		break;
		case ((Tnodekind292020) 5) ... ((Tnodekind292020) 10):
		{
			result0 = ((*a0).kindU.S1.intval == (*b0).kindU.S1.intval);
		}
		break;
		case ((Tnodekind292020) 16) ... ((Tnodekind292020) 18):
		{
			result0 = ((*a0).kindU.S2.floatval == (*b0).kindU.S2.floatval);
		}
		break;
		case ((Tnodekind292020) 20) ... ((Tnodekind292020) 22):
		{
			result0 = eqStrings((*a0).kindU.S3.strval, (*b0).kindU.S3.strval);
		}
		break;
		case ((Tnodekind292020) 1):
		case ((Tnodekind292020) 23):
		case ((Tnodekind292020) 4):
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
				LOC26 = sonslen_295351_850551059(a0);
				LOC27 = (NI)0;
				LOC27 = sonslen_295351_850551059(b0);
				if (!(LOC26 == LOC27)) goto LA28;
				{
					NI i_318397_2616423590;
					NI HEX3Atmp_318401_2616423590;
					NI LOC31;
					NI res_318404_2616423590;
					i_318397_2616423590 = (NI)0;
					HEX3Atmp_318401_2616423590 = (NI)0;
					LOC31 = (NI)0;
					LOC31 = sonslen_295351_850551059(a0);
					HEX3Atmp_318401_2616423590 = (NI)(LOC31 - ((NI) 1));
					res_318404_2616423590 = ((NI) 0);
					{
						while (1) {
							if (!(res_318404_2616423590 <= HEX3Atmp_318401_2616423590)) goto LA33;
							i_318397_2616423590 = res_318404_2616423590;
							{
								NIM_BOOL LOC36;
								LOC36 = (NIM_BOOL)0;
								LOC36 = exprstructuralequivalent_318311_2616423590((*a0).kindU.S6.sons->data[i_318397_2616423590], (*b0).kindU.S6.sons->data[i_318397_2616423590], strictsymequality0);
								if (!!(LOC36)) goto LA37;
								goto BeforeRet;
							}
							LA37: ;
							res_318404_2616423590 += ((NI) 1);
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

N_NIMCALL(Tmagic292524, getmagic_318502_2616423590)(Tnode292802* op0) {
	Tmagic292524 result0;
	result0 = (Tmagic292524)0;
	switch ((*op0).kind) {
	case ((Tnodekind292020) 27):
	case ((Tnodekind292020) 29):
	case ((Tnodekind292020) 30):
	case ((Tnodekind292020) 31):
	case ((Tnodekind292020) 26):
	case ((Tnodekind292020) 28):
	case ((Tnodekind292020) 32):
	{
		switch ((*(*op0).kindU.S6.sons->data[((NI) 0)]).kind) {
		case ((Tnodekind292020) 3):
		{
			result0 = (*(*(*op0).kindU.S6.sons->data[((NI) 0)]).kindU.S4.sym).magic;
		}
		break;
		default:
		{
			result0 = ((Tmagic292524) 0);
		}
		break;
		}
	}
	break;
	default:
	{
		result0 = ((Tmagic292524) 0);
	}
	break;
	}
	return result0;
}

static N_INLINE(Cell47304*, usrtocell_51440_1689653243)(void* usr0) {
	Cell47304* result0;
	result0 = (Cell47304*)0;
	result0 = ((Cell47304*) ((NI)((NU32)(((NI) (usr0))) - (NU32)(((NI)sizeof(Cell47304))))));
	return result0;
}

static N_INLINE(void, rtladdzct_52601_1689653243)(Cell47304* c0) {
	addzct_51417_1689653243((&gch_49858_1689653243.zct), c0);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0) {
	{
		Cell47304* c0;
		if (!!((src0 == NIM_NIL))) goto LA3;
		c0 = usrtocell_51440_1689653243(src0);
		(*c0).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Cell47304* c0;
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

static N_INLINE(Tnode292802*, pop_318246_1689653243)(Tnodeseq292796** s0) {
	Tnode292802* result0;
	NI L0;
	result0 = (Tnode292802*)0;
	L0 = (NI)(((*s0) ? (*s0)->Sup.len : 0) - ((NI) 1));
	result0 = (*s0)->data[L0];
	(*s0) = (Tnodeseq292796*) setLengthSeq(&((*s0))->Sup, sizeof(Tnode292802*), ((NI) (L0)));
	return result0;
}

N_NIMCALL(NIM_BOOL, cyclictreeaux_318004_2616423590)(Tnode292802* n0, Tnodeseq292796** visited0) {
	NIM_BOOL result0;
{	result0 = (NIM_BOOL)0;
	{
		if (!(n0 == NIM_NIL)) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	{
		Tnode292802* v_318202_2616423590;
		Tnodeseq292796* HEX3Atmp_318274_2616423590;
		NI i_318277_2616423590;
		NI L_318279_2616423590;
		v_318202_2616423590 = (Tnode292802*)0;
		HEX3Atmp_318274_2616423590 = (Tnodeseq292796*)0;
		HEX3Atmp_318274_2616423590 = (*visited0);
		i_318277_2616423590 = ((NI) 0);
		L_318279_2616423590 = (HEX3Atmp_318274_2616423590 ? HEX3Atmp_318274_2616423590->Sup.len : 0);
		{
			while (1) {
				if (!(i_318277_2616423590 < L_318279_2616423590)) goto LA7;
				v_318202_2616423590 = HEX3Atmp_318274_2616423590->data[i_318277_2616423590];
				{
					if (!(v_318202_2616423590 == n0)) goto LA10;
					result0 = NIM_TRUE;
					goto BeforeRet;
				}
				LA10: ;
				i_318277_2616423590 += ((NI) 1);
			} LA7: ;
		}
	}
	{
		Tnode292802* LOC24;
		if (!!(((*n0).kind >= ((Tnodekind292020) 1) && (*n0).kind <= ((Tnodekind292020) 23)))) goto LA14;
		(*visited0) = (Tnodeseq292796*) incrSeqV2(&((*visited0))->Sup, sizeof(Tnode292802*));
		asgnRefNoCycle((void**) (&(*visited0)->data[(*visited0)->Sup.len]), n0);
		++(*visited0)->Sup.len;
		{
			Tnode292802* nson_318244_2616423590;
			Tnodeseq292796* HEX3Atmp_318281_2616423590;
			NI i_318284_2616423590;
			NI L_318286_2616423590;
			nson_318244_2616423590 = (Tnode292802*)0;
			HEX3Atmp_318281_2616423590 = (Tnodeseq292796*)0;
			HEX3Atmp_318281_2616423590 = (*n0).kindU.S6.sons;
			i_318284_2616423590 = ((NI) 0);
			L_318286_2616423590 = (HEX3Atmp_318281_2616423590 ? HEX3Atmp_318281_2616423590->Sup.len : 0);
			{
				while (1) {
					if (!(i_318284_2616423590 < L_318286_2616423590)) goto LA18;
					nson_318244_2616423590 = HEX3Atmp_318281_2616423590->data[i_318284_2616423590];
					{
						NIM_BOOL LOC21;
						LOC21 = (NIM_BOOL)0;
						LOC21 = cyclictreeaux_318004_2616423590(nson_318244_2616423590, visited0);
						if (!LOC21) goto LA22;
						result0 = NIM_TRUE;
						goto BeforeRet;
					}
					LA22: ;
					i_318284_2616423590 += ((NI) 1);
				} LA18: ;
			}
		}
		LOC24 = (Tnode292802*)0;
		LOC24 = pop_318246_1689653243(visited0);
	}
	LA14: ;
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(NIM_BOOL, cyclictree_318287_2616423590)(Tnode292802* n0) {
	NIM_BOOL result0;
	Tnodeseq292796* visited0;
	result0 = (NIM_BOOL)0;
	visited0 = (Tnodeseq292796*) newSeq((&NTI292796), 0);
	result0 = cyclictreeaux_318004_2616423590(n0, (&visited0));
	return result0;
}

static N_INLINE(NI, len_293081_850551059)(Tnode292802* n0) {
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

N_NIMCALL(void, unneststmts_318936_2616423590)(Tnode292802* n0, Tnode292802* result0) {
	{
		if (!((*n0).kind == ((Tnodekind292020) 115))) goto LA3;
		{
			Tnode292802* x_318949_2616423590;
			x_318949_2616423590 = (Tnode292802*)0;
			{
				NI i_318966_2616423590;
				NI HEX3Atmp_318968_2616423590;
				NI LOC7;
				NI res_318970_2616423590;
				i_318966_2616423590 = (NI)0;
				HEX3Atmp_318968_2616423590 = (NI)0;
				LOC7 = (NI)0;
				LOC7 = len_293081_850551059(n0);
				HEX3Atmp_318968_2616423590 = (LOC7 - 1);
				res_318970_2616423590 = ((NI) 0);
				{
					while (1) {
						if (!(res_318970_2616423590 <= HEX3Atmp_318968_2616423590)) goto LA9;
						i_318966_2616423590 = res_318970_2616423590;
						x_318949_2616423590 = (*n0).kindU.S6.sons->data[i_318966_2616423590];
						unneststmts_318936_2616423590(x_318949_2616423590, result0);
						res_318970_2616423590 += ((NI) 1);
					} LA9: ;
				}
			}
		}
	}
	goto LA1;
	LA3: ;
	{
		if (!!(((*n0).kind == ((Tnodekind292020) 125) || (*n0).kind == ((Tnodekind292020) 23)))) goto LA11;
		add_293136_850551059(result0, n0);
	}
	goto LA1;
	LA11: ;
	LA1: ;
}

N_NIMCALL(Tnode292802*, flattenstmts_318973_2616423590)(Tnode292802* n0) {
	Tnode292802* result0;
	result0 = (Tnode292802*)0;
	result0 = newnodei_294197_850551059(((Tnodekind292020) 115), (*n0).info);
	unneststmts_318936_2616423590(n0, result0);
	{
		NI LOC3;
		LOC3 = (NI)0;
		LOC3 = len_293081_850551059(result0);
		if (!(LOC3 == ((NI) 1))) goto LA4;
		result0 = (*result0).kindU.S6.sons->data[((NI) 0)];
	}
	LA4: ;
	return result0;
}

N_NIMCALL(Tnode292802*, extractrange_318979_2616423590)(Tnodekind292020 k0, Tnode292802* n0, NI a0, NI b0) {
	Tnode292802* result0;
	result0 = (Tnode292802*)0;
	result0 = newnodei_294401_850551059(k0, (*n0).info, (NI)((NI)(b0 - a0) + ((NI) 1)));
	{
		NI i_318995_2616423590;
		NI HEX3Atmp_318999_2616423590;
		NI res_319002_2616423590;
		i_318995_2616423590 = (NI)0;
		HEX3Atmp_318999_2616423590 = (NI)0;
		HEX3Atmp_318999_2616423590 = (NI)(b0 - a0);
		res_319002_2616423590 = ((NI) 0);
		{
			while (1) {
				if (!(res_319002_2616423590 <= HEX3Atmp_318999_2616423590)) goto LA3;
				i_318995_2616423590 = res_319002_2616423590;
				asgnRefNoCycle((void**) (&(*result0).kindU.S6.sons->data[i_318995_2616423590]), (*n0).kindU.S6.sons->data[(NI)(i_318995_2616423590 + a0)]);
				res_319002_2616423590 += ((NI) 1);
			} LA3: ;
		}
	}
	return result0;
}

static N_INLINE(NI, safelen_293103_850551059)(Tnode292802* n0) {
	NI result0;
	result0 = (NI)0;
	{
		NIM_BOOL LOC3;
		LOC3 = (NIM_BOOL)0;
		LOC3 = ((*n0).kind >= ((Tnodekind292020) 0) && (*n0).kind <= ((Tnodekind292020) 23));
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

static N_INLINE(Tnode292802*, HEX5BHEX5D_293238_850551059)(Tnode292802* n0, NI i0) {
	Tnode292802* result0;
	result0 = (Tnode292802*)0;
	result0 = (*n0).kindU.S6.sons->data[i0];
	return result0;
}

N_NIMCALL(NIM_BOOL, iscaseobj_318536_2616423590)(Tnode292802* n0) {
	NIM_BOOL result0;
{	result0 = (NIM_BOOL)0;
	{
		if (!((*n0).kind == ((Tnodekind292020) 139))) goto LA3;
		result0 = NIM_TRUE;
		goto BeforeRet;
	}
	LA3: ;
	{
		NI i_318558_2616423590;
		NI HEX3Atmp_318561_2616423590;
		NI i_318564_2616423590;
		i_318558_2616423590 = (NI)0;
		HEX3Atmp_318561_2616423590 = (NI)0;
		HEX3Atmp_318561_2616423590 = safelen_293103_850551059(n0);
		i_318564_2616423590 = ((NI) 0);
		{
			while (1) {
				if (!(i_318564_2616423590 < HEX3Atmp_318561_2616423590)) goto LA7;
				i_318558_2616423590 = i_318564_2616423590;
				{
					Tnode292802* LOC10;
					NIM_BOOL LOC11;
					LOC10 = (Tnode292802*)0;
					LOC10 = HEX5BHEX5D_293238_850551059(n0, i_318558_2616423590);
					LOC11 = (NIM_BOOL)0;
					LOC11 = iscaseobj_318536_2616423590(LOC10);
					if (!LOC11) goto LA12;
					result0 = NIM_TRUE;
					goto BeforeRet;
				}
				LA12: ;
				i_318564_2616423590 += ((NI) 1);
			} LA7: ;
		}
	}
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(NIM_BOOL, isdeepconstexpr_318566_2616423590)(Tnode292802* n0) {
	NIM_BOOL result0;
{	result0 = (NIM_BOOL)0;
	switch ((*n0).kind) {
	case ((Tnodekind292020) 5) ... ((Tnodekind292020) 10):
	case ((Tnodekind292020) 20) ... ((Tnodekind292020) 22):
	case ((Tnodekind292020) 16) ... ((Tnodekind292020) 18):
	case ((Tnodekind292020) 23):
	{
		result0 = NIM_TRUE;
	}
	break;
	case ((Tnodekind292020) 33):
	case ((Tnodekind292020) 34):
	case ((Tnodekind292020) 58):
	case ((Tnodekind292020) 59):
	{
		result0 = isdeepconstexpr_318566_2616423590((*n0).kindU.S6.sons->data[((NI) 1)]);
	}
	break;
	case ((Tnodekind292020) 39):
	case ((Tnodekind292020) 41):
	case ((Tnodekind292020) 37):
	case ((Tnodekind292020) 38):
	case ((Tnodekind292020) 155):
	{
		{
			NI i_318815_2616423590;
			NI HEX3Atmp_318848_2616423590;
			NI HEX3Atmp_318849_2616423590;
			NI LOC5;
			NI res_318852_2616423590;
			i_318815_2616423590 = (NI)0;
			HEX3Atmp_318848_2616423590 = (NI)0;
			HEX3Atmp_318849_2616423590 = (NI)0;
			HEX3Atmp_318848_2616423590 = ((*n0).kind == ((Tnodekind292020) 38));
			LOC5 = (NI)0;
			LOC5 = len_293081_850551059(n0);
			HEX3Atmp_318849_2616423590 = (LOC5 - 1);
			res_318852_2616423590 = ((NI) (HEX3Atmp_318848_2616423590));
			{
				while (1) {
					if (!(res_318852_2616423590 <= HEX3Atmp_318849_2616423590)) goto LA7;
					i_318815_2616423590 = res_318852_2616423590;
					{
						NIM_BOOL LOC10;
						LOC10 = (NIM_BOOL)0;
						LOC10 = isdeepconstexpr_318566_2616423590((*n0).kindU.S6.sons->data[i_318815_2616423590]);
						if (!!(LOC10)) goto LA11;
						result0 = NIM_FALSE;
						goto BeforeRet;
					}
					LA11: ;
					res_318852_2616423590 += ((NI) 1);
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
			Ttype292840* t0;
			t0 = skiptypes_296099_850551059((*n0).typ, 10240);
			{
				if (!((*t0).kind == ((Ttypekind292244) 22) || (*t0).kind == ((Ttypekind292244) 21))) goto LA20;
				result0 = NIM_FALSE;
				goto BeforeRet;
			}
			LA20: ;
			{
				NIM_BOOL LOC24;
				NIM_BOOL LOC26;
				LOC24 = (NIM_BOOL)0;
				LOC24 = !(((*t0).kind == ((Ttypekind292244) 17)));
				if (LOC24) goto LA25;
				LOC26 = (NIM_BOOL)0;
				LOC26 = iscaseobj_318536_2616423590((*t0).n);
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

N_NIMCALL(NIM_BOOL, isconstexpr_318510_2616423590)(Tnode292802* n0) {
	NIM_BOOL result0;
	NIM_BOOL LOC1;
	result0 = (NIM_BOOL)0;
	LOC1 = (NIM_BOOL)0;
	LOC1 = ((*n0).kind >= ((Tnodekind292020) 5) && (*n0).kind <= ((Tnodekind292020) 23));
	if (LOC1) goto LA2;
	LOC1 = (((*n0).flags &(1U<<((NU)(((Tnodeflag292427) 4))&15U)))!=0);
	LA2: ;
	result0 = LOC1;
	return result0;
}

N_NIMCALL(Tspecialword275003, whichpragma_318911_2616423590)(Tnode292802* n0) {
	Tspecialword275003 result0;
	Tnode292802* key0;
	result0 = (Tspecialword275003)0;
	{
		if (!((*n0).kind == ((Tnodekind292020) 34))) goto LA3;
		key0 = (*n0).kindU.S6.sons->data[((NI) 0)];
	}
	goto LA1;
	LA3: ;
	{
		key0 = n0;
	}
	LA1: ;
	{
		if (!((*key0).kind == ((Tnodekind292020) 2))) goto LA8;
		result0 = whichkeyword_275365_1391470768((*key0).kindU.S5.ident);
	}
	LA8: ;
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, compiler_treesInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_treesDatInit000)(void) {
}

