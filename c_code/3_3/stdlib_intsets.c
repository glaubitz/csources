/* Generated by Nim Compiler v0.14.3 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
typedef struct Intset269030 Intset269030;
typedef struct Trunk269026 Trunk269026;
typedef struct Trunkseq269028 Trunkseq269028;
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
typedef struct Basechunk29438 Basechunk29438;
typedef struct Freecell29430 Freecell29430;
struct  Intset269030  {
NI counter;
NI max;
Trunk269026* head;
Trunkseq269028* data;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
typedef NI TY29419[8];
struct  Trunk269026  {
Trunk269026* next;
NI key;
TY29419 bits;
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
struct Trunkseq269028 {
  TGenericSeq Sup;
  Trunk269026* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d0, NI op0);
N_NIMCALL(void, T2627731572_3)(void* p, NI op);
N_NIMCALL(void, T2627731572_4)(void* p, NI op);
N_NIMCALL(void*, newSeq)(TNimType* typ0, NI len0);
N_NIMCALL(void, unsureAsgnRef)(void** dest0, void* src0);
N_NIMCALL(Trunk269026*, intsetput_269661_2627731572)(Intset269030* t0, NI key0);
static N_INLINE(NI, nexttry_269201_2627731572)(NI h0, NI maxhash0);
static N_INLINE(NIM_BOOL, mustrehash_269048_2627731572)(NI length0, NI counter0);
N_NIMCALL(void, intsetenlarge_269602_2627731572)(Intset269030* t0);
N_NIMCALL(void, intsetrawinsert_269225_2627731572)(Intset269030* t0, Trunkseq269028** data0, Trunk269026* desc0);
static N_INLINE(void, asgnRef)(void** dest0, void* src0);
static N_INLINE(void, incref_53419_1689653243)(Cell47304* c0);
static N_INLINE(Cell47304*, usrtocell_51440_1689653243)(void* usr0);
static N_INLINE(void, decref_53001_1689653243)(Cell47304* c0);
static N_INLINE(void, rtladdzct_52601_1689653243)(Cell47304* c0);
N_NOINLINE(void, addzct_51417_1689653243)(Cellseq47320* s0, Cell47304* c0);
N_NIMCALL(void*, newObj)(TNimType* typ0, NI size0);
N_NIMCALL(Trunk269026*, intsetget_269206_2627731572)(Intset269030* t0, NI key0);
N_NIMCALL(void, incl_269832_2627731572)(Intset269030* s0, NI key0);
TNimType NTI269026; /* Trunk */
extern TNimType NTI104; /* int */
extern TNimType NTI29419; /* array[0..7, int] */
TNimType NTI269024; /* PTrunk */
TNimType NTI269028; /* TrunkSeq */
extern Gcheap49818 gch_49858_1689653243;
TNimType NTI269030; /* IntSet */
N_NIMCALL(void, T2627731572_3)(void* p, NI op) {
	Trunk269026* a;
	NI LOC1;
	a = (Trunk269026*)p;
	nimGCvisit((void*)(*a).next, op);
	LOC1 = (NI)0;
	for (LOC1 = 0; LOC1 < 8; LOC1++) {
	}
}
N_NIMCALL(void, T2627731572_4)(void* p, NI op) {
	Trunkseq269028* a;
	NI LOC1;
	a = (Trunkseq269028*)p;
	LOC1 = (NI)0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1], op);
	}
}

N_NIMCALL(void, initintset_269885_2627731572)(Intset269030* Result) {
	unsureAsgnRef((void**) (&(*Result).data), (Trunkseq269028*) newSeq((&NTI269028), ((NI) 8)));
	(*Result).max = ((NI) 7);
	(*Result).counter = ((NI) 0);
	unsureAsgnRef((void**) (&(*Result).head), NIM_NIL);
}

static N_INLINE(NI, nexttry_269201_2627731572)(NI h0, NI maxhash0) {
	NI result0;
	result0 = (NI)0;
	result0 = (NI)((NI)((NI)(((NI) 5) * h0) + ((NI) 1)) & maxhash0);
	return result0;
}

static N_INLINE(NIM_BOOL, mustrehash_269048_2627731572)(NI length0, NI counter0) {
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

N_NIMCALL(void, intsetrawinsert_269225_2627731572)(Intset269030* t0, Trunkseq269028** data0, Trunk269026* desc0) {
	NI h0;
	h0 = (NI)((*desc0).key & (*t0).max);
	{
		while (1) {
			if (!!(((*data0)->data[h0] == NIM_NIL))) goto LA2;
			h0 = nexttry_269201_2627731572(h0, (*t0).max);
		} LA2: ;
	}
	asgnRef((void**) (&(*data0)->data[h0]), desc0);
}

N_NIMCALL(void, intsetenlarge_269602_2627731572)(Intset269030* t0) {
	Trunkseq269028* n0;
	NI oldmax0;
	Trunkseq269028* LOC8;
	n0 = (Trunkseq269028*)0;
	oldmax0 = (*t0).max;
	(*t0).max = (NI)((NI)((NI)((*t0).max + ((NI) 1)) * ((NI) 2)) - ((NI) 1));
	n0 = (Trunkseq269028*) newSeq((&NTI269028), ((NI) ((NI)((*t0).max + ((NI) 1)))));
	{
		NI i_269629_2627731572;
		NI res_269657_2627731572;
		i_269629_2627731572 = (NI)0;
		res_269657_2627731572 = ((NI) 0);
		{
			while (1) {
				if (!(res_269657_2627731572 <= oldmax0)) goto LA3;
				i_269629_2627731572 = res_269657_2627731572;
				{
					if (!!(((*t0).data->data[i_269629_2627731572] == NIM_NIL))) goto LA6;
					intsetrawinsert_269225_2627731572((&(*t0)), (&n0), (*t0).data->data[i_269629_2627731572]);
				}
				LA6: ;
				res_269657_2627731572 += ((NI) 1);
			} LA3: ;
		}
	}
	LOC8 = (Trunkseq269028*)0;
	LOC8 = (*t0).data;
	unsureAsgnRef((void**) (&(*t0).data), n0);
	n0 = LOC8;
}

N_NIMCALL(Trunk269026*, intsetput_269661_2627731572)(Intset269030* t0, NI key0) {
	Trunk269026* result0;
	NI h0;
{	result0 = (Trunk269026*)0;
	h0 = (NI)(key0 & (*t0).max);
	{
		while (1) {
			if (!!(((*t0).data->data[h0] == NIM_NIL))) goto LA2;
			{
				if (!((*(*t0).data->data[h0]).key == key0)) goto LA5;
				result0 = (*t0).data->data[h0];
				goto BeforeRet;
			}
			LA5: ;
			h0 = nexttry_269201_2627731572(h0, (*t0).max);
		} LA2: ;
	}
	{
		NIM_BOOL LOC9;
		LOC9 = (NIM_BOOL)0;
		LOC9 = mustrehash_269048_2627731572((NI)((*t0).max + ((NI) 1)), (*t0).counter);
		if (!LOC9) goto LA10;
		intsetenlarge_269602_2627731572(t0);
	}
	LA10: ;
	(*t0).counter += ((NI) 1);
	h0 = (NI)(key0 & (*t0).max);
	{
		while (1) {
			if (!!(((*t0).data->data[h0] == NIM_NIL))) goto LA13;
			h0 = nexttry_269201_2627731572(h0, (*t0).max);
		} LA13: ;
	}
	result0 = (Trunk269026*) newObj((&NTI269024), sizeof(Trunk269026));
	asgnRef((void**) (&(*result0).next), (*t0).head);
	(*result0).key = key0;
	unsureAsgnRef((void**) (&(*t0).head), result0);
	asgnRef((void**) (&(*t0).data->data[h0]), result0);
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(void, incl_269832_2627731572)(Intset269030* s0, NI key0) {
	Trunk269026* t0;
	NI u0;
	t0 = intsetput_269661_2627731572(s0, (NI)((NU64)(key0) >> (NU64)(((NI) 9))));
	u0 = (NI)(key0 & ((NI) 511));
	(*t0).bits[((NI)((NU64)(((NI) (u0))) >> (NU64)(((NI) 6))))- 0] = (NI)((*t0).bits[((NI)((NU64)(((NI) (u0))) >> (NU64)(((NI) 6))))- 0] | (NI)((NU64)(((NI) 1)) << (NU64)(((NI) ((NI)(((NI) (u0)) & ((NI) 63)))))));
}

N_NIMCALL(Trunk269026*, intsetget_269206_2627731572)(Intset269030* t0, NI key0) {
	Trunk269026* result0;
	NI h0;
{	result0 = (Trunk269026*)0;
	h0 = (NI)(key0 & (*t0).max);
	{
		while (1) {
			if (!!(((*t0).data->data[h0] == NIM_NIL))) goto LA2;
			{
				if (!((*(*t0).data->data[h0]).key == key0)) goto LA5;
				result0 = (*t0).data->data[h0];
				goto BeforeRet;
			}
			LA5: ;
			h0 = nexttry_269201_2627731572(h0, (*t0).max);
		} LA2: ;
	}
	result0 = NIM_NIL;
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(NIM_BOOL, containsorincl_269862_2627731572)(Intset269030* s0, NI key0) {
	NIM_BOOL result0;
	Trunk269026* t0;
	result0 = (NIM_BOOL)0;
	t0 = intsetget_269206_2627731572((&(*s0)), (NI)((NU64)(key0) >> (NU64)(((NI) 9))));
	{
		NI u0;
		if (!!((t0 == NIM_NIL))) goto LA3;
		u0 = (NI)(key0 & ((NI) 511));
		result0 = !(((NI)((*t0).bits[((NI)((NU64)(((NI) (u0))) >> (NU64)(((NI) 6))))- 0] & (NI)((NU64)(((NI) 1)) << (NU64)(((NI) ((NI)(((NI) (u0)) & ((NI) 63))))))) == ((NI) 0)));
		{
			if (!!(result0)) goto LA7;
			(*t0).bits[((NI)((NU64)(((NI) (u0))) >> (NU64)(((NI) 6))))- 0] = (NI)((*t0).bits[((NI)((NU64)(((NI) (u0))) >> (NU64)(((NI) 6))))- 0] | (NI)((NU64)(((NI) 1)) << (NU64)(((NI) ((NI)(((NI) (u0)) & ((NI) 63)))))));
		}
		LA7: ;
	}
	goto LA1;
	LA3: ;
	{
		incl_269832_2627731572(s0, key0);
		result0 = NIM_FALSE;
	}
	LA1: ;
	return result0;
}

N_NIMCALL(NIM_BOOL, contains_269811_2627731572)(Intset269030* s0, NI key0) {
	NIM_BOOL result0;
	Trunk269026* t0;
	result0 = (NIM_BOOL)0;
	t0 = intsetget_269206_2627731572(s0, (NI)((NU64)(key0) >> (NU64)(((NI) 9))));
	{
		NI u0;
		if (!!((t0 == NIM_NIL))) goto LA3;
		u0 = (NI)(key0 & ((NI) 511));
		result0 = !(((NI)((*t0).bits[((NI)((NU64)(((NI) (u0))) >> (NU64)(((NI) 6))))- 0] & (NI)((NU64)(((NI) 1)) << (NU64)(((NI) ((NI)(((NI) (u0)) & ((NI) 63))))))) == ((NI) 0)));
	}
	goto LA1;
	LA3: ;
	{
		result0 = NIM_FALSE;
	}
	LA1: ;
	return result0;
}

N_NIMCALL(void, assign_269941_2627731572)(Intset269030* dest0, Intset269030* src0) {
	Trunk269026* it0;
	(*dest0).counter = (*src0).counter;
	(*dest0).max = (*src0).max;
	unsureAsgnRef((void**) (&(*dest0).data), (Trunkseq269028*) newSeq((&NTI269028), ((NI) (((*src0).data ? (*src0).data->Sup.len : 0)))));
	it0 = (*src0).head;
	{
		while (1) {
			NI h0;
			Trunk269026* n0;
			if (!!((it0 == NIM_NIL))) goto LA2;
			h0 = (NI)((*it0).key & (*dest0).max);
			{
				while (1) {
					if (!!(((*dest0).data->data[h0] == NIM_NIL))) goto LA4;
					h0 = nexttry_269201_2627731572(h0, (*dest0).max);
				} LA4: ;
			}
			n0 = (Trunk269026*)0;
			n0 = (Trunk269026*) newObj((&NTI269024), sizeof(Trunk269026));
			asgnRef((void**) (&(*n0).next), (*dest0).head);
			(*n0).key = (*it0).key;
			memcpy((void*)(*n0).bits, (NIM_CONST void*)(*it0).bits, sizeof(TY29419));
			unsureAsgnRef((void**) (&(*dest0).head), n0);
			asgnRef((void**) (&(*dest0).data->data[h0]), n0);
			it0 = (*it0).next;
		} LA2: ;
	}
}

N_NIMCALL(void, excl_269841_2627731572)(Intset269030* s0, NI key0) {
	Trunk269026* t0;
	t0 = intsetget_269206_2627731572((&(*s0)), (NI)((NU64)(key0) >> (NU64)(((NI) 9))));
	{
		NI u0;
		if (!!((t0 == NIM_NIL))) goto LA3;
		u0 = (NI)(key0 & ((NI) 511));
		(*t0).bits[((NI)((NU64)(((NI) (u0))) >> (NU64)(((NI) 6))))- 0] = (NI)((*t0).bits[((NI)((NU64)(((NI) (u0))) >> (NU64)(((NI) 6))))- 0] & (NI)((NU64) ~((NI)((NU64)(((NI) 1)) << (NU64)(((NI) ((NI)(((NI) (u0)) & ((NI) 63)))))))));
	}
	LA3: ;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_intsetsInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_intsetsDatInit000)(void) {
static TNimNode* T2627731572_2[3];
static TNimNode* T2627731572_5[4];
static TNimNode T2627731572_0[9];
NTI269026.size = sizeof(Trunk269026);
NTI269026.kind = 18;
NTI269026.base = 0;
T2627731572_2[0] = &T2627731572_0[1];
T2627731572_0[1].kind = 1;
T2627731572_0[1].offset = offsetof(Trunk269026, next);
T2627731572_0[1].typ = (&NTI269024);
T2627731572_0[1].name = "next";
T2627731572_2[1] = &T2627731572_0[2];
T2627731572_0[2].kind = 1;
T2627731572_0[2].offset = offsetof(Trunk269026, key);
T2627731572_0[2].typ = (&NTI104);
T2627731572_0[2].name = "key";
T2627731572_2[2] = &T2627731572_0[3];
T2627731572_0[3].kind = 1;
T2627731572_0[3].offset = offsetof(Trunk269026, bits);
T2627731572_0[3].typ = (&NTI29419);
T2627731572_0[3].name = "bits";
T2627731572_0[0].len = 3; T2627731572_0[0].kind = 2; T2627731572_0[0].sons = &T2627731572_2[0];
NTI269026.node = &T2627731572_0[0];
NTI269024.size = sizeof(Trunk269026*);
NTI269024.kind = 22;
NTI269024.base = (&NTI269026);
NTI269024.marker = T2627731572_3;
NTI269028.size = sizeof(Trunkseq269028*);
NTI269028.kind = 24;
NTI269028.base = (&NTI269024);
NTI269028.flags = 2;
NTI269028.marker = T2627731572_4;
NTI269030.size = sizeof(Intset269030);
NTI269030.kind = 18;
NTI269030.base = 0;
NTI269030.flags = 2;
T2627731572_5[0] = &T2627731572_0[5];
T2627731572_0[5].kind = 1;
T2627731572_0[5].offset = offsetof(Intset269030, counter);
T2627731572_0[5].typ = (&NTI104);
T2627731572_0[5].name = "counter";
T2627731572_5[1] = &T2627731572_0[6];
T2627731572_0[6].kind = 1;
T2627731572_0[6].offset = offsetof(Intset269030, max);
T2627731572_0[6].typ = (&NTI104);
T2627731572_0[6].name = "max";
T2627731572_5[2] = &T2627731572_0[7];
T2627731572_0[7].kind = 1;
T2627731572_0[7].offset = offsetof(Intset269030, head);
T2627731572_0[7].typ = (&NTI269024);
T2627731572_0[7].name = "head";
T2627731572_5[3] = &T2627731572_0[8];
T2627731572_0[8].kind = 1;
T2627731572_0[8].offset = offsetof(Intset269030, data);
T2627731572_0[8].typ = (&NTI269028);
T2627731572_0[8].name = "data";
T2627731572_0[4].len = 4; T2627731572_0[4].kind = 2; T2627731572_0[4].sons = &T2627731572_5[0];
NTI269030.node = &T2627731572_0[4];
}

