/* Generated by Nim Compiler v0.14.3 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
#include <stdio.h>
typedef struct Debuginfo205009 Debuginfo205009;
typedef struct TY205021 TY205021;
typedef struct TY205023 TY205023;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Filenamemapping205005 Filenamemapping205005;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Enumdesc205007 Enumdesc205007;
typedef struct TY205017 TY205017;
typedef struct TY205018 TY205018;
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
typedef struct Filestreamobj158877 Filestreamobj158877;
typedef struct Streamobj157818 Streamobj157818;
typedef struct Basechunk29437 Basechunk29437;
typedef struct Freecell29429 Freecell29429;
typedef struct TNimObject TNimObject;
struct  Debuginfo205009  {
NI version;
TY205021* files;
TY205023* enums;
NIM_BOOL conflicts;
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
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Filenamemapping205005  {
NimStringDesc* package;
NimStringDesc* file;
NU32 mangled;
};
struct  Enumdesc205007  {
NI size;
NU32 owner;
NI id;
NimStringDesc* name;
TY205017* values;
};
struct TY205018 {
NimStringDesc* Field0;
NI Field1;
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
typedef NU8 Filemode13009;
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
struct  TNimObject  {
TNimType* m_type;
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
struct  Freecell29429  {
Freecell29429* next;
NI zerofield;
};
struct TY205021 {
  TGenericSeq Sup;
  Filenamemapping205005 data[SEQ_DECL_SIZE];
};
struct TY205017 {
  TGenericSeq Sup;
  TY205018 data[SEQ_DECL_SIZE];
};
struct TY205023 {
  TGenericSeq Sup;
  Enumdesc205007 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d0, NI op0);
N_NIMCALL(void, T1926258066_4)(void* p, NI op);
N_NIMCALL(void, T1926258066_7)(void* p, NI op);
N_NIMCALL(void, T1926258066_8)(void* p, NI op);
N_NIMCALL(void, T1926258066_9)(void);
N_NIMCALL(void, nimRegisterGlobalMarker)(Globalmarkerproc55802 markerproc0);
N_NIMCALL(void, init_205434_1926258066)(Debuginfo205009* self0);
N_NIMCALL(void*, newSeq)(TNimType* typ0, NI len0);
N_NIMCALL(void, unsureAsgnRef)(void** dest0, void* src0);
N_NIMCALL(NU32, sdbmhash_205077_1926258066)(NimStringDesc* package0, NimStringDesc* file0);
static N_INLINE(NU32, sdbmhash_205026_1926258066)(NU32 hash0, NIM_CHAR c0);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a0, NimStringDesc* b0);
static N_INLINE(NIM_BOOL, equalmem_7495_1689653243)(void* a0, void* b0, NI size0);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src0);
N_NIMCALL(TGenericSeq*, incrSeqV2)(TGenericSeq* seq0, NI elemsize0);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src0);
static N_INLINE(void, nimGCunrefNoCycle)(void* p0);
static N_INLINE(Cell47304*, usrtocell_51440_1689653243)(void* usr0);
static N_INLINE(void, rtladdzct_52601_1689653243)(Cell47304* c0);
N_NOINLINE(void, addzct_51417_1689653243)(Cellseq47320* s0, Cell47304* c0);
N_NIMCALL(void, genericAssign)(void* dest0, void* src0, TNimType* mt0);
N_NIMCALL(void, writedebuginfo_274001_1926258066)(Debuginfo205009* self0, NimStringDesc* file0);
N_NIMCALL(Filestreamobj158877*, newfilestream_158942_1780494535)(NimStringDesc* filename0, Filemode13009 mode0);
N_NIMCALL(void, store_274008_1318663698)(Streamobj157818* s0, Debuginfo205009 data0);
N_NIMCALL(void, close_157873_1780494535)(Streamobj157818* s0);
Debuginfo205009 gdebuginfo_205470_1926258066;
TNimType NTI205009; /* DebugInfo */
extern TNimType NTI104; /* int */
TNimType NTI205005; /* FilenameMapping */
extern TNimType NTI138; /* string */
TNimType NTI205003; /* FilenameHash */
TNimType NTI205021; /* seq[FilenameMapping] */
TNimType NTI205007; /* EnumDesc */
TNimType NTI205018; /* (string, int) */
TNimType NTI205017; /* seq[(string, int)] */
TNimType NTI205023; /* seq[EnumDesc] */
extern TNimType NTI130; /* bool */
extern Gcheap49818 gch_49858_1689653243;
N_NIMCALL(void, T1926258066_4)(void* p, NI op) {
	TY205021* a;
	NI LOC1;
	a = (TY205021*)p;
	LOC1 = (NI)0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].package, op);
	nimGCvisit((void*)a->data[LOC1].file, op);
	}
}
N_NIMCALL(void, T1926258066_7)(void* p, NI op) {
	TY205017* a;
	NI LOC1;
	a = (TY205017*)p;
	LOC1 = (NI)0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Field0, op);
	}
}
N_NIMCALL(void, T1926258066_8)(void* p, NI op) {
	TY205023* a;
	NI LOC1;
	a = (TY205023*)p;
	LOC1 = (NI)0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].name, op);
	nimGCvisit((void*)a->data[LOC1].values, op);
	}
}
N_NIMCALL(void, T1926258066_9)(void) {
	nimGCvisit((void*)gdebuginfo_205470_1926258066.files, 0);
	nimGCvisit((void*)gdebuginfo_205470_1926258066.enums, 0);
}

N_NIMCALL(void, init_205434_1926258066)(Debuginfo205009* self0) {
	(*self0).version = ((NI) 1);
	unsureAsgnRef((void**) (&(*self0).files), (TY205021*) newSeq((&NTI205021), 0));
	unsureAsgnRef((void**) (&(*self0).enums), (TY205023*) newSeq((&NTI205023), 0));
}

static N_INLINE(NU32, sdbmhash_205026_1926258066)(NU32 hash0, NIM_CHAR c0) {
	NU32 result0;
{	result0 = (NU32)0;
	result0 = (NU32)((NU32)((unsigned int)((NU32)((unsigned int)((NU32)(((NU32) (((NU8)(c0))))) + (NU32)((NU32)((NU32)(hash0) << (NU32)(((NI) 6)))))) + (NU32)((NU32)((NU32)(hash0) << (NU32)(((NI) 16)))))) - (NU32)(hash0));
	goto BeforeRet;
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(NU32, sdbmhash_205077_1926258066)(NimStringDesc* package0, NimStringDesc* file0) {
	NU32 result0;
	result0 = (NU32)0;
	result0 = ((NU32) 0);
	{
		NI i_205098_1926258066;
		NI HEX3Atmp_205110_1926258066;
		NI i_205113_1926258066;
		i_205098_1926258066 = (NI)0;
		HEX3Atmp_205110_1926258066 = (NI)0;
		HEX3Atmp_205110_1926258066 = (package0 ? package0->Sup.len : 0);
		i_205113_1926258066 = ((NI) 0);
		{
			while (1) {
				if (!(i_205113_1926258066 < HEX3Atmp_205110_1926258066)) goto LA3;
				i_205098_1926258066 = i_205113_1926258066;
				result0 = sdbmhash_205026_1926258066(result0, package0->data[i_205098_1926258066]);
				i_205113_1926258066 += ((NI) 1);
			} LA3: ;
		}
	}
	result0 = sdbmhash_205026_1926258066(result0, 46);
	{
		NI i_205108_1926258066;
		NI HEX3Atmp_205116_1926258066;
		NI i_205119_1926258066;
		i_205108_1926258066 = (NI)0;
		HEX3Atmp_205116_1926258066 = (NI)0;
		HEX3Atmp_205116_1926258066 = (file0 ? file0->Sup.len : 0);
		i_205119_1926258066 = ((NI) 0);
		{
			while (1) {
				if (!(i_205119_1926258066 < HEX3Atmp_205116_1926258066)) goto LA6;
				i_205108_1926258066 = i_205119_1926258066;
				result0 = sdbmhash_205026_1926258066(result0, file0->data[i_205108_1926258066]);
				i_205119_1926258066 += ((NI) 1);
			} LA6: ;
		}
	}
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

static N_INLINE(Cell47304*, usrtocell_51440_1689653243)(void* usr0) {
	Cell47304* result0;
	result0 = (Cell47304*)0;
	result0 = ((Cell47304*) ((NI)((NU32)(((NI) (usr0))) - (NU32)(((NI)sizeof(Cell47304))))));
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
		if (!((NU32)((*c0).refcount) < (NU32)(((NI) 8)))) goto LA3;
		rtladdzct_52601_1689653243(c0);
	}
	LA3: ;
}

N_NIMCALL(NU32, register_205121_1926258066)(Debuginfo205009* self0, NimStringDesc* package0, NimStringDesc* file0) {
	NU32 result0;
	Filenamemapping205005 LOC14;
	NimStringDesc* LOC15;
	NimStringDesc* LOC16;
{	result0 = (NU32)0;
	result0 = sdbmhash_205077_1926258066(package0, file0);
	{
		Filenamemapping205005 f_205202_1926258066;
		TY205021* HEX3Atmp_205223_1926258066;
		NI i_205226_1926258066;
		NI L_205228_1926258066;
		memset((void*)(&f_205202_1926258066), 0, sizeof(f_205202_1926258066));
		HEX3Atmp_205223_1926258066 = (TY205021*)0;
		HEX3Atmp_205223_1926258066 = (*self0).files;
		i_205226_1926258066 = ((NI) 0);
		L_205228_1926258066 = (HEX3Atmp_205223_1926258066 ? HEX3Atmp_205223_1926258066->Sup.len : 0);
		{
			while (1) {
				if (!(i_205226_1926258066 < L_205228_1926258066)) goto LA3;
				f_205202_1926258066.package = HEX3Atmp_205223_1926258066->data[i_205226_1926258066].package;
				f_205202_1926258066.file = HEX3Atmp_205223_1926258066->data[i_205226_1926258066].file;
				f_205202_1926258066.mangled = HEX3Atmp_205223_1926258066->data[i_205226_1926258066].mangled;
				{
					if (!(f_205202_1926258066.mangled == result0)) goto LA6;
					{
						NIM_BOOL LOC10;
						LOC10 = (NIM_BOOL)0;
						LOC10 = eqStrings(f_205202_1926258066.package, package0);
						if (!(LOC10)) goto LA11;
						LOC10 = eqStrings(f_205202_1926258066.file, file0);
						LA11: ;
						if (!LOC10) goto LA12;
						goto BeforeRet;
					}
					LA12: ;
					(*self0).conflicts = NIM_TRUE;
					goto LA1;
				}
				LA6: ;
				i_205226_1926258066 += ((NI) 1);
			} LA3: ;
		}
	} LA1: ;
	memset((void*)(&LOC14), 0, sizeof(LOC14));
	memset((void*)(&LOC14), 0, sizeof(LOC14));
	LOC14.package = copyString(package0);
	LOC14.file = copyString(file0);
	LOC14.mangled = result0;
	(*self0).files = (TY205021*) incrSeqV2(&((*self0).files)->Sup, sizeof(Filenamemapping205005));
	LOC15 = (NimStringDesc*)0;
	LOC15 = (*self0).files->data[(*self0).files->Sup.len].package; (*self0).files->data[(*self0).files->Sup.len].package = copyStringRC1(LOC14.package);
	if (LOC15) nimGCunrefNoCycle(LOC15);
	LOC16 = (NimStringDesc*)0;
	LOC16 = (*self0).files->data[(*self0).files->Sup.len].file; (*self0).files->data[(*self0).files->Sup.len].file = copyStringRC1(LOC14.file);
	if (LOC16) nimGCunrefNoCycle(LOC16);
	(*self0).files->data[(*self0).files->Sup.len].mangled = LOC14.mangled;
	++(*self0).files->Sup.len;
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(NIM_BOOL, hasenum_205230_1926258066)(Debuginfo205009 self0, NimStringDesc* ename0, NI id0, NU32 owner0) {
	NIM_BOOL result0;
{	result0 = (NIM_BOOL)0;
	{
		Enumdesc205007 en_205402_1926258066;
		TY205023* HEX3Atmp_205413_1926258066;
		NI i_205416_1926258066;
		NI L_205418_1926258066;
		memset((void*)(&en_205402_1926258066), 0, sizeof(en_205402_1926258066));
		HEX3Atmp_205413_1926258066 = (TY205023*)0;
		HEX3Atmp_205413_1926258066 = self0.enums;
		i_205416_1926258066 = ((NI) 0);
		L_205418_1926258066 = (HEX3Atmp_205413_1926258066 ? HEX3Atmp_205413_1926258066->Sup.len : 0);
		{
			while (1) {
				if (!(i_205416_1926258066 < L_205418_1926258066)) goto LA3;
				memcpy((void*)(&en_205402_1926258066), (NIM_CONST void*)(&HEX3Atmp_205413_1926258066->data[i_205416_1926258066]), sizeof(en_205402_1926258066));
				{
					NIM_BOOL LOC6;
					NIM_BOOL LOC7;
					LOC6 = (NIM_BOOL)0;
					LOC7 = (NIM_BOOL)0;
					LOC7 = (en_205402_1926258066.owner == owner0);
					if (!(LOC7)) goto LA8;
					LOC7 = eqStrings(en_205402_1926258066.name, ename0);
					LA8: ;
					LOC6 = LOC7;
					if (!(LOC6)) goto LA9;
					LOC6 = (en_205402_1926258066.id == id0);
					LA9: ;
					if (!LOC6) goto LA10;
					result0 = NIM_TRUE;
					goto BeforeRet;
				}
				LA10: ;
				i_205416_1926258066 += ((NI) 1);
			} LA3: ;
		}
	}
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(void, registerenum_205419_1926258066)(Debuginfo205009* self0, Enumdesc205007* ed0) {
	(*self0).enums = (TY205023*) incrSeqV2(&((*self0).enums)->Sup, sizeof(Enumdesc205007));
	genericAssign((void*)(&(*self0).enums->data[(*self0).enums->Sup.len]), (void*)ed0, (&NTI205007));
	++(*self0).enums->Sup.len;
}

N_NIMCALL(void, writedebuginfo_274001_1926258066)(Debuginfo205009* self0, NimStringDesc* file0) {
	Filestreamobj158877* s0;
	Streamobj157818* LOC1;
	Streamobj157818* LOC2;
	s0 = newfilestream_158942_1780494535(file0, ((Filemode13009) 1));
	LOC1 = (Streamobj157818*)0;
	LOC1 = &s0->Sup;
	store_274008_1318663698(LOC1, (*self0));
	LOC2 = (Streamobj157818*)0;
	LOC2 = &s0->Sup;
	close_157873_1780494535(LOC2);
}

N_NIMCALL(void, writedebuginfo_274037_1926258066)(NimStringDesc* file0) {
	writedebuginfo_274001_1926258066((&gdebuginfo_205470_1926258066), file0);
}
NIM_EXTERNC N_NOINLINE(void, compiler_debuginfoInit000)(void) {
nimRegisterGlobalMarker(T1926258066_9);
	init_205434_1926258066((&gdebuginfo_205470_1926258066));
}

NIM_EXTERNC N_NOINLINE(void, compiler_debuginfoDatInit000)(void) {
static TNimNode* T1926258066_2[4];
static TNimNode* T1926258066_3[3];
static TNimNode* T1926258066_5[5];
static TNimNode* T1926258066_6[2];
static TNimNode T1926258066_0[18];
NTI205009.size = sizeof(Debuginfo205009);
NTI205009.kind = 18;
NTI205009.base = 0;
NTI205009.flags = 2;
T1926258066_2[0] = &T1926258066_0[1];
T1926258066_0[1].kind = 1;
T1926258066_0[1].offset = offsetof(Debuginfo205009, version);
T1926258066_0[1].typ = (&NTI104);
T1926258066_0[1].name = "version";
T1926258066_2[1] = &T1926258066_0[2];
NTI205005.size = sizeof(Filenamemapping205005);
NTI205005.kind = 18;
NTI205005.base = 0;
NTI205005.flags = 2;
T1926258066_3[0] = &T1926258066_0[4];
T1926258066_0[4].kind = 1;
T1926258066_0[4].offset = offsetof(Filenamemapping205005, package);
T1926258066_0[4].typ = (&NTI138);
T1926258066_0[4].name = "package";
T1926258066_3[1] = &T1926258066_0[5];
T1926258066_0[5].kind = 1;
T1926258066_0[5].offset = offsetof(Filenamemapping205005, file);
T1926258066_0[5].typ = (&NTI138);
T1926258066_0[5].name = "file";
T1926258066_3[2] = &T1926258066_0[6];
NTI205003.size = sizeof(NU32);
NTI205003.kind = 43;
NTI205003.base = 0;
NTI205003.flags = 3;
T1926258066_0[6].kind = 1;
T1926258066_0[6].offset = offsetof(Filenamemapping205005, mangled);
T1926258066_0[6].typ = (&NTI205003);
T1926258066_0[6].name = "mangled";
T1926258066_0[3].len = 3; T1926258066_0[3].kind = 2; T1926258066_0[3].sons = &T1926258066_3[0];
NTI205005.node = &T1926258066_0[3];
NTI205021.size = sizeof(TY205021*);
NTI205021.kind = 24;
NTI205021.base = (&NTI205005);
NTI205021.flags = 2;
NTI205021.marker = T1926258066_4;
T1926258066_0[2].kind = 1;
T1926258066_0[2].offset = offsetof(Debuginfo205009, files);
T1926258066_0[2].typ = (&NTI205021);
T1926258066_0[2].name = "files";
T1926258066_2[2] = &T1926258066_0[7];
NTI205007.size = sizeof(Enumdesc205007);
NTI205007.kind = 18;
NTI205007.base = 0;
NTI205007.flags = 2;
T1926258066_5[0] = &T1926258066_0[9];
T1926258066_0[9].kind = 1;
T1926258066_0[9].offset = offsetof(Enumdesc205007, size);
T1926258066_0[9].typ = (&NTI104);
T1926258066_0[9].name = "size";
T1926258066_5[1] = &T1926258066_0[10];
T1926258066_0[10].kind = 1;
T1926258066_0[10].offset = offsetof(Enumdesc205007, owner);
T1926258066_0[10].typ = (&NTI205003);
T1926258066_0[10].name = "owner";
T1926258066_5[2] = &T1926258066_0[11];
T1926258066_0[11].kind = 1;
T1926258066_0[11].offset = offsetof(Enumdesc205007, id);
T1926258066_0[11].typ = (&NTI104);
T1926258066_0[11].name = "id";
T1926258066_5[3] = &T1926258066_0[12];
T1926258066_0[12].kind = 1;
T1926258066_0[12].offset = offsetof(Enumdesc205007, name);
T1926258066_0[12].typ = (&NTI138);
T1926258066_0[12].name = "name";
T1926258066_5[4] = &T1926258066_0[13];
NTI205018.size = sizeof(TY205018);
NTI205018.kind = 18;
NTI205018.base = 0;
NTI205018.flags = 2;
T1926258066_6[0] = &T1926258066_0[15];
T1926258066_0[15].kind = 1;
T1926258066_0[15].offset = offsetof(TY205018, Field0);
T1926258066_0[15].typ = (&NTI138);
T1926258066_0[15].name = "Field0";
T1926258066_6[1] = &T1926258066_0[16];
T1926258066_0[16].kind = 1;
T1926258066_0[16].offset = offsetof(TY205018, Field1);
T1926258066_0[16].typ = (&NTI104);
T1926258066_0[16].name = "Field1";
T1926258066_0[14].len = 2; T1926258066_0[14].kind = 2; T1926258066_0[14].sons = &T1926258066_6[0];
NTI205018.node = &T1926258066_0[14];
NTI205017.size = sizeof(TY205017*);
NTI205017.kind = 24;
NTI205017.base = (&NTI205018);
NTI205017.flags = 2;
NTI205017.marker = T1926258066_7;
T1926258066_0[13].kind = 1;
T1926258066_0[13].offset = offsetof(Enumdesc205007, values);
T1926258066_0[13].typ = (&NTI205017);
T1926258066_0[13].name = "values";
T1926258066_0[8].len = 5; T1926258066_0[8].kind = 2; T1926258066_0[8].sons = &T1926258066_5[0];
NTI205007.node = &T1926258066_0[8];
NTI205023.size = sizeof(TY205023*);
NTI205023.kind = 24;
NTI205023.base = (&NTI205007);
NTI205023.flags = 2;
NTI205023.marker = T1926258066_8;
T1926258066_0[7].kind = 1;
T1926258066_0[7].offset = offsetof(Debuginfo205009, enums);
T1926258066_0[7].typ = (&NTI205023);
T1926258066_0[7].name = "enums";
T1926258066_2[3] = &T1926258066_0[17];
T1926258066_0[17].kind = 1;
T1926258066_0[17].offset = offsetof(Debuginfo205009, conflicts);
T1926258066_0[17].typ = (&NTI130);
T1926258066_0[17].name = "conflicts";
T1926258066_0[0].len = 4; T1926258066_0[0].kind = 2; T1926258066_0[0].sons = &T1926258066_2[0];
NTI205009.node = &T1926258066_0[0];
}

