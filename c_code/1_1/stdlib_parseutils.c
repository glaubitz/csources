/* Generated by Nim Compiler v0.14.3 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Overflowerror3640 Overflowerror3640;
typedef struct Arithmeticerror3636 Arithmeticerror3636;
typedef struct Exception Exception;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
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
typedef struct Basechunk29037 Basechunk29037;
typedef struct Freecell29029 Freecell29029;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
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
struct  Exception  {
  TNimObject Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
NimStringDesc* trace;
};
struct  Arithmeticerror3636  {
  Exception Sup;
};
struct  Overflowerror3640  {
  Arithmeticerror3636 Sup;
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
struct  Freecell29029  {
Freecell29029* next;
NI zerofield;
};
N_NIMCALL(NI, nimParseBiggestFloat)(NimStringDesc* s0, NF* number0, NI start0);
N_NIMCALL(NI, nimParseBiggestFloat)(NimStringDesc* s0, NF* number0, NI start0);
N_NIMCALL(NI, rawparseint_97757_1912046442)(NimStringDesc* s0, NI64* b0, NI start0);
static N_INLINE(NI, addInt)(NI a0, NI b0);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(NI64, mulInt64)(NI64 a0, NI64 b0);
static N_INLINE(NI, subInt)(NI a0, NI b0);
static N_INLINE(NI64, subInt64)(NI64 a0, NI64 b0);
N_NIMCALL(NI, npuParseBiggestInt)(NimStringDesc* s0, NI64* number0, NI start0);
N_NIMCALL(void*, newObj)(TNimType* typ0, NI size0);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src0);
static N_INLINE(void, nimGCunrefNoCycle)(void* p0);
static N_INLINE(Cell46904*, usrtocell_51040_1689653243)(void* usr0);
static N_INLINE(void, rtladdzct_52201_1689653243)(Cell46904* c0);
N_NOINLINE(void, addzct_51017_1689653243)(Cellseq46920* s0, Cell46904* c0);
N_NIMCALL(void, raiseException)(Exception* e0, NCSTRING ename0);
STRING_LITERAL(T1912046442_11, "overflow", 8);
extern TNimType NTI23271; /* ref OverflowError */
extern TNimType NTI3640; /* OverflowError */
extern Gcheap49418 gch_49458_1689653243;

N_NIMCALL(NI, npuParseFloat)(NimStringDesc* s0, NF* number0, NI start0) {
	NI result0;
	NF bf0;
	result0 = (NI)0;
	bf0 = (NF)0;
	result0 = nimParseBiggestFloat(s0, (&bf0), start0);
	{
		if (!!((result0 == ((NI) 0)))) goto LA3;
		(*number0) = bf0;
	}
	LA3: ;
	return result0;
}

static N_INLINE(NI, addInt)(NI a0, NI b0) {
	NI result0;
{	result0 = (NI)0;
	result0 = (NI)((NU32)(a0) + (NU32)(b0));
	{
		NIM_BOOL LOC3;
		LOC3 = (NIM_BOOL)0;
		LOC3 = (((NI) 0) <= (NI)(result0 ^ a0));
		if (LOC3) goto LA4;
		LOC3 = (((NI) 0) <= (NI)(result0 ^ b0));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	raiseOverflow();
	}BeforeRet: ;
	return result0;
}

static N_INLINE(NI, subInt)(NI a0, NI b0) {
	NI result0;
{	result0 = (NI)0;
	result0 = (NI)((NU32)(a0) - (NU32)(b0));
	{
		NIM_BOOL LOC3;
		LOC3 = (NIM_BOOL)0;
		LOC3 = (((NI) 0) <= (NI)(result0 ^ a0));
		if (LOC3) goto LA4;
		LOC3 = (((NI) 0) <= (NI)(result0 ^ (NI)((NU32) ~(b0))));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	raiseOverflow();
	}BeforeRet: ;
	return result0;
}

static N_INLINE(NI64, subInt64)(NI64 a0, NI64 b0) {
	NI64 result0;
{	result0 = (NI64)0;
	result0 = (NI64)((NU64)(a0) - (NU64)(b0));
	{
		NIM_BOOL LOC3;
		LOC3 = (NIM_BOOL)0;
		LOC3 = (IL64(0) <= (NI64)(result0 ^ a0));
		if (LOC3) goto LA4;
		LOC3 = (IL64(0) <= (NI64)(result0 ^ (NI64)((NU64) ~(b0))));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	raiseOverflow();
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(NI, rawparseint_97757_1912046442)(NimStringDesc* s0, NI64* b0, NI start0) {
	NI result0;
	NI64 sign0;
	NI i0;
	result0 = (NI)0;
	sign0 = IL64(-1);
	i0 = start0;
	{
		NI T1912046442_2;
		if (!((NU8)(s0->data[i0]) == (NU8)(43))) goto LA3;
		T1912046442_2 = addInt(i0, ((NI) 1));
		i0 = (NI)(T1912046442_2);
	}
	goto LA1;
	LA3: ;
	{
		NI T1912046442_3;
		if (!((NU8)(s0->data[i0]) == (NU8)(45))) goto LA6;
		T1912046442_3 = addInt(i0, ((NI) 1));
		i0 = (NI)(T1912046442_3);
		sign0 = IL64(1);
	}
	goto LA1;
	LA6: ;
	LA1: ;
	{
		NI64 T1912046442_9;
		NI T1912046442_10;
		if (!(((NU8)(s0->data[i0])) >= ((NU8)(48)) && ((NU8)(s0->data[i0])) <= ((NU8)(57)))) goto LA10;
		(*b0) = IL64(0);
		{
			while (1) {
				NI64 T1912046442_4;
				NI T1912046442_5;
				NI64 T1912046442_6;
				NI T1912046442_7;
				if (!(((NU8)(s0->data[i0])) >= ((NU8)(48)) && ((NU8)(s0->data[i0])) <= ((NU8)(57)))) goto LA13;
				T1912046442_4 = mulInt64((*b0), IL64(10));
				T1912046442_5 = subInt(((NI) (((NU8)(s0->data[i0])))), ((NI) 48));
				T1912046442_6 = subInt64((NI64)(T1912046442_4), ((NI64) ((NI)(T1912046442_5))));
				(*b0) = (NI64)(T1912046442_6);
				T1912046442_7 = addInt(i0, ((NI) 1));
				i0 = (NI)(T1912046442_7);
				{
					while (1) {
						NI T1912046442_8;
						if (!((NU8)(s0->data[i0]) == (NU8)(95))) goto LA15;
						T1912046442_8 = addInt(i0, ((NI) 1));
						i0 = (NI)(T1912046442_8);
					} LA15: ;
				}
			} LA13: ;
		}
		T1912046442_9 = mulInt64((*b0), sign0);
		(*b0) = (NI64)(T1912046442_9);
		T1912046442_10 = subInt(i0, start0);
		result0 = (NI)(T1912046442_10);
	}
	LA10: ;
	return result0;
}

N_NIMCALL(NI, npuParseBiggestInt)(NimStringDesc* s0, NI64* number0, NI start0) {
	NI result0;
	NI64 res0;
	result0 = (NI)0;
	res0 = (NI64)0;
	result0 = rawparseint_97757_1912046442(s0, (&res0), start0);
	(*number0) = res0;
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

static N_INLINE(void, nimGCunrefNoCycle)(void* p0) {
	Cell46904* c0;
	c0 = usrtocell_51040_1689653243(p0);
	{
		(*c0).refcount -= ((NI) 8);
		if (!((NU32)((*c0).refcount) < (NU32)(((NI) 8)))) goto LA3;
		rtladdzct_52201_1689653243(c0);
	}
	LA3: ;
}

N_NIMCALL(NI, npuParseInt)(NimStringDesc* s0, NI* number0, NI start0) {
	NI result0;
	NI64 res0;
	result0 = (NI)0;
	res0 = (NI64)0;
	result0 = npuParseBiggestInt(s0, (&res0), start0);
	{
		NIM_BOOL LOC3;
		NIM_BOOL LOC5;
		Overflowerror3640* e_97871_1912046442;
		NimStringDesc* LOC9;
		LOC3 = (NIM_BOOL)0;
		LOC3 = NIM_TRUE;
		if (!(LOC3)) goto LA4;
		LOC5 = (NIM_BOOL)0;
		LOC5 = (res0 < IL64(-2147483648));
		if (LOC5) goto LA6;
		LOC5 = (IL64(2147483647) < res0);
		LA6: ;
		LOC3 = LOC5;
		LA4: ;
		if (!LOC3) goto LA7;
		e_97871_1912046442 = (Overflowerror3640*)0;
		e_97871_1912046442 = (Overflowerror3640*) newObj((&NTI23271), sizeof(Overflowerror3640));
		(*e_97871_1912046442).Sup.Sup.Sup.m_type = (&NTI3640);
		LOC9 = (NimStringDesc*)0;
		LOC9 = (*e_97871_1912046442).Sup.Sup.message; (*e_97871_1912046442).Sup.Sup.message = copyStringRC1(((NimStringDesc*) &T1912046442_11));
		if (LOC9) nimGCunrefNoCycle(LOC9);
		raiseException((Exception*)e_97871_1912046442, "OverflowError");
	}
	goto LA1;
	LA7: ;
	{
		if (!!((result0 == ((NI) 0)))) goto LA11;
		(*number0) = ((NI) (res0));
	}
	goto LA1;
	LA11: ;
	LA1: ;
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_parseutilsInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_parseutilsDatInit000)(void) {
}

