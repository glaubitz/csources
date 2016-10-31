/* Generated by Nim Compiler v0.14.3 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <stdio.h>
typedef struct Tnode294802 Tnode294802;
typedef struct Tparser308202 Tparser308202;
typedef struct Ttype294840 Ttype294840;
typedef struct Tlineinfo193336 Tlineinfo193336;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tsym294834 Tsym294834;
typedef struct Tident201010 Tident201010;
typedef struct Tnodeseq294796 Tnodeseq294796;
typedef struct Tlexer287174 Tlexer287174;
typedef struct Tbaselexer285015 Tbaselexer285015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Tllstream284204 Tllstream284204;
typedef struct Ttoken287170 Ttoken287170;
typedef struct Tidobj201004 Tidobj201004;
typedef struct Ttypeseq294836 Ttypeseq294836;
typedef struct TY294960 TY294960;
typedef struct Tloc294816 Tloc294816;
typedef struct Ropeobj180006 Ropeobj180006;
typedef struct TY294929 TY294929;
typedef struct Tstrtable294806 Tstrtable294806;
typedef struct Tsymseq294804 Tsymseq294804;
typedef struct Tlib294820 Tlib294820;
typedef struct TY294961 TY294961;
typedef struct Tinstantiation294824 Tinstantiation294824;
typedef struct Tlistentry148007 Tlistentry148007;
struct  Tlineinfo193336  {
NI16 line;
NI16 col;
NI32 fileindex;
};
typedef NU16 Tnodeflag294427Set;
typedef NU8 Tnodekind294020;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tnode294802  {
Ttype294840* typ;
Tlineinfo193336 info;
Tnodeflag294427Set flags;
Tnodekind294020 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym294834* sym;
} S4;
struct {Tident201010* ident;
} S5;
struct {Tnodeseq294796* sons;
} S6;
} kindU;
NimStringDesc* comment;
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
typedef NU16 Tmsgkind193002;
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (Tlineinfo193336 info0, Tmsgkind193002 msg0, NimStringDesc* arg0, void* ClEnv);
void* ClEnv;
} Terrorhandler287172;
struct  Tlexer287174  {
  Tbaselexer285015 Sup;
NI32 fileidx;
NI indentahead;
NI currlineindent;
NIM_BOOL strongspaces;
Terrorhandler287172 errorhandler;
};
typedef NU8 Ttoktype287016;
typedef NU8 Tnumericalbase287168;
struct  Ttoken287170  {
Ttoktype287016 toktype;
NI indent;
Tident201010* ident;
NI64 inumber;
NF fnumber;
Tnumericalbase287168 base;
NI8 strongspacea;
NI8 strongspaceb;
NimStringDesc* literal;
NI line;
NI col;
};
struct  Tparser308202  {
NI currind;
NIM_BOOL firsttok;
NIM_BOOL strongspaces;
Tlexer287174 lex;
Ttoken287170 tok;
NI inpragma;
NI insemistmtlist;
};
struct  Tidobj201004  {
  TNimObject Sup;
NI id;
};
typedef NU8 Ttypekind294244;
typedef NU8 Tcallingconvention294002;
typedef NU32 Ttypeflag294431Set;
typedef NU8 Tlockind294808;
typedef NU8 Tstorageloc294812;
typedef NU16 Tlocflag294810Set;
struct  Tloc294816  {
Tlockind294808 k;
Tstorageloc294812 s;
Tlocflag294810Set flags;
Ttype294840* t;
Ropeobj180006* r;
};
struct  Ttype294840  {
  Tidobj201004 Sup;
Ttypekind294244 kind;
Tcallingconvention294002 callconv;
Ttypeflag294431Set flags;
Ttypeseq294836* sons;
Tnode294802* n;
Tsym294834* owner;
Tsym294834* sym;
Tsym294834* destructor;
Tsym294834* deepcopy;
Tsym294834* assignment;
TY294960* methods;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc294816 loc;
};
typedef NU8 Tsymkind294435;
struct  Tstrtable294806  {
NI counter;
Tsymseq294804* data;
};
typedef NU16 Tmagic294524;
typedef NU32 Tsymflag294184Set;
typedef NU32 Toption171009Set;
struct  Tsym294834  {
  Tidobj201004 Sup;
Tsymkind294435 kind;
union{
struct {Ttypeseq294836* typeinstcache;
} S1;
struct {TY294929* procinstcache;
Tsym294834* gcunsafetyreason;
} S2;
struct {TY294929* usedgenerics;
Tstrtable294806 tab;
} S3;
struct {Tsym294834* guard;
NI bitsize;
} S4;
} kindU;
Tmagic294524 magic;
Ttype294840* typ;
Tident201010* name;
Tlineinfo193336 info;
Tsym294834* owner;
Tsymflag294184Set flags;
Tnode294802* ast;
Toption171009Set options;
NI position;
NI offset;
Tloc294816 loc;
Tlib294820* annex;
Tnode294802* constraint;
};
struct  Tident201010  {
  Tidobj201004 Sup;
NimStringDesc* s;
Tident201010* next;
NI h;
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
typedef NU8 Tllstreamkind284202;
struct  Tllstream284204  {
  TNimObject Sup;
Tllstreamkind284202 kind;
FILE* f;
NimStringDesc* s;
NI rd;
NI wr;
NI lineoffset;
};
struct TY294961 {
NI Field0;
Tsym294834* Field1;
};
struct  Ropeobj180006  {
  TNimObject Sup;
Ropeobj180006* left;
Ropeobj180006* right;
NI length;
NimStringDesc* data;
};
struct  Tlistentry148007  {
  TNimObject Sup;
Tlistentry148007* prev;
Tlistentry148007* next;
};
typedef NU8 Tlibkind294818;
struct  Tlib294820  {
  Tlistentry148007 Sup;
Tlibkind294818 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj180006* name;
Tnode294802* path;
};
struct  Tinstantiation294824  {
Tsym294834* sym;
Ttypeseq294836* concretetypes;
NI compilesid;
};
struct Tnodeseq294796 {
  TGenericSeq Sup;
  Tnode294802* data[SEQ_DECL_SIZE];
};
struct Ttypeseq294836 {
  TGenericSeq Sup;
  Ttype294840* data[SEQ_DECL_SIZE];
};
struct TY294960 {
  TGenericSeq Sup;
  TY294961 data[SEQ_DECL_SIZE];
};
struct TY294929 {
  TGenericSeq Sup;
  Tinstantiation294824* data[SEQ_DECL_SIZE];
};
struct Tsymseq294804 {
  TGenericSeq Sup;
  Tsym294834* data[SEQ_DECL_SIZE];
};

N_NIMCALL(Tnode294802*, parseall_312002_959407361)(Tparser308202* p0) {
	Tnode294802* result0;
	result0 = (Tnode294802*)0;
	result0 = NIM_NIL;
	return result0;
}

N_NIMCALL(Tnode294802*, parsetoplevelstmt_312007_959407361)(Tparser308202* p0) {
	Tnode294802* result0;
	result0 = (Tnode294802*)0;
	result0 = NIM_NIL;
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, compiler_pbracesInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_pbracesDatInit000)(void) {
}

