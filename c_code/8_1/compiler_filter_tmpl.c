/* Generated by Nim Compiler v0.14.3 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
#include <stdio.h>
typedef struct Tllstream282204 Tllstream282204;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tnode292802 Tnode292802;
typedef struct Ttmplparser316010 Ttmplparser316010;
typedef struct Tlineinfo191336 Tlineinfo191336;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttype292840 Ttype292840;
typedef struct Tsym292834 Tsym292834;
typedef struct Tident199010 Tident199010;
typedef struct Tnodeseq292796 Tnodeseq292796;
typedef struct Tidobj199004 Tidobj199004;
typedef struct Ttypeseq292836 Ttypeseq292836;
typedef struct TY292960 TY292960;
typedef struct Tloc292816 Tloc292816;
typedef struct Ropeobj178006 Ropeobj178006;
typedef struct TY292929 TY292929;
typedef struct Tstrtable292806 Tstrtable292806;
typedef struct Tsymseq292804 Tsymseq292804;
typedef struct Tlib292820 Tlib292820;
typedef struct TY292961 TY292961;
typedef struct Tinstantiation292824 Tinstantiation292824;
typedef struct Tlistentry147007 Tlistentry147007;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 Tparsestate316008;
struct  Tlineinfo191336  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct  Ttmplparser316010  {
Tllstream282204* inp;
Tparsestate316008 state;
Tlineinfo191336 info;
NI indent;
NI emitpar;
NimStringDesc* x;
Tllstream282204* outp;
NIM_CHAR subschar;
NIM_CHAR nimdirective;
NimStringDesc* emit;
NimStringDesc* conc;
NimStringDesc* tostr;
NI curly;
NI bracket;
NI par;
NIM_BOOL pendingexprline;
};
typedef NU16 Tspecialword275003;
typedef NU16 Tmsgkind191002;
typedef NU8 char136Set[32];
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
typedef NU8 Tllstreamkind282202;
struct  Tllstream282204  {
  TNimObject Sup;
Tllstreamkind282202 kind;
FILE* f;
NimStringDesc* s;
NI rd;
NI wr;
NI lineoffset;
};
typedef NU16 Tnodeflag292427Set;
typedef NU8 Tnodekind292020;
struct  Tnode292802  {
Ttype292840* typ;
Tlineinfo191336 info;
Tnodeflag292427Set flags;
Tnodekind292020 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym292834* sym;
} S4;
struct {Tident199010* ident;
} S5;
struct {Tnodeseq292796* sons;
} S6;
} kindU;
NimStringDesc* comment;
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
struct  Tidobj199004  {
  TNimObject Sup;
NI id;
};
typedef NU8 Ttypekind292244;
typedef NU8 Tcallingconvention292002;
typedef NU32 Ttypeflag292431Set;
typedef NU8 Tlockind292808;
typedef NU8 Tstorageloc292812;
typedef NU16 Tlocflag292810Set;
struct  Tloc292816  {
Tlockind292808 k;
Tstorageloc292812 s;
Tlocflag292810Set flags;
Ttype292840* t;
Ropeobj178006* r;
};
struct  Ttype292840  {
  Tidobj199004 Sup;
Ttypekind292244 kind;
Tcallingconvention292002 callconv;
Ttypeflag292431Set flags;
Ttypeseq292836* sons;
Tnode292802* n;
Tsym292834* owner;
Tsym292834* sym;
Tsym292834* destructor;
Tsym292834* deepcopy;
Tsym292834* assignment;
TY292960* methods;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc292816 loc;
};
typedef NU8 Tsymkind292435;
struct  Tstrtable292806  {
NI counter;
Tsymseq292804* data;
};
typedef NU16 Tmagic292524;
typedef NU32 Tsymflag292184Set;
typedef NU32 Toption169009Set;
struct  Tsym292834  {
  Tidobj199004 Sup;
Tsymkind292435 kind;
union{
struct {Ttypeseq292836* typeinstcache;
} S1;
struct {TY292929* procinstcache;
Tsym292834* gcunsafetyreason;
} S2;
struct {TY292929* usedgenerics;
Tstrtable292806 tab;
} S3;
struct {Tsym292834* guard;
NI bitsize;
} S4;
} kindU;
Tmagic292524 magic;
Ttype292840* typ;
Tident199010* name;
Tlineinfo191336 info;
Tsym292834* owner;
Tsymflag292184Set flags;
Tnode292802* ast;
Toption169009Set options;
NI position;
NI offset;
Tloc292816 loc;
Tlib292820* annex;
Tnode292802* constraint;
};
struct  Tident199010  {
  Tidobj199004 Sup;
NimStringDesc* s;
Tident199010* next;
NI h;
};
struct TY292961 {
NI Field0;
Tsym292834* Field1;
};
struct  Ropeobj178006  {
  TNimObject Sup;
Ropeobj178006* left;
Ropeobj178006* right;
NI length;
NimStringDesc* data;
};
struct  Tlistentry147007  {
  TNimObject Sup;
Tlistentry147007* prev;
Tlistentry147007* next;
};
typedef NU8 Tlibkind292818;
struct  Tlib292820  {
  Tlistentry147007 Sup;
Tlibkind292818 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj178006* name;
Tnode292802* path;
};
struct  Tinstantiation292824  {
Tsym292834* sym;
Ttypeseq292836* concretetypes;
NI compilesid;
};
struct Tnodeseq292796 {
  TGenericSeq Sup;
  Tnode292802* data[SEQ_DECL_SIZE];
};
struct Ttypeseq292836 {
  TGenericSeq Sup;
  Ttype292840* data[SEQ_DECL_SIZE];
};
struct TY292960 {
  TGenericSeq Sup;
  TY292961 data[SEQ_DECL_SIZE];
};
struct TY292929 {
  TGenericSeq Sup;
  Tinstantiation292824* data[SEQ_DECL_SIZE];
};
struct Tsymseq292804 {
  TGenericSeq Sup;
  Tsym292834* data[SEQ_DECL_SIZE];
};
static N_INLINE(Tlineinfo191336, newlineinfo_192021_155036129)(NimStringDesc* filename0, NI line0, NI col0);
N_NIMCALL(Tlineinfo191336, newlineinfo_192015_155036129)(NI32 fileinfoidx0, NI line0, NI col0);
N_NIMCALL(NI32, fileinfoidx_192008_155036129)(NimStringDesc* filename0);
N_NIMCALL(Tllstream282204*, llstreamopen_282218_597494479)(NimStringDesc* data0);
N_NIMCALL(NIM_CHAR, chararg_315011_1413030668)(Tnode292802* n0, NimStringDesc* name0, NI pos0, NIM_CHAR default_315016_1413030668);
N_NIMCALL(NimStringDesc*, strarg_315017_1413030668)(Tnode292802* n0, NimStringDesc* name0, NI pos0, NimStringDesc* default_315022_1413030668);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap0);
N_NIMCALL(NIM_BOOL, llstreamreadline_282550_597494479)(Tllstream282204* s0, NimStringDesc** line0);
N_NIMCALL(void, parseline_316109_4161173357)(Ttmplparser316010* p0);
N_NIMCALL(void, newline_316031_4161173357)(Ttmplparser316010* p0);
N_NIMCALL(void, llstreamwrite_282593_597494479)(Tllstream282204* s0, NimStringDesc* data0);
N_NIMCALL(NimStringDesc*, nsuRepeatChar)(NIM_CHAR c0, NI count0);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src0);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s0, NIM_CHAR c0);
N_NIMCALL(void, scanpar_316035_4161173357)(Ttmplparser316010* p0, NI d0);
static N_INLINE(NIM_BOOL, withinexpr_316105_4161173357)(Ttmplparser316010* p0);
N_NIMCALL(NIM_BOOL, endswithopr_282432_597494479)(NimStringDesc* x0);
N_NIMCALL(Tspecialword275003, whichkeyword_275369_1391470768)(NimStringDesc* id0);
N_NIMCALL(void, localerror_196080_155036129)(Tlineinfo191336 info0, Tmsgkind191002 msg0, NimStringDesc* arg0);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s0, NI start0);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s0, NI first0);
N_NIMCALL(NIM_BOOL, contains_110056_4286263276)(NimStringDesc* s0, char136Set chars0);
N_NIMCALL(NimStringDesc*, nsuToHex)(NI64 x0, NI len0);
N_NIMCALL(void, llstreamwrite_282612_597494479)(Tllstream282204* s0, NIM_CHAR data0);
N_NIMCALL(void, llstreamclose_282278_597494479)(Tllstream282204* s0);
STRING_LITERAL(T4161173357_2, "", 0);
STRING_LITERAL(T4161173357_3, "subschar", 8);
STRING_LITERAL(T4161173357_4, "metachar", 8);
STRING_LITERAL(T4161173357_5, "emit", 4);
STRING_LITERAL(T4161173357_6, "result.add", 10);
STRING_LITERAL(T4161173357_7, "conc", 4);
STRING_LITERAL(T4161173357_8, " & ", 3);
STRING_LITERAL(T4161173357_9, "tostring", 8);
STRING_LITERAL(T4161173357_10, "$", 1);
STRING_LITERAL(T4161173357_11, "\012", 1);
STRING_LITERAL(T4161173357_12, "end", 3);
STRING_LITERAL(T4161173357_13, "#end", 4);
static NIM_CONST char136Set T4161173357_14 = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x24,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(T4161173357_15, "\"", 1);
STRING_LITERAL(T4161173357_16, "(\"", 2);
STRING_LITERAL(T4161173357_17, "\\x", 2);
STRING_LITERAL(T4161173357_18, "\\\\", 2);
STRING_LITERAL(T4161173357_19, "\\\'", 2);
STRING_LITERAL(T4161173357_20, "\\\"", 2);
STRING_LITERAL(T4161173357_21, "}", 1);
STRING_LITERAL(T4161173357_22, "\\n\"", 3);

static N_INLINE(Tlineinfo191336, newlineinfo_192021_155036129)(NimStringDesc* filename0, NI line0, NI col0) {
	Tlineinfo191336 result0;
	NI32 LOC1;
	memset((void*)(&result0), 0, sizeof(result0));
	LOC1 = (NI32)0;
	LOC1 = fileinfoidx_192008_155036129(filename0);
	result0 = newlineinfo_192015_155036129(LOC1, line0, col0);
	return result0;
}

N_NIMCALL(void, newline_316031_4161173357)(Ttmplparser316010* p0) {
	NimStringDesc* LOC1;
	LOC1 = (NimStringDesc*)0;
	LOC1 = nsuRepeatChar(41, ((NI) ((*p0).emitpar)));
	llstreamwrite_282593_597494479((*p0).outp, LOC1);
	(*p0).emitpar = ((NI) 0);
	{
		if (!(((NI16) 1) < (*p0).info.line)) goto LA4;
		llstreamwrite_282593_597494479((*p0).outp, ((NimStringDesc*) &T4161173357_11));
	}
	LA4: ;
	{
		NimStringDesc* LOC10;
		if (!(*p0).pendingexprline) goto LA8;
		LOC10 = (NimStringDesc*)0;
		LOC10 = nsuRepeatChar(32, ((NI) 2));
		llstreamwrite_282593_597494479((*p0).outp, LOC10);
		(*p0).pendingexprline = NIM_FALSE;
	}
	LA8: ;
}

N_NIMCALL(void, scanpar_316035_4161173357)(Ttmplparser316010* p0, NI d0) {
	NI i0;
	i0 = d0;
	{
		while (1) {
			switch (((NU8)((*p0).x->data[i0]))) {
			case 0:
			{
				goto LA1;
			}
			break;
			case 40:
			{
				(*p0).par += ((NI) 1);
			}
			break;
			case 41:
			{
				(*p0).par -= ((NI) 1);
			}
			break;
			case 91:
			{
				(*p0).bracket += ((NI) 1);
			}
			break;
			case 93:
			{
				(*p0).bracket -= ((NI) 1);
			}
			break;
			case 123:
			{
				(*p0).curly += ((NI) 1);
			}
			break;
			case 125:
			{
				(*p0).curly -= ((NI) 1);
			}
			break;
			default:
			{
			}
			break;
			}
			i0 += ((NI) 1);
		}
	} LA1: ;
}

static N_INLINE(NIM_BOOL, withinexpr_316105_4161173357)(Ttmplparser316010* p0) {
	NIM_BOOL result0;
	NIM_BOOL LOC1;
	NIM_BOOL LOC2;
	result0 = (NIM_BOOL)0;
	LOC1 = (NIM_BOOL)0;
	LOC2 = (NIM_BOOL)0;
	LOC2 = (((NI) 0) < (*p0).par);
	if (LOC2) goto LA3;
	LOC2 = (((NI) 0) < (*p0).bracket);
	LA3: ;
	LOC1 = LOC2;
	if (LOC1) goto LA4;
	LOC1 = (((NI) 0) < (*p0).curly);
	LA4: ;
	result0 = LOC1;
	return result0;
}

N_NIMCALL(void, parseline_316109_4161173357)(Ttmplparser316010* p0) {
	NI d0;
	NI j0;
	NI curly0;
	NimStringDesc* keyw0;
	d0 = (NI)0;
	j0 = (NI)0;
	curly0 = (NI)0;
	keyw0 = (NimStringDesc*)0;
	j0 = ((NI) 0);
	{
		while (1) {
			if (!((NU8)((*p0).x->data[j0]) == (NU8)(32))) goto LA2;
			j0 += ((NI) 1);
		} LA2: ;
	}
	{
		NIM_BOOL LOC5;
		LOC5 = (NIM_BOOL)0;
		LOC5 = ((NU8)((*p0).x->data[((NI) 0)]) == (NU8)((*p0).nimdirective));
		if (!(LOC5)) goto LA6;
		LOC5 = ((NU8)((*p0).x->data[((NI) 1)]) == (NU8)(63));
		LA6: ;
		if (!LOC5) goto LA7;
		newline_316031_4161173357(p0);
	}
	goto LA3;
	LA7: ;
	{
		NIM_BOOL LOC16;
		Tspecialword275003 LOC18;
		if (!((NU8)((*p0).x->data[j0]) == (NU8)((*p0).nimdirective))) goto LA10;
		newline_316031_4161173357(p0);
		j0 += ((NI) 1);
		{
			while (1) {
				if (!((NU8)((*p0).x->data[j0]) == (NU8)(32))) goto LA13;
				j0 += ((NI) 1);
			} LA13: ;
		}
		d0 = j0;
		keyw0 = copyString(((NimStringDesc*) &T4161173357_2));
		{
			while (1) {
				if (!(((NU8)((*p0).x->data[j0])) >= ((NU8)(97)) && ((NU8)((*p0).x->data[j0])) <= ((NU8)(122)) || ((NU8)((*p0).x->data[j0])) >= ((NU8)(65)) && ((NU8)((*p0).x->data[j0])) <= ((NU8)(90)) || ((NU8)((*p0).x->data[j0])) >= ((NU8)(48)) && ((NU8)((*p0).x->data[j0])) <= ((NU8)(57)) || ((NU8)((*p0).x->data[j0])) >= ((NU8)(128)) && ((NU8)((*p0).x->data[j0])) <= ((NU8)(255)) || ((NU8)((*p0).x->data[j0])) == ((NU8)(46)) || ((NU8)((*p0).x->data[j0])) == ((NU8)(95)))) goto LA15;
				keyw0 = addChar(keyw0, (*p0).x->data[j0]);
				j0 += ((NI) 1);
			} LA15: ;
		}
		scanpar_316035_4161173357(p0, j0);
		LOC16 = (NIM_BOOL)0;
		LOC16 = withinexpr_316105_4161173357((&(*p0)));
		if (LOC16) goto LA17;
		LOC16 = endswithopr_282432_597494479((*p0).x);
		LA17: ;
		(*p0).pendingexprline = LOC16;
		LOC18 = (Tspecialword275003)0;
		LOC18 = whichkeyword_275369_1391470768(keyw0);
		switch (LOC18) {
		case ((Tspecialword275003) 22):
		{
			NimStringDesc* LOC25;
			{
				if (!(((NI) 2) <= (*p0).indent)) goto LA22;
				(*p0).indent -= ((NI) 2);
			}
			goto LA20;
			LA22: ;
			{
				(*p0).info.col = ((NI16) (j0));
				localerror_196080_155036129((*p0).info, ((Tmsgkind191002) 167), ((NimStringDesc*) &T4161173357_12));
			}
			LA20: ;
			LOC25 = (NimStringDesc*)0;
			LOC25 = nsuRepeatChar(32, ((NI) ((*p0).indent)));
			llstreamwrite_282593_597494479((*p0).outp, LOC25);
			llstreamwrite_282593_597494479((*p0).outp, ((NimStringDesc*) &T4161173357_13));
		}
		break;
		case ((Tspecialword275003) 31):
		case ((Tspecialword275003) 65):
		case ((Tspecialword275003) 60):
		case ((Tspecialword275003) 66):
		case ((Tspecialword275003) 27):
		case ((Tspecialword275003) 7):
		case ((Tspecialword275003) 9):
		case ((Tspecialword275003) 51):
		case ((Tspecialword275003) 38):
		case ((Tspecialword275003) 14):
		case ((Tspecialword275003) 40):
		case ((Tspecialword275003) 59):
		case ((Tspecialword275003) 41):
		{
			NimStringDesc* LOC27;
			NimStringDesc* LOC28;
			LOC27 = (NimStringDesc*)0;
			LOC27 = nsuRepeatChar(32, ((NI) ((*p0).indent)));
			llstreamwrite_282593_597494479((*p0).outp, LOC27);
			LOC28 = (NimStringDesc*)0;
			LOC28 = copyStr((*p0).x, d0);
			llstreamwrite_282593_597494479((*p0).outp, LOC28);
			(*p0).indent += ((NI) 2);
		}
		break;
		case ((Tspecialword275003) 20):
		case ((Tspecialword275003) 48):
		case ((Tspecialword275003) 21):
		case ((Tspecialword275003) 24):
		case ((Tspecialword275003) 26):
		{
			NimStringDesc* LOC30;
			NimStringDesc* LOC31;
			LOC30 = (NimStringDesc*)0;
			LOC30 = nsuRepeatChar(32, ((NI) ((NI)((*p0).indent - ((NI) 2)))));
			llstreamwrite_282593_597494479((*p0).outp, LOC30);
			LOC31 = (NimStringDesc*)0;
			LOC31 = copyStr((*p0).x, d0);
			llstreamwrite_282593_597494479((*p0).outp, LOC31);
		}
		break;
		case ((Tspecialword275003) 39):
		case ((Tspecialword275003) 64):
		case ((Tspecialword275003) 12):
		case ((Tspecialword275003) 62):
		{
			NimStringDesc* LOC33;
			NimStringDesc* LOC34;
			LOC33 = (NimStringDesc*)0;
			LOC33 = nsuRepeatChar(32, ((NI) ((*p0).indent)));
			llstreamwrite_282593_597494479((*p0).outp, LOC33);
			LOC34 = (NimStringDesc*)0;
			LOC34 = copyStr((*p0).x, d0);
			llstreamwrite_282593_597494479((*p0).outp, LOC34);
			{
				NIM_BOOL LOC37;
				LOC37 = (NIM_BOOL)0;
				LOC37 = contains_110056_4286263276((*p0).x, T4161173357_14);
				if (!!(LOC37)) goto LA38;
				(*p0).indent += ((NI) 2);
			}
			LA38: ;
		}
		break;
		default:
		{
			NimStringDesc* LOC41;
			NimStringDesc* LOC42;
			LOC41 = (NimStringDesc*)0;
			LOC41 = nsuRepeatChar(32, ((NI) ((*p0).indent)));
			llstreamwrite_282593_597494479((*p0).outp, LOC41);
			LOC42 = (NimStringDesc*)0;
			LOC42 = copyStr((*p0).x, d0);
			llstreamwrite_282593_597494479((*p0).outp, LOC42);
		}
		break;
		}
		(*p0).state = ((Tparsestate316008) 0);
	}
	goto LA3;
	LA10: ;
	{
		(*p0).par = ((NI) 0);
		(*p0).curly = ((NI) 0);
		(*p0).bracket = ((NI) 0);
		j0 = ((NI) 0);
		switch ((*p0).state) {
		case ((Tparsestate316008) 1):
		{
			NimStringDesc* LOC45;
			llstreamwrite_282593_597494479((*p0).outp, (*p0).conc);
			llstreamwrite_282593_597494479((*p0).outp, ((NimStringDesc*) &T4161173357_11));
			LOC45 = (NimStringDesc*)0;
			LOC45 = nsuRepeatChar(32, ((NI) ((NI)((*p0).indent + ((NI) 2)))));
			llstreamwrite_282593_597494479((*p0).outp, LOC45);
			llstreamwrite_282593_597494479((*p0).outp, ((NimStringDesc*) &T4161173357_15));
		}
		break;
		case ((Tparsestate316008) 0):
		{
			NimStringDesc* LOC47;
			newline_316031_4161173357(p0);
			LOC47 = (NimStringDesc*)0;
			LOC47 = nsuRepeatChar(32, ((NI) ((*p0).indent)));
			llstreamwrite_282593_597494479((*p0).outp, LOC47);
			llstreamwrite_282593_597494479((*p0).outp, (*p0).emit);
			llstreamwrite_282593_597494479((*p0).outp, ((NimStringDesc*) &T4161173357_16));
			(*p0).emitpar += ((NI) 1);
		}
		break;
		}
		(*p0).state = ((Tparsestate316008) 1);
		{
			while (1) {
				switch (((NU8)((*p0).x->data[j0]))) {
				case 0:
				{
					goto LA48;
				}
				break;
				case 1 ... 31:
				case 128 ... 255:
				{
					NimStringDesc* LOC52;
					llstreamwrite_282593_597494479((*p0).outp, ((NimStringDesc*) &T4161173357_17));
					LOC52 = (NimStringDesc*)0;
					LOC52 = nsuToHex(((NI64) (((NU8)((*p0).x->data[j0])))), ((NI) 2));
					llstreamwrite_282593_597494479((*p0).outp, LOC52);
					j0 += ((NI) 1);
				}
				break;
				case 92:
				{
					llstreamwrite_282593_597494479((*p0).outp, ((NimStringDesc*) &T4161173357_18));
					j0 += ((NI) 1);
				}
				break;
				case 39:
				{
					llstreamwrite_282593_597494479((*p0).outp, ((NimStringDesc*) &T4161173357_19));
					j0 += ((NI) 1);
				}
				break;
				case 34:
				{
					llstreamwrite_282593_597494479((*p0).outp, ((NimStringDesc*) &T4161173357_20));
					j0 += ((NI) 1);
				}
				break;
				default:
				{
					{
						if (!((NU8)((*p0).x->data[j0]) == (NU8)((*p0).subschar))) goto LA59;
						j0 += ((NI) 1);
						switch (((NU8)((*p0).x->data[j0]))) {
						case 123:
						{
							(*p0).info.col = ((NI16) (j0));
							llstreamwrite_282612_597494479((*p0).outp, 34);
							llstreamwrite_282593_597494479((*p0).outp, (*p0).conc);
							llstreamwrite_282593_597494479((*p0).outp, (*p0).tostr);
							llstreamwrite_282612_597494479((*p0).outp, 40);
							j0 += ((NI) 1);
							curly0 = ((NI) 0);
							{
								while (1) {
									switch (((NU8)((*p0).x->data[j0]))) {
									case 0:
									{
										localerror_196080_155036129((*p0).info, ((Tmsgkind191002) 193), ((NimStringDesc*) &T4161173357_21));
										goto LA62;
									}
									break;
									case 123:
									{
										j0 += ((NI) 1);
										curly0 += ((NI) 1);
										llstreamwrite_282612_597494479((*p0).outp, 123);
									}
									break;
									case 125:
									{
										j0 += ((NI) 1);
										{
											if (!(curly0 == ((NI) 0))) goto LA69;
											goto LA62;
										}
										LA69: ;
										{
											if (!(((NI) 0) < curly0)) goto LA73;
											curly0 -= ((NI) 1);
										}
										LA73: ;
										llstreamwrite_282612_597494479((*p0).outp, 125);
									}
									break;
									default:
									{
										llstreamwrite_282612_597494479((*p0).outp, (*p0).x->data[j0]);
										j0 += ((NI) 1);
									}
									break;
									}
								}
							} LA62: ;
							llstreamwrite_282612_597494479((*p0).outp, 41);
							llstreamwrite_282593_597494479((*p0).outp, (*p0).conc);
							llstreamwrite_282612_597494479((*p0).outp, 34);
						}
						break;
						case 97 ... 122:
						case 65 ... 90:
						case 128 ... 255:
						{
							llstreamwrite_282612_597494479((*p0).outp, 34);
							llstreamwrite_282593_597494479((*p0).outp, (*p0).conc);
							llstreamwrite_282593_597494479((*p0).outp, (*p0).tostr);
							llstreamwrite_282612_597494479((*p0).outp, 40);
							{
								while (1) {
									if (!(((NU8)((*p0).x->data[j0])) >= ((NU8)(97)) && ((NU8)((*p0).x->data[j0])) <= ((NU8)(122)) || ((NU8)((*p0).x->data[j0])) >= ((NU8)(65)) && ((NU8)((*p0).x->data[j0])) <= ((NU8)(90)) || ((NU8)((*p0).x->data[j0])) >= ((NU8)(48)) && ((NU8)((*p0).x->data[j0])) <= ((NU8)(57)) || ((NU8)((*p0).x->data[j0])) >= ((NU8)(128)) && ((NU8)((*p0).x->data[j0])) <= ((NU8)(255)) || ((NU8)((*p0).x->data[j0])) == ((NU8)(46)) || ((NU8)((*p0).x->data[j0])) == ((NU8)(95)))) goto LA78;
									llstreamwrite_282612_597494479((*p0).outp, (*p0).x->data[j0]);
									j0 += ((NI) 1);
								} LA78: ;
							}
							llstreamwrite_282612_597494479((*p0).outp, 41);
							llstreamwrite_282593_597494479((*p0).outp, (*p0).conc);
							llstreamwrite_282612_597494479((*p0).outp, 34);
						}
						break;
						default:
						{
							{
								if (!((NU8)((*p0).x->data[j0]) == (NU8)((*p0).subschar))) goto LA82;
								llstreamwrite_282612_597494479((*p0).outp, (*p0).subschar);
								j0 += ((NI) 1);
							}
							goto LA80;
							LA82: ;
							{
								(*p0).info.col = ((NI16) (j0));
								localerror_196080_155036129((*p0).info, ((Tmsgkind191002) 171), ((NimStringDesc*) &T4161173357_10));
							}
							LA80: ;
						}
						break;
						}
					}
					goto LA57;
					LA59: ;
					{
						llstreamwrite_282612_597494479((*p0).outp, (*p0).x->data[j0]);
						j0 += ((NI) 1);
					}
					LA57: ;
				}
				break;
				}
			}
		} LA48: ;
		llstreamwrite_282593_597494479((*p0).outp, ((NimStringDesc*) &T4161173357_22));
	}
	LA3: ;
}

N_NIMCALL(Tllstream282204*, filtertmpl_316002_4161173357)(Tllstream282204* stdin_316004_4161173357, NimStringDesc* filename0, Tnode292802* call0) {
	Tllstream282204* result0;
	Ttmplparser316010 p0;
	result0 = (Tllstream282204*)0;
	memset((void*)(&p0), 0, sizeof(p0));
	p0.info = newlineinfo_192021_155036129(filename0, ((NI) 0), ((NI) 0));
	p0.outp = llstreamopen_282218_597494479(((NimStringDesc*) &T4161173357_2));
	p0.inp = stdin_316004_4161173357;
	p0.subschar = chararg_315011_1413030668(call0, ((NimStringDesc*) &T4161173357_3), ((NI) 1), 36);
	p0.nimdirective = chararg_315011_1413030668(call0, ((NimStringDesc*) &T4161173357_4), ((NI) 2), 35);
	p0.emit = strarg_315017_1413030668(call0, ((NimStringDesc*) &T4161173357_5), ((NI) 3), ((NimStringDesc*) &T4161173357_6));
	p0.conc = strarg_315017_1413030668(call0, ((NimStringDesc*) &T4161173357_7), ((NI) 4), ((NimStringDesc*) &T4161173357_8));
	p0.tostr = strarg_315017_1413030668(call0, ((NimStringDesc*) &T4161173357_9), ((NI) 5), ((NimStringDesc*) &T4161173357_10));
	p0.x = rawNewString(((NI) 120));
	{
		NIM_BOOL LOC3;
		LOC3 = (NIM_BOOL)0;
		LOC3 = llstreamreadline_282550_597494479(p0.inp, (&p0.x));
		if (!LOC3) goto LA4;
		p0.info.line = (NI16)(p0.info.line + ((NI16) 1));
	}
	LA4: ;
	{
		while (1) {
			NIM_BOOL LOC8;
			LOC8 = (NIM_BOOL)0;
			LOC8 = llstreamreadline_282550_597494479(p0.inp, (&p0.x));
			if (!LOC8) goto LA7;
			p0.info.line = (NI16)(p0.info.line + ((NI16) 1));
			parseline_316109_4161173357((&p0));
		} LA7: ;
	}
	newline_316031_4161173357((&p0));
	result0 = p0.outp;
	llstreamclose_282278_597494479(p0.inp);
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, compiler_filter_tmplInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_filter_tmplDatInit000)(void) {
}

