/* Generated by Nim Compiler v0.14.3 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
#include <stdio.h>
typedef struct Debuginfo203009 Debuginfo203009;
typedef struct TY203021 TY203021;
typedef struct TY203023 TY203023;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Filenamemapping203005 Filenamemapping203005;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Enumdesc203007 Enumdesc203007;
typedef struct TY203017 TY203017;
typedef struct TY203018 TY203018;
typedef struct Cell47705 Cell47705;
typedef struct Cellseq47721 Cellseq47721;
typedef struct Gcheap50218 Gcheap50218;
typedef struct Gcstack50216 Gcstack50216;
typedef struct Memregion29885 Memregion29885;
typedef struct Smallchunk29839 Smallchunk29839;
typedef struct Llchunk29879 Llchunk29879;
typedef struct Bigchunk29841 Bigchunk29841;
typedef struct Intset29814 Intset29814;
typedef struct Trunk29810 Trunk29810;
typedef struct Avlnode29883 Avlnode29883;
typedef struct Gcstat50214 Gcstat50214;
typedef struct Cellset47717 Cellset47717;
typedef struct Pagedesc47713 Pagedesc47713;
typedef struct Filestreamobj157877 Filestreamobj157877;
typedef struct Streamobj156818 Streamobj156818;
typedef struct Basechunk29837 Basechunk29837;
typedef struct Freecell29829 Freecell29829;
typedef struct TNimObject TNimObject;
struct  Debuginfo203009  {
NI version;
TY203021* files;
TY203023* enums;
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
struct  Filenamemapping203005  {
NimStringDesc* package;
NimStringDesc* file;
NU32 mangled;
};
struct  Enumdesc203007  {
NI size;
NU32 owner;
NI id;
NimStringDesc* name;
TY203017* values;
};
struct TY203018 {
NimStringDesc* Field0;
NI Field1;
};
typedef N_NIMCALL_PTR(void, Globalmarkerproc56202) (void);
struct  Cell47705  {
NI refcount;
TNimType* typ;
};
struct  Cellseq47721  {
NI len;
NI cap;
Cell47705** d;
};
typedef Smallchunk29839* TY29900[512];
typedef Trunk29810* Trunkbuckets29812[256];
struct  Intset29814  {
Trunkbuckets29812 data;
};
struct  Memregion29885  {
NI minlargeobj;
NI maxlargeobj;
TY29900 freesmallchunks;
Llchunk29879* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk29841* freechunkslist;
Intset29814 chunkstarts;
Avlnode29883* root;
Avlnode29883* deleted;
Avlnode29883* last;
Avlnode29883* freeavlnodes;
NIM_BOOL locked;
};
struct  Gcstat50214  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Cellset47717  {
NI counter;
NI max;
Pagedesc47713* head;
Pagedesc47713** data;
};
struct  Gcheap50218  {
Gcstack50216* stack;
void* stackbottom;
NI cyclethreshold;
Cellseq47721 zct;
Cellseq47721 decstack;
Cellseq47721 tempstack;
NI recgclock;
Memregion29885 region;
Gcstat50214 stat;
Cellset47717 marked;
Cellseq47721 additionalroots;
};
typedef NU8 Filemode13009;
struct  Gcstack50216  {
Gcstack50216* prev;
Gcstack50216* next;
void* starts;
void* pos;
NI maxstacksize;
};
struct  Basechunk29837  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk29839  {
  Basechunk29837 Sup;
Smallchunk29839* next;
Smallchunk29839* prev;
Freecell29829* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk29879  {
NI size;
NI acc;
Llchunk29879* next;
};
struct  Bigchunk29841  {
  Basechunk29837 Sup;
Bigchunk29841* next;
Bigchunk29841* prev;
NI align;
NF data;
};
typedef NI TY29818[16];
struct  Trunk29810  {
Trunk29810* next;
NI key;
TY29818 bits;
};
typedef Avlnode29883* TY29890[2];
struct  Avlnode29883  {
TY29890 link;
NI key;
NI upperbound;
NI level;
};
struct  Pagedesc47713  {
Pagedesc47713* next;
NI key;
TY29818 bits;
};
struct  TNimObject  {
TNimType* m_type;
};
typedef N_NIMCALL_PTR(void, TY156819) (Streamobj156818* s0);
typedef N_NIMCALL_PTR(NIM_BOOL, TY156823) (Streamobj156818* s0);
typedef N_NIMCALL_PTR(void, TY156827) (Streamobj156818* s0, NI pos0);
typedef N_NIMCALL_PTR(NI, TY156832) (Streamobj156818* s0);
typedef N_NIMCALL_PTR(NI, TY156836) (Streamobj156818* s0, void* buffer0, NI buflen0);
typedef N_NIMCALL_PTR(NI, TY156842) (Streamobj156818* s0, void* buffer0, NI buflen0);
typedef N_NIMCALL_PTR(void, TY156848) (Streamobj156818* s0, void* buffer0, NI buflen0);
typedef N_NIMCALL_PTR(void, TY156854) (Streamobj156818* s0);
struct  Streamobj156818  {
  TNimObject Sup;
TY156819 closeimpl;
TY156823 atendimpl;
TY156827 setpositionimpl;
TY156832 getpositionimpl;
TY156836 readdataimpl;
TY156842 peekdataimpl;
TY156848 writedataimpl;
TY156854 flushimpl;
};
struct  Filestreamobj157877  {
  Streamobj156818 Sup;
FILE* f;
};
struct  Freecell29829  {
Freecell29829* next;
NI zerofield;
};
struct TY203021 {
  TGenericSeq Sup;
  Filenamemapping203005 data[SEQ_DECL_SIZE];
};
struct TY203017 {
  TGenericSeq Sup;
  TY203018 data[SEQ_DECL_SIZE];
};
struct TY203023 {
  TGenericSeq Sup;
  Enumdesc203007 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d0, NI op0);
N_NIMCALL(void, T1926258066_4)(void* p, NI op);
N_NIMCALL(void, T1926258066_7)(void* p, NI op);
N_NIMCALL(void, T1926258066_8)(void* p, NI op);
N_NIMCALL(void, T1926258066_9)(void);
N_NIMCALL(void, nimRegisterGlobalMarker)(Globalmarkerproc56202 markerproc0);
N_NIMCALL(void, init_203434_1926258066)(Debuginfo203009* self0);
N_NIMCALL(void*, newSeq)(TNimType* typ0, NI len0);
N_NIMCALL(void, unsureAsgnRef)(void** dest0, void* src0);
N_NIMCALL(NU32, sdbmhash_203077_1926258066)(NimStringDesc* package0, NimStringDesc* file0);
static N_INLINE(NU32, sdbmhash_203026_1926258066)(NU32 hash0, NIM_CHAR c0);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a0, NimStringDesc* b0);
static N_INLINE(NIM_BOOL, equalmem_7495_1689653243)(void* a0, void* b0, NI size0);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src0);
N_NIMCALL(TGenericSeq*, incrSeqV2)(TGenericSeq* seq0, NI elemsize0);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src0);
static N_INLINE(void, nimGCunrefNoCycle)(void* p0);
static N_INLINE(Cell47705*, usrtocell_51840_1689653243)(void* usr0);
static N_INLINE(void, rtladdzct_53001_1689653243)(Cell47705* c0);
N_NOINLINE(void, addzct_51817_1689653243)(Cellseq47721* s0, Cell47705* c0);
N_NIMCALL(void, genericAssign)(void* dest0, void* src0, TNimType* mt0);
N_NIMCALL(void, writedebuginfo_272001_1926258066)(Debuginfo203009* self0, NimStringDesc* file0);
N_NIMCALL(Filestreamobj157877*, newfilestream_157942_1780494535)(NimStringDesc* filename0, Filemode13009 mode0);
N_NIMCALL(void, store_272008_1318663698)(Streamobj156818* s0, Debuginfo203009 data0);
N_NIMCALL(void, close_156873_1780494535)(Streamobj156818* s0);
Debuginfo203009 gdebuginfo_203470_1926258066;
TNimType NTI203009; /* DebugInfo */
extern TNimType NTI104; /* int */
TNimType NTI203005; /* FilenameMapping */
extern TNimType NTI138; /* string */
TNimType NTI203003; /* FilenameHash */
TNimType NTI203021; /* seq[FilenameMapping] */
TNimType NTI203007; /* EnumDesc */
TNimType NTI203018; /* (string, int) */
TNimType NTI203017; /* seq[(string, int)] */
TNimType NTI203023; /* seq[EnumDesc] */
extern TNimType NTI130; /* bool */
extern Gcheap50218 gch_50258_1689653243;
N_NIMCALL(void, T1926258066_4)(void* p, NI op) {
	TY203021* a;
	NI LOC1;
	a = (TY203021*)p;
	LOC1 = (NI)0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].package, op);
	nimGCvisit((void*)a->data[LOC1].file, op);
	}
}
N_NIMCALL(void, T1926258066_7)(void* p, NI op) {
	TY203017* a;
	NI LOC1;
	a = (TY203017*)p;
	LOC1 = (NI)0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Field0, op);
	}
}
N_NIMCALL(void, T1926258066_8)(void* p, NI op) {
	TY203023* a;
	NI LOC1;
	a = (TY203023*)p;
	LOC1 = (NI)0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].name, op);
	nimGCvisit((void*)a->data[LOC1].values, op);
	}
}
N_NIMCALL(void, T1926258066_9)(void) {
	nimGCvisit((void*)gdebuginfo_203470_1926258066.files, 0);
	nimGCvisit((void*)gdebuginfo_203470_1926258066.enums, 0);
}

N_NIMCALL(void, init_203434_1926258066)(Debuginfo203009* self0) {
	(*self0).version = ((NI) 1);
	unsureAsgnRef((void**) (&(*self0).files), (TY203021*) newSeq((&NTI203021), 0));
	unsureAsgnRef((void**) (&(*self0).enums), (TY203023*) newSeq((&NTI203023), 0));
}

static N_INLINE(NU32, sdbmhash_203026_1926258066)(NU32 hash0, NIM_CHAR c0) {
	NU32 result0;
{	result0 = (NU32)0;
	result0 = (NU32)((NU32)((unsigned int)((NU32)((unsigned int)((NU32)(((NU32) (((NU8)(c0))))) + (NU32)((NU32)((NU32)(hash0) << (NU32)(((NI) 6)))))) + (NU32)((NU32)((NU32)(hash0) << (NU32)(((NI) 16)))))) - (NU32)(hash0));
	goto BeforeRet;
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(NU32, sdbmhash_203077_1926258066)(NimStringDesc* package0, NimStringDesc* file0) {
	NU32 result0;
	result0 = (NU32)0;
	result0 = ((NU32) 0);
	{
		NI i_203098_1926258066;
		NI HEX3Atmp_203110_1926258066;
		NI i_203113_1926258066;
		i_203098_1926258066 = (NI)0;
		HEX3Atmp_203110_1926258066 = (NI)0;
		HEX3Atmp_203110_1926258066 = (package0 ? package0->Sup.len : 0);
		i_203113_1926258066 = ((NI) 0);
		{
			while (1) {
				if (!(i_203113_1926258066 < HEX3Atmp_203110_1926258066)) goto LA3;
				i_203098_1926258066 = i_203113_1926258066;
				result0 = sdbmhash_203026_1926258066(result0, package0->data[i_203098_1926258066]);
				i_203113_1926258066 += ((NI) 1);
			} LA3: ;
		}
	}
	result0 = sdbmhash_203026_1926258066(result0, 46);
	{
		NI i_203108_1926258066;
		NI HEX3Atmp_203116_1926258066;
		NI i_203119_1926258066;
		i_203108_1926258066 = (NI)0;
		HEX3Atmp_203116_1926258066 = (NI)0;
		HEX3Atmp_203116_1926258066 = (file0 ? file0->Sup.len : 0);
		i_203119_1926258066 = ((NI) 0);
		{
			while (1) {
				if (!(i_203119_1926258066 < HEX3Atmp_203116_1926258066)) goto LA6;
				i_203108_1926258066 = i_203119_1926258066;
				result0 = sdbmhash_203026_1926258066(result0, file0->data[i_203108_1926258066]);
				i_203119_1926258066 += ((NI) 1);
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

static N_INLINE(Cell47705*, usrtocell_51840_1689653243)(void* usr0) {
	Cell47705* result0;
	result0 = (Cell47705*)0;
	result0 = ((Cell47705*) ((NI)((NU32)(((NI) (usr0))) - (NU32)(((NI)sizeof(Cell47705))))));
	return result0;
}

static N_INLINE(void, rtladdzct_53001_1689653243)(Cell47705* c0) {
	addzct_51817_1689653243((&gch_50258_1689653243.zct), c0);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p0) {
	Cell47705* c0;
	c0 = usrtocell_51840_1689653243(p0);
	{
		(*c0).refcount -= ((NI) 8);
		if (!((NU32)((*c0).refcount) < (NU32)(((NI) 8)))) goto LA3;
		rtladdzct_53001_1689653243(c0);
	}
	LA3: ;
}

N_NIMCALL(NU32, register_203121_1926258066)(Debuginfo203009* self0, NimStringDesc* package0, NimStringDesc* file0) {
	NU32 result0;
	Filenamemapping203005 LOC14;
	NimStringDesc* LOC15;
	NimStringDesc* LOC16;
{	result0 = (NU32)0;
	result0 = sdbmhash_203077_1926258066(package0, file0);
	{
		Filenamemapping203005 f_203202_1926258066;
		TY203021* HEX3Atmp_203223_1926258066;
		NI i_203226_1926258066;
		NI L_203228_1926258066;
		memset((void*)(&f_203202_1926258066), 0, sizeof(f_203202_1926258066));
		HEX3Atmp_203223_1926258066 = (TY203021*)0;
		HEX3Atmp_203223_1926258066 = (*self0).files;
		i_203226_1926258066 = ((NI) 0);
		L_203228_1926258066 = (HEX3Atmp_203223_1926258066 ? HEX3Atmp_203223_1926258066->Sup.len : 0);
		{
			while (1) {
				if (!(i_203226_1926258066 < L_203228_1926258066)) goto LA3;
				f_203202_1926258066.package = HEX3Atmp_203223_1926258066->data[i_203226_1926258066].package;
				f_203202_1926258066.file = HEX3Atmp_203223_1926258066->data[i_203226_1926258066].file;
				f_203202_1926258066.mangled = HEX3Atmp_203223_1926258066->data[i_203226_1926258066].mangled;
				{
					if (!(f_203202_1926258066.mangled == result0)) goto LA6;
					{
						NIM_BOOL LOC10;
						LOC10 = (NIM_BOOL)0;
						LOC10 = eqStrings(f_203202_1926258066.package, package0);
						if (!(LOC10)) goto LA11;
						LOC10 = eqStrings(f_203202_1926258066.file, file0);
						LA11: ;
						if (!LOC10) goto LA12;
						goto BeforeRet;
					}
					LA12: ;
					(*self0).conflicts = NIM_TRUE;
					goto LA1;
				}
				LA6: ;
				i_203226_1926258066 += ((NI) 1);
			} LA3: ;
		}
	} LA1: ;
	memset((void*)(&LOC14), 0, sizeof(LOC14));
	memset((void*)(&LOC14), 0, sizeof(LOC14));
	LOC14.package = copyString(package0);
	LOC14.file = copyString(file0);
	LOC14.mangled = result0;
	(*self0).files = (TY203021*) incrSeqV2(&((*self0).files)->Sup, sizeof(Filenamemapping203005));
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

N_NIMCALL(NIM_BOOL, hasenum_203230_1926258066)(Debuginfo203009 self0, NimStringDesc* ename0, NI id0, NU32 owner0) {
	NIM_BOOL result0;
{	result0 = (NIM_BOOL)0;
	{
		Enumdesc203007 en_203402_1926258066;
		TY203023* HEX3Atmp_203413_1926258066;
		NI i_203416_1926258066;
		NI L_203418_1926258066;
		memset((void*)(&en_203402_1926258066), 0, sizeof(en_203402_1926258066));
		HEX3Atmp_203413_1926258066 = (TY203023*)0;
		HEX3Atmp_203413_1926258066 = self0.enums;
		i_203416_1926258066 = ((NI) 0);
		L_203418_1926258066 = (HEX3Atmp_203413_1926258066 ? HEX3Atmp_203413_1926258066->Sup.len : 0);
		{
			while (1) {
				if (!(i_203416_1926258066 < L_203418_1926258066)) goto LA3;
				memcpy((void*)(&en_203402_1926258066), (NIM_CONST void*)(&HEX3Atmp_203413_1926258066->data[i_203416_1926258066]), sizeof(en_203402_1926258066));
				{
					NIM_BOOL LOC6;
					NIM_BOOL LOC7;
					LOC6 = (NIM_BOOL)0;
					LOC7 = (NIM_BOOL)0;
					LOC7 = (en_203402_1926258066.owner == owner0);
					if (!(LOC7)) goto LA8;
					LOC7 = eqStrings(en_203402_1926258066.name, ename0);
					LA8: ;
					LOC6 = LOC7;
					if (!(LOC6)) goto LA9;
					LOC6 = (en_203402_1926258066.id == id0);
					LA9: ;
					if (!LOC6) goto LA10;
					result0 = NIM_TRUE;
					goto BeforeRet;
				}
				LA10: ;
				i_203416_1926258066 += ((NI) 1);
			} LA3: ;
		}
	}
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(void, registerenum_203419_1926258066)(Debuginfo203009* self0, Enumdesc203007* ed0) {
	(*self0).enums = (TY203023*) incrSeqV2(&((*self0).enums)->Sup, sizeof(Enumdesc203007));
	genericAssign((void*)(&(*self0).enums->data[(*self0).enums->Sup.len]), (void*)ed0, (&NTI203007));
	++(*self0).enums->Sup.len;
}

N_NIMCALL(void, writedebuginfo_272001_1926258066)(Debuginfo203009* self0, NimStringDesc* file0) {
	Filestreamobj157877* s0;
	Streamobj156818* LOC1;
	Streamobj156818* LOC2;
	s0 = newfilestream_157942_1780494535(file0, ((Filemode13009) 1));
	LOC1 = (Streamobj156818*)0;
	LOC1 = &s0->Sup;
	store_272008_1318663698(LOC1, (*self0));
	LOC2 = (Streamobj156818*)0;
	LOC2 = &s0->Sup;
	close_156873_1780494535(LOC2);
}

N_NIMCALL(void, writedebuginfo_272037_1926258066)(NimStringDesc* file0) {
	writedebuginfo_272001_1926258066((&gdebuginfo_203470_1926258066), file0);
}
NIM_EXTERNC N_NOINLINE(void, compiler_debuginfoInit000)(void) {
nimRegisterGlobalMarker(T1926258066_9);
	init_203434_1926258066((&gdebuginfo_203470_1926258066));
}

NIM_EXTERNC N_NOINLINE(void, compiler_debuginfoDatInit000)(void) {
static TNimNode* T1926258066_2[4];
static TNimNode* T1926258066_3[3];
static TNimNode* T1926258066_5[5];
static TNimNode* T1926258066_6[2];
static TNimNode T1926258066_0[18];
NTI203009.size = sizeof(Debuginfo203009);
NTI203009.kind = 18;
NTI203009.base = 0;
NTI203009.flags = 2;
T1926258066_2[0] = &T1926258066_0[1];
T1926258066_0[1].kind = 1;
T1926258066_0[1].offset = offsetof(Debuginfo203009, version);
T1926258066_0[1].typ = (&NTI104);
T1926258066_0[1].name = "version";
T1926258066_2[1] = &T1926258066_0[2];
NTI203005.size = sizeof(Filenamemapping203005);
NTI203005.kind = 18;
NTI203005.base = 0;
NTI203005.flags = 2;
T1926258066_3[0] = &T1926258066_0[4];
T1926258066_0[4].kind = 1;
T1926258066_0[4].offset = offsetof(Filenamemapping203005, package);
T1926258066_0[4].typ = (&NTI138);
T1926258066_0[4].name = "package";
T1926258066_3[1] = &T1926258066_0[5];
T1926258066_0[5].kind = 1;
T1926258066_0[5].offset = offsetof(Filenamemapping203005, file);
T1926258066_0[5].typ = (&NTI138);
T1926258066_0[5].name = "file";
T1926258066_3[2] = &T1926258066_0[6];
NTI203003.size = sizeof(NU32);
NTI203003.kind = 43;
NTI203003.base = 0;
NTI203003.flags = 3;
T1926258066_0[6].kind = 1;
T1926258066_0[6].offset = offsetof(Filenamemapping203005, mangled);
T1926258066_0[6].typ = (&NTI203003);
T1926258066_0[6].name = "mangled";
T1926258066_0[3].len = 3; T1926258066_0[3].kind = 2; T1926258066_0[3].sons = &T1926258066_3[0];
NTI203005.node = &T1926258066_0[3];
NTI203021.size = sizeof(TY203021*);
NTI203021.kind = 24;
NTI203021.base = (&NTI203005);
NTI203021.flags = 2;
NTI203021.marker = T1926258066_4;
T1926258066_0[2].kind = 1;
T1926258066_0[2].offset = offsetof(Debuginfo203009, files);
T1926258066_0[2].typ = (&NTI203021);
T1926258066_0[2].name = "files";
T1926258066_2[2] = &T1926258066_0[7];
NTI203007.size = sizeof(Enumdesc203007);
NTI203007.kind = 18;
NTI203007.base = 0;
NTI203007.flags = 2;
T1926258066_5[0] = &T1926258066_0[9];
T1926258066_0[9].kind = 1;
T1926258066_0[9].offset = offsetof(Enumdesc203007, size);
T1926258066_0[9].typ = (&NTI104);
T1926258066_0[9].name = "size";
T1926258066_5[1] = &T1926258066_0[10];
T1926258066_0[10].kind = 1;
T1926258066_0[10].offset = offsetof(Enumdesc203007, owner);
T1926258066_0[10].typ = (&NTI203003);
T1926258066_0[10].name = "owner";
T1926258066_5[2] = &T1926258066_0[11];
T1926258066_0[11].kind = 1;
T1926258066_0[11].offset = offsetof(Enumdesc203007, id);
T1926258066_0[11].typ = (&NTI104);
T1926258066_0[11].name = "id";
T1926258066_5[3] = &T1926258066_0[12];
T1926258066_0[12].kind = 1;
T1926258066_0[12].offset = offsetof(Enumdesc203007, name);
T1926258066_0[12].typ = (&NTI138);
T1926258066_0[12].name = "name";
T1926258066_5[4] = &T1926258066_0[13];
NTI203018.size = sizeof(TY203018);
NTI203018.kind = 18;
NTI203018.base = 0;
NTI203018.flags = 2;
T1926258066_6[0] = &T1926258066_0[15];
T1926258066_0[15].kind = 1;
T1926258066_0[15].offset = offsetof(TY203018, Field0);
T1926258066_0[15].typ = (&NTI138);
T1926258066_0[15].name = "Field0";
T1926258066_6[1] = &T1926258066_0[16];
T1926258066_0[16].kind = 1;
T1926258066_0[16].offset = offsetof(TY203018, Field1);
T1926258066_0[16].typ = (&NTI104);
T1926258066_0[16].name = "Field1";
T1926258066_0[14].len = 2; T1926258066_0[14].kind = 2; T1926258066_0[14].sons = &T1926258066_6[0];
NTI203018.node = &T1926258066_0[14];
NTI203017.size = sizeof(TY203017*);
NTI203017.kind = 24;
NTI203017.base = (&NTI203018);
NTI203017.flags = 2;
NTI203017.marker = T1926258066_7;
T1926258066_0[13].kind = 1;
T1926258066_0[13].offset = offsetof(Enumdesc203007, values);
T1926258066_0[13].typ = (&NTI203017);
T1926258066_0[13].name = "values";
T1926258066_0[8].len = 5; T1926258066_0[8].kind = 2; T1926258066_0[8].sons = &T1926258066_5[0];
NTI203007.node = &T1926258066_0[8];
NTI203023.size = sizeof(TY203023*);
NTI203023.kind = 24;
NTI203023.base = (&NTI203007);
NTI203023.flags = 2;
NTI203023.marker = T1926258066_8;
T1926258066_0[7].kind = 1;
T1926258066_0[7].offset = offsetof(Debuginfo203009, enums);
T1926258066_0[7].typ = (&NTI203023);
T1926258066_0[7].name = "enums";
T1926258066_2[3] = &T1926258066_0[17];
T1926258066_0[17].kind = 1;
T1926258066_0[17].offset = offsetof(Debuginfo203009, conflicts);
T1926258066_0[17].typ = (&NTI130);
T1926258066_0[17].name = "conflicts";
T1926258066_0[0].len = 4; T1926258066_0[0].kind = 2; T1926258066_0[0].sons = &T1926258066_2[0];
NTI203009.node = &T1926258066_0[0];
}

