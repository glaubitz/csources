/* Generated by Nim Compiler v0.14.3 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tnode292802 Tnode292802;
typedef struct Tcontext344020 Tcontext344020;
typedef struct Ttype292840 Ttype292840;
typedef struct Tlineinfo191336 Tlineinfo191336;
typedef struct Tsym292834 Tsym292834;
typedef struct Tident199010 Tident199010;
typedef struct Tnodeseq292796 Tnodeseq292796;
typedef struct Tidobj199004 Tidobj199004;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq292836 Ttypeseq292836;
typedef struct TY292960 TY292960;
typedef struct Tloc292816 Tloc292816;
typedef struct Ropeobj178006 Ropeobj178006;
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
typedef struct Tscope292828 Tscope292828;
typedef struct Tpasscontext341002 Tpasscontext341002;
typedef struct Tproccon344008 Tproccon344008;
typedef struct Tsymseq292804 Tsymseq292804;
typedef struct Intset268030 Intset268030;
typedef struct Trunk268026 Trunk268026;
typedef struct Trunkseq268028 Trunkseq268028;
typedef struct Tlinkedlist147013 Tlinkedlist147013;
typedef struct Tlistentry147007 Tlistentry147007;
typedef struct Tidtable292850 Tidtable292850;
typedef struct Tidpairseq292848 Tidpairseq292848;
typedef struct Tstrtable292806 Tstrtable292806;
typedef struct Tctx343035 Tctx343035;
typedef struct TY344144 TY344144;
typedef struct Ttabiter299050 Ttabiter299050;
typedef struct TY292929 TY292929;
typedef struct Tlib292820 Tlib292820;
typedef struct TY292961 TY292961;
typedef struct Basechunk29437 Basechunk29437;
typedef struct Freecell29429 Freecell29429;
typedef struct Tidpair292846 Tidpair292846;
typedef struct TY343241 TY343241;
typedef struct TY192086 TY192086;
typedef struct PprocHEX3Aobjecttype343220 PprocHEX3Aobjecttype343220;
typedef struct TY343260 TY343260;
typedef struct Tinstantiationpair344010 Tinstantiationpair344010;
typedef struct Tinstantiation292824 Tinstantiation292824;
typedef struct TY343221 TY343221;
typedef struct TY343226 TY343226;
typedef struct TY343261 TY343261;
typedef struct Vmargs343029 Vmargs343029;
typedef struct Tblock343017 Tblock343017;
typedef struct TY343201 TY343201;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef N_NIMCALL_PTR(Tnode292802*, Transformation479003) (Tcontext344020* c0, Tnode292802* n0);
typedef NU8 Ttypekind292244;
typedef NU8 Tnodekind292020;
struct  Tlineinfo191336  {
NI16 line;
NI16 col;
NI32 fileindex;
};
typedef NU16 Tnodeflag292427Set;
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
struct  Tstrtable292806  {
NI counter;
Tsymseq292804* data;
};
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
struct  Tscope292828  {
NI depthlevel;
Tstrtable292806 symbols;
Tscope292828* parent;
};
struct  Ttabiter299050  {
NI h;
};
typedef NU8 Tsymkind292435;
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
typedef NU64 Ttypekind292244Set;
struct  Tident199010  {
  Tidobj199004 Sup;
NimStringDesc* s;
Tident199010* next;
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
struct  Trunk268026  {
Trunk268026* next;
NI key;
TY29418 bits;
};
struct  Tlistentry147007  {
  TNimObject Sup;
Tlistentry147007* prev;
Tlistentry147007* next;
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
TY192086* debug;
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
typedef NU8 Tlibkind292818;
struct  Tlib292820  {
  Tlistentry147007 Sup;
Tlibkind292818 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj178006* name;
Tnode292802* path;
};
struct  Freecell29429  {
Freecell29429* next;
NI zerofield;
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
struct  Tinstantiation292824  {
Tsym292834* sym;
Ttypeseq292836* concretetypes;
NI compilesid;
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
struct Tsymseq292804 {
  TGenericSeq Sup;
  Tsym292834* data[SEQ_DECL_SIZE];
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
struct TY292929 {
  TGenericSeq Sup;
  Tinstantiation292824* data[SEQ_DECL_SIZE];
};
struct TY343241 {
  TGenericSeq Sup;
  NU32 data[SEQ_DECL_SIZE];
};
struct TY192086 {
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
N_NIMCALL(void, registerplugin_479101_1104897005)(NimStringDesc* package0, NimStringDesc* module0, NimStringDesc* fn0, Transformation479003 t0);
N_NIMCALL(Tnode292802*, semlocals_480003_4183469335)(Tcontext344020* c0, Tnode292802* n0);
N_NIMCALL(Ttype292840*, newtypes_344197_893308950)(Ttypekind292244 kind0, Tcontext344020* c0);
N_NIMCALL(Tnode292802*, newnodeit_294801_850551059)(Tnodekind292020 kind0, Tlineinfo191336 info0, Ttype292840* typ0);
N_NIMCALL(Tnode292802*, newnodei_294197_850551059)(Tnodekind292020 kind0, Tlineinfo191336 info0);
static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0);
static N_INLINE(Cell47304*, usrtocell_51440_1689653243)(void* usr0);
static N_INLINE(void, rtladdzct_52601_1689653243)(Cell47304* c0);
N_NOINLINE(void, addzct_51417_1689653243)(Cellseq47320* s0, Cell47304* c0);
N_NIMCALL(Tsym292834*, inittabiter_299052_2984716966)(Ttabiter299050* ti0, Tstrtable292806 tab0);
N_NIMCALL(Ttype292840*, skiptypes_296099_850551059)(Ttype292840* t0, Ttypekind292244Set kinds0);
N_NIMCALL(Tsym292834*, newsym_293684_850551059)(Tsymkind292435 symkind0, Tident199010* name0, Tsym292834* owner0, Tlineinfo191336 info0);
N_NIMCALL(Tsym292834*, getcurrowner_344222_893308950)(void);
N_NIMCALL(void, addson_294807_850551059)(Tnode292802* father0, Tnode292802* son0);
N_NIMCALL(Tnode292802*, newsymnode_294183_850551059)(Tsym292834* sym0);
N_NIMCALL(void, addsonskipintlit_338678_3937434831)(Ttype292840* father0, Ttype292840* son0);
N_NIMCALL(Tnode292802*, newsymnode_294190_850551059)(Tsym292834* sym0, Tlineinfo191336 info0);
static N_INLINE(Tnode292802*, newderef_433004_2218250499)(Tnode292802* n0);
N_NIMCALL(void, add_293136_850551059)(Tnode292802* father0, Tnode292802* son0);
N_NIMCALL(Tsym292834*, nextiter_299057_2984716966)(Ttabiter299050* ti0, Tstrtable292806 tab0);
STRING_LITERAL(T4183469335_2, "stdlib", 6);
STRING_LITERAL(T4183469335_3, "system", 6);
STRING_LITERAL(T4183469335_4, "locals", 6);
extern Gcheap49818 gch_49858_1689653243;

static N_INLINE(Cell47304*, usrtocell_51440_1689653243)(void* usr0) {
	Cell47304* result0;
	result0 = (Cell47304*)0;
	result0 = ((Cell47304*) ((NI)((NU32)(((NI) (usr0))) - (NU32)(((NI)sizeof(Cell47304))))));
	return result0;
}

static N_INLINE(void, rtladdzct_52601_1689653243)(Cell47304* c0) {
	addzct_51417_1689653243((&gch_49858_1689653243.zct), c0);
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

static N_INLINE(Tnode292802*, newderef_433004_2218250499)(Tnode292802* n0) {
	Tnode292802* result0;
	result0 = (Tnode292802*)0;
	result0 = newnodeit_294801_850551059(((Tnodekind292020) 65), (*n0).info, (*(*n0).typ).sons->data[((NI) 0)]);
	addson_294807_850551059(result0, n0);
	return result0;
}

N_NIMCALL(Tnode292802*, semlocals_480003_4183469335)(Tcontext344020* c0, Tnode292802* n0) {
	Tnode292802* result0;
	NI counter0;
	Ttype292840* tupletype0;
	result0 = (Tnode292802*)0;
	counter0 = ((NI) 0);
	tupletype0 = newtypes_344197_893308950(((Ttypekind292244) 18), c0);
	result0 = newnodeit_294801_850551059(((Tnodekind292020) 37), (*n0).info, tupletype0);
	asgnRefNoCycle((void**) (&(*tupletype0).n), newnodei_294197_850551059(((Tnodekind292020) 138), (*n0).info));
	{
		Tscope292828* scope_480010_4183469335;
		Tscope292828* HEX3Atmp_480083_4183469335;
		Tscope292828* current_480086_4183469335;
		scope_480010_4183469335 = (Tscope292828*)0;
		HEX3Atmp_480083_4183469335 = (Tscope292828*)0;
		HEX3Atmp_480083_4183469335 = (*c0).currentscope;
		current_480086_4183469335 = HEX3Atmp_480083_4183469335;
		{
			while (1) {
				if (!!((current_480086_4183469335 == NIM_NIL))) goto LA3;
				scope_480010_4183469335 = current_480086_4183469335;
				{
					if (!(scope_480010_4183469335 == (*c0).toplevelscope)) goto LA6;
					goto LA1;
				}
				LA6: ;
				{
					Tsym292834* it_480022_4183469335;
					Tstrtable292806 HEX3Atmp_480077_4183469335;
					Ttabiter299050 it_480080_4183469335;
					Tsym292834* s_480082_4183469335;
					it_480022_4183469335 = (Tsym292834*)0;
					memset((void*)(&HEX3Atmp_480077_4183469335), 0, sizeof(HEX3Atmp_480077_4183469335));
					HEX3Atmp_480077_4183469335.counter = (*scope_480010_4183469335).symbols.counter;
					HEX3Atmp_480077_4183469335.data = (*scope_480010_4183469335).symbols.data;
					memset((void*)(&it_480080_4183469335), 0, sizeof(it_480080_4183469335));
					s_480082_4183469335 = inittabiter_299052_2984716966((&it_480080_4183469335), HEX3Atmp_480077_4183469335);
					{
						while (1) {
							if (!!((s_480082_4183469335 == NIM_NIL))) goto LA10;
							it_480022_4183469335 = s_480082_4183469335;
							{
								NIM_BOOL LOC13;
								Ttype292840* LOC15;
								Tsym292834* field0;
								Tsym292834* LOC18;
								Tnode292802* LOC19;
								Tnode292802* a0;
								LOC13 = (NIM_BOOL)0;
								LOC13 = ((1051400 &(1U<<((NU)((*it_480022_4183469335).kind)&31U)))!=0);
								if (!(LOC13)) goto LA14;
								LOC15 = (Ttype292840*)0;
								LOC15 = skiptypes_296099_850551059((*it_480022_4183469335).typ, 8390656);
								LOC13 = !(((*LOC15).kind == ((Ttypekind292244) 48) || (*LOC15).kind == ((Ttypekind292244) 27) || (*LOC15).kind == ((Ttypekind292244) 8) || (*LOC15).kind == ((Ttypekind292244) 59) || (*LOC15).kind == ((Ttypekind292244) 6) || (*LOC15).kind == ((Ttypekind292244) 7) || (*LOC15).kind == ((Ttypekind292244) 3)));
								LA14: ;
								if (!LOC13) goto LA16;
								LOC18 = (Tsym292834*)0;
								LOC18 = getcurrowner_344222_893308950();
								field0 = newsym_293684_850551059(((Tsymkind292435) 18), (*it_480022_4183469335).name, LOC18, (*n0).info);
								asgnRefNoCycle((void**) (&(*field0).typ), skiptypes_296099_850551059((*it_480022_4183469335).typ, 8390656));
								(*field0).position = counter0;
								counter0 += ((NI) 1);
								LOC19 = (Tnode292802*)0;
								LOC19 = newsymnode_294183_850551059(field0);
								addson_294807_850551059((*tupletype0).n, LOC19);
								addsonskipintlit_338678_3937434831(tupletype0, (*field0).typ);
								a0 = newsymnode_294190_850551059(it_480022_4183469335, (*result0).info);
								{
									Ttype292840* LOC22;
									LOC22 = (Ttype292840*)0;
									LOC22 = skiptypes_296099_850551059((*it_480022_4183469335).typ, 2048);
									if (!((*LOC22).kind == ((Ttypekind292244) 23))) goto LA23;
									a0 = newderef_433004_2218250499(a0);
								}
								LA23: ;
								add_293136_850551059(result0, a0);
							}
							LA16: ;
							s_480082_4183469335 = nextiter_299057_2984716966((&it_480080_4183469335), HEX3Atmp_480077_4183469335);
						} LA10: ;
					}
				}
				current_480086_4183469335 = (*current_480086_4183469335).parent;
			} LA3: ;
		}
	} LA1: ;
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, compiler_localsInit000)(void) {
	registerplugin_479101_1104897005(((NimStringDesc*) &T4183469335_2), ((NimStringDesc*) &T4183469335_3), ((NimStringDesc*) &T4183469335_4), semlocals_480003_4183469335);
}

NIM_EXTERNC N_NOINLINE(void, compiler_localsDatInit000)(void) {
}

