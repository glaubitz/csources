/* Generated by Nim Compiler v0.14.3 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#include <setjmp.h>
typedef struct Tnode294802 Tnode294802;
typedef struct Tcontext346020 Tcontext346020;
typedef struct Intset270030 Intset270030;
typedef struct Trunk270026 Trunk270026;
typedef struct Trunkseq270028 Trunkseq270028;
typedef struct Tsym294834 Tsym294834;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Ttype294840 Ttype294840;
typedef struct Tlineinfo193336 Tlineinfo193336;
typedef struct Tident201010 Tident201010;
typedef struct Tnodeseq294796 Tnodeseq294796;
typedef struct Exception Exception;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TSafePoint TSafePoint;
typedef struct TY129506 TY129506;
typedef struct Cell47305 Cell47305;
typedef struct Cellseq47321 Cellseq47321;
typedef struct Gcheap49818 Gcheap49818;
typedef struct Gcstack49816 Gcstack49816;
typedef struct Memregion29486 Memregion29486;
typedef struct Smallchunk29440 Smallchunk29440;
typedef struct Llchunk29480 Llchunk29480;
typedef struct Bigchunk29442 Bigchunk29442;
typedef struct Intset29414 Intset29414;
typedef struct Trunk29410 Trunk29410;
typedef struct Avlnode29484 Avlnode29484;
typedef struct Gcstat49814 Gcstat49814;
typedef struct Cellset47317 Cellset47317;
typedef struct Pagedesc47313 Pagedesc47313;
typedef struct Tidobj201004 Tidobj201004;
typedef struct Ttypeseq294836 Ttypeseq294836;
typedef struct TY294929 TY294929;
typedef struct Tstrtable294806 Tstrtable294806;
typedef struct Tsymseq294804 Tsymseq294804;
typedef struct Tloc294816 Tloc294816;
typedef struct Ropeobj180006 Ropeobj180006;
typedef struct Tlib294820 Tlib294820;
typedef struct Tpasscontext343002 Tpasscontext343002;
typedef struct Tscope294828 Tscope294828;
typedef struct Tproccon346008 Tproccon346008;
typedef struct Tlinkedlist148013 Tlinkedlist148013;
typedef struct Tlistentry148007 Tlistentry148007;
typedef struct Tidtable294850 Tidtable294850;
typedef struct Tidpairseq294848 Tidpairseq294848;
typedef struct Tctx345035 Tctx345035;
typedef struct TY346144 TY346144;
typedef struct Ttabiter301050 Ttabiter301050;
typedef struct TY294960 TY294960;
typedef struct Tidentiter301063 Tidentiter301063;
typedef struct Basechunk29438 Basechunk29438;
typedef struct Freecell29430 Freecell29430;
typedef struct Tinstantiation294824 Tinstantiation294824;
typedef struct Tidpair294846 Tidpair294846;
typedef struct TY345241 TY345241;
typedef struct TY194083 TY194083;
typedef struct PprocHEX3Aobjecttype345220 PprocHEX3Aobjecttype345220;
typedef struct TY345260 TY345260;
typedef struct Tinstantiationpair346010 Tinstantiationpair346010;
typedef struct TY294961 TY294961;
typedef struct TY345221 TY345221;
typedef struct TY345226 TY345226;
typedef struct TY345261 TY345261;
typedef struct Vmargs345029 Vmargs345029;
typedef struct Tblock345017 Tblock345017;
typedef struct TY345201 TY345201;
struct  Intset270030  {
NI counter;
NI max;
Trunk270026* head;
Trunkseq270028* data;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tlineinfo193336  {
NI16 line;
NI16 col;
NI32 fileindex;
};
typedef NU16 Tnodeflag294427Set;
typedef NU8 Tnodekind294020;
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
struct  Exception  {
  TNimObject Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
NimStringDesc* trace;
};
typedef struct {
N_NIMCALL_PTR(NIM_BOOL, ClPrc) (Exception* e0, void* ClEnv);
void* ClEnv;
} TY17211;
struct  TSafePoint  {
TSafePoint* prev;
NI status;
jmp_buf context;
NIM_BOOL hasRaiseAction;
TY17211 raiseAction;
};
struct TY129506 {
NimStringDesc* Field0;
NimStringDesc* Field1;
NimStringDesc* Field2;
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
struct  Cell47305  {
NI refcount;
TNimType* typ;
};
struct  Cellseq47321  {
NI len;
NI cap;
Cell47305** d;
};
typedef Smallchunk29440* TY29501[512];
typedef Trunk29410* Trunkbuckets29412[256];
struct  Intset29414  {
Trunkbuckets29412 data;
};
struct  Memregion29486  {
NI minlargeobj;
NI maxlargeobj;
TY29501 freesmallchunks;
Llchunk29480* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk29442* freechunkslist;
Intset29414 chunkstarts;
Avlnode29484* root;
Avlnode29484* deleted;
Avlnode29484* last;
Avlnode29484* freeavlnodes;
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
Memregion29486 region;
Gcstat49814 stat;
Cellset47317 marked;
Cellseq47321 additionalroots;
};
struct  Tidobj201004  {
  TNimObject Sup;
NI id;
};
struct  Tident201010  {
  Tidobj201004 Sup;
NimStringDesc* s;
Tident201010* next;
NI h;
};
typedef NU8 Tsymkind294435;
struct  Tstrtable294806  {
NI counter;
Tsymseq294804* data;
};
typedef NU16 Tmagic294524;
typedef NU32 Tsymflag294184Set;
typedef NU32 Toption171009Set;
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
typedef NU8 Trenderflag313004Set;
typedef NU16 Tmsgkind193002;
typedef N_NIMCALL_PTR(Tsym294834*, TY343069) (Tsym294834* m0, NI32 fileidx0);
struct  Tpasscontext343002  {
  TNimObject Sup;
NIM_BOOL fromcache;
};
struct  Tlinkedlist148013  {
Tlistentry148007* head;
Tlistentry148007* tail;
NI counter;
};
struct  Tidtable294850  {
NI counter;
Tidpairseq294848* data;
};
typedef N_NIMCALL_PTR(Tnode294802*, TY346075) (Tcontext346020* c0, Tnode294802* n0);
typedef NU16 Texprflag346012Set;
typedef N_NIMCALL_PTR(Tnode294802*, TY346080) (Tcontext346020* c0, Tnode294802* n0, Texprflag346012Set flags0);
typedef N_NIMCALL_PTR(Tnode294802*, TY346088) (Tcontext346020* c0, Tnode294802* n0, Texprflag346012Set flags0);
typedef N_NIMCALL_PTR(Tnode294802*, TY346096) (Tcontext346020* c0, Tnode294802* n0);
typedef N_NIMCALL_PTR(Tnode294802*, TY346101) (Tcontext346020* c0, Tnode294802* n0, Texprflag346012Set flags0);
typedef N_NIMCALL_PTR(Tnode294802*, TY346109) (Tcontext346020* c0, Tnode294802* n0);
typedef NU32 Tsymkind294435Set;
typedef N_NIMCALL_PTR(Tnode294802*, TY346114) (Tcontext346020* c0, Tnode294802* n0, Tnode294802* norig0, Tsymkind294435Set filter0);
typedef N_NIMCALL_PTR(Ttype294840*, TY346121) (Tcontext346020* c0, Tnode294802* n0, Ttype294840* prev0);
typedef struct {
N_NIMCALL_PTR(Tnode294802*, ClPrc) (Tcontext346020* c0, Tidtable294850 pt0, Tnode294802* n0, void* ClEnv);
void* ClEnv;
} TY346127;
typedef struct {
N_NIMCALL_PTR(Tsym294834*, ClPrc) (Tcontext346020* c0, Tsym294834* fn0, Tidtable294850 pt0, Tlineinfo193336 info0, void* ClEnv);
void* ClEnv;
} TY346133;
typedef NU8 Ttypeattachedop346016;
typedef N_NIMCALL_PTR(Tsym294834*, TY346150) (Tcontext346020* c0, Tsym294834* dc0, Ttype294840* t0, Tlineinfo193336 info0, Ttypeattachedop346016 op0, NI col0);
struct  Tcontext346020  {
  Tpasscontext343002 Sup;
Tsym294834* module;
Tscope294828* currentscope;
Tscope294828* importtable;
Tscope294828* toplevelscope;
Tproccon346008* p;
Tsymseq294804* friendmodules;
NI instcounter;
Intset270030 ambiguoussymbols;
NI intypeclass;
NI ingenericcontext;
NI inunrolledcontext;
NI compilescontextid;
NI compilescontextidgenerator;
NI ingenericinst;
Tsymseq294804* converters;
Tsymseq294804* patterns;
Tlinkedlist148013 optionstack;
Tidtable294850 symmapping;
Tlinkedlist148013 libs;
TY346075 semconstexpr;
TY346080 semexpr;
TY346088 semtryexpr;
TY346096 semtryconstexpr;
TY346101 semoperand;
TY346109 semconstboolexpr;
TY346114 semoverloadedcall;
TY346121 semtypenode;
TY346127 seminferredlambda;
TY346133 semgenerateinstance;
Intset270030 includedfiles;
Tstrtable294806 userpragmas;
Tctx345035* evalcontext;
Intset270030 unknownidents;
TY346144* generics;
NI topstmts;
NI lastgenericidx;
NI hloloopdetector;
NI inparallelstmt;
TY346150 insttypeboundop;
Tident201010* selfname;
Tstrtable294806 signatures;
};
typedef NU8 Tsymflag294184;
struct  Ttabiter301050  {
NI h;
};
struct  Tscope294828  {
NI depthlevel;
Tstrtable294806 symbols;
Tscope294828* parent;
};
typedef NU8 Ttypekind294244;
typedef NU8 Tcallingconvention294002;
typedef NU32 Ttypeflag294431Set;
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
struct  Tidentiter301063  {
NI h;
Tident201010* name;
};
typedef NI TY29419[8];
struct  Trunk270026  {
Trunk270026* next;
NI key;
TY29419 bits;
};
struct  Gcstack49816  {
Gcstack49816* prev;
Gcstack49816* next;
void* starts;
void* pos;
NI maxstacksize;
};
struct  Basechunk29438  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk29440  {
  Basechunk29438 Sup;
Smallchunk29440* next;
Smallchunk29440* prev;
Freecell29430* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk29480  {
NI size;
NI acc;
Llchunk29480* next;
};
struct  Bigchunk29442  {
  Basechunk29438 Sup;
Bigchunk29442* next;
Bigchunk29442* prev;
NI align;
NF data;
};
struct  Trunk29410  {
Trunk29410* next;
NI key;
TY29419 bits;
};
typedef Avlnode29484* TY29491[2];
struct  Avlnode29484  {
TY29491 link;
NI key;
NI upperbound;
NI level;
};
struct  Pagedesc47313  {
Pagedesc47313* next;
NI key;
TY29419 bits;
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
struct  Tproccon346008  {
Tsym294834* owner;
Tsym294834* resultsym;
Tsym294834* selfsym;
NI nestedloopcounter;
NI nestedblockcounter;
NI intrystmt;
Tproccon346008* next;
NIM_BOOL wasforwarded;
Tnode294802* bracketexpr;
};
struct  Tidpair294846  {
Tidobj201004* key;
TNimObject* val;
};
typedef NU8 Tevalmode345019;
typedef NU8 Tsandboxflag345021Set;
struct  Tctx345035  {
  Tpasscontext343002 Sup;
TY345241* code;
TY194083* debug;
Tnode294802* globals;
Tnode294802* constants;
Ttypeseq294836* types;
Tnode294802* currentexceptiona;
Tnode294802* currentexceptionb;
NI exceptioninstr;
PprocHEX3Aobjecttype345220* prc;
Tsym294834* module;
Tnode294802* callsite;
Tevalmode345019 mode;
Tsandboxflag345021Set features;
NIM_BOOL traceactive;
NI loopiterations;
Tlineinfo193336 comesfromheuristic;
TY345260* callbacks;
NimStringDesc* errorflag;
};
struct  Tinstantiationpair346010  {
Tsym294834* genericsym;
Tinstantiation294824* inst;
};
struct TY294961 {
NI Field0;
Tsym294834* Field1;
};
struct  Freecell29430  {
Freecell29430* next;
NI zerofield;
};
struct  Tinstantiation294824  {
Tsym294834* sym;
Ttypeseq294836* concretetypes;
NI compilesid;
};
typedef NU8 Tslotkind345025;
struct TY345226 {
NIM_BOOL Field0;
Tslotkind345025 Field1;
};
typedef TY345226 TY345229[256];
struct  PprocHEX3Aobjecttype345220  {
TY345221* blocks;
Tsym294834* sym;
TY345229 slots;
NI maxslots;
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (Vmargs345029* args0, void* ClEnv);
void* ClEnv;
} Vmcallback345031;
struct TY345261 {
NimStringDesc* Field0;
Vmcallback345031 Field1;
};
struct  Tblock345017  {
Tsym294834* label;
TY345201* fixups;
};
struct  Vmargs345029  {
NI ra;
NI rb;
NI rc;
void* slots;
Tnode294802* currentexception;
};
struct Tnodeseq294796 {
  TGenericSeq Sup;
  Tnode294802* data[SEQ_DECL_SIZE];
};
struct Trunkseq270028 {
  TGenericSeq Sup;
  Trunk270026* data[SEQ_DECL_SIZE];
};
struct Ttypeseq294836 {
  TGenericSeq Sup;
  Ttype294840* data[SEQ_DECL_SIZE];
};
struct TY294929 {
  TGenericSeq Sup;
  Tinstantiation294824* data[SEQ_DECL_SIZE];
};
struct Tsymseq294804 {
  TGenericSeq Sup;
  Tsym294834* data[SEQ_DECL_SIZE];
};
struct Tidpairseq294848 {
  TGenericSeq Sup;
  Tidpair294846 data[SEQ_DECL_SIZE];
};
struct TY346144 {
  TGenericSeq Sup;
  Tinstantiationpair346010 data[SEQ_DECL_SIZE];
};
struct TY294960 {
  TGenericSeq Sup;
  TY294961 data[SEQ_DECL_SIZE];
};
struct TY345241 {
  TGenericSeq Sup;
  NU32 data[SEQ_DECL_SIZE];
};
struct TY194083 {
  TGenericSeq Sup;
  Tlineinfo193336 data[SEQ_DECL_SIZE];
};
struct TY345260 {
  TGenericSeq Sup;
  TY345261 data[SEQ_DECL_SIZE];
};
struct TY345221 {
  TGenericSeq Sup;
  Tblock345017 data[SEQ_DECL_SIZE];
};
struct TY345201 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
N_NIMCALL(NI, sonslen_297351_850551059)(Tnode294802* n0);
N_NIMCALL(Tsym294834*, myimportmodule_350474_2178338529)(Tcontext346020* c0, Tnode294802* n0);
N_NIMCALL(NI32, checkmodulename_350051_2178338529)(Tnode294802* n0);
N_NIMCALL(NimStringDesc*, getmodulename_350009_2178338529)(Tnode294802* n0);
static N_INLINE(void, pushSafePoint)(TSafePoint* s0);
N_NIMCALL(NimStringDesc*, pathsubs_172084_2607990831)(NimStringDesc* p0, NimStringDesc* config0);
N_NIMCALL(void, nossplitFile)(NimStringDesc* path0, TY129506* Result);
N_NIMCALL(NimStringDesc*, tofullpath_194261_155036129)(NI32 fileidx0);
static N_INLINE(void, popSafePoint)(void);
N_NIMCALL(NIM_BOOL, isObj)(TNimType* obj0, TNimType* subclass0);
static N_INLINE(Exception*, getCurrentException)(void);
N_NIMCALL(void, localerror_198085_155036129)(Tlineinfo193336 info0, NimStringDesc* arg0);
static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0);
static N_INLINE(void, copymem_7485_1689653243)(void* dest0, void* source0, NI size0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space0);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src0);
static N_INLINE(void, popCurrentException)(void);
static N_INLINE(void, asgnRef)(void** dest0, void* src0);
static N_INLINE(void, incref_53419_1689653243)(Cell47305* c0);
static N_INLINE(Cell47305*, usrtocell_51440_1689653243)(void* usr0);
static N_INLINE(void, decref_53001_1689653243)(Cell47305* c0);
static N_INLINE(void, rtladdzct_52601_1689653243)(Cell47305* c0);
N_NOINLINE(void, addzct_51417_1689653243)(Cellseq47321* s0, Cell47305* c0);
N_NIMCALL(void, reraiseException)(void);
N_NIMCALL(Tident201010*, getident_201441_791273810)(NimStringDesc* identifier0);
static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* seq0, NI elemsize0, NI newlen0);
N_NIMCALL(NimStringDesc*, nsuReplaceStr)(NimStringDesc* s0, NimStringDesc* sub0, NimStringDesc* by0);
N_NIMCALL(NimStringDesc*, rendertree_313044_382274130)(Tnode294802* n0, Trenderflag313004Set renderflags0);
N_NIMCALL(void, localerror_198080_155036129)(Tlineinfo193336 info0, Tmsgkind193002 msg0, NimStringDesc* arg0);
N_NIMCALL(NimStringDesc*, nsuFormatSingleElem)(NimStringDesc* formatstr0, NimStringDesc* a0);
N_NIMCALL(NimStringDesc*, findmodule_172489_2607990831)(NimStringDesc* modulename0, NimStringDesc* currentmodule0);
N_NIMCALL(NI32, fileinfoidx_194007_155036129)(NimStringDesc* filename0);
N_NIMCALL(Tsym294834*, importmoduleas_350443_2178338529)(Tnode294802* n0, Tsym294834* realmodule0);
static N_INLINE(NI, len_295081_850551059)(Tnode294802* n0);
N_NIMCALL(Tsym294834*, createmodulealias_297838_850551059)(Tsym294834* s0, Tident201010* newident0, Tlineinfo193336 info0);
N_NIMCALL(void, message_198095_155036129)(Tlineinfo193336 info0, Tmsgkind193002 msg0, NimStringDesc* arg0);
N_NIMCALL(void, adddecl_348461_254525290)(Tcontext346020* c0, Tsym294834* sym0, Tlineinfo193336 info0);
N_NIMCALL(void, importallsymbolsexcept_350262_2178338529)(Tcontext346020* c0, Tsym294834* frommod0, Intset270030* exceptset0);
N_NIMCALL(Tsym294834*, inittabiter_301052_2984716966)(Ttabiter301050* ti0, Tstrtable294806 tab0);
N_NIMCALL(void, internalerror_198100_155036129)(Tlineinfo193336 info0, NimStringDesc* errmsg0);
N_NIMCALL(NimStringDesc*, reprEnum)(NI e0, TNimType* typ0);
static N_INLINE(NIM_BOOL, isnil_270929_2627731572)(Intset270030* x0);
N_NIMCALL(NIM_BOOL, contains_270811_2627731572)(Intset270030* s0, NI key0);
N_NIMCALL(void, rawimportsymbol_350058_2178338529)(Tcontext346020* c0, Tsym294834* s0);
N_NIMCALL(Tsym294834*, strtableget_301045_2984716966)(Tstrtable294806 t0, Tident201010* name0);
N_NIMCALL(void, incl_270832_2627731572)(Intset270030* s0, NI key0);
N_NIMCALL(void, strtableadd_301040_2984716966)(Tstrtable294806* t0, Tsym294834* n0);
N_NIMCALL(Tsym294834*, initidentiter_301066_2984716966)(Tidentiter301063* ti0, Tstrtable294806 tab0, Tident201010* s0);
N_NIMCALL(Tsym294834*, nextidentiter_301072_2984716966)(Tidentiter301063* ti0, Tstrtable294806 tab0);
N_NIMCALL(void, addconverter_346426_893308950)(Tcontext346020* c0, Tsym294834* conv0);
static N_INLINE(NIM_BOOL, haspattern_299338_850551059)(Tsym294834* s0);
static N_INLINE(NIM_BOOL, isroutine_299324_850551059)(Tsym294834* s0);
N_NIMCALL(void, addpattern_346431_893308950)(Tcontext346020* c0, Tsym294834* p0);
N_NIMCALL(Tsym294834*, nextiter_301057_2984716966)(Ttabiter301050* ti0, Tstrtable294806 tab0);
N_NIMCALL(void, checkminsonslen_346962_893308950)(Tnode294802* n0, NI length0);
N_NIMCALL(Tnode294802*, newsymnode_296183_850551059)(Tsym294834* sym0);
N_NIMCALL(void, initintset_270885_2627731572)(Intset270030* Result);
N_NOINLINE(void, chckNil)(void* p0);
N_NIMCALL(Tident201010*, considerquotedident_348004_254525290)(Tnode294802* n0);
N_NIMCALL(void, importsymbol_350200_2178338529)(Tcontext346020* c0, Tnode294802* n0, Tsym294834* frommod0);
N_NIMCALL(void, loadstub_337223_1724185294)(Tsym294834* s0);
STRING_LITERAL(T2178338529_3, "invalid path: ", 14);
STRING_LITERAL(T2178338529_4, "as", 2);
STRING_LITERAL(T2178338529_5, " ", 1);
STRING_LITERAL(T2178338529_6, "", 0);
STRING_LITERAL(T2178338529_7, ".", 1);
STRING_LITERAL(T2178338529_8, "/", 1);
STRING_LITERAL(T2178338529_9, "invalid module name: \'$1\'", 25);
STRING_LITERAL(T2178338529_10, "module alias must be an identifier", 34);
STRING_LITERAL(T2178338529_11, "A module cannot import itself", 29);
STRING_LITERAL(T2178338529_12, "importAllSymbols: ", 18);
STRING_LITERAL(T2178338529_13, "rawImportSymbol", 15);
STRING_LITERAL(T2178338529_14, "importSymbol: 2", 15);
STRING_LITERAL(T2178338529_15, "importSymbol: 3", 15);
extern TSafePoint* exchandler_18837_1689653243;
extern TNimType NTI3646; /* ValueError */
extern Exception* currexception_18839_1689653243;
extern Gcheap49818 gch_49858_1689653243;
extern TY343069 gimportmodule_343073_2355241294;
extern TNimType NTI294435; /* TSymKind */

static N_INLINE(void, pushSafePoint)(TSafePoint* s0) {
	(*s0).hasRaiseAction = NIM_FALSE;
	(*s0).prev = exchandler_18837_1689653243;
	exchandler_18837_1689653243 = s0;
}

static N_INLINE(void, popSafePoint)(void) {
	exchandler_18837_1689653243 = (*exchandler_18837_1689653243).prev;
}

static N_INLINE(Exception*, getCurrentException)(void) {
	Exception* result0;
	result0 = (Exception*)0;
	result0 = currexception_18839_1689653243;
	return result0;
}

static N_INLINE(void, copymem_7485_1689653243)(void* dest0, void* source0, NI size0) {
	void* LOC1;
	LOC1 = (void*)0;
	LOC1 = memcpy(dest0, source0, ((size_t) (size0)));
}

static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0) {
	copymem_7485_1689653243(((void*) ((&(*dest0).data[((*dest0).Sup.len)- 0]))), ((void*) ((*src0).data)), ((NI) ((NI)((*src0).Sup.len + ((NI) 1)))));
	(*dest0).Sup.len += (*src0).Sup.len;
}

static N_INLINE(void, incref_53419_1689653243)(Cell47305* c0) {
	(*c0).refcount = (NI)((NU64)((*c0).refcount) + (NU64)(((NI) 8)));
}

static N_INLINE(Cell47305*, usrtocell_51440_1689653243)(void* usr0) {
	Cell47305* result0;
	result0 = (Cell47305*)0;
	result0 = ((Cell47305*) ((NI)((NU64)(((NI) (usr0))) - (NU64)(((NI)sizeof(Cell47305))))));
	return result0;
}

static N_INLINE(void, rtladdzct_52601_1689653243)(Cell47305* c0) {
	addzct_51417_1689653243((&gch_49858_1689653243.zct), c0);
}

static N_INLINE(void, decref_53001_1689653243)(Cell47305* c0) {
	{
		(*c0).refcount -= ((NI) 8);
		if (!((NU64)((*c0).refcount) < (NU64)(((NI) 8)))) goto LA3;
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

static N_INLINE(void, popCurrentException)(void) {
	asgnRef((void**) (&currexception_18839_1689653243), NIM_NIL);
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
			if (!((NU64)((*c0).refcount) < (NU64)(((NI) 8)))) goto LA11;
			rtladdzct_52601_1689653243(c0);
		}
		LA11: ;
	}
	LA7: ;
	(*dest0) = src0;
}

N_NIMCALL(NimStringDesc*, getmodulename_350009_2178338529)(Tnode294802* n0) {
	NimStringDesc* volatile result0;
{	result0 = (NimStringDesc*)0;
	switch ((*n0).kind) {
	case ((Tnodekind294020) 20):
	case ((Tnodekind294020) 21):
	case ((Tnodekind294020) 22):
	{
		TSafePoint T2178338529_2;
		pushSafePoint(&T2178338529_2);
		T2178338529_2.status = setjmp(T2178338529_2.context);
		if (T2178338529_2.status == 0) {
			NimStringDesc* LOC3;
			TY129506 LOC4;
			LOC3 = (NimStringDesc*)0;
			LOC3 = tofullpath_194261_155036129((*n0).info.fileindex);
			memset((void*)(&LOC4), 0, sizeof(LOC4));
			nossplitFile(LOC3, (&LOC4));
			result0 = pathsubs_172084_2607990831((*n0).kindU.S3.strval, LOC4.Field0);
			popSafePoint();
		}
		else {
			popSafePoint();
			if (isObj(getCurrentException()->Sup.m_type, (&NTI3646))) {
				NimStringDesc* LOC7;
				T2178338529_2.status = 0;
				LOC7 = (NimStringDesc*)0;
				LOC7 = rawNewString((*n0).kindU.S3.strval->Sup.len + 14);
appendString(LOC7, ((NimStringDesc*) &T2178338529_3));
appendString(LOC7, (*n0).kindU.S3.strval);
				localerror_198085_155036129((*n0).info, LOC7);
				result0 = copyString((*n0).kindU.S3.strval);
				popCurrentException();
			}
		}
		if (T2178338529_2.status != 0) reraiseException();
	}
	break;
	case ((Tnodekind294020) 2):
	{
		result0 = copyString((*(*n0).kindU.S5.ident).s);
	}
	break;
	case ((Tnodekind294020) 3):
	{
		result0 = copyString((*(*(*n0).kindU.S4.sym).name).s);
	}
	break;
	case ((Tnodekind294020) 29):
	case ((Tnodekind294020) 30):
	{
		NimStringDesc* LOC18;
		{
			NIM_BOOL LOC13;
			Tident201010* LOC15;
			LOC13 = (NIM_BOOL)0;
			LOC13 = ((*(*n0).kindU.S6.sons->data[((NI) 0)]).kind == ((Tnodekind294020) 2));
			if (!(LOC13)) goto LA14;
			LOC15 = (Tident201010*)0;
			LOC15 = getident_201441_791273810(((NimStringDesc*) &T2178338529_4));
			LOC13 = ((*(*(*n0).kindU.S6.sons->data[((NI) 0)]).kindU.S5.ident).Sup.id == (*LOC15).Sup.id);
			LA14: ;
			if (!LOC13) goto LA16;
			(*n0).kind = ((Tnodekind294020) 78);
			asgnRefNoCycle((void**) (&(*n0).kindU.S6.sons->data[((NI) 0)]), (*n0).kindU.S6.sons->data[((NI) 1)]);
			asgnRefNoCycle((void**) (&(*n0).kindU.S6.sons->data[((NI) 1)]), (*n0).kindU.S6.sons->data[((NI) 2)]);
			(*n0).kindU.S6.sons = (Tnodeseq294796*) setLengthSeq(&((*n0).kindU.S6.sons)->Sup, sizeof(Tnode294802*), ((NI) 2));
			result0 = getmodulename_350009_2178338529((*n0).kindU.S6.sons->data[((NI) 0)]);
			goto BeforeRet;
		}
		LA16: ;
		LOC18 = (NimStringDesc*)0;
		LOC18 = rendertree_313044_382274130(n0, 4);
		result0 = nsuReplaceStr(LOC18, ((NimStringDesc*) &T2178338529_5), ((NimStringDesc*) &T2178338529_6));
	}
	break;
	case ((Tnodekind294020) 45):
	{
		NimStringDesc* LOC20;
		LOC20 = (NimStringDesc*)0;
		LOC20 = rendertree_313044_382274130(n0, 4);
		result0 = nsuReplaceStr(LOC20, ((NimStringDesc*) &T2178338529_7), ((NimStringDesc*) &T2178338529_8));
	}
	break;
	case ((Tnodekind294020) 78):
	{
		result0 = getmodulename_350009_2178338529((*n0).kindU.S6.sons->data[((NI) 0)]);
	}
	break;
	default:
	{
		NimStringDesc* LOC23;
		NimStringDesc* LOC24;
		LOC23 = (NimStringDesc*)0;
		LOC23 = rendertree_313044_382274130(n0, 0);
		LOC24 = (NimStringDesc*)0;
		LOC24 = nsuFormatSingleElem(((NimStringDesc*) &T2178338529_9), LOC23);
		localerror_198080_155036129((*n0).info, ((Tmsgkind193002) 4), LOC24);
		result0 = copyString(((NimStringDesc*) &T2178338529_6));
	}
	break;
	}
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(NI32, checkmodulename_350051_2178338529)(Tnode294802* n0) {
	NI32 result0;
	NimStringDesc* modulename0;
	NimStringDesc* fullpath0;
	NimStringDesc* LOC1;
	result0 = (NI32)0;
	modulename0 = getmodulename_350009_2178338529(n0);
	LOC1 = (NimStringDesc*)0;
	LOC1 = tofullpath_194261_155036129((*n0).info.fileindex);
	fullpath0 = findmodule_172489_2607990831(modulename0, LOC1);
	{
		if (!((fullpath0 ? fullpath0->Sup.len : 0) == ((NI) 0))) goto LA4;
		localerror_198080_155036129((*n0).info, ((Tmsgkind193002) 3), modulename0);
		result0 = ((NI32) -1);
	}
	goto LA2;
	LA4: ;
	{
		result0 = fileinfoidx_194007_155036129(fullpath0);
	}
	LA2: ;
	return result0;
}

static N_INLINE(NI, len_295081_850551059)(Tnode294802* n0) {
	NI result0;
	result0 = (NI)0;
	{
		if (!(*n0).kindU.S6.sons == 0) goto LA3;
		result0 = ((NI) 0);
	}
	goto LA1;
	LA3: ;
	{
		result0 = ((*n0).kindU.S6.sons ? (*n0).kindU.S6.sons->Sup.len : 0);
	}
	LA1: ;
	return result0;
}

N_NIMCALL(Tsym294834*, importmoduleas_350443_2178338529)(Tnode294802* n0, Tsym294834* realmodule0) {
	Tsym294834* result0;
	result0 = (Tsym294834*)0;
	result0 = realmodule0;
	{
		if (!!(((*n0).kind == ((Tnodekind294020) 78)))) goto LA3;
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		NI LOC7;
		LOC6 = (NIM_BOOL)0;
		LOC7 = (NI)0;
		LOC7 = len_295081_850551059(n0);
		LOC6 = !((LOC7 == ((NI) 2)));
		if (LOC6) goto LA8;
		LOC6 = !(((*(*n0).kindU.S6.sons->data[((NI) 1)]).kind == ((Tnodekind294020) 2)));
		LA8: ;
		if (!LOC6) goto LA9;
		localerror_198080_155036129((*n0).info, ((Tmsgkind193002) 4), ((NimStringDesc*) &T2178338529_10));
	}
	goto LA1;
	LA9: ;
	{
		if (!!(((*(*(*n0).kindU.S6.sons->data[((NI) 1)]).kindU.S5.ident).Sup.id == (*(*realmodule0).name).Sup.id))) goto LA12;
		result0 = createmodulealias_297838_850551059(realmodule0, (*(*n0).kindU.S6.sons->data[((NI) 1)]).kindU.S5.ident, (*realmodule0).info);
	}
	goto LA1;
	LA12: ;
	LA1: ;
	return result0;
}

N_NIMCALL(Tsym294834*, myimportmodule_350474_2178338529)(Tcontext346020* c0, Tnode294802* n0) {
	Tsym294834* result0;
	NI32 f0;
	result0 = (Tsym294834*)0;
	f0 = checkmodulename_350051_2178338529(n0);
	{
		Tsym294834* LOC5;
		if (!!((f0 == ((NI32) -1)))) goto LA3;
		LOC5 = (Tsym294834*)0;
		LOC5 = gimportmodule_343073_2355241294((*c0).module, f0);
		result0 = importmoduleas_350443_2178338529(n0, LOC5);
		{
			NIM_BOOL LOC8;
			LOC8 = (NIM_BOOL)0;
			LOC8 = ((*result0).info.fileindex == (*(*c0).module).info.fileindex);
			if (!(LOC8)) goto LA9;
			LOC8 = ((*result0).info.fileindex == (*n0).info.fileindex);
			LA9: ;
			if (!LOC8) goto LA10;
			localerror_198080_155036129((*n0).info, ((Tmsgkind193002) 4), ((NimStringDesc*) &T2178338529_11));
		}
		LA10: ;
		{
			if (!(((*result0).flags &(1U<<((NU)(((Tsymflag294184) 19))&31U)))!=0)) goto LA14;
			message_198095_155036129((*n0).info, ((Tmsgkind193002) 241), (*(*result0).name).s);
		}
		LA14: ;
	}
	LA3: ;
	return result0;
}

static N_INLINE(NIM_BOOL, isnil_270929_2627731572)(Intset270030* x0) {
	NIM_BOOL result0;
	result0 = (NIM_BOOL)0;
	result0 = (*x0).head == 0;
	return result0;
}

static N_INLINE(NIM_BOOL, isroutine_299324_850551059)(Tsym294834* s0) {
	NIM_BOOL result0;
	result0 = (NIM_BOOL)0;
	result0 = ((258048 &(1U<<((NU)((*s0).kind)&31U)))!=0);
	return result0;
}

static N_INLINE(NIM_BOOL, haspattern_299338_850551059)(Tsym294834* s0) {
	NIM_BOOL result0;
	NIM_BOOL LOC1;
	result0 = (NIM_BOOL)0;
	LOC1 = (NIM_BOOL)0;
	LOC1 = isroutine_299324_850551059(s0);
	if (!(LOC1)) goto LA2;
	LOC1 = !(((*(*(*s0).ast).kindU.S6.sons->data[((NI) 1)]).kind == ((Tnodekind294020) 1)));
	LA2: ;
	result0 = LOC1;
	return result0;
}

N_NIMCALL(void, rawimportsymbol_350058_2178338529)(Tcontext346020* c0, Tsym294834* s0) {
	Tsym294834* check0;
	check0 = strtableget_301045_2984716966((*(*c0).importtable).symbols, (*s0).name);
	{
		NIM_BOOL LOC3;
		LOC3 = (NIM_BOOL)0;
		LOC3 = !((check0 == NIM_NIL));
		if (!(LOC3)) goto LA4;
		LOC3 = !(((*check0).Sup.id == (*s0).Sup.id));
		LA4: ;
		if (!LOC3) goto LA5;
		{
			if (!!(((258112 &(1U<<((NU)((*s0).kind)&31U)))!=0))) goto LA9;
			incl_270832_2627731572((&(*c0).ambiguoussymbols), (*s0).Sup.id);
			incl_270832_2627731572((&(*c0).ambiguoussymbols), (*check0).Sup.id);
		}
		LA9: ;
	}
	LA5: ;
	strtableadd_301040_2984716966((&(*(*c0).importtable).symbols), s0);
	{
		Ttype294840* etyp0;
		if (!((*s0).kind == ((Tsymkind294435) 7))) goto LA13;
		etyp0 = (*s0).typ;
		{
			NIM_BOOL LOC17;
			LOC17 = (NIM_BOOL)0;
			LOC17 = ((16386 &((NU64)1<<((NU)((*etyp0).kind)&63U)))!=0);
			if (!(LOC17)) goto LA18;
			LOC17 = !((((*s0).flags &(1U<<((NU)(((Tsymflag294184) 9))&31U)))!=0));
			LA18: ;
			if (!LOC17) goto LA19;
			{
				NI j_350137_2178338529;
				NI HEX3Atmp_350193_2178338529;
				NI LOC22;
				NI res_350196_2178338529;
				j_350137_2178338529 = (NI)0;
				HEX3Atmp_350193_2178338529 = (NI)0;
				LOC22 = (NI)0;
				LOC22 = sonslen_297351_850551059((*etyp0).n);
				HEX3Atmp_350193_2178338529 = (NI)(LOC22 - ((NI) 1));
				res_350196_2178338529 = ((NI) 0);
				{
					while (1) {
						Tsym294834* e0;
						Tidentiter301063 it0;
						if (!(res_350196_2178338529 <= HEX3Atmp_350193_2178338529)) goto LA24;
						j_350137_2178338529 = res_350196_2178338529;
						e0 = (*(*(*etyp0).n).kindU.S6.sons->data[j_350137_2178338529]).kindU.S4.sym;
						{
							if (!!(((*e0).kind == ((Tsymkind294435) 19)))) goto LA27;
							internalerror_198100_155036129((*s0).info, ((NimStringDesc*) &T2178338529_13));
						}
						LA27: ;
						memset((void*)(&it0), 0, sizeof(it0));
						check0 = initidentiter_301066_2984716966((&it0), (*(*c0).importtable).symbols, (*e0).name);
						{
							while (1) {
								if (!!((check0 == NIM_NIL))) goto LA30;
								{
									if (!((*check0).Sup.id == (*e0).Sup.id)) goto LA33;
									e0 = NIM_NIL;
									goto LA29;
								}
								LA33: ;
								check0 = nextidentiter_301072_2984716966((&it0), (*(*c0).importtable).symbols);
							} LA30: ;
						} LA29: ;
						{
							if (!!((e0 == NIM_NIL))) goto LA37;
							rawimportsymbol_350058_2178338529(c0, e0);
						}
						LA37: ;
						res_350196_2178338529 += ((NI) 1);
					} LA24: ;
				}
			}
		}
		LA19: ;
	}
	goto LA11;
	LA13: ;
	{
		{
			if (!((*s0).kind == ((Tsymkind294435) 15))) goto LA42;
			addconverter_346426_893308950(c0, s0);
		}
		LA42: ;
		{
			NIM_BOOL LOC46;
			LOC46 = (NIM_BOOL)0;
			LOC46 = haspattern_299338_850551059(s0);
			if (!LOC46) goto LA47;
			addpattern_346431_893308950(c0, s0);
		}
		LA47: ;
	}
	LA11: ;
}

N_NIMCALL(void, importallsymbolsexcept_350262_2178338529)(Tcontext346020* c0, Tsym294834* frommod0, Intset270030* exceptset0) {
	Ttabiter301050 i0;
	Tsym294834* s0;
	memset((void*)(&i0), 0, sizeof(i0));
	s0 = inittabiter_301052_2984716966((&i0), (*frommod0).kindU.S3.tab);
	{
		while (1) {
			if (!!((s0 == NIM_NIL))) goto LA2;
			{
				if (!!(((*s0).kind == ((Tsymkind294435) 6)))) goto LA5;
				{
					if (!!(((*s0).kind == ((Tsymkind294435) 19)))) goto LA9;
					{
						NimStringDesc* LOC15;
						if (!!(((21755776 &(1U<<((NU)((*s0).kind)&31U)))!=0))) goto LA13;
						LOC15 = (NimStringDesc*)0;
						LOC15 = rawNewString(reprEnum((NI)(*s0).kind, (&NTI294435))->Sup.len + 18);
appendString(LOC15, ((NimStringDesc*) &T2178338529_12));
appendString(LOC15, reprEnum((NI)(*s0).kind, (&NTI294435)));
						internalerror_198100_155036129((*s0).info, LOC15);
					}
					LA13: ;
					{
						NIM_BOOL LOC18;
						NIM_BOOL LOC20;
						LOC18 = (NIM_BOOL)0;
						LOC18 = isnil_270929_2627731572(exceptset0);
						if (LOC18) goto LA19;
						LOC20 = (NIM_BOOL)0;
						LOC20 = contains_270811_2627731572(exceptset0, (*(*s0).name).Sup.id);
						LOC18 = !(LOC20);
						LA19: ;
						if (!LOC18) goto LA21;
						rawimportsymbol_350058_2178338529(c0, s0);
					}
					LA21: ;
				}
				LA9: ;
			}
			LA5: ;
			s0 = nextiter_301057_2984716966((&i0), (*frommod0).kindU.S3.tab);
		} LA2: ;
	}
}

N_NIMCALL(Tnode294802*, evalimport_350001_2178338529)(Tcontext346020* c0, Tnode294802* n0) {
	Tnode294802* result0;
	Intset270030 emptyset0;
	result0 = (Tnode294802*)0;
	result0 = n0;
	memset((void*)(&emptyset0), 0, sizeof(emptyset0));
	{
		NI i_350512_2178338529;
		NI HEX3Atmp_350529_2178338529;
		NI LOC2;
		NI res_350532_2178338529;
		i_350512_2178338529 = (NI)0;
		HEX3Atmp_350529_2178338529 = (NI)0;
		LOC2 = (NI)0;
		LOC2 = sonslen_297351_850551059(n0);
		HEX3Atmp_350529_2178338529 = (NI)(LOC2 - ((NI) 1));
		res_350532_2178338529 = ((NI) 0);
		{
			while (1) {
				Tsym294834* m0;
				if (!(res_350532_2178338529 <= HEX3Atmp_350529_2178338529)) goto LA4;
				i_350512_2178338529 = res_350532_2178338529;
				m0 = myimportmodule_350474_2178338529(c0, (*n0).kindU.S6.sons->data[i_350512_2178338529]);
				{
					if (!!((m0 == NIM_NIL))) goto LA7;
					adddecl_348461_254525290(c0, m0, (*n0).info);
					importallsymbolsexcept_350262_2178338529(c0, m0, (&emptyset0));
				}
				LA7: ;
				res_350532_2178338529 += ((NI) 1);
			} LA4: ;
		}
	}
	return result0;
}

N_NIMCALL(Tnode294802*, evalimportexcept_350587_2178338529)(Tcontext346020* c0, Tnode294802* n0) {
	Tnode294802* result0;
	Tsym294834* m0;
	result0 = (Tnode294802*)0;
	result0 = n0;
	checkminsonslen_346962_893308950(n0, ((NI) 2));
	m0 = myimportmodule_350474_2178338529(c0, (*n0).kindU.S6.sons->data[((NI) 0)]);
	{
		Intset270030 exceptset0;
		if (!!((m0 == NIM_NIL))) goto LA3;
		asgnRefNoCycle((void**) (&(*n0).kindU.S6.sons->data[((NI) 0)]), newsymnode_296183_850551059(m0));
		adddecl_348461_254525290(c0, m0, (*n0).info);
		memset((void*)(&exceptset0), 0, sizeof(exceptset0));
		chckNil((void*)(&exceptset0));
		memset((void*)(&exceptset0), 0, sizeof(exceptset0));
		initintset_270885_2627731572((&exceptset0));
		{
			NI i_350619_2178338529;
			NI HEX3Atmp_350624_2178338529;
			NI LOC6;
			NI res_350627_2178338529;
			i_350619_2178338529 = (NI)0;
			HEX3Atmp_350624_2178338529 = (NI)0;
			LOC6 = (NI)0;
			LOC6 = sonslen_297351_850551059(n0);
			HEX3Atmp_350624_2178338529 = (NI)(LOC6 - ((NI) 1));
			res_350627_2178338529 = ((NI) 1);
			{
				while (1) {
					Tident201010* ident0;
					if (!(res_350627_2178338529 <= HEX3Atmp_350624_2178338529)) goto LA8;
					i_350619_2178338529 = res_350627_2178338529;
					ident0 = considerquotedident_348004_254525290((*n0).kindU.S6.sons->data[i_350619_2178338529]);
					incl_270832_2627731572((&exceptset0), (*ident0).Sup.id);
					res_350627_2178338529 += ((NI) 1);
				} LA8: ;
			}
		}
		importallsymbolsexcept_350262_2178338529(c0, m0, (&exceptset0));
	}
	LA3: ;
	return result0;
}

N_NIMCALL(void, importsymbol_350200_2178338529)(Tcontext346020* c0, Tnode294802* n0, Tsym294834* frommod0) {
	Tident201010* ident0;
	Tsym294834* s0;
	ident0 = considerquotedident_348004_254525290(n0);
	s0 = strtableget_301045_2984716966((*frommod0).kindU.S3.tab, ident0);
	{
		if (!(s0 == NIM_NIL)) goto LA3;
		localerror_198080_155036129((*n0).info, ((Tmsgkind193002) 63), (*ident0).s);
	}
	goto LA1;
	LA3: ;
	{
		{
			if (!((*s0).kind == ((Tsymkind294435) 22))) goto LA8;
			loadstub_337223_1724185294(s0);
		}
		LA8: ;
		{
			if (!!(((21755776 &(1U<<((NU)((*s0).kind)&31U)))!=0))) goto LA12;
			internalerror_198100_155036129((*n0).info, ((NimStringDesc*) &T2178338529_14));
		}
		LA12: ;
		switch ((*s0).kind) {
		case ((Tsymkind294435) 12):
		case ((Tsymkind294435) 17):
		case ((Tsymkind294435) 16):
		case ((Tsymkind294435) 14):
		case ((Tsymkind294435) 13):
		case ((Tsymkind294435) 15):
		{
			Tidentiter301063 it0;
			Tsym294834* e0;
			memset((void*)(&it0), 0, sizeof(it0));
			e0 = initidentiter_301066_2984716966((&it0), (*frommod0).kindU.S3.tab, (*s0).name);
			{
				while (1) {
					if (!!((e0 == NIM_NIL))) goto LA16;
					{
						if (!!(((*(*e0).name).Sup.id == (*(*s0).name).Sup.id))) goto LA19;
						internalerror_198100_155036129((*n0).info, ((NimStringDesc*) &T2178338529_15));
					}
					LA19: ;
					rawimportsymbol_350058_2178338529(c0, e0);
					e0 = nextidentiter_301072_2984716966((&it0), (*frommod0).kindU.S3.tab);
				} LA16: ;
			}
		}
		break;
		default:
		{
			rawimportsymbol_350058_2178338529(c0, s0);
		}
		break;
		}
	}
	LA1: ;
}

N_NIMCALL(Tnode294802*, evalfrom_350005_2178338529)(Tcontext346020* c0, Tnode294802* n0) {
	Tnode294802* result0;
	Tsym294834* m0;
	result0 = (Tnode294802*)0;
	result0 = n0;
	checkminsonslen_346962_893308950(n0, ((NI) 2));
	m0 = myimportmodule_350474_2178338529(c0, (*n0).kindU.S6.sons->data[((NI) 0)]);
	{
		if (!!((m0 == NIM_NIL))) goto LA3;
		asgnRefNoCycle((void**) (&(*n0).kindU.S6.sons->data[((NI) 0)]), newsymnode_296183_850551059(m0));
		adddecl_348461_254525290(c0, m0, (*n0).info);
		{
			NI i_350567_2178338529;
			NI HEX3Atmp_350580_2178338529;
			NI LOC6;
			NI res_350583_2178338529;
			i_350567_2178338529 = (NI)0;
			HEX3Atmp_350580_2178338529 = (NI)0;
			LOC6 = (NI)0;
			LOC6 = sonslen_297351_850551059(n0);
			HEX3Atmp_350580_2178338529 = (NI)(LOC6 - ((NI) 1));
			res_350583_2178338529 = ((NI) 1);
			{
				while (1) {
					if (!(res_350583_2178338529 <= HEX3Atmp_350580_2178338529)) goto LA8;
					i_350567_2178338529 = res_350583_2178338529;
					{
						if (!!(((*(*n0).kindU.S6.sons->data[i_350567_2178338529]).kind == ((Tnodekind294020) 23)))) goto LA11;
						importsymbol_350200_2178338529(c0, (*n0).kindU.S6.sons->data[i_350567_2178338529], m0);
					}
					LA11: ;
					res_350583_2178338529 += ((NI) 1);
				} LA8: ;
			}
		}
	}
	LA3: ;
	return result0;
}

N_NIMCALL(void, importallsymbols_350324_2178338529)(Tcontext346020* c0, Tsym294834* frommod0) {
	Intset270030 exceptset0;
	memset((void*)(&exceptset0), 0, sizeof(exceptset0));
	importallsymbolsexcept_350262_2178338529(c0, frommod0, (&exceptset0));
}
NIM_EXTERNC N_NOINLINE(void, compiler_importerInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_importerDatInit000)(void) {
}

