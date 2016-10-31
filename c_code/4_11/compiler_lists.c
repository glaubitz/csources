/* Generated by Nim Compiler v0.14.3 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
typedef struct Tlinkedlist147013 Tlinkedlist147013;
typedef struct Tlistentry147007 Tlistentry147007;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TNimObject TNimObject;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tstrentry147009 Tstrentry147009;
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
typedef struct Basechunk29438 Basechunk29438;
typedef struct Freecell29430 Freecell29430;
struct  Tlinkedlist147013  {
Tlistentry147007* head;
Tlistentry147007* tail;
NI counter;
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
struct  TNimObject  {
TNimType* m_type;
};
struct  Tlistentry147007  {
  TNimObject Sup;
Tlistentry147007* prev;
Tlistentry147007* next;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tstrentry147009  {
  Tlistentry147007 Sup;
NimStringDesc* data;
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
struct  Freecell29430  {
Freecell29430* next;
NI zerofield;
};
N_NIMCALL(void, nimGCvisit)(void* d0, NI op0);
N_NIMCALL(void, T3771138726_4)(void* p, NI op);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a0, NimStringDesc* b0);
static N_INLINE(NIM_BOOL, equalmem_7495_1689653243)(void* a0, void* b0, NI size0);
N_NIMCALL(void, prepend_147255_3771138726)(Tlinkedlist147013* list0, Tlistentry147007* entry0);
static N_INLINE(void, asgnRef)(void** dest0, void* src0);
static N_INLINE(void, incref_53419_1689653243)(Cell47304* c0);
static N_INLINE(Cell47304*, usrtocell_51440_1689653243)(void* usr0);
static N_INLINE(void, decref_53001_1689653243)(Cell47304* c0);
static N_INLINE(void, rtladdzct_52601_1689653243)(Cell47304* c0);
N_NOINLINE(void, addzct_51417_1689653243)(Cellseq47320* s0, Cell47304* c0);
N_NIMCALL(void, unsureAsgnRef)(void** dest0, void* src0);
N_NIMCALL(Tstrentry147009*, newstrentry_147232_3771138726)(NimStringDesc* data0);
N_NIMCALL(void, T3771138726_5)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ0, NI size0);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src0);
static N_INLINE(void, nimGCunrefNoCycle)(void* p0);
N_NIMCALL(NI, noscmpPaths)(NimStringDesc* patha0, NimStringDesc* pathb0);
N_NIMCALL(void, remove_147633_3771138726)(Tlinkedlist147013* list0, Tlistentry147007* entry0);
N_NIMCALL(void, append_147035_3771138726)(Tlinkedlist147013* list0, Tlistentry147007* entry0);
N_NIMCALL(NIM_BOOL, contains_147213_3771138726)(Tlinkedlist147013* list0, NimStringDesc* data0);
N_NIMCALL(void, appendstr_147244_3771138726)(Tlinkedlist147013* list0, NimStringDesc* data0);
TNimType NTI147013; /* TLinkedList */
extern TNimType NTI3608; /* RootObj */
TNimType NTI147007; /* TListEntry */
TNimType NTI147005; /* PListEntry */
extern TNimType NTI104; /* int */
extern Gcheap49818 gch_49858_1689653243;
TNimType NTI147009; /* TStrEntry */
extern TNimType NTI138; /* string */
TNimType NTI147011; /* PStrEntry */
N_NIMCALL(void, T3771138726_4)(void* p, NI op) {
	Tlistentry147007* a;
	a = (Tlistentry147007*)p;
	nimGCvisit((void*)(*a).prev, op);
	nimGCvisit((void*)(*a).next, op);
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

N_NIMCALL(NIM_BOOL, contains_147213_3771138726)(Tlinkedlist147013* list0, NimStringDesc* data0) {
	NIM_BOOL result0;
	Tlistentry147007* it0;
{	result0 = (NIM_BOOL)0;
	it0 = (*list0).head;
	{
		while (1) {
			if (!!((it0 == NIM_NIL))) goto LA2;
			{
				if (!eqStrings((*((Tstrentry147009*) (it0))).data, data0)) goto LA5;
				result0 = NIM_TRUE;
				goto BeforeRet;
			}
			LA5: ;
			it0 = (*it0).next;
		} LA2: ;
	}
	}BeforeRet: ;
	return result0;
}

static N_INLINE(void, incref_53419_1689653243)(Cell47304* c0) {
	(*c0).refcount = (NI)((NU64)((*c0).refcount) + (NU64)(((NI) 8)));
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

static N_INLINE(void, decref_53001_1689653243)(Cell47304* c0) {
	{
		(*c0).refcount -= ((NI) 8);
		if (!((NU64)((*c0).refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_52601_1689653243(c0);
	}
	LA3: ;
}

static N_INLINE(void, asgnRef)(void** dest0, void* src0) {
	{
		Cell47304* LOC5;
		if (!!((src0 == NIM_NIL))) goto LA3;
		LOC5 = (Cell47304*)0;
		LOC5 = usrtocell_51440_1689653243(src0);
		incref_53419_1689653243(LOC5);
	}
	LA3: ;
	{
		Cell47304* LOC10;
		if (!!(((*dest0) == NIM_NIL))) goto LA8;
		LOC10 = (Cell47304*)0;
		LOC10 = usrtocell_51440_1689653243((*dest0));
		decref_53001_1689653243(LOC10);
	}
	LA8: ;
	(*dest0) = src0;
}

N_NIMCALL(void, prepend_147255_3771138726)(Tlinkedlist147013* list0, Tlistentry147007* entry0) {
	(*list0).counter += ((NI) 1);
	asgnRef((void**) (&(*entry0).prev), NIM_NIL);
	asgnRef((void**) (&(*entry0).next), (*list0).head);
	{
		if (!!(((*list0).head == NIM_NIL))) goto LA3;
		asgnRef((void**) (&(*(*list0).head).prev), entry0);
	}
	LA3: ;
	unsureAsgnRef((void**) (&(*list0).head), entry0);
	{
		if (!((*list0).tail == NIM_NIL)) goto LA7;
		unsureAsgnRef((void**) (&(*list0).tail), entry0);
	}
	LA7: ;
}
N_NIMCALL(void, T3771138726_5)(void* p, NI op) {
	Tstrentry147009* a;
	a = (Tstrentry147009*)p;
	nimGCvisit((void*)(*a).Sup.prev, op);
	nimGCvisit((void*)(*a).Sup.next, op);
	nimGCvisit((void*)(*a).data, op);
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

N_NIMCALL(Tstrentry147009*, newstrentry_147232_3771138726)(NimStringDesc* data0) {
	Tstrentry147009* result0;
	NimStringDesc* LOC1;
	result0 = (Tstrentry147009*)0;
	result0 = (Tstrentry147009*) newObj((&NTI147011), sizeof(Tstrentry147009));
	(*result0).Sup.Sup.m_type = (&NTI147009);
	LOC1 = (NimStringDesc*)0;
	LOC1 = (*result0).data; (*result0).data = copyStringRC1(data0);
	if (LOC1) nimGCunrefNoCycle(LOC1);
	return result0;
}

N_NIMCALL(void, prependstr_147413_3771138726)(Tlinkedlist147013* list0, NimStringDesc* data0) {
	Tstrentry147009* LOC1;
	Tlistentry147007* LOC2;
	LOC1 = (Tstrentry147009*)0;
	LOC1 = newstrentry_147232_3771138726(data0);
	LOC2 = (Tlistentry147007*)0;
	LOC2 = &LOC1->Sup;
	prepend_147255_3771138726(list0, LOC2);
}

N_NIMCALL(void, remove_147633_3771138726)(Tlinkedlist147013* list0, Tlistentry147007* entry0) {
	(*list0).counter -= ((NI) 1);
	{
		if (!(entry0 == (*list0).tail)) goto LA3;
		unsureAsgnRef((void**) (&(*list0).tail), (*entry0).prev);
	}
	LA3: ;
	{
		if (!(entry0 == (*list0).head)) goto LA7;
		unsureAsgnRef((void**) (&(*list0).head), (*entry0).next);
	}
	LA7: ;
	{
		if (!!(((*entry0).next == NIM_NIL))) goto LA11;
		asgnRef((void**) (&(*(*entry0).next).prev), (*entry0).prev);
	}
	LA11: ;
	{
		if (!!(((*entry0).prev == NIM_NIL))) goto LA15;
		asgnRef((void**) (&(*(*entry0).prev).next), (*entry0).next);
	}
	LA15: ;
}

N_NIMCALL(void, excludepath_147801_3771138726)(Tlinkedlist147013* list0, NimStringDesc* data0) {
	Tlistentry147007* it0;
	it0 = (*list0).head;
	{
		while (1) {
			Tlistentry147007* nxt0;
			if (!!((it0 == NIM_NIL))) goto LA2;
			nxt0 = (*it0).next;
			{
				NI LOC5;
				LOC5 = (NI)0;
				LOC5 = noscmpPaths((*((Tstrentry147009*) (it0))).data, data0);
				if (!(LOC5 == ((NI) 0))) goto LA6;
				remove_147633_3771138726(list0, it0);
			}
			LA6: ;
			it0 = nxt0;
		} LA2: ;
	}
}

N_NIMCALL(void, bringtofront_147693_3771138726)(Tlinkedlist147013* list0, Tlistentry147007* entry0) {
	remove_147633_3771138726(list0, entry0);
	prepend_147255_3771138726(list0, entry0);
}

N_NIMCALL(void, append_147035_3771138726)(Tlinkedlist147013* list0, Tlistentry147007* entry0) {
	(*list0).counter += ((NI) 1);
	asgnRef((void**) (&(*entry0).next), NIM_NIL);
	asgnRef((void**) (&(*entry0).prev), (*list0).tail);
	{
		if (!!(((*list0).tail == NIM_NIL))) goto LA3;
		asgnRef((void**) (&(*(*list0).tail).next), entry0);
	}
	LA3: ;
	unsureAsgnRef((void**) (&(*list0).tail), entry0);
	{
		if (!((*list0).head == NIM_NIL)) goto LA7;
		unsureAsgnRef((void**) (&(*list0).head), entry0);
	}
	LA7: ;
}

N_NIMCALL(void, appendstr_147244_3771138726)(Tlinkedlist147013* list0, NimStringDesc* data0) {
	Tstrentry147009* LOC1;
	Tlistentry147007* LOC2;
	LOC1 = (Tstrentry147009*)0;
	LOC1 = newstrentry_147232_3771138726(data0);
	LOC2 = (Tlistentry147007*)0;
	LOC2 = &LOC1->Sup;
	append_147035_3771138726(list0, LOC2);
}

N_NIMCALL(void, initlinkedlist_147031_3771138726)(Tlinkedlist147013* list0) {
	(*list0).counter = ((NI) 0);
	unsureAsgnRef((void**) (&(*list0).head), NIM_NIL);
	unsureAsgnRef((void**) (&(*list0).tail), NIM_NIL);
}

N_NIMCALL(NIM_BOOL, includestr_147249_3771138726)(Tlinkedlist147013* list0, NimStringDesc* data0) {
	NIM_BOOL result0;
{	result0 = (NIM_BOOL)0;
	{
		NIM_BOOL LOC3;
		LOC3 = (NIM_BOOL)0;
		LOC3 = contains_147213_3771138726((&(*list0)), data0);
		if (!LOC3) goto LA4;
		result0 = NIM_TRUE;
		goto BeforeRet;
	}
	LA4: ;
	appendstr_147244_3771138726(list0, data0);
	}BeforeRet: ;
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, compiler_listsInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_listsDatInit000)(void) {
static TNimNode* T3771138726_2[3];
static TNimNode* T3771138726_3[2];
static TNimNode T3771138726_0[8];
NTI147013.size = sizeof(Tlinkedlist147013);
NTI147013.kind = 18;
NTI147013.base = 0;
T3771138726_2[0] = &T3771138726_0[1];
NTI147007.size = sizeof(Tlistentry147007);
NTI147007.kind = 17;
NTI147007.base = (&NTI3608);
T3771138726_3[0] = &T3771138726_0[3];
T3771138726_0[3].kind = 1;
T3771138726_0[3].offset = offsetof(Tlistentry147007, prev);
T3771138726_0[3].typ = (&NTI147005);
T3771138726_0[3].name = "prev";
T3771138726_3[1] = &T3771138726_0[4];
T3771138726_0[4].kind = 1;
T3771138726_0[4].offset = offsetof(Tlistentry147007, next);
T3771138726_0[4].typ = (&NTI147005);
T3771138726_0[4].name = "next";
T3771138726_0[2].len = 2; T3771138726_0[2].kind = 2; T3771138726_0[2].sons = &T3771138726_3[0];
NTI147007.node = &T3771138726_0[2];
NTI147005.size = sizeof(Tlistentry147007*);
NTI147005.kind = 22;
NTI147005.base = (&NTI147007);
NTI147005.marker = T3771138726_4;
T3771138726_0[1].kind = 1;
T3771138726_0[1].offset = offsetof(Tlinkedlist147013, head);
T3771138726_0[1].typ = (&NTI147005);
T3771138726_0[1].name = "head";
T3771138726_2[1] = &T3771138726_0[5];
T3771138726_0[5].kind = 1;
T3771138726_0[5].offset = offsetof(Tlinkedlist147013, tail);
T3771138726_0[5].typ = (&NTI147005);
T3771138726_0[5].name = "tail";
T3771138726_2[2] = &T3771138726_0[6];
T3771138726_0[6].kind = 1;
T3771138726_0[6].offset = offsetof(Tlinkedlist147013, counter);
T3771138726_0[6].typ = (&NTI104);
T3771138726_0[6].name = "counter";
T3771138726_0[0].len = 3; T3771138726_0[0].kind = 2; T3771138726_0[0].sons = &T3771138726_2[0];
NTI147013.node = &T3771138726_0[0];
NTI147009.size = sizeof(Tstrentry147009);
NTI147009.kind = 17;
NTI147009.base = (&NTI147007);
T3771138726_0[7].kind = 1;
T3771138726_0[7].offset = offsetof(Tstrentry147009, data);
T3771138726_0[7].typ = (&NTI138);
T3771138726_0[7].name = "data";
NTI147009.node = &T3771138726_0[7];
NTI147011.size = sizeof(Tstrentry147009*);
NTI147011.kind = 22;
NTI147011.base = (&NTI147009);
NTI147011.marker = T3771138726_5;
}
