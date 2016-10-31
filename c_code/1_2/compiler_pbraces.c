/* Generated by Nim Compiler v0.14.3 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <stdio.h>
typedef struct Tnode290802 Tnode290802;
typedef struct Tparser304202 Tparser304202;
typedef struct Ttype290840 Ttype290840;
typedef struct Tlineinfo189336 Tlineinfo189336;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tsym290834 Tsym290834;
typedef struct Tident197010 Tident197010;
typedef struct Tnodeseq290796 Tnodeseq290796;
typedef struct Tlexer283174 Tlexer283174;
typedef struct Tbaselexer281015 Tbaselexer281015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Tllstream280204 Tllstream280204;
typedef struct Ttoken283170 Ttoken283170;
typedef struct Tidobj197004 Tidobj197004;
typedef struct Ttypeseq290836 Ttypeseq290836;
typedef struct TY290960 TY290960;
typedef struct Tloc290816 Tloc290816;
typedef struct Ropeobj177006 Ropeobj177006;
typedef struct TY290929 TY290929;
typedef struct Tstrtable290806 Tstrtable290806;
typedef struct Tsymseq290804 Tsymseq290804;
typedef struct Tlib290820 Tlib290820;
typedef struct TY290961 TY290961;
typedef struct Tinstantiation290824 Tinstantiation290824;
typedef struct Tlistentry147007 Tlistentry147007;
struct  Tlineinfo189336  {
NI16 line;
NI16 col;
NI32 fileindex;
};
typedef NU16 Tnodeflag290427Set;
typedef NU8 Tnodekind290020;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tnode290802  {
Ttype290840* typ;
Tlineinfo189336 info;
Tnodeflag290427Set flags;
Tnodekind290020 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym290834* sym;
} S4;
struct {Tident197010* ident;
} S5;
struct {Tnodeseq290796* sons;
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
struct  Tbaselexer281015  {
  TNimObject Sup;
NI bufpos;
NCSTRING buf;
NI buflen;
Tllstream280204* stream;
NI linenumber;
NI sentinel;
NI linestart;
};
typedef NU16 Tmsgkind189002;
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (Tlineinfo189336 info0, Tmsgkind189002 msg0, NimStringDesc* arg0, void* ClEnv);
void* ClEnv;
} Terrorhandler283172;
struct  Tlexer283174  {
  Tbaselexer281015 Sup;
NI32 fileidx;
NI indentahead;
NI currlineindent;
NIM_BOOL strongspaces;
Terrorhandler283172 errorhandler;
};
typedef NU8 Ttoktype283016;
typedef NU8 Tnumericalbase283168;
struct  Ttoken283170  {
Ttoktype283016 toktype;
NI indent;
Tident197010* ident;
NI64 inumber;
NF fnumber;
Tnumericalbase283168 base;
NI8 strongspacea;
NI8 strongspaceb;
NimStringDesc* literal;
NI line;
NI col;
};
struct  Tparser304202  {
NI currind;
NIM_BOOL firsttok;
NIM_BOOL strongspaces;
Tlexer283174 lex;
Ttoken283170 tok;
NI inpragma;
NI insemistmtlist;
};
struct  Tidobj197004  {
  TNimObject Sup;
NI id;
};
typedef NU8 Ttypekind290244;
typedef NU8 Tcallingconvention290002;
typedef NU32 Ttypeflag290431Set;
typedef NU8 Tlockind290808;
typedef NU8 Tstorageloc290812;
typedef NU16 Tlocflag290810Set;
struct  Tloc290816  {
Tlockind290808 k;
Tstorageloc290812 s;
Tlocflag290810Set flags;
Ttype290840* t;
Ropeobj177006* r;
};
struct  Ttype290840  {
  Tidobj197004 Sup;
Ttypekind290244 kind;
Tcallingconvention290002 callconv;
Ttypeflag290431Set flags;
Ttypeseq290836* sons;
Tnode290802* n;
Tsym290834* owner;
Tsym290834* sym;
Tsym290834* destructor;
Tsym290834* deepcopy;
Tsym290834* assignment;
TY290960* methods;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc290816 loc;
};
typedef NU8 Tsymkind290435;
struct  Tstrtable290806  {
NI counter;
Tsymseq290804* data;
};
typedef NU16 Tmagic290524;
typedef NU32 Tsymflag290184Set;
typedef NU32 Toption168009Set;
struct  Tsym290834  {
  Tidobj197004 Sup;
Tsymkind290435 kind;
union{
struct {Ttypeseq290836* typeinstcache;
} S1;
struct {TY290929* procinstcache;
Tsym290834* gcunsafetyreason;
} S2;
struct {TY290929* usedgenerics;
Tstrtable290806 tab;
} S3;
struct {Tsym290834* guard;
NI bitsize;
} S4;
} kindU;
Tmagic290524 magic;
Ttype290840* typ;
Tident197010* name;
Tlineinfo189336 info;
Tsym290834* owner;
Tsymflag290184Set flags;
Tnode290802* ast;
Toption168009Set options;
NI position;
NI offset;
Tloc290816 loc;
Tlib290820* annex;
Tnode290802* constraint;
};
struct  Tident197010  {
  Tidobj197004 Sup;
NimStringDesc* s;
Tident197010* next;
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
typedef NU8 Tllstreamkind280202;
struct  Tllstream280204  {
  TNimObject Sup;
Tllstreamkind280202 kind;
FILE* f;
NimStringDesc* s;
NI rd;
NI wr;
NI lineoffset;
};
struct TY290961 {
NI Field0;
Tsym290834* Field1;
};
struct  Ropeobj177006  {
  TNimObject Sup;
Ropeobj177006* left;
Ropeobj177006* right;
NI length;
NimStringDesc* data;
};
struct  Tlistentry147007  {
  TNimObject Sup;
Tlistentry147007* prev;
Tlistentry147007* next;
};
typedef NU8 Tlibkind290818;
struct  Tlib290820  {
  Tlistentry147007 Sup;
Tlibkind290818 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj177006* name;
Tnode290802* path;
};
struct  Tinstantiation290824  {
Tsym290834* sym;
Ttypeseq290836* concretetypes;
NI compilesid;
};
struct Tnodeseq290796 {
  TGenericSeq Sup;
  Tnode290802* data[SEQ_DECL_SIZE];
};
struct Ttypeseq290836 {
  TGenericSeq Sup;
  Ttype290840* data[SEQ_DECL_SIZE];
};
struct TY290960 {
  TGenericSeq Sup;
  TY290961 data[SEQ_DECL_SIZE];
};
struct TY290929 {
  TGenericSeq Sup;
  Tinstantiation290824* data[SEQ_DECL_SIZE];
};
struct Tsymseq290804 {
  TGenericSeq Sup;
  Tsym290834* data[SEQ_DECL_SIZE];
};

N_NIMCALL(Tnode290802*, parseall_308002_959407361)(Tparser304202* p0) {
	Tnode290802* result0;
	result0 = (Tnode290802*)0;
	result0 = NIM_NIL;
	return result0;
}

N_NIMCALL(Tnode290802*, parsetoplevelstmt_308007_959407361)(Tparser304202* p0) {
	Tnode290802* result0;
	result0 = (Tnode290802*)0;
	result0 = NIM_NIL;
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, compiler_pbracesInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_pbracesDatInit000)(void) {
}

