/* Generated by Nim Compiler v0.14.3 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
#include <stdio.h>
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Tbaselexer285015 Tbaselexer285015;
typedef struct TNimObject TNimObject;
typedef struct Tllstream284204 Tllstream284204;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
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
struct  Tbaselexer285015  {
  TNimObject Sup;
NI bufpos;
NCSTRING buf;
NI buflen;
Tllstream284204* stream;
NI linenumber;
NI sentinel;
NI linestart;
};
typedef NU8 Tllstreamkind284202;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tllstream284204  {
  TNimObject Sup;
Tllstreamkind284202 kind;
FILE* f;
NimStringDesc* s;
NI rd;
NI wr;
NI lineoffset;
};
N_NOCONV(void*, alloc_7801_1689653243)(NI size0);
N_NIMCALL(void, unsureAsgnRef)(void** dest0, void* src0);
N_NIMCALL(void, fillbuffer_285058_4037054349)(Tbaselexer285015* L0);
static N_INLINE(void, movemem_7490_1689653243)(void* dest0, void* source0, NI size0);
N_NIMCALL(NI, llstreamread_284530_597494479)(Tllstream284204* s0, void* buf0, NI buflen0);
N_NOCONV(void*, realloc_7833_1689653243)(void* p0, NI newsize0);
N_NIMCALL(void, skiputf8bom_286410_4037054349)(Tbaselexer285015* L0);
N_NIMCALL(NI, fillbaselexer_285809_4037054349)(Tbaselexer285015* L0, NI pos0);
N_NOCONV(void, dealloc_7848_1689653243)(void* p0);
N_NIMCALL(void, llstreamclose_284278_597494479)(Tllstream284204* s0);
extern TNimType NTI3608; /* RootObj */
TNimType NTI285015; /* TBaseLexer */
extern TNimType NTI104; /* int */
extern TNimType NTI140; /* cstring */
extern TNimType NTI284206; /* PLLStream */

static N_INLINE(void, movemem_7490_1689653243)(void* dest0, void* source0, NI size0) {
	void* LOC1;
	LOC1 = (void*)0;
	LOC1 = memmove(dest0, source0, ((size_t) (size0)));
}

N_NIMCALL(void, fillbuffer_285058_4037054349)(Tbaselexer285015* L0) {
	NI charsread0;
	NI tocopy0;
	NI s0;
	NI oldbuflen0;
	NI LOC5;
	charsread0 = (NI)0;
	tocopy0 = (NI)0;
	s0 = (NI)0;
	oldbuflen0 = (NI)0;
	tocopy0 = (NI)((NI)((*L0).buflen - (*L0).sentinel) - ((NI) 1));
	{
		if (!(((NI) 0) < tocopy0)) goto LA3;
		movemem_7490_1689653243(((void*) ((*L0).buf)), ((void*) ((&(*L0).buf[(NI)((*L0).sentinel + ((NI) 1))]))), ((NI) ((NI)(tocopy0 * ((NI) 1)))));
	}
	LA3: ;
	LOC5 = (NI)0;
	LOC5 = llstreamread_284530_597494479((*L0).stream, ((void*) ((&(*L0).buf[tocopy0]))), (NI)((NI)((*L0).sentinel + ((NI) 1)) * ((NI) 1)));
	charsread0 = (NI)(LOC5 / ((NI) 1));
	s0 = (NI)(tocopy0 + charsread0);
	{
		if (!(charsread0 < (NI)((*L0).sentinel + ((NI) 1)))) goto LA8;
		(*L0).buf[s0] = 0;
		(*L0).sentinel = s0;
	}
	goto LA6;
	LA8: ;
	{
		s0 -= ((NI) 1);
		{
			while (1) {
				{
					while (1) {
						NIM_BOOL LOC15;
						LOC15 = (NIM_BOOL)0;
						LOC15 = (((NI) 0) <= s0);
						if (!(LOC15)) goto LA16;
						LOC15 = !((((NU8)((*L0).buf[s0])) == ((NU8)(13)) || ((NU8)((*L0).buf[s0])) == ((NU8)(10))));
						LA16: ;
						if (!LOC15) goto LA14;
						s0 -= ((NI) 1);
					} LA14: ;
				}
				{
					if (!(((NI) 0) <= s0)) goto LA19;
					(*L0).sentinel = s0;
					goto LA11;
				}
				goto LA17;
				LA19: ;
				{
					void* LOC22;
					NI LOC23;
					oldbuflen0 = (*L0).buflen;
					(*L0).buflen = (NI)((*L0).buflen * ((NI) 2));
					LOC22 = (void*)0;
					LOC22 = realloc_7833_1689653243(((void*) ((*L0).buf)), ((NI) ((NI)((*L0).buflen * ((NI) 1)))));
					(*L0).buf = ((NCSTRING) (LOC22));
					LOC23 = (NI)0;
					LOC23 = llstreamread_284530_597494479((*L0).stream, ((void*) ((&(*L0).buf[oldbuflen0]))), (NI)(oldbuflen0 * ((NI) 1)));
					charsread0 = (NI)(LOC23 / ((NI) 1));
					{
						if (!(charsread0 < oldbuflen0)) goto LA26;
						(*L0).buf[(NI)(oldbuflen0 + charsread0)] = 0;
						(*L0).sentinel = (NI)(oldbuflen0 + charsread0);
						goto LA11;
					}
					LA26: ;
					s0 = (NI)((*L0).buflen - ((NI) 1));
				}
				LA17: ;
			}
		} LA11: ;
	}
	LA6: ;
}

N_NIMCALL(void, skiputf8bom_286410_4037054349)(Tbaselexer285015* L0) {
	{
		NIM_BOOL LOC3;
		NIM_BOOL LOC4;
		LOC3 = (NIM_BOOL)0;
		LOC4 = (NIM_BOOL)0;
		LOC4 = ((NU8)((*L0).buf[((NI) 0)]) == (NU8)(239));
		if (!(LOC4)) goto LA5;
		LOC4 = ((NU8)((*L0).buf[((NI) 1)]) == (NU8)(187));
		LA5: ;
		LOC3 = LOC4;
		if (!(LOC3)) goto LA6;
		LOC3 = ((NU8)((*L0).buf[((NI) 2)]) == (NU8)(191));
		LA6: ;
		if (!LOC3) goto LA7;
		(*L0).bufpos += ((NI) 3);
		(*L0).linestart += ((NI) 3);
	}
	LA7: ;
}

N_NIMCALL(void, openbaselexer_285023_4037054349)(Tbaselexer285015* L0, Tllstream284204* inputstream0, NI buflen0) {
	void* LOC1;
	(*L0).bufpos = ((NI) 0);
	(*L0).buflen = buflen0;
	LOC1 = (void*)0;
	LOC1 = alloc_7801_1689653243(((NI) ((NI)(buflen0 * ((NI) 1)))));
	(*L0).buf = ((NCSTRING) (LOC1));
	(*L0).sentinel = (NI)(buflen0 - ((NI) 1));
	(*L0).linestart = ((NI) 0);
	(*L0).linenumber = ((NI) 1);
	unsureAsgnRef((void**) (&(*L0).stream), inputstream0);
	fillbuffer_285058_4037054349(L0);
	skiputf8bom_286410_4037054349(L0);
}

N_NIMCALL(NI, getcolnumber_285038_4037054349)(Tbaselexer285015* L0, NI pos0) {
	NI result0;
	result0 = (NI)0;
	result0 = ((NI)(pos0 - (*L0).linestart) > 0? ((NI)(pos0 - (*L0).linestart)) : -((NI)(pos0 - (*L0).linestart)));
	return result0;
}

N_NIMCALL(NI, fillbaselexer_285809_4037054349)(Tbaselexer285015* L0, NI pos0) {
	NI result0;
	result0 = (NI)0;
	{
		if (!(pos0 < (*L0).sentinel)) goto LA3;
		result0 = (NI)(pos0 + ((NI) 1));
	}
	goto LA1;
	LA3: ;
	{
		fillbuffer_285058_4037054349(L0);
		(*L0).bufpos = ((NI) 0);
		result0 = ((NI) 0);
	}
	LA1: ;
	(*L0).linestart = result0;
	return result0;
}

N_NIMCALL(NI, handlecr_285042_4037054349)(Tbaselexer285015* L0, NI pos0) {
	NI result0;
	result0 = (NI)0;
	(*L0).linenumber += ((NI) 1);
	result0 = fillbaselexer_285809_4037054349(L0, pos0);
	{
		if (!((NU8)((*L0).buf[result0]) == (NU8)(10))) goto LA3;
		result0 = fillbaselexer_285809_4037054349(L0, result0);
	}
	LA3: ;
	return result0;
}

N_NIMCALL(NI, handlelf_285047_4037054349)(Tbaselexer285015* L0, NI pos0) {
	NI result0;
	result0 = (NI)0;
	(*L0).linenumber += ((NI) 1);
	result0 = fillbaselexer_285809_4037054349(L0, pos0);
	return result0;
}

N_NIMCALL(void, closebaselexer_285030_4037054349)(Tbaselexer285015* L0) {
	dealloc_7848_1689653243(((void*) ((*L0).buf)));
	llstreamclose_284278_597494479((*L0).stream);
}
NIM_EXTERNC N_NOINLINE(void, compiler_nimlexbaseInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_nimlexbaseDatInit000)(void) {
static TNimNode* T4037054349_2[7];
static TNimNode T4037054349_0[8];
NTI285015.size = sizeof(Tbaselexer285015);
NTI285015.kind = 17;
NTI285015.base = (&NTI3608);
T4037054349_2[0] = &T4037054349_0[1];
T4037054349_0[1].kind = 1;
T4037054349_0[1].offset = offsetof(Tbaselexer285015, bufpos);
T4037054349_0[1].typ = (&NTI104);
T4037054349_0[1].name = "bufpos";
T4037054349_2[1] = &T4037054349_0[2];
T4037054349_0[2].kind = 1;
T4037054349_0[2].offset = offsetof(Tbaselexer285015, buf);
T4037054349_0[2].typ = (&NTI140);
T4037054349_0[2].name = "buf";
T4037054349_2[2] = &T4037054349_0[3];
T4037054349_0[3].kind = 1;
T4037054349_0[3].offset = offsetof(Tbaselexer285015, buflen);
T4037054349_0[3].typ = (&NTI104);
T4037054349_0[3].name = "bufLen";
T4037054349_2[3] = &T4037054349_0[4];
T4037054349_0[4].kind = 1;
T4037054349_0[4].offset = offsetof(Tbaselexer285015, stream);
T4037054349_0[4].typ = (&NTI284206);
T4037054349_0[4].name = "stream";
T4037054349_2[4] = &T4037054349_0[5];
T4037054349_0[5].kind = 1;
T4037054349_0[5].offset = offsetof(Tbaselexer285015, linenumber);
T4037054349_0[5].typ = (&NTI104);
T4037054349_0[5].name = "lineNumber";
T4037054349_2[5] = &T4037054349_0[6];
T4037054349_0[6].kind = 1;
T4037054349_0[6].offset = offsetof(Tbaselexer285015, sentinel);
T4037054349_0[6].typ = (&NTI104);
T4037054349_0[6].name = "sentinel";
T4037054349_2[6] = &T4037054349_0[7];
T4037054349_0[7].kind = 1;
T4037054349_0[7].offset = offsetof(Tbaselexer285015, linestart);
T4037054349_0[7].typ = (&NTI104);
T4037054349_0[7].name = "lineStart";
T4037054349_0[0].len = 7; T4037054349_0[0].kind = 2; T4037054349_0[0].sons = &T4037054349_2[0];
NTI285015.node = &T4037054349_0[0];
}

