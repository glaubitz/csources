/* Generated by Nim Compiler v0.14.3 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#include <setjmp.h>
#include <stdio.h>
typedef struct TY347011 TY347011;
typedef struct Tsourcefile347003 Tsourcefile347003;
typedef struct TY136002 TY136002;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Cell47304 Cell47304;
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
typedef struct Tlineinfo193336 Tlineinfo193336;
typedef struct Tsym294834 Tsym294834;
typedef struct Tident201010 Tident201010;
typedef struct TY129506 TY129506;
typedef struct Exception Exception;
typedef struct TNimObject TNimObject;
typedef struct TSafePoint TSafePoint;
typedef struct Baselexer220007 Baselexer220007;
typedef struct Streamobj157818 Streamobj157818;
typedef struct Filestreamobj158877 Filestreamobj158877;
typedef struct Slice90651 Slice90651;
typedef struct Tidobj201004 Tidobj201004;
typedef struct Ttypeseq294836 Ttypeseq294836;
typedef struct TY294929 TY294929;
typedef struct Tstrtable294806 Tstrtable294806;
typedef struct Tsymseq294804 Tsymseq294804;
typedef struct Ttype294840 Ttype294840;
typedef struct Tnode294802 Tnode294802;
typedef struct Tloc294816 Tloc294816;
typedef struct Ropeobj180006 Ropeobj180006;
typedef struct Tlib294820 Tlib294820;
typedef struct Basechunk29438 Basechunk29438;
typedef struct Freecell29430 Freecell29430;
typedef struct Tinstantiation294824 Tinstantiation294824;
typedef struct TY294960 TY294960;
typedef struct Tnodeseq294796 Tnodeseq294796;
typedef struct Tlistentry148007 Tlistentry148007;
typedef struct TY294961 TY294961;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tsourcefile347003  {
TY136002* lines;
NIM_BOOL dirty;
NIM_BOOL isnimfixfile;
NimStringDesc* fullpath;
NimStringDesc* newline;
NI32 fileidx;
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
struct  Tlineinfo193336  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct TY129506 {
NimStringDesc* Field0;
NimStringDesc* Field1;
NimStringDesc* Field2;
};
typedef NU8 Filemode13009;
struct  TNimObject  {
TNimType* m_type;
};
struct  Exception  {
  TNimObject Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
NimStringDesc* trace;
};
typedef struct {
N_NIMCALL_PTR(NIM_BOOL, ClPrc) (Exception* e0, void* ClEnv);
void* ClEnv;
} TY17211;
struct  TSafePoint  {
TSafePoint* prev;
NI status;
jmp_buf context;
NIM_BOOL hasRaiseAction;
TY17211 raiseAction;
};
typedef NU8 char136Set[32];
struct  Baselexer220007  {
  TNimObject Sup;
NI bufpos;
NCSTRING buf;
NI buflen;
Streamobj157818* input;
NI linenumber;
NI sentinel;
NI linestart;
char136Set refillchars;
};
struct  Slice90651  {
NI a;
NI b;
};
struct  Tidobj201004  {
  TNimObject Sup;
NI id;
};
struct  Tident201010  {
  Tidobj201004 Sup;
NimStringDesc* s;
Tident201010* next;
NI h;
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
typedef N_NIMCALL_PTR(void, TY157819) (Streamobj157818* s0);
typedef N_NIMCALL_PTR(NIM_BOOL, TY157823) (Streamobj157818* s0);
typedef N_NIMCALL_PTR(void, TY157827) (Streamobj157818* s0, NI pos0);
typedef N_NIMCALL_PTR(NI, TY157832) (Streamobj157818* s0);
typedef N_NIMCALL_PTR(NI, TY157836) (Streamobj157818* s0, void* buffer0, NI buflen0);
typedef N_NIMCALL_PTR(NI, TY157842) (Streamobj157818* s0, void* buffer0, NI buflen0);
typedef N_NIMCALL_PTR(void, TY157848) (Streamobj157818* s0, void* buffer0, NI buflen0);
typedef N_NIMCALL_PTR(void, TY157854) (Streamobj157818* s0);
struct  Streamobj157818  {
  TNimObject Sup;
TY157819 closeimpl;
TY157823 atendimpl;
TY157827 setpositionimpl;
TY157832 getpositionimpl;
TY157836 readdataimpl;
TY157842 peekdataimpl;
TY157848 writedataimpl;
TY157854 flushimpl;
};
struct  Filestreamobj158877  {
  Streamobj157818 Sup;
FILE* f;
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
struct  Freecell29430  {
Freecell29430* next;
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
struct TY347011 {
  TGenericSeq Sup;
  Tsourcefile347003 data[SEQ_DECL_SIZE];
};
struct TY136002 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
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
struct Tnodeseq294796 {
  TGenericSeq Sup;
  Tnode294802* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d0, NI op0);
N_NIMCALL(void, T3901077974_3)(void* p, NI op);
N_NIMCALL(void, T3901077974_4)(void);
N_NIMCALL(void, nimRegisterGlobalMarker)(Globalmarkerproc55802 markerproc0);
static N_INLINE(void, nimGCunrefNoCycle)(void* p0);
static N_INLINE(Cell47304*, usrtocell_51440_1689653243)(void* usr0);
static N_INLINE(void, rtladdzct_52601_1689653243)(Cell47304* c0);
N_NOINLINE(void, addzct_51417_1689653243)(Cellseq47320* s0, Cell47304* c0);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ0, NI len0);
N_NIMCALL(void, replacedeprecated_347155_3901077974)(Tlineinfo193336 info0, Tident201010* oldsym0, Tident201010* newsym0);
N_NIMCALL(void, loadfile_347030_3901077974)(Tlineinfo193336 info0);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* seq0, NI elemsize0, NI newlen0);
N_NIMCALL(NimStringDesc*, tofullpath_194261_155036129)(NI32 fileidx0);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src0);
N_NIMCALL(void, nossplitFile)(NimStringDesc* path0, TY129506* Result);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a0, NimStringDesc* b0);
static N_INLINE(NIM_BOOL, equalmem_7495_1689653243)(void* a0, void* b0, NI size0);
N_NIMCALL(FILE*, open_14817_1689653243)(NimStringDesc* filename0, Filemode13009 mode0, NI bufsize0);
static N_INLINE(void, pushSafePoint)(TSafePoint* s0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap0);
N_NIMCALL(NIM_BOOL, readline_14915_1689653243)(FILE* f0, NimStringDesc** line0);
N_NIMCALL(TGenericSeq*, incrSeqV2)(TGenericSeq* seq0, NI elemsize0);
static N_INLINE(void, popSafePoint)(void);
N_NIMCALL(void, close_14853_1689653243)(FILE* f0);
N_NIMCALL(void, reraiseException)(void);
N_NIMCALL(void, open_222223_1314243012)(Baselexer220007* L0, Streamobj157818* input0, NI buflen0, char136Set refillchars0);
N_NIMCALL(Filestreamobj158877*, newfilestream_158943_1780494535)(NimStringDesc* filename0, Filemode13009 mode0);
N_NIMCALL(void, close_220021_1314243012)(Baselexer220007* L0);
N_NIMCALL(NI, identlen_347112_3901077974)(NimStringDesc* line0, NI start0);
N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* a0, NimStringDesc* b0);
static N_INLINE(NimStringDesc*, HEX5BHEX5D_90644_1689653243)(NimStringDesc* s0, Slice90651 x0);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s0, NI start_79210_1689653243, NI last0);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s0, NI first0, NI last0);
static N_INLINE(Slice90651, HEX2EHEX2E_109260_1689653243)(NI a0, NI b0);
static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0);
static N_INLINE(void, copymem_7485_1689653243)(void* dest0, void* source0, NI size0);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s0, NI start0);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s0, NI first0);
static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0);
STRING_LITERAL(T3901077974_5, ".nimfix", 7);
static NIM_CONST char136Set T3901077974_7 = {
0x00, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(T3901077974_8, "\015\012", 2);
STRING_LITERAL(T3901077974_9, "\012", 1);
TY347011* gsourcefiles_347028_3901077974;
TNimType NTI347003; /* TSourceFile */
extern TNimType NTI136002; /* seq[string] */
extern TNimType NTI130; /* bool */
extern TNimType NTI138; /* string */
extern TNimType NTI110; /* int32 */
TNimType NTI347011; /* seq[TSourceFile] */
extern Gcheap49818 gch_49858_1689653243;
extern TSafePoint* exchandler_18837_1689653243;
extern TNimType NTI220007; /* BaseLexer */
N_NIMCALL(void, T3901077974_3)(void* p, NI op) {
	TY347011* a;
	NI LOC1;
	a = (TY347011*)p;
	LOC1 = (NI)0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].lines, op);
	nimGCvisit((void*)a->data[LOC1].fullpath, op);
	nimGCvisit((void*)a->data[LOC1].newline, op);
	}
}
N_NIMCALL(void, T3901077974_4)(void) {
	nimGCvisit((void*)gsourcefiles_347028_3901077974, 0);
}

static N_INLINE(Cell47304*, usrtocell_51440_1689653243)(void* usr0) {
	Cell47304* result0;
	result0 = (Cell47304*)0;
	result0 = ((Cell47304*) ((NI)((NU64)(((NI) (usr0))) - (NU64)(((NI)sizeof(Cell47304))))));
	return result0;
}

static N_INLINE(void, rtladdzct_52601_1689653243)(Cell47304* c0) {
	addzct_51417_1689653243((&gch_49858_1689653243.zct), c0);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p0) {
	Cell47304* c0;
	c0 = usrtocell_51440_1689653243(p0);
	{
		(*c0).refcount -= ((NI) 8);
		if (!((NU64)((*c0).refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_52601_1689653243(c0);
	}
	LA3: ;
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

static N_INLINE(void, pushSafePoint)(TSafePoint* s0) {
	(*s0).hasRaiseAction = NIM_FALSE;
	(*s0).prev = exchandler_18837_1689653243;
	exchandler_18837_1689653243 = s0;
}

static N_INLINE(void, popSafePoint)(void) {
	exchandler_18837_1689653243 = (*exchandler_18837_1689653243).prev;
}

N_NIMCALL(void, loadfile_347030_3901077974)(Tlineinfo193336 info0) {
	NI32 i0;
	i0 = info0.fileindex;
	{
		if (!((gsourcefiles_347028_3901077974 ? gsourcefiles_347028_3901077974->Sup.len : 0) <= ((NI) (i0)))) goto LA3;
		gsourcefiles_347028_3901077974 = (TY347011*) setLengthSeq(&(gsourcefiles_347028_3901077974)->Sup, sizeof(Tsourcefile347003), ((NI) ((NI32)(i0 + ((NI32) 1)))));
	}
	LA3: ;
	{
		NimStringDesc* path0;
		NimStringDesc* LOC9;
		TY129506 LOC10;
		Baselexer220007 lex0;
		Filestreamobj158877* LOC19;
		Streamobj157818* LOC20;
		NI pos0;
		if (!gsourcefiles_347028_3901077974->data[i0].lines == 0) goto LA7;
		gsourcefiles_347028_3901077974->data[i0].fileidx = info0.fileindex;
		if (gsourcefiles_347028_3901077974->data[i0].lines) nimGCunrefNoCycle(gsourcefiles_347028_3901077974->data[i0].lines);
		gsourcefiles_347028_3901077974->data[i0].lines = (TY136002*) newSeqRC1((&NTI136002), 0);
		path0 = tofullpath_194261_155036129(info0.fileindex);
		LOC9 = (NimStringDesc*)0;
		LOC9 = gsourcefiles_347028_3901077974->data[i0].fullpath; gsourcefiles_347028_3901077974->data[i0].fullpath = copyStringRC1(path0);
		if (LOC9) nimGCunrefNoCycle(LOC9);
		memset((void*)(&LOC10), 0, sizeof(LOC10));
		nossplitFile(path0, (&LOC10));
		gsourcefiles_347028_3901077974->data[i0].isnimfixfile = eqStrings(LOC10.Field2, ((NimStringDesc*) &T3901077974_5));
		{
			NimStringDesc* line_347077_3901077974;
			FILE* f_347104_3901077974;
			TSafePoint T3901077974_6;
			line_347077_3901077974 = (NimStringDesc*)0;
			f_347104_3901077974 = open_14817_1689653243(path0, ((Filemode13009) 0), ((NI) 8000));
			pushSafePoint(&T3901077974_6);
			T3901077974_6.status = setjmp(T3901077974_6.context);
			if (T3901077974_6.status == 0) {
				NimStringDesc* res_347106_3901077974;
				res_347106_3901077974 = rawNewString(((NI) 80));
				{
					while (1) {
						NIM_BOOL LOC15;
						NimStringDesc* LOC16;
						LOC15 = (NIM_BOOL)0;
						LOC15 = readline_14915_1689653243(f_347104_3901077974, (&res_347106_3901077974));
						if (!LOC15) goto LA14;
						line_347077_3901077974 = res_347106_3901077974;
						gsourcefiles_347028_3901077974->data[i0].lines = (TY136002*) incrSeqV2(&(gsourcefiles_347028_3901077974->data[i0].lines)->Sup, sizeof(NimStringDesc*));
						LOC16 = (NimStringDesc*)0;
						LOC16 = gsourcefiles_347028_3901077974->data[i0].lines->data[gsourcefiles_347028_3901077974->data[i0].lines->Sup.len]; gsourcefiles_347028_3901077974->data[i0].lines->data[gsourcefiles_347028_3901077974->data[i0].lines->Sup.len] = copyStringRC1(line_347077_3901077974);
						if (LOC16) nimGCunrefNoCycle(LOC16);
						++gsourcefiles_347028_3901077974->data[i0].lines->Sup.len;
					} LA14: ;
				}
				popSafePoint();
			}
			else {
				popSafePoint();
			}
			{
				close_14853_1689653243(f_347104_3901077974);
			}
			if (T3901077974_6.status != 0) reraiseException();
		}
		memset((void*)(&lex0), 0, sizeof(lex0));
		lex0.Sup.m_type = (&NTI220007);
		LOC19 = (Filestreamobj158877*)0;
		LOC19 = newfilestream_158943_1780494535(path0, ((Filemode13009) 0));
		LOC20 = (Streamobj157818*)0;
		LOC20 = &LOC19->Sup;
		open_222223_1314243012((&lex0), LOC20, ((NI) 8192), T3901077974_7);
		pos0 = lex0.bufpos;
		{
			while (1) {
				switch (((NU8)(lex0.buf[pos0]))) {
				case 13:
				{
					NimStringDesc* LOC24;
					LOC24 = (NimStringDesc*)0;
					LOC24 = gsourcefiles_347028_3901077974->data[i0].newline; gsourcefiles_347028_3901077974->data[i0].newline = copyStringRC1(((NimStringDesc*) &T3901077974_8));
					if (LOC24) nimGCunrefNoCycle(LOC24);
					goto LA21;
				}
				break;
				case 10:
				case 0:
				{
					NimStringDesc* LOC26;
					LOC26 = (NimStringDesc*)0;
					LOC26 = gsourcefiles_347028_3901077974->data[i0].newline; gsourcefiles_347028_3901077974->data[i0].newline = copyStringRC1(((NimStringDesc*) &T3901077974_9));
					if (LOC26) nimGCunrefNoCycle(LOC26);
					goto LA21;
				}
				break;
				default:
				{
				}
				break;
				}
				pos0 += ((NI) 1);
			}
		} LA21: ;
		close_220021_1314243012((&lex0));
	}
	LA7: ;
}

N_NIMCALL(NI, identlen_347112_3901077974)(NimStringDesc* line0, NI start0) {
	NI result0;
	result0 = (NI)0;
	{
		while (1) {
			NIM_BOOL LOC3;
			LOC3 = (NIM_BOOL)0;
			LOC3 = ((NI)(start0 + result0) < (line0 ? line0->Sup.len : 0));
			if (!(LOC3)) goto LA4;
			LOC3 = (((NU8)(line0->data[(NI)(start0 + result0)])) >= ((NU8)(97)) && ((NU8)(line0->data[(NI)(start0 + result0)])) <= ((NU8)(122)) || ((NU8)(line0->data[(NI)(start0 + result0)])) >= ((NU8)(65)) && ((NU8)(line0->data[(NI)(start0 + result0)])) <= ((NU8)(90)) || ((NU8)(line0->data[(NI)(start0 + result0)])) >= ((NU8)(48)) && ((NU8)(line0->data[(NI)(start0 + result0)])) <= ((NU8)(57)) || ((NU8)(line0->data[(NI)(start0 + result0)])) >= ((NU8)(128)) && ((NU8)(line0->data[(NI)(start0 + result0)])) <= ((NU8)(255)) || ((NU8)(line0->data[(NI)(start0 + result0)])) == ((NU8)(95)));
			LA4: ;
			if (!LOC3) goto LA2;
			result0 += ((NI) 1);
		} LA2: ;
	}
	return result0;
}

static N_INLINE(NimStringDesc*, HEX5BHEX5D_90644_1689653243)(NimStringDesc* s0, Slice90651 x0) {
	NimStringDesc* result0;
	result0 = (NimStringDesc*)0;
	result0 = copyStrLast(s0, x0.a, x0.b);
	return result0;
}

static N_INLINE(Slice90651, HEX2EHEX2E_109260_1689653243)(NI a0, NI b0) {
	Slice90651 result0;
	memset((void*)(&result0), 0, sizeof(result0));
	result0.a = a0;
	result0.b = b0;
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

N_NIMCALL(void, replacedeprecated_347155_3901077974)(Tlineinfo193336 info0, Tident201010* oldsym0, Tident201010* newsym0) {
	NimStringDesc* line0;
	NI first0;
	NI last0;
	NI LOC17;
{	loadfile_347030_3901077974(info0);
	line0 = gsourcefiles_347028_3901077974->data[info0.fileindex].lines->data[(NI16)(info0.line - ((NI16) 1))];
	first0 = ((((NI) (info0.col)) <= (line0 ? line0->Sup.len : 0)) ? ((NI) (info0.col)) : (line0 ? line0->Sup.len : 0));
	{
		if (!(first0 < ((NI) 0))) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	{
		while (1) {
			NIM_BOOL LOC7;
			LOC7 = (NIM_BOOL)0;
			LOC7 = (((NI) 0) < first0);
			if (!(LOC7)) goto LA8;
			LOC7 = (((NU8)(line0->data[(NI)(first0 - ((NI) 1))])) >= ((NU8)(97)) && ((NU8)(line0->data[(NI)(first0 - ((NI) 1))])) <= ((NU8)(122)) || ((NU8)(line0->data[(NI)(first0 - ((NI) 1))])) >= ((NU8)(65)) && ((NU8)(line0->data[(NI)(first0 - ((NI) 1))])) <= ((NU8)(90)) || ((NU8)(line0->data[(NI)(first0 - ((NI) 1))])) >= ((NU8)(48)) && ((NU8)(line0->data[(NI)(first0 - ((NI) 1))])) <= ((NU8)(57)) || ((NU8)(line0->data[(NI)(first0 - ((NI) 1))])) >= ((NU8)(128)) && ((NU8)(line0->data[(NI)(first0 - ((NI) 1))])) <= ((NU8)(255)) || ((NU8)(line0->data[(NI)(first0 - ((NI) 1))])) == ((NU8)(95)));
			LA8: ;
			if (!LOC7) goto LA6;
			first0 -= ((NI) 1);
		} LA6: ;
	}
	{
		if (!(first0 < ((NI) 0))) goto LA11;
		goto BeforeRet;
	}
	LA11: ;
	{
		if (!((NU8)(line0->data[first0]) == (NU8)(96))) goto LA15;
		first0 += ((NI) 1);
	}
	LA15: ;
	LOC17 = (NI)0;
	LOC17 = identlen_347112_3901077974(line0, first0);
	last0 = (NI)((NI)(first0 + LOC17) - ((NI) 1));
	{
		Slice90651 LOC20;
		NimStringDesc* LOC21;
		NI LOC22;
		NimStringDesc* x0;
		NimStringDesc* LOC25;
		NimStringDesc* LOC26;
		NimStringDesc* LOC27;
		LOC20 = HEX2EHEX2E_109260_1689653243(first0, last0);
		LOC21 = (NimStringDesc*)0;
		LOC21 = HEX5BHEX5D_90644_1689653243(line0, LOC20);
		LOC22 = (NI)0;
		LOC22 = nsuCmpIgnoreStyle(LOC21, (*oldsym0).s);
		if (!(LOC22 == ((NI) 0))) goto LA23;
		LOC25 = (NimStringDesc*)0;
		LOC26 = (NimStringDesc*)0;
		LOC26 = copyStrLast(line0, ((NI) 0), (NI)(first0 - ((NI) 1)));
		LOC27 = (NimStringDesc*)0;
		LOC27 = copyStr(line0, (NI)(last0 + ((NI) 1)));
		LOC25 = rawNewString(LOC26->Sup.len + (*newsym0).s->Sup.len + LOC27->Sup.len + 0);
appendString(LOC25, LOC26);
appendString(LOC25, (*newsym0).s);
appendString(LOC25, LOC27);
		x0 = LOC25;
		asgnRefNoCycle((void**) (&gsourcefiles_347028_3901077974->data[info0.fileindex].lines->data[(NI16)(info0.line - ((NI16) 1))]), x0);
		gsourcefiles_347028_3901077974->data[info0.fileindex].dirty = NIM_TRUE;
	}
	LA23: ;
	}BeforeRet: ;
}

N_NIMCALL(void, replacedeprecated_347208_3901077974)(Tlineinfo193336 info0, Tsym294834* oldsym0, Tsym294834* newsym0) {
	replacedeprecated_347155_3901077974(info0, (*oldsym0).name, (*newsym0).name);
}
NIM_EXTERNC N_NOINLINE(void, compiler_prettybaseInit000)(void) {
nimRegisterGlobalMarker(T3901077974_4);
	if (gsourcefiles_347028_3901077974) nimGCunrefNoCycle(gsourcefiles_347028_3901077974);
	gsourcefiles_347028_3901077974 = (TY347011*) newSeqRC1((&NTI347011), 0);
}

NIM_EXTERNC N_NOINLINE(void, compiler_prettybaseDatInit000)(void) {
static TNimNode* T3901077974_2[6];
static TNimNode T3901077974_0[7];
NTI347003.size = sizeof(Tsourcefile347003);
NTI347003.kind = 18;
NTI347003.base = 0;
NTI347003.flags = 2;
T3901077974_2[0] = &T3901077974_0[1];
T3901077974_0[1].kind = 1;
T3901077974_0[1].offset = offsetof(Tsourcefile347003, lines);
T3901077974_0[1].typ = (&NTI136002);
T3901077974_0[1].name = "lines";
T3901077974_2[1] = &T3901077974_0[2];
T3901077974_0[2].kind = 1;
T3901077974_0[2].offset = offsetof(Tsourcefile347003, dirty);
T3901077974_0[2].typ = (&NTI130);
T3901077974_0[2].name = "dirty";
T3901077974_2[2] = &T3901077974_0[3];
T3901077974_0[3].kind = 1;
T3901077974_0[3].offset = offsetof(Tsourcefile347003, isnimfixfile);
T3901077974_0[3].typ = (&NTI130);
T3901077974_0[3].name = "isNimfixFile";
T3901077974_2[3] = &T3901077974_0[4];
T3901077974_0[4].kind = 1;
T3901077974_0[4].offset = offsetof(Tsourcefile347003, fullpath);
T3901077974_0[4].typ = (&NTI138);
T3901077974_0[4].name = "fullpath";
T3901077974_2[4] = &T3901077974_0[5];
T3901077974_0[5].kind = 1;
T3901077974_0[5].offset = offsetof(Tsourcefile347003, newline);
T3901077974_0[5].typ = (&NTI138);
T3901077974_0[5].name = "newline";
T3901077974_2[5] = &T3901077974_0[6];
T3901077974_0[6].kind = 1;
T3901077974_0[6].offset = offsetof(Tsourcefile347003, fileidx);
T3901077974_0[6].typ = (&NTI110);
T3901077974_0[6].name = "fileIdx";
T3901077974_0[0].len = 6; T3901077974_0[0].kind = 2; T3901077974_0[0].sons = &T3901077974_2[0];
NTI347003.node = &T3901077974_0[0];
NTI347011.size = sizeof(TY347011*);
NTI347011.kind = 24;
NTI347011.base = (&NTI347003);
NTI347011.flags = 2;
NTI347011.marker = T3901077974_3;
}

