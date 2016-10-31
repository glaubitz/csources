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
typedef struct Cell47304 Cell47304;
typedef struct TNimType TNimType;
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
typedef struct Tidobj199004 Tidobj199004;
typedef struct TNimObject TNimObject;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq292836 Ttypeseq292836;
typedef struct TY292960 TY292960;
typedef struct Tloc292816 Tloc292816;
typedef struct Ropeobj178006 Ropeobj178006;
typedef struct TY203018 TY203018;
typedef struct TY292929 TY292929;
typedef struct Tstrtable292806 Tstrtable292806;
typedef struct Tsymseq292804 Tsymseq292804;
typedef struct Tlib292820 Tlib292820;
typedef struct Basechunk29437 Basechunk29437;
typedef struct Freecell29429 Freecell29429;
typedef struct TY292961 TY292961;
typedef struct Tinstantiation292824 Tinstantiation292824;
typedef struct Tlistentry147007 Tlistentry147007;
typedef NU64 Ttypekind292244Set;
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
typedef NU8 Ttypekind292244;
typedef NU8 Tcallingconvention292002;
typedef NU32 Ttypeflag292431Set;
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
struct TY203018 {
NimStringDesc* Field0;
NI Field1;
};
typedef NU8 Tsymkind292435;
struct  Tstrtable292806  {
NI counter;
Tsymseq292804* data;
};
typedef NU16 Tmagic292524;
typedef NU32 Tsymflag292184Set;
typedef NU32 Toption169009Set;
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
typedef NU8 Tnimnodekind3405;
struct  TNimNode  {
Tnimnodekind3405 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct TY292961 {
NI Field0;
Tsym292834* Field1;
};
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
struct  Freecell29429  {
Freecell29429* next;
NI zerofield;
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
struct TY292960 {
  TGenericSeq Sup;
  TY292961 data[SEQ_DECL_SIZE];
};
struct TY292929 {
  TGenericSeq Sup;
  Tinstantiation292824* data[SEQ_DECL_SIZE];
};
struct Tsymseq292804 {
  TGenericSeq Sup;
  Tsym292834* data[SEQ_DECL_SIZE];
};
N_NIMCALL(Ttype292840*, skiptypes_296099_850551059)(Ttype292840* t0, Ttypekind292244Set kinds0);
static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0);
static N_INLINE(Cell47304*, usrtocell_51440_1689653243)(void* usr0);
static N_INLINE(void, rtladdzct_52601_1689653243)(Cell47304* c0);
N_NOINLINE(void, addzct_51417_1689653243)(Cellseq47320* s0, Cell47304* c0);
static N_INLINE(NI, len_293081_850551059)(Tnode292802* n0);
N_NIMCALL(Tsym292834*, ithfield_476002_658252590)(Tnode292802* n0, NI* field0);
N_NIMCALL(NI, sonslen_295351_850551059)(Tnode292802* n0);
N_NIMCALL(void, internalerror_196100_155036129)(Tlineinfo191336 info0, NimStringDesc* errmsg0);
N_NIMCALL(Tnode292802*, lastson_295364_850551059)(Tnode292802* n0);
N_NIMCALL(void, globalerror_196076_155036129)(Tlineinfo191336 info0, NimStringDesc* arg0);
static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0);
static N_INLINE(void, copymem_7485_1689653243)(void* dest0, void* source0, NI size0);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space0);
N_NIMCALL(void, internalerror_196113_155036129)(NimStringDesc* errmsg0);
N_NIMCALL(NimStringDesc*, HEX24_196185_1689653243)(TY203018 x0);
N_NIMCALL(void, annotatetype_476108_658252590)(Tnode292802* n0, Ttype292840* t0);
N_NIMCALL(NI, len_295339_850551059)(Ttype292840* n0);
N_NIMCALL(Ttype292840*, elemtype_320394_3876443242)(Ttype292840* t0);
STRING_LITERAL(T658252590_2, "ithField", 8);
STRING_LITERAL(T658252590_3, "ithField(record case branch)", 28);
STRING_LITERAL(T658252590_4, "invalid field at index ", 23);
STRING_LITERAL(T658252590_6, "compiler/semmacrosanity.nim", 27);
NIM_CONST TY203018 T658252590_5 = {((NimStringDesc*) &T658252590_6),
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

N_NIMCALL(Tsym292834*, ithfield_476002_658252590)(Tnode292802* n0, NI* field0) {
	Tsym292834* result0;
{	result0 = (Tsym292834*)0;
	result0 = NIM_NIL;
	switch ((*n0).kind) {
	case ((Tnodekind292020) 138):
	{
		{
			NI i_476019_658252590;
			NI HEX3Atmp_476093_658252590;
			NI LOC3;
			NI res_476096_658252590;
			i_476019_658252590 = (NI)0;
			HEX3Atmp_476093_658252590 = (NI)0;
			LOC3 = (NI)0;
			LOC3 = sonslen_295351_850551059(n0);
			HEX3Atmp_476093_658252590 = (NI)(LOC3 - ((NI) 1));
			res_476096_658252590 = ((NI) 0);
			{
				while (1) {
					if (!(res_476096_658252590 <= HEX3Atmp_476093_658252590)) goto LA5;
					i_476019_658252590 = res_476096_658252590;
					result0 = ithfield_476002_658252590((*n0).kindU.S6.sons->data[i_476019_658252590], field0);
					{
						if (!!((result0 == NIM_NIL))) goto LA8;
						goto BeforeRet;
					}
					LA8: ;
					res_476096_658252590 += ((NI) 1);
				} LA5: ;
			}
		}
	}
	break;
	case ((Tnodekind292020) 139):
	{
		{
			if (!!(((*(*n0).kindU.S6.sons->data[((NI) 0)]).kind == ((Tnodekind292020) 3)))) goto LA13;
			internalerror_196100_155036129((*n0).info, ((NimStringDesc*) &T658252590_2));
		}
		LA13: ;
		result0 = ithfield_476002_658252590((*n0).kindU.S6.sons->data[((NI) 0)], field0);
		{
			if (!!((result0 == NIM_NIL))) goto LA17;
			goto BeforeRet;
		}
		LA17: ;
		{
			NI i_476067_658252590;
			NI HEX3Atmp_476101_658252590;
			NI LOC20;
			NI res_476104_658252590;
			i_476067_658252590 = (NI)0;
			HEX3Atmp_476101_658252590 = (NI)0;
			LOC20 = (NI)0;
			LOC20 = sonslen_295351_850551059(n0);
			HEX3Atmp_476101_658252590 = (NI)(LOC20 - ((NI) 1));
			res_476104_658252590 = ((NI) 1);
			{
				while (1) {
					if (!(res_476104_658252590 <= HEX3Atmp_476101_658252590)) goto LA22;
					i_476067_658252590 = res_476104_658252590;
					switch ((*(*n0).kindU.S6.sons->data[i_476067_658252590]).kind) {
					case ((Tnodekind292020) 85):
					case ((Tnodekind292020) 88):
					{
						Tnode292802* LOC24;
						LOC24 = (Tnode292802*)0;
						LOC24 = lastson_295364_850551059((*n0).kindU.S6.sons->data[i_476067_658252590]);
						result0 = ithfield_476002_658252590(LOC24, field0);
						{
							if (!!((result0 == NIM_NIL))) goto LA27;
							goto BeforeRet;
						}
						LA27: ;
					}
					break;
					default:
					{
						internalerror_196100_155036129((*n0).info, ((NimStringDesc*) &T658252590_3));
					}
					break;
					}
					res_476104_658252590 += ((NI) 1);
				} LA22: ;
			}
		}
	}
	break;
	case ((Tnodekind292020) 3):
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

N_NIMCALL(void, annotatetype_476108_658252590)(Tnode292802* n0, Ttype292840* t0) {
	Ttype292840* x_476125_658252590;
	x_476125_658252590 = skiptypes_296099_850551059(t0, IL64(211106233624832));
	switch ((*n0).kind) {
	case ((Tnodekind292020) 38):
	{
		Ttype292840* x0;
		x0 = skiptypes_296099_850551059(t0, IL64(211106247256320));
		asgnRefNoCycle((void**) (&(*n0).typ), t0);
		{
			NI i_476145_658252590;
			NI HEX3Atmp_476294_658252590;
			NI LOC3;
			NI res_476297_658252590;
			i_476145_658252590 = (NI)0;
			HEX3Atmp_476294_658252590 = (NI)0;
			LOC3 = (NI)0;
			LOC3 = len_293081_850551059(n0);
			HEX3Atmp_476294_658252590 = (LOC3 - 1);
			res_476297_658252590 = ((NI) 1);
			{
				while (1) {
					NI j0;
					Tsym292834* field0;
					if (!(res_476297_658252590 <= HEX3Atmp_476294_658252590)) goto LA5;
					i_476145_658252590 = res_476297_658252590;
					j0 = (NI)(i_476145_658252590 - ((NI) 1));
					field0 = ithfield_476002_658252590((*x0).n, (&j0));
					{
						NimStringDesc* LOC10;
						NimStringDesc* LOC11;
						if (!field0 == 0) goto LA8;
						LOC10 = (NimStringDesc*)0;
						LOC11 = (NimStringDesc*)0;
						LOC11 = nimIntToStr(i_476145_658252590);
						LOC10 = rawNewString(LOC11->Sup.len + 23);
appendString(LOC10, ((NimStringDesc*) &T658252590_4));
appendString(LOC10, LOC11);
						globalerror_196076_155036129((*n0).info, LOC10);
					}
					goto LA6;
					LA8: ;
					{
						{
							NimStringDesc* LOC17;
							if (!!(((*(*n0).kindU.S6.sons->data[i_476145_658252590]).kind == ((Tnodekind292020) 34)))) goto LA15;
							LOC17 = (NimStringDesc*)0;
							LOC17 = HEX24_196185_1689653243(T658252590_5);
							internalerror_196113_155036129(LOC17);
						}
						LA15: ;
						annotatetype_476108_658252590((*(*n0).kindU.S6.sons->data[i_476145_658252590]).kindU.S6.sons->data[((NI) 1)], (*field0).typ);
					}
					LA6: ;
					res_476297_658252590 += ((NI) 1);
				} LA5: ;
			}
		}
	}
	break;
	case ((Tnodekind292020) 37):
	{
		{
			if (!((*x_476125_658252590).kind == ((Ttypekind292244) 18))) goto LA21;
			asgnRefNoCycle((void**) (&(*n0).typ), t0);
			{
				NI i_476206_658252590;
				NI HEX3Atmp_476302_658252590;
				NI LOC24;
				NI res_476305_658252590;
				i_476206_658252590 = (NI)0;
				HEX3Atmp_476302_658252590 = (NI)0;
				LOC24 = (NI)0;
				LOC24 = len_293081_850551059(n0);
				HEX3Atmp_476302_658252590 = (LOC24 - 1);
				res_476305_658252590 = ((NI) 0);
				{
					while (1) {
						if (!(res_476305_658252590 <= HEX3Atmp_476302_658252590)) goto LA26;
						i_476206_658252590 = res_476305_658252590;
						{
							NI LOC29;
							NimStringDesc* LOC32;
							NimStringDesc* LOC33;
							LOC29 = (NI)0;
							LOC29 = len_295339_850551059(x_476125_658252590);
							if (!(LOC29 <= i_476206_658252590)) goto LA30;
							LOC32 = (NimStringDesc*)0;
							LOC33 = (NimStringDesc*)0;
							LOC33 = nimIntToStr(i_476206_658252590);
							LOC32 = rawNewString(LOC33->Sup.len + 23);
appendString(LOC32, ((NimStringDesc*) &T658252590_4));
appendString(LOC32, LOC33);
							globalerror_196076_155036129((*n0).info, LOC32);
						}
						goto LA27;
						LA30: ;
						{
							annotatetype_476108_658252590((*n0).kindU.S6.sons->data[i_476206_658252590], (*x_476125_658252590).sons->data[i_476206_658252590]);
						}
						LA27: ;
						res_476305_658252590 += ((NI) 1);
					} LA26: ;
				}
			}
		}
		goto LA19;
		LA21: ;
		{
			NIM_BOOL LOC36;
			LOC36 = (NIM_BOOL)0;
			LOC36 = ((*x_476125_658252590).kind == ((Ttypekind292244) 25));
			if (!(LOC36)) goto LA37;
			LOC36 = ((*x_476125_658252590).callconv == ((Tcallingconvention292002) 8));
			LA37: ;
			if (!LOC36) goto LA38;
			asgnRefNoCycle((void**) (&(*n0).typ), t0);
		}
		goto LA19;
		LA38: ;
		{
			globalerror_196076_155036129((*n0).info, ((NimStringDesc*) &T658252590_7));
		}
		LA19: ;
	}
	break;
	case ((Tnodekind292020) 41):
	{
		{
			if (!((*x_476125_658252590).kind == ((Ttypekind292244) 4) || (*x_476125_658252590).kind == ((Ttypekind292244) 16) || (*x_476125_658252590).kind == ((Ttypekind292244) 24) || (*x_476125_658252590).kind == ((Ttypekind292244) 27))) goto LA44;
			asgnRefNoCycle((void**) (&(*n0).typ), t0);
			{
				Tnode292802* m_476237_658252590;
				m_476237_658252590 = (Tnode292802*)0;
				{
					NI i_476313_658252590;
					NI HEX3Atmp_476315_658252590;
					NI LOC48;
					NI res_476317_658252590;
					i_476313_658252590 = (NI)0;
					HEX3Atmp_476315_658252590 = (NI)0;
					LOC48 = (NI)0;
					LOC48 = len_293081_850551059(n0);
					HEX3Atmp_476315_658252590 = (LOC48 - 1);
					res_476317_658252590 = ((NI) 0);
					{
						while (1) {
							Ttype292840* LOC51;
							if (!(res_476317_658252590 <= HEX3Atmp_476315_658252590)) goto LA50;
							i_476313_658252590 = res_476317_658252590;
							m_476237_658252590 = (*n0).kindU.S6.sons->data[i_476313_658252590];
							LOC51 = (Ttype292840*)0;
							LOC51 = elemtype_320394_3876443242(x_476125_658252590);
							annotatetype_476108_658252590(m_476237_658252590, LOC51);
							res_476317_658252590 += ((NI) 1);
						} LA50: ;
					}
				}
			}
		}
		goto LA42;
		LA44: ;
		{
			globalerror_196076_155036129((*n0).info, ((NimStringDesc*) &T658252590_8));
		}
		LA42: ;
	}
	break;
	case ((Tnodekind292020) 39):
	{
		{
			if (!((*x_476125_658252590).kind == ((Ttypekind292244) 19))) goto LA56;
			asgnRefNoCycle((void**) (&(*n0).typ), t0);
			{
				Tnode292802* m_476249_658252590;
				m_476249_658252590 = (Tnode292802*)0;
				{
					NI i_476324_658252590;
					NI HEX3Atmp_476326_658252590;
					NI LOC60;
					NI res_476328_658252590;
					i_476324_658252590 = (NI)0;
					HEX3Atmp_476326_658252590 = (NI)0;
					LOC60 = (NI)0;
					LOC60 = len_293081_850551059(n0);
					HEX3Atmp_476326_658252590 = (LOC60 - 1);
					res_476328_658252590 = ((NI) 0);
					{
						while (1) {
							Ttype292840* LOC63;
							if (!(res_476328_658252590 <= HEX3Atmp_476326_658252590)) goto LA62;
							i_476324_658252590 = res_476328_658252590;
							m_476249_658252590 = (*n0).kindU.S6.sons->data[i_476324_658252590];
							LOC63 = (Ttype292840*)0;
							LOC63 = elemtype_320394_3876443242(x_476125_658252590);
							annotatetype_476108_658252590(m_476249_658252590, LOC63);
							res_476328_658252590 += ((NI) 1);
						} LA62: ;
					}
				}
			}
		}
		goto LA54;
		LA56: ;
		{
			globalerror_196076_155036129((*n0).info, ((NimStringDesc*) &T658252590_9));
		}
		LA54: ;
	}
	break;
	case ((Tnodekind292020) 16) ... ((Tnodekind292020) 19):
	{
		{
			if (!((*x_476125_658252590).kind >= ((Ttypekind292244) 36) && (*x_476125_658252590).kind <= ((Ttypekind292244) 39))) goto LA68;
			asgnRefNoCycle((void**) (&(*n0).typ), t0);
		}
		goto LA66;
		LA68: ;
		{
			globalerror_196076_155036129((*n0).info, ((NimStringDesc*) &T658252590_10));
		}
		LA66: ;
	}
	break;
	case ((Tnodekind292020) 5) ... ((Tnodekind292020) 15):
	{
		{
			if (!((*x_476125_658252590).kind >= ((Ttypekind292244) 31) && (*x_476125_658252590).kind <= ((Ttypekind292244) 44) || (*x_476125_658252590).kind == ((Ttypekind292244) 1) || (*x_476125_658252590).kind == ((Ttypekind292244) 2) || (*x_476125_658252590).kind == ((Ttypekind292244) 14))) goto LA74;
			asgnRefNoCycle((void**) (&(*n0).typ), t0);
		}
		goto LA72;
		LA74: ;
		{
			globalerror_196076_155036129((*n0).info, ((NimStringDesc*) &T658252590_11));
		}
		LA72: ;
	}
	break;
	case ((Tnodekind292020) 20) ... ((Tnodekind292020) 22):
	{
		{
			if (!((*x_476125_658252590).kind == ((Ttypekind292244) 28) || (*x_476125_658252590).kind == ((Ttypekind292244) 29))) goto LA80;
			asgnRefNoCycle((void**) (&(*n0).typ), t0);
		}
		goto LA78;
		LA80: ;
		{
			globalerror_196076_155036129((*n0).info, ((NimStringDesc*) &T658252590_12));
		}
		LA78: ;
	}
	break;
	case ((Tnodekind292020) 23):
	{
		{
			if (!((*x_476125_658252590).kind == ((Ttypekind292244) 26) || (*x_476125_658252590).kind == ((Ttypekind292244) 29) || (*x_476125_658252590).kind == ((Ttypekind292244) 22) || (*x_476125_658252590).kind == ((Ttypekind292244) 21) || (*x_476125_658252590).kind == ((Ttypekind292244) 24) || (*x_476125_658252590).kind == ((Ttypekind292244) 25) || (*x_476125_658252590).kind == ((Ttypekind292244) 28) || (*x_476125_658252590).kind == ((Ttypekind292244) 50))) goto LA86;
			asgnRefNoCycle((void**) (&(*n0).typ), t0);
		}
		goto LA84;
		LA86: ;
		{
			globalerror_196076_155036129((*n0).info, ((NimStringDesc*) &T658252590_13));
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

