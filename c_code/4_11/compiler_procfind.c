/* Generated by Nim Compiler v0.14.3 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
typedef struct Tsym292834 Tsym292834;
typedef struct Tcontext344020 Tcontext344020;
typedef struct Tscope292828 Tscope292828;
typedef struct Tidentiter299063 Tidentiter299063;
typedef struct Tident199010 Tident199010;
typedef struct Tstrtable292806 Tstrtable292806;
typedef struct Tsymseq292804 Tsymseq292804;
typedef struct Tidobj199004 Tidobj199004;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq292836 Ttypeseq292836;
typedef struct TY292929 TY292929;
typedef struct Ttype292840 Ttype292840;
typedef struct Tlineinfo191336 Tlineinfo191336;
typedef struct Tnode292802 Tnode292802;
typedef struct Tloc292816 Tloc292816;
typedef struct Ropeobj178006 Ropeobj178006;
typedef struct Tlib292820 Tlib292820;
typedef struct TY292960 TY292960;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tpasscontext341002 Tpasscontext341002;
typedef struct Tproccon344008 Tproccon344008;
typedef struct Intset268030 Intset268030;
typedef struct Trunk268026 Trunk268026;
typedef struct Trunkseq268028 Trunkseq268028;
typedef struct Tlinkedlist147013 Tlinkedlist147013;
typedef struct Tlistentry147007 Tlistentry147007;
typedef struct Tidtable292850 Tidtable292850;
typedef struct Tidpairseq292848 Tidpairseq292848;
typedef struct Tctx343035 Tctx343035;
typedef struct TY344144 TY344144;
typedef struct Tinstantiation292824 Tinstantiation292824;
typedef struct Tnodeseq292796 Tnodeseq292796;
typedef struct TY292961 TY292961;
typedef struct Tidpair292846 Tidpair292846;
typedef struct TY343241 TY343241;
typedef struct TY192083 TY192083;
typedef struct PprocHEX3Aobjecttype343220 PprocHEX3Aobjecttype343220;
typedef struct TY343260 TY343260;
typedef struct Tinstantiationpair344010 Tinstantiationpair344010;
typedef struct TY343221 TY343221;
typedef struct TY343226 TY343226;
typedef struct TY343261 TY343261;
typedef struct Vmargs343029 Vmargs343029;
typedef struct Tblock343017 Tblock343017;
typedef struct TY343201 TY343201;
struct  Tidentiter299063  {
NI h;
Tident199010* name;
};
struct  Tstrtable292806  {
NI counter;
Tsymseq292804* data;
};
struct  Tscope292828  {
NI depthlevel;
Tstrtable292806 symbols;
Tscope292828* parent;
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
struct  Tidobj199004  {
  TNimObject Sup;
NI id;
};
typedef NU8 Tsymkind292435;
typedef NU16 Tmagic292524;
struct  Tlineinfo191336  {
NI16 line;
NI16 col;
NI32 fileindex;
};
typedef NU32 Tsymflag292184Set;
typedef NU32 Toption169009Set;
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
typedef NU8 Ttypecmpflag324429Set;
typedef NU8 Tparamsequality320060;
typedef NU8 Ttypekind292244;
typedef NU8 Tcallingconvention292002;
typedef NU32 Ttypeflag292431Set;
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
typedef NU8 Tsymflag292184;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NimStringDesc* TY193153[2];
typedef NU8 Tprefereddesc320011;
typedef NU16 Tmsgkind191002;
struct  Tident199010  {
  Tidobj199004 Sup;
NimStringDesc* s;
Tident199010* next;
NI h;
};
struct  Tpasscontext341002  {
  TNimObject Sup;
NIM_BOOL fromcache;
};
struct  Intset268030  {
NI counter;
NI max;
Trunk268026* head;
Trunkseq268028* data;
};
struct  Tlinkedlist147013  {
Tlistentry147007* head;
Tlistentry147007* tail;
NI counter;
};
struct  Tidtable292850  {
NI counter;
Tidpairseq292848* data;
};
typedef N_NIMCALL_PTR(Tnode292802*, TY344075) (Tcontext344020* c0, Tnode292802* n0);
typedef NU16 Texprflag344012Set;
typedef N_NIMCALL_PTR(Tnode292802*, TY344080) (Tcontext344020* c0, Tnode292802* n0, Texprflag344012Set flags0);
typedef N_NIMCALL_PTR(Tnode292802*, TY344088) (Tcontext344020* c0, Tnode292802* n0, Texprflag344012Set flags0);
typedef N_NIMCALL_PTR(Tnode292802*, TY344096) (Tcontext344020* c0, Tnode292802* n0);
typedef N_NIMCALL_PTR(Tnode292802*, TY344101) (Tcontext344020* c0, Tnode292802* n0, Texprflag344012Set flags0);
typedef N_NIMCALL_PTR(Tnode292802*, TY344109) (Tcontext344020* c0, Tnode292802* n0);
typedef NU32 Tsymkind292435Set;
typedef N_NIMCALL_PTR(Tnode292802*, TY344114) (Tcontext344020* c0, Tnode292802* n0, Tnode292802* norig0, Tsymkind292435Set filter0);
typedef N_NIMCALL_PTR(Ttype292840*, TY344121) (Tcontext344020* c0, Tnode292802* n0, Ttype292840* prev0);
typedef struct {
N_NIMCALL_PTR(Tnode292802*, ClPrc) (Tcontext344020* c0, Tidtable292850 pt0, Tnode292802* n0, void* ClEnv);
void* ClEnv;
} TY344127;
typedef struct {
N_NIMCALL_PTR(Tsym292834*, ClPrc) (Tcontext344020* c0, Tsym292834* fn0, Tidtable292850 pt0, Tlineinfo191336 info0, void* ClEnv);
void* ClEnv;
} TY344133;
typedef NU8 Ttypeattachedop344016;
typedef N_NIMCALL_PTR(Tsym292834*, TY344150) (Tcontext344020* c0, Tsym292834* dc0, Ttype292840* t0, Tlineinfo191336 info0, Ttypeattachedop344016 op0, NI col0);
struct  Tcontext344020  {
  Tpasscontext341002 Sup;
Tsym292834* module;
Tscope292828* currentscope;
Tscope292828* importtable;
Tscope292828* toplevelscope;
Tproccon344008* p;
Tsymseq292804* friendmodules;
NI instcounter;
Intset268030 ambiguoussymbols;
NI intypeclass;
NI ingenericcontext;
NI inunrolledcontext;
NI compilescontextid;
NI compilescontextidgenerator;
NI ingenericinst;
Tsymseq292804* converters;
Tsymseq292804* patterns;
Tlinkedlist147013 optionstack;
Tidtable292850 symmapping;
Tlinkedlist147013 libs;
TY344075 semconstexpr;
TY344080 semexpr;
TY344088 semtryexpr;
TY344096 semtryconstexpr;
TY344101 semoperand;
TY344109 semconstboolexpr;
TY344114 semoverloadedcall;
TY344121 semtypenode;
TY344127 seminferredlambda;
TY344133 semgenerateinstance;
Intset268030 includedfiles;
Tstrtable292806 userpragmas;
Tctx343035* evalcontext;
Intset268030 unknownidents;
TY344144* generics;
NI topstmts;
NI lastgenericidx;
NI hloloopdetector;
NI inparallelstmt;
TY344150 insttypeboundop;
Tident199010* selfname;
Tstrtable292806 signatures;
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
struct TY292961 {
NI Field0;
Tsym292834* Field1;
};
struct  Tproccon344008  {
Tsym292834* owner;
Tsym292834* resultsym;
Tsym292834* selfsym;
NI nestedloopcounter;
NI nestedblockcounter;
NI intrystmt;
Tproccon344008* next;
NIM_BOOL wasforwarded;
Tnode292802* bracketexpr;
};
typedef NI TY29419[8];
struct  Trunk268026  {
Trunk268026* next;
NI key;
TY29419 bits;
};
struct  Tidpair292846  {
Tidobj199004* key;
TNimObject* val;
};
typedef NU8 Tevalmode343019;
typedef NU8 Tsandboxflag343021Set;
struct  Tctx343035  {
  Tpasscontext341002 Sup;
TY343241* code;
TY192083* debug;
Tnode292802* globals;
Tnode292802* constants;
Ttypeseq292836* types;
Tnode292802* currentexceptiona;
Tnode292802* currentexceptionb;
NI exceptioninstr;
PprocHEX3Aobjecttype343220* prc;
Tsym292834* module;
Tnode292802* callsite;
Tevalmode343019 mode;
Tsandboxflag343021Set features;
NIM_BOOL traceactive;
NI loopiterations;
Tlineinfo191336 comesfromheuristic;
TY343260* callbacks;
NimStringDesc* errorflag;
};
struct  Tinstantiationpair344010  {
Tsym292834* genericsym;
Tinstantiation292824* inst;
};
struct  Tinstantiation292824  {
Tsym292834* sym;
Ttypeseq292836* concretetypes;
NI compilesid;
};
typedef NU8 Tslotkind343025;
struct TY343226 {
NIM_BOOL Field0;
Tslotkind343025 Field1;
};
typedef TY343226 TY343229[256];
struct  PprocHEX3Aobjecttype343220  {
TY343221* blocks;
Tsym292834* sym;
TY343229 slots;
NI maxslots;
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (Vmargs343029* args0, void* ClEnv);
void* ClEnv;
} Vmcallback343031;
struct TY343261 {
NimStringDesc* Field0;
Vmcallback343031 Field1;
};
struct  Tblock343017  {
Tsym292834* label;
TY343201* fixups;
};
struct  Vmargs343029  {
NI ra;
NI rb;
NI rc;
void* slots;
Tnode292802* currentexception;
};
struct Tsymseq292804 {
  TGenericSeq Sup;
  Tsym292834* data[SEQ_DECL_SIZE];
};
struct Ttypeseq292836 {
  TGenericSeq Sup;
  Ttype292840* data[SEQ_DECL_SIZE];
};
struct TY292929 {
  TGenericSeq Sup;
  Tinstantiation292824* data[SEQ_DECL_SIZE];
};
struct TY292960 {
  TGenericSeq Sup;
  TY292961 data[SEQ_DECL_SIZE];
};
struct Trunkseq268028 {
  TGenericSeq Sup;
  Trunk268026* data[SEQ_DECL_SIZE];
};
struct Tidpairseq292848 {
  TGenericSeq Sup;
  Tidpair292846 data[SEQ_DECL_SIZE];
};
struct TY344144 {
  TGenericSeq Sup;
  Tinstantiationpair344010 data[SEQ_DECL_SIZE];
};
struct Tnodeseq292796 {
  TGenericSeq Sup;
  Tnode292802* data[SEQ_DECL_SIZE];
};
struct TY343241 {
  TGenericSeq Sup;
  NU32 data[SEQ_DECL_SIZE];
};
struct TY192083 {
  TGenericSeq Sup;
  Tlineinfo191336 data[SEQ_DECL_SIZE];
};
struct TY343260 {
  TGenericSeq Sup;
  TY343261 data[SEQ_DECL_SIZE];
};
struct TY343221 {
  TGenericSeq Sup;
  Tblock343017 data[SEQ_DECL_SIZE];
};
struct TY343201 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
N_NIMCALL(Tsym292834*, searchforprocnew_356156_2905935102)(Tcontext344020* c0, Tscope292828* scope0, Tsym292834* fn0);
N_NIMCALL(Tsym292834*, initidentiter_299066_2984716966)(Tidentiter299063* ti0, Tstrtable292806 tab0, Tident199010* s0);
N_NIMCALL(NIM_BOOL, sametype_324633_3876443242)(Ttype292840* a0, Ttype292840* b0, Ttypecmpflag324429Set flags0);
N_NIMCALL(Tparamsequality320060, equalparams_320064_3876443242)(Tnode292802* a0, Tnode292802* b0);
N_NIMCALL(NimStringDesc*, nsuFormatOpenArray)(NimStringDesc* formatstr0, NimStringDesc** a0, NI a0Len0);
N_NIMCALL(NimStringDesc*, getprocheader_320335_3876443242)(Tsym292834* sym0, Tprefereddesc320011 prefer0);
N_NIMCALL(NimStringDesc*, HEX24_192431_155036129)(Tlineinfo191336 info0);
N_NIMCALL(void, localerror_196080_155036129)(Tlineinfo191336 info0, Tmsgkind191002 msg0, NimStringDesc* arg0);
N_NIMCALL(Tsym292834*, nextidentiter_299072_2984716966)(Tidentiter299063* ti0, Tstrtable292806 tab0);
STRING_LITERAL(T2905935102_2, "public implementation \'$1\' has non-public forward declaration i"
"n $2", 67);

N_NIMCALL(Tsym292834*, searchforprocnew_356156_2905935102)(Tcontext344020* c0, Tscope292828* scope0, Tsym292834* fn0) {
	Tsym292834* result0;
	Tidentiter299063 it0;
{	result0 = (Tsym292834*)0;
	memset((void*)(&it0), 0, sizeof(it0));
	result0 = initidentiter_299066_2984716966((&it0), (*scope0).symbols, (*fn0).name);
	{
		while (1) {
			if (!!((result0 == NIM_NIL))) goto LA2;
			{
				NIM_BOOL LOC5;
				Tparamsequality320060 LOC9;
				LOC5 = (NIM_BOOL)0;
				LOC5 = ((258048 &(1U<<((NU)((*result0).kind)&31U)))!=0);
				if (!(LOC5)) goto LA6;
				LOC5 = sametype_324633_3876443242((*result0).typ, (*fn0).typ, 30);
				LA6: ;
				if (!LOC5) goto LA7;
				LOC9 = (Tparamsequality320060)0;
				LOC9 = equalparams_320064_3876443242((*(*result0).typ).n, (*(*fn0).typ).n);
				switch (LOC9) {
				case ((Tparamsequality320060) 1):
				{
					{
						NIM_BOOL LOC13;
						NimStringDesc* message0;
						TY193153 LOC17;
						LOC13 = (NIM_BOOL)0;
						LOC13 = !((((*result0).flags &(1U<<((NU)(((Tsymflag292184) 1))&31U)))!=0));
						if (!(LOC13)) goto LA14;
						LOC13 = (((*fn0).flags &(1U<<((NU)(((Tsymflag292184) 1))&31U)))!=0);
						LA14: ;
						if (!LOC13) goto LA15;
						memset((void*)LOC17, 0, sizeof(LOC17));
						LOC17[0] = getprocheader_320335_3876443242(result0, ((Tprefereddesc320011) 0));
						LOC17[1] = HEX24_192431_155036129((*result0).info);
						message0 = nsuFormatOpenArray(((NimStringDesc*) &T2905935102_2), LOC17, 2);
						localerror_196080_155036129((*fn0).info, ((Tmsgkind191002) 4), message0);
					}
					LA15: ;
					goto BeforeRet;
				}
				break;
				case ((Tparamsequality320060) 2):
				{
					localerror_196080_155036129((*fn0).info, ((Tmsgkind191002) 70), (*(*fn0).name).s);
					goto BeforeRet;
				}
				break;
				case ((Tparamsequality320060) 0):
				{
				}
				break;
				}
			}
			LA7: ;
			result0 = nextidentiter_299072_2984716966((&it0), (*scope0).symbols);
		} LA2: ;
	}
	result0 = NIM_NIL;
	goto BeforeRet;
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(Tsym292834*, searchforproc_356225_2905935102)(Tcontext344020* c0, Tscope292828* scope0, Tsym292834* fn0) {
	Tsym292834* result0;
	result0 = (Tsym292834*)0;
	result0 = searchforprocnew_356156_2905935102(c0, scope0, fn0);
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, compiler_procfindInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_procfindDatInit000)(void) {
}

