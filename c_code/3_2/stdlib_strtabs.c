/* Generated by Nim Compiler v0.14.3 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Stringtableobj152608 Stringtableobj152608;
typedef struct TNimObject TNimObject;
typedef struct Keyvaluepairseq152606 Keyvaluepairseq152606;
typedef struct Keyvaluepair152604 Keyvaluepair152604;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
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
typedef struct Keyerror3648 Keyerror3648;
typedef struct Valueerror3646 Valueerror3646;
typedef struct Exception Exception;
typedef struct Basechunk29438 Basechunk29438;
typedef struct Freecell29430 Freecell29430;
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
struct  TNimObject  {
TNimType* m_type;
};
typedef NU8 Stringtablemode152602;
struct  Stringtableobj152608  {
  TNimObject Sup;
NI counter;
Keyvaluepairseq152606* data;
Stringtablemode152602 mode;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct Keyvaluepair152604 {
NimStringDesc* Field0;
NimStringDesc* Field1;
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
struct  Exception  {
  TNimObject Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
NimStringDesc* trace;
};
struct  Valueerror3646  {
  Exception Sup;
};
struct  Keyerror3648  {
  Valueerror3646 Sup;
};
typedef NU8 Formatflag152702Set;
typedef NU8 Formatflag152702;
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
struct  Freecell29430  {
Freecell29430* next;
NI zerofield;
};
struct Keyvaluepairseq152606 {
  TGenericSeq Sup;
  Keyvaluepair152604 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d0, NI op0);
N_NIMCALL(void, T603679043_4)(void* p, NI op);
N_NIMCALL(void, T603679043_8)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ0, NI size0);
static N_INLINE(void, nimGCunrefNoCycle)(void* p0);
static N_INLINE(Cell47305*, usrtocell_51440_1689653243)(void* usr0);
static N_INLINE(void, rtladdzct_52601_1689653243)(Cell47305* c0);
N_NOINLINE(void, addzct_51417_1689653243)(Cellseq47321* s0, Cell47305* c0);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ0, NI len0);
N_NIMCALL(NI, rawget_152806_603679043)(Stringtableobj152608* t0, NimStringDesc* key0);
N_NIMCALL(NI, myhash_152710_603679043)(Stringtableobj152608* t0, NimStringDesc* key0);
N_NIMCALL(NI, hash_149827_213663784)(NimStringDesc* x0);
N_NIMCALL(NI, hashignorecase_150059_213663784)(NimStringDesc* x0);
N_NIMCALL(NI, hashignorestyle_149892_213663784)(NimStringDesc* x0);
N_NIMCALL(NIM_BOOL, mycmp_152717_603679043)(Stringtableobj152608* t0, NimStringDesc* a0, NimStringDesc* b0);
N_NIMCALL(NI, cmp_5683_1689653243)(NimStringDesc* x0, NimStringDesc* y0);
N_NIMCALL(NI, nsuCmpIgnoreCase)(NimStringDesc* a0, NimStringDesc* b0);
N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* a0, NimStringDesc* b0);
static N_INLINE(NI, nexttry_152801_603679043)(NI h0, NI maxhash0);
static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0);
static N_INLINE(void, copymem_7485_1689653243)(void* dest0, void* source0, NI size0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space0);
static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0);
N_NIMCALL(void, raiseException)(Exception* e0, NCSTRING ename0);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src0);
N_NIMCALL(NIM_BOOL, mustrehash_152723_603679043)(NI length0, NI counter0);
N_NIMCALL(void, enlarge_153235_603679043)(Stringtableobj152608* t0);
N_NIMCALL(void*, newSeq)(TNimType* typ0, NI len0);
N_NIMCALL(void, rawinsert_153225_603679043)(Stringtableobj152608* t0, Keyvaluepairseq152606** data0, NimStringDesc* key0, NimStringDesc* val0);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src0);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s0, NIM_CHAR c0);
N_NIMCALL(NimStringDesc*, getvalue_153327_603679043)(Stringtableobj152608* t0, Formatflag152702Set flags0, NimStringDesc* key0);
N_NIMCALL(NIM_BOOL, nsthasKey)(Stringtableobj152608* t0, NimStringDesc* key0);
N_NIMCALL(NimStringDesc*, getordefault_153214_603679043)(Stringtableobj152608* t0, NimStringDesc* key0);
N_NIMCALL(NimStringDesc*, getenv_135624_2125978480)(NimStringDesc* key0);
static N_INLINE(void, appendChar)(NimStringDesc* dest0, NIM_CHAR c0);
N_NIMCALL(void, raiseformatexception_153313_603679043)(NimStringDesc* s0);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s0, NI start_79210_1689653243, NI last0);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s0, NI first0, NI last0);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest0, NI addlen0);
STRING_LITERAL(T603679043_9, "key not found: ", 15);
STRING_LITERAL(T603679043_10, "", 0);
STRING_LITERAL(T603679043_11, "format string: key not found: ", 30);
extern TNimType NTI3608; /* RootObj */
TNimType NTI152608; /* StringTableObj */
extern TNimType NTI104; /* int */
TNimType NTI152604; /* KeyValuePair */
extern TNimType NTI138; /* string */
TNimType NTI152606; /* KeyValuePairSeq */
TNimType NTI152602; /* StringTableMode */
TNimType NTI152610; /* StringTableRef */
extern Gcheap49818 gch_49858_1689653243;
extern TNimType NTI192804; /* ref KeyError */
extern TNimType NTI3648; /* KeyError */
extern TNimType NTI23025; /* ref ValueError */
extern TNimType NTI3646; /* ValueError */
N_NIMCALL(void, T603679043_4)(void* p, NI op) {
	Keyvaluepairseq152606* a;
	NI LOC1;
	a = (Keyvaluepairseq152606*)p;
	LOC1 = (NI)0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Field0, op);
	nimGCvisit((void*)a->data[LOC1].Field1, op);
	}
}
N_NIMCALL(void, T603679043_8)(void* p, NI op) {
	Stringtableobj152608* a;
	a = (Stringtableobj152608*)p;
	nimGCvisit((void*)(*a).data, op);
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

static N_INLINE(void, nimGCunrefNoCycle)(void* p0) {
	Cell47305* c0;
	c0 = usrtocell_51440_1689653243(p0);
	{
		(*c0).refcount -= ((NI) 8);
		if (!((NU64)((*c0).refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_52601_1689653243(c0);
	}
	LA3: ;
}

N_NIMCALL(Stringtableobj152608*, nstnewStringTable)(Stringtablemode152602 mode0) {
	Stringtableobj152608* result0;
	result0 = (Stringtableobj152608*)0;
	result0 = (Stringtableobj152608*) newObj((&NTI152610), sizeof(Stringtableobj152608));
	(*result0).Sup.m_type = (&NTI152608);
	(*result0).mode = mode0;
	(*result0).counter = ((NI) 0);
	if ((*result0).data) nimGCunrefNoCycle((*result0).data);
	(*result0).data = (Keyvaluepairseq152606*) newSeqRC1((&NTI152606), ((NI) 64));
	return result0;
}

N_NIMCALL(NI, myhash_152710_603679043)(Stringtableobj152608* t0, NimStringDesc* key0) {
	NI result0;
	result0 = (NI)0;
	switch ((*t0).mode) {
	case ((Stringtablemode152602) 0):
	{
		result0 = hash_149827_213663784(key0);
	}
	break;
	case ((Stringtablemode152602) 1):
	{
		result0 = hashignorecase_150059_213663784(key0);
	}
	break;
	case ((Stringtablemode152602) 2):
	{
		result0 = hashignorestyle_149892_213663784(key0);
	}
	break;
	}
	return result0;
}

N_NIMCALL(NIM_BOOL, mycmp_152717_603679043)(Stringtableobj152608* t0, NimStringDesc* a0, NimStringDesc* b0) {
	NIM_BOOL result0;
	result0 = (NIM_BOOL)0;
	switch ((*t0).mode) {
	case ((Stringtablemode152602) 0):
	{
		NI LOC2;
		LOC2 = (NI)0;
		LOC2 = cmp_5683_1689653243(a0, b0);
		result0 = (LOC2 == ((NI) 0));
	}
	break;
	case ((Stringtablemode152602) 1):
	{
		NI LOC4;
		LOC4 = (NI)0;
		LOC4 = nsuCmpIgnoreCase(a0, b0);
		result0 = (LOC4 == ((NI) 0));
	}
	break;
	case ((Stringtablemode152602) 2):
	{
		NI LOC6;
		LOC6 = (NI)0;
		LOC6 = nsuCmpIgnoreStyle(a0, b0);
		result0 = (LOC6 == ((NI) 0));
	}
	break;
	}
	return result0;
}

static N_INLINE(NI, nexttry_152801_603679043)(NI h0, NI maxhash0) {
	NI result0;
	result0 = (NI)0;
	result0 = (NI)((NI)((NI)(((NI) 5) * h0) + ((NI) 1)) & maxhash0);
	return result0;
}

N_NIMCALL(NI, rawget_152806_603679043)(Stringtableobj152608* t0, NimStringDesc* key0) {
	NI result0;
	NI h0;
	NI LOC1;
{	result0 = (NI)0;
	LOC1 = (NI)0;
	LOC1 = myhash_152710_603679043(t0, key0);
	h0 = (NI)(LOC1 & ((*t0).data ? ((*t0).data->Sup.len-1) : -1));
	{
		while (1) {
			if (!!((*t0).data->data[h0].Field0 == 0)) goto LA3;
			{
				NIM_BOOL LOC6;
				LOC6 = (NIM_BOOL)0;
				LOC6 = mycmp_152717_603679043(t0, (*t0).data->data[h0].Field0, key0);
				if (!LOC6) goto LA7;
				result0 = h0;
				goto BeforeRet;
			}
			LA7: ;
			h0 = nexttry_152801_603679043(h0, ((*t0).data ? ((*t0).data->Sup.len-1) : -1));
		} LA3: ;
	}
	result0 = ((NI) -1);
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(NIM_BOOL, nsthasKey)(Stringtableobj152608* t0, NimStringDesc* key0) {
	NIM_BOOL result0;
	NI LOC1;
	result0 = (NIM_BOOL)0;
	LOC1 = (NI)0;
	LOC1 = rawget_152806_603679043(t0, key0);
	result0 = (((NI) 0) <= LOC1);
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

N_NIMCALL(NimStringDesc**, nstTake)(Stringtableobj152608* t0, NimStringDesc* key0) {
	NimStringDesc** result0;
	NI index_152832_603679043;
	result0 = (NimStringDesc**)0;
	index_152832_603679043 = rawget_152806_603679043(t0, key0);
	{
		if (!(((NI) 0) <= index_152832_603679043)) goto LA3;
		result0 = (&(*t0).data->data[index_152832_603679043].Field1);
	}
	goto LA1;
	LA3: ;
	{
		Keyerror3648* e_153003_603679043;
		NimStringDesc* LOC6;
		e_153003_603679043 = (Keyerror3648*)0;
		e_153003_603679043 = (Keyerror3648*) newObj((&NTI192804), sizeof(Keyerror3648));
		(*e_153003_603679043).Sup.Sup.Sup.m_type = (&NTI3648);
		LOC6 = (NimStringDesc*)0;
		LOC6 = rawNewString(key0->Sup.len + 15);
appendString(LOC6, ((NimStringDesc*) &T603679043_9));
appendString(LOC6, key0);
		asgnRefNoCycle((void**) (&(*e_153003_603679043).Sup.Sup.message), LOC6);
		raiseException((Exception*)e_153003_603679043, "KeyError");
	}
	LA1: ;
	return result0;
}

N_NIMCALL(NIM_BOOL, mustrehash_152723_603679043)(NI length0, NI counter0) {
	NIM_BOOL result0;
	NIM_BOOL LOC1;
	result0 = (NIM_BOOL)0;
	LOC1 = (NIM_BOOL)0;
	LOC1 = ((NI)(length0 * ((NI) 2)) < (NI)(counter0 * ((NI) 3)));
	if (LOC1) goto LA2;
	LOC1 = ((NI)(length0 - counter0) < ((NI) 4));
	LA2: ;
	result0 = LOC1;
	return result0;
}

N_NIMCALL(void, rawinsert_153225_603679043)(Stringtableobj152608* t0, Keyvaluepairseq152606** data0, NimStringDesc* key0, NimStringDesc* val0) {
	NI h0;
	NI LOC1;
	NimStringDesc* LOC4;
	NimStringDesc* LOC5;
	LOC1 = (NI)0;
	LOC1 = myhash_152710_603679043(t0, key0);
	h0 = (NI)(LOC1 & ((*data0) ? ((*data0)->Sup.len-1) : -1));
	{
		while (1) {
			if (!!((*data0)->data[h0].Field0 == 0)) goto LA3;
			h0 = nexttry_152801_603679043(h0, ((*data0) ? ((*data0)->Sup.len-1) : -1));
		} LA3: ;
	}
	LOC4 = (NimStringDesc*)0;
	LOC4 = (*data0)->data[h0].Field0; (*data0)->data[h0].Field0 = copyStringRC1(key0);
	if (LOC4) nimGCunrefNoCycle(LOC4);
	LOC5 = (NimStringDesc*)0;
	LOC5 = (*data0)->data[h0].Field1; (*data0)->data[h0].Field1 = copyStringRC1(val0);
	if (LOC5) nimGCunrefNoCycle(LOC5);
}

N_NIMCALL(void, enlarge_153235_603679043)(Stringtableobj152608* t0) {
	Keyvaluepairseq152606* n0;
	Keyvaluepairseq152606* LOC8;
	n0 = (Keyvaluepairseq152606*)0;
	n0 = (Keyvaluepairseq152606*) newSeq((&NTI152606), ((NI) ((NI)(((*t0).data ? (*t0).data->Sup.len : 0) * ((NI) 2)))));
	{
		NI i_153268_603679043;
		NI HEX3Atmp_153282_603679043;
		NI res_153285_603679043;
		i_153268_603679043 = (NI)0;
		HEX3Atmp_153282_603679043 = (NI)0;
		HEX3Atmp_153282_603679043 = ((*t0).data ? ((*t0).data->Sup.len-1) : -1);
		res_153285_603679043 = ((NI) 0);
		{
			while (1) {
				if (!(res_153285_603679043 <= HEX3Atmp_153282_603679043)) goto LA3;
				i_153268_603679043 = res_153285_603679043;
				{
					if (!!((*t0).data->data[i_153268_603679043].Field0 == 0)) goto LA6;
					rawinsert_153225_603679043(t0, (&n0), (*t0).data->data[i_153268_603679043].Field0, (*t0).data->data[i_153268_603679043].Field1);
				}
				LA6: ;
				res_153285_603679043 += ((NI) 1);
			} LA3: ;
		}
	}
	LOC8 = (Keyvaluepairseq152606*)0;
	LOC8 = (*t0).data;
	asgnRefNoCycle((void**) (&(*t0).data), n0);
	n0 = LOC8;
}

N_NIMCALL(void, nstPut)(Stringtableobj152608* t0, NimStringDesc* key0, NimStringDesc* val0) {
	NI index0;
	index0 = rawget_152806_603679043(t0, key0);
	{
		NimStringDesc* LOC5;
		if (!(((NI) 0) <= index0)) goto LA3;
		LOC5 = (NimStringDesc*)0;
		LOC5 = (*t0).data->data[index0].Field1; (*t0).data->data[index0].Field1 = copyStringRC1(val0);
		if (LOC5) nimGCunrefNoCycle(LOC5);
	}
	goto LA1;
	LA3: ;
	{
		{
			NIM_BOOL LOC9;
			LOC9 = (NIM_BOOL)0;
			LOC9 = mustrehash_152723_603679043(((*t0).data ? (*t0).data->Sup.len : 0), (*t0).counter);
			if (!LOC9) goto LA10;
			enlarge_153235_603679043(t0);
		}
		LA10: ;
		rawinsert_153225_603679043(t0, (&(*t0).data), key0, val0);
		(*t0).counter += ((NI) 1);
	}
	LA1: ;
}

N_NIMCALL(NimStringDesc*, getordefault_153214_603679043)(Stringtableobj152608* t0, NimStringDesc* key0) {
	NimStringDesc* result0;
	NI index0;
	result0 = (NimStringDesc*)0;
	index0 = rawget_152806_603679043(t0, key0);
	{
		if (!(((NI) 0) <= index0)) goto LA3;
		result0 = copyString((*t0).data->data[index0].Field1);
	}
	goto LA1;
	LA3: ;
	{
		result0 = copyString(((NimStringDesc*) &T603679043_10));
	}
	LA1: ;
	return result0;
}

N_NIMCALL(NI, nstlen)(Stringtableobj152608* t0) {
	NI result0;
	result0 = (NI)0;
	result0 = (*t0).counter;
	return result0;
}

static N_INLINE(void, appendChar)(NimStringDesc* dest0, NIM_CHAR c0) {
	(*dest0).data[((*dest0).Sup.len)- 0] = c0;
	(*dest0).data[((NI)((*dest0).Sup.len + ((NI) 1)))- 0] = 0;
	(*dest0).Sup.len += ((NI) 1);
}

N_NIMCALL(void, raiseformatexception_153313_603679043)(NimStringDesc* s0) {
	Valueerror3646* e0;
	NimStringDesc* LOC1;
	e0 = (Valueerror3646*)0;
	e0 = (Valueerror3646*) newObj((&NTI23025), sizeof(Valueerror3646));
	(*e0).Sup.Sup.m_type = (&NTI3646);
	LOC1 = (NimStringDesc*)0;
	LOC1 = rawNewString(s0->Sup.len + 30);
appendString(LOC1, ((NimStringDesc*) &T603679043_11));
appendString(LOC1, s0);
	asgnRefNoCycle((void**) (&(*e0).Sup.message), LOC1);
	raiseException((Exception*)e0, "ValueError");
}

N_NIMCALL(NimStringDesc*, getvalue_153327_603679043)(Stringtableobj152608* t0, Formatflag152702Set flags0, NimStringDesc* key0) {
	NimStringDesc* result0;
{	result0 = (NimStringDesc*)0;
	{
		NIM_BOOL LOC3;
		LOC3 = (NIM_BOOL)0;
		LOC3 = nsthasKey(t0, key0);
		if (!LOC3) goto LA4;
		result0 = getordefault_153214_603679043(t0, key0);
		goto BeforeRet;
	}
	LA4: ;
	{
		if (!((flags0 &(1U<<((NU)(((Formatflag152702) 0))&7U)))!=0)) goto LA8;
		result0 = getenv_135624_2125978480(key0);
	}
	goto LA6;
	LA8: ;
	{
		result0 = copyString(((NimStringDesc*) &T603679043_10));
	}
	LA6: ;
	{
		if (!((result0 ? result0->Sup.len : 0) == ((NI) 0))) goto LA13;
		{
			NimStringDesc* LOC19;
			if (!((flags0 &(1U<<((NU)(((Formatflag152702) 2))&7U)))!=0)) goto LA17;
			LOC19 = (NimStringDesc*)0;
			LOC19 = rawNewString(key0->Sup.len + 1);
appendChar(LOC19, 36);
appendString(LOC19, key0);
			result0 = LOC19;
		}
		goto LA15;
		LA17: ;
		{
			if (!!(((flags0 &(1U<<((NU)(((Formatflag152702) 1))&7U)))!=0))) goto LA21;
			raiseformatexception_153313_603679043(key0);
		}
		goto LA15;
		LA21: ;
		LA15: ;
	}
	LA13: ;
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(NimStringDesc*, nstFormat)(NimStringDesc* f0, Stringtableobj152608* t0, Formatflag152702Set flags0) {
	NimStringDesc* result0;
	NI i0;
	result0 = (NimStringDesc*)0;
	result0 = copyString(((NimStringDesc*) &T603679043_10));
	i0 = ((NI) 0);
	{
		while (1) {
			if (!(i0 < (f0 ? f0->Sup.len : 0))) goto LA2;
			{
				if (!((NU8)(f0->data[i0]) == (NU8)(36))) goto LA5;
				switch (((NU8)(f0->data[(NI)(i0 + ((NI) 1))]))) {
				case 36:
				{
					result0 = addChar(result0, 36);
					i0 += ((NI) 2);
				}
				break;
				case 123:
				{
					NI j0;
					NimStringDesc* LOC13;
					NimStringDesc* LOC14;
					j0 = (NI)(i0 + ((NI) 1));
					{
						while (1) {
							NIM_BOOL LOC11;
							LOC11 = (NIM_BOOL)0;
							LOC11 = (j0 < (f0 ? f0->Sup.len : 0));
							if (!(LOC11)) goto LA12;
							LOC11 = !(((NU8)(f0->data[j0]) == (NU8)(125)));
							LA12: ;
							if (!LOC11) goto LA10;
							j0 += ((NI) 1);
						} LA10: ;
					}
					LOC13 = (NimStringDesc*)0;
					LOC13 = copyStrLast(f0, (NI)(i0 + ((NI) 2)), (NI)(j0 - ((NI) 1)));
					LOC14 = (NimStringDesc*)0;
					LOC14 = getvalue_153327_603679043(t0, flags0, LOC13);
					result0 = resizeString(result0, LOC14->Sup.len + 0);
appendString(result0, LOC14);
					i0 = (NI)(j0 + ((NI) 1));
				}
				break;
				case 97 ... 122:
				case 65 ... 90:
				case 128 ... 255:
				case 95:
				{
					NI j0;
					NimStringDesc* LOC20;
					NimStringDesc* LOC21;
					j0 = (NI)(i0 + ((NI) 1));
					{
						while (1) {
							NIM_BOOL LOC18;
							LOC18 = (NIM_BOOL)0;
							LOC18 = (j0 < (f0 ? f0->Sup.len : 0));
							if (!(LOC18)) goto LA19;
							LOC18 = (((NU8)(f0->data[j0])) >= ((NU8)(97)) && ((NU8)(f0->data[j0])) <= ((NU8)(122)) || ((NU8)(f0->data[j0])) >= ((NU8)(65)) && ((NU8)(f0->data[j0])) <= ((NU8)(90)) || ((NU8)(f0->data[j0])) >= ((NU8)(48)) && ((NU8)(f0->data[j0])) <= ((NU8)(57)) || ((NU8)(f0->data[j0])) == ((NU8)(95)) || ((NU8)(f0->data[j0])) >= ((NU8)(128)) && ((NU8)(f0->data[j0])) <= ((NU8)(255)));
							LA19: ;
							if (!LOC18) goto LA17;
							j0 += ((NI) 1);
						} LA17: ;
					}
					LOC20 = (NimStringDesc*)0;
					LOC20 = copyStrLast(f0, (NI)(i0 + ((NI) 1)), (NI)(j0 - ((NI) 1)));
					LOC21 = (NimStringDesc*)0;
					LOC21 = getvalue_153327_603679043(t0, flags0, LOC20);
					result0 = resizeString(result0, LOC21->Sup.len + 0);
appendString(result0, LOC21);
					i0 = j0;
				}
				break;
				default:
				{
					result0 = addChar(result0, f0->data[i0]);
					i0 += ((NI) 1);
				}
				break;
				}
			}
			goto LA3;
			LA5: ;
			{
				result0 = addChar(result0, f0->data[i0]);
				i0 += ((NI) 1);
			}
			LA3: ;
		} LA2: ;
	}
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_strtabsInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_strtabsDatInit000)(void) {
static TNimNode* T603679043_2[3];
static TNimNode* T603679043_3[2];
static TNimNode* T603679043_5[3];
NI T603679043_7;
static char* NIM_CONST T603679043_6[3] = {
"modeCaseSensitive", 
"modeCaseInsensitive", 
"modeStyleInsensitive"};
static TNimNode T603679043_0[11];
NTI152608.size = sizeof(Stringtableobj152608);
NTI152608.kind = 17;
NTI152608.base = (&NTI3608);
T603679043_2[0] = &T603679043_0[1];
T603679043_0[1].kind = 1;
T603679043_0[1].offset = offsetof(Stringtableobj152608, counter);
T603679043_0[1].typ = (&NTI104);
T603679043_0[1].name = "counter";
T603679043_2[1] = &T603679043_0[2];
NTI152604.size = sizeof(Keyvaluepair152604);
NTI152604.kind = 18;
NTI152604.base = 0;
NTI152604.flags = 2;
T603679043_3[0] = &T603679043_0[4];
T603679043_0[4].kind = 1;
T603679043_0[4].offset = offsetof(Keyvaluepair152604, Field0);
T603679043_0[4].typ = (&NTI138);
T603679043_0[4].name = "Field0";
T603679043_3[1] = &T603679043_0[5];
T603679043_0[5].kind = 1;
T603679043_0[5].offset = offsetof(Keyvaluepair152604, Field1);
T603679043_0[5].typ = (&NTI138);
T603679043_0[5].name = "Field1";
T603679043_0[3].len = 2; T603679043_0[3].kind = 2; T603679043_0[3].sons = &T603679043_3[0];
NTI152604.node = &T603679043_0[3];
NTI152606.size = sizeof(Keyvaluepairseq152606*);
NTI152606.kind = 24;
NTI152606.base = (&NTI152604);
NTI152606.flags = 2;
NTI152606.marker = T603679043_4;
T603679043_0[2].kind = 1;
T603679043_0[2].offset = offsetof(Stringtableobj152608, data);
T603679043_0[2].typ = (&NTI152606);
T603679043_0[2].name = "data";
T603679043_2[2] = &T603679043_0[6];
NTI152602.size = sizeof(Stringtablemode152602);
NTI152602.kind = 14;
NTI152602.base = 0;
NTI152602.flags = 3;
for (T603679043_7 = 0; T603679043_7 < 3; T603679043_7++) {
T603679043_0[T603679043_7+7].kind = 1;
T603679043_0[T603679043_7+7].offset = T603679043_7;
T603679043_0[T603679043_7+7].name = T603679043_6[T603679043_7];
T603679043_5[T603679043_7] = &T603679043_0[T603679043_7+7];
}
T603679043_0[10].len = 3; T603679043_0[10].kind = 2; T603679043_0[10].sons = &T603679043_5[0];
NTI152602.node = &T603679043_0[10];
T603679043_0[6].kind = 1;
T603679043_0[6].offset = offsetof(Stringtableobj152608, mode);
T603679043_0[6].typ = (&NTI152602);
T603679043_0[6].name = "mode";
T603679043_0[0].len = 3; T603679043_0[0].kind = 2; T603679043_0[0].sons = &T603679043_2[0];
NTI152608.node = &T603679043_0[0];
NTI152610.size = sizeof(Stringtableobj152608*);
NTI152610.kind = 22;
NTI152610.base = (&NTI152608);
NTI152610.marker = T603679043_8;
}

