/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct tiitable218274 tiitable218274;
typedef struct tiipairseq218272 tiipairseq218272;
typedef struct tiipair218270 tiipair218270;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tstrtable209822 tstrtable209822;
typedef struct tsym209848 tsym209848;
typedef struct tsymseq209820 tsymseq209820;
typedef struct tidobj185015 tidobj185015;
typedef struct TNimObject TNimObject;
typedef struct ttypeseq209850 ttypeseq209850;
typedef struct ttype209854 ttype209854;
typedef struct tscope209842 tscope209842;
typedef struct TY209949 TY209949;
typedef struct tinstantiation209838 tinstantiation209838;
typedef struct tident185021 tident185021;
typedef struct tlineinfo181340 tlineinfo181340;
typedef struct tnode209818 tnode209818;
typedef struct tloc209832 tloc209832;
typedef struct trope178009 trope178009;
typedef struct tlib209836 tlib209836;
typedef struct NimStringDesc NimStringDesc;
typedef struct tcell45548 tcell45548;
typedef struct tcellseq45564 tcellseq45564;
typedef struct tgcheap47816 tgcheap47816;
typedef struct tcellset45560 tcellset45560;
typedef struct tpagedesc45556 tpagedesc45556;
typedef struct tmemregion27810 tmemregion27810;
typedef struct tsmallchunk27040 tsmallchunk27040;
typedef struct tllchunk27804 tllchunk27804;
typedef struct tbigchunk27042 tbigchunk27042;
typedef struct tintset27017 tintset27017;
typedef struct ttrunk27013 ttrunk27013;
typedef struct tavlnode27808 tavlnode27808;
typedef struct tgcstat47814 tgcstat47814;
typedef struct tidtable209866 tidtable209866;
typedef struct tidpairseq209864 tidpairseq209864;
typedef struct tidpair209862 tidpair209862;
typedef struct ttabiter218119 ttabiter218119;
typedef struct tnodeseq209812 tnodeseq209812;
typedef struct tidentiter218141 tidentiter218141;
typedef struct intset206056 intset206056;
typedef struct ttrunk206052 ttrunk206052;
typedef struct ttrunkseq206054 ttrunkseq206054;
typedef struct tidnodetable209872 tidnodetable209872;
typedef struct tidnodepairseq209870 tidnodepairseq209870;
typedef struct tidnodepair209868 tidnodepair209868;
typedef struct TY209938 TY209938;
typedef struct tlistentry128022 tlistentry128022;
typedef struct tbasechunk27038 tbasechunk27038;
typedef struct tfreecell27030 tfreecell27030;
struct  tiipair218270  {
NI Key;
NI Val;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  tiitable218274  {
NI Counter;
tiipairseq218272* Data;
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
struct  tstrtable209822  {
NI Counter;
tsymseq209820* Data;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  tidobj185015  {
  TNimObject Sup;
NI Id;
};
struct  tlineinfo181340  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
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
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  tident185021  {
  tidobj185015 Sup;
NimStringDesc* S;
tident185021* Next;
NI H;
};
struct  tcell45548  {
NI Refcount;
TNimType* Typ;
};
struct  tcellseq45564  {
NI Len;
NI Cap;
tcell45548** D;
};
struct  tcellset45560  {
NI Counter;
NI Max;
tpagedesc45556* Head;
tpagedesc45556** Data;
};
typedef tsmallchunk27040* TY27822[512];
typedef ttrunk27013* ttrunkbuckets27015[256];
struct  tintset27017  {
ttrunkbuckets27015 Data;
};
struct  tmemregion27810  {
NI Minlargeobj;
NI Maxlargeobj;
TY27822 Freesmallchunks;
tllchunk27804* Llmem;
NI Currmem;
NI Maxmem;
NI Freemem;
NI Lastsize;
tbigchunk27042* Freechunkslist;
tintset27017 Chunkstarts;
tavlnode27808* Root;
tavlnode27808* Deleted;
tavlnode27808* Last;
tavlnode27808* Freeavlnodes;
};
struct  tgcstat47814  {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
NI64 Maxpause;
};
struct  tgcheap47816  {
void* Stackbottom;
NI Cyclethreshold;
tcellseq45564 Zct;
tcellseq45564 Decstack;
tcellset45560 Cycleroots;
tcellseq45564 Tempstack;
NI Recgclock;
tmemregion27810 Region;
tgcstat47814 Stat;
};
struct  tidpair209862  {
tidobj185015* Key;
TNimObject* Val;
};
struct  tidtable209866  {
NI Counter;
tidpairseq209864* Data;
};
struct  ttabiter218119  {
NI H;
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
struct  tidentiter218141  {
NI H;
tident185021* Name;
};
struct  intset206056  {
NI Counter;
NI Max;
ttrunk206052* Head;
ttrunkseq206054* Data;
};
struct  tidnodepair209868  {
tidobj185015* Key;
tnode209818* Val;
};
struct  tidnodetable209872  {
NI Counter;
tidnodepairseq209870* Data;
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
typedef NI TY27020[16];
struct  tpagedesc45556  {
tpagedesc45556* Next;
NI Key;
TY27020 Bits;
};
struct  tbasechunk27038  {
NI Prevsize;
NI Size;
NIM_BOOL Used;
};
struct  tsmallchunk27040  {
  tbasechunk27038 Sup;
tsmallchunk27040* Next;
tsmallchunk27040* Prev;
tfreecell27030* Freelist;
NI Free;
NI Acc;
NF Data;
};
struct  tllchunk27804  {
NI Size;
NI Acc;
tllchunk27804* Next;
};
struct  tbigchunk27042  {
  tbasechunk27038 Sup;
tbigchunk27042* Next;
tbigchunk27042* Prev;
NI Align;
NF Data;
};
struct  ttrunk27013  {
ttrunk27013* Next;
NI Key;
TY27020 Bits;
};
typedef tavlnode27808* TY27814[2];
struct  tavlnode27808  {
TY27814 Link;
NI Key;
NI Upperbound;
NI Level;
};
struct  ttrunk206052  {
ttrunk206052* Next;
NI Key;
TY27020 Bits;
};
struct  tfreecell27030  {
tfreecell27030* Next;
NI Zerofield;
};
struct tiipairseq218272 {
  TGenericSeq Sup;
  tiipair218270 data[SEQ_DECL_SIZE];
};
struct tsymseq209820 {
  TGenericSeq Sup;
  tsym209848* data[SEQ_DECL_SIZE];
};
struct ttypeseq209850 {
  TGenericSeq Sup;
  ttype209854* data[SEQ_DECL_SIZE];
};
struct TY209949 {
  TGenericSeq Sup;
  tinstantiation209838* data[SEQ_DECL_SIZE];
};
struct tidpairseq209864 {
  TGenericSeq Sup;
  tidpair209862 data[SEQ_DECL_SIZE];
};
struct tnodeseq209812 {
  TGenericSeq Sup;
  tnode209818* data[SEQ_DECL_SIZE];
};
struct ttrunkseq206054 {
  TGenericSeq Sup;
  ttrunk206052* data[SEQ_DECL_SIZE];
};
struct tidnodepairseq209870 {
  TGenericSeq Sup;
  tidnodepair209868 data[SEQ_DECL_SIZE];
};
struct TY209938 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, TMP824)(void* p, NI op);
N_NIMCALL(NIM_BOOL, mustrehash_218249)(NI length, NI counter);
N_NIMCALL(void, strtableenlarge_223228)(tstrtable209822* t);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, strtablerawinsert_222406)(tsymseq209820** data, tsym209848* n);
static N_INLINE(NI, nexttry_218256)(NI h, NI maxhash);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell45548*, usrtocell_49446)(void* usr);
static N_INLINE(void, rtladdzct_51004)(tcell45548* c);
N_NOINLINE(void, addzct_49417)(tcellseq45564* s, tcell45548* c);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(NI, iitablerawget_225848)(tiitable218274 t, NI key);
N_NIMCALL(void, iitablerawinsert_225880)(tiipairseq218272** data, NI key, NI val);
N_NIMCALL(NI, idtablerawget_224147)(tidtable209866 t, NI key);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_51825)(tcell45548* c);
static N_INLINE(NIM_BOOL, canbecycleroot_49467)(tcell45548* c);
static N_INLINE(void, rtladdcycleroot_50229)(tcell45548* c);
N_NOINLINE(void, incl_46471)(tcellset45560* s, tcell45548* cell);
static N_INLINE(void, decref_51404)(tcell45548* c);
N_NIMCALL(void, idtablerawinsert_224293)(tidpairseq209864** data, tidobj185015* key, TNimObject* val);
N_NIMCALL(tsym209848*, nextiter_218132)(ttabiter218119* ti, tstrtable209822 tab);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(NIM_BOOL, reallysameident_223363)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(NI, sonslen_210251)(tnode209818* n);
N_NIMCALL(void, internalerror_183669)(tlineinfo181340 info, NimStringDesc* errmsg);
static N_INLINE(NI, cmpStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NIM_BOOL, levalue_218383)(tnode209818* a, tnode209818* b);
N_NIMCALL(tsym209848*, nextidentiter_218156)(tidentiter218141* ti, tstrtable209822 tab);
N_NIMCALL(tsym209848*, nextidentexcluding_223919)(tidentiter218141* ti, tstrtable209822 tab, intset206056 excluding);
N_NIMCALL(NIM_BOOL, contains_206837)(intset206056 s, NI key);
N_NIMCALL(NI, idnodetablerawget_225103)(tidnodetable209872 t, tidobj185015* key);
N_NIMCALL(void, idnodetablerawinsert_225175)(tidnodepairseq209870** data, tidobj185015* key, tnode209818* val);
N_NIMCALL(tsym209848*, lookupinrecord_218236)(tnode209818* n, tident185021* field);
static N_INLINE(tnode209818*, lastson_210263)(tnode209818* n);
N_NIMCALL(void, symtabreplaceraw_222837)(tsymseq209820** data, tsym209848* prevsym, tsym209848* newsym);
STRING_LITERAL(TMP2715, "getSymFromList", 14);
STRING_LITERAL(TMP3199, "lookupInRecord", 14);
STRING_LITERAL(TMP3200, "lookupInRecord(record case branch)", 34);
STRING_LITERAL(TMP3201, "lookupInRecord()", 16);
TNimType NTI218274; /* TIITable */
extern TNimType NTI108; /* int */
TNimType NTI218270; /* TIIPair */
TNimType NTI218272; /* TIIPairSeq */
extern TNimType NTI209820; /* TSymSeq */
extern tgcheap47816 gch_47844;
extern TNimType NTI209864; /* TIdPairSeq */
extern TNimType NTI209870; /* TIdNodePairSeq */
N_NIMCALL(void, TMP824)(void* p, NI op) {
	tiipairseq218272* a;
	NI LOC1;
	a = (tiipairseq218272*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
}

N_NIMCALL(NIM_BOOL, mustrehash_218249)(NI length, NI counter) {
	NIM_BOOL result;
	NIM_BOOL LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = ((NI32)(length * 2) < (NI32)(counter * 3));
	if (LOC1) goto LA2;
	LOC1 = ((NI32)(length - counter) < 4);
	LA2: ;
	result = LOC1;
	return result;
}

static N_INLINE(NI, nexttry_218256)(NI h, NI maxhash) {
	NI result;
	result = 0;
	result = (NI)((NI32)((NI32)(5 * h) + 1) & maxhash);
	return result;
}

static N_INLINE(tcell45548*, usrtocell_49446)(void* usr) {
	tcell45548* result;
	result = 0;
	result = ((tcell45548*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(tcell45548))))));
	return result;
}

static N_INLINE(void, rtladdzct_51004)(tcell45548* c) {
	addzct_49417((&gch_47844.Zct), c);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		tcell45548* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_49446(src);
		(*c).Refcount += 8;
	}
	LA3: ;
	{
		tcell45548* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_49446((*dest));
		{
			(*c).Refcount -= 8;
			if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA11;
			rtladdzct_51004(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

N_NIMCALL(void, strtablerawinsert_222406)(tsymseq209820** data, tsym209848* n) {
	NI h;
{	h = (NI)((*(*n).Name).H & ((*data)->Sup.len-1));
	{
		if (!!((((*n).Flags &(1<<((((NU8) 25))&31)))!=0))) goto LA3;
		{
			while (1) {
				if (!!(((*data)->data[h] == NIM_NIL))) goto LA6;
				{
					if (!((*data)->data[h] == n)) goto LA9;
					goto BeforeRet;
				}
				LA9: ;
				h = nexttry_218256(h, ((*data)->Sup.len-1));
			} LA6: ;
		}
		asgnRefNoCycle((void**) (&(*data)->data[h]), n);
	}
	goto LA1;
	LA3: ;
	{
		NI favpos;
		favpos = -1;
		{
			while (1) {
				if (!!(((*data)->data[h] == NIM_NIL))) goto LA13;
				{
					if (!((*data)->data[h] == n)) goto LA16;
					goto BeforeRet;
				}
				LA16: ;
				{
					NIM_BOOL LOC20;
					LOC20 = 0;
					LOC20 = (favpos < 0);
					if (!(LOC20)) goto LA21;
					LOC20 = ((*(*(*data)->data[h]).Name).Sup.Id == (*(*n).Name).Sup.Id);
					LA21: ;
					if (!LOC20) goto LA22;
					favpos = h;
				}
				LA22: ;
				h = nexttry_218256(h, ((*data)->Sup.len-1));
			} LA13: ;
		}
		asgnRefNoCycle((void**) (&(*data)->data[h]), n);
		{
			tsym209848* LOC28;
			if (!(0 <= favpos)) goto LA26;
			LOC28 = 0;
			LOC28 = (*data)->data[h];
			asgnRefNoCycle((void**) (&(*data)->data[h]), (*data)->data[favpos]);
			asgnRefNoCycle((void**) (&(*data)->data[favpos]), LOC28);
		}
		LA26: ;
	}
	LA1: ;
	}BeforeRet: ;
}

N_NIMCALL(void, strtableenlarge_223228)(tstrtable209822* t) {
	tsymseq209820* n;
	tsymseq209820* LOC8;
	n = 0;
	n = (tsymseq209820*) newSeq((&NTI209820), (NI32)((*t).Data->Sup.len * 2));
	{
		NI i_223272;
		NI HEX3Atmp_223308;
		NI res_223311;
		i_223272 = 0;
		HEX3Atmp_223308 = 0;
		HEX3Atmp_223308 = ((*t).Data->Sup.len-1);
		res_223311 = 0;
		{
			while (1) {
				if (!(res_223311 <= HEX3Atmp_223308)) goto LA3;
				i_223272 = res_223311;
				{
					if (!!(((*t).Data->data[i_223272] == NIM_NIL))) goto LA6;
					strtablerawinsert_222406((&n), (*t).Data->data[i_223272]);
				}
				LA6: ;
				res_223311 += 1;
			} LA3: ;
		}
	}
	LOC8 = 0;
	LOC8 = (*t).Data;
	unsureAsgnRef((void**) (&(*t).Data), n);
	n = LOC8;
}

N_NIMCALL(void, strtableadd_218103)(tstrtable209822* t, tsym209848* n) {
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = mustrehash_218249((*t).Data->Sup.len, (*t).Counter);
		if (!LOC3) goto LA4;
		strtableenlarge_223228(t);
	}
	LA4: ;
	strtablerawinsert_222406((&(*t).Data), n);
	(*t).Counter += 1;
}

N_NIMCALL(void, initiitable_218282)(tiitable218274* x) {
	(*x).Counter = 0;
	unsureAsgnRef((void**) (&(*x).Data), (tiipairseq218272*) newSeq((&NTI218272), 8));
	{
		NI i_225827;
		NI res_225831;
		i_225827 = 0;
		res_225831 = 0;
		{
			while (1) {
				if (!(res_225831 <= 7)) goto LA3;
				i_225827 = res_225831;
				(*x).Data->data[i_225827].Key = (-2147483647 -1);
				res_225831 += 1;
			} LA3: ;
		}
	}
}

N_NIMCALL(NI, iitablerawget_225848)(tiitable218274 t, NI key) {
	NI result;
	NI h;
{	result = 0;
	h = 0;
	h = (NI)(key & (t.Data->Sup.len-1));
	{
		while (1) {
			if (!!((t.Data->data[h].Key == (-2147483647 -1)))) goto LA2;
			{
				if (!(t.Data->data[h].Key == key)) goto LA5;
				result = h;
				goto BeforeRet;
			}
			LA5: ;
			h = nexttry_218256(h, (t.Data->Sup.len-1));
		} LA2: ;
	}
	result = -1;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(void, iitablerawinsert_225880)(tiipairseq218272** data, NI key, NI val) {
	NI h;
	h = 0;
	h = (NI)(key & ((*data)->Sup.len-1));
	{
		while (1) {
			if (!!(((*data)->data[h].Key == (-2147483647 -1)))) goto LA2;
			h = nexttry_218256(h, ((*data)->Sup.len-1));
		} LA2: ;
	}
	(*data)->data[h].Key = key;
	(*data)->data[h].Val = val;
}

N_NIMCALL(void, iitableput_218296)(tiitable218274* t, NI key, NI val) {
	NI index;
	index = iitablerawget_225848((*t), key);
	{
		if (!(0 <= index)) goto LA3;
		(*t).Data->data[index].Val = val;
	}
	goto LA1;
	LA3: ;
	{
		{
			NIM_BOOL LOC8;
			tiipairseq218272* n;
			tiipairseq218272* LOC21;
			LOC8 = 0;
			LOC8 = mustrehash_218249((*t).Data->Sup.len, (*t).Counter);
			if (!LOC8) goto LA9;
			n = 0;
			n = (tiipairseq218272*) newSeq((&NTI218272), (NI32)((*t).Data->Sup.len * 2));
			{
				NI i_226452;
				NI HEX3Atmp_226497;
				NI res_226500;
				i_226452 = 0;
				HEX3Atmp_226497 = 0;
				HEX3Atmp_226497 = (n->Sup.len-1);
				res_226500 = 0;
				{
					while (1) {
						if (!(res_226500 <= HEX3Atmp_226497)) goto LA13;
						i_226452 = res_226500;
						n->data[i_226452].Key = (-2147483647 -1);
						res_226500 += 1;
					} LA13: ;
				}
			}
			{
				NI i_226465;
				NI HEX3Atmp_226503;
				NI res_226506;
				i_226465 = 0;
				HEX3Atmp_226503 = 0;
				HEX3Atmp_226503 = ((*t).Data->Sup.len-1);
				res_226506 = 0;
				{
					while (1) {
						if (!(res_226506 <= HEX3Atmp_226503)) goto LA16;
						i_226465 = res_226506;
						{
							if (!!(((*t).Data->data[i_226465].Key == (-2147483647 -1)))) goto LA19;
							iitablerawinsert_225880((&n), (*t).Data->data[i_226465].Key, (*t).Data->data[i_226465].Val);
						}
						LA19: ;
						res_226506 += 1;
					} LA16: ;
				}
			}
			LOC21 = 0;
			LOC21 = (*t).Data;
			unsureAsgnRef((void**) (&(*t).Data), n);
			n = LOC21;
		}
		LA9: ;
		iitablerawinsert_225880((&(*t).Data), key, val);
		(*t).Counter += 1;
	}
	LA1: ;
}

N_NIMCALL(NI, idtablerawget_224147)(tidtable209866 t, NI key) {
	NI result;
	NI h;
{	result = 0;
	h = 0;
	h = (NI)(key & (t.Data->Sup.len-1));
	{
		while (1) {
			if (!!((t.Data->data[h].Key == NIM_NIL))) goto LA2;
			{
				if (!((*t.Data->data[h].Key).Id == key)) goto LA5;
				result = h;
				goto BeforeRet;
			}
			LA5: ;
			h = nexttry_218256(h, (t.Data->Sup.len-1));
		} LA2: ;
	}
	result = -1;
	}BeforeRet: ;
	return result;
}

static N_INLINE(NIM_BOOL, canbecycleroot_49467)(tcell45548* c) {
	NIM_BOOL result;
	result = 0;
	result = !((((*(*c).Typ).flags &(1<<((((NU8) 1))&7)))!=0));
	return result;
}

static N_INLINE(void, rtladdcycleroot_50229)(tcell45548* c) {
	{
		if (!!((((NI) ((NI)((*c).Refcount & 3))) == 3))) goto LA3;
		(*c).Refcount = (NI)((NI)((*c).Refcount & -4) | 3);
		incl_46471((&gch_47844.Cycleroots), c);
	}
	LA3: ;
}

static N_INLINE(void, incref_51825)(tcell45548* c) {
	(*c).Refcount = (NI)((NU32)((*c).Refcount) + (NU32)(8));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = canbecycleroot_49467(c);
		if (!LOC3) goto LA4;
		rtladdcycleroot_50229(c);
	}
	LA4: ;
}

static N_INLINE(void, decref_51404)(tcell45548* c) {
	{
		(*c).Refcount -= 8;
		if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA3;
		rtladdzct_51004(c);
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		LOC6 = 0;
		LOC6 = canbecycleroot_49467(c);
		if (!LOC6) goto LA7;
		rtladdcycleroot_50229(c);
	}
	goto LA1;
	LA7: ;
	LA1: ;
}

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	{
		tcell45548* LOC5;
		if (!!((src == NIM_NIL))) goto LA3;
		LOC5 = 0;
		LOC5 = usrtocell_49446(src);
		incref_51825(LOC5);
	}
	LA3: ;
	{
		tcell45548* LOC10;
		if (!!(((*dest) == NIM_NIL))) goto LA8;
		LOC10 = 0;
		LOC10 = usrtocell_49446((*dest));
		decref_51404(LOC10);
	}
	LA8: ;
	(*dest) = src;
}

N_NIMCALL(void, idtablerawinsert_224293)(tidpairseq209864** data, tidobj185015* key, TNimObject* val) {
	NI h;
	h = 0;
	h = (NI)((*key).Id & ((*data)->Sup.len-1));
	{
		while (1) {
			if (!!(((*data)->data[h].Key == NIM_NIL))) goto LA2;
			h = nexttry_218256(h, ((*data)->Sup.len-1));
		} LA2: ;
	}
	asgnRef((void**) (&(*data)->data[h].Key), key);
	asgnRef((void**) (&(*data)->data[h].Val), val);
}

N_NIMCALL(void, idtableput_218196)(tidtable209866* t, tidobj185015* key, TNimObject* val) {
	NI index;
	tidpairseq209864* n;
	index = 0;
	n = 0;
	index = idtablerawget_224147((*t), (*key).Id);
	{
		if (!(0 <= index)) goto LA3;
		asgnRef((void**) (&(*t).Data->data[index].Val), val);
	}
	goto LA1;
	LA3: ;
	{
		{
			NIM_BOOL LOC8;
			tidpairseq209864* LOC18;
			LOC8 = 0;
			LOC8 = mustrehash_218249((*t).Data->Sup.len, (*t).Counter);
			if (!LOC8) goto LA9;
			n = (tidpairseq209864*) newSeq((&NTI209864), (NI32)((*t).Data->Sup.len * 2));
			{
				NI i_224851;
				NI HEX3Atmp_225032;
				NI res_225035;
				i_224851 = 0;
				HEX3Atmp_225032 = 0;
				HEX3Atmp_225032 = ((*t).Data->Sup.len-1);
				res_225035 = 0;
				{
					while (1) {
						if (!(res_225035 <= HEX3Atmp_225032)) goto LA13;
						i_224851 = res_225035;
						{
							if (!!(((*t).Data->data[i_224851].Key == NIM_NIL))) goto LA16;
							idtablerawinsert_224293((&n), (*t).Data->data[i_224851].Key, (*t).Data->data[i_224851].Val);
						}
						LA16: ;
						res_225035 += 1;
					} LA13: ;
				}
			}
			LOC18 = 0;
			LOC18 = (*t).Data;
			unsureAsgnRef((void**) (&(*t).Data), n);
			n = LOC18;
		}
		LA9: ;
		idtablerawinsert_224293((&(*t).Data), key, val);
		(*t).Counter += 1;
	}
	LA1: ;
}

N_NIMCALL(TNimObject*, idtableget_218189)(tidtable209866 t, NI key) {
	TNimObject* result;
	NI index;
	result = 0;
	index = idtablerawget_224147(t, key);
	{
		if (!(0 <= index)) goto LA3;
		result = t.Data->data[index].Val;
	}
	goto LA1;
	LA3: ;
	{
		result = NIM_NIL;
	}
	LA1: ;
	return result;
}

N_NIMCALL(NI, iitableget_218289)(tiitable218274 t, NI key) {
	NI result;
	NI index;
	result = 0;
	index = iitablerawget_225848(t, key);
	{
		if (!(0 <= index)) goto LA3;
		result = t.Data->data[index].Val;
	}
	goto LA1;
	LA3: ;
	{
		result = (-2147483647 -1);
	}
	LA1: ;
	return result;
}

N_NIMCALL(tsym209848*, nextiter_218132)(ttabiter218119* ti, tstrtable209822 tab) {
	tsym209848* result;
	result = 0;
	result = NIM_NIL;
	{
		while (1) {
			if (!((*ti).H <= (tab.Data->Sup.len-1))) goto LA2;
			result = tab.Data->data[(*ti).H];
			(*ti).H += 1;
			{
				if (!!((result == NIM_NIL))) goto LA5;
				goto LA1;
			}
			LA5: ;
		} LA2: ;
	} LA1: ;
	return result;
}

N_NIMCALL(tsym209848*, inittabiter_218124)(ttabiter218119* ti, tstrtable209822 tab) {
	tsym209848* result;
	result = 0;
	(*ti).H = 0;
	{
		if (!(tab.Counter == 0)) goto LA3;
		result = NIM_NIL;
	}
	goto LA1;
	LA3: ;
	{
		result = nextiter_218132(ti, tab);
	}
	LA1: ;
	return result;
}

N_NIMCALL(tsym209848*, getmodule_218243)(tsym209848* s) {
	tsym209848* result;
	result = 0;
	result = s;
	{
		while (1) {
			NIM_BOOL LOC3;
			LOC3 = 0;
			LOC3 = !((result == NIM_NIL));
			if (!(LOC3)) goto LA4;
			LOC3 = !(((*result).Kind == ((NU8) 6)));
			LA4: ;
			if (!LOC3) goto LA2;
			result = (*result).Owner;
		} LA2: ;
	}
	return result;
}

N_NIMCALL(TNimObject*, idtableget_218182)(tidtable209866 t, tidobj185015* key) {
	TNimObject* result;
	NI index;
	result = 0;
	index = idtablerawget_224147(t, (*key).Id);
	{
		if (!(0 <= index)) goto LA3;
		result = t.Data->data[index].Val;
	}
	goto LA1;
	LA3: ;
	{
		result = NIM_NIL;
	}
	LA1: ;
	return result;
}

static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	NIM_BOOL LOC11;
	int LOC13;
{	result = 0;
	{
		if (!(a == b)) goto LA3;
		result = NIM_TRUE;
		goto BeforeRet;
	}
	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = (a == NIM_NIL);
		if (LOC7) goto LA8;
		LOC7 = (b == NIM_NIL);
		LA8: ;
		if (!LOC7) goto LA9;
		result = NIM_FALSE;
		goto BeforeRet;
	}
	LA9: ;
	LOC11 = 0;
	LOC11 = ((*a).Sup.len == (*b).Sup.len);
	if (!(LOC11)) goto LA12;
	LOC13 = 0;
	LOC13 = memcmp(((NCSTRING) ((*a).data)), ((NCSTRING) ((*b).data)), (NI32)((*a).Sup.len * 1));
	LOC11 = (LOC13 == ((NI32) 0));
	LA12: ;
	result = LOC11;
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, samevalue_218324)(tnode209818* a, tnode209818* b) {
	NIM_BOOL result;
	result = 0;
	result = NIM_FALSE;
	switch ((*a).Kind) {
	case ((NU8) 5) ... ((NU8) 10):
	{
		{
			if (!((*b).Kind >= ((NU8) 5) && (*b).Kind <= ((NU8) 10))) goto LA4;
			result = ((*a).kindU.S1.Intval == (*b).kindU.S1.Intval);
		}
		LA4: ;
	}
	break;
	case ((NU8) 16) ... ((NU8) 18):
	{
		{
			if (!((*b).Kind >= ((NU8) 16) && (*b).Kind <= ((NU8) 18))) goto LA9;
			result = ((*a).kindU.S2.Floatval == (*b).kindU.S2.Floatval);
		}
		LA9: ;
	}
	break;
	case ((NU8) 20) ... ((NU8) 22):
	{
		{
			if (!((*b).Kind >= ((NU8) 20) && (*b).Kind <= ((NU8) 22))) goto LA14;
			result = eqStrings((*a).kindU.S3.Strval, (*b).kindU.S3.Strval);
		}
		LA14: ;
	}
	break;
	default:
	{
	}
	break;
	}
	return result;
}

N_NIMCALL(tsym209848*, strtableget_218111)(tstrtable209822 t, tident185021* name) {
	tsym209848* result;
	NI h;
	result = 0;
	h = (NI)((*name).H & (t.Data->Sup.len-1));
	{
		while (1) {
			result = t.Data->data[h];
			{
				if (!(result == NIM_NIL)) goto LA5;
				goto LA1;
			}
			LA5: ;
			{
				if (!((*(*result).Name).Sup.Id == (*name).Sup.Id)) goto LA9;
				goto LA1;
			}
			LA9: ;
			h = nexttry_218256(h, (t.Data->Sup.len-1));
		}
	} LA1: ;
	return result;
}

static N_INLINE(NIM_BOOL, reallysameident_223363)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	result = 0;
	result = NIM_TRUE;
	return result;
}

N_NIMCALL(NIM_BOOL, strtableincl_223407)(tstrtable209822* t, tsym209848* n) {
	NIM_BOOL result;
	NI h;
	NI replaceslot;
{	result = 0;
	h = (NI)((*(*n).Name).H & ((*t).Data->Sup.len-1));
	replaceslot = -1;
	{
		while (1) {
			tsym209848* it;
			it = (*t).Data->data[h];
			{
				if (!(it == NIM_NIL)) goto LA5;
				goto LA1;
			}
			LA5: ;
			{
				NIM_BOOL LOC9;
				LOC9 = 0;
				LOC9 = ((*(*it).Name).Sup.Id == (*(*n).Name).Sup.Id);
				if (!(LOC9)) goto LA10;
				LOC9 = reallysameident_223363((*(*it).Name).S, (*(*n).Name).S);
				LA10: ;
				if (!LOC9) goto LA11;
				{
					if (!(it == n)) goto LA15;
					result = NIM_FALSE;
					goto BeforeRet;
				}
				LA15: ;
				replaceslot = h;
			}
			LA11: ;
			h = nexttry_218256(h, ((*t).Data->Sup.len-1));
		}
	} LA1: ;
	{
		if (!(0 <= replaceslot)) goto LA19;
		asgnRefNoCycle((void**) (&(*t).Data->data[replaceslot]), n);
		result = NIM_TRUE;
		goto BeforeRet;
	}
	goto LA17;
	LA19: ;
	{
		NIM_BOOL LOC22;
		LOC22 = 0;
		LOC22 = mustrehash_218249((*t).Data->Sup.len, (*t).Counter);
		if (!LOC22) goto LA23;
		strtableenlarge_223228(t);
		strtablerawinsert_222406((&(*t).Data), n);
	}
	goto LA17;
	LA23: ;
	{
		asgnRefNoCycle((void**) (&(*t).Data->data[h]), n);
	}
	LA17: ;
	(*t).Counter += 1;
	result = NIM_FALSE;
	}BeforeRet: ;
	return result;
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

N_NIMCALL(tsym209848*, getsymfromlist_218228)(tnode209818* list, tident185021* ident, NI start) {
	tsym209848* result;
{	result = 0;
	{
		NI i_218859;
		NI HEX3Atmp_218874;
		NI LOC2;
		NI res_218877;
		i_218859 = 0;
		HEX3Atmp_218874 = 0;
		LOC2 = 0;
		LOC2 = sonslen_210251(list);
		HEX3Atmp_218874 = (NI32)(LOC2 - 1);
		res_218877 = start;
		{
			while (1) {
				if (!(res_218877 <= HEX3Atmp_218874)) goto LA4;
				i_218859 = res_218877;
				{
					if (!((*(*list).kindU.S6.Sons->data[i_218859]).Kind == ((NU8) 3))) goto LA7;
					result = (*(*list).kindU.S6.Sons->data[i_218859]).kindU.S4.Sym;
					{
						if (!((*(*result).Name).Sup.Id == (*ident).Sup.Id)) goto LA11;
						goto BeforeRet;
					}
					LA11: ;
				}
				goto LA5;
				LA7: ;
				{
					internalerror_183669((*list).Info, ((NimStringDesc*) &TMP2715));
				}
				LA5: ;
				res_218877 += 1;
			} LA4: ;
		}
	}
	result = NIM_NIL;
	}BeforeRet: ;
	return result;
}

static N_INLINE(NI, cmpStrings)(NimStringDesc* a, NimStringDesc* b) {
	NI result;
	int LOC13;
{	result = 0;
	{
		if (!(a == b)) goto LA3;
		result = 0;
		goto BeforeRet;
	}
	LA3: ;
	{
		if (!(a == NIM_NIL)) goto LA7;
		result = -1;
		goto BeforeRet;
	}
	LA7: ;
	{
		if (!(b == NIM_NIL)) goto LA11;
		result = 1;
		goto BeforeRet;
	}
	LA11: ;
	LOC13 = 0;
	LOC13 = strcmp(((NCSTRING) ((*a).data)), ((NCSTRING) ((*b).data)));
	result = ((NI) (LOC13));
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, levalue_218383)(tnode209818* a, tnode209818* b) {
	NIM_BOOL result;
	result = 0;
	result = NIM_FALSE;
	switch ((*a).Kind) {
	case ((NU8) 5) ... ((NU8) 10):
	{
		{
			if (!((*b).Kind >= ((NU8) 5) && (*b).Kind <= ((NU8) 10))) goto LA4;
			result = ((*a).kindU.S1.Intval <= (*b).kindU.S1.Intval);
		}
		LA4: ;
	}
	break;
	case ((NU8) 16) ... ((NU8) 18):
	{
		{
			if (!((*b).Kind >= ((NU8) 16) && (*b).Kind <= ((NU8) 18))) goto LA9;
			result = ((*a).kindU.S2.Floatval <= (*b).kindU.S2.Floatval);
		}
		LA9: ;
	}
	break;
	case ((NU8) 20) ... ((NU8) 22):
	{
		{
			if (!((*b).Kind >= ((NU8) 20) && (*b).Kind <= ((NU8) 22))) goto LA14;
			result = (cmpStrings((*a).kindU.S3.Strval, (*b).kindU.S3.Strval) <= 0);
		}
		LA14: ;
	}
	break;
	default:
	{
	}
	break;
	}
	return result;
}

N_NIMCALL(NU8, weaklevalue_218442)(tnode209818* a, tnode209818* b) {
	NU8 result;
	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = !(((*a).Kind >= ((NU8) 5) && (*a).Kind <= ((NU8) 22)));
		if (LOC3) goto LA4;
		LOC3 = !(((*b).Kind >= ((NU8) 5) && (*b).Kind <= ((NU8) 22)));
		LA4: ;
		if (!LOC3) goto LA5;
		result = ((NU8) 0);
	}
	goto LA1;
	LA5: ;
	{
		{
			NIM_BOOL LOC10;
			LOC10 = 0;
			LOC10 = levalue_218383(a, b);
			if (!LOC10) goto LA11;
			result = ((NU8) 2);
		}
		goto LA8;
		LA11: ;
		{
			result = ((NU8) 1);
		}
		LA8: ;
	}
	LA1: ;
	return result;
}

N_NIMCALL(tsym209848*, nextidentiter_218156)(tidentiter218141* ti, tstrtable209822 tab) {
	tsym209848* result;
	NI h;
	NI start;
	result = 0;
	h = 0;
	start = 0;
	h = (NI)((*ti).H & (tab.Data->Sup.len-1));
	start = h;
	result = tab.Data->data[h];
	{
		while (1) {
			if (!!((result == NIM_NIL))) goto LA2;
			{
				if (!((*(*result).Name).Sup.Id == (*(*ti).Name).Sup.Id)) goto LA5;
				goto LA1;
			}
			LA5: ;
			h = nexttry_218256(h, (tab.Data->Sup.len-1));
			{
				if (!(h == start)) goto LA9;
				result = NIM_NIL;
				goto LA1;
			}
			LA9: ;
			result = tab.Data->data[h];
		} LA2: ;
	} LA1: ;
	(*ti).H = nexttry_218256(h, (tab.Data->Sup.len-1));
	return result;
}

N_NIMCALL(tsym209848*, initidentiter_218147)(tidentiter218141* ti, tstrtable209822 tab, tident185021* s) {
	tsym209848* result;
	result = 0;
	(*ti).H = (*s).H;
	unsureAsgnRef((void**) (&(*ti).Name), s);
	{
		if (!(tab.Counter == 0)) goto LA3;
		result = NIM_NIL;
	}
	goto LA1;
	LA3: ;
	{
		result = nextidentiter_218156(ti, tab);
	}
	LA1: ;
	return result;
}

N_NIMCALL(tsym209848*, nextidentexcluding_223919)(tidentiter218141* ti, tstrtable209822 tab, intset206056 excluding) {
	tsym209848* result;
	NI h;
	NI start;
	result = 0;
	h = (NI)((*ti).H & (tab.Data->Sup.len-1));
	start = h;
	result = tab.Data->data[h];
	{
		while (1) {
			if (!!((result == NIM_NIL))) goto LA2;
			{
				NIM_BOOL LOC5;
				NIM_BOOL LOC7;
				LOC5 = 0;
				LOC5 = ((*(*result).Name).Sup.Id == (*(*ti).Name).Sup.Id);
				if (!(LOC5)) goto LA6;
				LOC7 = 0;
				LOC7 = contains_206837(excluding, (*result).Sup.Id);
				LOC5 = !(LOC7);
				LA6: ;
				if (!LOC5) goto LA8;
				goto LA1;
			}
			LA8: ;
			h = nexttry_218256(h, (tab.Data->Sup.len-1));
			{
				if (!(h == start)) goto LA12;
				result = NIM_NIL;
				goto LA1;
			}
			LA12: ;
			result = tab.Data->data[h];
		} LA2: ;
	} LA1: ;
	(*ti).H = nexttry_218256(h, (tab.Data->Sup.len-1));
	{
		NIM_BOOL LOC16;
		LOC16 = 0;
		LOC16 = !((result == NIM_NIL));
		if (!(LOC16)) goto LA17;
		LOC16 = contains_206837(excluding, (*result).Sup.Id);
		LA17: ;
		if (!LOC16) goto LA18;
		result = NIM_NIL;
	}
	LA18: ;
	return result;
}

N_NIMCALL(tsym209848*, firstidentexcluding_223979)(tidentiter218141* ti, tstrtable209822 tab, tident185021* s, intset206056 excluding) {
	tsym209848* result;
	result = 0;
	(*ti).H = (*s).H;
	unsureAsgnRef((void**) (&(*ti).Name), s);
	{
		if (!(tab.Counter == 0)) goto LA3;
		result = NIM_NIL;
	}
	goto LA1;
	LA3: ;
	{
		result = nextidentexcluding_223919(ti, tab, excluding);
	}
	LA1: ;
	return result;
}

N_NIMCALL(NI, idnodetablerawget_225103)(tidnodetable209872 t, tidobj185015* key) {
	NI result;
	NI h;
{	result = 0;
	h = 0;
	h = (NI)((*key).Id & (t.Data->Sup.len-1));
	{
		while (1) {
			if (!!((t.Data->data[h].Key == NIM_NIL))) goto LA2;
			{
				if (!((*t.Data->data[h].Key).Id == (*key).Id)) goto LA5;
				result = h;
				goto BeforeRet;
			}
			LA5: ;
			h = nexttry_218256(h, (t.Data->Sup.len-1));
		} LA2: ;
	}
	result = -1;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(tnode209818*, idnodetableget_218212)(tidnodetable209872 t, tidobj185015* key) {
	tnode209818* result;
	NI index;
	result = 0;
	index = 0;
	index = idnodetablerawget_225103(t, key);
	{
		if (!(0 <= index)) goto LA3;
		result = t.Data->data[index].Val;
	}
	goto LA1;
	LA3: ;
	{
		result = NIM_NIL;
	}
	LA1: ;
	return result;
}

N_NIMCALL(void, idnodetablerawinsert_225175)(tidnodepairseq209870** data, tidobj185015* key, tnode209818* val) {
	NI h;
	h = 0;
	h = (NI)((*key).Id & ((*data)->Sup.len-1));
	{
		while (1) {
			if (!!(((*data)->data[h].Key == NIM_NIL))) goto LA2;
			h = nexttry_218256(h, ((*data)->Sup.len-1));
		} LA2: ;
	}
	asgnRef((void**) (&(*data)->data[h].Key), key);
	asgnRefNoCycle((void**) (&(*data)->data[h].Val), val);
}

N_NIMCALL(void, idnodetableput_218219)(tidnodetable209872* t, tidobj185015* key, tnode209818* val) {
	NI index;
	index = idnodetablerawget_225103((*t), key);
	{
		if (!(0 <= index)) goto LA3;
		asgnRefNoCycle((void**) (&(*t).Data->data[index].Val), val);
	}
	goto LA1;
	LA3: ;
	{
		{
			NIM_BOOL LOC8;
			tidnodepairseq209870* n;
			tidnodepairseq209870* LOC18;
			LOC8 = 0;
			LOC8 = mustrehash_218249((*t).Data->Sup.len, (*t).Counter);
			if (!LOC8) goto LA9;
			n = 0;
			n = (tidnodepairseq209870*) newSeq((&NTI209870), (NI32)((*t).Data->Sup.len * 2));
			{
				NI i_225652;
				NI HEX3Atmp_225701;
				NI res_225704;
				i_225652 = 0;
				HEX3Atmp_225701 = 0;
				HEX3Atmp_225701 = ((*t).Data->Sup.len-1);
				res_225704 = 0;
				{
					while (1) {
						if (!(res_225704 <= HEX3Atmp_225701)) goto LA13;
						i_225652 = res_225704;
						{
							if (!!(((*t).Data->data[i_225652].Key == NIM_NIL))) goto LA16;
							idnodetablerawinsert_225175((&n), (*t).Data->data[i_225652].Key, (*t).Data->data[i_225652].Val);
						}
						LA16: ;
						res_225704 += 1;
					} LA13: ;
				}
			}
			LOC18 = 0;
			LOC18 = (*t).Data;
			unsureAsgnRef((void**) (&(*t).Data), n);
			n = LOC18;
		}
		LA9: ;
		idnodetablerawinsert_225175((&(*t).Data), key, val);
		(*t).Counter += 1;
	}
	LA1: ;
}

static N_INLINE(tnode209818*, lastson_210263)(tnode209818* n) {
	tnode209818* result;
	NI LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = sonslen_210251(n);
	result = (*n).kindU.S6.Sons->data[(NI32)(LOC1 - 1)];
	return result;
}

N_NIMCALL(tsym209848*, lookupinrecord_218236)(tnode209818* n, tident185021* field) {
	tsym209848* result;
{	result = 0;
	result = NIM_NIL;
	switch ((*n).Kind) {
	case ((NU8) 137):
	{
		{
			NI i_218496;
			NI HEX3Atmp_218579;
			NI LOC3;
			NI res_218582;
			i_218496 = 0;
			HEX3Atmp_218579 = 0;
			LOC3 = 0;
			LOC3 = sonslen_210251(n);
			HEX3Atmp_218579 = (NI32)(LOC3 - 1);
			res_218582 = 0;
			{
				while (1) {
					if (!(res_218582 <= HEX3Atmp_218579)) goto LA5;
					i_218496 = res_218582;
					result = lookupinrecord_218236((*n).kindU.S6.Sons->data[i_218496], field);
					{
						if (!!((result == NIM_NIL))) goto LA8;
						goto BeforeRet;
					}
					LA8: ;
					res_218582 += 1;
				} LA5: ;
			}
		}
	}
	break;
	case ((NU8) 138):
	{
		{
			if (!!(((*(*n).kindU.S6.Sons->data[0]).Kind == ((NU8) 3)))) goto LA13;
			internalerror_183669((*n).Info, ((NimStringDesc*) &TMP3199));
		}
		LA13: ;
		result = lookupinrecord_218236((*n).kindU.S6.Sons->data[0], field);
		{
			if (!!((result == NIM_NIL))) goto LA17;
			goto BeforeRet;
		}
		LA17: ;
		{
			NI i_218555;
			NI HEX3Atmp_218585;
			NI LOC20;
			NI res_218588;
			i_218555 = 0;
			HEX3Atmp_218585 = 0;
			LOC20 = 0;
			LOC20 = sonslen_210251(n);
			HEX3Atmp_218585 = (NI32)(LOC20 - 1);
			res_218588 = 1;
			{
				while (1) {
					if (!(res_218588 <= HEX3Atmp_218585)) goto LA22;
					i_218555 = res_218588;
					switch ((*(*n).kindU.S6.Sons->data[i_218555]).Kind) {
					case ((NU8) 85):
					case ((NU8) 88):
					{
						tnode209818* LOC24;
						LOC24 = 0;
						LOC24 = lastson_210263((*n).kindU.S6.Sons->data[i_218555]);
						result = lookupinrecord_218236(LOC24, field);
						{
							if (!!((result == NIM_NIL))) goto LA27;
							goto BeforeRet;
						}
						LA27: ;
					}
					break;
					default:
					{
						internalerror_183669((*n).Info, ((NimStringDesc*) &TMP3200));
					}
					break;
					}
					res_218588 += 1;
				} LA22: ;
			}
		}
	}
	break;
	case ((NU8) 3):
	{
		{
			if (!((*(*(*n).kindU.S4.Sym).Name).Sup.Id == (*field).Sup.Id)) goto LA33;
			result = (*n).kindU.S4.Sym;
		}
		LA33: ;
	}
	break;
	default:
	{
		internalerror_183669((*n).Info, ((NimStringDesc*) &TMP3201));
	}
	break;
	}
	}BeforeRet: ;
	return result;
}

N_NIMCALL(tnode209818*, skipconvandclosure_218305)(tnode209818* n) {
	tnode209818* result;
	result = 0;
	result = n;
	{
		while (1) {
			switch ((*result).Kind) {
			case ((NU8) 67):
			case ((NU8) 66):
			case ((NU8) 70):
			case ((NU8) 68):
			case ((NU8) 69):
			case ((NU8) 154):
			{
				result = (*result).kindU.S6.Sons->data[0];
			}
			break;
			case ((NU8) 58):
			case ((NU8) 59):
			case ((NU8) 60):
			{
				result = (*result).kindU.S6.Sons->data[1];
			}
			break;
			default:
			{
				goto LA1;
			}
			break;
			}
		}
	} LA1: ;
	return result;
}

N_NIMCALL(void, symtabreplaceraw_222837)(tsymseq209820** data, tsym209848* prevsym, tsym209848* newsym) {
	NI h;
{	h = (NI)((*(*prevsym).Name).H & ((*data)->Sup.len-1));
	{
		while (1) {
			if (!!(((*data)->data[h] == NIM_NIL))) goto LA2;
			{
				if (!((*data)->data[h] == prevsym)) goto LA5;
				asgnRefNoCycle((void**) (&(*data)->data[h]), newsym);
				goto BeforeRet;
			}
			LA5: ;
			h = nexttry_218256(h, ((*data)->Sup.len-1));
		} LA2: ;
	}
	}BeforeRet: ;
}

N_NIMCALL(void, symtabreplace_223215)(tstrtable209822* t, tsym209848* prevsym, tsym209848* newsym) {
	symtabreplaceraw_222837((&(*t).Data), prevsym, newsym);
}

N_NIMCALL(NIM_BOOL, idtablehasobjectaskey_218205)(tidtable209866 t, tidobj185015* key) {
	NIM_BOOL result;
	NI index;
	result = 0;
	index = idtablerawget_224147(t, (*key).Id);
	{
		if (!(0 <= index)) goto LA3;
		result = (t.Data->data[index].Key == key);
	}
	goto LA1;
	LA3: ;
	{
		result = NIM_FALSE;
	}
	LA1: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_astalgoInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_astalgoDatInit)(void) {
static TNimNode* TMP822[2];
static TNimNode* TMP823[2];
static TNimNode TMP792[6];
NTI218274.size = sizeof(tiitable218274);
NTI218274.kind = 18;
NTI218274.base = 0;
NTI218274.flags = 2;
TMP822[0] = &TMP792[1];
TMP792[1].kind = 1;
TMP792[1].offset = offsetof(tiitable218274, Counter);
TMP792[1].typ = (&NTI108);
TMP792[1].name = "counter";
TMP822[1] = &TMP792[2];
NTI218270.size = sizeof(tiipair218270);
NTI218270.kind = 18;
NTI218270.base = 0;
NTI218270.flags = 3;
TMP823[0] = &TMP792[4];
TMP792[4].kind = 1;
TMP792[4].offset = offsetof(tiipair218270, Key);
TMP792[4].typ = (&NTI108);
TMP792[4].name = "key";
TMP823[1] = &TMP792[5];
TMP792[5].kind = 1;
TMP792[5].offset = offsetof(tiipair218270, Val);
TMP792[5].typ = (&NTI108);
TMP792[5].name = "val";
TMP792[3].len = 2; TMP792[3].kind = 2; TMP792[3].sons = &TMP823[0];
NTI218270.node = &TMP792[3];
NTI218272.size = sizeof(tiipairseq218272*);
NTI218272.kind = 24;
NTI218272.base = (&NTI218270);
NTI218272.flags = 2;
NTI218272.marker = TMP824;
TMP792[2].kind = 1;
TMP792[2].offset = offsetof(tiitable218274, Data);
TMP792[2].typ = (&NTI218272);
TMP792[2].name = "data";
TMP792[0].len = 2; TMP792[0].kind = 2; TMP792[0].sons = &TMP822[0];
NTI218274.node = &TMP792[0];
}
