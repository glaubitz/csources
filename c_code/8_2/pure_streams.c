/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct eio1033 eio1033;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct esystem1031 esystem1031;
typedef struct esynch1029 esynch1029;
typedef struct E_Base E_Base;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tcell38848 tcell38848;
typedef struct tcellseq38864 tcellseq38864;
typedef struct tgcheap40816 tgcheap40816;
typedef struct tcellset38860 tcellset38860;
typedef struct tpagedesc38856 tpagedesc38856;
typedef struct tmemregion22210 tmemregion22210;
typedef struct tsmallchunk21438 tsmallchunk21438;
typedef struct tllchunk22204 tllchunk22204;
typedef struct tbigchunk21440 tbigchunk21440;
typedef struct tintset21415 tintset21415;
typedef struct ttrunk21411 ttrunk21411;
typedef struct tavlnode22208 tavlnode22208;
typedef struct tgcstat40814 tgcstat40814;
typedef struct tstream141629 tstream141629;
typedef struct tstringstream141999 tstringstream141999;
typedef struct tfilestream142109 tfilestream142109;
typedef struct tbasechunk21436 tbasechunk21436;
typedef struct tfreecell21428 tfreecell21428;
struct TGenericSeq {
NI len;
NI reserved;
};
typedef NIM_CHAR TY611[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY611 data;
};
typedef N_NIMCALL_PTR(void, TY889) (void* p, NI op);
struct TNimType {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY889 marker;
};
struct TNimObject {
TNimType* m_type;
};
struct E_Base {
  TNimObject Sup;
E_Base* parent;
NCSTRING name;
NimStringDesc* message;
NimStringDesc* trace;
};
struct esynch1029 {
  E_Base Sup;
};
struct esystem1031 {
  esynch1029 Sup;
};
struct eio1033 {
  esystem1031 Sup;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct tcell38848 {
NI Refcount;
TNimType* Typ;
};
struct tcellseq38864 {
NI Len;
NI Cap;
tcell38848** D;
};
struct tcellset38860 {
NI Counter;
NI Max;
tpagedesc38856* Head;
tpagedesc38856** Data;
};
typedef tsmallchunk21438* TY22222[512];
typedef ttrunk21411* ttrunkbuckets21413[256];
struct tintset21415 {
ttrunkbuckets21413 Data;
};
struct tmemregion22210 {
NI Minlargeobj;
NI Maxlargeobj;
TY22222 Freesmallchunks;
tllchunk22204* Llmem;
NI Currmem;
NI Maxmem;
NI Freemem;
NI Lastsize;
tbigchunk21440* Freechunkslist;
tintset21415 Chunkstarts;
tavlnode22208* Root;
tavlnode22208* Deleted;
tavlnode22208* Last;
tavlnode22208* Freeavlnodes;
};
struct tgcstat40814 {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
NI64 Maxpause;
};
struct tgcheap40816 {
void* Stackbottom;
NI Cyclethreshold;
tcellseq38864 Zct;
tcellseq38864 Decstack;
tcellset38860 Cycleroots;
tcellseq38864 Tempstack;
NI Recgclock;
tmemregion22210 Region;
tgcstat40814 Stat;
};
typedef N_NIMCALL_PTR(void, TY141630) (tstream141629* s);
typedef N_NIMCALL_PTR(NIM_BOOL, TY141634) (tstream141629* s);
typedef N_NIMCALL_PTR(void, TY141638) (tstream141629* s, NI pos);
typedef N_NIMCALL_PTR(NI, TY141643) (tstream141629* s);
typedef N_NIMCALL_PTR(NI, TY141647) (tstream141629* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY141653) (tstream141629* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY141659) (tstream141629* s);
struct tstream141629 {
  TNimObject Sup;
TY141630 Closeimpl;
TY141634 Atendimpl;
TY141638 Setpositionimpl;
TY141643 Getpositionimpl;
TY141647 Readdataimpl;
TY141653 Writedataimpl;
TY141659 Flushimpl;
};
struct tstringstream141999 {
  tstream141629 Sup;
NimStringDesc* Data;
NI Pos;
};
struct tfilestream142109 {
  tstream141629 Sup;
FILE* F;
};
typedef NI TY21418[8];
struct tpagedesc38856 {
tpagedesc38856* Next;
NI Key;
TY21418 Bits;
};
struct tbasechunk21436 {
NI Prevsize;
NI Size;
NIM_BOOL Used;
};
struct tsmallchunk21438 {
  tbasechunk21436 Sup;
tsmallchunk21438* Next;
tsmallchunk21438* Prev;
tfreecell21428* Freelist;
NI Free;
NI Acc;
NF Data;
};
struct tllchunk22204 {
NI Size;
NI Acc;
tllchunk22204* Next;
};
struct tbigchunk21440 {
  tbasechunk21436 Sup;
tbigchunk21440* Next;
tbigchunk21440* Prev;
NI Align;
NF Data;
};
struct ttrunk21411 {
ttrunk21411* Next;
NI Key;
TY21418 Bits;
};
typedef tavlnode22208* TY22214[2];
struct tavlnode22208 {
TY22214 Link;
NI Key;
NI Upperbound;
NI Level;
};
struct tfreecell21428 {
tfreecell21428* Next;
NI Zerofield;
};
N_NIMCALL(eio1033*, neweio_141607)(NimStringDesc* msg);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell38848*, usrtocell_42239)(void* usr);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(void, rtladdzct_43802)(tcell38848* c);
N_NOINLINE(void, addzct_42215)(tcellseq38864* s, tcell38848* c);
N_NIMCALL(void, flush_141664)(tstream141629* s);
N_NIMCALL(void, close_141675)(tstream141629* s);
N_NIMCALL(void, close_141686)(tstream141629* s, tstream141629* unused);
N_NIMCALL(NIM_BOOL, atend_141692)(tstream141629* s);
N_NIMCALL(NIM_BOOL, atend_141698)(tstream141629* s, tstream141629* unused);
N_NIMCALL(void, setposition_141705)(tstream141629* s, NI pos);
N_NIMCALL(void, setposition_141711)(tstream141629* s, tstream141629* unused, NI pos);
N_NIMCALL(NI, getposition_141718)(tstream141629* s);
N_NIMCALL(NI, getposition_141724)(tstream141629* s, tstream141629* unused);
N_NIMCALL(NI, readdata_141731)(tstream141629* s, void* buffer, NI buflen);
N_NIMCALL(NI, readdata_141739)(tstream141629* s, tstream141629* unused, void* buffer, NI buflen);
N_NIMCALL(void, writedata_141748)(tstream141629* s, void* buffer, NI buflen);
N_NIMCALL(void, writedata_141755)(tstream141629* s, tstream141629* unused, void* buffer, NI buflen);
N_NIMCALL(void, write_141772)(tstream141629* s, NimStringDesc* x);
N_NIMCALL(void, writeln_141778)(tstream141629* s, NimStringDesc** args, NI argsLen0);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(NIM_CHAR, readchar_141808)(tstream141629* s);
N_NIMCALL(void, read_141821)(tstream141629* s, NIM_BOOL* result);
N_NIMCALL(void, raiseException)(E_Base* e, NCSTRING ename);
N_NIMCALL(NIM_BOOL, readbool_141815)(tstream141629* s);
N_NIMCALL(void, read_141842)(tstream141629* s, NI8* result);
N_NIMCALL(NI8, readint8_141836)(tstream141629* s);
N_NIMCALL(void, read_141863)(tstream141629* s, NI16* result);
N_NIMCALL(NI16, readint16_141857)(tstream141629* s);
N_NIMCALL(void, read_141884)(tstream141629* s, NI32* result);
N_NIMCALL(NI32, readint32_141878)(tstream141629* s);
N_NIMCALL(void, read_141905)(tstream141629* s, NI64* result);
N_NIMCALL(NI64, readint64_141899)(tstream141629* s);
N_NIMCALL(void, read_141926)(tstream141629* s, NF32* result);
N_NIMCALL(NF32, readfloat32_141920)(tstream141629* s);
N_NIMCALL(void, read_141947)(tstream141629* s, NF* result);
N_NIMCALL(NF, readfloat64_141941)(tstream141629* s);
N_NIMCALL(NimStringDesc*, readstr_141962)(tstream141629* s, NI length);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newlen);
N_NIMCALL(NIM_BOOL, readline_141973)(tstream141629* s, NimStringDesc** line);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, readline_141986)(tstream141629* s);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NIM_BOOL, ssatend_142003)(tstream141629* s_142005);
N_NIMCALL(void, chckObj)(TNimType* obj, TNimType* subclass);
N_NIMCALL(NI, clamp_142016)(NI x, NI a, NI b);
N_NIMCALL(void, sssetposition_142010)(tstream141629* s_142012, NI pos);
N_NIMCALL(NI, ssgetposition_142031)(tstream141629* s_142033);
N_NIMCALL(NI, ssreaddata_142038)(tstream141629* s_142040, void* buffer, NI buflen);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NIMCALL(void, sswritedata_142062)(tstream141629* s_142064, void* buffer, NI buflen);
N_NIMCALL(void, ssclose_142082)(tstream141629* s_142084);
N_NIMCALL(tstringstream141999*, newstringstream_142088)(NimStringDesc* s);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP932)(void* p, NI op);
N_NIMCALL(void, fsclose_142112)(tstream141629* s);
N_NIMCALL(void, fsflush_142129)(tstream141629* s);
N_NIMCALL(NIM_BOOL, fsatend_142134)(tstream141629* s);
N_NIMCALL(NIM_BOOL, endoffile_9424)(FILE* f);
N_NIMCALL(void, fssetposition_142140)(tstream141629* s, NI pos);
N_NIMCALL(void, setfilepos_9538)(FILE* f, NI64 pos);
N_NIMCALL(NI, fsgetposition_142146)(tstream141629* s);
N_NIMCALL(NI64, getfilepos_9542)(FILE* f);
N_NIMCALL(NI, fsreaddata_142153)(tstream141629* s, void* buffer, NI buflen);
N_NIMCALL(NI, readbuffer_9514)(FILE* f, void* buffer, NI len);
N_NIMCALL(void, fswritedata_142161)(tstream141629* s, void* buffer, NI buflen);
N_NIMCALL(NI, writebuffer_9533)(FILE* f, void* buffer, NI len);
N_NIMCALL(tfilestream142109*, newfilestream_142168)(FILE* f);
N_NIMCALL(void, TMP934)(void* p, NI op);
N_NIMCALL(tfilestream142109*, newfilestream_142186)(NimStringDesc* filename, NU8 mode);
N_NIMCALL(NIM_BOOL, open_9203)(FILE** f, NimStringDesc* filename, NU8 mode, NI bufsize);
N_NIMCALL(void, TMP951)(void* p, NI op);
STRING_LITERAL(TMP925, "\012", 1);
STRING_LITERAL(TMP926, "cannot read from stream", 23);
STRING_LITERAL(TMP927, "", 0);
STRING_LITERAL(TMP933, "cannot write to stream", 22);
extern TNimType NTI9401; /* ref EIO */
extern TNimType NTI1033; /* EIO */
extern TFrame* frameptr_12037;
extern tgcheap40816 gch_40844;
extern TNimType NTI1009; /* TObject */
TNimType NTI141629; /* TStream */
TNimType NTI141630; /* proc (PStream) */
TNimType NTI141634; /* proc (PStream): bool */
TNimType NTI141638; /* proc (PStream, int) */
TNimType NTI141643; /* proc (PStream): int */
TNimType NTI141647; /* proc (PStream, pointer, int): int */
TNimType NTI141653; /* proc (PStream, pointer, int) */
TNimType NTI141659; /* proc (PStream) */
TNimType NTI141999; /* TStringStream */
extern TNimType NTI142; /* string */
extern TNimType NTI105; /* int */
TNimType NTI141997; /* PStringStream */
TNimType NTI142109; /* TFileStream */
extern TNimType NTI9004; /* TFile */
TNimType NTI142107; /* PFileStream */
TNimType NTI141627; /* PStream */

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_12037;
	frameptr_12037 = s;
}
static N_INLINE(void, popFrame)(void) {
	frameptr_12037 = (*frameptr_12037).prev;
}
static N_INLINE(tcell38848*, usrtocell_42239)(void* usr) {
	tcell38848* result;
	nimfr("usrToCell", "gc.nim")
	result = 0;
	nimln(116, "gc.nim");
	nimln(116, "gc.nim");
	nimln(116, "gc.nim");
	result = ((tcell38848*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(tcell38848))))));
	popFrame();
	return result;
}
static N_INLINE(void, rtladdzct_43802)(tcell38848* c) {
	nimfr("rtlAddZCT", "gc.nim")
	nimln(197, "gc.nim");
	addzct_42215(&gch_40844.Zct, c);	popFrame();
}
static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tcell38848* c;
	nimfr("nimGCunrefNoCycle", "gc.nim")
	nimln(231, "gc.nim");
	c = usrtocell_42239(p);
	nimln(233, "gc.nim");
	{
		nimln(165, "gc.nim");
		(*c).Refcount -= 8;
		nimln(166, "gc.nim");
		if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA3;
		nimln(234, "gc.nim");
		rtladdzct_43802(c);	}	LA3: ;
	popFrame();
}
N_NIMCALL(eio1033*, neweio_141607)(NimStringDesc* msg) {
	eio1033* result;
	NimStringDesc* LOC1;
	nimfr("newEIO", "streams.nim")
	result = 0;
	nimln(16, "streams.nim");
	result = (eio1033*) newObj((&NTI9401), sizeof(eio1033));
	(*result).Sup.Sup.Sup.Sup.m_type = (&NTI1033);
	nimln(17, "streams.nim");
	LOC1 = 0;
	LOC1 = (*result).Sup.Sup.Sup.message; (*result).Sup.Sup.Sup.message = copyStringRC1(msg);
	if (LOC1) nimGCunrefNoCycle(LOC1);
	popFrame();
	return result;
}
N_NIMCALL(void, flush_141664)(tstream141629* s) {
	nimfr("flush", "streams.nim")
	nimln(38, "streams.nim");
	{
		nimln(38, "streams.nim");
		nimln(38, "streams.nim");
		if (!!((*s).Flushimpl == 0)) goto LA3;
		nimln(38, "streams.nim");
		(*s).Flushimpl(s);	}	LA3: ;
	popFrame();
}
N_NIMCALL(void, close_141675)(tstream141629* s) {
	nimfr("close", "streams.nim")
	nimln(42, "streams.nim");
	{
		nimln(42, "streams.nim");
		nimln(42, "streams.nim");
		if (!!((*s).Closeimpl == 0)) goto LA3;
		nimln(42, "streams.nim");
		(*s).Closeimpl(s);	}	LA3: ;
	popFrame();
}
N_NIMCALL(void, close_141686)(tstream141629* s, tstream141629* unused) {
	nimfr("close", "streams.nim")
	nimln(46, "streams.nim");
	(*s).Closeimpl(s);	popFrame();
}
N_NIMCALL(NIM_BOOL, atend_141692)(tstream141629* s) {
	NIM_BOOL result;
	nimfr("atEnd", "streams.nim")
	result = 0;
	nimln(51, "streams.nim");
	result = (*s).Atendimpl(s);
	popFrame();
	return result;
}
N_NIMCALL(NIM_BOOL, atend_141698)(tstream141629* s, tstream141629* unused) {
	NIM_BOOL result;
	nimfr("atEnd", "streams.nim")
	result = 0;
	nimln(56, "streams.nim");
	result = (*s).Atendimpl(s);
	popFrame();
	return result;
}
N_NIMCALL(void, setposition_141705)(tstream141629* s, NI pos) {
	nimfr("setPosition", "streams.nim")
	nimln(60, "streams.nim");
	(*s).Setpositionimpl(s, pos);	popFrame();
}
N_NIMCALL(void, setposition_141711)(tstream141629* s, tstream141629* unused, NI pos) {
	nimfr("setPosition", "streams.nim")
	nimln(64, "streams.nim");
	(*s).Setpositionimpl(s, pos);	popFrame();
}
N_NIMCALL(NI, getposition_141718)(tstream141629* s) {
	NI result;
	nimfr("getPosition", "streams.nim")
	result = 0;
	nimln(68, "streams.nim");
	result = (*s).Getpositionimpl(s);
	popFrame();
	return result;
}
N_NIMCALL(NI, getposition_141724)(tstream141629* s, tstream141629* unused) {
	NI result;
	nimfr("getPosition", "streams.nim")
	result = 0;
	nimln(72, "streams.nim");
	result = (*s).Getpositionimpl(s);
	popFrame();
	return result;
}
N_NIMCALL(NI, readdata_141731)(tstream141629* s, void* buffer, NI buflen) {
	NI result;
	nimfr("readData", "streams.nim")
	result = 0;
	nimln(76, "streams.nim");
	result = (*s).Readdataimpl(s, buffer, buflen);
	popFrame();
	return result;
}
N_NIMCALL(NI, readdata_141739)(tstream141629* s, tstream141629* unused, void* buffer, NI buflen) {
	NI result;
	nimfr("readData", "streams.nim")
	result = 0;
	nimln(81, "streams.nim");
	result = (*s).Readdataimpl(s, buffer, buflen);
	popFrame();
	return result;
}
N_NIMCALL(void, writedata_141748)(tstream141629* s, void* buffer, NI buflen) {
	nimfr("writeData", "streams.nim")
	nimln(86, "streams.nim");
	(*s).Writedataimpl(s, buffer, buflen);	popFrame();
}
N_NIMCALL(void, writedata_141755)(tstream141629* s, tstream141629* unused, void* buffer, NI buflen) {
	nimfr("writeData", "streams.nim")
	nimln(92, "streams.nim");
	(*s).Writedataimpl(s, buffer, buflen);	popFrame();
}
N_NIMCALL(void, write_141772)(tstream141629* s, NimStringDesc* x) {
	nimfr("write", "streams.nim")
	nimln(107, "streams.nim");
	nimln(107, "streams.nim");
	writedata_141748(s, ((void*) (x->data)), x->Sup.len);	popFrame();
}
static N_INLINE(NI, addInt)(NI a, NI b) {
	NI result;
	result = 0;
	result = (NI)((NU64)(a) + (NU64)(b));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (0 <= (NI)(result ^ a));
		if (LOC3) goto LA4;
		LOC3 = (0 <= (NI)(result ^ b));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}	LA5: ;
	raiseOverflow();	BeforeRet: ;	return result;
}
N_NIMCALL(void, writeln_141778)(tstream141629* s, NimStringDesc** args, NI argsLen0) {
	NimStringDesc* str_141791;
	NI i_141793;
	nimfr("writeln", "streams.nim")
	str_141791 = 0;
	nimln(1377, "system.nim");
	i_141793 = 0;
	nimln(1378, "system.nim");
	while (1) {
		nimln(1378, "system.nim");
		nimln(1378, "system.nim");
		if (!(i_141793 < argsLen0)) goto LA1;
		nimln(1379, "system.nim");
		if ((NU)(i_141793) >= (NU)(argsLen0)) raiseIndexError();
		str_141791 = args[i_141793];
		nimln(112, "streams.nim");
		write_141772(s, str_141791);		nimln(1380, "system.nim");
		i_141793 = addInt(i_141793, 1);
	} LA1: ;
	nimln(113, "streams.nim");
	write_141772(s, ((NimStringDesc*) &TMP925));	popFrame();
}
N_NIMCALL(NIM_CHAR, readchar_141808)(tstream141629* s) {
	NIM_CHAR result;
	nimfr("readChar", "streams.nim")
	result = 0;
	nimln(123, "streams.nim");
	{
		NI LOC3;
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		nimln(123, "streams.nim");
		LOC3 = 0;
		LOC3 = readdata_141731(s, ((void*) (&result)), 1);
		if (!!((LOC3 == 1))) goto LA4;
		nimln(123, "streams.nim");
		result = 0;
	}	LA4: ;
	popFrame();
	return result;
}
N_NIMCALL(void, read_141821)(tstream141629* s, NIM_BOOL* result) {
	nimfr("read", "streams.nim")
	nimln(117, "streams.nim");
	{
		NI LOC3;
		eio1033* LOC6;
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		nimln(117, "streams.nim");
		LOC3 = 0;
		LOC3 = readdata_141731(s, ((void*) (result)), 1);
		if (!!((LOC3 == 1))) goto LA4;
		nimln(118, "streams.nim");
		LOC6 = 0;
		LOC6 = neweio_141607(((NimStringDesc*) &TMP926));
		nimln(118, "streams.nim");
		raiseException((E_Base*)LOC6, "EIO");
	}	LA4: ;
	popFrame();
}
N_NIMCALL(NIM_BOOL, readbool_141815)(tstream141629* s) {
	NIM_BOOL result;
	nimfr("readBool", "streams.nim")
	result = 0;
	nimln(127, "streams.nim");
	read_141821(s, &result);	popFrame();
	return result;
}
N_NIMCALL(void, read_141842)(tstream141629* s, NI8* result) {
	nimfr("read", "streams.nim")
	nimln(117, "streams.nim");
	{
		NI LOC3;
		eio1033* LOC6;
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		nimln(117, "streams.nim");
		LOC3 = 0;
		LOC3 = readdata_141731(s, ((void*) (result)), 1);
		if (!!((LOC3 == 1))) goto LA4;
		nimln(118, "streams.nim");
		LOC6 = 0;
		LOC6 = neweio_141607(((NimStringDesc*) &TMP926));
		nimln(118, "streams.nim");
		raiseException((E_Base*)LOC6, "EIO");
	}	LA4: ;
	popFrame();
}
N_NIMCALL(NI8, readint8_141836)(tstream141629* s) {
	NI8 result;
	nimfr("readInt8", "streams.nim")
	result = 0;
	nimln(131, "streams.nim");
	read_141842(s, &result);	popFrame();
	return result;
}
N_NIMCALL(void, read_141863)(tstream141629* s, NI16* result) {
	nimfr("read", "streams.nim")
	nimln(117, "streams.nim");
	{
		NI LOC3;
		eio1033* LOC6;
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		nimln(117, "streams.nim");
		LOC3 = 0;
		LOC3 = readdata_141731(s, ((void*) (result)), 2);
		if (!!((LOC3 == 2))) goto LA4;
		nimln(118, "streams.nim");
		LOC6 = 0;
		LOC6 = neweio_141607(((NimStringDesc*) &TMP926));
		nimln(118, "streams.nim");
		raiseException((E_Base*)LOC6, "EIO");
	}	LA4: ;
	popFrame();
}
N_NIMCALL(NI16, readint16_141857)(tstream141629* s) {
	NI16 result;
	nimfr("readInt16", "streams.nim")
	result = 0;
	nimln(135, "streams.nim");
	read_141863(s, &result);	popFrame();
	return result;
}
N_NIMCALL(void, read_141884)(tstream141629* s, NI32* result) {
	nimfr("read", "streams.nim")
	nimln(117, "streams.nim");
	{
		NI LOC3;
		eio1033* LOC6;
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		nimln(117, "streams.nim");
		LOC3 = 0;
		LOC3 = readdata_141731(s, ((void*) (result)), 4);
		if (!!((LOC3 == 4))) goto LA4;
		nimln(118, "streams.nim");
		LOC6 = 0;
		LOC6 = neweio_141607(((NimStringDesc*) &TMP926));
		nimln(118, "streams.nim");
		raiseException((E_Base*)LOC6, "EIO");
	}	LA4: ;
	popFrame();
}
N_NIMCALL(NI32, readint32_141878)(tstream141629* s) {
	NI32 result;
	nimfr("readInt32", "streams.nim")
	result = 0;
	nimln(139, "streams.nim");
	read_141884(s, &result);	popFrame();
	return result;
}
N_NIMCALL(void, read_141905)(tstream141629* s, NI64* result) {
	nimfr("read", "streams.nim")
	nimln(117, "streams.nim");
	{
		NI LOC3;
		eio1033* LOC6;
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		nimln(117, "streams.nim");
		LOC3 = 0;
		LOC3 = readdata_141731(s, ((void*) (result)), 8);
		if (!!((LOC3 == 8))) goto LA4;
		nimln(118, "streams.nim");
		LOC6 = 0;
		LOC6 = neweio_141607(((NimStringDesc*) &TMP926));
		nimln(118, "streams.nim");
		raiseException((E_Base*)LOC6, "EIO");
	}	LA4: ;
	popFrame();
}
N_NIMCALL(NI64, readint64_141899)(tstream141629* s) {
	NI64 result;
	nimfr("readInt64", "streams.nim")
	result = 0;
	nimln(143, "streams.nim");
	read_141905(s, &result);	popFrame();
	return result;
}
N_NIMCALL(void, read_141926)(tstream141629* s, NF32* result) {
	nimfr("read", "streams.nim")
	nimln(117, "streams.nim");
	{
		NI LOC3;
		eio1033* LOC6;
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		nimln(117, "streams.nim");
		LOC3 = 0;
		LOC3 = readdata_141731(s, ((void*) (result)), 4);
		if (!!((LOC3 == 4))) goto LA4;
		nimln(118, "streams.nim");
		LOC6 = 0;
		LOC6 = neweio_141607(((NimStringDesc*) &TMP926));
		nimln(118, "streams.nim");
		raiseException((E_Base*)LOC6, "EIO");
	}	LA4: ;
	popFrame();
}
N_NIMCALL(NF32, readfloat32_141920)(tstream141629* s) {
	NF32 result;
	nimfr("readFloat32", "streams.nim")
	result = 0;
	nimln(147, "streams.nim");
	read_141926(s, &result);	popFrame();
	return result;
}
N_NIMCALL(void, read_141947)(tstream141629* s, NF* result) {
	nimfr("read", "streams.nim")
	nimln(117, "streams.nim");
	{
		NI LOC3;
		eio1033* LOC6;
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		nimln(117, "streams.nim");
		LOC3 = 0;
		LOC3 = readdata_141731(s, ((void*) (result)), 8);
		if (!!((LOC3 == 8))) goto LA4;
		nimln(118, "streams.nim");
		LOC6 = 0;
		LOC6 = neweio_141607(((NimStringDesc*) &TMP926));
		nimln(118, "streams.nim");
		raiseException((E_Base*)LOC6, "EIO");
	}	LA4: ;
	popFrame();
}
N_NIMCALL(NF, readfloat64_141941)(tstream141629* s) {
	NF result;
	nimfr("readFloat64", "streams.nim")
	result = 0;
	nimln(151, "streams.nim");
	read_141947(s, &result);	popFrame();
	return result;
}
N_NIMCALL(NimStringDesc*, readstr_141962)(tstream141629* s, NI length) {
	NimStringDesc* result;
	NI l;
	nimfr("readStr", "streams.nim")
	result = 0;
	nimln(156, "streams.nim");
	nimln(156, "streams.nim");
	result = mnewString(length);
	nimln(157, "streams.nim");
	if ((NU)(0) > (NU)(result->Sup.len)) raiseIndexError();
	l = readdata_141731(s, ((void*) (&result->data[0])), length);
	nimln(158, "streams.nim");
	{
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		if (!!((l == length))) goto LA3;
		nimln(158, "streams.nim");
		result = setLengthStr(result, l);
	}	LA3: ;
	popFrame();
	return result;
}
N_NIMCALL(NIM_BOOL, readline_141973)(tstream141629* s, NimStringDesc** line) {
	NIM_BOOL result;
	nimfr("readLine", "streams.nim")
	result = 0;
	nimln(167, "streams.nim");
	(*line) = setLengthStr((*line), 0);
	nimln(168, "streams.nim");
	while (1) {
		NIM_CHAR c;
		nimln(169, "streams.nim");
		c = readchar_141808(s);
		nimln(170, "streams.nim");
		{
			nimln(170, "streams.nim");
			if (!((NU8)(c) == (NU8)(13))) goto LA4;
			nimln(171, "streams.nim");
			c = readchar_141808(s);
			nimln(172, "streams.nim");
			goto LA1;
		}		goto LA2;
		LA4: ;
		{
			nimln(173, "streams.nim");
			if (!((NU8)(c) == (NU8)(10))) goto LA7;
			nimln(173, "streams.nim");
			goto LA1;
		}		goto LA2;
		LA7: ;
		{
			nimln(174, "streams.nim");
			if (!((NU8)(c) == (NU8)(0))) goto LA10;
			nimln(175, "streams.nim");
			{
				nimln(706, "system.nim");
				nimln(175, "streams.nim");
				if (!(0 < (*line)->Sup.len)) goto LA14;
				nimln(175, "streams.nim");
				goto LA1;
			}			goto LA12;
			LA14: ;
			{
				nimln(176, "streams.nim");
				nimln(176, "streams.nim");
				result = NIM_FALSE;
				goto BeforeRet;
			}			LA12: ;
		}		goto LA2;
		LA10: ;
		LA2: ;
		nimln(177, "streams.nim");
		(*line) = addChar((*line), c);
	} LA1: ;
	nimln(178, "streams.nim");
	result = NIM_TRUE;
	BeforeRet: ;	popFrame();
	return result;
}
N_NIMCALL(NimStringDesc*, readline_141986)(tstream141629* s) {
	NimStringDesc* result;
	nimfr("readLine", "streams.nim")
	result = 0;
	nimln(183, "streams.nim");
	result = copyString(((NimStringDesc*) &TMP927));
	nimln(184, "streams.nim");
	while (1) {
		NIM_CHAR c;
		nimln(185, "streams.nim");
		c = readchar_141808(s);
		nimln(186, "streams.nim");
		{
			nimln(186, "streams.nim");
			if (!((NU8)(c) == (NU8)(13))) goto LA4;
			nimln(187, "streams.nim");
			c = readchar_141808(s);
			nimln(188, "streams.nim");
			goto LA1;
		}		LA4: ;
		nimln(189, "streams.nim");
		{
			NIM_BOOL LOC8;
			nimln(189, "streams.nim");
			LOC8 = 0;
			nimln(189, "streams.nim");
			LOC8 = ((NU8)(c) == (NU8)(10));
			if (LOC8) goto LA9;
			nimln(189, "streams.nim");
			LOC8 = ((NU8)(c) == (NU8)(0));
			LA9: ;
			if (!LOC8) goto LA10;
			nimln(190, "streams.nim");
			goto LA1;
		}		goto LA6;
		LA10: ;
		{
			nimln(192, "streams.nim");
			result = addChar(result, c);
		}		LA6: ;
	} LA1: ;
	popFrame();
	return result;
}
N_NIMCALL(NIM_BOOL, ssatend_142003)(tstream141629* s_142005) {
	NIM_BOOL result;
	tstringstream141999* s;
	nimfr("ssAtEnd", "streams.nim")
	result = 0;
	nimln(201, "streams.nim");
	if (s_142005) chckObj((*s_142005).Sup.m_type, (&NTI141999));
	s = ((tstringstream141999*) (s_142005));
	nimln(202, "streams.nim");
	nimln(202, "streams.nim");
	nimln(702, "system.nim");
	nimln(202, "streams.nim");
	result = ((*s).Data->Sup.len <= (*s).Pos);
	goto BeforeRet;
	BeforeRet: ;	popFrame();
	return result;
}
N_NIMCALL(void, sssetposition_142010)(tstream141629* s_142012, NI pos) {
	tstringstream141999* s;
	nimfr("ssSetPosition", "streams.nim")
	nimln(205, "streams.nim");
	if (s_142012) chckObj((*s_142012).Sup.m_type, (&NTI141999));
	s = ((tstringstream141999*) (s_142012));
	nimln(206, "streams.nim");
	nimln(206, "streams.nim");
	(*s).Pos = clamp_142016(pos, 0, ((*s).Data->Sup.len-1));
	popFrame();
}
N_NIMCALL(NI, ssgetposition_142031)(tstream141629* s_142033) {
	NI result;
	tstringstream141999* s;
	nimfr("ssGetPosition", "streams.nim")
	result = 0;
	nimln(209, "streams.nim");
	if (s_142033) chckObj((*s_142033).Sup.m_type, (&NTI141999));
	s = ((tstringstream141999*) (s_142033));
	nimln(210, "streams.nim");
	nimln(210, "streams.nim");
	result = (*s).Pos;
	goto BeforeRet;
	BeforeRet: ;	popFrame();
	return result;
}
static N_INLINE(NI, subInt)(NI a, NI b) {
	NI result;
	result = 0;
	result = (NI)((NU64)(a) - (NU64)(b));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (0 <= (NI)(result ^ a));
		if (LOC3) goto LA4;
		LOC3 = (0 <= (NI)(result ^ (NI)((NU64) ~(b))));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}	LA5: ;
	raiseOverflow();	BeforeRet: ;	return result;
}
N_NIMCALL(NI, ssreaddata_142038)(tstream141629* s_142040, void* buffer, NI buflen) {
	NI result;
	tstringstream141999* s;
	NI TMP930;
	nimfr("ssReadData", "streams.nim")
	result = 0;
	nimln(213, "streams.nim");
	if (s_142040) chckObj((*s_142040).Sup.m_type, (&NTI141999));
	s = ((tstringstream141999*) (s_142040));
	nimln(214, "streams.nim");
	nimln(214, "streams.nim");
	nimln(214, "streams.nim");
	nimln(214, "streams.nim");
	TMP930 = subInt((*s).Data->Sup.len, (*s).Pos);
	result = ((buflen <= (NI64)(TMP930)) ? buflen : (NI64)(TMP930));
	nimln(215, "streams.nim");
	{
		nimln(706, "system.nim");
		if (!(0 < result)) goto LA3;
		nimln(216, "streams.nim");
		if ((NU)((*s).Pos) > (NU)((*s).Data->Sup.len)) raiseIndexError();
		memcpy(buffer, ((void*) (&(*s).Data->data[(*s).Pos])), result);		nimln(217, "streams.nim");
		(*s).Pos = addInt((*s).Pos, result);
	}	LA3: ;
	popFrame();
	return result;
}
N_NIMCALL(void, sswritedata_142062)(tstream141629* s_142064, void* buffer, NI buflen) {
	tstringstream141999* s;
	nimfr("ssWriteData", "streams.nim")
	nimln(220, "streams.nim");
	if (s_142064) chckObj((*s_142064).Sup.m_type, (&NTI141999));
	s = ((tstringstream141999*) (s_142064));
	nimln(221, "streams.nim");
	{
		NI TMP931;
		nimln(706, "system.nim");
		if (!(0 < buflen)) goto LA3;
		nimln(222, "streams.nim");
		nimln(222, "streams.nim");
		nimln(222, "streams.nim");
		TMP931 = addInt((*s).Data->Sup.len, buflen);
		(*s).Data = setLengthStr((*s).Data, (NI64)(TMP931));
		nimln(223, "streams.nim");
		if ((NU)((*s).Pos) > (NU)((*s).Data->Sup.len)) raiseIndexError();
		memcpy(((void*) (&(*s).Data->data[(*s).Pos])), buffer, buflen);		nimln(224, "streams.nim");
		(*s).Pos = addInt((*s).Pos, buflen);
	}	LA3: ;
	popFrame();
}
N_NIMCALL(void, ssclose_142082)(tstream141629* s_142084) {
	tstringstream141999* s;
	NimStringDesc* LOC1;
	nimfr("ssClose", "streams.nim")
	nimln(227, "streams.nim");
	if (s_142084) chckObj((*s_142084).Sup.m_type, (&NTI141999));
	s = ((tstringstream141999*) (s_142084));
	nimln(228, "streams.nim");
	LOC1 = 0;
	LOC1 = (*s).Data; (*s).Data = copyStringRC1(NIM_NIL);
	if (LOC1) nimGCunrefNoCycle(LOC1);
	popFrame();
}N_NIMCALL(void, TMP932)(void* p, NI op) {
	tstringstream141999* a;
	a = (tstringstream141999*)p;
	nimGCvisit((void*)(*a).Data, op);
}

N_NIMCALL(tstringstream141999*, newstringstream_142088)(NimStringDesc* s) {
	tstringstream141999* result;
	NimStringDesc* LOC1;
	nimfr("newStringStream", "streams.nim")
	result = 0;
	nimln(232, "streams.nim");
	result = (tstringstream141999*) newObj((&NTI141997), sizeof(tstringstream141999));
	(*result).Sup.Sup.m_type = (&NTI141999);
	nimln(233, "streams.nim");
	LOC1 = 0;
	LOC1 = (*result).Data; (*result).Data = copyStringRC1(s);
	if (LOC1) nimGCunrefNoCycle(LOC1);
	nimln(234, "streams.nim");
	(*result).Pos = 0;
	nimln(235, "streams.nim");
	(*result).Sup.Closeimpl = ssclose_142082;
	nimln(236, "streams.nim");
	(*result).Sup.Atendimpl = ssatend_142003;
	nimln(237, "streams.nim");
	(*result).Sup.Setpositionimpl = sssetposition_142010;
	nimln(238, "streams.nim");
	(*result).Sup.Getpositionimpl = ssgetposition_142031;
	nimln(239, "streams.nim");
	(*result).Sup.Readdataimpl = ssreaddata_142038;
	nimln(240, "streams.nim");
	(*result).Sup.Writedataimpl = sswritedata_142062;
	popFrame();
	return result;
}
N_NIMCALL(void, fsclose_142112)(tstream141629* s) {
	nimfr("fsClose", "streams.nim")
	nimln(248, "streams.nim");
	{
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		if (s) chckObj((*s).Sup.m_type, (&NTI142109));
		if (!!(((*((tfilestream142109*) (s))).F == NIM_NIL))) goto LA3;
		nimln(249, "streams.nim");
		if (s) chckObj((*s).Sup.m_type, (&NTI142109));
		fclose((*((tfilestream142109*) (s))).F);		nimln(250, "streams.nim");
		if (s) chckObj((*s).Sup.m_type, (&NTI142109));
		(*((tfilestream142109*) (s))).F = NIM_NIL;
	}	LA3: ;
	popFrame();
}
N_NIMCALL(void, fsflush_142129)(tstream141629* s) {
	nimfr("fsFlush", "streams.nim")
	nimln(251, "streams.nim");
	if (s) chckObj((*s).Sup.m_type, (&NTI142109));
	fflush((*((tfilestream142109*) (s))).F);	popFrame();
}
N_NIMCALL(NIM_BOOL, fsatend_142134)(tstream141629* s) {
	NIM_BOOL result;
	nimfr("fsAtEnd", "streams.nim")
	result = 0;
	nimln(252, "streams.nim");
	nimln(252, "streams.nim");
	if (s) chckObj((*s).Sup.m_type, (&NTI142109));
	result = endoffile_9424((*((tfilestream142109*) (s))).F);
	goto BeforeRet;
	BeforeRet: ;	popFrame();
	return result;
}
N_NIMCALL(void, fssetposition_142140)(tstream141629* s, NI pos) {
	nimfr("fsSetPosition", "streams.nim")
	nimln(253, "streams.nim");
	if (s) chckObj((*s).Sup.m_type, (&NTI142109));
	setfilepos_9538((*((tfilestream142109*) (s))).F, ((NI64) (pos)));	popFrame();
}
N_NIMCALL(NI, fsgetposition_142146)(tstream141629* s) {
	NI result;
	NI64 LOC1;
	nimfr("fsGetPosition", "streams.nim")
	result = 0;
	nimln(254, "streams.nim");
	nimln(254, "streams.nim");
	nimln(254, "streams.nim");
	if (s) chckObj((*s).Sup.m_type, (&NTI142109));
	LOC1 = 0;
	LOC1 = getfilepos_9542((*((tfilestream142109*) (s))).F);
	result = ((NI) (LOC1));
	goto BeforeRet;
	BeforeRet: ;	popFrame();
	return result;
}
N_NIMCALL(NI, fsreaddata_142153)(tstream141629* s, void* buffer, NI buflen) {
	NI result;
	nimfr("fsReadData", "streams.nim")
	result = 0;
	nimln(257, "streams.nim");
	if (s) chckObj((*s).Sup.m_type, (&NTI142109));
	result = readbuffer_9514((*((tfilestream142109*) (s))).F, buffer, buflen);
	popFrame();
	return result;
}
N_NIMCALL(void, fswritedata_142161)(tstream141629* s, void* buffer, NI buflen) {
	nimfr("fsWriteData", "streams.nim")
	nimln(260, "streams.nim");
	{
		NI LOC3;
		eio1033* LOC6;
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		nimln(260, "streams.nim");
		if (s) chckObj((*s).Sup.m_type, (&NTI142109));
		LOC3 = 0;
		LOC3 = writebuffer_9533((*((tfilestream142109*) (s))).F, buffer, buflen);
		if (!!((LOC3 == buflen))) goto LA4;
		nimln(261, "streams.nim");
		LOC6 = 0;
		LOC6 = neweio_141607(((NimStringDesc*) &TMP933));
		nimln(261, "streams.nim");
		raiseException((E_Base*)LOC6, "EIO");
	}	LA4: ;
	popFrame();
}N_NIMCALL(void, TMP934)(void* p, NI op) {
	tfilestream142109* a;
	a = (tfilestream142109*)p;
}

N_NIMCALL(tfilestream142109*, newfilestream_142168)(FILE* f) {
	tfilestream142109* result;
	nimfr("newFileStream", "streams.nim")
	result = 0;
	nimln(265, "streams.nim");
	result = (tfilestream142109*) newObj((&NTI142107), sizeof(tfilestream142109));
	(*result).Sup.Sup.m_type = (&NTI142109);
	nimln(266, "streams.nim");
	(*result).F = f;
	nimln(267, "streams.nim");
	(*result).Sup.Closeimpl = fsclose_142112;
	nimln(268, "streams.nim");
	(*result).Sup.Atendimpl = fsatend_142134;
	nimln(269, "streams.nim");
	(*result).Sup.Setpositionimpl = fssetposition_142140;
	nimln(270, "streams.nim");
	(*result).Sup.Getpositionimpl = fsgetposition_142146;
	nimln(271, "streams.nim");
	(*result).Sup.Readdataimpl = fsreaddata_142153;
	nimln(272, "streams.nim");
	(*result).Sup.Writedataimpl = fswritedata_142161;
	nimln(273, "streams.nim");
	(*result).Sup.Flushimpl = fsflush_142129;
	popFrame();
	return result;
}
N_NIMCALL(tfilestream142109*, newfilestream_142186)(NimStringDesc* filename, NU8 mode) {
	tfilestream142109* result;
	FILE* f;
	nimfr("newFileStream", "streams.nim")
	result = 0;
	f = 0;
	nimln(280, "streams.nim");
	{
		NIM_BOOL LOC3;
		nimln(280, "streams.nim");
		LOC3 = 0;
		LOC3 = open_9203(&f, filename, mode, -1);
		if (!LOC3) goto LA4;
		nimln(280, "streams.nim");
		result = newfilestream_142168(f);
	}	LA4: ;
	popFrame();
	return result;
}N_NIMCALL(void, TMP951)(void* p, NI op) {
	tstream141629* a;
	a = (tstream141629*)p;
}
N_NOINLINE(void, purestreamsInit)(void) {
	nimfr("streams", "streams.nim")
	popFrame();
}

N_NOINLINE(void, purestreamsDatInit)(void) {
static TNimNode* TMP928[7];
static TNimNode* TMP929[2];
static TNimNode TMP923[12];
NTI141629.size = sizeof(tstream141629);
NTI141629.kind = 17;
NTI141629.base = (&NTI1009);
NTI141629.flags = 3;
TMP928[0] = &TMP923[1];
NTI141630.size = sizeof(TY141630);
NTI141630.kind = 25;
NTI141630.base = 0;
NTI141630.flags = 3;
TMP923[1].kind = 1;
TMP923[1].offset = offsetof(tstream141629, Closeimpl);
TMP923[1].typ = (&NTI141630);
TMP923[1].name = "closeImpl";
TMP928[1] = &TMP923[2];
NTI141634.size = sizeof(TY141634);
NTI141634.kind = 25;
NTI141634.base = 0;
NTI141634.flags = 3;
TMP923[2].kind = 1;
TMP923[2].offset = offsetof(tstream141629, Atendimpl);
TMP923[2].typ = (&NTI141634);
TMP923[2].name = "atEndImpl";
TMP928[2] = &TMP923[3];
NTI141638.size = sizeof(TY141638);
NTI141638.kind = 25;
NTI141638.base = 0;
NTI141638.flags = 3;
TMP923[3].kind = 1;
TMP923[3].offset = offsetof(tstream141629, Setpositionimpl);
TMP923[3].typ = (&NTI141638);
TMP923[3].name = "setPositionImpl";
TMP928[3] = &TMP923[4];
NTI141643.size = sizeof(TY141643);
NTI141643.kind = 25;
NTI141643.base = 0;
NTI141643.flags = 3;
TMP923[4].kind = 1;
TMP923[4].offset = offsetof(tstream141629, Getpositionimpl);
TMP923[4].typ = (&NTI141643);
TMP923[4].name = "getPositionImpl";
TMP928[4] = &TMP923[5];
NTI141647.size = sizeof(TY141647);
NTI141647.kind = 25;
NTI141647.base = 0;
NTI141647.flags = 3;
TMP923[5].kind = 1;
TMP923[5].offset = offsetof(tstream141629, Readdataimpl);
TMP923[5].typ = (&NTI141647);
TMP923[5].name = "readDataImpl";
TMP928[5] = &TMP923[6];
NTI141653.size = sizeof(TY141653);
NTI141653.kind = 25;
NTI141653.base = 0;
NTI141653.flags = 3;
TMP923[6].kind = 1;
TMP923[6].offset = offsetof(tstream141629, Writedataimpl);
TMP923[6].typ = (&NTI141653);
TMP923[6].name = "writeDataImpl";
TMP928[6] = &TMP923[7];
NTI141659.size = sizeof(TY141659);
NTI141659.kind = 25;
NTI141659.base = 0;
NTI141659.flags = 3;
TMP923[7].kind = 1;
TMP923[7].offset = offsetof(tstream141629, Flushimpl);
TMP923[7].typ = (&NTI141659);
TMP923[7].name = "flushImpl";
TMP923[0].len = 7; TMP923[0].kind = 2; TMP923[0].sons = &TMP928[0];
NTI141629.node = &TMP923[0];
NTI141999.size = sizeof(tstringstream141999);
NTI141999.kind = 17;
NTI141999.base = (&NTI141629);
NTI141999.flags = 2;
TMP929[0] = &TMP923[9];
TMP923[9].kind = 1;
TMP923[9].offset = offsetof(tstringstream141999, Data);
TMP923[9].typ = (&NTI142);
TMP923[9].name = "data";
TMP929[1] = &TMP923[10];
TMP923[10].kind = 1;
TMP923[10].offset = offsetof(tstringstream141999, Pos);
TMP923[10].typ = (&NTI105);
TMP923[10].name = "pos";
TMP923[8].len = 2; TMP923[8].kind = 2; TMP923[8].sons = &TMP929[0];
NTI141999.node = &TMP923[8];
NTI141997.size = sizeof(tstringstream141999*);
NTI141997.kind = 22;
NTI141997.base = (&NTI141999);
NTI141997.flags = 2;
NTI141997.marker = TMP932;
NTI142109.size = sizeof(tfilestream142109);
NTI142109.kind = 17;
NTI142109.base = (&NTI141629);
NTI142109.flags = 3;
TMP923[11].kind = 1;
TMP923[11].offset = offsetof(tfilestream142109, F);
TMP923[11].typ = (&NTI9004);
TMP923[11].name = "f";
NTI142109.node = &TMP923[11];
NTI142107.size = sizeof(tfilestream142109*);
NTI142107.kind = 22;
NTI142107.base = (&NTI142109);
NTI142107.flags = 2;
NTI142107.marker = TMP934;
NTI141627.size = sizeof(tstream141629*);
NTI141627.kind = 22;
NTI141627.base = (&NTI141629);
NTI141627.flags = 2;
NTI141627.marker = TMP951;
}
