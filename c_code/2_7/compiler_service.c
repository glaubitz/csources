/* Generated by Nim Compiler v0.14.3 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
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
typedef struct Optparser280405 Optparser280405;
typedef struct TNimObject TNimObject;
typedef struct TY594421 TY594421;
typedef struct Socketimpl585404 Socketimpl585404;
typedef struct Basechunk29437 Basechunk29437;
typedef struct Freecell29429 Freecell29429;
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
typedef NU8 Tcmdlinepass282008;
struct  TNimObject  {
TNimType* m_type;
};
typedef NU8 Cmdlinekind280403;
struct  Optparser280405  {
  TNimObject Sup;
NimStringDesc* cmd;
NI pos;
NIM_BOOL inshortstate;
Cmdlinekind280403 kind;
NimStringDesc* key;
NimStringDesc* val;
};
typedef NU64 Tglobaloption171013Set;
typedef NU8 Tglobaloption171013;
typedef NU16 Tmsgkind193002;
typedef NimStringDesc* TY319494[1];
typedef N_NIMCALL_PTR(void, TY594238) (void);
struct  TY594421  {
NI HEX3Astate;
Socketimpl585404* stdoutsocket594408;
};
typedef NU8 Domain579604;
typedef NU8 Socktype579606;
typedef NU8 Protocol579608;
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (NimStringDesc* output0, void* ClEnv);
void* ClEnv;
} TY194107;
typedef NU8 Socketflag585414Set;
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
typedef NIM_CHAR TY585418[4001];
struct  Socketimpl585404  {
int fd;
NIM_BOOL isbuffered;
union{
struct {TY585418 buffer;
NI currpos;
NI buflen;
} S1;
} isbufferedU;
NI32 lasterror;
Domain579604 domain;
Socktype579606 socktype;
Protocol579608 protocol;
};
struct  Freecell29429  {
Freecell29429* next;
NI zerofield;
};
N_NIMCALL(void, nimGCvisit)(void* d0, NI op0);
N_NIMCALL(void, T3526807654_2)(void);
N_NIMCALL(void, nimRegisterGlobalMarker)(Globalmarkerproc55802 markerproc0);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src0);
static N_INLINE(void, nimGCunrefNoCycle)(void* p0);
static N_INLINE(Cell47304*, usrtocell_51440_1689653243)(void* usr0);
static N_INLINE(void, rtladdzct_52601_1689653243)(Cell47304* c0);
N_NOINLINE(void, addzct_51417_1689653243)(Cellseq47320* s0, Cell47304* c0);
N_NIMCALL(void, T3526807654_4)(void);
N_NIMCALL(void, initoptparser_280527_4065315820)(NimStringDesc* cmdline0, Optparser280405* Result);
N_NOINLINE(void, chckNil)(void* p0);
N_NIMCALL(void, nponext)(Optparser280405* p0);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a0, NimStringDesc* b0);
static N_INLINE(NIM_BOOL, equalmem_7495_1689653243)(void* a0, void* b0, NI size0);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src0);
N_NIMCALL(NIM_BOOL, processargument_283819_2004575671)(Tcmdlinepass282008 pass0, Optparser280405* p0, NI* argscount0);
N_NIMCALL(void, processswitch_283812_2004575671)(Tcmdlinepass282008 pass0, Optparser280405* p0);
N_NIMCALL(NimStringDesc*, nsuNormalize)(NimStringDesc* s0);
N_NIMCALL(void, rawmessage_195645_155036129)(Tmsgkind193002 msg0, NimStringDesc** args0, NI args0Len0);
N_NIMCALL(void, T3526807654_9)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ0, NI size0);
N_NIMCALL(NimStringDesc*, getconfigvar_171292_2607990831)(NimStringDesc* key0);
N_NIMCALL(NimStringDesc*, readline_14912_1689653243)(FILE* f0);
N_NIMCALL(void, processcmdline_594203_3526807654)(Tcmdlinepass282008 pass0, NimStringDesc* cmd0);
N_NIMCALL(void, flushfile_14862_1689653243)(FILE* f0);
N_NIMCALL(Socketimpl585404*, newsocket_586009_170061329)(Domain579604 domain0, Socktype579606 socktype0, Protocol579608 protocol0, NIM_BOOL buffered0);
N_NIMCALL(NI, nsuParseInt)(NimStringDesc* s0);
N_NIMCALL(void, bindaddr_586808_170061329)(Socketimpl585404* socket0, NU16 port0, NimStringDesc* address0);
N_NIMCALL(void, listen_586804_170061329)(Socketimpl585404* socket0, int backlog0);
static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0);
N_CLOSURE(void, HEX3Aanonymous_594409_3526807654)(NimStringDesc* line0, void* ClEnv);
N_NIMCALL(void, send_591002_170061329)(Socketimpl585404* socket0, NimStringDesc* data0, Socketflag585414Set flags0);
static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0);
static N_INLINE(void, copymem_7485_1689653243)(void* dest0, void* source0, NI size0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space0);
static N_INLINE(void, asgnRef)(void** dest0, void* src0);
static N_INLINE(void, incref_53419_1689653243)(Cell47304* c0);
static N_INLINE(void, decref_53001_1689653243)(Cell47304* c0);
N_NIMCALL(void, accept_587601_170061329)(Socketimpl585404* server0, Socketimpl585404** client0, Socketflag585414Set flags0);
N_NIMCALL(void, readline_590402_170061329)(Socketimpl585404* socket0, NimStringDesc** line0, NI timeout0, Socketflag585414Set flags0);
N_NIMCALL(void, close_587611_170061329)(Socketimpl585404* socket0);
N_NIMCALL(void, msgquit_194149_155036129)(NI8 x0);
STRING_LITERAL(T3526807654_3, "", 0);
STRING_LITERAL(T3526807654_5, " ", 1);
STRING_LITERAL(T3526807654_6, "-", 1);
STRING_LITERAL(T3526807654_7, "run", 3);
STRING_LITERAL(T3526807654_10, "server.type", 11);
STRING_LITERAL(T3526807654_11, "stdin", 5);
STRING_LITERAL(T3526807654_12, "tcp", 3);
STRING_LITERAL(T3526807654_13, "quit", 4);
STRING_LITERAL(T3526807654_14, "server.port", 11);
STRING_LITERAL(T3526807654_15, "server.address", 14);
STRING_LITERAL(T3526807654_16, "\015\012", 2);
STRING_LITERAL(T3526807654_17, "Invalid server.type:", 20);
NimStringDesc* curcaascmd_594201_3526807654;
extern TNimType NTI138; /* string */
extern Gcheap49818 gch_49858_1689653243;
NimStringDesc* lastcaascmd_594202_3526807654;
extern TNimType NTI280405; /* OptParser */
extern Tglobaloption171013Set gglobaloptions_171130_2607990831;
extern NimStringDesc* arguments_283811_2004575671;
extern NimStringDesc* command_171215_2607990831;
TNimType NTI594421; /* object */
extern TNimType NTI104021; /* range -1..0(int) */
extern TNimType NTI585406; /* Socket */
TNimType NTI594420; /* ref object */
extern NI gerrorcounter_194072_155036129;
extern TY194107 writelnhook_194110_155036129;
N_NIMCALL(void, T3526807654_2)(void) {
	nimGCvisit((void*)curcaascmd_594201_3526807654, 0);
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
N_NIMCALL(void, T3526807654_4)(void) {
	nimGCvisit((void*)lastcaascmd_594202_3526807654, 0);
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

N_NIMCALL(void, processcmdline_594203_3526807654)(Tcmdlinepass282008 pass0, NimStringDesc* cmd0) {
	Optparser280405 p0;
	NI argscount0;
	memset((void*)(&p0), 0, sizeof(p0));
	p0.Sup.m_type = (&NTI280405);
	chckNil((void*)(&p0));
	memset((void*)(&p0), 0, sizeof(p0));
	p0.Sup.m_type = (&NTI280405);
	initoptparser_280527_4065315820(cmd0, (&p0));
	argscount0 = ((NI) 0);
	{
		while (1) {
			nponext((&p0));
			switch (p0.kind) {
			case ((Cmdlinekind280403) 0):
			{
				goto LA1;
			}
			break;
			case ((Cmdlinekind280403) 2):
			case ((Cmdlinekind280403) 3):
			{
				{
					if (!eqStrings(p0.key, ((NimStringDesc*) &T3526807654_5))) goto LA7;
					p0.key = copyString(((NimStringDesc*) &T3526807654_6));
					{
						NIM_BOOL LOC11;
						LOC11 = (NIM_BOOL)0;
						LOC11 = processargument_283819_2004575671(pass0, (&p0), (&argscount0));
						if (!LOC11) goto LA12;
						goto LA1;
					}
					LA12: ;
				}
				goto LA5;
				LA7: ;
				{
					processswitch_283812_2004575671(pass0, (&p0));
				}
				LA5: ;
			}
			break;
			case ((Cmdlinekind280403) 1):
			{
				{
					NIM_BOOL LOC18;
					LOC18 = (NIM_BOOL)0;
					LOC18 = processargument_283819_2004575671(pass0, (&p0), (&argscount0));
					if (!LOC18) goto LA19;
					goto LA1;
				}
				LA19: ;
			}
			break;
			}
		}
	} LA1: ;
	{
		if (!(pass0 == ((Tcmdlinepass282008) 1))) goto LA23;
		{
			NIM_BOOL LOC27;
			NIM_BOOL LOC28;
			NimStringDesc* LOC31;
			TY319494 LOC34;
			LOC27 = (NIM_BOOL)0;
			LOC28 = (NIM_BOOL)0;
			LOC28 = !(((gglobaloptions_171130_2607990831 &((NU64)1<<((NU)(((Tglobaloption171013) 13))&63U)))!=0));
			if (!(LOC28)) goto LA29;
			LOC28 = !(((arguments_283811_2004575671) && (arguments_283811_2004575671)->Sup.len == 0));
			LA29: ;
			LOC27 = LOC28;
			if (!(LOC27)) goto LA30;
			LOC31 = (NimStringDesc*)0;
			LOC31 = nsuNormalize(command_171215_2607990831);
			LOC27 = !(eqStrings(LOC31, ((NimStringDesc*) &T3526807654_7)));
			LA30: ;
			if (!LOC27) goto LA32;
			memset((void*)LOC34, 0, sizeof(LOC34));
			rawmessage_195645_155036129(((Tmsgkind193002) 59), LOC34, 0);
		}
		LA32: ;
	}
	LA23: ;
}
N_NIMCALL(void, T3526807654_9)(void* p, NI op) {
	TY594421* a;
	a = (TY594421*)p;
	nimGCvisit((void*)(*a).stdoutsocket594408, op);
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

static N_INLINE(void, copymem_7485_1689653243)(void* dest0, void* source0, NI size0) {
	void* LOC1;
	LOC1 = (void*)0;
	LOC1 = memcpy(dest0, source0, ((size_t) (size0)));
}

static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0) {
	copymem_7485_1689653243(((void*) ((&(*dest0).data[((*dest0).Sup.len)- 0]))), ((void*) ((*src0).data)), ((NI) ((NI)((*src0).Sup.len + ((NI) 1)))));
	(*dest0).Sup.len += (*src0).Sup.len;
}

N_CLOSURE(void, HEX3Aanonymous_594409_3526807654)(NimStringDesc* line0, void* ClEnv) {
	TY594421* HEX3Aenvp_594424_3526807654;
	NimStringDesc* LOC1;
	HEX3Aenvp_594424_3526807654 = (TY594421*) ClEnv;
	LOC1 = (NimStringDesc*)0;
	LOC1 = rawNewString(line0->Sup.len + 2);
appendString(LOC1, line0);
appendString(LOC1, ((NimStringDesc*) &T3526807654_16));
	send_591002_170061329((*HEX3Aenvp_594424_3526807654).stdoutsocket594408, LOC1, 2);
}

static N_INLINE(void, incref_53419_1689653243)(Cell47304* c0) {
	(*c0).refcount = (NI)((NU32)((*c0).refcount) + (NU32)(((NI) 8)));
}

static N_INLINE(void, decref_53001_1689653243)(Cell47304* c0) {
	{
		(*c0).refcount -= ((NI) 8);
		if (!((NU32)((*c0).refcount) < (NU32)(((NI) 8)))) goto LA3;
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

N_NIMCALL(void, serve_594236_3526807654)(TY594238 action0) {
	TY594421* HEX3Aenv_594426_3526807654;
	NimStringDesc* typ0;
	HEX3Aenv_594426_3526807654 = (TY594421*)0;
	HEX3Aenv_594426_3526807654 = (TY594421*) newObj((&NTI594420), sizeof(TY594421));
	typ0 = getconfigvar_171292_2607990831(((NimStringDesc*) &T3526807654_10));
	if (eqStrings(typ0, ((NimStringDesc*) &T3526807654_11))) goto LA1;
	if (eqStrings(typ0, ((NimStringDesc*) &T3526807654_12))) goto LA2;
	if (eqStrings(typ0, ((NimStringDesc*) &T3526807654_3))) goto LA2;
	goto LA3;
	LA1: ;
	{
		{
			while (1) {
				NimStringDesc* line0;
				NimStringDesc* LOC12;
				line0 = readline_14912_1689653243(stdin);
				{
					if (!eqStrings(line0, ((NimStringDesc*) &T3526807654_13))) goto LA10;
					exit(((NI) 0));
				}
				LA10: ;
				LOC12 = (NimStringDesc*)0;
				LOC12 = curcaascmd_594201_3526807654; curcaascmd_594201_3526807654 = copyStringRC1(line0);
				if (LOC12) nimGCunrefNoCycle(LOC12);
				processcmdline_594203_3526807654(((Tcmdlinepass282008) 1), line0);
				action0();
				gerrorcounter_194072_155036129 = ((NI) 0);
				printf("%s\012", ((NimStringDesc*) &T3526807654_3)? (((NimStringDesc*) &T3526807654_3))->data:"nil");
				fflush(stdout);
				flushfile_14862_1689653243(stdout);
			}
		}
	}
	goto LA4;
	LA2: ;
	{
		Socketimpl585404* server0;
		NimStringDesc* p0;
		NU16 port0;
		NimStringDesc* LOC20;
		NimStringDesc* inp0;
		TY194107 LOC21;
		server0 = newsocket_586009_170061329(((Domain579604) 2), ((Socktype579606) 1), ((Protocol579608) 6), NIM_TRUE);
		p0 = getconfigvar_171292_2607990831(((NimStringDesc*) &T3526807654_14));
		{
			NI LOC18;
			if (!(((NI) 0) < (p0 ? p0->Sup.len : 0))) goto LA16;
			LOC18 = (NI)0;
			LOC18 = nsuParseInt(p0);
			port0 = ((NU16) (LOC18));
		}
		goto LA14;
		LA16: ;
		{
			port0 = ((NU16) 6000);
		}
		LA14: ;
		LOC20 = (NimStringDesc*)0;
		LOC20 = getconfigvar_171292_2607990831(((NimStringDesc*) &T3526807654_15));
		bindaddr_586808_170061329(server0, port0, LOC20);
		inp0 = copyString(((NimStringDesc*) &T3526807654_3));
		listen_586804_170061329(server0, SOMAXCONN);
		asgnRefNoCycle((void**) (&(*HEX3Aenv_594426_3526807654).stdoutsocket594408), newsocket_586009_170061329(((Domain579604) 2), ((Socktype579606) 1), ((Protocol579608) 6), NIM_TRUE));
		memset((void*)(&LOC21), 0, sizeof(LOC21));
		LOC21.ClPrc = HEX3Aanonymous_594409_3526807654; LOC21.ClEnv = HEX3Aenv_594426_3526807654;
		asgnRef((void**) (&writelnhook_194110_155036129.ClEnv), LOC21.ClEnv);
		writelnhook_194110_155036129.ClPrc = LOC21.ClPrc;
		{
			while (1) {
				NimStringDesc* LOC24;
				accept_587601_170061329(server0, &(*HEX3Aenv_594426_3526807654).stdoutsocket594408, 2);
				readline_590402_170061329((*HEX3Aenv_594426_3526807654).stdoutsocket594408, (&inp0), ((NI) -1), 2);
				LOC24 = (NimStringDesc*)0;
				LOC24 = curcaascmd_594201_3526807654; curcaascmd_594201_3526807654 = copyStringRC1(inp0);
				if (LOC24) nimGCunrefNoCycle(LOC24);
				processcmdline_594203_3526807654(((Tcmdlinepass282008) 1), inp0);
				action0();
				gerrorcounter_194072_155036129 = ((NI) 0);
				send_591002_170061329((*HEX3Aenv_594426_3526807654).stdoutsocket594408, ((NimStringDesc*) &T3526807654_16), 2);
				close_587611_170061329((*HEX3Aenv_594426_3526807654).stdoutsocket594408);
			}
		}
	}
	goto LA4;
	LA3: ;
	{
		printf("%s%s\012", ((NimStringDesc*) &T3526807654_17)? (((NimStringDesc*) &T3526807654_17))->data:"nil", typ0? (typ0)->data:"nil");
		fflush(stdout);
		msgquit_194149_155036129(((NI8) 1));
	}
	LA4: ;
}
NIM_EXTERNC N_NOINLINE(void, compiler_serviceInit000)(void) {
	NimStringDesc* LOC1;
	NimStringDesc* LOC2;
nimRegisterGlobalMarker(T3526807654_2);
nimRegisterGlobalMarker(T3526807654_4);
	LOC1 = (NimStringDesc*)0;
	LOC1 = curcaascmd_594201_3526807654; curcaascmd_594201_3526807654 = copyStringRC1(((NimStringDesc*) &T3526807654_3));
	if (LOC1) nimGCunrefNoCycle(LOC1);
	LOC2 = (NimStringDesc*)0;
	LOC2 = lastcaascmd_594202_3526807654; lastcaascmd_594202_3526807654 = copyStringRC1(((NimStringDesc*) &T3526807654_3));
	if (LOC2) nimGCunrefNoCycle(LOC2);
}

NIM_EXTERNC N_NOINLINE(void, compiler_serviceDatInit000)(void) {
static TNimNode* T3526807654_8[2];
static TNimNode T3526807654_0[3];
NTI594421.size = sizeof(TY594421);
NTI594421.kind = 18;
NTI594421.base = 0;
NTI594421.flags = 2;
T3526807654_8[0] = &T3526807654_0[1];
T3526807654_0[1].kind = 1;
T3526807654_0[1].offset = offsetof(TY594421, HEX3Astate);
T3526807654_0[1].typ = (&NTI104021);
T3526807654_0[1].name = ":state";
T3526807654_8[1] = &T3526807654_0[2];
T3526807654_0[2].kind = 1;
T3526807654_0[2].offset = offsetof(TY594421, stdoutsocket594408);
T3526807654_0[2].typ = (&NTI585406);
T3526807654_0[2].name = "stdoutSocket594408";
T3526807654_0[0].len = 2; T3526807654_0[0].kind = 2; T3526807654_0[0].sons = &T3526807654_8[0];
NTI594421.node = &T3526807654_0[0];
NTI594420.size = sizeof(TY594421*);
NTI594420.kind = 22;
NTI594420.base = (&NTI594421);
NTI594420.flags = 2;
NTI594420.marker = T3526807654_9;
}

