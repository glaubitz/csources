/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct tsym209848 tsym209848;
typedef struct tnode209818 tnode209818;
typedef struct tpass264017 tpass264017;
typedef struct tpasscontext264005 tpasscontext264005;
typedef struct trodreader255030 trodreader255030;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TNimObject TNimObject;
typedef struct tllstream196204 tllstream196204;
typedef struct tparsers240035 tparsers240035;
typedef struct tparser227205 tparser227205;
typedef struct tlexer199190 tlexer199190;
typedef struct tbaselexer197024 tbaselexer197024;
typedef struct tlineinfo181340 tlineinfo181340;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct ttoken199186 ttoken199186;
typedef struct tident185021 tident185021;
typedef struct tidobj185015 tidobj185015;
typedef struct ttypeseq209850 ttypeseq209850;
typedef struct ttype209854 ttype209854;
typedef struct tscope209842 tscope209842;
typedef struct TY209949 TY209949;
typedef struct tinstantiation209838 tinstantiation209838;
typedef struct tstrtable209822 tstrtable209822;
typedef struct tsymseq209820 tsymseq209820;
typedef struct tloc209832 tloc209832;
typedef struct trope178009 trope178009;
typedef struct tlib209836 tlib209836;
typedef struct TY120808 TY120808;
typedef struct tnodeseq209812 tnodeseq209812;
typedef struct TY459726 TY459726;
typedef struct TY209938 TY209938;
typedef struct tindex255028 tindex255028;
typedef struct tiitable218274 tiitable218274;
typedef struct tiipairseq218272 tiipairseq218272;
typedef struct tiipair218270 tiipair218270;
typedef struct tidtable209866 tidtable209866;
typedef struct tidpairseq209864 tidpairseq209864;
typedef struct tidpair209862 tidpair209862;
typedef struct memfile253208 memfile253208;
typedef struct tlistentry128022 tlistentry128022;
typedef N_NIMCALL_PTR(tsym209848*, TY264064) (tsym209848* m, NI32 fileidx);
typedef N_NIMCALL_PTR(tnode209818*, TY264069) (tsym209848* m, NI32 fileidx);
typedef N_NIMCALL_PTR(tpasscontext264005*, tpassopen264009) (tsym209848* module);
typedef N_NIMCALL_PTR(tpasscontext264005*, tpassopencached264011) (tsym209848* module, trodreader255030* rd);
typedef N_NIMCALL_PTR(tnode209818*, tpassprocess264015) (tpasscontext264005* p, tnode209818* toplevelstmt);
typedef N_NIMCALL_PTR(tnode209818*, tpassclose264013) (tpasscontext264005* p, tnode209818* n);
struct tpass264017 {
tpassopen264009 Field0;
tpassopencached264011 Field1;
tpassprocess264015 Field2;
tpassclose264013 Field3;
};
typedef tpass264017 TY264187[10];
typedef N_NIMCALL_PTR(void, TY3289) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY3294) (void* p);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3289 marker;
TY3294 deepcopy;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  tpasscontext264005  {
  TNimObject Sup;
NIM_BOOL Fromcache;
};
struct  tbaselexer197024  {
  TNimObject Sup;
NI Bufpos;
NCSTRING Buf;
NI Buflen;
tllstream196204* Stream;
NI Linenumber;
NI Sentinel;
NI Linestart;
};
struct  tlineinfo181340  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (tlineinfo181340 info, NU16 msg, NimStringDesc* arg, void* ClEnv);
void* ClEnv;
} terrorhandler199188;
struct  tlexer199190  {
  tbaselexer197024 Sup;
NI32 Fileidx;
NI Indentahead;
NI Currlineindent;
NIM_BOOL Strongspaces;
terrorhandler199188 Errorhandler;
};
struct  ttoken199186  {
NU8 Toktype;
NI Indent;
tident185021* Ident;
NI64 Inumber;
NF Fnumber;
NU8 Base;
NI8 Strongspacea;
NI8 Strongspaceb;
NimStringDesc* Literal;
NI Line;
NI Col;
};
struct  tparser227205  {
NI Currind;
NIM_BOOL Firsttok;
NIM_BOOL Strongspaces;
tlexer199190 Lex;
ttoken199186 Tok;
NI Inpragma;
NI Insemistmtlist;
};
struct  tparsers240035  {
NU8 Skin;
tparser227205 Parser;
};
typedef tpasscontext264005* tpasscontextarray264182[10];
struct  tidobj185015  {
  TNimObject Sup;
NI Id;
};
struct  tstrtable209822  {
NI Counter;
tsymseq209820* Data;
};
struct  tloc209832  {
NU8 K;
NU8 S;
NU16 Flags;
ttype209854* T;
trope178009* R;
trope178009* Heaproot;
};
struct  tsym209848  {
  tidobj185015 Sup;
NU8 Kind;
union{
struct {ttypeseq209850* Typeinstcache;
tscope209842* Typscope;
} S1;
struct {TY209949* Procinstcache;
tscope209842* Scope;
} S2;
struct {TY209949* Usedgenerics;
tstrtable209822 Tab;
} S3;
struct {tsym209848* Guard;
} S4;
} kindU;
NU16 Magic;
ttype209854* Typ;
tident185021* Name;
tlineinfo181340 Info;
tsym209848* Owner;
NU32 Flags;
tnode209818* Ast;
NU32 Options;
NI Position;
NI Offset;
tloc209832 Loc;
tlib209836* Annex;
tnode209818* Constraint;
};
struct  tnode209818  {
ttype209854* Typ;
tlineinfo181340 Info;
NU16 Flags;
NU8 Kind;
union{
struct {NI64 Intval;
} S1;
struct {NF Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {tsym209848* Sym;
} S4;
struct {tident185021* Ident;
} S5;
struct {tnodeseq209812* Sons;
} S6;
} kindU;
NimStringDesc* Comment;
};
struct  tllstream196204  {
  TNimObject Sup;
NU8 Kind;
FILE* F;
NimStringDesc* S;
NI Rd;
NI Wr;
NI Lineoffset;
};
struct  ttype209854  {
  tidobj185015 Sup;
NU8 Kind;
NU8 Callconv;
NU32 Flags;
ttypeseq209850* Sons;
tnode209818* N;
tsym209848* Owner;
tsym209848* Sym;
tsym209848* Destructor;
tsym209848* Deepcopy;
NI64 Size;
NI16 Align;
NI16 Locklevel;
tloc209832 Loc;
};
struct TY459726 {
tnode209818* Field0;
tnode209818* Field1;
};
struct  tiipair218270  {
NI Key;
NI Val;
};
struct  tiitable218274  {
NI Counter;
tiipairseq218272* Data;
};
struct  tindex255028  {
NI Lastidxkey;
NI Lastidxval;
tiitable218274 Tab;
NimStringDesc* R;
NI Offset;
};
struct  tidpair209862  {
tidobj185015* Key;
TNimObject* Val;
};
struct  tidtable209866  {
NI Counter;
tidpairseq209864* Data;
};
struct  memfile253208  {
void* Mem;
NI Size;
int Handle;
};
struct  trodreader255030  {
  TNimObject Sup;
NI Pos;
NCSTRING S;
NU32 Options;
NU8 Reason;
TY209938* Moddeps;
TY209938* Files;
NI Dataidx;
NI Convertersidx;
NI Initidx;
NI Interfidx;
NI Compilerprocsidx;
NI Methodsidx;
NimStringDesc* Filename;
tindex255028 Index;
tindex255028 Imports;
NI Readerindex;
NI Line;
NI Moduleid;
tidtable209866 Syms;
memfile253208 Memfile;
tsymseq209820* Methods;
NimStringDesc* Origfile;
NIM_BOOL Inviewmode;
};
struct  tident185021  {
  tidobj185015 Sup;
NimStringDesc* S;
tident185021* Next;
NI H;
};
struct  tscope209842  {
NI Depthlevel;
tstrtable209822 Symbols;
tnodeseq209812* Usingsyms;
tscope209842* Parent;
};
struct  tinstantiation209838  {
tsym209848* Sym;
ttypeseq209850* Concretetypes;
TY209938* Usedby;
};
struct  trope178009  {
  TNimObject Sup;
trope178009* Left;
trope178009* Right;
NI Length;
NimStringDesc* Data;
};
struct  tlistentry128022  {
  TNimObject Sup;
tlistentry128022* Prev;
tlistentry128022* Next;
};
struct  tlib209836  {
  tlistentry128022 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope178009* Name;
tnode209818* Path;
};
struct ttypeseq209850 {
  TGenericSeq Sup;
  ttype209854* data[SEQ_DECL_SIZE];
};
struct TY209949 {
  TGenericSeq Sup;
  tinstantiation209838* data[SEQ_DECL_SIZE];
};
struct tsymseq209820 {
  TGenericSeq Sup;
  tsym209848* data[SEQ_DECL_SIZE];
};
struct TY120808 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct tnodeseq209812 {
  TGenericSeq Sup;
  tnode209818* data[SEQ_DECL_SIZE];
};
struct TY209938 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct tiipairseq218272 {
  TGenericSeq Sup;
  tiipair218270 data[SEQ_DECL_SIZE];
};
struct tidpairseq209864 {
  TGenericSeq Sup;
  tidpair209862 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, objectInit)(void* dest, TNimType* typ);
N_NIMCALL(void, openpasses_264316)(tpasscontext264005** a, tsym209848* module);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(NimStringDesc*, tofullpathconsiderdirty_182807)(NI32 fileidx);
N_NIMCALL(tllstream196204*, llstreamopen_196273)(NimStringDesc* filename, NU8 mode);
N_NIMCALL(void, rawmessage_183415)(NU16 msg, NimStringDesc* arg);
N_NIMCALL(void, openparsers_240047)(tparsers240035* p, NI32 fileidx, tllstream196204* inputstream);
N_NIMCALL(void, processimplicits_264633)(TY120808* implicits, NU8 nodekind, tpasscontext264005** a);
N_NIMCALL(tnode209818*, newnodei_210140)(NU8 kind, tlineinfo181340 info);
N_NIMCALL(tnode209818*, newstrnode_210120)(NU8 kind, NimStringDesc* strval);
N_NIMCALL(void, addson_210289)(tnode209818* father, tnode209818* son);
N_NIMCALL(NIM_BOOL, processtoplevelstmt_264473)(tnode209818* n, tpasscontext264005** a);
N_NIMCALL(tnode209818*, parsetoplevelstmt_240070)(tparsers240035* p);
N_NIMCALL(void, closeparsers_240056)(tparsers240035* p);
N_NIMCALL(void, closepasses_264426)(tpasscontext264005** a);
N_NIMCALL(void, idsynchronizationpoint_208458)(NI idrange);
N_NIMCALL(void, openpassescached_264362)(tpasscontext264005** a, tsym209848* module, trodreader255030* rd);
N_NIMCALL(tnode209818*, loadinitsection_255077)(trodreader255030* r);
static N_INLINE(NI, sonslen_210251)(tnode209818* n);
N_NIMCALL(void, processtoplevelstmtcached_264532)(tnode209818* n, tpasscontext264005** a);
N_NIMCALL(void, closepassescached_264579)(tpasscontext264005** a);
N_NIMCALL(void, carrypass_264225)(tpass264017* p, tsym209848* module, TY459726 m, TY459726* Result);
TY264064 gimportmodule_264068;
TY264069 gincludefile_264073;
TY264187 gpasses_264189;
NI gpasseslen_264190;
extern TNimType NTI3411; /* RootObj */
TNimType NTI264005; /* TPassContext */
extern TNimType NTI138; /* bool */
extern TNimType NTI240035; /* TParsers */
extern tlineinfo181340 gcmdlineinfo_182006;
extern TY120808* implicitimports_170287;
extern TY120808* implicitincludes_170309;

N_NIMCALL(void, openpasses_264316)(tpasscontext264005** a, tsym209848* module) {
	{
		NI i_264333;
		NI HEX3Atmp_264342;
		NI res_264345;
		i_264333 = 0;
		HEX3Atmp_264342 = 0;
		HEX3Atmp_264342 = (NI64)(gpasseslen_264190 - 1);
		res_264345 = 0;
		{
			while (1) {
				if (!(res_264345 <= HEX3Atmp_264342)) goto LA3;
				i_264333 = res_264345;
				{
					if (!!(gpasses_264189[(i_264333)- 0].Field0 == 0)) goto LA6;
					unsureAsgnRef((void**) (&a[(i_264333)- 0]), gpasses_264189[(i_264333)- 0].Field0(module));
				}
				goto LA4;
				LA6: ;
				{
					unsureAsgnRef((void**) (&a[(i_264333)- 0]), NIM_NIL);
				}
				LA4: ;
				res_264345 += 1;
			} LA3: ;
		}
	}
}

N_NIMCALL(NIM_BOOL, processtoplevelstmt_264473)(tnode209818* n, tpasscontext264005** a) {
	NIM_BOOL result;
	tnode209818* m;
{	result = 0;
	m = n;
	{
		NI i_264492;
		NI HEX3Atmp_264512;
		NI res_264515;
		i_264492 = 0;
		HEX3Atmp_264512 = 0;
		HEX3Atmp_264512 = (NI64)(gpasseslen_264190 - 1);
		res_264515 = 0;
		{
			while (1) {
				if (!(res_264515 <= HEX3Atmp_264512)) goto LA3;
				i_264492 = res_264515;
				{
					if (!!(gpasses_264189[(i_264492)- 0].Field2 == 0)) goto LA6;
					m = gpasses_264189[(i_264492)- 0].Field2(a[(i_264492)- 0], m);
					{
						if (!m == 0) goto LA10;
						result = NIM_FALSE;
						goto BeforeRet;
					}
					LA10: ;
				}
				LA6: ;
				res_264515 += 1;
			} LA3: ;
		}
	}
	result = NIM_TRUE;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(void, processimplicits_264633)(TY120808* implicits, NU8 nodekind, tpasscontext264005** a) {
	{
		NimStringDesc* module_264652;
		NI i_264659;
		NI l_264661;
		module_264652 = 0;
		i_264659 = 0;
		l_264661 = implicits->Sup.len;
		{
			while (1) {
				tnode209818* importstmt;
				tnode209818* str;
				if (!(i_264659 < l_264661)) goto LA3;
				module_264652 = implicits->data[i_264659];
				importstmt = newnodei_210140(nodekind, gcmdlineinfo_182006);
				str = newstrnode_210120(((NU8) 20), module_264652);
				(*str).Info = gcmdlineinfo_182006;
				addson_210289(importstmt, str);
				{
					NIM_BOOL LOC6;
					LOC6 = 0;
					LOC6 = processtoplevelstmt_264473(importstmt, a);
					if (!!(LOC6)) goto LA7;
					goto LA1;
				}
				LA7: ;
				i_264659 += 1;
			} LA3: ;
		}
	} LA1: ;
}

N_NIMCALL(void, closepasses_264426)(tpasscontext264005** a) {
	tnode209818* m;
	m = NIM_NIL;
	{
		NI i_264443;
		NI HEX3Atmp_264453;
		NI res_264456;
		i_264443 = 0;
		HEX3Atmp_264453 = 0;
		HEX3Atmp_264453 = (NI64)(gpasseslen_264190 - 1);
		res_264456 = 0;
		{
			while (1) {
				if (!(res_264456 <= HEX3Atmp_264453)) goto LA3;
				i_264443 = res_264456;
				{
					if (!!(gpasses_264189[(i_264443)- 0].Field3 == 0)) goto LA6;
					m = gpasses_264189[(i_264443)- 0].Field3(a[(i_264443)- 0], m);
				}
				LA6: ;
				unsureAsgnRef((void**) (&a[(i_264443)- 0]), NIM_NIL);
				res_264456 += 1;
			} LA3: ;
		}
	}
}

N_NIMCALL(void, openpassescached_264362)(tpasscontext264005** a, tsym209848* module, trodreader255030* rd) {
	{
		NI i_264380;
		NI HEX3Atmp_264406;
		NI res_264409;
		i_264380 = 0;
		HEX3Atmp_264406 = 0;
		HEX3Atmp_264406 = (NI64)(gpasseslen_264190 - 1);
		res_264409 = 0;
		{
			while (1) {
				if (!(res_264409 <= HEX3Atmp_264406)) goto LA3;
				i_264380 = res_264409;
				{
					if (!!(gpasses_264189[(i_264380)- 0].Field1 == 0)) goto LA6;
					unsureAsgnRef((void**) (&a[(i_264380)- 0]), gpasses_264189[(i_264380)- 0].Field1(module, rd));
					{
						if (!!((a[(i_264380)- 0] == NIM_NIL))) goto LA10;
						(*a[(i_264380)- 0]).Fromcache = NIM_TRUE;
					}
					LA10: ;
				}
				goto LA4;
				LA6: ;
				{
					unsureAsgnRef((void**) (&a[(i_264380)- 0]), NIM_NIL);
				}
				LA4: ;
				res_264409 += 1;
			} LA3: ;
		}
	}
}

static N_INLINE(NI, sonslen_210251)(tnode209818* n) {
	NI result;
	result = 0;
	{
		if (!(*n).kindU.S6.Sons == 0) goto LA3;
		result = 0;
	}
	goto LA1;
	LA3: ;
	{
		result = (*n).kindU.S6.Sons->Sup.len;
	}
	LA1: ;
	return result;
}

N_NIMCALL(void, processtoplevelstmtcached_264532)(tnode209818* n, tpasscontext264005** a) {
	tnode209818* m;
	m = n;
	{
		NI i_264550;
		NI HEX3Atmp_264559;
		NI res_264562;
		i_264550 = 0;
		HEX3Atmp_264559 = 0;
		HEX3Atmp_264559 = (NI64)(gpasseslen_264190 - 1);
		res_264562 = 0;
		{
			while (1) {
				if (!(res_264562 <= HEX3Atmp_264559)) goto LA3;
				i_264550 = res_264562;
				{
					if (!!(gpasses_264189[(i_264550)- 0].Field1 == 0)) goto LA6;
					m = gpasses_264189[(i_264550)- 0].Field2(a[(i_264550)- 0], m);
				}
				LA6: ;
				res_264562 += 1;
			} LA3: ;
		}
	}
}

N_NIMCALL(void, closepassescached_264579)(tpasscontext264005** a) {
	tnode209818* m;
	m = NIM_NIL;
	{
		NI i_264596;
		NI HEX3Atmp_264613;
		NI res_264616;
		i_264596 = 0;
		HEX3Atmp_264613 = 0;
		HEX3Atmp_264613 = (NI64)(gpasseslen_264190 - 1);
		res_264616 = 0;
		{
			while (1) {
				if (!(res_264616 <= HEX3Atmp_264613)) goto LA3;
				i_264596 = res_264616;
				{
					NIM_BOOL LOC6;
					LOC6 = 0;
					LOC6 = !(gpasses_264189[(i_264596)- 0].Field1 == 0);
					if (!(LOC6)) goto LA7;
					LOC6 = !(gpasses_264189[(i_264596)- 0].Field3 == 0);
					LA7: ;
					if (!LOC6) goto LA8;
					m = gpasses_264189[(i_264596)- 0].Field3(a[(i_264596)- 0], m);
				}
				LA8: ;
				unsureAsgnRef((void**) (&a[(i_264596)- 0]), NIM_NIL);
				res_264616 += 1;
			} LA3: ;
		}
	}
}

N_NIMCALL(void, processmodule_264056)(tsym209848* module, tllstream196204* stream, trodreader255030* rd) {
	tparsers240035 p;
	tpasscontextarray264182 a;
	tllstream196204* s;
	NI32 fileidx;
{	memset((void*)(&p), 0, sizeof(p));
	objectInit((&p), (&NTI240035));
	memset((void*)a, 0, sizeof(a));
	s = 0;
	fileidx = ((NI32) ((*module).Position));
	{
		if (!(rd == NIM_NIL)) goto LA3;
		openpasses_264316(a, module);
		{
			NimStringDesc* filename;
			if (!(stream == NIM_NIL)) goto LA7;
			filename = tofullpathconsiderdirty_182807(fileidx);
			s = llstreamopen_196273(filename, ((NU8) 0));
			{
				if (!(s == NIM_NIL)) goto LA11;
				rawmessage_183415(((NU16) 3), filename);
				goto BeforeRet;
			}
			LA11: ;
		}
		goto LA5;
		LA7: ;
		{
			s = stream;
		}
		LA5: ;
		{
			while (1) {
				openparsers_240047((&p), fileidx, s);
				{
					if (!!((((*module).Flags &(1<<((((NU8) 13))&31)))!=0))) goto LA18;
					processimplicits_264633(implicitimports_170287, ((NU8) 116), a);
					processimplicits_264633(implicitincludes_170309, ((NU8) 121), a);
				}
				LA18: ;
				{
					while (1) {
						tnode209818* n;
						n = parsetoplevelstmt_240070((&p));
						{
							if (!((*n).Kind == ((NU8) 1))) goto LA24;
							goto LA20;
						}
						LA24: ;
						{
							NIM_BOOL LOC28;
							LOC28 = 0;
							LOC28 = processtoplevelstmt_264473(n, a);
							if (!!(LOC28)) goto LA29;
							goto LA20;
						}
						LA29: ;
					}
				} LA20: ;
				closeparsers_240056((&p));
				{
					if (!!(((*s).Kind == ((NU8) 3)))) goto LA33;
					goto LA14;
				}
				LA33: ;
			}
		} LA14: ;
		closepasses_264426(a);
		idsynchronizationpoint_208458(1000);
	}
	goto LA1;
	LA3: ;
	{
		tnode209818* n;
		openpassescached_264362(a, module, rd);
		n = loadinitsection_255077(rd);
		{
			NI i_264797;
			NI HEX3Atmp_264807;
			NI LOC37;
			NI res_264810;
			i_264797 = 0;
			HEX3Atmp_264807 = 0;
			LOC37 = 0;
			LOC37 = sonslen_210251(n);
			HEX3Atmp_264807 = (NI64)(LOC37 - 1);
			res_264810 = 0;
			{
				while (1) {
					if (!(res_264810 <= HEX3Atmp_264807)) goto LA39;
					i_264797 = res_264810;
					processtoplevelstmtcached_264532((*n).kindU.S6.Sons->data[i_264797], a);
					res_264810 += 1;
				} LA39: ;
			}
		}
		closepassescached_264579(a);
	}
	LA1: ;
	}BeforeRet: ;
}

N_NIMCALL(void, clearpasses_264196)(void) {
	gpasseslen_264190 = 0;
}

N_NIMCALL(void, registerpass_264204)(tpass264017* p) {
	gpasses_264189[(gpasseslen_264190)- 0] = (*p);
	gpasseslen_264190 += 1;
}

N_NIMCALL(NIM_BOOL, astneeded_264094)(tsym209848* s) {
	NIM_BOOL result;
	result = 0;
	{
		NIM_BOOL LOC3;
		NIM_BOOL LOC4;
		NIM_BOOL LOC5;
		LOC3 = 0;
		LOC4 = 0;
		LOC5 = 0;
		LOC5 = ((12288 &(1<<(((*s).Kind)&31)))!=0);
		if (!(LOC5)) goto LA6;
		LOC5 = ((8454144 & (*s).Flags) == 0);
		LA6: ;
		LOC4 = LOC5;
		if (!(LOC4)) goto LA7;
		LOC4 = !(((*(*s).Typ).Callconv == ((NU8) 5)));
		LA7: ;
		LOC3 = LOC4;
		if (!(LOC3)) goto LA8;
		LOC3 = ((*(*(*s).Ast).kindU.S6.Sons->data[2]).Kind == ((NU8) 1));
		LA8: ;
		if (!LOC3) goto LA9;
		result = NIM_FALSE;
	}
	goto LA1;
	LA9: ;
	{
		result = NIM_TRUE;
	}
	LA1: ;
	return result;
}

N_NIMCALL(void, carrypass_264225)(tpass264017* p, tsym209848* module, TY459726 m, TY459726* Result) {
	tpasscontext264005* c;
	c = (*p).Field0(module);
	unsureAsgnRef((void**) (&(*Result).Field0), (*p).Field2(c, m.Field0));
	{
		if (!!(((*p).Field3 == NIM_NIL))) goto LA3;
		unsureAsgnRef((void**) (&(*Result).Field1), (*p).Field3(c, m.Field1));
	}
	goto LA1;
	LA3: ;
	{
		unsureAsgnRef((void**) (&(*Result).Field1), m.Field1);
	}
	LA1: ;
}

N_NIMCALL(void, carrypasses_264247)(tnode209818* nodes, tsym209848* module, tpass264017* passes, NI passesLen0) {
	TY459726 passdata;
	memset((void*)(&passdata), 0, sizeof(passdata));
	passdata.Field0 = nodes;
	{
		tpass264017 pass_264295;
		NI i_264300;
		memset((void*)(&pass_264295), 0, sizeof(pass_264295));
		i_264300 = 0;
		{
			while (1) {
				TY459726 LOC4;
				if (!(i_264300 < passesLen0)) goto LA3;
				pass_264295 = passes[i_264300];
				memset((void*)(&LOC4), 0, sizeof(LOC4));
				carrypass_264225((&pass_264295), module, passdata, (&LOC4));
				passdata.Field0 = LOC4.Field0;
				passdata.Field1 = LOC4.Field1;
				i_264300 += 1;
			} LA3: ;
		}
	}
}
NIM_EXTERNC N_NOINLINE(void, compiler_passesInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_passesDatInit)(void) {
static TNimNode TMP835[1];
NTI264005.size = sizeof(tpasscontext264005);
NTI264005.kind = 17;
NTI264005.base = (&NTI3411);
NTI264005.flags = 1;
TMP835[0].kind = 1;
TMP835[0].offset = offsetof(tpasscontext264005, Fromcache);
TMP835[0].typ = (&NTI138);
TMP835[0].name = "fromCache";
NTI264005.node = &TMP835[0];
}
