/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct tsymseq210820 tsymseq210820;
typedef struct tsym210848 tsym210848;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tcell45346 tcell45346;
typedef struct tcellseq45362 tcellseq45362;
typedef struct tgcheap47616 tgcheap47616;
typedef struct tcellset45358 tcellset45358;
typedef struct tpagedesc45354 tpagedesc45354;
typedef struct tmemregion27610 tmemregion27610;
typedef struct tsmallchunk26840 tsmallchunk26840;
typedef struct tllchunk27604 tllchunk27604;
typedef struct tbigchunk26842 tbigchunk26842;
typedef struct tintset26817 tintset26817;
typedef struct ttrunk26813 ttrunk26813;
typedef struct tavlnode27608 tavlnode27608;
typedef struct tgcstat47614 tgcstat47614;
typedef struct TY554058 TY554058;
typedef struct tmoduleinmemory554017 tmoduleinmemory554017;
typedef struct TY210938 TY210938;
typedef struct tnode210818 tnode210818;
typedef struct tidobj186015 tidobj186015;
typedef struct TNimObject TNimObject;
typedef struct ttypeseq210850 ttypeseq210850;
typedef struct ttype210854 ttype210854;
typedef struct tscope210842 tscope210842;
typedef struct TY210949 TY210949;
typedef struct tinstantiation210838 tinstantiation210838;
typedef struct tstrtable210822 tstrtable210822;
typedef struct tident186021 tident186021;
typedef struct tlineinfo182340 tlineinfo182340;
typedef struct tloc210832 tloc210832;
typedef struct trope179009 trope179009;
typedef struct tlib210836 tlib210836;
typedef struct NimStringDesc NimStringDesc;
typedef struct TY117804 TY117804;
typedef struct trodreader256030 trodreader256030;
typedef struct tllstream197204 tllstream197204;
typedef struct TY87545 TY87545;
typedef struct TY486151 TY486151;
typedef struct tcgen486035 tcgen486035;
typedef struct tbasechunk26838 tbasechunk26838;
typedef struct tfreecell26830 tfreecell26830;
typedef struct tnodeseq210812 tnodeseq210812;
typedef struct tlistentry130022 tlistentry130022;
typedef struct tindex256028 tindex256028;
typedef struct tiitable219274 tiitable219274;
typedef struct tiipairseq219272 tiipairseq219272;
typedef struct tiipair219270 tiipair219270;
typedef struct tidtable210866 tidtable210866;
typedef struct tidpairseq210864 tidpairseq210864;
typedef struct tidpair210862 tidpair210862;
typedef struct memfile254208 memfile254208;
typedef struct tpasscontext265005 tpasscontext265005;
typedef struct intset207056 intset207056;
typedef struct ttrunk207052 ttrunk207052;
typedef struct ttrunkseq207054 ttrunkseq207054;
typedef struct tlinkedlist130028 tlinkedlist130028;
typedef struct tcproc486031 tcproc486031;
typedef struct tnodetable210878 tnodetable210878;
typedef struct tnodepairseq210876 tnodepairseq210876;
typedef struct tnodepair210874 tnodepair210874;
typedef struct TY182353 TY182353;
typedef struct TY486102 TY486102;
typedef struct tblock486029 tblock486029;
struct  TGenericSeq  {
NI len;
NI reserved;
};
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
struct  tcell45346  {
NI Refcount;
TNimType* Typ;
};
struct  tcellseq45362  {
NI Len;
NI Cap;
tcell45346** D;
};
struct  tcellset45358  {
NI Counter;
NI Max;
tpagedesc45354* Head;
tpagedesc45354** Data;
};
typedef tsmallchunk26840* TY27622[512];
typedef ttrunk26813* ttrunkbuckets26815[256];
struct  tintset26817  {
ttrunkbuckets26815 Data;
};
struct  tmemregion27610  {
NI Minlargeobj;
NI Maxlargeobj;
TY27622 Freesmallchunks;
tllchunk27604* Llmem;
NI Currmem;
NI Maxmem;
NI Freemem;
NI Lastsize;
tbigchunk26842* Freechunkslist;
tintset26817 Chunkstarts;
tavlnode27608* Root;
tavlnode27608* Deleted;
tavlnode27608* Last;
tavlnode27608* Freeavlnodes;
};
struct  tgcstat47614  {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
NI64 Maxpause;
};
struct  tgcheap47616  {
void* Stackbottom;
NI Cyclethreshold;
tcellseq45362 Zct;
tcellseq45362 Decstack;
tcellset45358 Cycleroots;
tcellseq45362 Tempstack;
NI Recgclock;
tmemregion27610 Region;
tgcstat47614 Stat;
};
struct  tmoduleinmemory554017  {
NF Compiledat;
NI32 Crc;
TY210938* Deps;
NU8 Needsrecompile;
NU8 Crcstatus;
};
typedef N_NIMCALL_PTR(tnode210818*, TY265069) (tsym210848* m, NI32 fileidx);
struct  TNimObject  {
TNimType* m_type;
};
struct  tidobj186015  {
  TNimObject Sup;
NI Id;
};
struct  tstrtable210822  {
NI Counter;
tsymseq210820* Data;
};
struct  tlineinfo182340  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
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
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef N_NIMCALL_PTR(tsym210848*, TY265064) (tsym210848* m, NI32 fileidx);
struct TY117804 {
NimStringDesc* Field0;
NimStringDesc* Field1;
NimStringDesc* Field2;
};
struct  tident186021  {
  tidobj186015 Sup;
NimStringDesc* S;
tident186021* Next;
NI H;
};
struct TY87545 {
NimStringDesc* Field0;
NI Field1;
};
typedef NI TY26820[8];
struct  tpagedesc45354  {
tpagedesc45354* Next;
NI Key;
TY26820 Bits;
};
struct  tbasechunk26838  {
NI Prevsize;
NI Size;
NIM_BOOL Used;
};
struct  tsmallchunk26840  {
  tbasechunk26838 Sup;
tsmallchunk26840* Next;
tsmallchunk26840* Prev;
tfreecell26830* Freelist;
NI Free;
NI Acc;
NF Data;
};
struct  tllchunk27604  {
NI Size;
NI Acc;
tllchunk27604* Next;
};
struct  tbigchunk26842  {
  tbasechunk26838 Sup;
tbigchunk26842* Next;
tbigchunk26842* Prev;
NI Align;
NF Data;
};
struct  ttrunk26813  {
ttrunk26813* Next;
NI Key;
TY26820 Bits;
};
typedef tavlnode27608* TY27614[2];
struct  tavlnode27608  {
TY27614 Link;
NI Key;
NI Upperbound;
NI Level;
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
struct  tlistentry130022  {
  TNimObject Sup;
tlistentry130022* Prev;
tlistentry130022* Next;
};
struct  tlib210836  {
  tlistentry130022 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope179009* Name;
tnode210818* Path;
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
NI Fhandle;
NI Maphandle;
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
struct  tllstream197204  {
  TNimObject Sup;
NU8 Kind;
FILE* F;
NimStringDesc* S;
NI Rd;
NI Wr;
NI Lineoffset;
};
struct  tpasscontext265005  {
  TNimObject Sup;
NIM_BOOL Fromcache;
};
typedef trope179009* tcfilesections486019[18];
struct  intset207056  {
NI Counter;
NI Max;
ttrunk207052* Head;
ttrunkseq207054* Data;
};
struct  tlinkedlist130028  {
tlistentry130022* Head;
tlistentry130022* Tail;
NI Counter;
};
struct  tnodepair210874  {
NI H;
tnode210818* Key;
NI Val;
};
struct  tnodetable210878  {
NI Counter;
tnodepairseq210876* Data;
};
typedef trope179009* TY486139[10];
struct  tcgen486035  {
  tpasscontext265005 Sup;
tsym210848* Module;
NimStringDesc* Filename;
tcfilesections486019 S;
NIM_BOOL Preventstacktrace;
NIM_BOOL Usesthreadvars;
NIM_BOOL Framedeclared;
NIM_BOOL Isheaderfile;
NIM_BOOL Includesstringh;
NIM_BOOL Objhaskidsvalid;
NimStringDesc* Cfilename;
tidtable210866 Typecache;
tidtable210866 Forwtypecache;
intset207056 Declaredthings;
intset207056 Declaredprotos;
tlinkedlist130028 Headerfiles;
intset207056 Typeinfomarker;
tcproc486031* Initproc;
tcproc486031* Postinitproc;
tcproc486031* Preinitproc;
ttypeseq210850* Typestack;
tnodetable210878 Datacache;
tsymseq210820* Forwardedprocs;
NI Typenodes;
NI Nimtypes;
trope179009* Typenodesname;
trope179009* Nimtypesname;
NI Labels;
TY486139 Extensionloaders;
trope179009* Injectstmt;
};
struct  tfreecell26830  {
tfreecell26830* Next;
NI Zerofield;
};
struct  ttrunk207052  {
ttrunk207052* Next;
NI Key;
TY26820 Bits;
};
typedef trope179009* tcprocsections486023[3];
struct  tblock486029  {
NI Id;
trope179009* Label;
tcprocsections486023 Sections;
NIM_BOOL Isloop;
NI16 Nestedtrystmts;
NI16 Nestedexceptstmts;
NI16 Framelen;
};
struct  tcproc486031  {
tsym210848* Prc;
NIM_BOOL Beforeretneeded;
NIM_BOOL Threadvaraccessed;
tnodeseq210812* Nestedtrystmts;
NI Inexceptblock;
TY182353* Finallysafepoints;
NI Labels;
TY486102* Blocks;
NI Breakidx;
NU32 Options;
NI Maxframelen;
tcgen486035* Module;
NI Withinloop;
NI Splitdecls;
NI Gcframeid;
trope179009* Gcframetype;
};
struct tsymseq210820 {
  TGenericSeq Sup;
  tsym210848* data[SEQ_DECL_SIZE];
};
struct TY210938 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct TY554058 {
  TGenericSeq Sup;
  tmoduleinmemory554017 data[SEQ_DECL_SIZE];
};
struct ttypeseq210850 {
  TGenericSeq Sup;
  ttype210854* data[SEQ_DECL_SIZE];
};
struct TY210949 {
  TGenericSeq Sup;
  tinstantiation210838* data[SEQ_DECL_SIZE];
};
struct TY486151 {
  TGenericSeq Sup;
  tcgen486035* data[SEQ_DECL_SIZE];
};
struct tnodeseq210812 {
  TGenericSeq Sup;
  tnode210818* data[SEQ_DECL_SIZE];
};
struct tiipairseq219272 {
  TGenericSeq Sup;
  tiipair219270 data[SEQ_DECL_SIZE];
};
struct tidpairseq210864 {
  TGenericSeq Sup;
  tidpair210862 data[SEQ_DECL_SIZE];
};
struct ttrunkseq207054 {
  TGenericSeq Sup;
  ttrunk207052* data[SEQ_DECL_SIZE];
};
struct tnodepairseq210876 {
  TGenericSeq Sup;
  tnodepair210874 data[SEQ_DECL_SIZE];
};
struct TY182353 {
  TGenericSeq Sup;
  trope179009* data[SEQ_DECL_SIZE];
};
struct TY486102 {
  TGenericSeq Sup;
  tblock486029 data[SEQ_DECL_SIZE];
};
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell45346*, usrtocell_49246)(void* usr);
static N_INLINE(void, rtladdzct_50804)(tcell45346* c);
N_NOINLINE(void, addzct_49217)(tcellseq45362* s, tcell45346* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP1015)(void* p, NI op);
N_NIMCALL(tnode210818*, includemodule_554917)(tsym210848* s, NI32 fileidx);
N_NIMCALL(tnode210818*, parsefile_241041)(NI32 fileidx);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* seq, NI elemsize, NI newlen);
N_NIMCALL(void, adddep_554176)(tsym210848* x, NI32 dep);
N_NIMCALL(void, safeadd_554211)(TY210938** x_554219, NI32 y_554223);
N_NIMCALL(void, docrc_554158)(NI32 fileidx);
N_NIMCALL(NI32, crcfromfile_178046)(NimStringDesc* filename);
N_NIMCALL(NimStringDesc*, tofilename_183625)(NI32 fileidx);
N_NIMCALL(tsym210848*, importmodule_554875)(tsym210848* s, NI32 fileidx);
N_NIMCALL(tsym210848*, compilemodule_554760)(NI32 fileidx, NU32 flags);
N_NIMCALL(tsym210848*, getmodule_554085)(NI32 fileidx);
N_NIMCALL(tsym210848*, newmodule_554649)(NI32 fileidx);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NimStringDesc*, tofullpath_183637)(NI32 fileidx);
N_NIMCALL(tident186021*, getident_186472)(NimStringDesc* identifier);
N_NIMCALL(void, nossplitFile)(NimStringDesc* path, TY117804* Result);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(NIM_BOOL, isnimidentifier_200325)(NimStringDesc* s);
N_NIMCALL(void, rawmessage_184415)(NU16 msg, NimStringDesc* arg);
N_NIMCALL(tlineinfo182340, newlineinfo_182943)(NI32 fileinfoidx, NI line, NI col);
N_NIMCALL(tsym210848*, newsym_211076)(NU8 symkind, tident186021* name, tsym210848* owner, tlineinfo182340 info);
N_NIMCALL(NimStringDesc*, getpackagename_171825)(NimStringDesc* path);
N_NIMCALL(void, initstrtable_211155)(tstrtable210822* x);
N_NIMCALL(void, strtableadd_219103)(tstrtable210822* t, tsym210848* n);
N_NIMCALL(trodreader256030*, handlesymbolfile_256071)(tsym210848* module);
N_NIMCALL(void, internalerror_184688)(NimStringDesc* errmsg);
static N_INLINE(NI, getid_209404)(void);
N_NIMCALL(void, processmodule_265056)(tsym210848* module, tllstream197204* stream, trodreader256030* rd);
N_NIMCALL(NU8, checkdepmem_554490)(NI32 fileidx);
N_NIMCALL(NIM_BOOL, crcchanged_554113)(NI32 fileidx);
N_NIMCALL(NimStringDesc*, HEX24_184808)(TY87545 x_184812);
N_NIMCALL(void, resetmodule_554397)(NI32 fileidx);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_51625)(tcell45346* c);
static N_INLINE(NIM_BOOL, canbecycleroot_49267)(tcell45346* c);
static N_INLINE(void, rtladdcycleroot_50029)(tcell45346* c);
N_NOINLINE(void, incl_46271)(tcellset45358* s, tcell45346* cell);
static N_INLINE(void, decref_51204)(tcell45346* c);
N_NIMCALL(NIM_BOOL, HEX3DHEX3D_554227)(TY210938* x_554233, TY210938* y_554238);
N_NIMCALL(void, localerror_184637)(tlineinfo182340 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(void, wantmainmodule_555005)(void);
N_NIMCALL(void, fatal_184605)(tlineinfo182340 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(NI32, fileinfoidx_182930)(NimStringDesc* filename);
N_NIMCALL(NimStringDesc*, nosaddFileExt)(NimStringDesc* filename, NimStringDesc* ext);
N_NIMCALL(NimStringDesc*, HEX2F_117499)(NimStringDesc* head, NimStringDesc* tail);
N_NIMCALL(void, compilesystemmodule_554979)(void);
N_NIMCALL(void, resetpackagecache_171605)(void);
STRING_LITERAL(TMP1447, "handleSymbolFile should have set the module\'s ID", 48);
STRING_LITERAL(TMP1450, "compiler/modules.nim", 20);
NIM_CONST TY87545 TMP1449 = {((NimStringDesc*) &TMP1450),
41}
;
STRING_LITERAL(TMP4141, "", 0);
STRING_LITERAL(TMP4142, "nim", 3);
STRING_LITERAL(TMP4143, "system.nim", 10);
STRING_LITERAL(TMP4853, "stdin", 5);
tsymseq210820* gcompiledmodules_554057;
extern TNimType NTI210820; /* TSymSeq */
extern tgcheap47616 gch_47644;
TY554058* gmemcachedata_554079;
TNimType NTI554017; /* TModuleInMemory */
extern TNimType NTI128; /* float */
extern TNimType NTI178010; /* TCrc32 */
extern TNimType NTI210938; /* seq[int32] */
TNimType NTI554013; /* TNeedRecompile */
TNimType NTI554015; /* TCrcStatus */
TNimType NTI554058; /* seq[TModuleInMemory] */
extern TY265069 gincludefile_265073;
extern NU32 gglobaloptions_171128;
extern TY265064 gimportmodule_265068;
extern TNimType NTI210816; /* PSym */
extern TNimType NTI210848; /* TSym */
extern NU8 gcmd_171130;
extern NI gfrontendid_209012;
extern NF glastcmdtime_171141;
extern TY486151* gmodules_486172;
tsym210848* stdinmodule_555083;
extern NimStringDesc* gprojectfull_171239;
extern tlineinfo182340 gcmdlineinfo_183006;
extern NI32 gprojectmainidx_171240;
extern NimStringDesc* libpath_171236;
extern tsym210848* systemmodule_262019;
extern NI32 systemfileidx_182443;

static N_INLINE(tcell45346*, usrtocell_49246)(void* usr) {
	tcell45346* result;
	result = 0;
	result = ((tcell45346*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(tcell45346))))));
	return result;
}

static N_INLINE(void, rtladdzct_50804)(tcell45346* c) {
	addzct_49217((&gch_47644.Zct), c);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tcell45346* c;
	c = usrtocell_49246(p);
	{
		(*c).Refcount -= 8;
		if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA3;
		rtladdzct_50804(c);
	}
	LA3: ;
}
N_NIMCALL(void, TMP1015)(void* p, NI op) {
	TY554058* a;
	NI LOC1;
	a = (TY554058*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Deps, op);
	}
}

N_NIMCALL(void, adddep_554176)(tsym210848* x, NI32 dep) {
	{
		if (!(gmemcachedata_554079->Sup.len <= ((NI) (dep)))) goto LA3;
		gmemcachedata_554079 = (TY554058*) setLengthSeq(&(gmemcachedata_554079)->Sup, sizeof(tmoduleinmemory554017), ((NI) ((NI32)(dep + ((NI32) 1)))));
	}
	LA3: ;
	safeadd_554211((&gmemcachedata_554079->data[(*x).Position].Deps), dep);
}

N_NIMCALL(void, docrc_554158)(NI32 fileidx) {
	{
		NimStringDesc* LOC5;
		if (!(gmemcachedata_554079->data[fileidx].Crcstatus == ((NU8) 0))) goto LA3;
		LOC5 = 0;
		LOC5 = tofilename_183625(fileidx);
		gmemcachedata_554079->data[fileidx].Crc = crcfromfile_178046(LOC5);
	}
	LA3: ;
}

N_NIMCALL(tnode210818*, includemodule_554917)(tsym210848* s, NI32 fileidx) {
	tnode210818* result;
	result = 0;
	result = parsefile_241041(fileidx);
	{
		if (!((gglobaloptions_171128 &(1<<((((NU8) 15))&31)))!=0)) goto LA3;
		{
			if (!(gmemcachedata_554079->Sup.len <= ((NI) (fileidx)))) goto LA7;
			gmemcachedata_554079 = (TY554058*) setLengthSeq(&(gmemcachedata_554079)->Sup, sizeof(tmoduleinmemory554017), ((NI) ((NI32)(fileidx + ((NI32) 1)))));
		}
		LA7: ;
		adddep_554176(s, fileidx);
		docrc_554158(fileidx);
	}
	LA3: ;
	return result;
}

N_NIMCALL(tsym210848*, getmodule_554085)(NI32 fileidx) {
	tsym210848* result;
	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (((NI32) 0) <= fileidx);
		if (!(LOC3)) goto LA4;
		LOC3 = (((NI) (fileidx)) < gcompiledmodules_554057->Sup.len);
		LA4: ;
		if (!LOC3) goto LA5;
		result = gcompiledmodules_554057->data[fileidx];
	}
	LA5: ;
	return result;
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		tcell45346* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_49246(src);
		(*c).Refcount += 8;
	}
	LA3: ;
	{
		tcell45346* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_49246((*dest));
		{
			(*c).Refcount -= 8;
			if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA11;
			rtladdzct_50804(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

N_NIMCALL(tsym210848*, newmodule_554649)(NI32 fileidx) {
	tsym210848* result;
	NimStringDesc* filename;
	TY117804 LOC1;
	NimStringDesc* LOC7;
	tident186021* LOC8;
	result = 0;
	result = (tsym210848*) newObj((&NTI210816), sizeof(tsym210848));
	(*result).Sup.Sup.m_type = (&NTI210848);
	(*result).Sup.Id = -1;
	(*result).Kind = ((NU8) 6);
	filename = tofullpath_183637(fileidx);
	memset((void*)(&LOC1), 0, sizeof(LOC1));
	nossplitFile(filename, (&LOC1));
	asgnRefNoCycle((void**) (&(*result).Name), getident_186472(LOC1.Field1));
	{
		NIM_BOOL LOC4;
		LOC4 = 0;
		LOC4 = isnimidentifier_200325((*(*result).Name).S);
		if (!!(LOC4)) goto LA5;
		rawmessage_184415(((NU16) 21), (*(*result).Name).S);
	}
	LA5: ;
	(*result).Info = newlineinfo_182943(fileidx, 1, 1);
	LOC7 = 0;
	LOC7 = getpackagename_171825(filename);
	LOC8 = 0;
	LOC8 = getident_186472(LOC7);
	asgnRefNoCycle((void**) (&(*result).Owner), newsym_211076(((NU8) 24), LOC8, NIM_NIL, (*result).Info));
	(*result).Position = ((NI) (fileidx));
	{
		if (!(gmemcachedata_554079->Sup.len <= ((NI) (fileidx)))) goto LA11;
		gmemcachedata_554079 = (TY554058*) setLengthSeq(&(gmemcachedata_554079)->Sup, sizeof(tmoduleinmemory554017), ((NI) ((NI32)(fileidx + ((NI32) 1)))));
	}
	LA11: ;
	{
		if (!(gcompiledmodules_554057->Sup.len <= ((NI) (fileidx)))) goto LA15;
		gcompiledmodules_554057 = (tsymseq210820*) setLengthSeq(&(gcompiledmodules_554057)->Sup, sizeof(tsym210848*), ((NI) ((NI32)(fileidx + ((NI32) 1)))));
	}
	LA15: ;
	asgnRefNoCycle((void**) (&gcompiledmodules_554057->data[(*result).Position]), result);
	(*result).Flags |= ((NI32)1)<<((((NU8) 0))%(sizeof(NI32)*8));
	initstrtable_211155((&(*result).kindU.S3.Tab));
	strtableadd_219103((&(*result).kindU.S3.Tab), result);
	return result;
}

static N_INLINE(NI, getid_209404)(void) {
	NI result;
	result = 0;
	result = gfrontendid_209012;
	gfrontendid_209012 += 1;
	return result;
}

N_NIMCALL(NIM_BOOL, crcchanged_554113)(NI32 fileidx) {
	NIM_BOOL result;
	result = 0;
	{
		NIM_BOOL LOC3;
		NimStringDesc* LOC7;
		LOC3 = 0;
		LOC3 = (((NI32) 0) <= fileidx);
		if (!(LOC3)) goto LA4;
		LOC3 = (((NI) (fileidx)) < gmemcachedata_554079->Sup.len);
		LA4: ;
		if (!!(LOC3)) goto LA5;
		LOC7 = 0;
		LOC7 = HEX24_184808(TMP1449);
		internalerror_184688(LOC7);
	}
	LA5: ;
	switch (gmemcachedata_554079->data[fileidx].Crcstatus) {
	case ((NU8) 2):
	{
		result = NIM_TRUE;
	}
	break;
	case ((NU8) 3):
	{
		result = NIM_FALSE;
	}
	break;
	case ((NU8) 1):
	{
		NI32 newcrc;
		NimStringDesc* LOC11;
		LOC11 = 0;
		LOC11 = tofilename_183625(fileidx);
		newcrc = crcfromfile_178046(LOC11);
		result = !((newcrc == gmemcachedata_554079->data[fileidx].Crc));
		gmemcachedata_554079->data[fileidx].Crc = newcrc;
		{
			if (!result) goto LA14;
			gmemcachedata_554079->data[fileidx].Crcstatus = ((NU8) 2);
		}
		goto LA12;
		LA14: ;
		{
			gmemcachedata_554079->data[fileidx].Crcstatus = ((NU8) 3);
		}
		LA12: ;
	}
	break;
	case ((NU8) 0):
	{
		NimStringDesc* LOC18;
		LOC18 = 0;
		LOC18 = tofilename_183625(fileidx);
		gmemcachedata_554079->data[fileidx].Crc = crcfromfile_178046(LOC18);
		result = NIM_TRUE;
		{
			if (!result) goto LA21;
			gmemcachedata_554079->data[fileidx].Crcstatus = ((NU8) 2);
		}
		goto LA19;
		LA21: ;
		{
			gmemcachedata_554079->data[fileidx].Crcstatus = ((NU8) 3);
		}
		LA19: ;
	}
	break;
	}
	return result;
}

static N_INLINE(NIM_BOOL, canbecycleroot_49267)(tcell45346* c) {
	NIM_BOOL result;
	result = 0;
	result = !((((*(*c).Typ).flags &(1<<((((NU8) 1))&7)))!=0));
	return result;
}

static N_INLINE(void, rtladdcycleroot_50029)(tcell45346* c) {
	{
		if (!!((((NI) ((NI)((*c).Refcount & 3))) == 3))) goto LA3;
		(*c).Refcount = (NI)((NI)((*c).Refcount & -4) | 3);
		incl_46271((&gch_47644.Cycleroots), c);
	}
	LA3: ;
}

static N_INLINE(void, incref_51625)(tcell45346* c) {
	(*c).Refcount = (NI)((NU64)((*c).Refcount) + (NU64)(8));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = canbecycleroot_49267(c);
		if (!LOC3) goto LA4;
		rtladdcycleroot_50029(c);
	}
	LA4: ;
}

static N_INLINE(void, decref_51204)(tcell45346* c) {
	{
		(*c).Refcount -= 8;
		if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA3;
		rtladdzct_50804(c);
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		LOC6 = 0;
		LOC6 = canbecycleroot_49267(c);
		if (!LOC6) goto LA7;
		rtladdcycleroot_50029(c);
	}
	goto LA1;
	LA7: ;
	LA1: ;
}

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	{
		tcell45346* LOC5;
		if (!!((src == NIM_NIL))) goto LA3;
		LOC5 = 0;
		LOC5 = usrtocell_49246(src);
		incref_51625(LOC5);
	}
	LA3: ;
	{
		tcell45346* LOC10;
		if (!!(((*dest) == NIM_NIL))) goto LA8;
		LOC10 = 0;
		LOC10 = usrtocell_49246((*dest));
		decref_51204(LOC10);
	}
	LA8: ;
	(*dest) = src;
}

N_NIMCALL(void, resetmodule_554397)(NI32 fileidx) {
	{
		if (!((NU64)(((NI64) (fileidx))) < (NU64)(((NI64) (gmemcachedata_554079->Sup.len))))) goto LA3;
		gmemcachedata_554079->data[fileidx].Needsrecompile = ((NU8) 2);
	}
	LA3: ;
	{
		if (!((NU64)(((NI64) (fileidx))) < (NU64)(((NI64) (gcompiledmodules_554057->Sup.len))))) goto LA7;
		asgnRefNoCycle((void**) (&gcompiledmodules_554057->data[fileidx]), NIM_NIL);
	}
	LA7: ;
	{
		if (!((NU64)(((NI64) (fileidx))) < (NU64)(((NI64) (gmodules_486172->Sup.len))))) goto LA11;
		asgnRef((void**) (&gmodules_486172->data[fileidx]), NIM_NIL);
	}
	LA11: ;
}

N_NIMCALL(NU8, checkdepmem_554490)(NI32 fileidx) {
	NU8 result;
{	result = 0;
	{
		if (!!((gmemcachedata_554079->data[fileidx].Needsrecompile == ((NU8) 0)))) goto LA3;
		result = gmemcachedata_554079->data[fileidx].Needsrecompile;
		goto BeforeRet;
	}
	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = ((gglobaloptions_171128 &(1<<((((NU8) 1))&31)))!=0);
		if (LOC7) goto LA8;
		LOC7 = crcchanged_554113(fileidx);
		LA8: ;
		if (!LOC7) goto LA9;
		resetmodule_554397(fileidx);
		result = ((NU8) 2);
		goto BeforeRet;
	}
	LA9: ;
	{
		NIM_BOOL LOC13;
		LOC13 = 0;
		LOC13 = HEX3DHEX3D_554227(gmemcachedata_554079->data[fileidx].Deps, NIM_NIL);
		if (!!(LOC13)) goto LA14;
		gmemcachedata_554079->data[fileidx].Needsrecompile = ((NU8) 3);
		{
			NI32 dep_554611;
			TY210938* HEX3Atmp_554628;
			NI i_554631;
			NI l_554633;
			dep_554611 = 0;
			HEX3Atmp_554628 = 0;
			HEX3Atmp_554628 = gmemcachedata_554079->data[fileidx].Deps;
			i_554631 = 0;
			l_554633 = HEX3Atmp_554628->Sup.len;
			{
				while (1) {
					NU8 d;
					if (!(i_554631 < l_554633)) goto LA18;
					dep_554611 = HEX3Atmp_554628->data[i_554631];
					d = checkdepmem_554490(dep_554611);
					{
						if (!((20 &(1<<((d)&7)))!=0)) goto LA21;
						resetmodule_554397(fileidx);
						result = ((NU8) 2);
						goto BeforeRet;
					}
					LA21: ;
					i_554631 += 1;
				} LA18: ;
			}
		}
	}
	LA14: ;
	gmemcachedata_554079->data[fileidx].Needsrecompile = ((NU8) 1);
	result = ((NU8) 1);
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(tsym210848*, compilemodule_554760)(NI32 fileidx, NU32 flags) {
	tsym210848* result;
{	result = 0;
	result = getmodule_554085(fileidx);
	{
		trodreader256030* rd;
		if (!(result == NIM_NIL)) goto LA3;
		{
			if (!(gmemcachedata_554079->Sup.len <= ((NI) (fileidx)))) goto LA7;
			gmemcachedata_554079 = (TY554058*) setLengthSeq(&(gmemcachedata_554079)->Sup, sizeof(tmoduleinmemory554017), ((NI) ((NI32)(fileidx + ((NI32) 1)))));
		}
		LA7: ;
		gmemcachedata_554079->data[fileidx].Needsrecompile = ((NU8) 3);
		result = newmodule_554649(fileidx);
		rd = 0;
		(*result).Flags = ((*result).Flags | flags);
		{
			if (!((18438 &(1<<((gcmd_171130)&31)))!=0)) goto LA11;
			rd = handlesymbolfile_256071(result);
			{
				if (!((*result).Sup.Id < 0)) goto LA15;
				internalerror_184688(((NimStringDesc*) &TMP1447));
				goto BeforeRet;
			}
			LA15: ;
		}
		goto LA9;
		LA11: ;
		{
			(*result).Sup.Id = getid_209404();
		}
		LA9: ;
		processmodule_265056(result, NIM_NIL, rd);
		{
			if (!((gglobaloptions_171128 &(1<<((((NU8) 15))&31)))!=0)) goto LA20;
			gmemcachedata_554079->data[fileidx].Compiledat = glastcmdtime_171141;
			gmemcachedata_554079->data[fileidx].Needsrecompile = ((NU8) 4);
			docrc_554158(fileidx);
		}
		LA20: ;
	}
	goto LA1;
	LA3: ;
	{
		{
			NU8 LOC25;
			LOC25 = 0;
			LOC25 = checkdepmem_554490(fileidx);
			if (!(LOC25 == ((NU8) 2))) goto LA26;
			result = compilemodule_554760(fileidx, flags);
		}
		goto LA23;
		LA26: ;
		{
			result = gcompiledmodules_554057->data[fileidx];
		}
		LA23: ;
	}
	LA1: ;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(tsym210848*, importmodule_554875)(tsym210848* s, NI32 fileidx) {
	tsym210848* result;
	result = 0;
	result = compilemodule_554760(fileidx, 0);
	{
		if (!((gglobaloptions_171128 &(1<<((((NU8) 15))&31)))!=0)) goto LA3;
		adddep_554176(s, fileidx);
	}
	LA3: ;
	{
		if (!(((*result).Flags &(1<<((((NU8) 13))&31)))!=0)) goto LA7;
		localerror_184637((*result).Info, ((NU16) 40), (*(*result).Name).S);
	}
	LA7: ;
	return result;
}

N_NIMCALL(void, wantmainmodule_555005)(void) {
	NimStringDesc* LOC5;
	{
		if (!(gprojectfull_171239->Sup.len == 0)) goto LA3;
		fatal_184605(gcmdlineinfo_183006, ((NU16) 186), ((NimStringDesc*) &TMP4141));
	}
	LA3: ;
	LOC5 = 0;
	LOC5 = nosaddFileExt(gprojectfull_171239, ((NimStringDesc*) &TMP4142));
	gprojectmainidx_171240 = fileinfoidx_182930(LOC5);
}

N_NIMCALL(void, compilesystemmodule_554979)(void) {
	{
		NimStringDesc* LOC5;
		tsym210848* LOC6;
		if (!(systemmodule_262019 == NIM_NIL)) goto LA3;
		LOC5 = 0;
		LOC5 = HEX2F_117499(libpath_171236, ((NimStringDesc*) &TMP4143));
		systemfileidx_182443 = fileinfoidx_182930(LOC5);
		LOC6 = 0;
		LOC6 = compilemodule_554760(systemfileidx_182443, 8192);
	}
	LA3: ;
}

N_NIMCALL(void, compileproject_555068)(NI32 projectfileidx) {
	NI32 systemfileidx;
	NimStringDesc* LOC1;
	NI32 projectfile;
	wantmainmodule_555005();
	LOC1 = 0;
	LOC1 = HEX2F_117499(libpath_171236, ((NimStringDesc*) &TMP4143));
	systemfileidx = fileinfoidx_182930(LOC1);
	{
		if (!(projectfileidx < ((NI32) 0))) goto LA4;
		projectfile = gprojectmainidx_171240;
	}
	goto LA2;
	LA4: ;
	{
		projectfile = projectfileidx;
	}
	LA2: ;
	{
		tsym210848* LOC11;
		if (!(projectfile == systemfileidx)) goto LA9;
		LOC11 = 0;
		LOC11 = compilemodule_554760(projectfile, 12288);
	}
	goto LA7;
	LA9: ;
	{
		tsym210848* LOC13;
		compilesystemmodule_554979();
		LOC13 = 0;
		LOC13 = compilemodule_554760(projectfile, 4096);
	}
	LA7: ;
}

N_NIMCALL(tsym210848*, makestdinmodule_555088)(void) {
	tsym210848* result;
	result = 0;
	{
		NI32 LOC5;
		if (!(stdinmodule_555083 == NIM_NIL)) goto LA3;
		LOC5 = 0;
		LOC5 = fileinfoidx_182930(((NimStringDesc*) &TMP4853));
		asgnRefNoCycle((void**) (&stdinmodule_555083), newmodule_554649(LOC5));
		(*stdinmodule_555083).Sup.Id = getid_209404();
	}
	LA3: ;
	result = stdinmodule_555083;
	return result;
}

N_NIMCALL(void, resetallmodules_554439)(void) {
	{
		NI i_554451;
		NI HEX3Atmp_554470;
		NI res_554473;
		i_554451 = 0;
		HEX3Atmp_554470 = 0;
		HEX3Atmp_554470 = (gcompiledmodules_554057->Sup.len-1);
		res_554473 = 0;
		{
			while (1) {
				if (!(res_554473 <= HEX3Atmp_554470)) goto LA3;
				i_554451 = res_554473;
				{
					if (!!((gcompiledmodules_554057->data[i_554451] == NIM_NIL))) goto LA6;
					resetmodule_554397(((NI32) (i_554451)));
				}
				LA6: ;
				res_554473 += 1;
			} LA3: ;
		}
	}
	resetpackagecache_171605();
}
NIM_EXTERNC N_NOINLINE(void, compiler_modulesInit)(void) {
	if (gcompiledmodules_554057) nimGCunrefNoCycle(gcompiledmodules_554057);
	gcompiledmodules_554057 = (tsymseq210820*) newSeqRC1((&NTI210820), 0);
	if (gmemcachedata_554079) nimGCunrefNoCycle(gmemcachedata_554079);
	gmemcachedata_554079 = (TY554058*) newSeqRC1((&NTI554058), 0);
	gincludefile_265073 = includemodule_554917;
	gimportmodule_265068 = importmodule_554875;
}

NIM_EXTERNC N_NOINLINE(void, compiler_modulesDatInit)(void) {
static TNimNode* TMP1008[5];
static TNimNode* TMP1009[5];
NI TMP1011;
static char* NIM_CONST TMP1010[5] = {
"Maybe", 
"No", 
"Yes", 
"Probing", 
"Recompiled"};
static TNimNode* TMP1012[4];
NI TMP1014;
static char* NIM_CONST TMP1013[4] = {
"crcNotTaken", 
"crcCached", 
"crcHasChanged", 
"crcNotChanged"};
static TNimNode TMP1006[17];
NTI554017.size = sizeof(tmoduleinmemory554017);
NTI554017.kind = 18;
NTI554017.base = 0;
NTI554017.flags = 2;
TMP1008[0] = &TMP1006[1];
TMP1006[1].kind = 1;
TMP1006[1].offset = offsetof(tmoduleinmemory554017, Compiledat);
TMP1006[1].typ = (&NTI128);
TMP1006[1].name = "compiledAt";
TMP1008[1] = &TMP1006[2];
TMP1006[2].kind = 1;
TMP1006[2].offset = offsetof(tmoduleinmemory554017, Crc);
TMP1006[2].typ = (&NTI178010);
TMP1006[2].name = "crc";
TMP1008[2] = &TMP1006[3];
TMP1006[3].kind = 1;
TMP1006[3].offset = offsetof(tmoduleinmemory554017, Deps);
TMP1006[3].typ = (&NTI210938);
TMP1006[3].name = "deps";
TMP1008[3] = &TMP1006[4];
NTI554013.size = sizeof(NU8);
NTI554013.kind = 14;
NTI554013.base = 0;
NTI554013.flags = 3;
for (TMP1011 = 0; TMP1011 < 5; TMP1011++) {
TMP1006[TMP1011+5].kind = 1;
TMP1006[TMP1011+5].offset = TMP1011;
TMP1006[TMP1011+5].name = TMP1010[TMP1011];
TMP1009[TMP1011] = &TMP1006[TMP1011+5];
}
TMP1006[10].len = 5; TMP1006[10].kind = 2; TMP1006[10].sons = &TMP1009[0];
NTI554013.node = &TMP1006[10];
TMP1006[4].kind = 1;
TMP1006[4].offset = offsetof(tmoduleinmemory554017, Needsrecompile);
TMP1006[4].typ = (&NTI554013);
TMP1006[4].name = "needsRecompile";
TMP1008[4] = &TMP1006[11];
NTI554015.size = sizeof(NU8);
NTI554015.kind = 14;
NTI554015.base = 0;
NTI554015.flags = 3;
for (TMP1014 = 0; TMP1014 < 4; TMP1014++) {
TMP1006[TMP1014+12].kind = 1;
TMP1006[TMP1014+12].offset = TMP1014;
TMP1006[TMP1014+12].name = TMP1013[TMP1014];
TMP1012[TMP1014] = &TMP1006[TMP1014+12];
}
TMP1006[16].len = 4; TMP1006[16].kind = 2; TMP1006[16].sons = &TMP1012[0];
NTI554015.node = &TMP1006[16];
TMP1006[11].kind = 1;
TMP1006[11].offset = offsetof(tmoduleinmemory554017, Crcstatus);
TMP1006[11].typ = (&NTI554015);
TMP1006[11].name = "crcStatus";
TMP1006[0].len = 5; TMP1006[0].kind = 2; TMP1006[0].sons = &TMP1008[0];
NTI554017.node = &TMP1006[0];
NTI554058.size = sizeof(TY554058*);
NTI554058.kind = 24;
NTI554058.base = (&NTI554017);
NTI554058.flags = 2;
NTI554058.marker = TMP1015;
}
