/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct tsym210848 tsym210848;
typedef struct tnode210818 tnode210818;
typedef struct tpass265017 tpass265017;
typedef struct tpasscontext265005 tpasscontext265005;
typedef struct trodreader256030 trodreader256030;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TNimObject TNimObject;
typedef struct tllstream197204 tllstream197204;
typedef struct tparsers241035 tparsers241035;
typedef struct tparser228205 tparser228205;
typedef struct tlexer200190 tlexer200190;
typedef struct tbaselexer198024 tbaselexer198024;
typedef struct tlineinfo182340 tlineinfo182340;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct ttoken200186 ttoken200186;
typedef struct tident186021 tident186021;
typedef struct tidobj186015 tidobj186015;
typedef struct ttypeseq210850 ttypeseq210850;
typedef struct ttype210854 ttype210854;
typedef struct tscope210842 tscope210842;
typedef struct TY210949 TY210949;
typedef struct tinstantiation210838 tinstantiation210838;
typedef struct tstrtable210822 tstrtable210822;
typedef struct tsymseq210820 tsymseq210820;
typedef struct tloc210832 tloc210832;
typedef struct trope179009 trope179009;
typedef struct tlib210836 tlib210836;
typedef struct TY120808 TY120808;
typedef struct tnodeseq210812 tnodeseq210812;
typedef struct TY460726 TY460726;
typedef struct TY210938 TY210938;
typedef struct tindex256028 tindex256028;
typedef struct tiitable219274 tiitable219274;
typedef struct tiipairseq219272 tiipairseq219272;
typedef struct tiipair219270 tiipair219270;
typedef struct tidtable210866 tidtable210866;
typedef struct tidpairseq210864 tidpairseq210864;
typedef struct tidpair210862 tidpair210862;
typedef struct memfile254208 memfile254208;
typedef struct tlistentry128022 tlistentry128022;
typedef N_NIMCALL_PTR(tsym210848*, TY265064) (tsym210848* m, NI32 fileidx);
typedef N_NIMCALL_PTR(tnode210818*, TY265069) (tsym210848* m, NI32 fileidx);
typedef N_NIMCALL_PTR(tpasscontext265005*, tpassopen265009) (tsym210848* module);
typedef N_NIMCALL_PTR(tpasscontext265005*, tpassopencached265011) (tsym210848* module, trodreader256030* rd);
typedef N_NIMCALL_PTR(tnode210818*, tpassprocess265015) (tpasscontext265005* p, tnode210818* toplevelstmt);
typedef N_NIMCALL_PTR(tnode210818*, tpassclose265013) (tpasscontext265005* p, tnode210818* n);
struct tpass265017 {
tpassopen265009 Field0;
tpassopencached265011 Field1;
tpassprocess265015 Field2;
tpassclose265013 Field3;
};
typedef tpass265017 TY265187[10];
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
struct  tpasscontext265005  {
  TNimObject Sup;
NIM_BOOL Fromcache;
};
struct  tbaselexer198024  {
  TNimObject Sup;
NI Bufpos;
NCSTRING Buf;
NI Buflen;
tllstream197204* Stream;
NI Linenumber;
NI Sentinel;
NI Linestart;
};
struct  tlineinfo182340  {
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
N_NIMCALL_PTR(void, ClPrc) (tlineinfo182340 info, NU16 msg, NimStringDesc* arg, void* ClEnv);
void* ClEnv;
} terrorhandler200188;
struct  tlexer200190  {
  tbaselexer198024 Sup;
NI32 Fileidx;
NI Indentahead;
NI Currlineindent;
NIM_BOOL Strongspaces;
terrorhandler200188 Errorhandler;
};
struct  ttoken200186  {
NU8 Toktype;
NI Indent;
tident186021* Ident;
NI64 Inumber;
NF Fnumber;
NU8 Base;
NI8 Strongspacea;
NI8 Strongspaceb;
NimStringDesc* Literal;
NI Line;
NI Col;
};
struct  tparser228205  {
NI Currind;
NIM_BOOL Firsttok;
NIM_BOOL Strongspaces;
tlexer200190 Lex;
ttoken200186 Tok;
NI Inpragma;
NI Insemistmtlist;
};
struct  tparsers241035  {
NU8 Skin;
tparser228205 Parser;
};
typedef tpasscontext265005* tpasscontextarray265182[10];
struct  tidobj186015  {
  TNimObject Sup;
NI Id;
};
struct  tstrtable210822  {
NI Counter;
tsymseq210820* Data;
};
struct  tloc210832  {
NU8 K;
NU8 S;
NU16 Flags;
ttype210854* T;
trope179009* R;
trope179009* Heaproot;
};
struct  tsym210848  {
  tidobj186015 Sup;
NU8 Kind;
union{
struct {ttypeseq210850* Typeinstcache;
tscope210842* Typscope;
} S1;
struct {TY210949* Procinstcache;
tscope210842* Scope;
} S2;
struct {TY210949* Usedgenerics;
tstrtable210822 Tab;
} S3;
struct {tsym210848* Guard;
} S4;
} kindU;
NU16 Magic;
ttype210854* Typ;
tident186021* Name;
tlineinfo182340 Info;
tsym210848* Owner;
NU32 Flags;
tnode210818* Ast;
NU32 Options;
NI Position;
NI Offset;
tloc210832 Loc;
tlib210836* Annex;
tnode210818* Constraint;
};
struct  tnode210818  {
ttype210854* Typ;
tlineinfo182340 Info;
NU16 Flags;
NU8 Kind;
union{
struct {NI64 Intval;
} S1;
struct {NF Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {tsym210848* Sym;
} S4;
struct {tident186021* Ident;
} S5;
struct {tnodeseq210812* Sons;
} S6;
} kindU;
NimStringDesc* Comment;
};
struct  tllstream197204  {
  TNimObject Sup;
NU8 Kind;
FILE* F;
NimStringDesc* S;
NI Rd;
NI Wr;
NI Lineoffset;
};
struct  ttype210854  {
  tidobj186015 Sup;
NU8 Kind;
NU8 Callconv;
NU32 Flags;
ttypeseq210850* Sons;
tnode210818* N;
tsym210848* Owner;
tsym210848* Sym;
tsym210848* Destructor;
tsym210848* Deepcopy;
NI64 Size;
NI16 Align;
NI16 Locklevel;
tloc210832 Loc;
};
struct TY460726 {
tnode210818* Field0;
tnode210818* Field1;
};
struct  tiipair219270  {
NI Key;
NI Val;
};
struct  tiitable219274  {
NI Counter;
tiipairseq219272* Data;
};
struct  tindex256028  {
NI Lastidxkey;
NI Lastidxval;
tiitable219274 Tab;
NimStringDesc* R;
NI Offset;
};
struct  tidpair210862  {
tidobj186015* Key;
TNimObject* Val;
};
struct  tidtable210866  {
NI Counter;
tidpairseq210864* Data;
};
struct  memfile254208  {
void* Mem;
NI Size;
int Handle;
};
struct  trodreader256030  {
  TNimObject Sup;
NI Pos;
NCSTRING S;
NU32 Options;
NU8 Reason;
TY210938* Moddeps;
TY210938* Files;
NI Dataidx;
NI Convertersidx;
NI Initidx;
NI Interfidx;
NI Compilerprocsidx;
NI Methodsidx;
NimStringDesc* Filename;
tindex256028 Index;
tindex256028 Imports;
NI Readerindex;
NI Line;
NI Moduleid;
tidtable210866 Syms;
memfile254208 Memfile;
tsymseq210820* Methods;
NimStringDesc* Origfile;
NIM_BOOL Inviewmode;
};
struct  tident186021  {
  tidobj186015 Sup;
NimStringDesc* S;
tident186021* Next;
NI H;
};
struct  tscope210842  {
NI Depthlevel;
tstrtable210822 Symbols;
tnodeseq210812* Usingsyms;
tscope210842* Parent;
};
struct  tinstantiation210838  {
tsym210848* Sym;
ttypeseq210850* Concretetypes;
TY210938* Usedby;
};
struct  trope179009  {
  TNimObject Sup;
trope179009* Left;
trope179009* Right;
NI Length;
NimStringDesc* Data;
};
struct  tlistentry128022  {
  TNimObject Sup;
tlistentry128022* Prev;
tlistentry128022* Next;
};
struct  tlib210836  {
  tlistentry128022 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope179009* Name;
tnode210818* Path;
};
struct ttypeseq210850 {
  TGenericSeq Sup;
  ttype210854* data[SEQ_DECL_SIZE];
};
struct TY210949 {
  TGenericSeq Sup;
  tinstantiation210838* data[SEQ_DECL_SIZE];
};
struct tsymseq210820 {
  TGenericSeq Sup;
  tsym210848* data[SEQ_DECL_SIZE];
};
struct TY120808 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct tnodeseq210812 {
  TGenericSeq Sup;
  tnode210818* data[SEQ_DECL_SIZE];
};
struct TY210938 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct tiipairseq219272 {
  TGenericSeq Sup;
  tiipair219270 data[SEQ_DECL_SIZE];
};
struct tidpairseq210864 {
  TGenericSeq Sup;
  tidpair210862 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, objectInit)(void* dest, TNimType* typ);
N_NIMCALL(void, openpasses_265316)(tpasscontext265005** a, tsym210848* module);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(NimStringDesc*, tofullpathconsiderdirty_183807)(NI32 fileidx);
N_NIMCALL(tllstream197204*, llstreamopen_197273)(NimStringDesc* filename, NU8 mode);
N_NIMCALL(void, rawmessage_184415)(NU16 msg, NimStringDesc* arg);
N_NIMCALL(void, openparsers_241047)(tparsers241035* p, NI32 fileidx, tllstream197204* inputstream);
N_NIMCALL(void, processimplicits_265633)(TY120808* implicits, NU8 nodekind, tpasscontext265005** a);
N_NIMCALL(tnode210818*, newnodei_211140)(NU8 kind, tlineinfo182340 info);
N_NIMCALL(tnode210818*, newstrnode_211120)(NU8 kind, NimStringDesc* strval);
N_NIMCALL(void, addson_211289)(tnode210818* father, tnode210818* son);
N_NIMCALL(NIM_BOOL, processtoplevelstmt_265473)(tnode210818* n, tpasscontext265005** a);
N_NIMCALL(tnode210818*, parsetoplevelstmt_241070)(tparsers241035* p);
N_NIMCALL(void, closeparsers_241056)(tparsers241035* p);
N_NIMCALL(void, closepasses_265426)(tpasscontext265005** a);
N_NIMCALL(void, idsynchronizationpoint_209458)(NI idrange);
N_NIMCALL(void, openpassescached_265362)(tpasscontext265005** a, tsym210848* module, trodreader256030* rd);
N_NIMCALL(tnode210818*, loadinitsection_256077)(trodreader256030* r);
static N_INLINE(NI, sonslen_211251)(tnode210818* n);
N_NIMCALL(void, processtoplevelstmtcached_265532)(tnode210818* n, tpasscontext265005** a);
N_NIMCALL(void, closepassescached_265579)(tpasscontext265005** a);
N_NIMCALL(void, carrypass_265225)(tpass265017* p, tsym210848* module, TY460726 m, TY460726* Result);
TY265064 gimportmodule_265068;
TY265069 gincludefile_265073;
TY265187 gpasses_265189;
NI gpasseslen_265190;
extern TNimType NTI3411; /* RootObj */
TNimType NTI265005; /* TPassContext */
extern TNimType NTI138; /* bool */
extern TNimType NTI241035; /* TParsers */
extern tlineinfo182340 gcmdlineinfo_183006;
extern TY120808* implicitimports_171287;
extern TY120808* implicitincludes_171309;

N_NIMCALL(void, openpasses_265316)(tpasscontext265005** a, tsym210848* module) {
	{
		NI i_265333;
		NI HEX3Atmp_265342;
		NI res_265345;
		i_265333 = 0;
		HEX3Atmp_265342 = 0;
		HEX3Atmp_265342 = (NI64)(gpasseslen_265190 - 1);
		res_265345 = 0;
		{
			while (1) {
				if (!(res_265345 <= HEX3Atmp_265342)) goto LA3;
				i_265333 = res_265345;
				{
					if (!!(gpasses_265189[(i_265333)- 0].Field0 == 0)) goto LA6;
					unsureAsgnRef((void**) (&a[(i_265333)- 0]), gpasses_265189[(i_265333)- 0].Field0(module));
				}
				goto LA4;
				LA6: ;
				{
					unsureAsgnRef((void**) (&a[(i_265333)- 0]), NIM_NIL);
				}
				LA4: ;
				res_265345 += 1;
			} LA3: ;
		}
	}
}

N_NIMCALL(NIM_BOOL, processtoplevelstmt_265473)(tnode210818* n, tpasscontext265005** a) {
	NIM_BOOL result;
	tnode210818* m;
{	result = 0;
	m = n;
	{
		NI i_265492;
		NI HEX3Atmp_265512;
		NI res_265515;
		i_265492 = 0;
		HEX3Atmp_265512 = 0;
		HEX3Atmp_265512 = (NI64)(gpasseslen_265190 - 1);
		res_265515 = 0;
		{
			while (1) {
				if (!(res_265515 <= HEX3Atmp_265512)) goto LA3;
				i_265492 = res_265515;
				{
					if (!!(gpasses_265189[(i_265492)- 0].Field2 == 0)) goto LA6;
					m = gpasses_265189[(i_265492)- 0].Field2(a[(i_265492)- 0], m);
					{
						if (!m == 0) goto LA10;
						result = NIM_FALSE;
						goto BeforeRet;
					}
					LA10: ;
				}
				LA6: ;
				res_265515 += 1;
			} LA3: ;
		}
	}
	result = NIM_TRUE;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(void, processimplicits_265633)(TY120808* implicits, NU8 nodekind, tpasscontext265005** a) {
	{
		NimStringDesc* module_265652;
		NI i_265659;
		NI l_265661;
		module_265652 = 0;
		i_265659 = 0;
		l_265661 = implicits->Sup.len;
		{
			while (1) {
				tnode210818* importstmt;
				tnode210818* str;
				if (!(i_265659 < l_265661)) goto LA3;
				module_265652 = implicits->data[i_265659];
				importstmt = newnodei_211140(nodekind, gcmdlineinfo_183006);
				str = newstrnode_211120(((NU8) 20), module_265652);
				(*str).Info = gcmdlineinfo_183006;
				addson_211289(importstmt, str);
				{
					NIM_BOOL LOC6;
					LOC6 = 0;
					LOC6 = processtoplevelstmt_265473(importstmt, a);
					if (!!(LOC6)) goto LA7;
					goto LA1;
				}
				LA7: ;
				i_265659 += 1;
			} LA3: ;
		}
	} LA1: ;
}

N_NIMCALL(void, closepasses_265426)(tpasscontext265005** a) {
	tnode210818* m;
	m = NIM_NIL;
	{
		NI i_265443;
		NI HEX3Atmp_265453;
		NI res_265456;
		i_265443 = 0;
		HEX3Atmp_265453 = 0;
		HEX3Atmp_265453 = (NI64)(gpasseslen_265190 - 1);
		res_265456 = 0;
		{
			while (1) {
				if (!(res_265456 <= HEX3Atmp_265453)) goto LA3;
				i_265443 = res_265456;
				{
					if (!!(gpasses_265189[(i_265443)- 0].Field3 == 0)) goto LA6;
					m = gpasses_265189[(i_265443)- 0].Field3(a[(i_265443)- 0], m);
				}
				LA6: ;
				unsureAsgnRef((void**) (&a[(i_265443)- 0]), NIM_NIL);
				res_265456 += 1;
			} LA3: ;
		}
	}
}

N_NIMCALL(void, openpassescached_265362)(tpasscontext265005** a, tsym210848* module, trodreader256030* rd) {
	{
		NI i_265380;
		NI HEX3Atmp_265406;
		NI res_265409;
		i_265380 = 0;
		HEX3Atmp_265406 = 0;
		HEX3Atmp_265406 = (NI64)(gpasseslen_265190 - 1);
		res_265409 = 0;
		{
			while (1) {
				if (!(res_265409 <= HEX3Atmp_265406)) goto LA3;
				i_265380 = res_265409;
				{
					if (!!(gpasses_265189[(i_265380)- 0].Field1 == 0)) goto LA6;
					unsureAsgnRef((void**) (&a[(i_265380)- 0]), gpasses_265189[(i_265380)- 0].Field1(module, rd));
					{
						if (!!((a[(i_265380)- 0] == NIM_NIL))) goto LA10;
						(*a[(i_265380)- 0]).Fromcache = NIM_TRUE;
					}
					LA10: ;
				}
				goto LA4;
				LA6: ;
				{
					unsureAsgnRef((void**) (&a[(i_265380)- 0]), NIM_NIL);
				}
				LA4: ;
				res_265409 += 1;
			} LA3: ;
		}
	}
}

static N_INLINE(NI, sonslen_211251)(tnode210818* n) {
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

N_NIMCALL(void, processtoplevelstmtcached_265532)(tnode210818* n, tpasscontext265005** a) {
	tnode210818* m;
	m = n;
	{
		NI i_265550;
		NI HEX3Atmp_265559;
		NI res_265562;
		i_265550 = 0;
		HEX3Atmp_265559 = 0;
		HEX3Atmp_265559 = (NI64)(gpasseslen_265190 - 1);
		res_265562 = 0;
		{
			while (1) {
				if (!(res_265562 <= HEX3Atmp_265559)) goto LA3;
				i_265550 = res_265562;
				{
					if (!!(gpasses_265189[(i_265550)- 0].Field1 == 0)) goto LA6;
					m = gpasses_265189[(i_265550)- 0].Field2(a[(i_265550)- 0], m);
				}
				LA6: ;
				res_265562 += 1;
			} LA3: ;
		}
	}
}

N_NIMCALL(void, closepassescached_265579)(tpasscontext265005** a) {
	tnode210818* m;
	m = NIM_NIL;
	{
		NI i_265596;
		NI HEX3Atmp_265613;
		NI res_265616;
		i_265596 = 0;
		HEX3Atmp_265613 = 0;
		HEX3Atmp_265613 = (NI64)(gpasseslen_265190 - 1);
		res_265616 = 0;
		{
			while (1) {
				if (!(res_265616 <= HEX3Atmp_265613)) goto LA3;
				i_265596 = res_265616;
				{
					NIM_BOOL LOC6;
					LOC6 = 0;
					LOC6 = !(gpasses_265189[(i_265596)- 0].Field1 == 0);
					if (!(LOC6)) goto LA7;
					LOC6 = !(gpasses_265189[(i_265596)- 0].Field3 == 0);
					LA7: ;
					if (!LOC6) goto LA8;
					m = gpasses_265189[(i_265596)- 0].Field3(a[(i_265596)- 0], m);
				}
				LA8: ;
				unsureAsgnRef((void**) (&a[(i_265596)- 0]), NIM_NIL);
				res_265616 += 1;
			} LA3: ;
		}
	}
}

N_NIMCALL(void, processmodule_265056)(tsym210848* module, tllstream197204* stream, trodreader256030* rd) {
	tparsers241035 p;
	tpasscontextarray265182 a;
	tllstream197204* s;
	NI32 fileidx;
{	memset((void*)(&p), 0, sizeof(p));
	objectInit((&p), (&NTI241035));
	memset((void*)a, 0, sizeof(a));
	s = 0;
	fileidx = ((NI32) ((*module).Position));
	{
		if (!(rd == NIM_NIL)) goto LA3;
		openpasses_265316(a, module);
		{
			NimStringDesc* filename;
			if (!(stream == NIM_NIL)) goto LA7;
			filename = tofullpathconsiderdirty_183807(fileidx);
			s = llstreamopen_197273(filename, ((NU8) 0));
			{
				if (!(s == NIM_NIL)) goto LA11;
				rawmessage_184415(((NU16) 3), filename);
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
				openparsers_241047((&p), fileidx, s);
				{
					if (!!((((*module).Flags &(1<<((((NU8) 13))&31)))!=0))) goto LA18;
					processimplicits_265633(implicitimports_171287, ((NU8) 116), a);
					processimplicits_265633(implicitincludes_171309, ((NU8) 121), a);
				}
				LA18: ;
				{
					while (1) {
						tnode210818* n;
						n = parsetoplevelstmt_241070((&p));
						{
							if (!((*n).Kind == ((NU8) 1))) goto LA24;
							goto LA20;
						}
						LA24: ;
						{
							NIM_BOOL LOC28;
							LOC28 = 0;
							LOC28 = processtoplevelstmt_265473(n, a);
							if (!!(LOC28)) goto LA29;
							goto LA20;
						}
						LA29: ;
					}
				} LA20: ;
				closeparsers_241056((&p));
				{
					if (!!(((*s).Kind == ((NU8) 3)))) goto LA33;
					goto LA14;
				}
				LA33: ;
			}
		} LA14: ;
		closepasses_265426(a);
		idsynchronizationpoint_209458(1000);
	}
	goto LA1;
	LA3: ;
	{
		tnode210818* n;
		openpassescached_265362(a, module, rd);
		n = loadinitsection_256077(rd);
		{
			NI i_265797;
			NI HEX3Atmp_265807;
			NI LOC37;
			NI res_265810;
			i_265797 = 0;
			HEX3Atmp_265807 = 0;
			LOC37 = 0;
			LOC37 = sonslen_211251(n);
			HEX3Atmp_265807 = (NI64)(LOC37 - 1);
			res_265810 = 0;
			{
				while (1) {
					if (!(res_265810 <= HEX3Atmp_265807)) goto LA39;
					i_265797 = res_265810;
					processtoplevelstmtcached_265532((*n).kindU.S6.Sons->data[i_265797], a);
					res_265810 += 1;
				} LA39: ;
			}
		}
		closepassescached_265579(a);
	}
	LA1: ;
	}BeforeRet: ;
}

N_NIMCALL(void, clearpasses_265196)(void) {
	gpasseslen_265190 = 0;
}

N_NIMCALL(void, registerpass_265204)(tpass265017* p) {
	gpasses_265189[(gpasseslen_265190)- 0] = (*p);
	gpasseslen_265190 += 1;
}

N_NIMCALL(NIM_BOOL, astneeded_265094)(tsym210848* s) {
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

N_NIMCALL(void, carrypass_265225)(tpass265017* p, tsym210848* module, TY460726 m, TY460726* Result) {
	tpasscontext265005* c;
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

N_NIMCALL(void, carrypasses_265247)(tnode210818* nodes, tsym210848* module, tpass265017* passes, NI passesLen0) {
	TY460726 passdata;
	memset((void*)(&passdata), 0, sizeof(passdata));
	passdata.Field0 = nodes;
	{
		tpass265017 pass_265295;
		NI i_265300;
		memset((void*)(&pass_265295), 0, sizeof(pass_265295));
		i_265300 = 0;
		{
			while (1) {
				TY460726 LOC4;
				if (!(i_265300 < passesLen0)) goto LA3;
				pass_265295 = passes[i_265300];
				memset((void*)(&LOC4), 0, sizeof(LOC4));
				carrypass_265225((&pass_265295), module, passdata, (&LOC4));
				passdata.Field0 = LOC4.Field0;
				passdata.Field1 = LOC4.Field1;
				i_265300 += 1;
			} LA3: ;
		}
	}
}
NIM_EXTERNC N_NOINLINE(void, compiler_passesInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_passesDatInit)(void) {
static TNimNode TMP837[1];
NTI265005.size = sizeof(tpasscontext265005);
NTI265005.kind = 17;
NTI265005.base = (&NTI3411);
NTI265005.flags = 1;
TMP837[0].kind = 1;
TMP837[0].offset = offsetof(tpasscontext265005, Fromcache);
TMP837[0].typ = (&NTI138);
TMP837[0].name = "fromCache";
NTI265005.node = &TMP837[0];
}
