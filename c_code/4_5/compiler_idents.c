/* Generated by Nim Compiler v0.14.3 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
typedef struct Tident199010 Tident199010;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Tidobj199004 Tidobj199004;
typedef struct TNimObject TNimObject;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
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
typedef struct Basechunk29437 Basechunk29437;
typedef struct Freecell29429 Freecell29429;
typedef Tident199010* TY199023[8192];
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
struct  Tidobj199004  {
  TNimObject Sup;
NI id;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tident199010  {
  Tidobj199004 Sup;
NimStringDesc* s;
Tident199010* next;
NI h;
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
struct  Freecell29429  {
Freecell29429* next;
NI zerofield;
};
N_NIMCALL(void, nimGCvisit)(void* d0, NI op0);
N_NIMCALL(void, T791273810_3)(void* p, NI op);
N_NIMCALL(void, T791273810_4)(void);
N_NIMCALL(void, nimRegisterGlobalMarker)(Globalmarkerproc55802 markerproc0);
N_NIMCALL(void, T791273810_5)(void);
N_NIMCALL(Tident199010*, getident_199441_791273810)(NimStringDesc* identifier0);
N_NIMCALL(Tident199010*, getident_199211_791273810)(NCSTRING identifier0, NI length0, NI h0);
N_NIMCALL(NI, cmpexact_199165_791273810)(NCSTRING a0, NCSTRING b0, NI blen0);
static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0);
static N_INLINE(Cell47304*, usrtocell_51440_1689653243)(void* usr0);
static N_INLINE(void, rtladdzct_52601_1689653243)(Cell47304* c0);
N_NOINLINE(void, addzct_51417_1689653243)(Cellseq47320* s0, Cell47304* c0);
N_NIMCALL(NI, cmpignorestyle_199026_791273810)(NCSTRING a0, NCSTRING b0, NI blen0);
static N_INLINE(NIM_BOOL, ismagicidentseparatorrune_148005_3239285623)(NCSTRING cs0, NI i0);
N_NIMCALL(void*, newObj)(TNimType* typ0, NI size0);
N_NIMCALL(NimStringDesc*, mnewString)(NI len0);
N_NIMCALL(NimStringDesc*, mnewString)(NI len0);
N_NIMCALL(NI, hashignorestyle_149892_213663784)(NimStringDesc* x0);
N_NIMCALL(void, T791273810_7)(void);
N_NIMCALL(void, T791273810_9)(void* p, NI op);
STRING_LITERAL(T791273810_6, ":anonymous", 10);
STRING_LITERAL(T791273810_8, ":delegator", 10);
NIM_BOOL firstchariscs_199017_791273810;
TY199023 buckets_199024_791273810;
extern TNimType NTI3608; /* RootObj */
TNimType NTI199004; /* TIdObj */
extern TNimType NTI104; /* int */
TNimType NTI199010; /* TIdent */
extern TNimType NTI138; /* string */
extern TNimType NTI149002; /* Hash */
TNimType NTI199008; /* PIdent */
TNimType NTI199023; /* array[0..8191, PIdent] */
NI wordcounter_199210_791273810;
Tident199010* idanon_199455_791273810;
extern Gcheap49818 gch_49858_1689653243;
Tident199010* iddelegator_199456_791273810;
TNimType NTI199006; /* PIdObj */
N_NIMCALL(void, T791273810_3)(void* p, NI op) {
	Tident199010* a;
	a = (Tident199010*)p;
	nimGCvisit((void*)(*a).s, op);
	nimGCvisit((void*)(*a).next, op);
}
N_NIMCALL(void, T791273810_4)(void) {
	NI LOC1;
	LOC1 = (NI)0;
	for (LOC1 = 0; LOC1 < 8192; LOC1++) {
	nimGCvisit((void*)buckets_199024_791273810[LOC1], 0);
	}
}
N_NIMCALL(void, T791273810_5)(void) {
	nimGCvisit((void*)idanon_199455_791273810, 0);
}

N_NIMCALL(NI, cmpexact_199165_791273810)(NCSTRING a0, NCSTRING b0, NI blen0) {
	NI result0;
	NI i0;
	NI j0;
	result0 = (NI)0;
	i0 = ((NI) 0);
	j0 = ((NI) 0);
	result0 = ((NI) 1);
	{
		while (1) {
			NIM_CHAR aa0;
			NIM_CHAR bb0;
			if (!(j0 < blen0)) goto LA2;
			aa0 = a0[i0];
			bb0 = b0[j0];
			result0 = (NI)(((NI) (((NU8)(aa0)))) - ((NI) (((NU8)(bb0)))));
			{
				NIM_BOOL LOC5;
				LOC5 = (NIM_BOOL)0;
				LOC5 = !((result0 == ((NI) 0)));
				if (LOC5) goto LA6;
				LOC5 = ((NU8)(aa0) == (NU8)(0));
				LA6: ;
				if (!LOC5) goto LA7;
				goto LA1;
			}
			LA7: ;
			i0 += ((NI) 1);
			j0 += ((NI) 1);
		} LA2: ;
	} LA1: ;
	{
		if (!(result0 == ((NI) 0))) goto LA11;
		{
			if (!!(((NU8)(a0[i0]) == (NU8)(0)))) goto LA15;
			result0 = ((NI) 1);
		}
		LA15: ;
	}
	LA11: ;
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
			if (!((NU32)((*c0).refcount) < (NU32)(((NI) 8)))) goto LA11;
			rtladdzct_52601_1689653243(c0);
		}
		LA11: ;
	}
	LA7: ;
	(*dest0) = src0;
}

static N_INLINE(NIM_BOOL, ismagicidentseparatorrune_148005_3239285623)(NCSTRING cs0, NI i0) {
	NIM_BOOL result0;
	NIM_BOOL LOC1;
	NIM_BOOL LOC2;
	result0 = (NIM_BOOL)0;
	LOC1 = (NIM_BOOL)0;
	LOC2 = (NIM_BOOL)0;
	LOC2 = ((NU8)(cs0[i0]) == (NU8)(226));
	if (!(LOC2)) goto LA3;
	LOC2 = ((NU8)(cs0[(NI)(i0 + ((NI) 1))]) == (NU8)(128));
	LA3: ;
	LOC1 = LOC2;
	if (!(LOC1)) goto LA4;
	LOC1 = ((NU8)(cs0[(NI)(i0 + ((NI) 2))]) == (NU8)(147));
	LA4: ;
	result0 = LOC1;
	return result0;
}

N_NIMCALL(NI, cmpignorestyle_199026_791273810)(NCSTRING a0, NCSTRING b0, NI blen0) {
	NI result0;
	NI i0;
	NI j0;
{	result0 = (NI)0;
	{
		if (!firstchariscs_199017_791273810) goto LA3;
		{
			if (!!(((NU8)(a0[((NI) 0)]) == (NU8)(b0[((NI) 0)])))) goto LA7;
			result0 = ((NI) 1);
			goto BeforeRet;
		}
		LA7: ;
	}
	LA3: ;
	i0 = ((NI) 0);
	j0 = ((NI) 0);
	result0 = ((NI) 1);
	{
		while (1) {
			NIM_CHAR aa0;
			NIM_CHAR bb0;
			if (!(j0 < blen0)) goto LA10;
			{
				while (1) {
					if (!((NU8)(a0[i0]) == (NU8)(95))) goto LA12;
					i0 += ((NI) 1);
				} LA12: ;
			}
			{
				while (1) {
					if (!((NU8)(b0[j0]) == (NU8)(95))) goto LA14;
					j0 += ((NI) 1);
				} LA14: ;
			}
			{
				while (1) {
					NIM_BOOL LOC17;
					LOC17 = (NIM_BOOL)0;
					LOC17 = ismagicidentseparatorrune_148005_3239285623(a0, i0);
					if (!LOC17) goto LA16;
					i0 += ((NI) 3);
				} LA16: ;
			}
			{
				while (1) {
					NIM_BOOL LOC20;
					LOC20 = (NIM_BOOL)0;
					LOC20 = ismagicidentseparatorrune_148005_3239285623(b0, j0);
					if (!LOC20) goto LA19;
					j0 += ((NI) 3);
				} LA19: ;
			}
			aa0 = a0[i0];
			bb0 = b0[j0];
			{
				NIM_BOOL LOC23;
				LOC23 = (NIM_BOOL)0;
				LOC23 = ((NU8)(65) <= (NU8)(aa0));
				if (!(LOC23)) goto LA24;
				LOC23 = ((NU8)(aa0) <= (NU8)(90));
				LA24: ;
				if (!LOC23) goto LA25;
				aa0 = ((NIM_CHAR) (((NI) ((NI)(((NI) (((NU8)(aa0)))) + ((NI) 32))))));
			}
			LA25: ;
			{
				NIM_BOOL LOC29;
				LOC29 = (NIM_BOOL)0;
				LOC29 = ((NU8)(65) <= (NU8)(bb0));
				if (!(LOC29)) goto LA30;
				LOC29 = ((NU8)(bb0) <= (NU8)(90));
				LA30: ;
				if (!LOC29) goto LA31;
				bb0 = ((NIM_CHAR) (((NI) ((NI)(((NI) (((NU8)(bb0)))) + ((NI) 32))))));
			}
			LA31: ;
			result0 = (NI)(((NI) (((NU8)(aa0)))) - ((NI) (((NU8)(bb0)))));
			{
				NIM_BOOL LOC35;
				LOC35 = (NIM_BOOL)0;
				LOC35 = !((result0 == ((NI) 0)));
				if (LOC35) goto LA36;
				LOC35 = ((NU8)(aa0) == (NU8)(0));
				LA36: ;
				if (!LOC35) goto LA37;
				goto LA9;
			}
			LA37: ;
			i0 += ((NI) 1);
			j0 += ((NI) 1);
		} LA10: ;
	} LA9: ;
	{
		if (!(result0 == ((NI) 0))) goto LA41;
		{
			if (!!(((NU8)(a0[i0]) == (NU8)(0)))) goto LA45;
			result0 = ((NI) 1);
		}
		LA45: ;
	}
	LA41: ;
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(Tident199010*, getident_199211_791273810)(NCSTRING identifier0, NI length0, NI h0) {
	Tident199010* result0;
	NI idx0;
	Tident199010* last0;
	NI id0;
{	result0 = (Tident199010*)0;
	idx0 = (NI)(h0 & ((NI) 8191));
	result0 = buckets_199024_791273810[(idx0)- 0];
	last0 = NIM_NIL;
	id0 = ((NI) 0);
	{
		while (1) {
			if (!!((result0 == NIM_NIL))) goto LA2;
			{
				NI LOC5;
				LOC5 = (NI)0;
				LOC5 = cmpexact_199165_791273810((*result0).s->data, identifier0, length0);
				if (!(LOC5 == ((NI) 0))) goto LA6;
				{
					if (!!((last0 == NIM_NIL))) goto LA10;
					asgnRefNoCycle((void**) (&(*last0).next), (*result0).next);
					asgnRefNoCycle((void**) (&(*result0).next), buckets_199024_791273810[(idx0)- 0]);
					asgnRefNoCycle((void**) (&buckets_199024_791273810[(idx0)- 0]), result0);
				}
				LA10: ;
				goto BeforeRet;
			}
			goto LA3;
			LA6: ;
			{
				NI LOC13;
				LOC13 = (NI)0;
				LOC13 = cmpignorestyle_199026_791273810((*result0).s->data, identifier0, length0);
				if (!(LOC13 == ((NI) 0))) goto LA14;
				id0 = (*result0).Sup.id;
			}
			goto LA3;
			LA14: ;
			LA3: ;
			last0 = result0;
			result0 = (*result0).next;
		} LA2: ;
	}
	result0 = (Tident199010*) newObj((&NTI199008), sizeof(Tident199010));
	(*result0).Sup.Sup.m_type = (&NTI199010);
	(*result0).h = h0;
	asgnRefNoCycle((void**) (&(*result0).s), mnewString(((NI) (length0))));
	{
		NI i_199420_791273810;
		NI HEX3Atmp_199434_791273810;
		NI res_199437_791273810;
		i_199420_791273810 = (NI)0;
		HEX3Atmp_199434_791273810 = (NI)0;
		HEX3Atmp_199434_791273810 = (NI)(length0 - ((NI) 1));
		res_199437_791273810 = ((NI) 0);
		{
			while (1) {
				if (!(res_199437_791273810 <= HEX3Atmp_199434_791273810)) goto LA18;
				i_199420_791273810 = res_199437_791273810;
				(*result0).s->data[i_199420_791273810] = identifier0[i_199420_791273810];
				res_199437_791273810 += ((NI) 1);
			} LA18: ;
		}
	}
	asgnRefNoCycle((void**) (&(*result0).next), buckets_199024_791273810[(idx0)- 0]);
	asgnRefNoCycle((void**) (&buckets_199024_791273810[(idx0)- 0]), result0);
	{
		if (!(id0 == ((NI) 0))) goto LA21;
		wordcounter_199210_791273810 += ((NI) 1);
		(*result0).Sup.id = ((NI32)-(wordcounter_199210_791273810));
	}
	goto LA19;
	LA21: ;
	{
		(*result0).Sup.id = id0;
	}
	LA19: ;
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(Tident199010*, getident_199441_791273810)(NimStringDesc* identifier0) {
	Tident199010* result0;
	NI LOC1;
	result0 = (Tident199010*)0;
	LOC1 = (NI)0;
	LOC1 = hashignorestyle_149892_213663784(identifier0);
	result0 = getident_199211_791273810(identifier0->data, (identifier0 ? identifier0->Sup.len : 0), LOC1);
	return result0;
}
N_NIMCALL(void, T791273810_7)(void) {
	nimGCvisit((void*)iddelegator_199456_791273810, 0);
}

N_NIMCALL(Tident199010*, getident_199445_791273810)(NimStringDesc* identifier0, NI h0) {
	Tident199010* result0;
	result0 = (Tident199010*)0;
	result0 = getident_199211_791273810(identifier0->data, (identifier0 ? identifier0->Sup.len : 0), h0);
	return result0;
}
N_NIMCALL(void, T791273810_9)(void* p, NI op) {
	Tidobj199004* a;
	a = (Tidobj199004*)p;
}

N_NIMCALL(NIM_BOOL, identeq_199450_791273810)(Tident199010* id0, NimStringDesc* name0) {
	NIM_BOOL result0;
	Tident199010* LOC1;
	result0 = (NIM_BOOL)0;
	LOC1 = (Tident199010*)0;
	LOC1 = getident_199441_791273810(name0);
	result0 = ((*id0).Sup.id == (*LOC1).Sup.id);
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, compiler_identsInit000)(void) {
nimRegisterGlobalMarker(T791273810_4);
nimRegisterGlobalMarker(T791273810_5);
nimRegisterGlobalMarker(T791273810_7);
	firstchariscs_199017_791273810 = NIM_TRUE;
	wordcounter_199210_791273810 = ((NI) 1);
	asgnRefNoCycle((void**) (&idanon_199455_791273810), getident_199441_791273810(((NimStringDesc*) &T791273810_6)));
	asgnRefNoCycle((void**) (&iddelegator_199456_791273810), getident_199441_791273810(((NimStringDesc*) &T791273810_8)));
}

NIM_EXTERNC N_NOINLINE(void, compiler_identsDatInit000)(void) {
static TNimNode* T791273810_2[3];
static TNimNode T791273810_0[5];
NTI199004.size = sizeof(Tidobj199004);
NTI199004.kind = 17;
NTI199004.base = (&NTI3608);
NTI199004.flags = 1;
T791273810_0[0].kind = 1;
T791273810_0[0].offset = offsetof(Tidobj199004, id);
T791273810_0[0].typ = (&NTI104);
T791273810_0[0].name = "id";
NTI199004.node = &T791273810_0[0];
NTI199010.size = sizeof(Tident199010);
NTI199010.kind = 17;
NTI199010.base = (&NTI199004);
NTI199010.flags = 2;
T791273810_2[0] = &T791273810_0[2];
T791273810_0[2].kind = 1;
T791273810_0[2].offset = offsetof(Tident199010, s);
T791273810_0[2].typ = (&NTI138);
T791273810_0[2].name = "s";
T791273810_2[1] = &T791273810_0[3];
T791273810_0[3].kind = 1;
T791273810_0[3].offset = offsetof(Tident199010, next);
T791273810_0[3].typ = (&NTI199008);
T791273810_0[3].name = "next";
T791273810_2[2] = &T791273810_0[4];
T791273810_0[4].kind = 1;
T791273810_0[4].offset = offsetof(Tident199010, h);
T791273810_0[4].typ = (&NTI149002);
T791273810_0[4].name = "h";
T791273810_0[1].len = 3; T791273810_0[1].kind = 2; T791273810_0[1].sons = &T791273810_2[0];
NTI199010.node = &T791273810_0[1];
NTI199008.size = sizeof(Tident199010*);
NTI199008.kind = 22;
NTI199008.base = (&NTI199010);
NTI199008.flags = 2;
NTI199008.marker = T791273810_3;
NTI199023.size = sizeof(TY199023);
NTI199023.kind = 16;
NTI199023.base = (&NTI199008);
NTI199023.flags = 2;
NTI199006.size = sizeof(Tidobj199004*);
NTI199006.kind = 22;
NTI199006.base = (&NTI199004);
NTI199006.marker = T791273810_9;
}

