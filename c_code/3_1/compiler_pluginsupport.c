/* Generated by Nim Compiler v0.14.3 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
typedef struct PluginHEX3Aobjecttype480009 PluginHEX3Aobjecttype480009;
typedef struct Tident200010 Tident200010;
typedef struct Tnode293802 Tnode293802;
typedef struct Tcontext345020 Tcontext345020;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Cell47305 Cell47305;
typedef struct Cellseq47321 Cellseq47321;
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
typedef struct Cellset47317 Cellset47317;
typedef struct Pagedesc47313 Pagedesc47313;
typedef struct Tsym293834 Tsym293834;
typedef struct Tidobj200004 Tidobj200004;
typedef struct TNimObject TNimObject;
typedef struct Ttypeseq293836 Ttypeseq293836;
typedef struct TY293929 TY293929;
typedef struct Tstrtable293806 Tstrtable293806;
typedef struct Tsymseq293804 Tsymseq293804;
typedef struct Ttype293840 Ttype293840;
typedef struct Tlineinfo192336 Tlineinfo192336;
typedef struct Tloc293816 Tloc293816;
typedef struct Ropeobj179006 Ropeobj179006;
typedef struct Tlib293820 Tlib293820;
typedef struct Tnodeseq293796 Tnodeseq293796;
typedef struct Tpasscontext342002 Tpasscontext342002;
typedef struct Tscope293828 Tscope293828;
typedef struct Tproccon345008 Tproccon345008;
typedef struct Intset269030 Intset269030;
typedef struct Trunk269026 Trunk269026;
typedef struct Trunkseq269028 Trunkseq269028;
typedef struct Tlinkedlist147013 Tlinkedlist147013;
typedef struct Tlistentry147007 Tlistentry147007;
typedef struct Tidtable293850 Tidtable293850;
typedef struct Tidpairseq293848 Tidpairseq293848;
typedef struct Tctx344035 Tctx344035;
typedef struct TY345144 TY345144;
typedef struct Basechunk29437 Basechunk29437;
typedef struct Freecell29429 Freecell29429;
typedef struct Tinstantiation293824 Tinstantiation293824;
typedef struct TY293960 TY293960;
typedef struct Tidpair293846 Tidpair293846;
typedef struct TY344241 TY344241;
typedef struct TY193086 TY193086;
typedef struct PprocHEX3Aobjecttype344220 PprocHEX3Aobjecttype344220;
typedef struct TY344260 TY344260;
typedef struct Tinstantiationpair345010 Tinstantiationpair345010;
typedef struct TY293961 TY293961;
typedef struct TY344221 TY344221;
typedef struct TY344226 TY344226;
typedef struct TY344261 TY344261;
typedef struct Vmargs344029 Vmargs344029;
typedef struct Tblock344017 Tblock344017;
typedef struct TY344201 TY344201;
typedef N_NIMCALL_PTR(Tnode293802*, Transformation480003) (Tcontext345020* c0, Tnode293802* n0);
struct  PluginHEX3Aobjecttype480009  {
Tident200010* fn;
Tident200010* module;
Tident200010* package;
Transformation480003 t;
PluginHEX3Aobjecttype480009* next;
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
typedef NU8 Tnimnodekind3405;
struct  TNimNode  {
Tnimnodekind3405 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef N_NIMCALL_PTR(void, Globalmarkerproc55802) (void);
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Cell47305  {
NI refcount;
TNimType* typ;
};
struct  Cellseq47321  {
NI len;
NI cap;
Cell47305** d;
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
struct  Cellset47317  {
NI counter;
NI max;
Pagedesc47313* head;
Pagedesc47313** data;
};
struct  Gcheap49818  {
Gcstack49816* stack;
void* stackbottom;
NI cyclethreshold;
Cellseq47321 zct;
Cellseq47321 decstack;
Cellseq47321 tempstack;
NI recgclock;
Memregion29485 region;
Gcstat49814 stat;
Cellset47317 marked;
Cellseq47321 additionalroots;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  Tidobj200004  {
  TNimObject Sup;
NI id;
};
typedef NU8 Tsymkind293435;
struct  Tstrtable293806  {
NI counter;
Tsymseq293804* data;
};
typedef NU16 Tmagic293524;
struct  Tlineinfo192336  {
NI16 line;
NI16 col;
NI32 fileindex;
};
typedef NU32 Tsymflag293184Set;
typedef NU32 Toption170009Set;
typedef NU8 Tlockind293808;
typedef NU8 Tstorageloc293812;
typedef NU16 Tlocflag293810Set;
struct  Tloc293816  {
Tlockind293808 k;
Tstorageloc293812 s;
Tlocflag293810Set flags;
Ttype293840* t;
Ropeobj179006* r;
};
struct  Tsym293834  {
  Tidobj200004 Sup;
Tsymkind293435 kind;
union{
struct {Ttypeseq293836* typeinstcache;
} S1;
struct {TY293929* procinstcache;
Tsym293834* gcunsafetyreason;
} S2;
struct {TY293929* usedgenerics;
Tstrtable293806 tab;
} S3;
struct {Tsym293834* guard;
NI bitsize;
} S4;
} kindU;
Tmagic293524 magic;
Ttype293840* typ;
Tident200010* name;
Tlineinfo192336 info;
Tsym293834* owner;
Tsymflag293184Set flags;
Tnode293802* ast;
Toption170009Set options;
NI position;
NI offset;
Tloc293816 loc;
Tlib293820* annex;
Tnode293802* constraint;
};
struct  Tident200010  {
  Tidobj200004 Sup;
NimStringDesc* s;
Tident200010* next;
NI h;
};
typedef NU16 Tnodeflag293427Set;
typedef NU8 Tnodekind293020;
struct  Tnode293802  {
Ttype293840* typ;
Tlineinfo192336 info;
Tnodeflag293427Set flags;
Tnodekind293020 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym293834* sym;
} S4;
struct {Tident200010* ident;
} S5;
struct {Tnodeseq293796* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
struct  Tpasscontext342002  {
  TNimObject Sup;
NIM_BOOL fromcache;
};
struct  Intset269030  {
NI counter;
NI max;
Trunk269026* head;
Trunkseq269028* data;
};
struct  Tlinkedlist147013  {
Tlistentry147007* head;
Tlistentry147007* tail;
NI counter;
};
struct  Tidtable293850  {
NI counter;
Tidpairseq293848* data;
};
typedef N_NIMCALL_PTR(Tnode293802*, TY345075) (Tcontext345020* c0, Tnode293802* n0);
typedef NU16 Texprflag345012Set;
typedef N_NIMCALL_PTR(Tnode293802*, TY345080) (Tcontext345020* c0, Tnode293802* n0, Texprflag345012Set flags0);
typedef N_NIMCALL_PTR(Tnode293802*, TY345088) (Tcontext345020* c0, Tnode293802* n0, Texprflag345012Set flags0);
typedef N_NIMCALL_PTR(Tnode293802*, TY345096) (Tcontext345020* c0, Tnode293802* n0);
typedef N_NIMCALL_PTR(Tnode293802*, TY345101) (Tcontext345020* c0, Tnode293802* n0, Texprflag345012Set flags0);
typedef N_NIMCALL_PTR(Tnode293802*, TY345109) (Tcontext345020* c0, Tnode293802* n0);
typedef NU32 Tsymkind293435Set;
typedef N_NIMCALL_PTR(Tnode293802*, TY345114) (Tcontext345020* c0, Tnode293802* n0, Tnode293802* norig0, Tsymkind293435Set filter0);
typedef N_NIMCALL_PTR(Ttype293840*, TY345121) (Tcontext345020* c0, Tnode293802* n0, Ttype293840* prev0);
typedef struct {
N_NIMCALL_PTR(Tnode293802*, ClPrc) (Tcontext345020* c0, Tidtable293850 pt0, Tnode293802* n0, void* ClEnv);
void* ClEnv;
} TY345127;
typedef struct {
N_NIMCALL_PTR(Tsym293834*, ClPrc) (Tcontext345020* c0, Tsym293834* fn0, Tidtable293850 pt0, Tlineinfo192336 info0, void* ClEnv);
void* ClEnv;
} TY345133;
typedef NU8 Ttypeattachedop345016;
typedef N_NIMCALL_PTR(Tsym293834*, TY345150) (Tcontext345020* c0, Tsym293834* dc0, Ttype293840* t0, Tlineinfo192336 info0, Ttypeattachedop345016 op0, NI col0);
struct  Tcontext345020  {
  Tpasscontext342002 Sup;
Tsym293834* module;
Tscope293828* currentscope;
Tscope293828* importtable;
Tscope293828* toplevelscope;
Tproccon345008* p;
Tsymseq293804* friendmodules;
NI instcounter;
Intset269030 ambiguoussymbols;
NI intypeclass;
NI ingenericcontext;
NI inunrolledcontext;
NI compilescontextid;
NI compilescontextidgenerator;
NI ingenericinst;
Tsymseq293804* converters;
Tsymseq293804* patterns;
Tlinkedlist147013 optionstack;
Tidtable293850 symmapping;
Tlinkedlist147013 libs;
TY345075 semconstexpr;
TY345080 semexpr;
TY345088 semtryexpr;
TY345096 semtryconstexpr;
TY345101 semoperand;
TY345109 semconstboolexpr;
TY345114 semoverloadedcall;
TY345121 semtypenode;
TY345127 seminferredlambda;
TY345133 semgenerateinstance;
Intset269030 includedfiles;
Tstrtable293806 userpragmas;
Tctx344035* evalcontext;
Intset269030 unknownidents;
TY345144* generics;
NI topstmts;
NI lastgenericidx;
NI hloloopdetector;
NI inparallelstmt;
TY345150 insttypeboundop;
Tident200010* selfname;
Tstrtable293806 signatures;
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
struct  Pagedesc47313  {
Pagedesc47313* next;
NI key;
TY29418 bits;
};
typedef NU8 Ttypekind293244;
typedef NU8 Tcallingconvention293002;
typedef NU32 Ttypeflag293431Set;
struct  Ttype293840  {
  Tidobj200004 Sup;
Ttypekind293244 kind;
Tcallingconvention293002 callconv;
Ttypeflag293431Set flags;
Ttypeseq293836* sons;
Tnode293802* n;
Tsym293834* owner;
Tsym293834* sym;
Tsym293834* destructor;
Tsym293834* deepcopy;
Tsym293834* assignment;
TY293960* methods;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc293816 loc;
};
struct  Ropeobj179006  {
  TNimObject Sup;
Ropeobj179006* left;
Ropeobj179006* right;
NI length;
NimStringDesc* data;
};
struct  Tlistentry147007  {
  TNimObject Sup;
Tlistentry147007* prev;
Tlistentry147007* next;
};
typedef NU8 Tlibkind293818;
struct  Tlib293820  {
  Tlistentry147007 Sup;
Tlibkind293818 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj179006* name;
Tnode293802* path;
};
struct  Tscope293828  {
NI depthlevel;
Tstrtable293806 symbols;
Tscope293828* parent;
};
struct  Tproccon345008  {
Tsym293834* owner;
Tsym293834* resultsym;
Tsym293834* selfsym;
NI nestedloopcounter;
NI nestedblockcounter;
NI intrystmt;
Tproccon345008* next;
NIM_BOOL wasforwarded;
Tnode293802* bracketexpr;
};
struct  Trunk269026  {
Trunk269026* next;
NI key;
TY29418 bits;
};
struct  Tidpair293846  {
Tidobj200004* key;
TNimObject* val;
};
typedef NU8 Tevalmode344019;
typedef NU8 Tsandboxflag344021Set;
struct  Tctx344035  {
  Tpasscontext342002 Sup;
TY344241* code;
TY193086* debug;
Tnode293802* globals;
Tnode293802* constants;
Ttypeseq293836* types;
Tnode293802* currentexceptiona;
Tnode293802* currentexceptionb;
NI exceptioninstr;
PprocHEX3Aobjecttype344220* prc;
Tsym293834* module;
Tnode293802* callsite;
Tevalmode344019 mode;
Tsandboxflag344021Set features;
NIM_BOOL traceactive;
NI loopiterations;
Tlineinfo192336 comesfromheuristic;
TY344260* callbacks;
NimStringDesc* errorflag;
};
struct  Tinstantiationpair345010  {
Tsym293834* genericsym;
Tinstantiation293824* inst;
};
struct  Freecell29429  {
Freecell29429* next;
NI zerofield;
};
struct  Tinstantiation293824  {
Tsym293834* sym;
Ttypeseq293836* concretetypes;
NI compilesid;
};
struct TY293961 {
NI Field0;
Tsym293834* Field1;
};
typedef NU8 Tslotkind344025;
struct TY344226 {
NIM_BOOL Field0;
Tslotkind344025 Field1;
};
typedef TY344226 TY344229[256];
struct  PprocHEX3Aobjecttype344220  {
TY344221* blocks;
Tsym293834* sym;
TY344229 slots;
NI maxslots;
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (Vmargs344029* args0, void* ClEnv);
void* ClEnv;
} Vmcallback344031;
struct TY344261 {
NimStringDesc* Field0;
Vmcallback344031 Field1;
};
struct  Tblock344017  {
Tsym293834* label;
TY344201* fixups;
};
struct  Vmargs344029  {
NI ra;
NI rb;
NI rc;
void* slots;
Tnode293802* currentexception;
};
struct Ttypeseq293836 {
  TGenericSeq Sup;
  Ttype293840* data[SEQ_DECL_SIZE];
};
struct TY293929 {
  TGenericSeq Sup;
  Tinstantiation293824* data[SEQ_DECL_SIZE];
};
struct Tsymseq293804 {
  TGenericSeq Sup;
  Tsym293834* data[SEQ_DECL_SIZE];
};
struct Tnodeseq293796 {
  TGenericSeq Sup;
  Tnode293802* data[SEQ_DECL_SIZE];
};
struct Trunkseq269028 {
  TGenericSeq Sup;
  Trunk269026* data[SEQ_DECL_SIZE];
};
struct Tidpairseq293848 {
  TGenericSeq Sup;
  Tidpair293846 data[SEQ_DECL_SIZE];
};
struct TY345144 {
  TGenericSeq Sup;
  Tinstantiationpair345010 data[SEQ_DECL_SIZE];
};
struct TY293960 {
  TGenericSeq Sup;
  TY293961 data[SEQ_DECL_SIZE];
};
struct TY344241 {
  TGenericSeq Sup;
  NU32 data[SEQ_DECL_SIZE];
};
struct TY193086 {
  TGenericSeq Sup;
  Tlineinfo192336 data[SEQ_DECL_SIZE];
};
struct TY344260 {
  TGenericSeq Sup;
  TY344261 data[SEQ_DECL_SIZE];
};
struct TY344221 {
  TGenericSeq Sup;
  Tblock344017 data[SEQ_DECL_SIZE];
};
struct TY344201 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d0, NI op0);
N_NIMCALL(void, T1104897005_3)(void* p, NI op);
N_NIMCALL(void, T1104897005_4)(void);
N_NIMCALL(void, nimRegisterGlobalMarker)(Globalmarkerproc55802 markerproc0);
N_NIMCALL(void*, newObj)(TNimType* typ0, NI size0);
N_NIMCALL(Tident200010*, getident_200441_791273810)(NimStringDesc* identifier0);
static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0);
static N_INLINE(Cell47305*, usrtocell_51440_1689653243)(void* usr0);
static N_INLINE(void, rtladdzct_52601_1689653243)(Cell47305* c0);
N_NOINLINE(void, addzct_51417_1689653243)(Cellseq47321* s0, Cell47305* c0);
static N_INLINE(void, asgnRef)(void** dest0, void* src0);
static N_INLINE(void, incref_53419_1689653243)(Cell47305* c0);
static N_INLINE(void, decref_53001_1689653243)(Cell47305* c0);
N_NIMCALL(NIM_BOOL, pluginmatches_480027_1104897005)(PluginHEX3Aobjecttype480009* p0, Tsym293834* s0);
N_NIMCALL(Tsym293834*, skipgenericowner_298279_850551059)(Tsym293834* s0);
PluginHEX3Aobjecttype480009* head_480081_1104897005;
TNimType NTI480009; /* Plugin:ObjectType */
extern TNimType NTI200008; /* PIdent */
TNimType NTI480003; /* Transformation */
TNimType NTI480005; /* Plugin */
extern Gcheap49818 gch_49858_1689653243;
N_NIMCALL(void, T1104897005_3)(void* p, NI op) {
	PluginHEX3Aobjecttype480009* a;
	a = (PluginHEX3Aobjecttype480009*)p;
	nimGCvisit((void*)(*a).fn, op);
	nimGCvisit((void*)(*a).module, op);
	nimGCvisit((void*)(*a).package, op);
	nimGCvisit((void*)(*a).next, op);
}
N_NIMCALL(void, T1104897005_4)(void) {
	nimGCvisit((void*)head_480081_1104897005, 0);
}

static N_INLINE(Cell47305*, usrtocell_51440_1689653243)(void* usr0) {
	Cell47305* result0;
	result0 = (Cell47305*)0;
	result0 = ((Cell47305*) ((NI)((NU32)(((NI) (usr0))) - (NU32)(((NI)sizeof(Cell47305))))));
	return result0;
}

static N_INLINE(void, rtladdzct_52601_1689653243)(Cell47305* c0) {
	addzct_51417_1689653243((&gch_49858_1689653243.zct), c0);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0) {
	{
		Cell47305* c0;
		if (!!((src0 == NIM_NIL))) goto LA3;
		c0 = usrtocell_51440_1689653243(src0);
		(*c0).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Cell47305* c0;
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

static N_INLINE(void, incref_53419_1689653243)(Cell47305* c0) {
	(*c0).refcount = (NI)((NU32)((*c0).refcount) + (NU32)(((NI) 8)));
}

static N_INLINE(void, decref_53001_1689653243)(Cell47305* c0) {
	{
		(*c0).refcount -= ((NI) 8);
		if (!((NU32)((*c0).refcount) < (NU32)(((NI) 8)))) goto LA3;
		rtladdzct_52601_1689653243(c0);
	}
	LA3: ;
}

static N_INLINE(void, asgnRef)(void** dest0, void* src0) {
	{
		Cell47305* LOC5;
		if (!!((src0 == NIM_NIL))) goto LA3;
		LOC5 = (Cell47305*)0;
		LOC5 = usrtocell_51440_1689653243(src0);
		incref_53419_1689653243(LOC5);
	}
	LA3: ;
	{
		Cell47305* LOC10;
		if (!!(((*dest0) == NIM_NIL))) goto LA8;
		LOC10 = (Cell47305*)0;
		LOC10 = usrtocell_51440_1689653243((*dest0));
		decref_53001_1689653243(LOC10);
	}
	LA8: ;
	(*dest0) = src0;
}

N_NIMCALL(void, registerplugin_480101_1104897005)(NimStringDesc* package0, NimStringDesc* module0, NimStringDesc* fn0, Transformation480003 t0) {
	PluginHEX3Aobjecttype480009* oldhead0;
	PluginHEX3Aobjecttype480009* LOC1;
	oldhead0 = head_480081_1104897005;
	LOC1 = (PluginHEX3Aobjecttype480009*)0;
	LOC1 = (PluginHEX3Aobjecttype480009*) newObj((&NTI480005), sizeof(PluginHEX3Aobjecttype480009));
	asgnRefNoCycle((void**) (&(*LOC1).fn), getident_200441_791273810(fn0));
	asgnRefNoCycle((void**) (&(*LOC1).module), getident_200441_791273810(module0));
	asgnRefNoCycle((void**) (&(*LOC1).package), getident_200441_791273810(package0));
	(*LOC1).t = t0;
	asgnRef((void**) (&(*LOC1).next), oldhead0);
	asgnRef((void**) (&head_480081_1104897005), LOC1);
}

N_NIMCALL(NIM_BOOL, pluginmatches_480027_1104897005)(PluginHEX3Aobjecttype480009* p0, Tsym293834* s0) {
	NIM_BOOL result0;
	Tsym293834* module0;
	Tsym293834* package0;
{	result0 = (NIM_BOOL)0;
	{
		if (!!(((*(*s0).name).Sup.id == (*(*p0).fn).Sup.id))) goto LA3;
		result0 = NIM_FALSE;
		goto BeforeRet;
	}
	LA3: ;
	module0 = skipgenericowner_298279_850551059(s0);
	{
		NIM_BOOL LOC7;
		NIM_BOOL LOC8;
		LOC7 = (NIM_BOOL)0;
		LOC8 = (NIM_BOOL)0;
		LOC8 = (module0 == NIM_NIL);
		if (LOC8) goto LA9;
		LOC8 = !(((*module0).kind == ((Tsymkind293435) 6)));
		LA9: ;
		LOC7 = LOC8;
		if (LOC7) goto LA10;
		LOC7 = !(((*(*module0).name).Sup.id == (*(*p0).module).Sup.id));
		LA10: ;
		if (!LOC7) goto LA11;
		result0 = NIM_FALSE;
		goto BeforeRet;
	}
	LA11: ;
	package0 = (*module0).owner;
	{
		NIM_BOOL LOC15;
		NIM_BOOL LOC16;
		LOC15 = (NIM_BOOL)0;
		LOC16 = (NIM_BOOL)0;
		LOC16 = (package0 == NIM_NIL);
		if (LOC16) goto LA17;
		LOC16 = !(((*package0).kind == ((Tsymkind293435) 23)));
		LA17: ;
		LOC15 = LOC16;
		if (LOC15) goto LA18;
		LOC15 = !(((*(*package0).name).Sup.id == (*(*p0).package).Sup.id));
		LA18: ;
		if (!LOC15) goto LA19;
		result0 = NIM_FALSE;
		goto BeforeRet;
	}
	LA19: ;
	result0 = NIM_TRUE;
	goto BeforeRet;
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(Transformation480003, getplugin_480083_1104897005)(Tsym293834* fn0) {
	Transformation480003 result0;
	PluginHEX3Aobjecttype480009* it0;
{	result0 = (Transformation480003)0;
	it0 = head_480081_1104897005;
	{
		while (1) {
			if (!!((it0 == NIM_NIL))) goto LA2;
			{
				NIM_BOOL LOC5;
				LOC5 = (NIM_BOOL)0;
				LOC5 = pluginmatches_480027_1104897005(it0, fn0);
				if (!LOC5) goto LA6;
				result0 = (*it0).t;
				goto BeforeRet;
			}
			LA6: ;
			it0 = (*it0).next;
		} LA2: ;
	}
	}BeforeRet: ;
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, compiler_pluginsupportInit000)(void) {
nimRegisterGlobalMarker(T1104897005_4);
}

NIM_EXTERNC N_NOINLINE(void, compiler_pluginsupportDatInit000)(void) {
static TNimNode* T1104897005_2[5];
static TNimNode T1104897005_0[6];
NTI480009.size = sizeof(PluginHEX3Aobjecttype480009);
NTI480009.kind = 18;
NTI480009.base = 0;
T1104897005_2[0] = &T1104897005_0[1];
T1104897005_0[1].kind = 1;
T1104897005_0[1].offset = offsetof(PluginHEX3Aobjecttype480009, fn);
T1104897005_0[1].typ = (&NTI200008);
T1104897005_0[1].name = "fn";
T1104897005_2[1] = &T1104897005_0[2];
T1104897005_0[2].kind = 1;
T1104897005_0[2].offset = offsetof(PluginHEX3Aobjecttype480009, module);
T1104897005_0[2].typ = (&NTI200008);
T1104897005_0[2].name = "module";
T1104897005_2[2] = &T1104897005_0[3];
T1104897005_0[3].kind = 1;
T1104897005_0[3].offset = offsetof(PluginHEX3Aobjecttype480009, package);
T1104897005_0[3].typ = (&NTI200008);
T1104897005_0[3].name = "package";
T1104897005_2[3] = &T1104897005_0[4];
NTI480003.size = sizeof(Transformation480003);
NTI480003.kind = 25;
NTI480003.base = 0;
NTI480003.flags = 3;
T1104897005_0[4].kind = 1;
T1104897005_0[4].offset = offsetof(PluginHEX3Aobjecttype480009, t);
T1104897005_0[4].typ = (&NTI480003);
T1104897005_0[4].name = "t";
T1104897005_2[4] = &T1104897005_0[5];
T1104897005_0[5].kind = 1;
T1104897005_0[5].offset = offsetof(PluginHEX3Aobjecttype480009, next);
T1104897005_0[5].typ = (&NTI480005);
T1104897005_0[5].name = "next";
T1104897005_0[0].len = 5; T1104897005_0[0].kind = 2; T1104897005_0[0].sons = &T1104897005_2[0];
NTI480009.node = &T1104897005_0[0];
NTI480005.size = sizeof(PluginHEX3Aobjecttype480009*);
NTI480005.kind = 22;
NTI480005.base = (&NTI480009);
NTI480005.marker = T1104897005_3;
}

