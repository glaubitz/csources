/* Generated by Nim Compiler v0.14.3 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
typedef struct Tnode293802 Tnode293802;
typedef struct Tsym293834 Tsym293834;
typedef struct Tlineinfo192336 Tlineinfo192336;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Ttype293840 Ttype293840;
typedef struct Tident200010 Tident200010;
typedef struct Tnodeseq293796 Tnodeseq293796;
typedef struct Tidobj200004 Tidobj200004;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq293836 Ttypeseq293836;
typedef struct TY293929 TY293929;
typedef struct Tstrtable293806 Tstrtable293806;
typedef struct Tsymseq293804 Tsymseq293804;
typedef struct Tloc293816 Tloc293816;
typedef struct Ropeobj179006 Ropeobj179006;
typedef struct Tlib293820 Tlib293820;
typedef struct TY293960 TY293960;
typedef struct Templctx458003 Templctx458003;
typedef struct Tidtable293850 Tidtable293850;
typedef struct Tidpairseq293848 Tidpairseq293848;
typedef struct TY204018 TY204018;
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
typedef struct Tinstantiation293824 Tinstantiation293824;
typedef struct Tlistentry147007 Tlistentry147007;
typedef struct TY293961 TY293961;
typedef struct Tidpair293846 Tidpair293846;
typedef struct Basechunk29437 Basechunk29437;
typedef struct Freecell29429 Freecell29429;
struct  Tlineinfo192336  {
NI16 line;
NI16 col;
NI32 fileindex;
};
typedef NU16 Tmsgkind192002;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU16 Tnodeflag293427Set;
typedef NU8 Tnodekind293020;
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
typedef NU8 Tsymkind293435;
struct  Tstrtable293806  {
NI counter;
Tsymseq293804* data;
};
typedef NU16 Tmagic293524;
typedef NU32 Tsymflag293184Set;
typedef NU32 Toption170009Set;
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
typedef NU8 Tsymflag293184;
typedef NU8 Ttypekind293244;
typedef NU8 Tcallingconvention293002;
typedef NU32 Ttypeflag293431Set;
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
struct  Tidtable293850  {
NI counter;
Tidpairseq293848* data;
};
struct  Templctx458003  {
Tsym293834* owner;
Tsym293834* gensymowner;
NIM_BOOL instlines;
Tidtable293850 mapping;
};
struct TY204018 {
NimStringDesc* Field0;
NI Field1;
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
typedef NU8 Trenderflag312004Set;
struct  Tident200010  {
  Tidobj200004 Sup;
NimStringDesc* s;
Tident200010* next;
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
struct TY293961 {
NI Field0;
Tsym293834* Field1;
};
struct  Tidpair293846  {
Tidobj200004* key;
TNimObject* val;
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
struct  Pagedesc47313  {
Pagedesc47313* next;
NI key;
TY29418 bits;
};
struct  Tinstantiation293824  {
Tsym293834* sym;
Ttypeseq293836* concretetypes;
NI compilesid;
};
struct  Freecell29429  {
Freecell29429* next;
NI zerofield;
};
struct Tnodeseq293796 {
  TGenericSeq Sup;
  Tnode293802* data[SEQ_DECL_SIZE];
};
struct Ttypeseq293836 {
  TGenericSeq Sup;
  Ttype293840* data[SEQ_DECL_SIZE];
};
struct TY293929 {
  TGenericSeq Sup;
  Tinstantiation293824* data[SEQ_DECL_SIZE];
};
struct Tsymseq293804 {
  TGenericSeq Sup;
  Tsym293834* data[SEQ_DECL_SIZE];
};
struct TY293960 {
  TGenericSeq Sup;
  TY293961 data[SEQ_DECL_SIZE];
};
struct Tidpairseq293848 {
  TGenericSeq Sup;
  Tidpair293846 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, globalerror_197071_155036129)(Tlineinfo192336 info0, Tmsgkind192002 msg0, NimStringDesc* arg0);
N_NIMCALL(Tnode293802*, evaltemplateargs_458215_885920397)(Tnode293802* n0, Tsym293834* s0, NIM_BOOL fromhlo0);
static N_INLINE(NI, len_294081_850551059)(Tnode293802* n0);
static N_INLINE(Tnode293802*, HEX5BHEX5D_294238_850551059)(Tnode293802* n0, NI i0);
N_NIMCALL(NI, len_296339_850551059)(Ttype293840* n0);
N_NIMCALL(Tnode293802*, newnodei_295197_850551059)(Tnodekind293020 kind0, Tlineinfo192336 info0);
N_NIMCALL(void, addson_295807_850551059)(Tnode293802* father0, Tnode293802* son0);
N_NIMCALL(void, localerror_197080_155036129)(Tlineinfo192336 info0, Tmsgkind192002 msg0, NimStringDesc* arg0);
N_NIMCALL(Tnode293802*, copytree_297822_850551059)(Tnode293802* src0);
N_NIMCALL(void, initidtable_297019_850551059)(Tidtable293850* x0);
N_NIMCALL(Tnode293802*, getbody_336227_1724185294)(Tsym293834* s0);
static N_INLINE(NIM_BOOL, isatom_298418_850551059)(Tnode293802* n0);
N_NIMCALL(void, evaltemplateaux_458014_885920397)(Tnode293802* templ0, Tnode293802* actual0, Templctx458003* c0, Tnode293802* result0);
N_NIMCALL(void, add_294136_850551059)(Tnode293802* father0, Tnode293802* son0);
N_NIMCALL(void, internalerror_197113_155036129)(NimStringDesc* errmsg0);
N_NIMCALL(NimStringDesc*, HEX24_197185_1689653243)(TY204018 x0);
N_NIMCALL(TNimObject*, idtableget_300086_2984716966)(Tidtable293850 t0, Tidobj200004* key0);
N_NIMCALL(Tsym293834*, copysym_296601_850551059)(Tsym293834* s0, NIM_BOOL keepid0);
static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0);
static N_INLINE(Cell47305*, usrtocell_51440_1689653243)(void* usr0);
static N_INLINE(void, rtladdzct_52601_1689653243)(Cell47305* c0);
N_NOINLINE(void, addzct_51417_1689653243)(Cellseq47321* s0, Cell47305* c0);
N_NIMCALL(void, idtableput_300094_2984716966)(Tidtable293850* t0, Tidobj200004* key0, TNimObject* val0);
N_NIMCALL(Tnode293802*, newsymnode_295190_850551059)(Tsym293834* sym0, Tlineinfo192336 info0);
N_NIMCALL(Tnode293802*, copynode_458008_885920397)(Templctx458003* ctx0, Tnode293802* a0, Tnode293802* b0);
N_NIMCALL(Tnode293802*, copynode_297528_850551059)(Tnode293802* src0);
N_NIMCALL(NI, sonslen_296351_850551059)(Tnode293802* n0);
N_NIMCALL(NimStringDesc*, rendertree_312044_382274130)(Tnode293802* n0, Trenderflag312004Set renderflags0);
static N_INLINE(NI, safelen_294103_850551059)(Tnode293802* n0);
STRING_LITERAL(T885920397_2, "", 0);
STRING_LITERAL(T885920397_4, "compiler/evaltempl.nim", 22);
NIM_CONST TY204018 T885920397_3 = {((NimStringDesc*) &T885920397_4),
((NI) 45)}
;
NI evaltemplatecounter_458328_885920397;
extern Tnode293802* emptynode_294801_850551059;
extern Gcheap49818 gch_49858_1689653243;

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

static N_INLINE(Tnode293802*, HEX5BHEX5D_294238_850551059)(Tnode293802* n0, NI i0) {
	Tnode293802* result0;
	result0 = (Tnode293802*)0;
	result0 = (*n0).kindU.S6.sons->data[i0];
	return result0;
}

N_NIMCALL(Tnode293802*, evaltemplateargs_458215_885920397)(Tnode293802* n0, Tsym293834* s0, NIM_BOOL fromhlo0) {
	Tnode293802* result0;
	NI totalparams0;
	NI genericparams0;
	NI expectedregularparams0;
	NI LOC12;
	NI givenregularparams0;
	result0 = (Tnode293802*)0;
	switch ((*n0).kind) {
	case ((Tnodekind293020) 27):
	case ((Tnodekind293020) 29):
	case ((Tnodekind293020) 30):
	case ((Tnodekind293020) 31):
	case ((Tnodekind293020) 26):
	case ((Tnodekind293020) 28):
	{
		NI LOC2;
		LOC2 = (NI)0;
		LOC2 = len_294081_850551059(n0);
		totalparams0 = (NI)(LOC2 - ((NI) 1));
	}
	break;
	default:
	{
		totalparams0 = ((NI) 0);
	}
	break;
	}
	{
		NIM_BOOL LOC6;
		LOC6 = (NIM_BOOL)0;
		LOC6 = (((*s0).flags &(1U<<((NU)(((Tsymflag293184) 25))&31U)))!=0);
		if (LOC6) goto LA7;
		LOC6 = fromhlo0;
		LA7: ;
		if (!LOC6) goto LA8;
		genericparams0 = ((NI) 0);
	}
	goto LA4;
	LA8: ;
	{
		Tnode293802* LOC11;
		LOC11 = (Tnode293802*)0;
		LOC11 = HEX5BHEX5D_294238_850551059((*s0).ast, ((NI) 2));
		genericparams0 = len_294081_850551059(LOC11);
	}
	LA4: ;
	LOC12 = (NI)0;
	LOC12 = len_296339_850551059((*s0).typ);
	expectedregularparams0 = (LOC12 - 1);
	givenregularparams0 = (NI)(totalparams0 - genericparams0);
	{
		if (!(givenregularparams0 < ((NI) 0))) goto LA15;
		givenregularparams0 = ((NI) 0);
	}
	LA15: ;
	{
		if (!((NI)(expectedregularparams0 + genericparams0) < totalparams0)) goto LA19;
		globalerror_197071_155036129((*n0).info, ((Tmsgkind192002) 137), ((NimStringDesc*) &T885920397_2));
	}
	LA19: ;
	result0 = newnodei_295197_850551059(((Tnodekind293020) 152), (*n0).info);
	{
		NI i_458257_885920397;
		NI res_458309_885920397;
		i_458257_885920397 = (NI)0;
		res_458309_885920397 = ((NI) 1);
		{
			while (1) {
				if (!(res_458309_885920397 <= givenregularparams0)) goto LA23;
				i_458257_885920397 = res_458309_885920397;
				addson_295807_850551059(result0, (*n0).kindU.S6.sons->data[i_458257_885920397]);
				res_458309_885920397 += ((NI) 1);
			} LA23: ;
		}
	}
	{
		NI i_458269_885920397;
		NI HEX3Atmp_458314_885920397;
		NI res_458317_885920397;
		i_458269_885920397 = (NI)0;
		HEX3Atmp_458314_885920397 = (NI)0;
		HEX3Atmp_458314_885920397 = (NI)(givenregularparams0 + ((NI) 1));
		res_458317_885920397 = HEX3Atmp_458314_885920397;
		{
			while (1) {
				Tnode293802* default_458274_885920397;
				if (!(res_458317_885920397 <= expectedregularparams0)) goto LA26;
				i_458269_885920397 = res_458317_885920397;
				default_458274_885920397 = (*(*(*(*(*s0).typ).n).kindU.S6.sons->data[i_458269_885920397]).kindU.S4.sym).ast;
				{
					NIM_BOOL LOC29;
					LOC29 = (NIM_BOOL)0;
					LOC29 = default_458274_885920397 == 0;
					if (LOC29) goto LA30;
					LOC29 = ((*default_458274_885920397).kind == ((Tnodekind293020) 1));
					LA30: ;
					if (!LOC29) goto LA31;
					localerror_197080_155036129((*n0).info, ((Tmsgkind192002) 137), ((NimStringDesc*) &T885920397_2));
					addson_295807_850551059(result0, emptynode_294801_850551059);
				}
				goto LA27;
				LA31: ;
				{
					Tnode293802* LOC34;
					LOC34 = (Tnode293802*)0;
					LOC34 = copytree_297822_850551059(default_458274_885920397);
					addson_295807_850551059(result0, LOC34);
				}
				LA27: ;
				res_458317_885920397 += ((NI) 1);
			} LA26: ;
		}
	}
	{
		NI i_458303_885920397;
		NI res_458324_885920397;
		i_458303_885920397 = (NI)0;
		res_458324_885920397 = ((NI) 1);
		{
			while (1) {
				if (!(res_458324_885920397 <= genericparams0)) goto LA37;
				i_458303_885920397 = res_458324_885920397;
				addson_295807_850551059(result0, (*n0).kindU.S6.sons->data[(NI)(givenregularparams0 + i_458303_885920397)]);
				res_458324_885920397 += ((NI) 1);
			} LA37: ;
		}
	}
	return result0;
}

static N_INLINE(NIM_BOOL, isatom_298418_850551059)(Tnode293802* n0) {
	NIM_BOOL result0;
	NIM_BOOL LOC1;
	result0 = (NIM_BOOL)0;
	LOC1 = (NIM_BOOL)0;
	LOC1 = (((Tnodekind293020) 0) <= (*n0).kind);
	if (!(LOC1)) goto LA2;
	LOC1 = ((*n0).kind <= ((Tnodekind293020) 23));
	LA2: ;
	result0 = LOC1;
	return result0;
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

N_NIMCALL(Tnode293802*, copynode_458008_885920397)(Templctx458003* ctx0, Tnode293802* a0, Tnode293802* b0) {
	Tnode293802* result0;
	result0 = (Tnode293802*)0;
	result0 = copynode_297528_850551059(a0);
	{
		if (!(*ctx0).instlines) goto LA3;
		(*result0).info = (*b0).info;
	}
	LA3: ;
	return result0;
}

N_NIMCALL(void, evaltemplateaux_458014_885920397)(Tnode293802* templ0, Tnode293802* actual0, Templctx458003* c0, Tnode293802* result0) {
	switch ((*templ0).kind) {
	case ((Tnodekind293020) 3):
	{
		Tsym293834* s0;
		s0 = (*templ0).kindU.S4.sym;
		{
			if (!((*(*s0).owner).Sup.id == (*(*c0).owner).Sup.id)) goto LA4;
			{
				NIM_BOOL LOC8;
				Tnode293802* x_458058_885920397;
				LOC8 = (NIM_BOOL)0;
				LOC8 = ((*s0).kind == ((Tsymkind293435) 3));
				if (!(LOC8)) goto LA9;
				LOC8 = !((((*s0).flags &(1U<<((NU)(((Tsymflag293184) 31))&31U)))!=0));
				LA9: ;
				if (!LOC8) goto LA10;
				x_458058_885920397 = (*actual0).kindU.S6.sons->data[(*s0).position];
				{
					if (!((*x_458058_885920397).kind == ((Tnodekind293020) 152))) goto LA14;
					{
						Tnode293802* y_458060_885920397;
						y_458060_885920397 = (Tnode293802*)0;
						{
							NI i_458189_885920397;
							NI HEX3Atmp_458191_885920397;
							NI LOC18;
							NI res_458193_885920397;
							i_458189_885920397 = (NI)0;
							HEX3Atmp_458191_885920397 = (NI)0;
							LOC18 = (NI)0;
							LOC18 = len_294081_850551059(x_458058_885920397);
							HEX3Atmp_458191_885920397 = (LOC18 - 1);
							res_458193_885920397 = ((NI) 0);
							{
								while (1) {
									if (!(res_458193_885920397 <= HEX3Atmp_458191_885920397)) goto LA20;
									i_458189_885920397 = res_458193_885920397;
									y_458060_885920397 = (*x_458058_885920397).kindU.S6.sons->data[i_458189_885920397];
									add_294136_850551059(result0, y_458060_885920397);
									res_458193_885920397 += ((NI) 1);
								} LA20: ;
							}
						}
					}
				}
				goto LA12;
				LA14: ;
				{
					Tnode293802* LOC22;
					LOC22 = (Tnode293802*)0;
					LOC22 = copytree_297822_850551059(x_458058_885920397);
					add_294136_850551059(result0, LOC22);
				}
				LA12: ;
			}
			goto LA6;
			LA10: ;
			{
				NIM_BOOL LOC24;
				NIM_BOOL LOC26;
				NIM_BOOL LOC27;
				Tnode293802* x_458116_885920397;
				NI LOC32;
				LOC24 = (NIM_BOOL)0;
				LOC24 = ((*s0).kind == ((Tsymkind293435) 4));
				if (LOC24) goto LA25;
				LOC26 = (NIM_BOOL)0;
				LOC27 = (NIM_BOOL)0;
				LOC27 = ((*s0).kind == ((Tsymkind293435) 7));
				if (!(LOC27)) goto LA28;
				LOC27 = !(((*s0).typ == NIM_NIL));
				LA28: ;
				LOC26 = LOC27;
				if (!(LOC26)) goto LA29;
				LOC26 = ((*(*s0).typ).kind == ((Ttypekind293244) 12));
				LA29: ;
				LOC24 = LOC26;
				LA25: ;
				if (!LOC24) goto LA30;
				LOC32 = (NI)0;
				LOC32 = len_296339_850551059((*(*s0).owner).typ);
				x_458116_885920397 = (*actual0).kindU.S6.sons->data[(NI)((NI)(LOC32 + (*s0).position) - ((NI) 1))];
				{
					if (!((*x_458116_885920397).kind == ((Tnodekind293020) 152))) goto LA35;
					{
						Tnode293802* y_458118_885920397;
						y_458118_885920397 = (Tnode293802*)0;
						{
							NI i_458200_885920397;
							NI HEX3Atmp_458202_885920397;
							NI LOC39;
							NI res_458204_885920397;
							i_458200_885920397 = (NI)0;
							HEX3Atmp_458202_885920397 = (NI)0;
							LOC39 = (NI)0;
							LOC39 = len_294081_850551059(x_458116_885920397);
							HEX3Atmp_458202_885920397 = (LOC39 - 1);
							res_458204_885920397 = ((NI) 0);
							{
								while (1) {
									if (!(res_458204_885920397 <= HEX3Atmp_458202_885920397)) goto LA41;
									i_458200_885920397 = res_458204_885920397;
									y_458118_885920397 = (*x_458116_885920397).kindU.S6.sons->data[i_458200_885920397];
									add_294136_850551059(result0, y_458118_885920397);
									res_458204_885920397 += ((NI) 1);
								} LA41: ;
							}
						}
					}
				}
				goto LA33;
				LA35: ;
				{
					Tnode293802* LOC43;
					LOC43 = (Tnode293802*)0;
					LOC43 = copytree_297822_850551059(x_458116_885920397);
					add_294136_850551059(result0, LOC43);
				}
				LA33: ;
			}
			goto LA6;
			LA30: ;
			{
				Tsym293834* x0;
				Tidobj200004* LOC50;
				TNimObject* LOC51;
				Tlineinfo192336 LOC58;
				Tnode293802* LOC64;
				{
					NimStringDesc* LOC49;
					if (!!((((*s0).flags &(1U<<((NU)(((Tsymflag293184) 31))&31U)))!=0))) goto LA47;
					LOC49 = (NimStringDesc*)0;
					LOC49 = HEX24_197185_1689653243(T885920397_3);
					internalerror_197113_155036129(LOC49);
				}
				LA47: ;
				LOC50 = (Tidobj200004*)0;
				LOC50 = &s0->Sup;
				LOC51 = (TNimObject*)0;
				LOC51 = idtableget_300086_2984716966((*c0).mapping, LOC50);
				x0 = ((Tsym293834*) (LOC51));
				{
					Tidobj200004* LOC56;
					TNimObject* LOC57;
					if (!(x0 == NIM_NIL)) goto LA54;
					x0 = copysym_296601_850551059(s0, NIM_FALSE);
					asgnRefNoCycle((void**) (&(*x0).owner), (*c0).gensymowner);
					LOC56 = (Tidobj200004*)0;
					LOC56 = &s0->Sup;
					LOC57 = (TNimObject*)0;
					LOC57 = &x0->Sup.Sup;
					idtableput_300094_2984716966((&(*c0).mapping), LOC56, LOC57);
				}
				LA54: ;
				{
					if (!(*c0).instlines) goto LA61;
					LOC58 = (*actual0).info;
				}
				goto LA59;
				LA61: ;
				{
					LOC58 = (*templ0).info;
				}
				LA59: ;
				LOC64 = (Tnode293802*)0;
				LOC64 = newsymnode_295190_850551059(x0, LOC58);
				add_294136_850551059(result0, LOC64);
			}
			LA6: ;
		}
		goto LA2;
		LA4: ;
		{
			Tnode293802* LOC66;
			LOC66 = (Tnode293802*)0;
			LOC66 = copynode_458008_885920397((&(*c0)), templ0, actual0);
			add_294136_850551059(result0, LOC66);
		}
		LA2: ;
	}
	break;
	case ((Tnodekind293020) 0) ... ((Tnodekind293020) 2):
	case ((Tnodekind293020) 4) ... ((Tnodekind293020) 23):
	{
		Tnode293802* LOC68;
		LOC68 = (Tnode293802*)0;
		LOC68 = copynode_458008_885920397((&(*c0)), templ0, actual0);
		add_294136_850551059(result0, LOC68);
	}
	break;
	default:
	{
		Tnode293802* res0;
		res0 = copynode_458008_885920397((&(*c0)), templ0, actual0);
		{
			NI i_458182_885920397;
			NI HEX3Atmp_458208_885920397;
			NI LOC71;
			NI res_458211_885920397;
			i_458182_885920397 = (NI)0;
			HEX3Atmp_458208_885920397 = (NI)0;
			LOC71 = (NI)0;
			LOC71 = sonslen_296351_850551059(templ0);
			HEX3Atmp_458208_885920397 = (NI)(LOC71 - ((NI) 1));
			res_458211_885920397 = ((NI) 0);
			{
				while (1) {
					if (!(res_458211_885920397 <= HEX3Atmp_458208_885920397)) goto LA73;
					i_458182_885920397 = res_458211_885920397;
					evaltemplateaux_458014_885920397((*templ0).kindU.S6.sons->data[i_458182_885920397], actual0, c0, res0);
					res_458211_885920397 += ((NI) 1);
				} LA73: ;
			}
		}
		add_294136_850551059(result0, res0);
	}
	break;
	}
}

static N_INLINE(NI, safelen_294103_850551059)(Tnode293802* n0) {
	NI result0;
	result0 = (NI)0;
	{
		NIM_BOOL LOC3;
		LOC3 = (NIM_BOOL)0;
		LOC3 = ((*n0).kind >= ((Tnodekind293020) 0) && (*n0).kind <= ((Tnodekind293020) 23));
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

N_NIMCALL(Tnode293802*, evaltemplate_458329_885920397)(Tnode293802* n0, Tsym293834* tmpl0, Tsym293834* gensymowner0, NIM_BOOL fromhlo0) {
	Tnode293802* result0;
	Tnode293802* args0;
	Templctx458003 ctx0;
	Tnode293802* body0;
	result0 = (Tnode293802*)0;
	evaltemplatecounter_458328_885920397 += ((NI) 1);
	{
		if (!(((NI) 100) < evaltemplatecounter_458328_885920397)) goto LA3;
		globalerror_197071_155036129((*n0).info, ((Tmsgkind192002) 188), ((NimStringDesc*) &T885920397_2));
		result0 = n0;
	}
	LA3: ;
	args0 = evaltemplateargs_458215_885920397(n0, tmpl0, fromhlo0);
	memset((void*)(&ctx0), 0, sizeof(ctx0));
	ctx0.owner = tmpl0;
	ctx0.gensymowner = gensymowner0;
	initidtable_297019_850551059((&ctx0.mapping));
	body0 = getbody_336227_1724185294(tmpl0);
	{
		NIM_BOOL LOC7;
		LOC7 = (NIM_BOOL)0;
		LOC7 = isatom_298418_850551059(body0);
		if (!LOC7) goto LA8;
		result0 = newnodei_295197_850551059(((Tnodekind293020) 37), (*body0).info);
		evaltemplateaux_458014_885920397(body0, args0, (&ctx0), result0);
		{
			NI LOC12;
			LOC12 = (NI)0;
			LOC12 = len_294081_850551059(result0);
			if (!(LOC12 == ((NI) 1))) goto LA13;
			result0 = (*result0).kindU.S6.sons->data[((NI) 0)];
		}
		goto LA10;
		LA13: ;
		{
			NimStringDesc* LOC16;
			LOC16 = (NimStringDesc*)0;
			LOC16 = rendertree_312044_382274130(result0, 4);
			localerror_197080_155036129((*result0).info, ((Tmsgkind192002) 1), LOC16);
		}
		LA10: ;
	}
	goto LA5;
	LA8: ;
	{
		result0 = copynode_297528_850551059(body0);
		{
			NI i_458366_885920397;
			NI HEX3Atmp_458380_885920397;
			NI LOC19;
			NI res_458383_885920397;
			i_458366_885920397 = (NI)0;
			HEX3Atmp_458380_885920397 = (NI)0;
			LOC19 = (NI)0;
			LOC19 = safelen_294103_850551059(body0);
			HEX3Atmp_458380_885920397 = (NI)(LOC19 - ((NI) 1));
			res_458383_885920397 = ((NI) 0);
			{
				while (1) {
					if (!(res_458383_885920397 <= HEX3Atmp_458380_885920397)) goto LA21;
					i_458366_885920397 = res_458383_885920397;
					evaltemplateaux_458014_885920397((*body0).kindU.S6.sons->data[i_458366_885920397], args0, (&ctx0), result0);
					res_458383_885920397 += ((NI) 1);
				} LA21: ;
			}
		}
	}
	LA5: ;
	evaltemplatecounter_458328_885920397 -= ((NI) 1);
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, compiler_evaltemplInit000)(void) {
	evaltemplatecounter_458328_885920397 = ((NI) 0);
}

NIM_EXTERNC N_NOINLINE(void, compiler_evaltemplDatInit000)(void) {
}

