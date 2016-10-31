/* Generated by Nim Compiler v0.14.3 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <setjmp.h>
#include <string.h>
#include <stdio.h>
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Streamobj156818 Streamobj156818;
typedef struct TNimObject TNimObject;
typedef struct Filestreamobj157877 Filestreamobj157877;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Exception Exception;
typedef struct TSafePoint TSafePoint;
typedef struct Ioerror3628 Ioerror3628;
typedef struct Systemerror3626 Systemerror3626;
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
typedef struct Stringstreamobj157777 Stringstreamobj157777;
typedef struct Basechunk29437 Basechunk29437;
typedef struct Freecell29429 Freecell29429;
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
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 Filemode13009;
struct  Filestreamobj157877  {
  Streamobj156818 Sup;
FILE* f;
};
struct  Exception  {
  TNimObject Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
NimStringDesc* trace;
};
typedef struct {
N_NIMCALL_PTR(NIM_BOOL, ClPrc) (Exception* e0, void* ClEnv);
void* ClEnv;
} TY17211;
struct  TSafePoint  {
TSafePoint* prev;
NI status;
jmp_buf context;
NIM_BOOL hasRaiseAction;
TY17211 raiseAction;
};
struct  Systemerror3626  {
  Exception Sup;
};
struct  Ioerror3628  {
  Systemerror3626 Sup;
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
struct  Stringstreamobj157777  {
  Streamobj156818 Sup;
NimStringDesc* data;
NI pos;
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
N_NIMCALL(void, T1780494535_3)(void* p, NI op);
N_NIMCALL(NIM_BOOL, open_14803_1689653243)(FILE** f0, NimStringDesc* filename0, Filemode13009 mode0, NI bufsize0);
N_NIMCALL(Filestreamobj157877*, newfilestream_157930_1780494535)(FILE* f0);
N_NIMCALL(void, T1780494535_4)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ0, NI size0);
N_NIMCALL(void, fsclose_157882_1780494535)(Streamobj156818* s0);
N_NIMCALL(void, close_14853_1689653243)(FILE* f0);
N_NIMCALL(NIM_BOOL, fsatend_157900_1780494535)(Streamobj156818* s0);
N_NIMCALL(NIM_BOOL, endoffile_14856_1689653243)(FILE* f0);
N_NIMCALL(void, fssetposition_157904_1780494535)(Streamobj156818* s0, NI pos0);
N_NIMCALL(void, setfilepos_14983_1689653243)(FILE* f0, NI64 pos0);
N_NIMCALL(NI, fsgetposition_157908_1780494535)(Streamobj156818* s0);
N_NIMCALL(NI64, getfilepos_14987_1689653243)(FILE* f0);
N_NIMCALL(NI, fsreaddata_157912_1780494535)(Streamobj156818* s0, void* buffer0, NI buflen0);
N_NIMCALL(NI, readbuffer_14956_1689653243)(FILE* f0, void* buffer0, NI len0);
N_NIMCALL(NI, fspeekdata_157918_1780494535)(Streamobj156818* s0, void* buffer0, NI buflen0);
static N_INLINE(void, pushSafePoint)(TSafePoint* s0);
static N_INLINE(void, popSafePoint)(void);
N_NIMCALL(void, reraiseException)(void);
N_NIMCALL(void, fswritedata_157925_1780494535)(Streamobj156818* s0, void* buffer0, NI buflen0);
N_NIMCALL(NI, writebuffer_14978_1689653243)(FILE* f0, void* buffer0, NI len0);
N_NIMCALL(Ioerror3628*, neweio_156802_1780494535)(NimStringDesc* msg0);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src0);
static N_INLINE(void, nimGCunrefNoCycle)(void* p0);
static N_INLINE(Cell47304*, usrtocell_51440_1689653243)(void* usr0);
static N_INLINE(void, rtladdzct_52601_1689653243)(Cell47304* c0);
N_NOINLINE(void, addzct_51417_1689653243)(Cellseq47320* s0, Cell47304* c0);
N_NIMCALL(void, raiseException)(Exception* e0, NCSTRING ename0);
N_NIMCALL(void, fsflush_157897_1780494535)(Streamobj156818* s0);
N_NIMCALL(void, flushfile_14862_1689653243)(FILE* f0);
N_NIMCALL(void, writedata_156952_1780494535)(Streamobj156818* s0, void* buffer0, NI buflen0);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src0);
N_NIMCALL(NIM_CHAR, readchar_157254_1780494535)(Streamobj156818* s0);
N_NIMCALL(NI, readdata_156914_1780494535)(Streamobj156818* s0, void* buffer0, NI buflen0);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s0, NIM_CHAR c0);
N_NIMCALL(void, nimGCvisit)(void* d0, NI op0);
N_NIMCALL(void, T1780494535_9)(void* p, NI op);
N_NIMCALL(void, ssclose_157858_1780494535)(Streamobj156818* s_157860_1780494535);
N_NIMCALL(NIM_BOOL, ssatend_157783_1780494535)(Streamobj156818* s_157785_1780494535);
N_NIMCALL(void, sssetposition_157788_1780494535)(Streamobj156818* s_157790_1780494535, NI pos0);
N_NIMCALL(NI, clamp_157794_1689653243)(NI x0, NI a0, NI b0);
N_NIMCALL(NI, ssgetposition_157804_1780494535)(Streamobj156818* s_157806_1780494535);
N_NIMCALL(NI, ssreaddata_157809_1780494535)(Streamobj156818* s_157811_1780494535, void* buffer0, NI buflen0);
static N_INLINE(void, copymem_7485_1689653243)(void* dest0, void* source0, NI size0);
N_NIMCALL(NI, sspeekdata_157830_1780494535)(Streamobj156818* s_157832_1780494535, void* buffer0, NI buflen0);
N_NIMCALL(void, sswritedata_157842_1780494535)(Streamobj156818* s_157844_1780494535, void* buffer0, NI buflen0);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s0, NI newlen0);
N_NIMCALL(NimStringDesc*, mnewString)(NI len0);
N_NIMCALL(NimStringDesc*, mnewString)(NI len0);
STRING_LITERAL(T1780494535_6, "cannot write to stream", 22);
STRING_LITERAL(T1780494535_7, "", 0);
extern TNimType NTI3608; /* RootObj */
TNimType NTI156818; /* StreamObj */
TNimType NTI156819; /* proc (s: Stream){.gcsafe.} */
TNimType NTI156823; /* proc (s: Stream): bool{.gcsafe.} */
TNimType NTI156827; /* proc (s: Stream, pos: int){.gcsafe.} */
TNimType NTI156832; /* proc (s: Stream): int{.gcsafe.} */
TNimType NTI156836; /* proc (s: Stream, buffer: pointer, bufLen: int): int{.gcsafe.} */
TNimType NTI156842; /* proc (s: Stream, buffer: pointer, bufLen: int): int{.gcsafe.} */
TNimType NTI156848; /* proc (s: Stream, buffer: pointer, bufLen: int){.gcsafe.} */
TNimType NTI156854; /* proc (s: Stream){.gcsafe.} */
TNimType NTI156816; /* Stream */
TNimType NTI157877; /* FileStreamObj */
extern TNimType NTI13007; /* File */
TNimType NTI157875; /* FileStream */
extern TSafePoint* exchandler_18837_1689653243;
extern TNimType NTI81072; /* ref IOError */
extern TNimType NTI3628; /* IOError */
extern Gcheap49818 gch_49858_1689653243;
TNimType NTI157777; /* StringStreamObj */
extern TNimType NTI138; /* string */
extern TNimType NTI104; /* int */
TNimType NTI157775; /* StringStream */
N_NIMCALL(void, T1780494535_3)(void* p, NI op) {
	Streamobj156818* a;
	a = (Streamobj156818*)p;
}

N_NIMCALL(NI, readdata_156914_1780494535)(Streamobj156818* s0, void* buffer0, NI buflen0) {
	NI result0;
	result0 = (NI)0;
	result0 = (*s0).readdataimpl(s0, buffer0, buflen0);
	return result0;
}
N_NIMCALL(void, T1780494535_4)(void* p, NI op) {
	Filestreamobj157877* a;
	a = (Filestreamobj157877*)p;
}

N_NIMCALL(void, fsclose_157882_1780494535)(Streamobj156818* s0) {
	{
		if (!!(((*((Filestreamobj157877*) (s0))).f == NIM_NIL))) goto LA3;
		close_14853_1689653243((*((Filestreamobj157877*) (s0))).f);
		(*((Filestreamobj157877*) (s0))).f = NIM_NIL;
	}
	LA3: ;
}

N_NIMCALL(NIM_BOOL, fsatend_157900_1780494535)(Streamobj156818* s0) {
	NIM_BOOL result0;
{	result0 = (NIM_BOOL)0;
	result0 = endoffile_14856_1689653243((*((Filestreamobj157877*) (s0))).f);
	goto BeforeRet;
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(void, fssetposition_157904_1780494535)(Streamobj156818* s0, NI pos0) {
	setfilepos_14983_1689653243((*((Filestreamobj157877*) (s0))).f, ((NI64) (pos0)));
}

N_NIMCALL(NI, fsgetposition_157908_1780494535)(Streamobj156818* s0) {
	NI result0;
	NI64 LOC1;
{	result0 = (NI)0;
	LOC1 = (NI64)0;
	LOC1 = getfilepos_14987_1689653243((*((Filestreamobj157877*) (s0))).f);
	result0 = ((NI) (LOC1));
	goto BeforeRet;
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(NI, fsreaddata_157912_1780494535)(Streamobj156818* s0, void* buffer0, NI buflen0) {
	NI result0;
	result0 = (NI)0;
	result0 = readbuffer_14956_1689653243((*((Filestreamobj157877*) (s0))).f, buffer0, ((NI) (buflen0)));
	return result0;
}

static N_INLINE(void, pushSafePoint)(TSafePoint* s0) {
	(*s0).hasRaiseAction = NIM_FALSE;
	(*s0).prev = exchandler_18837_1689653243;
	exchandler_18837_1689653243 = s0;
}

static N_INLINE(void, popSafePoint)(void) {
	exchandler_18837_1689653243 = (*exchandler_18837_1689653243).prev;
}

N_NIMCALL(NI, fspeekdata_157918_1780494535)(Streamobj156818* s0, void* buffer0, NI buflen0) {
	NI volatile result0;
	NI pos0;
	TSafePoint T1780494535_5;
	result0 = (NI)0;
	pos0 = fsgetposition_157908_1780494535(s0);
	pushSafePoint(&T1780494535_5);
	T1780494535_5.status = _setjmp(T1780494535_5.context);
	if (T1780494535_5.status == 0) {
		result0 = readbuffer_14956_1689653243((*((Filestreamobj157877*) (s0))).f, buffer0, ((NI) (buflen0)));
		popSafePoint();
	}
	else {
		popSafePoint();
	}
	{
		fssetposition_157904_1780494535(s0, pos0);
	}
	if (T1780494535_5.status != 0) reraiseException();
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

N_NIMCALL(Ioerror3628*, neweio_156802_1780494535)(NimStringDesc* msg0) {
	Ioerror3628* result0;
	NimStringDesc* LOC1;
	result0 = (Ioerror3628*)0;
	result0 = (Ioerror3628*) newObj((&NTI81072), sizeof(Ioerror3628));
	(*result0).Sup.Sup.Sup.m_type = (&NTI3628);
	LOC1 = (NimStringDesc*)0;
	LOC1 = (*result0).Sup.Sup.message; (*result0).Sup.Sup.message = copyStringRC1(msg0);
	if (LOC1) nimGCunrefNoCycle(LOC1);
	return result0;
}

N_NIMCALL(void, fswritedata_157925_1780494535)(Streamobj156818* s0, void* buffer0, NI buflen0) {
	{
		NI LOC3;
		Ioerror3628* LOC6;
		LOC3 = (NI)0;
		LOC3 = writebuffer_14978_1689653243((*((Filestreamobj157877*) (s0))).f, buffer0, ((NI) (buflen0)));
		if (!!((LOC3 == buflen0))) goto LA4;
		LOC6 = (Ioerror3628*)0;
		LOC6 = neweio_156802_1780494535(((NimStringDesc*) &T1780494535_6));
		raiseException((Exception*)LOC6, "IOError");
	}
	LA4: ;
}

N_NIMCALL(void, fsflush_157897_1780494535)(Streamobj156818* s0) {
	flushfile_14862_1689653243((*((Filestreamobj157877*) (s0))).f);
}

N_NIMCALL(Filestreamobj157877*, newfilestream_157930_1780494535)(FILE* f0) {
	Filestreamobj157877* result0;
	result0 = (Filestreamobj157877*)0;
	result0 = (Filestreamobj157877*) newObj((&NTI157875), sizeof(Filestreamobj157877));
	(*result0).Sup.Sup.m_type = (&NTI157877);
	(*result0).f = f0;
	(*result0).Sup.closeimpl = fsclose_157882_1780494535;
	(*result0).Sup.atendimpl = fsatend_157900_1780494535;
	(*result0).Sup.setpositionimpl = fssetposition_157904_1780494535;
	(*result0).Sup.getpositionimpl = fsgetposition_157908_1780494535;
	(*result0).Sup.readdataimpl = fsreaddata_157912_1780494535;
	(*result0).Sup.peekdataimpl = fspeekdata_157918_1780494535;
	(*result0).Sup.writedataimpl = fswritedata_157925_1780494535;
	(*result0).Sup.flushimpl = fsflush_157897_1780494535;
	return result0;
}

N_NIMCALL(Filestreamobj157877*, newfilestream_157942_1780494535)(NimStringDesc* filename0, Filemode13009 mode0) {
	Filestreamobj157877* result0;
	FILE* f0;
	result0 = (Filestreamobj157877*)0;
	f0 = (FILE*)0;
	{
		NIM_BOOL LOC3;
		LOC3 = (NIM_BOOL)0;
		LOC3 = open_14803_1689653243(&f0, filename0, mode0, ((NI) -1));
		if (!LOC3) goto LA4;
		result0 = newfilestream_157930_1780494535(f0);
	}
	LA4: ;
	return result0;
}

N_NIMCALL(void, close_156873_1780494535)(Streamobj156818* s0) {
	{
		if (!!((*s0).closeimpl == 0)) goto LA3;
		(*s0).closeimpl(s0);
	}
	LA3: ;
}

N_NIMCALL(void, writedata_156952_1780494535)(Streamobj156818* s0, void* buffer0, NI buflen0) {
	(*s0).writedataimpl(s0, buffer0, buflen0);
}

N_NIMCALL(void, write_156972_1780494535)(Streamobj156818* s0, NimStringDesc* x0) {
	{
		if (!(((NI) 0) < (x0 ? x0->Sup.len : 0))) goto LA3;
		writedata_156952_1780494535(s0, ((void*) ((&x0->data[((NI) 0)]))), (x0 ? x0->Sup.len : 0));
	}
	LA3: ;
}

N_NIMCALL(NIM_BOOL, atend_156887_1780494535)(Streamobj156818* s0) {
	NIM_BOOL result0;
	result0 = (NIM_BOOL)0;
	result0 = (*s0).atendimpl(s0);
	return result0;
}

N_NIMCALL(NIM_CHAR, readchar_157254_1780494535)(Streamobj156818* s0) {
	NIM_CHAR result0;
	result0 = (NIM_CHAR)0;
	{
		NI LOC3;
		LOC3 = (NI)0;
		LOC3 = readdata_156914_1780494535(s0, ((void*) ((&result0))), ((NI) 1));
		if (!!((LOC3 == ((NI) 1)))) goto LA4;
		result0 = 0;
	}
	LA4: ;
	return result0;
}

N_NIMCALL(NimStringDesc*, readline_157761_1780494535)(Streamobj156818* s0) {
	NimStringDesc* result0;
	result0 = (NimStringDesc*)0;
	result0 = copyString(((NimStringDesc*) &T1780494535_7));
	{
		while (1) {
			NIM_CHAR c0;
			c0 = readchar_157254_1780494535(s0);
			{
				if (!((NU8)(c0) == (NU8)(13))) goto LA5;
				c0 = readchar_157254_1780494535(s0);
				goto LA1;
			}
			LA5: ;
			{
				NIM_BOOL LOC9;
				LOC9 = (NIM_BOOL)0;
				LOC9 = ((NU8)(c0) == (NU8)(10));
				if (LOC9) goto LA10;
				LOC9 = ((NU8)(c0) == (NU8)(0));
				LA10: ;
				if (!LOC9) goto LA11;
				goto LA1;
			}
			goto LA7;
			LA11: ;
			{
				result0 = addChar(result0, c0);
			}
			LA7: ;
		}
	} LA1: ;
	return result0;
}
N_NIMCALL(void, T1780494535_9)(void* p, NI op) {
	Stringstreamobj157777* a;
	a = (Stringstreamobj157777*)p;
	nimGCvisit((void*)(*a).data, op);
}

N_NIMCALL(void, ssclose_157858_1780494535)(Streamobj156818* s_157860_1780494535) {
	Stringstreamobj157777* s0;
	NimStringDesc* LOC1;
	s0 = ((Stringstreamobj157777*) (s_157860_1780494535));
	LOC1 = (NimStringDesc*)0;
	LOC1 = (*s0).data; (*s0).data = copyStringRC1(NIM_NIL);
	if (LOC1) nimGCunrefNoCycle(LOC1);
}

N_NIMCALL(NIM_BOOL, ssatend_157783_1780494535)(Streamobj156818* s_157785_1780494535) {
	NIM_BOOL result0;
	Stringstreamobj157777* s0;
{	result0 = (NIM_BOOL)0;
	s0 = ((Stringstreamobj157777*) (s_157785_1780494535));
	result0 = (((*s0).data ? (*s0).data->Sup.len : 0) <= (*s0).pos);
	goto BeforeRet;
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(void, sssetposition_157788_1780494535)(Streamobj156818* s_157790_1780494535, NI pos0) {
	Stringstreamobj157777* s0;
	s0 = ((Stringstreamobj157777*) (s_157790_1780494535));
	(*s0).pos = clamp_157794_1689653243(pos0, ((NI) 0), ((*s0).data ? (*s0).data->Sup.len : 0));
}

N_NIMCALL(NI, ssgetposition_157804_1780494535)(Streamobj156818* s_157806_1780494535) {
	NI result0;
	Stringstreamobj157777* s0;
{	result0 = (NI)0;
	s0 = ((Stringstreamobj157777*) (s_157806_1780494535));
	result0 = (*s0).pos;
	goto BeforeRet;
	}BeforeRet: ;
	return result0;
}

static N_INLINE(void, copymem_7485_1689653243)(void* dest0, void* source0, NI size0) {
	void* LOC1;
	LOC1 = (void*)0;
	LOC1 = memcpy(dest0, source0, ((size_t) (size0)));
}

N_NIMCALL(NI, ssreaddata_157809_1780494535)(Streamobj156818* s_157811_1780494535, void* buffer0, NI buflen0) {
	NI result0;
	Stringstreamobj157777* s0;
	result0 = (NI)0;
	s0 = ((Stringstreamobj157777*) (s_157811_1780494535));
	result0 = ((buflen0 <= (NI)(((*s0).data ? (*s0).data->Sup.len : 0) - (*s0).pos)) ? buflen0 : (NI)(((*s0).data ? (*s0).data->Sup.len : 0) - (*s0).pos));
	{
		if (!(((NI) 0) < result0)) goto LA3;
		copymem_7485_1689653243(buffer0, ((void*) ((&(*s0).data->data[(*s0).pos]))), ((NI) (result0)));
		(*s0).pos += result0;
	}
	LA3: ;
	return result0;
}

N_NIMCALL(NI, sspeekdata_157830_1780494535)(Streamobj156818* s_157832_1780494535, void* buffer0, NI buflen0) {
	NI result0;
	Stringstreamobj157777* s0;
	result0 = (NI)0;
	s0 = ((Stringstreamobj157777*) (s_157832_1780494535));
	result0 = ((buflen0 <= (NI)(((*s0).data ? (*s0).data->Sup.len : 0) - (*s0).pos)) ? buflen0 : (NI)(((*s0).data ? (*s0).data->Sup.len : 0) - (*s0).pos));
	{
		if (!(((NI) 0) < result0)) goto LA3;
		copymem_7485_1689653243(buffer0, ((void*) ((&(*s0).data->data[(*s0).pos]))), ((NI) (result0)));
	}
	LA3: ;
	return result0;
}

N_NIMCALL(void, sswritedata_157842_1780494535)(Streamobj156818* s_157844_1780494535, void* buffer0, NI buflen0) {
	Stringstreamobj157777* s0;
{	s0 = ((Stringstreamobj157777*) (s_157844_1780494535));
	{
		if (!(buflen0 <= ((NI) 0))) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	{
		if (!(((*s0).data ? (*s0).data->Sup.len : 0) < (NI)((*s0).pos + buflen0))) goto LA7;
		(*s0).data = setLengthStr((*s0).data, ((NI) ((NI)((*s0).pos + buflen0))));
	}
	LA7: ;
	copymem_7485_1689653243(((void*) ((&(*s0).data->data[(*s0).pos]))), buffer0, ((NI) (buflen0)));
	(*s0).pos += buflen0;
	}BeforeRet: ;
}

N_NIMCALL(Stringstreamobj157777*, newstringstream_157862_1780494535)(NimStringDesc* s0) {
	Stringstreamobj157777* result0;
	NimStringDesc* LOC1;
	result0 = (Stringstreamobj157777*)0;
	result0 = (Stringstreamobj157777*) newObj((&NTI157775), sizeof(Stringstreamobj157777));
	(*result0).Sup.Sup.m_type = (&NTI157777);
	LOC1 = (NimStringDesc*)0;
	LOC1 = (*result0).data; (*result0).data = copyStringRC1(s0);
	if (LOC1) nimGCunrefNoCycle(LOC1);
	(*result0).pos = ((NI) 0);
	(*result0).Sup.closeimpl = ssclose_157858_1780494535;
	(*result0).Sup.atendimpl = ssatend_157783_1780494535;
	(*result0).Sup.setpositionimpl = sssetposition_157788_1780494535;
	(*result0).Sup.getpositionimpl = ssgetposition_157804_1780494535;
	(*result0).Sup.readdataimpl = ssreaddata_157809_1780494535;
	(*result0).Sup.peekdataimpl = sspeekdata_157830_1780494535;
	(*result0).Sup.writedataimpl = sswritedata_157842_1780494535;
	return result0;
}

N_NIMCALL(NimStringDesc*, readall_156920_1780494535)(Streamobj156818* s0) {
	NimStringDesc* result0;
	NI r0;
	result0 = (NimStringDesc*)0;
	result0 = mnewString(((NI) 1000));
	r0 = ((NI) 0);
	{
		while (1) {
			NI readbytes0;
			readbytes0 = readdata_156914_1780494535(s0, ((void*) ((&result0->data[r0]))), ((NI) 1000));
			{
				if (!(readbytes0 < ((NI) 1000))) goto LA5;
				result0 = setLengthStr(result0, ((NI) ((NI)(r0 + readbytes0))));
				goto LA1;
			}
			LA5: ;
			r0 += ((NI) 1000);
			result0 = setLengthStr(result0, ((NI) ((NI)(r0 + ((NI) 1000)))));
		}
	} LA1: ;
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_streamsInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_streamsDatInit000)(void) {
static TNimNode* T1780494535_2[8];
static TNimNode* T1780494535_8[2];
static TNimNode T1780494535_0[13];
NTI156818.size = sizeof(Streamobj156818);
NTI156818.kind = 17;
NTI156818.base = (&NTI3608);
NTI156818.flags = 1;
T1780494535_2[0] = &T1780494535_0[1];
NTI156819.size = sizeof(TY156819);
NTI156819.kind = 25;
NTI156819.base = 0;
NTI156819.flags = 3;
T1780494535_0[1].kind = 1;
T1780494535_0[1].offset = offsetof(Streamobj156818, closeimpl);
T1780494535_0[1].typ = (&NTI156819);
T1780494535_0[1].name = "closeImpl";
T1780494535_2[1] = &T1780494535_0[2];
NTI156823.size = sizeof(TY156823);
NTI156823.kind = 25;
NTI156823.base = 0;
NTI156823.flags = 3;
T1780494535_0[2].kind = 1;
T1780494535_0[2].offset = offsetof(Streamobj156818, atendimpl);
T1780494535_0[2].typ = (&NTI156823);
T1780494535_0[2].name = "atEndImpl";
T1780494535_2[2] = &T1780494535_0[3];
NTI156827.size = sizeof(TY156827);
NTI156827.kind = 25;
NTI156827.base = 0;
NTI156827.flags = 3;
T1780494535_0[3].kind = 1;
T1780494535_0[3].offset = offsetof(Streamobj156818, setpositionimpl);
T1780494535_0[3].typ = (&NTI156827);
T1780494535_0[3].name = "setPositionImpl";
T1780494535_2[3] = &T1780494535_0[4];
NTI156832.size = sizeof(TY156832);
NTI156832.kind = 25;
NTI156832.base = 0;
NTI156832.flags = 3;
T1780494535_0[4].kind = 1;
T1780494535_0[4].offset = offsetof(Streamobj156818, getpositionimpl);
T1780494535_0[4].typ = (&NTI156832);
T1780494535_0[4].name = "getPositionImpl";
T1780494535_2[4] = &T1780494535_0[5];
NTI156836.size = sizeof(TY156836);
NTI156836.kind = 25;
NTI156836.base = 0;
NTI156836.flags = 3;
T1780494535_0[5].kind = 1;
T1780494535_0[5].offset = offsetof(Streamobj156818, readdataimpl);
T1780494535_0[5].typ = (&NTI156836);
T1780494535_0[5].name = "readDataImpl";
T1780494535_2[5] = &T1780494535_0[6];
NTI156842.size = sizeof(TY156842);
NTI156842.kind = 25;
NTI156842.base = 0;
NTI156842.flags = 3;
T1780494535_0[6].kind = 1;
T1780494535_0[6].offset = offsetof(Streamobj156818, peekdataimpl);
T1780494535_0[6].typ = (&NTI156842);
T1780494535_0[6].name = "peekDataImpl";
T1780494535_2[6] = &T1780494535_0[7];
NTI156848.size = sizeof(TY156848);
NTI156848.kind = 25;
NTI156848.base = 0;
NTI156848.flags = 3;
T1780494535_0[7].kind = 1;
T1780494535_0[7].offset = offsetof(Streamobj156818, writedataimpl);
T1780494535_0[7].typ = (&NTI156848);
T1780494535_0[7].name = "writeDataImpl";
T1780494535_2[7] = &T1780494535_0[8];
NTI156854.size = sizeof(TY156854);
NTI156854.kind = 25;
NTI156854.base = 0;
NTI156854.flags = 3;
T1780494535_0[8].kind = 1;
T1780494535_0[8].offset = offsetof(Streamobj156818, flushimpl);
T1780494535_0[8].typ = (&NTI156854);
T1780494535_0[8].name = "flushImpl";
T1780494535_0[0].len = 8; T1780494535_0[0].kind = 2; T1780494535_0[0].sons = &T1780494535_2[0];
NTI156818.node = &T1780494535_0[0];
NTI156816.size = sizeof(Streamobj156818*);
NTI156816.kind = 22;
NTI156816.base = (&NTI156818);
NTI156816.marker = T1780494535_3;
NTI157877.size = sizeof(Filestreamobj157877);
NTI157877.kind = 17;
NTI157877.base = (&NTI156818);
NTI157877.flags = 1;
T1780494535_0[9].kind = 1;
T1780494535_0[9].offset = offsetof(Filestreamobj157877, f);
T1780494535_0[9].typ = (&NTI13007);
T1780494535_0[9].name = "f";
NTI157877.node = &T1780494535_0[9];
NTI157875.size = sizeof(Filestreamobj157877*);
NTI157875.kind = 22;
NTI157875.base = (&NTI157877);
NTI157875.marker = T1780494535_4;
NTI157777.size = sizeof(Stringstreamobj157777);
NTI157777.kind = 17;
NTI157777.base = (&NTI156818);
T1780494535_8[0] = &T1780494535_0[11];
T1780494535_0[11].kind = 1;
T1780494535_0[11].offset = offsetof(Stringstreamobj157777, data);
T1780494535_0[11].typ = (&NTI138);
T1780494535_0[11].name = "data";
T1780494535_8[1] = &T1780494535_0[12];
T1780494535_0[12].kind = 1;
T1780494535_0[12].offset = offsetof(Stringstreamobj157777, pos);
T1780494535_0[12].typ = (&NTI104);
T1780494535_0[12].name = "pos";
T1780494535_0[10].len = 2; T1780494535_0[10].kind = 2; T1780494535_0[10].sons = &T1780494535_8[0];
NTI157777.node = &T1780494535_0[10];
NTI157775.size = sizeof(Stringstreamobj157777*);
NTI157775.kind = 22;
NTI157775.base = (&NTI157777);
NTI157775.marker = T1780494535_9;
}

