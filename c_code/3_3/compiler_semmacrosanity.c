/* Generated by Nim Compiler v0.14.3 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
typedef struct Tnode293802 Tnode293802;
typedef struct Ttype293840 Ttype293840;
typedef struct Tlineinfo192336 Tlineinfo192336;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tsym293834 Tsym293834;
typedef struct Tident200010 Tident200010;
typedef struct Tnodeseq293796 Tnodeseq293796;
typedef struct Cell47304 Cell47304;
typedef struct TNimType TNimType;
typedef struct Cellseq47320 Cellseq47320;
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
typedef struct Cellset47316 Cellset47316;
typedef struct Pagedesc47312 Pagedesc47312;
typedef struct Tidobj200004 Tidobj200004;
typedef struct TNimObject TNimObject;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq293836 Ttypeseq293836;
typedef struct TY293960 TY293960;
typedef struct Tloc293816 Tloc293816;
typedef struct Ropeobj179006 Ropeobj179006;
typedef struct TY204018 TY204018;
typedef struct TY293929 TY293929;
typedef struct Tstrtable293806 Tstrtable293806;
typedef struct Tsymseq293804 Tsymseq293804;
typedef struct Tlib293820 Tlib293820;
typedef struct Basechunk29438 Basechunk29438;
typedef struct Freecell29430 Freecell29430;
typedef struct TY293961 TY293961;
typedef struct Tinstantiation293824 Tinstantiation293824;
typedef struct Tlistentry147007 Tlistentry147007;
typedef NU64 Ttypekind293244Set;
struct  Tlineinfo192336  {
NI16 line;
NI16 col;
NI32 fileindex;
};
typedef NU16 Tnodeflag293427Set;
typedef NU8 Tnodekind293020;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tnode293802  {
Ttype293840* typ;
Tlineinfo192336 info;
Tnodeflag293427Set flags;
Tnodekind293020 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym293834* sym;
} S4;
struct {Tident200010* ident;
} S5;
struct {Tnodeseq293796* sons;
} S6;
} kindU;
NimStringDesc* comment;
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
Memregion29486 region;
Gcstat49814 stat;
Cellset47316 marked;
Cellseq47320 additionalroots;
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
struct  Tidobj200004  {
  TNimObject Sup;
NI id;
};
typedef NU8 Ttypekind293244;
typedef NU8 Tcallingconvention293002;
typedef NU32 Ttypeflag293431Set;
typedef NU8 Tlockind293808;
typedef NU8 Tstorageloc293812;
typedef NU16 Tlocflag293810Set;
struct  Tloc293816  {
Tlockind293808 k;
Tstorageloc293812 s;
Tlocflag293810Set flags;
Ttype293840* t;
Ropeobj179006* r;
};
struct  Ttype293840  {
  Tidobj200004 Sup;
Ttypekind293244 kind;
Tcallingconvention293002 callconv;
Ttypeflag293431Set flags;
Ttypeseq293836* sons;
Tnode293802* n;
Tsym293834* owner;
Tsym293834* sym;
Tsym293834* destructor;
Tsym293834* deepcopy;
Tsym293834* assignment;
TY293960* methods;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc293816 loc;
};
struct TY204018 {
NimStringDesc* Field0;
NI Field1;
};
typedef NU8 Tsymkind293435;
struct  Tstrtable293806  {
NI counter;
Tsymseq293804* data;
};
typedef NU16 Tmagic293524;
typedef NU32 Tsymflag293184Set;
typedef NU32 Toption170009Set;
struct  Tsym293834  {
  Tidobj200004 Sup;
Tsymkind293435 kind;
union{
struct {Ttypeseq293836* typeinstcache;
} S1;
struct {TY293929* procinstcache;
Tsym293834* gcunsafetyreason;
} S2;
struct {TY293929* usedgenerics;
Tstrtable293806 tab;
} S3;
struct {Tsym293834* guard;
NI bitsize;
} S4;
} kindU;
Tmagic293524 magic;
Ttype293840* typ;
Tident200010* name;
Tlineinfo192336 info;
Tsym293834* owner;
Tsymflag293184Set flags;
Tnode293802* ast;
Toption170009Set options;
NI position;
NI offset;
Tloc293816 loc;
Tlib293820* annex;
Tnode293802* constraint;
};
struct  Tident200010  {
  Tidobj200004 Sup;
NimStringDesc* s;
Tident200010* next;
NI h;
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
struct  Pagedesc47312  {
Pagedesc47312* next;
NI key;
TY29419 bits;
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
struct TY293961 {
NI Field0;
Tsym293834* Field1;
};
struct  Ropeobj179006  {
  TNimObject Sup;
Ropeobj179006* left;
Ropeobj179006* right;
NI length;
NimStringDesc* data;
};
struct  Tlistentry147007  {
  TNimObject Sup;
Tlistentry147007* prev;
Tlistentry147007* next;
};
typedef NU8 Tlibkind293818;
struct  Tlib293820  {
  Tlistentry147007 Sup;
Tlibkind293818 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj179006* name;
Tnode293802* path;
};
struct  Freecell29430  {
Freecell29430* next;
NI zerofield;
};
struct  Tinstantiation293824  {
Tsym293834* sym;
Ttypeseq293836* concretetypes;
NI compilesid;
};
struct Tnodeseq293796 {
  TGenericSeq Sup;
  Tnode293802* data[SEQ_DECL_SIZE];
};
struct Ttypeseq293836 {
  TGenericSeq Sup;
  Ttype293840* data[SEQ_DECL_SIZE];
};
struct TY293960 {
  TGenericSeq Sup;
  TY293961 data[SEQ_DECL_SIZE];
};
struct TY293929 {
  TGenericSeq Sup;
  Tinstantiation293824* data[SEQ_DECL_SIZE];
};
struct Tsymseq293804 {
  TGenericSeq Sup;
  Tsym293834* data[SEQ_DECL_SIZE];
};
N_NIMCALL(Ttype293840*, skiptypes_297099_850551059)(Ttype293840* t0, Ttypekind293244Set kinds0);
static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0);
static N_INLINE(Cell47304*, usrtocell_51440_1689653243)(void* usr0);
static N_INLINE(void, rtladdzct_52601_1689653243)(Cell47304* c0);
N_NOINLINE(void, addzct_51417_1689653243)(Cellseq47320* s0, Cell47304* c0);
static N_INLINE(NI, len_294081_850551059)(Tnode293802* n0);
N_NIMCALL(Tsym293834*, ithfield_477002_658252590)(Tnode293802* n0, NI* field0);
N_NIMCALL(NI, sonslen_296351_850551059)(Tnode293802* n0);
N_NIMCALL(void, internalerror_197100_155036129)(Tlineinfo192336 info0, NimStringDesc* errmsg0);
N_NIMCALL(Tnode293802*, lastson_296364_850551059)(Tnode293802* n0);
N_NIMCALL(void, globalerror_197076_155036129)(Tlineinfo192336 info0, NimStringDesc* arg0);
static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0);
static N_INLINE(void, copymem_7485_1689653243)(void* dest0, void* source0, NI size0);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space0);
N_NIMCALL(void, internalerror_197113_155036129)(NimStringDesc* errmsg0);
N_NIMCALL(NimStringDesc*, HEX24_197185_1689653243)(TY204018 x0);
N_NIMCALL(void, annotatetype_477108_658252590)(Tnode293802* n0, Ttype293840* t0);
N_NIMCALL(NI, len_296339_850551059)(Ttype293840* n0);
N_NIMCALL(Ttype293840*, elemtype_321394_3876443242)(Ttype293840* t0);
STRING_LITERAL(T658252590_2, "ithField", 8);
STRING_LITERAL(T658252590_3, "ithField(record case branch)", 28);
STRING_LITERAL(T658252590_4, "invalid field at index ", 23);
STRING_LITERAL(T658252590_6, "compiler/semmacrosanity.nim", 27);
NIM_CONST TY204018 T658252590_5 = {((NimStringDesc*) &T658252590_6),
((NI) 51)}
;
STRING_LITERAL(T658252590_7, "() must have a tuple type", 25);
STRING_LITERAL(T658252590_8, "[] must have some form of array type", 36);
STRING_LITERAL(T658252590_9, "{} must have the set type", 25);
STRING_LITERAL(T658252590_10, "float literal must have some float type", 39);
STRING_LITERAL(T658252590_11, "integer literal must have some int type", 39);
STRING_LITERAL(T658252590_12, "string literal must be of some string type", 42);
STRING_LITERAL(T658252590_13, "nil literal must be of some pointer type", 40);
extern Gcheap49818 gch_49858_1689653243;

static N_INLINE(Cell47304*, usrtocell_51440_1689653243)(void* usr0) {
	Cell47304* result0;
	result0 = (Cell47304*)0;
	result0 = ((Cell47304*) ((NI)((NU64)(((NI) (usr0))) - (NU64)(((NI)sizeof(Cell47304))))));
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
			if (!((NU64)((*c0).refcount) < (NU64)(((NI) 8)))) goto LA11;
			rtladdzct_52601_1689653243(c0);
		}
		LA11: ;
	}
	LA7: ;
	(*dest0) = src0;
}

static N_INLINE(NI, len_294081_850551059)(Tnode293802* n0) {
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

N_NIMCALL(Tsym293834*, ithfield_477002_658252590)(Tnode293802* n0, NI* field0) {
	Tsym293834* result0;
{	result0 = (Tsym293834*)0;
	result0 = NIM_NIL;
	switch ((*n0).kind) {
	case ((Tnodekind293020) 138):
	{
		{
			NI i_477019_658252590;
			NI HEX3Atmp_477093_658252590;
			NI LOC3;
			NI res_477096_658252590;
			i_477019_658252590 = (NI)0;
			HEX3Atmp_477093_658252590 = (NI)0;
			LOC3 = (NI)0;
			LOC3 = sonslen_296351_850551059(n0);
			HEX3Atmp_477093_658252590 = (NI)(LOC3 - ((NI) 1));
			res_477096_658252590 = ((NI) 0);
			{
				while (1) {
					if (!(res_477096_658252590 <= HEX3Atmp_477093_658252590)) goto LA5;
					i_477019_658252590 = res_477096_658252590;
					result0 = ithfield_477002_658252590((*n0).kindU.S6.sons->data[i_477019_658252590], field0);
					{
						if (!!((result0 == NIM_NIL))) goto LA8;
						goto BeforeRet;
					}
					LA8: ;
					res_477096_658252590 += ((NI) 1);
				} LA5: ;
			}
		}
	}
	break;
	case ((Tnodekind293020) 139):
	{
		{
			if (!!(((*(*n0).kindU.S6.sons->data[((NI) 0)]).kind == ((Tnodekind293020) 3)))) goto LA13;
			internalerror_197100_155036129((*n0).info, ((NimStringDesc*) &T658252590_2));
		}
		LA13: ;
		result0 = ithfield_477002_658252590((*n0).kindU.S6.sons->data[((NI) 0)], field0);
		{
			if (!!((result0 == NIM_NIL))) goto LA17;
			goto BeforeRet;
		}
		LA17: ;
		{
			NI i_477067_658252590;
			NI HEX3Atmp_477101_658252590;
			NI LOC20;
			NI res_477104_658252590;
			i_477067_658252590 = (NI)0;
			HEX3Atmp_477101_658252590 = (NI)0;
			LOC20 = (NI)0;
			LOC20 = sonslen_296351_850551059(n0);
			HEX3Atmp_477101_658252590 = (NI)(LOC20 - ((NI) 1));
			res_477104_658252590 = ((NI) 1);
			{
				while (1) {
					if (!(res_477104_658252590 <= HEX3Atmp_477101_658252590)) goto LA22;
					i_477067_658252590 = res_477104_658252590;
					switch ((*(*n0).kindU.S6.sons->data[i_477067_658252590]).kind) {
					case ((Tnodekind293020) 85):
					case ((Tnodekind293020) 88):
					{
						Tnode293802* LOC24;
						LOC24 = (Tnode293802*)0;
						LOC24 = lastson_296364_850551059((*n0).kindU.S6.sons->data[i_477067_658252590]);
						result0 = ithfield_477002_658252590(LOC24, field0);
						{
							if (!!((result0 == NIM_NIL))) goto LA27;
							goto BeforeRet;
						}
						LA27: ;
					}
					break;
					default:
					{
						internalerror_197100_155036129((*n0).info, ((NimStringDesc*) &T658252590_3));
					}
					break;
					}
					res_477104_658252590 += ((NI) 1);
				} LA22: ;
			}
		}
	}
	break;
	case ((Tnodekind293020) 3):
	{
		{
			if (!((*field0) == ((NI) 0))) goto LA33;
			result0 = (*n0).kindU.S4.sym;
		}
		goto LA31;
		LA33: ;
		{
			(*field0) -= ((NI) 1);
		}
		LA31: ;
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

static N_INLINE(void, copymem_7485_1689653243)(void* dest0, void* source0, NI size0) {
	void* LOC1;
	LOC1 = (void*)0;
	LOC1 = memcpy(dest0, source0, ((size_t) (size0)));
}

static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0) {
	copymem_7485_1689653243(((void*) ((&(*dest0).data[((*dest0).Sup.len)- 0]))), ((void*) ((*src0).data)), ((NI) ((NI)((*src0).Sup.len + ((NI) 1)))));
	(*dest0).Sup.len += (*src0).Sup.len;
}

N_NIMCALL(void, annotatetype_477108_658252590)(Tnode293802* n0, Ttype293840* t0) {
	Ttype293840* x_477125_658252590;
	x_477125_658252590 = skiptypes_297099_850551059(t0, IL64(211106233624832));
	switch ((*n0).kind) {
	case ((Tnodekind293020) 38):
	{
		Ttype293840* x0;
		x0 = skiptypes_297099_850551059(t0, IL64(211106247256320));
		asgnRefNoCycle((void**) (&(*n0).typ), t0);
		{
			NI i_477145_658252590;
			NI HEX3Atmp_477294_658252590;
			NI LOC3;
			NI res_477297_658252590;
			i_477145_658252590 = (NI)0;
			HEX3Atmp_477294_658252590 = (NI)0;
			LOC3 = (NI)0;
			LOC3 = len_294081_850551059(n0);
			HEX3Atmp_477294_658252590 = (LOC3 - 1);
			res_477297_658252590 = ((NI) 1);
			{
				while (1) {
					NI j0;
					Tsym293834* field0;
					if (!(res_477297_658252590 <= HEX3Atmp_477294_658252590)) goto LA5;
					i_477145_658252590 = res_477297_658252590;
					j0 = (NI)(i_477145_658252590 - ((NI) 1));
					field0 = ithfield_477002_658252590((*x0).n, (&j0));
					{
						NimStringDesc* LOC10;
						NimStringDesc* LOC11;
						if (!field0 == 0) goto LA8;
						LOC10 = (NimStringDesc*)0;
						LOC11 = (NimStringDesc*)0;
						LOC11 = nimIntToStr(i_477145_658252590);
						LOC10 = rawNewString(LOC11->Sup.len + 23);
appendString(LOC10, ((NimStringDesc*) &T658252590_4));
appendString(LOC10, LOC11);
						globalerror_197076_155036129((*n0).info, LOC10);
					}
					goto LA6;
					LA8: ;
					{
						{
							NimStringDesc* LOC17;
							if (!!(((*(*n0).kindU.S6.sons->data[i_477145_658252590]).kind == ((Tnodekind293020) 34)))) goto LA15;
							LOC17 = (NimStringDesc*)0;
							LOC17 = HEX24_197185_1689653243(T658252590_5);
							internalerror_197113_155036129(LOC17);
						}
						LA15: ;
						annotatetype_477108_658252590((*(*n0).kindU.S6.sons->data[i_477145_658252590]).kindU.S6.sons->data[((NI) 1)], (*field0).typ);
					}
					LA6: ;
					res_477297_658252590 += ((NI) 1);
				} LA5: ;
			}
		}
	}
	break;
	case ((Tnodekind293020) 37):
	{
		{
			if (!((*x_477125_658252590).kind == ((Ttypekind293244) 18))) goto LA21;
			asgnRefNoCycle((void**) (&(*n0).typ), t0);
			{
				NI i_477206_658252590;
				NI HEX3Atmp_477302_658252590;
				NI LOC24;
				NI res_477305_658252590;
				i_477206_658252590 = (NI)0;
				HEX3Atmp_477302_658252590 = (NI)0;
				LOC24 = (NI)0;
				LOC24 = len_294081_850551059(n0);
				HEX3Atmp_477302_658252590 = (LOC24 - 1);
				res_477305_658252590 = ((NI) 0);
				{
					while (1) {
						if (!(res_477305_658252590 <= HEX3Atmp_477302_658252590)) goto LA26;
						i_477206_658252590 = res_477305_658252590;
						{
							NI LOC29;
							NimStringDesc* LOC32;
							NimStringDesc* LOC33;
							LOC29 = (NI)0;
							LOC29 = len_296339_850551059(x_477125_658252590);
							if (!(LOC29 <= i_477206_658252590)) goto LA30;
							LOC32 = (NimStringDesc*)0;
							LOC33 = (NimStringDesc*)0;
							LOC33 = nimIntToStr(i_477206_658252590);
							LOC32 = rawNewString(LOC33->Sup.len + 23);
appendString(LOC32, ((NimStringDesc*) &T658252590_4));
appendString(LOC32, LOC33);
							globalerror_197076_155036129((*n0).info, LOC32);
						}
						goto LA27;
						LA30: ;
						{
							annotatetype_477108_658252590((*n0).kindU.S6.sons->data[i_477206_658252590], (*x_477125_658252590).sons->data[i_477206_658252590]);
						}
						LA27: ;
						res_477305_658252590 += ((NI) 1);
					} LA26: ;
				}
			}
		}
		goto LA19;
		LA21: ;
		{
			NIM_BOOL LOC36;
			LOC36 = (NIM_BOOL)0;
			LOC36 = ((*x_477125_658252590).kind == ((Ttypekind293244) 25));
			if (!(LOC36)) goto LA37;
			LOC36 = ((*x_477125_658252590).callconv == ((Tcallingconvention293002) 8));
			LA37: ;
			if (!LOC36) goto LA38;
			asgnRefNoCycle((void**) (&(*n0).typ), t0);
		}
		goto LA19;
		LA38: ;
		{
			globalerror_197076_155036129((*n0).info, ((NimStringDesc*) &T658252590_7));
		}
		LA19: ;
	}
	break;
	case ((Tnodekind293020) 41):
	{
		{
			if (!((151060496 &((NU64)1<<((NU)((*x_477125_658252590).kind)&63U)))!=0)) goto LA44;
			asgnRefNoCycle((void**) (&(*n0).typ), t0);
			{
				Tnode293802* m_477237_658252590;
				m_477237_658252590 = (Tnode293802*)0;
				{
					NI i_477313_658252590;
					NI HEX3Atmp_477315_658252590;
					NI LOC48;
					NI res_477317_658252590;
					i_477313_658252590 = (NI)0;
					HEX3Atmp_477315_658252590 = (NI)0;
					LOC48 = (NI)0;
					LOC48 = len_294081_850551059(n0);
					HEX3Atmp_477315_658252590 = (LOC48 - 1);
					res_477317_658252590 = ((NI) 0);
					{
						while (1) {
							Ttype293840* LOC51;
							if (!(res_477317_658252590 <= HEX3Atmp_477315_658252590)) goto LA50;
							i_477313_658252590 = res_477317_658252590;
							m_477237_658252590 = (*n0).kindU.S6.sons->data[i_477313_658252590];
							LOC51 = (Ttype293840*)0;
							LOC51 = elemtype_321394_3876443242(x_477125_658252590);
							annotatetype_477108_658252590(m_477237_658252590, LOC51);
							res_477317_658252590 += ((NI) 1);
						} LA50: ;
					}
				}
			}
		}
		goto LA42;
		LA44: ;
		{
			globalerror_197076_155036129((*n0).info, ((NimStringDesc*) &T658252590_8));
		}
		LA42: ;
	}
	break;
	case ((Tnodekind293020) 39):
	{
		{
			if (!((524288 &((NU64)1<<((NU)((*x_477125_658252590).kind)&63U)))!=0)) goto LA56;
			asgnRefNoCycle((void**) (&(*n0).typ), t0);
			{
				Tnode293802* m_477249_658252590;
				m_477249_658252590 = (Tnode293802*)0;
				{
					NI i_477324_658252590;
					NI HEX3Atmp_477326_658252590;
					NI LOC60;
					NI res_477328_658252590;
					i_477324_658252590 = (NI)0;
					HEX3Atmp_477326_658252590 = (NI)0;
					LOC60 = (NI)0;
					LOC60 = len_294081_850551059(n0);
					HEX3Atmp_477326_658252590 = (LOC60 - 1);
					res_477328_658252590 = ((NI) 0);
					{
						while (1) {
							Ttype293840* LOC63;
							if (!(res_477328_658252590 <= HEX3Atmp_477326_658252590)) goto LA62;
							i_477324_658252590 = res_477328_658252590;
							m_477249_658252590 = (*n0).kindU.S6.sons->data[i_477324_658252590];
							LOC63 = (Ttype293840*)0;
							LOC63 = elemtype_321394_3876443242(x_477125_658252590);
							annotatetype_477108_658252590(m_477249_658252590, LOC63);
							res_477328_658252590 += ((NI) 1);
						} LA62: ;
					}
				}
			}
		}
		goto LA54;
		LA56: ;
		{
			globalerror_197076_155036129((*n0).info, ((NimStringDesc*) &T658252590_9));
		}
		LA54: ;
	}
	break;
	case ((Tnodekind293020) 16) ... ((Tnodekind293020) 19):
	{
		{
			if (!((IL64(1030792151040) &((NU64)1<<((NU)((*x_477125_658252590).kind)&63U)))!=0)) goto LA68;
			asgnRefNoCycle((void**) (&(*n0).typ), t0);
		}
		goto LA66;
		LA68: ;
		{
			globalerror_197076_155036129((*n0).info, ((NimStringDesc*) &T658252590_10));
		}
		LA66: ;
	}
	break;
	case ((Tnodekind293020) 5) ... ((Tnodekind293020) 15):
	{
		{
			if (!((IL64(35182224621574) &((NU64)1<<((NU)((*x_477125_658252590).kind)&63U)))!=0)) goto LA74;
			asgnRefNoCycle((void**) (&(*n0).typ), t0);
		}
		goto LA72;
		LA74: ;
		{
			globalerror_197076_155036129((*n0).info, ((NimStringDesc*) &T658252590_11));
		}
		LA72: ;
	}
	break;
	case ((Tnodekind293020) 20) ... ((Tnodekind293020) 22):
	{
		{
			if (!((805306368 &((NU64)1<<((NU)((*x_477125_658252590).kind)&63U)))!=0)) goto LA80;
			asgnRefNoCycle((void**) (&(*n0).typ), t0);
		}
		goto LA78;
		LA80: ;
		{
			globalerror_197076_155036129((*n0).info, ((NimStringDesc*) &T658252590_12));
		}
		LA78: ;
	}
	break;
	case ((Tnodekind293020) 23):
	{
		{
			if (!((IL64(1125900835880960) &((NU64)1<<((NU)((*x_477125_658252590).kind)&63U)))!=0)) goto LA86;
			asgnRefNoCycle((void**) (&(*n0).typ), t0);
		}
		goto LA84;
		LA86: ;
		{
			globalerror_197076_155036129((*n0).info, ((NimStringDesc*) &T658252590_13));
		}
		LA84: ;
	}
	break;
	default:
	{
	}
	break;
	}
}
NIM_EXTERNC N_NOINLINE(void, compiler_semmacrosanityInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_semmacrosanityDatInit000)(void) {
}

