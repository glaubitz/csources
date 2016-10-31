/* Generated by Nim Compiler v0.14.3 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
typedef struct Any205101 Any205101;
typedef struct Indexerror3652 Indexerror3652;
typedef struct Exception Exception;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Cell47705 Cell47705;
typedef struct Cellseq47721 Cellseq47721;
typedef struct Gcheap50218 Gcheap50218;
typedef struct Gcstack50216 Gcstack50216;
typedef struct Memregion29886 Memregion29886;
typedef struct Smallchunk29840 Smallchunk29840;
typedef struct Llchunk29880 Llchunk29880;
typedef struct Bigchunk29842 Bigchunk29842;
typedef struct Intset29814 Intset29814;
typedef struct Trunk29810 Trunk29810;
typedef struct Avlnode29884 Avlnode29884;
typedef struct Gcstat50214 Gcstat50214;
typedef struct Cellset47717 Cellset47717;
typedef struct Pagedesc47713 Pagedesc47713;
typedef struct Valueerror3646 Valueerror3646;
typedef struct TY209202 TY209202;
typedef struct TY209201 TY209201;
typedef struct Basechunk29838 Basechunk29838;
typedef struct Freecell29830 Freecell29830;
struct  Any205101  {
void* value;
void* rawtypeptr;
};
typedef NU8 Tnimkind205003;
typedef NU8 Tnimtypeflag205009Set;
typedef N_NIMCALL_PTR(void, TY205088) (void* p0, NI op0);
typedef N_NIMCALL_PTR(void*, TY205093) (void* p0);
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
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Exception  {
  TNimObject Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
NimStringDesc* trace;
};
struct  Indexerror3652  {
  Exception Sup;
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
struct  Cell47705  {
NI refcount;
TNimType* typ;
};
struct  Cellseq47721  {
NI len;
NI cap;
Cell47705** d;
};
typedef Smallchunk29840* TY29901[512];
typedef Trunk29810* Trunkbuckets29812[256];
struct  Intset29814  {
Trunkbuckets29812 data;
};
struct  Memregion29886  {
NI minlargeobj;
NI maxlargeobj;
TY29901 freesmallchunks;
Llchunk29880* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk29842* freechunkslist;
Intset29814 chunkstarts;
Avlnode29884* root;
Avlnode29884* deleted;
Avlnode29884* last;
Avlnode29884* freeavlnodes;
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
Memregion29886 region;
Gcstat50214 stat;
Cellset47717 marked;
Cellseq47721 additionalroots;
};
struct  Valueerror3646  {
  Exception Sup;
};
struct TY209202 {
NCSTRING Field0;
Any205101 Field1;
};
typedef NU8 Tnimnodekind205005;
typedef NU8 Tnimtypeflag205009;
struct  Gcstack50216  {
Gcstack50216* prev;
Gcstack50216* next;
void* starts;
void* pos;
NI maxstacksize;
};
struct  Basechunk29838  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk29840  {
  Basechunk29838 Sup;
Smallchunk29840* next;
Smallchunk29840* prev;
Freecell29830* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk29880  {
NI size;
NI acc;
Llchunk29880* next;
};
struct  Bigchunk29842  {
  Basechunk29838 Sup;
Bigchunk29842* next;
Bigchunk29842* prev;
NI align;
NF data;
};
typedef NI TY29819[8];
struct  Trunk29810  {
Trunk29810* next;
NI key;
TY29819 bits;
};
typedef Avlnode29884* TY29891[2];
struct  Avlnode29884  {
TY29891 link;
NI key;
NI upperbound;
NI level;
};
struct  Pagedesc47713  {
Pagedesc47713* next;
NI key;
TY29819 bits;
};
struct  Freecell29830  {
Freecell29830* next;
NI zerofield;
};
struct TY209201 {
  TGenericSeq Sup;
  TY209202 data[SEQ_DECL_SIZE];
};
static N_INLINE(TNimType*, skiprange_206802_1760177012)(TNimType* x0);
N_NIMCALL(void*, newObj)(TNimType* typ0, NI size0);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src0);
static N_INLINE(void, nimGCunrefNoCycle)(void* p0);
static N_INLINE(Cell47705*, usrtocell_51840_1689653243)(void* usr0);
static N_INLINE(void, rtladdzct_53001_1689653243)(Cell47705* c0);
N_NOINLINE(void, addzct_51817_1689653243)(Cellseq47721* s0, Cell47705* c0);
N_NIMCALL(void, raiseException)(Exception* e0, NCSTRING ename0);
static N_INLINE(Any205101, newany_205836_1760177012)(void* value0, TNimType* rawtype0);
N_NIMCALL(void, T1760177012_6)(void* p, NI op);
N_NIMCALL(TGenericSeq*, incrSeqV2)(TGenericSeq* seq0, NI elemsize0);
N_NIMCALL(void, fieldsaux_208402_1760177012)(void* p0, TNimNode* n0, TY209201** ret0);
N_NIMCALL(TNimNode*, selectbranch_205807_1760177012)(void* aa0, TNimNode* n0);
N_NIMCALL(NI, getdiscriminant_205434_1760177012)(void* aa0, TNimNode* n0);
N_NIMCALL(NimStringDesc*, getenumfield_215235_1760177012)(Any205101 x0, NI ordinalvalue0);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str0);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x0);
N_NIMCALL(NI64, getbiggestint_212203_1760177012)(Any205101 x0);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src0);
STRING_LITERAL(T1760177012_2, "index out of bounds", 19);
STRING_LITERAL(T1760177012_3, "sequence is nil", 15);
extern TNimType NTI143015; /* ref IndexError */
extern TNimType NTI3652; /* IndexError */
extern Gcheap50218 gch_50258_1689653243;
extern TNimType NTI23425; /* ref ValueError */
extern TNimType NTI3646; /* ValueError */
TNimType NTI209202; /* tuple[name: cstring, any: Any] */
extern TNimType NTI140; /* cstring */
TNimType NTI205101; /* Any */
extern TNimType NTI142; /* pointer */
TNimType NTI209201; /* seq[tuple[name: cstring, any: Any]] */

static N_INLINE(TNimType*, skiprange_206802_1760177012)(TNimType* x0) {
	TNimType* result0;
	result0 = (TNimType*)0;
	result0 = x0;
	{
		if (!((*result0).kind == ((Tnimkind205003) 20))) goto LA3;
		result0 = (*result0).base;
	}
	LA3: ;
	return result0;
}

N_NIMCALL(NIM_BOOL, getbool_214604_1760177012)(Any205101 x0) {
	NIM_BOOL result0;
	TNimType* t0;
	result0 = (NIM_BOOL)0;
	t0 = skiprange_206802_1760177012(((TNimType*) (x0.rawtypeptr)));
	result0 = (*((NIM_BOOL*) (x0.value)));
	return result0;
}

N_NIMCALL(NIM_CHAR, getchar_214412_1760177012)(Any205101 x0) {
	NIM_CHAR result0;
	TNimType* t0;
	result0 = (NIM_CHAR)0;
	t0 = skiprange_206802_1760177012(((TNimType*) (x0.rawtypeptr)));
	result0 = (*((NIM_CHAR*) (x0.value)));
	return result0;
}

N_NIMCALL(NIM_BOOL, isnil_207812_1760177012)(Any205101 x0) {
	NIM_BOOL result0;
	result0 = (NIM_BOOL)0;
	result0 = (*((void**) (x0.value))) == 0;
	return result0;
}

N_NIMCALL(NI, len_207616_1760177012)(Any205101 x0) {
	NI result0;
	result0 = (NI)0;
	switch ((*((TNimType*) (x0.rawtypeptr))).kind) {
	case ((Tnimkind205003) 16):
	{
		result0 = (NI)((*((TNimType*) (x0.rawtypeptr))).size / (*(*((TNimType*) (x0.rawtypeptr))).base).size);
	}
	break;
	case ((Tnimkind205003) 24):
	{
		result0 = (*((TGenericSeq*) ((*((void**) (x0.value)))))).len;
	}
	break;
	default:
	{
	}
	break;
	}
	return result0;
}

static N_INLINE(Cell47705*, usrtocell_51840_1689653243)(void* usr0) {
	Cell47705* result0;
	result0 = (Cell47705*)0;
	result0 = ((Cell47705*) ((NI)((NU64)(((NI) (usr0))) - (NU64)(((NI)sizeof(Cell47705))))));
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
		if (!((NU64)((*c0).refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_53001_1689653243(c0);
	}
	LA3: ;
}

static N_INLINE(Any205101, newany_205836_1760177012)(void* value0, TNimType* rawtype0) {
	Any205101 result0;
	memset((void*)(&result0), 0, sizeof(result0));
	result0.value = value0;
	result0.rawtypeptr = ((void*) (rawtype0));
	return result0;
}

N_NIMCALL(Any205101, HEX5BHEX5D_206815_1760177012)(Any205101 x0, NI i0) {
	Any205101 result0;
{	memset((void*)(&result0), 0, sizeof(result0));
	switch ((*((TNimType*) (x0.rawtypeptr))).kind) {
	case ((Tnimkind205003) 16):
	{
		NI bs0;
		bs0 = (*(*((TNimType*) (x0.rawtypeptr))).base).size;
		{
			Indexerror3652* e_206833_1760177012;
			NimStringDesc* LOC6;
			if (!((NU64)((NI)((*((TNimType*) (x0.rawtypeptr))).size / bs0)) <= (NU64)(i0))) goto LA4;
			e_206833_1760177012 = (Indexerror3652*)0;
			e_206833_1760177012 = (Indexerror3652*) newObj((&NTI143015), sizeof(Indexerror3652));
			(*e_206833_1760177012).Sup.Sup.m_type = (&NTI3652);
			LOC6 = (NimStringDesc*)0;
			LOC6 = (*e_206833_1760177012).Sup.message; (*e_206833_1760177012).Sup.message = copyStringRC1(((NimStringDesc*) &T1760177012_2));
			if (LOC6) nimGCunrefNoCycle(LOC6);
			raiseException((Exception*)e_206833_1760177012, "IndexError");
		}
		LA4: ;
		result0 = newany_205836_1760177012(((void*) ((NI)(((NI) (x0.value)) + (NI)(i0 * bs0)))), (*((TNimType*) (x0.rawtypeptr))).base);
		goto BeforeRet;
	}
	break;
	case ((Tnimkind205003) 24):
	{
		void* s0;
		NI bs0;
		s0 = (*((void**) (x0.value)));
		{
			Valueerror3646* e_206847_1760177012;
			NimStringDesc* LOC12;
			if (!(s0 == NIM_NIL)) goto LA10;
			e_206847_1760177012 = (Valueerror3646*)0;
			e_206847_1760177012 = (Valueerror3646*) newObj((&NTI23425), sizeof(Valueerror3646));
			(*e_206847_1760177012).Sup.Sup.m_type = (&NTI3646);
			LOC12 = (NimStringDesc*)0;
			LOC12 = (*e_206847_1760177012).Sup.message; (*e_206847_1760177012).Sup.message = copyStringRC1(((NimStringDesc*) &T1760177012_3));
			if (LOC12) nimGCunrefNoCycle(LOC12);
			raiseException((Exception*)e_206847_1760177012, "ValueError");
		}
		LA10: ;
		bs0 = (*(*((TNimType*) (x0.rawtypeptr))).base).size;
		{
			Indexerror3652* e_206870_1760177012;
			NimStringDesc* LOC17;
			if (!((NU64)((*((TGenericSeq*) (s0))).len) <= (NU64)(i0))) goto LA15;
			e_206870_1760177012 = (Indexerror3652*)0;
			e_206870_1760177012 = (Indexerror3652*) newObj((&NTI143015), sizeof(Indexerror3652));
			(*e_206870_1760177012).Sup.Sup.m_type = (&NTI3652);
			LOC17 = (NimStringDesc*)0;
			LOC17 = (*e_206870_1760177012).Sup.message; (*e_206870_1760177012).Sup.message = copyStringRC1(((NimStringDesc*) &T1760177012_2));
			if (LOC17) nimGCunrefNoCycle(LOC17);
			raiseException((Exception*)e_206870_1760177012, "IndexError");
		}
		LA15: ;
		result0 = newany_205836_1760177012(((void*) ((NI)(((NI) (s0)) + (NI)(((NI) 16) + (NI)(i0 * bs0))))), (*((TNimType*) (x0.rawtypeptr))).base);
		goto BeforeRet;
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
N_NIMCALL(void, T1760177012_6)(void* p, NI op) {
	TY209201* a;
	NI LOC1;
	a = (TY209201*)p;
	LOC1 = (NI)0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
}

N_NIMCALL(NI, getdiscriminant_205434_1760177012)(void* aa0, TNimNode* n0) {
	NI result0;
	NI d0;
	NI a0;
{	result0 = (NI)0;
	d0 = (NI)0;
	a0 = ((NI) (aa0));
	switch ((*(*n0).typ).size) {
	case ((NI) 1):
	{
		d0 = ((NI)(NU)(NU8)((*((NI8*) ((NI)((NU64)(a0) + (NU64)((*n0).offset)))))));
	}
	break;
	case ((NI) 2):
	{
		d0 = ((NI)(NU)(NU16)((*((NI16*) ((NI)((NU64)(a0) + (NU64)((*n0).offset)))))));
	}
	break;
	case ((NI) 4):
	{
		d0 = ((NI) ((*((NI32*) ((NI)((NU64)(a0) + (NU64)((*n0).offset)))))));
	}
	break;
	default:
	{
	}
	break;
	}
	result0 = d0;
	goto BeforeRet;
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(TNimNode*, selectbranch_205807_1760177012)(void* aa0, TNimNode* n0) {
	TNimNode* result0;
	NI discr0;
	result0 = (TNimNode*)0;
	discr0 = getdiscriminant_205434_1760177012(aa0, n0);
	{
		if (!((NU64)(discr0) < (NU64)((*n0).len))) goto LA3;
		result0 = (*n0).sons[(discr0)- 0];
		{
			if (!(result0 == NIM_NIL)) goto LA7;
			result0 = (*n0).sons[((*n0).len)- 0];
		}
		LA7: ;
	}
	goto LA1;
	LA3: ;
	{
		result0 = (*n0).sons[((*n0).len)- 0];
	}
	LA1: ;
	return result0;
}

N_NIMCALL(void, fieldsaux_208402_1760177012)(void* p0, TNimNode* n0, TY209201** ret0) {
	switch ((*n0).kind) {
	case ((Tnimnodekind205005) 0):
	{
	}
	break;
	case ((Tnimnodekind205005) 1):
	{
		TY209202 LOC3;
		LOC3.Field0 = (*n0).name;
		LOC3.Field1 = newany_205836_1760177012(((void*) ((NI)(((NI) (p0)) + (*n0).offset))), (*n0).typ);
		(*ret0) = (TY209201*) incrSeqV2(&((*ret0))->Sup, sizeof(TY209202));
		(*ret0)->data[(*ret0)->Sup.len] = LOC3;
		++(*ret0)->Sup.len;
	}
	break;
	case ((Tnimnodekind205005) 2):
	{
		{
			NI i_208810_1760177012;
			NI HEX3Atmp_208838_1760177012;
			NI res_208841_1760177012;
			i_208810_1760177012 = (NI)0;
			HEX3Atmp_208838_1760177012 = (NI)0;
			HEX3Atmp_208838_1760177012 = (NI)((*n0).len - ((NI) 1));
			res_208841_1760177012 = ((NI) 0);
			{
				while (1) {
					if (!(res_208841_1760177012 <= HEX3Atmp_208838_1760177012)) goto LA7;
					i_208810_1760177012 = res_208841_1760177012;
					fieldsaux_208402_1760177012(p0, (*n0).sons[(i_208810_1760177012)- 0], ret0);
					res_208841_1760177012 += ((NI) 1);
				} LA7: ;
			}
		}
	}
	break;
	case ((Tnimnodekind205005) 3):
	{
		TNimNode* m0;
		TY209202 LOC9;
		m0 = selectbranch_205807_1760177012(p0, n0);
		LOC9.Field0 = (*n0).name;
		LOC9.Field1 = newany_205836_1760177012(((void*) ((NI)(((NI) (p0)) + (*n0).offset))), (*n0).typ);
		(*ret0) = (TY209201*) incrSeqV2(&((*ret0))->Sup, sizeof(TY209202));
		(*ret0)->data[(*ret0)->Sup.len] = LOC9;
		++(*ret0)->Sup.len;
		{
			if (!!((m0 == NIM_NIL))) goto LA12;
			fieldsaux_208402_1760177012(p0, m0, ret0);
		}
		LA12: ;
	}
	break;
	}
}

N_NIMCALL(Any205101, skiprange_214804_1760177012)(Any205101 x0) {
	Any205101 result0;
	memset((void*)(&result0), 0, sizeof(result0));
	result0.rawtypeptr = ((void*) ((*((TNimType*) (x0.rawtypeptr))).base));
	result0.value = x0.value;
	return result0;
}

N_NIMCALL(NimStringDesc*, getenumfield_215235_1760177012)(Any205101 x0, NI ordinalvalue0) {
	NimStringDesc* result0;
	TNimType* typ0;
	NI e0;
{	result0 = (NimStringDesc*)0;
	typ0 = skiprange_206802_1760177012(((TNimType*) (x0.rawtypeptr)));
	e0 = ordinalvalue0;
	{
		if (!!((((*typ0).flags &(1U<<((NU)(((Tnimtypeflag205009) 2))&7U)))!=0))) goto LA3;
		{
			if (!((NU64)(e0) < (NU64)((*(*typ0).node).len))) goto LA7;
			result0 = cstrToNimstr((*(*(*typ0).node).sons[(e0)- 0]).name);
			goto BeforeRet;
		}
		LA7: ;
	}
	goto LA1;
	LA3: ;
	{
		TNimNode* n0;
		TNimNode** s0;
		n0 = (*typ0).node;
		s0 = (*n0).sons;
		{
			NI i_215432_1760177012;
			NI HEX3Atmp_215435_1760177012;
			NI res_215438_1760177012;
			i_215432_1760177012 = (NI)0;
			HEX3Atmp_215435_1760177012 = (NI)0;
			HEX3Atmp_215435_1760177012 = (NI)((*n0).len - ((NI) 1));
			res_215438_1760177012 = ((NI) 0);
			{
				while (1) {
					if (!(res_215438_1760177012 <= HEX3Atmp_215435_1760177012)) goto LA12;
					i_215432_1760177012 = res_215438_1760177012;
					{
						if (!((*s0[(i_215432_1760177012)- 0]).offset == e0)) goto LA15;
						result0 = cstrToNimstr((*s0[(i_215432_1760177012)- 0]).name);
						goto BeforeRet;
					}
					LA15: ;
					res_215438_1760177012 += ((NI) 1);
				} LA12: ;
			}
		}
	}
	LA1: ;
	result0 = nimIntToStr(e0);
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(NI64, getbiggestint_212203_1760177012)(Any205101 x0) {
	NI64 result0;
	TNimType* t0;
	result0 = (NI64)0;
	t0 = skiprange_206802_1760177012(((TNimType*) (x0.rawtypeptr)));
	switch ((*t0).kind) {
	case ((Tnimkind205003) 31):
	{
		result0 = ((NI64) ((*((NI*) (x0.value)))));
	}
	break;
	case ((Tnimkind205003) 32):
	{
		result0 = ((NI64) ((*((NI8*) (x0.value)))));
	}
	break;
	case ((Tnimkind205003) 33):
	{
		result0 = ((NI64) ((*((NI16*) (x0.value)))));
	}
	break;
	case ((Tnimkind205003) 34):
	{
		result0 = ((NI64) ((*((NI32*) (x0.value)))));
	}
	break;
	case ((Tnimkind205003) 35):
	case ((Tnimkind205003) 44):
	{
		result0 = (*((NI64*) (x0.value)));
	}
	break;
	case ((Tnimkind205003) 1):
	{
		result0 = ((NI64) ((*((NIM_BOOL*) (x0.value)))));
	}
	break;
	case ((Tnimkind205003) 2):
	{
		result0 = ((NI64) (((NU8)((*((NIM_CHAR*) (x0.value)))))));
	}
	break;
	case ((Tnimkind205003) 14):
	case ((Tnimkind205003) 19):
	{
		switch ((*t0).size) {
		case ((NI) 1):
		{
			result0 = ((NI64)(NU64)(NU8)((*((NI8*) (x0.value)))));
		}
		break;
		case ((NI) 2):
		{
			result0 = ((NI64)(NU64)(NU16)((*((NI16*) (x0.value)))));
		}
		break;
		case ((NI) 4):
		{
			result0 = ((NI64) ((*((NI32*) (x0.value)))));
		}
		break;
		case ((NI) 8):
		{
			result0 = (*((NI64*) (x0.value)));
		}
		break;
		default:
		{
		}
		break;
		}
	}
	break;
	case ((Tnimkind205003) 40):
	{
		result0 = ((NI64) ((*((NU*) (x0.value)))));
	}
	break;
	case ((Tnimkind205003) 41):
	{
		result0 = ((NI64) ((*((NU8*) (x0.value)))));
	}
	break;
	case ((Tnimkind205003) 42):
	{
		result0 = ((NI64) ((*((NU16*) (x0.value)))));
	}
	break;
	case ((Tnimkind205003) 43):
	{
		result0 = ((NI64) ((*((NU32*) (x0.value)))));
	}
	break;
	default:
	{
	}
	break;
	}
	return result0;
}

N_NIMCALL(NimStringDesc*, getenumfield_215442_1760177012)(Any205101 x0) {
	NimStringDesc* result0;
	NI64 LOC1;
	result0 = (NimStringDesc*)0;
	LOC1 = (NI64)0;
	LOC1 = getbiggestint_212203_1760177012(x0);
	result0 = getenumfield_215235_1760177012(x0, ((NI) (LOC1)));
	return result0;
}

N_NIMCALL(void*, getpointer_208002_1760177012)(Any205101 x0) {
	void* result0;
	result0 = (void*)0;
	result0 = (*((void**) (x0.value)));
	return result0;
}

N_NIMCALL(Any205101, HEX5BHEX5D_210656_1760177012)(Any205101 x0) {
	Any205101 result0;
	memset((void*)(&result0), 0, sizeof(result0));
	result0.value = (*((void**) (x0.value)));
	result0.rawtypeptr = ((void*) ((*((TNimType*) (x0.rawtypeptr))).base));
	return result0;
}

N_NIMCALL(NimStringDesc*, getstring_216406_1760177012)(Any205101 x0) {
	NimStringDesc* result0;
	result0 = (NimStringDesc*)0;
	{
		if (!!((*((void**) (x0.value))) == 0)) goto LA3;
		result0 = copyString((*((NimStringDesc**) (x0.value))));
	}
	LA3: ;
	return result0;
}

N_NIMCALL(NF, getbiggestfloat_216003_1760177012)(Any205101 x0) {
	NF result0;
	TNimType* LOC1;
	result0 = (NF)0;
	LOC1 = (TNimType*)0;
	LOC1 = skiprange_206802_1760177012(((TNimType*) (x0.rawtypeptr)));
	switch ((*LOC1).kind) {
	case ((Tnimkind205003) 36):
	{
		result0 = (*((NF*) (x0.value)));
	}
	break;
	case ((Tnimkind205003) 37):
	{
		result0 = ((NF) ((*((NF32*) (x0.value)))));
	}
	break;
	case ((Tnimkind205003) 38):
	{
		result0 = (*((NF*) (x0.value)));
	}
	break;
	default:
	{
	}
	break;
	}
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_typeinfoInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_typeinfoDatInit000)(void) {
static TNimNode* T1760177012_4[2];
static TNimNode* T1760177012_5[2];
static TNimNode T1760177012_0[6];
NTI209202.size = sizeof(TY209202);
NTI209202.kind = 18;
NTI209202.base = 0;
NTI209202.flags = 3;
T1760177012_4[0] = &T1760177012_0[1];
T1760177012_0[1].kind = 1;
T1760177012_0[1].offset = offsetof(TY209202, Field0);
T1760177012_0[1].typ = (&NTI140);
T1760177012_0[1].name = "Field0";
T1760177012_4[1] = &T1760177012_0[2];
NTI205101.size = sizeof(Any205101);
NTI205101.kind = 18;
NTI205101.base = 0;
NTI205101.flags = 3;
T1760177012_5[0] = &T1760177012_0[4];
T1760177012_0[4].kind = 1;
T1760177012_0[4].offset = offsetof(Any205101, value);
T1760177012_0[4].typ = (&NTI142);
T1760177012_0[4].name = "value";
T1760177012_5[1] = &T1760177012_0[5];
T1760177012_0[5].kind = 1;
T1760177012_0[5].offset = offsetof(Any205101, rawtypeptr);
T1760177012_0[5].typ = (&NTI142);
T1760177012_0[5].name = "rawTypePtr";
T1760177012_0[3].len = 2; T1760177012_0[3].kind = 2; T1760177012_0[3].sons = &T1760177012_5[0];
NTI205101.node = &T1760177012_0[3];
T1760177012_0[2].kind = 1;
T1760177012_0[2].offset = offsetof(TY209202, Field1);
T1760177012_0[2].typ = (&NTI205101);
T1760177012_0[2].name = "Field1";
T1760177012_0[0].len = 2; T1760177012_0[0].kind = 2; T1760177012_0[0].sons = &T1760177012_4[0];
NTI209202.node = &T1760177012_0[0];
NTI209201.size = sizeof(TY209201*);
NTI209201.kind = 24;
NTI209201.base = (&NTI209202);
NTI209201.flags = 2;
NTI209201.marker = T1760177012_6;
}

