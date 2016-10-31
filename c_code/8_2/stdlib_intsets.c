/* Generated by Nim Compiler v0.14.3 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
typedef struct Intset268030 Intset268030;
typedef struct Trunk268026 Trunk268026;
typedef struct Trunkseq268028 Trunkseq268028;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
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
typedef struct Basechunk29838 Basechunk29838;
typedef struct Freecell29830 Freecell29830;
struct  Intset268030  {
NI counter;
NI max;
Trunk268026* head;
Trunkseq268028* data;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
typedef NI TY29819[8];
struct  Trunk268026  {
Trunk268026* next;
NI key;
TY29819 bits;
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
struct Trunkseq268028 {
  TGenericSeq Sup;
  Trunk268026* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d0, NI op0);
N_NIMCALL(void, T2627731572_3)(void* p, NI op);
N_NIMCALL(void, T2627731572_4)(void* p, NI op);
N_NIMCALL(void*, newSeq)(TNimType* typ0, NI len0);
N_NIMCALL(void, unsureAsgnRef)(void** dest0, void* src0);
N_NIMCALL(Trunk268026*, intsetput_268661_2627731572)(Intset268030* t0, NI key0);
static N_INLINE(NI, nexttry_268201_2627731572)(NI h0, NI maxhash0);
static N_INLINE(NIM_BOOL, mustrehash_268048_2627731572)(NI length0, NI counter0);
N_NIMCALL(void, intsetenlarge_268602_2627731572)(Intset268030* t0);
N_NIMCALL(void, intsetrawinsert_268225_2627731572)(Intset268030* t0, Trunkseq268028** data0, Trunk268026* desc0);
static N_INLINE(void, asgnRef)(void** dest0, void* src0);
static N_INLINE(void, incref_53819_1689653243)(Cell47705* c0);
static N_INLINE(Cell47705*, usrtocell_51840_1689653243)(void* usr0);
static N_INLINE(void, decref_53401_1689653243)(Cell47705* c0);
static N_INLINE(void, rtladdzct_53001_1689653243)(Cell47705* c0);
N_NOINLINE(void, addzct_51817_1689653243)(Cellseq47721* s0, Cell47705* c0);
N_NIMCALL(void*, newObj)(TNimType* typ0, NI size0);
N_NIMCALL(Trunk268026*, intsetget_268206_2627731572)(Intset268030* t0, NI key0);
N_NIMCALL(void, incl_268832_2627731572)(Intset268030* s0, NI key0);
TNimType NTI268026; /* Trunk */
extern TNimType NTI104; /* int */
extern TNimType NTI29819; /* array[0..7, int] */
TNimType NTI268024; /* PTrunk */
TNimType NTI268028; /* TrunkSeq */
extern Gcheap50218 gch_50258_1689653243;
TNimType NTI268030; /* IntSet */
N_NIMCALL(void, T2627731572_3)(void* p, NI op) {
	Trunk268026* a;
	NI LOC1;
	a = (Trunk268026*)p;
	nimGCvisit((void*)(*a).next, op);
	LOC1 = (NI)0;
	for (LOC1 = 0; LOC1 < 8; LOC1++) {
	}
}
N_NIMCALL(void, T2627731572_4)(void* p, NI op) {
	Trunkseq268028* a;
	NI LOC1;
	a = (Trunkseq268028*)p;
	LOC1 = (NI)0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1], op);
	}
}

N_NIMCALL(void, initintset_268885_2627731572)(Intset268030* Result) {
	unsureAsgnRef((void**) (&(*Result).data), (Trunkseq268028*) newSeq((&NTI268028), ((NI) 8)));
	(*Result).max = ((NI) 7);
	(*Result).counter = ((NI) 0);
	unsureAsgnRef((void**) (&(*Result).head), NIM_NIL);
}

static N_INLINE(NI, nexttry_268201_2627731572)(NI h0, NI maxhash0) {
	NI result0;
	result0 = (NI)0;
	result0 = (NI)((NI)((NI)(((NI) 5) * h0) + ((NI) 1)) & maxhash0);
	return result0;
}

static N_INLINE(NIM_BOOL, mustrehash_268048_2627731572)(NI length0, NI counter0) {
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

static N_INLINE(void, incref_53819_1689653243)(Cell47705* c0) {
	(*c0).refcount = (NI)((NU64)((*c0).refcount) + (NU64)(((NI) 8)));
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

static N_INLINE(void, decref_53401_1689653243)(Cell47705* c0) {
	{
		(*c0).refcount -= ((NI) 8);
		if (!((NU64)((*c0).refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_53001_1689653243(c0);
	}
	LA3: ;
}

static N_INLINE(void, asgnRef)(void** dest0, void* src0) {
	{
		Cell47705* LOC5;
		if (!!((src0 == NIM_NIL))) goto LA3;
		LOC5 = (Cell47705*)0;
		LOC5 = usrtocell_51840_1689653243(src0);
		incref_53819_1689653243(LOC5);
	}
	LA3: ;
	{
		Cell47705* LOC10;
		if (!!(((*dest0) == NIM_NIL))) goto LA8;
		LOC10 = (Cell47705*)0;
		LOC10 = usrtocell_51840_1689653243((*dest0));
		decref_53401_1689653243(LOC10);
	}
	LA8: ;
	(*dest0) = src0;
}

N_NIMCALL(void, intsetrawinsert_268225_2627731572)(Intset268030* t0, Trunkseq268028** data0, Trunk268026* desc0) {
	NI h0;
	h0 = (NI)((*desc0).key & (*t0).max);
	{
		while (1) {
			if (!!(((*data0)->data[h0] == NIM_NIL))) goto LA2;
			h0 = nexttry_268201_2627731572(h0, (*t0).max);
		} LA2: ;
	}
	asgnRef((void**) (&(*data0)->data[h0]), desc0);
}

N_NIMCALL(void, intsetenlarge_268602_2627731572)(Intset268030* t0) {
	Trunkseq268028* n0;
	NI oldmax0;
	Trunkseq268028* LOC8;
	n0 = (Trunkseq268028*)0;
	oldmax0 = (*t0).max;
	(*t0).max = (NI)((NI)((NI)((*t0).max + ((NI) 1)) * ((NI) 2)) - ((NI) 1));
	n0 = (Trunkseq268028*) newSeq((&NTI268028), ((NI) ((NI)((*t0).max + ((NI) 1)))));
	{
		NI i_268629_2627731572;
		NI res_268657_2627731572;
		i_268629_2627731572 = (NI)0;
		res_268657_2627731572 = ((NI) 0);
		{
			while (1) {
				if (!(res_268657_2627731572 <= oldmax0)) goto LA3;
				i_268629_2627731572 = res_268657_2627731572;
				{
					if (!!(((*t0).data->data[i_268629_2627731572] == NIM_NIL))) goto LA6;
					intsetrawinsert_268225_2627731572((&(*t0)), (&n0), (*t0).data->data[i_268629_2627731572]);
				}
				LA6: ;
				res_268657_2627731572 += ((NI) 1);
			} LA3: ;
		}
	}
	LOC8 = (Trunkseq268028*)0;
	LOC8 = (*t0).data;
	unsureAsgnRef((void**) (&(*t0).data), n0);
	n0 = LOC8;
}

N_NIMCALL(Trunk268026*, intsetput_268661_2627731572)(Intset268030* t0, NI key0) {
	Trunk268026* result0;
	NI h0;
{	result0 = (Trunk268026*)0;
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
			h0 = nexttry_268201_2627731572(h0, (*t0).max);
		} LA2: ;
	}
	{
		NIM_BOOL LOC9;
		LOC9 = (NIM_BOOL)0;
		LOC9 = mustrehash_268048_2627731572((NI)((*t0).max + ((NI) 1)), (*t0).counter);
		if (!LOC9) goto LA10;
		intsetenlarge_268602_2627731572(t0);
	}
	LA10: ;
	(*t0).counter += ((NI) 1);
	h0 = (NI)(key0 & (*t0).max);
	{
		while (1) {
			if (!!(((*t0).data->data[h0] == NIM_NIL))) goto LA13;
			h0 = nexttry_268201_2627731572(h0, (*t0).max);
		} LA13: ;
	}
	result0 = (Trunk268026*) newObj((&NTI268024), sizeof(Trunk268026));
	asgnRef((void**) (&(*result0).next), (*t0).head);
	(*result0).key = key0;
	unsureAsgnRef((void**) (&(*t0).head), result0);
	asgnRef((void**) (&(*t0).data->data[h0]), result0);
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(void, incl_268832_2627731572)(Intset268030* s0, NI key0) {
	Trunk268026* t0;
	NI u0;
	t0 = intsetput_268661_2627731572(s0, (NI)((NU64)(key0) >> (NU64)(((NI) 9))));
	u0 = (NI)(key0 & ((NI) 511));
	(*t0).bits[((NI)((NU64)(((NI) (u0))) >> (NU64)(((NI) 6))))- 0] = (NI)((*t0).bits[((NI)((NU64)(((NI) (u0))) >> (NU64)(((NI) 6))))- 0] | (NI)((NU64)(((NI) 1)) << (NU64)(((NI) ((NI)(((NI) (u0)) & ((NI) 63)))))));
}

N_NIMCALL(Trunk268026*, intsetget_268206_2627731572)(Intset268030* t0, NI key0) {
	Trunk268026* result0;
	NI h0;
{	result0 = (Trunk268026*)0;
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
			h0 = nexttry_268201_2627731572(h0, (*t0).max);
		} LA2: ;
	}
	result0 = NIM_NIL;
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(NIM_BOOL, containsorincl_268862_2627731572)(Intset268030* s0, NI key0) {
	NIM_BOOL result0;
	Trunk268026* t0;
	result0 = (NIM_BOOL)0;
	t0 = intsetget_268206_2627731572((&(*s0)), (NI)((NU64)(key0) >> (NU64)(((NI) 9))));
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
		incl_268832_2627731572(s0, key0);
		result0 = NIM_FALSE;
	}
	LA1: ;
	return result0;
}

N_NIMCALL(NIM_BOOL, contains_268811_2627731572)(Intset268030* s0, NI key0) {
	NIM_BOOL result0;
	Trunk268026* t0;
	result0 = (NIM_BOOL)0;
	t0 = intsetget_268206_2627731572(s0, (NI)((NU64)(key0) >> (NU64)(((NI) 9))));
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

N_NIMCALL(void, assign_268941_2627731572)(Intset268030* dest0, Intset268030* src0) {
	Trunk268026* it0;
	(*dest0).counter = (*src0).counter;
	(*dest0).max = (*src0).max;
	unsureAsgnRef((void**) (&(*dest0).data), (Trunkseq268028*) newSeq((&NTI268028), ((NI) (((*src0).data ? (*src0).data->Sup.len : 0)))));
	it0 = (*src0).head;
	{
		while (1) {
			NI h0;
			Trunk268026* n0;
			if (!!((it0 == NIM_NIL))) goto LA2;
			h0 = (NI)((*it0).key & (*dest0).max);
			{
				while (1) {
					if (!!(((*dest0).data->data[h0] == NIM_NIL))) goto LA4;
					h0 = nexttry_268201_2627731572(h0, (*dest0).max);
				} LA4: ;
			}
			n0 = (Trunk268026*)0;
			n0 = (Trunk268026*) newObj((&NTI268024), sizeof(Trunk268026));
			asgnRef((void**) (&(*n0).next), (*dest0).head);
			(*n0).key = (*it0).key;
			memcpy((void*)(*n0).bits, (NIM_CONST void*)(*it0).bits, sizeof(TY29819));
			unsureAsgnRef((void**) (&(*dest0).head), n0);
			asgnRef((void**) (&(*dest0).data->data[h0]), n0);
			it0 = (*it0).next;
		} LA2: ;
	}
}

N_NIMCALL(void, excl_268841_2627731572)(Intset268030* s0, NI key0) {
	Trunk268026* t0;
	t0 = intsetget_268206_2627731572((&(*s0)), (NI)((NU64)(key0) >> (NU64)(((NI) 9))));
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
NTI268026.size = sizeof(Trunk268026);
NTI268026.kind = 18;
NTI268026.base = 0;
T2627731572_2[0] = &T2627731572_0[1];
T2627731572_0[1].kind = 1;
T2627731572_0[1].offset = offsetof(Trunk268026, next);
T2627731572_0[1].typ = (&NTI268024);
T2627731572_0[1].name = "next";
T2627731572_2[1] = &T2627731572_0[2];
T2627731572_0[2].kind = 1;
T2627731572_0[2].offset = offsetof(Trunk268026, key);
T2627731572_0[2].typ = (&NTI104);
T2627731572_0[2].name = "key";
T2627731572_2[2] = &T2627731572_0[3];
T2627731572_0[3].kind = 1;
T2627731572_0[3].offset = offsetof(Trunk268026, bits);
T2627731572_0[3].typ = (&NTI29819);
T2627731572_0[3].name = "bits";
T2627731572_0[0].len = 3; T2627731572_0[0].kind = 2; T2627731572_0[0].sons = &T2627731572_2[0];
NTI268026.node = &T2627731572_0[0];
NTI268024.size = sizeof(Trunk268026*);
NTI268024.kind = 22;
NTI268024.base = (&NTI268026);
NTI268024.marker = T2627731572_3;
NTI268028.size = sizeof(Trunkseq268028*);
NTI268028.kind = 24;
NTI268028.base = (&NTI268024);
NTI268028.flags = 2;
NTI268028.marker = T2627731572_4;
NTI268030.size = sizeof(Intset268030);
NTI268030.kind = 18;
NTI268030.base = 0;
NTI268030.flags = 2;
T2627731572_5[0] = &T2627731572_0[5];
T2627731572_0[5].kind = 1;
T2627731572_0[5].offset = offsetof(Intset268030, counter);
T2627731572_0[5].typ = (&NTI104);
T2627731572_0[5].name = "counter";
T2627731572_5[1] = &T2627731572_0[6];
T2627731572_0[6].kind = 1;
T2627731572_0[6].offset = offsetof(Intset268030, max);
T2627731572_0[6].typ = (&NTI104);
T2627731572_0[6].name = "max";
T2627731572_5[2] = &T2627731572_0[7];
T2627731572_0[7].kind = 1;
T2627731572_0[7].offset = offsetof(Intset268030, head);
T2627731572_0[7].typ = (&NTI268024);
T2627731572_0[7].name = "head";
T2627731572_5[3] = &T2627731572_0[8];
T2627731572_0[8].kind = 1;
T2627731572_0[8].offset = offsetof(Intset268030, data);
T2627731572_0[8].typ = (&NTI268028);
T2627731572_0[8].name = "data";
T2627731572_0[4].len = 4; T2627731572_0[4].kind = 2; T2627731572_0[4].sons = &T2627731572_5[0];
NTI268030.node = &T2627731572_0[4];
}

