/* Generated by Nim Compiler v0.14.3 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Tinfocpu176476 Tinfocpu176476;
typedef struct Tinfoos176035 Tinfoos176035;
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
typedef struct Basechunk29437 Basechunk29437;
typedef struct Freecell29429 Freecell29429;
typedef NU8 Tsystemcpu176452;
typedef NU8 Tsystemos176004;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
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
typedef NU8 Tendian176474;
struct Tinfocpu176476 {
NimStringDesc* Field0;
NI Field1;
Tendian176474 Field2;
NI Field3;
NI Field4;
};
typedef Tinfocpu176476 TY176510[19];
typedef NU8 Tinfoosprop176031Set;
struct Tinfoos176035 {
NimStringDesc* Field0;
NimStringDesc* Field1;
NimStringDesc* Field2;
NimStringDesc* Field3;
NimStringDesc* Field4;
NimStringDesc* Field5;
NimStringDesc* Field6;
NimStringDesc* Field7;
NimStringDesc* Field8;
NimStringDesc* Field9;
NimStringDesc* Field10;
NimStringDesc* Field11;
Tinfoosprop176031Set Field12;
};
typedef Tinfoos176035 TY176082[24];
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
struct  Freecell29429  {
Freecell29429* next;
NI zerofield;
};
N_NIMCALL(void, nimGCvisit)(void* d0, NI op0);
N_NIMCALL(void, T4151366050_2)(void);
N_NIMCALL(void, nimRegisterGlobalMarker)(Globalmarkerproc55802 markerproc0);
N_NIMCALL(Tsystemcpu176452, nametocpu_176638_4151366050)(NimStringDesc* name0);
N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* a0, NimStringDesc* b0);
N_NIMCALL(Tsystemos176004, nametoos_176635_4151366050)(NimStringDesc* name0);
N_NIMCALL(void, settarget_176649_4151366050)(Tsystemos176004 o0, Tsystemcpu176452 c0);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src0);
static N_INLINE(void, nimGCunrefNoCycle)(void* p0);
static N_INLINE(Cell47305*, usrtocell_51440_1689653243)(void* usr0);
static N_INLINE(void, rtladdzct_52601_1689653243)(Cell47305* c0);
N_NOINLINE(void, addzct_51417_1689653243)(Cellseq47321* s0, Cell47305* c0);
STRING_LITERAL(T4151366050_3, "i386", 4);
STRING_LITERAL(T4151366050_4, "m68k", 4);
STRING_LITERAL(T4151366050_5, "alpha", 5);
STRING_LITERAL(T4151366050_6, "powerpc", 7);
STRING_LITERAL(T4151366050_7, "powerpc64", 9);
STRING_LITERAL(T4151366050_8, "powerpc64el", 11);
STRING_LITERAL(T4151366050_9, "sparc", 5);
STRING_LITERAL(T4151366050_10, "vm", 2);
STRING_LITERAL(T4151366050_11, "ia64", 4);
STRING_LITERAL(T4151366050_12, "amd64", 5);
STRING_LITERAL(T4151366050_13, "mips", 4);
STRING_LITERAL(T4151366050_14, "mipsel", 6);
STRING_LITERAL(T4151366050_15, "arm", 3);
STRING_LITERAL(T4151366050_16, "arm64", 5);
STRING_LITERAL(T4151366050_17, "js", 2);
STRING_LITERAL(T4151366050_18, "nimrodvm", 8);
STRING_LITERAL(T4151366050_19, "avr", 3);
STRING_LITERAL(T4151366050_20, "msp430", 6);
STRING_LITERAL(T4151366050_21, "sparc64", 7);
NIM_CONST TY176510 Cpu_176496_4151366050 = {{((NimStringDesc*) &T4151366050_3),
((NI) 32),
((Tendian176474) 0),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &T4151366050_4),
((NI) 32),
((Tendian176474) 1),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &T4151366050_5),
((NI) 64),
((Tendian176474) 0),
((NI) 64),
((NI) 64)}
,
{((NimStringDesc*) &T4151366050_6),
((NI) 32),
((Tendian176474) 1),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &T4151366050_7),
((NI) 64),
((Tendian176474) 1),
((NI) 64),
((NI) 64)}
,
{((NimStringDesc*) &T4151366050_8),
((NI) 64),
((Tendian176474) 0),
((NI) 64),
((NI) 64)}
,
{((NimStringDesc*) &T4151366050_9),
((NI) 32),
((Tendian176474) 1),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &T4151366050_10),
((NI) 32),
((Tendian176474) 0),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &T4151366050_11),
((NI) 64),
((Tendian176474) 0),
((NI) 64),
((NI) 64)}
,
{((NimStringDesc*) &T4151366050_12),
((NI) 64),
((Tendian176474) 0),
((NI) 64),
((NI) 64)}
,
{((NimStringDesc*) &T4151366050_13),
((NI) 32),
((Tendian176474) 1),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &T4151366050_14),
((NI) 32),
((Tendian176474) 0),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &T4151366050_15),
((NI) 32),
((Tendian176474) 0),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &T4151366050_16),
((NI) 64),
((Tendian176474) 0),
((NI) 64),
((NI) 64)}
,
{((NimStringDesc*) &T4151366050_17),
((NI) 32),
((Tendian176474) 1),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &T4151366050_18),
((NI) 32),
((Tendian176474) 1),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &T4151366050_19),
((NI) 16),
((Tendian176474) 0),
((NI) 32),
((NI) 16)}
,
{((NimStringDesc*) &T4151366050_20),
((NI) 16),
((Tendian176474) 0),
((NI) 32),
((NI) 16)}
,
{((NimStringDesc*) &T4151366050_21),
((NI) 64),
((Tendian176474) 1),
((NI) 64),
((NI) 64)}
}
;
STRING_LITERAL(T4151366050_22, "DOS", 3);
STRING_LITERAL(T4151366050_23, "..", 2);
STRING_LITERAL(T4151366050_24, "$1.dll", 6);
STRING_LITERAL(T4151366050_25, "/", 1);
STRING_LITERAL(T4151366050_26, ".obj", 4);
STRING_LITERAL(T4151366050_27, "\015\012", 2);
STRING_LITERAL(T4151366050_28, ";", 1);
STRING_LITERAL(T4151366050_29, "\\", 1);
STRING_LITERAL(T4151366050_30, ".bat", 4);
STRING_LITERAL(T4151366050_31, ".", 1);
STRING_LITERAL(T4151366050_32, ".exe", 4);
STRING_LITERAL(T4151366050_33, "Windows", 7);
STRING_LITERAL(T4151366050_34, "OS2", 3);
STRING_LITERAL(T4151366050_35, "Linux", 5);
STRING_LITERAL(T4151366050_36, "lib$1.so", 8);
STRING_LITERAL(T4151366050_37, ".o", 2);
STRING_LITERAL(T4151366050_38, "\012", 1);
STRING_LITERAL(T4151366050_39, ":", 1);
STRING_LITERAL(T4151366050_40, ".sh", 3);
STRING_LITERAL(T4151366050_41, "", 0);
STRING_LITERAL(T4151366050_42, "MorphOS", 7);
STRING_LITERAL(T4151366050_43, "SkyOS", 5);
STRING_LITERAL(T4151366050_44, "Solaris", 7);
STRING_LITERAL(T4151366050_45, "Irix", 4);
STRING_LITERAL(T4151366050_46, "NetBSD", 6);
STRING_LITERAL(T4151366050_47, "FreeBSD", 7);
STRING_LITERAL(T4151366050_48, "OpenBSD", 7);
STRING_LITERAL(T4151366050_49, "AIX", 3);
STRING_LITERAL(T4151366050_50, "PalmOS", 6);
STRING_LITERAL(T4151366050_51, "QNX", 3);
STRING_LITERAL(T4151366050_52, "Amiga", 5);
STRING_LITERAL(T4151366050_53, "$1.library", 10);
STRING_LITERAL(T4151366050_54, "Atari", 5);
STRING_LITERAL(T4151366050_55, ".tpp", 4);
STRING_LITERAL(T4151366050_56, "Netware", 7);
STRING_LITERAL(T4151366050_57, "$1.nlm", 6);
STRING_LITERAL(T4151366050_58, ".nlm", 4);
STRING_LITERAL(T4151366050_59, "MacOS", 5);
STRING_LITERAL(T4151366050_60, "::", 2);
STRING_LITERAL(T4151366050_61, "$1Lib", 5);
STRING_LITERAL(T4151366050_62, "\015", 1);
STRING_LITERAL(T4151366050_63, ",", 1);
STRING_LITERAL(T4151366050_64, "MacOSX", 6);
STRING_LITERAL(T4151366050_65, "lib$1.dylib", 11);
STRING_LITERAL(T4151366050_66, "Haiku", 5);
STRING_LITERAL(T4151366050_67, "VxWorks", 7);
STRING_LITERAL(T4151366050_68, ".vxe", 4);
STRING_LITERAL(T4151366050_69, "JS", 2);
STRING_LITERAL(T4151366050_70, "NimrodVM", 8);
STRING_LITERAL(T4151366050_71, "Standalone", 10);
NIM_CONST TY176082 Os_176068_4151366050 = {{((NimStringDesc*) &T4151366050_22),
((NimStringDesc*) &T4151366050_23),
((NimStringDesc*) &T4151366050_24),
((NimStringDesc*) &T4151366050_25),
((NimStringDesc*) &T4151366050_26),
((NimStringDesc*) &T4151366050_27),
((NimStringDesc*) &T4151366050_28),
((NimStringDesc*) &T4151366050_29),
((NimStringDesc*) &T4151366050_30),
((NimStringDesc*) &T4151366050_31),
((NimStringDesc*) &T4151366050_32),
((NimStringDesc*) &T4151366050_31),
2}
,
{((NimStringDesc*) &T4151366050_33),
((NimStringDesc*) &T4151366050_23),
((NimStringDesc*) &T4151366050_24),
((NimStringDesc*) &T4151366050_25),
((NimStringDesc*) &T4151366050_26),
((NimStringDesc*) &T4151366050_27),
((NimStringDesc*) &T4151366050_28),
((NimStringDesc*) &T4151366050_29),
((NimStringDesc*) &T4151366050_30),
((NimStringDesc*) &T4151366050_31),
((NimStringDesc*) &T4151366050_32),
((NimStringDesc*) &T4151366050_31),
2}
,
{((NimStringDesc*) &T4151366050_34),
((NimStringDesc*) &T4151366050_23),
((NimStringDesc*) &T4151366050_24),
((NimStringDesc*) &T4151366050_25),
((NimStringDesc*) &T4151366050_26),
((NimStringDesc*) &T4151366050_27),
((NimStringDesc*) &T4151366050_28),
((NimStringDesc*) &T4151366050_29),
((NimStringDesc*) &T4151366050_30),
((NimStringDesc*) &T4151366050_31),
((NimStringDesc*) &T4151366050_32),
((NimStringDesc*) &T4151366050_31),
2}
,
{((NimStringDesc*) &T4151366050_35),
((NimStringDesc*) &T4151366050_23),
((NimStringDesc*) &T4151366050_36),
((NimStringDesc*) &T4151366050_25),
((NimStringDesc*) &T4151366050_37),
((NimStringDesc*) &T4151366050_38),
((NimStringDesc*) &T4151366050_39),
((NimStringDesc*) &T4151366050_25),
((NimStringDesc*) &T4151366050_40),
((NimStringDesc*) &T4151366050_31),
((NimStringDesc*) &T4151366050_41),
((NimStringDesc*) &T4151366050_31),
5}
,
{((NimStringDesc*) &T4151366050_42),
((NimStringDesc*) &T4151366050_23),
((NimStringDesc*) &T4151366050_36),
((NimStringDesc*) &T4151366050_25),
((NimStringDesc*) &T4151366050_37),
((NimStringDesc*) &T4151366050_38),
((NimStringDesc*) &T4151366050_39),
((NimStringDesc*) &T4151366050_25),
((NimStringDesc*) &T4151366050_40),
((NimStringDesc*) &T4151366050_31),
((NimStringDesc*) &T4151366050_41),
((NimStringDesc*) &T4151366050_31),
5}
,
{((NimStringDesc*) &T4151366050_43),
((NimStringDesc*) &T4151366050_23),
((NimStringDesc*) &T4151366050_36),
((NimStringDesc*) &T4151366050_25),
((NimStringDesc*) &T4151366050_37),
((NimStringDesc*) &T4151366050_38),
((NimStringDesc*) &T4151366050_39),
((NimStringDesc*) &T4151366050_25),
((NimStringDesc*) &T4151366050_40),
((NimStringDesc*) &T4151366050_31),
((NimStringDesc*) &T4151366050_41),
((NimStringDesc*) &T4151366050_31),
5}
,
{((NimStringDesc*) &T4151366050_44),
((NimStringDesc*) &T4151366050_23),
((NimStringDesc*) &T4151366050_36),
((NimStringDesc*) &T4151366050_25),
((NimStringDesc*) &T4151366050_37),
((NimStringDesc*) &T4151366050_38),
((NimStringDesc*) &T4151366050_39),
((NimStringDesc*) &T4151366050_25),
((NimStringDesc*) &T4151366050_40),
((NimStringDesc*) &T4151366050_31),
((NimStringDesc*) &T4151366050_41),
((NimStringDesc*) &T4151366050_31),
5}
,
{((NimStringDesc*) &T4151366050_45),
((NimStringDesc*) &T4151366050_23),
((NimStringDesc*) &T4151366050_36),
((NimStringDesc*) &T4151366050_25),
((NimStringDesc*) &T4151366050_37),
((NimStringDesc*) &T4151366050_38),
((NimStringDesc*) &T4151366050_39),
((NimStringDesc*) &T4151366050_25),
((NimStringDesc*) &T4151366050_40),
((NimStringDesc*) &T4151366050_31),
((NimStringDesc*) &T4151366050_41),
((NimStringDesc*) &T4151366050_31),
5}
,
{((NimStringDesc*) &T4151366050_46),
((NimStringDesc*) &T4151366050_23),
((NimStringDesc*) &T4151366050_36),
((NimStringDesc*) &T4151366050_25),
((NimStringDesc*) &T4151366050_37),
((NimStringDesc*) &T4151366050_38),
((NimStringDesc*) &T4151366050_39),
((NimStringDesc*) &T4151366050_25),
((NimStringDesc*) &T4151366050_40),
((NimStringDesc*) &T4151366050_31),
((NimStringDesc*) &T4151366050_41),
((NimStringDesc*) &T4151366050_31),
5}
,
{((NimStringDesc*) &T4151366050_47),
((NimStringDesc*) &T4151366050_23),
((NimStringDesc*) &T4151366050_36),
((NimStringDesc*) &T4151366050_25),
((NimStringDesc*) &T4151366050_37),
((NimStringDesc*) &T4151366050_38),
((NimStringDesc*) &T4151366050_39),
((NimStringDesc*) &T4151366050_25),
((NimStringDesc*) &T4151366050_40),
((NimStringDesc*) &T4151366050_31),
((NimStringDesc*) &T4151366050_41),
((NimStringDesc*) &T4151366050_31),
5}
,
{((NimStringDesc*) &T4151366050_48),
((NimStringDesc*) &T4151366050_23),
((NimStringDesc*) &T4151366050_36),
((NimStringDesc*) &T4151366050_25),
((NimStringDesc*) &T4151366050_37),
((NimStringDesc*) &T4151366050_38),
((NimStringDesc*) &T4151366050_39),
((NimStringDesc*) &T4151366050_25),
((NimStringDesc*) &T4151366050_40),
((NimStringDesc*) &T4151366050_31),
((NimStringDesc*) &T4151366050_41),
((NimStringDesc*) &T4151366050_31),
5}
,
{((NimStringDesc*) &T4151366050_49),
((NimStringDesc*) &T4151366050_23),
((NimStringDesc*) &T4151366050_36),
((NimStringDesc*) &T4151366050_25),
((NimStringDesc*) &T4151366050_37),
((NimStringDesc*) &T4151366050_38),
((NimStringDesc*) &T4151366050_39),
((NimStringDesc*) &T4151366050_25),
((NimStringDesc*) &T4151366050_40),
((NimStringDesc*) &T4151366050_31),
((NimStringDesc*) &T4151366050_41),
((NimStringDesc*) &T4151366050_31),
5}
,
{((NimStringDesc*) &T4151366050_50),
((NimStringDesc*) &T4151366050_23),
((NimStringDesc*) &T4151366050_36),
((NimStringDesc*) &T4151366050_25),
((NimStringDesc*) &T4151366050_37),
((NimStringDesc*) &T4151366050_38),
((NimStringDesc*) &T4151366050_39),
((NimStringDesc*) &T4151366050_25),
((NimStringDesc*) &T4151366050_40),
((NimStringDesc*) &T4151366050_31),
((NimStringDesc*) &T4151366050_41),
((NimStringDesc*) &T4151366050_31),
1}
,
{((NimStringDesc*) &T4151366050_51),
((NimStringDesc*) &T4151366050_23),
((NimStringDesc*) &T4151366050_36),
((NimStringDesc*) &T4151366050_25),
((NimStringDesc*) &T4151366050_37),
((NimStringDesc*) &T4151366050_38),
((NimStringDesc*) &T4151366050_39),
((NimStringDesc*) &T4151366050_25),
((NimStringDesc*) &T4151366050_40),
((NimStringDesc*) &T4151366050_31),
((NimStringDesc*) &T4151366050_41),
((NimStringDesc*) &T4151366050_31),
5}
,
{((NimStringDesc*) &T4151366050_52),
((NimStringDesc*) &T4151366050_23),
((NimStringDesc*) &T4151366050_53),
((NimStringDesc*) &T4151366050_25),
((NimStringDesc*) &T4151366050_37),
((NimStringDesc*) &T4151366050_38),
((NimStringDesc*) &T4151366050_39),
((NimStringDesc*) &T4151366050_25),
((NimStringDesc*) &T4151366050_40),
((NimStringDesc*) &T4151366050_31),
((NimStringDesc*) &T4151366050_41),
((NimStringDesc*) &T4151366050_31),
1}
,
{((NimStringDesc*) &T4151366050_54),
((NimStringDesc*) &T4151366050_23),
((NimStringDesc*) &T4151366050_24),
((NimStringDesc*) &T4151366050_25),
((NimStringDesc*) &T4151366050_37),
((NimStringDesc*) &T4151366050_38),
((NimStringDesc*) &T4151366050_39),
((NimStringDesc*) &T4151366050_25),
((NimStringDesc*) &T4151366050_41),
((NimStringDesc*) &T4151366050_31),
((NimStringDesc*) &T4151366050_55),
((NimStringDesc*) &T4151366050_31),
1}
,
{((NimStringDesc*) &T4151366050_56),
((NimStringDesc*) &T4151366050_23),
((NimStringDesc*) &T4151366050_57),
((NimStringDesc*) &T4151366050_25),
((NimStringDesc*) &T4151366050_41),
((NimStringDesc*) &T4151366050_27),
((NimStringDesc*) &T4151366050_39),
((NimStringDesc*) &T4151366050_25),
((NimStringDesc*) &T4151366050_40),
((NimStringDesc*) &T4151366050_31),
((NimStringDesc*) &T4151366050_58),
((NimStringDesc*) &T4151366050_31),
2}
,
{((NimStringDesc*) &T4151366050_59),
((NimStringDesc*) &T4151366050_60),
((NimStringDesc*) &T4151366050_61),
((NimStringDesc*) &T4151366050_39),
((NimStringDesc*) &T4151366050_37),
((NimStringDesc*) &T4151366050_62),
((NimStringDesc*) &T4151366050_63),
((NimStringDesc*) &T4151366050_39),
((NimStringDesc*) &T4151366050_41),
((NimStringDesc*) &T4151366050_39),
((NimStringDesc*) &T4151366050_41),
((NimStringDesc*) &T4151366050_31),
2}
,
{((NimStringDesc*) &T4151366050_64),
((NimStringDesc*) &T4151366050_23),
((NimStringDesc*) &T4151366050_65),
((NimStringDesc*) &T4151366050_39),
((NimStringDesc*) &T4151366050_37),
((NimStringDesc*) &T4151366050_38),
((NimStringDesc*) &T4151366050_39),
((NimStringDesc*) &T4151366050_25),
((NimStringDesc*) &T4151366050_40),
((NimStringDesc*) &T4151366050_31),
((NimStringDesc*) &T4151366050_41),
((NimStringDesc*) &T4151366050_31),
13}
,
{((NimStringDesc*) &T4151366050_66),
((NimStringDesc*) &T4151366050_23),
((NimStringDesc*) &T4151366050_36),
((NimStringDesc*) &T4151366050_39),
((NimStringDesc*) &T4151366050_37),
((NimStringDesc*) &T4151366050_38),
((NimStringDesc*) &T4151366050_39),
((NimStringDesc*) &T4151366050_25),
((NimStringDesc*) &T4151366050_40),
((NimStringDesc*) &T4151366050_31),
((NimStringDesc*) &T4151366050_41),
((NimStringDesc*) &T4151366050_31),
13}
,
{((NimStringDesc*) &T4151366050_67),
((NimStringDesc*) &T4151366050_23),
((NimStringDesc*) &T4151366050_36),
((NimStringDesc*) &T4151366050_25),
((NimStringDesc*) &T4151366050_37),
((NimStringDesc*) &T4151366050_38),
((NimStringDesc*) &T4151366050_28),
((NimStringDesc*) &T4151366050_29),
((NimStringDesc*) &T4151366050_40),
((NimStringDesc*) &T4151366050_31),
((NimStringDesc*) &T4151366050_68),
((NimStringDesc*) &T4151366050_31),
13}
,
{((NimStringDesc*) &T4151366050_69),
((NimStringDesc*) &T4151366050_23),
((NimStringDesc*) &T4151366050_36),
((NimStringDesc*) &T4151366050_25),
((NimStringDesc*) &T4151366050_37),
((NimStringDesc*) &T4151366050_38),
((NimStringDesc*) &T4151366050_39),
((NimStringDesc*) &T4151366050_25),
((NimStringDesc*) &T4151366050_40),
((NimStringDesc*) &T4151366050_31),
((NimStringDesc*) &T4151366050_41),
((NimStringDesc*) &T4151366050_31),
0}
,
{((NimStringDesc*) &T4151366050_70),
((NimStringDesc*) &T4151366050_23),
((NimStringDesc*) &T4151366050_36),
((NimStringDesc*) &T4151366050_25),
((NimStringDesc*) &T4151366050_37),
((NimStringDesc*) &T4151366050_38),
((NimStringDesc*) &T4151366050_39),
((NimStringDesc*) &T4151366050_25),
((NimStringDesc*) &T4151366050_40),
((NimStringDesc*) &T4151366050_31),
((NimStringDesc*) &T4151366050_41),
((NimStringDesc*) &T4151366050_31),
0}
,
{((NimStringDesc*) &T4151366050_71),
((NimStringDesc*) &T4151366050_23),
((NimStringDesc*) &T4151366050_36),
((NimStringDesc*) &T4151366050_25),
((NimStringDesc*) &T4151366050_37),
((NimStringDesc*) &T4151366050_38),
((NimStringDesc*) &T4151366050_39),
((NimStringDesc*) &T4151366050_25),
((NimStringDesc*) &T4151366050_40),
((NimStringDesc*) &T4151366050_31),
((NimStringDesc*) &T4151366050_41),
((NimStringDesc*) &T4151366050_31),
0}
}
;
STRING_LITERAL(T4151366050_72, "solaris", 7);
Tsystemcpu176452 targetcpu_176627_4151366050;
Tsystemcpu176452 hostcpu_176628_4151366050;
Tsystemos176004 targetos_176629_4151366050;
Tsystemos176004 hostos_176630_4151366050;
NI intsize_176641_4151366050;
NI floatsize_176642_4151366050;
NI ptrsize_176643_4151366050;
NimStringDesc* tnl_176644_4151366050;
extern TNimType NTI138; /* string */
extern Gcheap49818 gch_49858_1689653243;
N_NIMCALL(void, T4151366050_2)(void) {
	nimGCvisit((void*)tnl_176644_4151366050, 0);
}

N_NIMCALL(Tsystemcpu176452, nametocpu_176638_4151366050)(NimStringDesc* name0) {
	Tsystemcpu176452 result0;
{	result0 = (Tsystemcpu176452)0;
	{
		Tsystemcpu176452 i_177414_4151366050;
		NI res_177419_4151366050;
		i_177414_4151366050 = (Tsystemcpu176452)0;
		res_177419_4151366050 = ((NI) 1);
		{
			while (1) {
				if (!(res_177419_4151366050 <= ((NI) 19))) goto LA3;
				i_177414_4151366050 = ((Tsystemcpu176452) (res_177419_4151366050));
				{
					NI LOC6;
					LOC6 = (NI)0;
					LOC6 = nsuCmpIgnoreStyle(name0, Cpu_176496_4151366050[(i_177414_4151366050)- 1].Field0);
					if (!(LOC6 == ((NI) 0))) goto LA7;
					result0 = i_177414_4151366050;
					goto BeforeRet;
				}
				LA7: ;
				res_177419_4151366050 += ((NI) 1);
			} LA3: ;
		}
	}
	result0 = ((Tsystemcpu176452) 0);
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(Tsystemos176004, nametoos_176635_4151366050)(NimStringDesc* name0) {
	Tsystemos176004 result0;
{	result0 = (Tsystemos176004)0;
	{
		Tsystemos176004 i_177214_4151366050;
		NI res_177219_4151366050;
		i_177214_4151366050 = (Tsystemos176004)0;
		res_177219_4151366050 = ((NI) 1);
		{
			while (1) {
				if (!(res_177219_4151366050 <= ((NI) 24))) goto LA3;
				i_177214_4151366050 = ((Tsystemos176004) (res_177219_4151366050));
				{
					NI LOC6;
					LOC6 = (NI)0;
					LOC6 = nsuCmpIgnoreStyle(name0, Os_176068_4151366050[(i_177214_4151366050)- 1].Field0);
					if (!(LOC6 == ((NI) 0))) goto LA7;
					result0 = i_177214_4151366050;
					goto BeforeRet;
				}
				LA7: ;
				res_177219_4151366050 += ((NI) 1);
			} LA3: ;
		}
	}
	result0 = ((Tsystemos176004) 0);
	}BeforeRet: ;
	return result0;
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

static N_INLINE(void, nimGCunrefNoCycle)(void* p0) {
	Cell47305* c0;
	c0 = usrtocell_51440_1689653243(p0);
	{
		(*c0).refcount -= ((NI) 8);
		if (!((NU32)((*c0).refcount) < (NU32)(((NI) 8)))) goto LA3;
		rtladdzct_52601_1689653243(c0);
	}
	LA3: ;
}

N_NIMCALL(void, settarget_176649_4151366050)(Tsystemos176004 o0, Tsystemcpu176452 c0) {
	NimStringDesc* LOC1;
	targetcpu_176627_4151366050 = c0;
	targetos_176629_4151366050 = o0;
	intsize_176641_4151366050 = (NI)(Cpu_176496_4151366050[(c0)- 1].Field1 / ((NI) 8));
	floatsize_176642_4151366050 = (NI)(Cpu_176496_4151366050[(c0)- 1].Field3 / ((NI) 8));
	ptrsize_176643_4151366050 = (NI)(Cpu_176496_4151366050[(c0)- 1].Field4 / ((NI) 8));
	LOC1 = (NimStringDesc*)0;
	LOC1 = tnl_176644_4151366050; tnl_176644_4151366050 = copyStringRC1(Os_176068_4151366050[(o0)- 1].Field5);
	if (LOC1) nimGCunrefNoCycle(LOC1);
}
NIM_EXTERNC N_NOINLINE(void, compiler_platformInit000)(void) {
nimRegisterGlobalMarker(T4151366050_2);
	hostcpu_176628_4151366050 = nametocpu_176638_4151366050(((NimStringDesc*) &T4151366050_3));
	hostos_176630_4151366050 = nametoos_176635_4151366050(((NimStringDesc*) &T4151366050_72));
	settarget_176649_4151366050(hostos_176630_4151366050, hostcpu_176628_4151366050);
}

NIM_EXTERNC N_NOINLINE(void, compiler_platformDatInit000)(void) {
}

