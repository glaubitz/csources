/* Generated by Nim Compiler v0.14.3 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <dirent.h>
#include <setjmp.h>
#include <sys/types.h>
#include <string.h>
#include <sys/stat.h>
#include <time.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tlineinfo191336 Tlineinfo191336;
typedef struct Tlinkedlist147013 Tlinkedlist147013;
typedef struct Tlistentry147007 Tlistentry147007;
typedef struct Stringtableobj152608 Stringtableobj152608;
typedef struct Exception Exception;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TSafePoint TSafePoint;
typedef struct Keyvaluepairseq152606 Keyvaluepairseq152606;
typedef struct Keyvaluepair152604 Keyvaluepair152604;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tlineinfo191336  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct  Tlinkedlist147013  {
Tlistentry147007* head;
Tlistentry147007* tail;
NI counter;
};
typedef NU8 Stringtablemode152602;
typedef NU8 Pathcomponent137212;
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
typedef NIM_CHAR TY120770[256];
struct  Stringtableobj152608  {
  TNimObject Sup;
NI counter;
Keyvaluepairseq152606* data;
Stringtablemode152602 mode;
};
struct Keyvaluepair152604 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
typedef NU16 Tmsgkind191002;
struct  Tlistentry147007  {
  TNimObject Sup;
Tlistentry147007* prev;
Tlistentry147007* next;
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
struct Keyvaluepairseq152606 {
  TGenericSeq Sup;
  Keyvaluepair152604 data[SEQ_DECL_SIZE];
};
N_NIMCALL(NIM_BOOL, contains_147213_3771138726)(Tlinkedlist147013* list0, NimStringDesc* data0);
N_NIMCALL(void, prependstr_147413_3771138726)(Tlinkedlist147013* list0, NimStringDesc* data0);
N_NIMCALL(void, addpathrec_276112_1623492514)(NimStringDesc* dir0, Tlineinfo191336 info0);
N_NIMCALL(Stringtableobj152608*, nstnewStringTable)(Stringtablemode152602 mode0);
static N_INLINE(void, pushSafePoint)(TSafePoint* s0);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str0);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a0, NimStringDesc* b0);
static N_INLINE(NIM_BOOL, equalmem_7495_1689653243)(void* a0, void* b0, NI size0);
N_NIMCALL(NimStringDesc*, HEX2F_128265_2125978480)(NimStringDesc* head0, NimStringDesc* tail0);
N_NIMCALL(Pathcomponent137212, getsymlinkfilekind_137219_2125978480)(NimStringDesc* path0);
N_NIMCALL(void, addpackage_276083_1623492514)(Stringtableobj152608* packages0, NimStringDesc* p0);
N_NIMCALL(NI, versionsplitpos_276007_1623492514)(NimStringDesc* s0);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s0, NI start_79210_1689653243, NI last0);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s0, NI first0, NI last0);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s0, NI start0);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s0, NI first0);
N_NIMCALL(NIM_BOOL, HEX3CHEX2E_276033_1623492514)(NimStringDesc* a0, NimStringDesc* b0);
N_NIMCALL(NI, npuParseInt)(NimStringDesc* s0, NI* number0, NI start0);
N_NIMCALL(NimStringDesc*, getordefault_153214_603679043)(Stringtableobj152608* t0, NimStringDesc* key0);
N_NIMCALL(void, nstPut)(Stringtableobj152608* t0, NimStringDesc* key0, NimStringDesc* val0);
static N_INLINE(void, popSafePoint)(void);
N_NIMCALL(void, reraiseException)(void);
static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0);
static N_INLINE(void, copymem_7485_1689653243)(void* dest0, void* source0, NI size0);
static N_INLINE(void, appendChar)(NimStringDesc* dest0, NIM_CHAR c0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space0);
N_NIMCALL(void, addnimblepath_276107_1623492514)(NimStringDesc* p0, Tlineinfo191336 info0);
N_NIMCALL(void, message_196095_155036129)(Tlineinfo191336 info0, Tmsgkind191002 msg0, NimStringDesc* arg0);
STRING_LITERAL(T1623492514_3, ".", 1);
STRING_LITERAL(T1623492514_4, "..", 2);
STRING_LITERAL(T1623492514_5, "head", 4);
extern Tlinkedlist147013 searchpaths_169134_2607990831;
extern TSafePoint* exchandler_18837_1689653243;
extern Tlinkedlist147013 lazypaths_169135_2607990831;

N_NIMCALL(void, addpath_276002_1623492514)(NimStringDesc* path0, Tlineinfo191336 info0) {
	{
		NIM_BOOL LOC3;
		LOC3 = (NIM_BOOL)0;
		LOC3 = contains_147213_3771138726((&searchpaths_169134_2607990831), path0);
		if (!!(LOC3)) goto LA4;
		prependstr_147413_3771138726((&searchpaths_169134_2607990831), path0);
	}
	LA4: ;
}

static N_INLINE(void, pushSafePoint)(TSafePoint* s0) {
	(*s0).hasRaiseAction = NIM_FALSE;
	(*s0).prev = exchandler_18837_1689653243;
	exchandler_18837_1689653243 = s0;
}

static N_INLINE(NIM_BOOL, equalmem_7495_1689653243)(void* a0, void* b0, NI size0) {
	NIM_BOOL result0;
	int LOC1;
	result0 = (NIM_BOOL)0;
	LOC1 = (int)0;
	LOC1 = memcmp(a0, b0, ((size_t) (size0)));
	result0 = (LOC1 == ((NI32) 0));
	return result0;
}

static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a0, NimStringDesc* b0) {
	NIM_BOOL result0;
	NIM_BOOL LOC11;
{	result0 = (NIM_BOOL)0;
	{
		if (!(a0 == b0)) goto LA3;
		result0 = NIM_TRUE;
		goto BeforeRet;
	}
	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = (NIM_BOOL)0;
		LOC7 = (a0 == NIM_NIL);
		if (LOC7) goto LA8;
		LOC7 = (b0 == NIM_NIL);
		LA8: ;
		if (!LOC7) goto LA9;
		result0 = NIM_FALSE;
		goto BeforeRet;
	}
	LA9: ;
	LOC11 = (NIM_BOOL)0;
	LOC11 = ((*a0).Sup.len == (*b0).Sup.len);
	if (!(LOC11)) goto LA12;
	LOC11 = equalmem_7495_1689653243(((void*) ((*a0).data)), ((void*) ((*b0).data)), ((NI) ((*a0).Sup.len)));
	LA12: ;
	result0 = LOC11;
	goto BeforeRet;
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(NI, versionsplitpos_276007_1623492514)(NimStringDesc* s0) {
	NI result0;
	result0 = (NI)0;
	result0 = (NI)((s0 ? s0->Sup.len : 0) - ((NI) 2));
	{
		while (1) {
			NIM_BOOL LOC3;
			LOC3 = (NIM_BOOL)0;
			LOC3 = (((NI) 1) < result0);
			if (!(LOC3)) goto LA4;
			LOC3 = (((NU8)(s0->data[result0])) >= ((NU8)(48)) && ((NU8)(s0->data[result0])) <= ((NU8)(57)) || ((NU8)(s0->data[result0])) == ((NU8)(46)));
			LA4: ;
			if (!LOC3) goto LA2;
			result0 -= ((NI) 1);
		} LA2: ;
	}
	{
		if (!!(((NU8)(s0->data[result0]) == (NU8)(45)))) goto LA7;
		result0 = (s0 ? s0->Sup.len : 0);
	}
	LA7: ;
	return result0;
}

N_NIMCALL(NIM_BOOL, HEX3CHEX2E_276033_1623492514)(NimStringDesc* a0, NimStringDesc* b0) {
	NIM_BOOL result0;
	NI i0;
	NI j0;
	NI vera0;
	NI verb0;
{	result0 = (NIM_BOOL)0;
	{
		if (!eqStrings(a0, ((NimStringDesc*) &T1623492514_5))) goto LA3;
		result0 = NIM_FALSE;
		goto BeforeRet;
	}
	LA3: ;
	i0 = ((NI) 0);
	j0 = ((NI) 0);
	vera0 = ((NI) 0);
	verb0 = ((NI) 0);
	{
		while (1) {
			NI ii0;
			NI jj0;
			ii0 = npuParseInt(a0, (&vera0), i0);
			jj0 = npuParseInt(b0, (&verb0), j0);
			{
				NIM_BOOL LOC9;
				LOC9 = (NIM_BOOL)0;
				LOC9 = (ii0 <= ((NI) 0));
				if (LOC9) goto LA10;
				LOC9 = (jj0 <= ((NI) 0));
				LA10: ;
				if (!LOC9) goto LA11;
				result0 = (((NI) 0) < jj0);
				goto BeforeRet;
			}
			LA11: ;
			{
				if (!(vera0 < verb0)) goto LA15;
				result0 = NIM_TRUE;
				goto BeforeRet;
			}
			goto LA13;
			LA15: ;
			{
				if (!(verb0 < vera0)) goto LA18;
				result0 = NIM_FALSE;
				goto BeforeRet;
			}
			goto LA13;
			LA18: ;
			LA13: ;
			i0 += ii0;
			j0 += jj0;
			{
				if (!((NU8)(a0->data[i0]) == (NU8)(46))) goto LA22;
				i0 += ((NI) 1);
			}
			LA22: ;
			{
				if (!((NU8)(b0->data[j0]) == (NU8)(46))) goto LA26;
				j0 += ((NI) 1);
			}
			LA26: ;
		}
	}
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(void, addpackage_276083_1623492514)(Stringtableobj152608* packages0, NimStringDesc* p0) {
	NI x0;
	NimStringDesc* name0;
	x0 = versionsplitpos_276007_1623492514(p0);
	name0 = copyStrLast(p0, ((NI) 0), (NI)(x0 - ((NI) 1)));
	{
		NimStringDesc* version0;
		if (!(x0 < (p0 ? p0->Sup.len : 0))) goto LA3;
		version0 = copyStr(p0, (NI)(x0 + ((NI) 1)));
		{
			NimStringDesc* LOC7;
			NIM_BOOL LOC8;
			LOC7 = (NimStringDesc*)0;
			LOC7 = getordefault_153214_603679043(packages0, name0);
			LOC8 = (NIM_BOOL)0;
			LOC8 = HEX3CHEX2E_276033_1623492514(LOC7, version0);
			if (!LOC8) goto LA9;
			nstPut(packages0, name0, version0);
		}
		LA9: ;
	}
	goto LA1;
	LA3: ;
	{
		nstPut(packages0, name0, ((NimStringDesc*) &T1623492514_5));
	}
	LA1: ;
}

static N_INLINE(void, popSafePoint)(void) {
	exchandler_18837_1689653243 = (*exchandler_18837_1689653243).prev;
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

static N_INLINE(void, appendChar)(NimStringDesc* dest0, NIM_CHAR c0) {
	(*dest0).data[((*dest0).Sup.len)- 0] = c0;
	(*dest0).data[((NI)((*dest0).Sup.len + ((NI) 1)))- 0] = 0;
	(*dest0).Sup.len += ((NI) 1);
}

N_NIMCALL(void, addnimblepath_276107_1623492514)(NimStringDesc* p0, Tlineinfo191336 info0) {
	{
		NIM_BOOL LOC3;
		LOC3 = (NIM_BOOL)0;
		LOC3 = contains_147213_3771138726((&searchpaths_169134_2607990831), p0);
		if (!!(LOC3)) goto LA4;
		message_196095_155036129(info0, ((Tmsgkind191002) 280), p0);
		prependstr_147413_3771138726((&lazypaths_169135_2607990831), p0);
	}
	LA4: ;
}

N_NIMCALL(void, addpathrec_276112_1623492514)(NimStringDesc* dir0, Tlineinfo191336 info0) {
	Stringtableobj152608* packages0;
	NI pos0;
	packages0 = nstnewStringTable(((Stringtablemode152602) 2));
	pos0 = (NI)((dir0 ? dir0->Sup.len : 0) - ((NI) 1));
	{
		if (!(((NU8)(dir0->data[pos0])) == ((NU8)(47)) || ((NU8)(dir0->data[pos0])) == ((NU8)(47)))) goto LA3;
		pos0 += ((NI) 1);
	}
	LA3: ;
	{
		Pathcomponent137212 k_276138_1623492514;
		NimStringDesc* p_276139_1623492514;
		DIR* d_276165_1623492514;
		k_276138_1623492514 = (Pathcomponent137212)0;
		p_276139_1623492514 = (NimStringDesc*)0;
		d_276165_1623492514 = opendir(dir0->data);
		{
			TSafePoint T1623492514_2;
			if (!!((d_276165_1623492514 == NIM_NIL))) goto LA8;
			pushSafePoint(&T1623492514_2);
			T1623492514_2.status = _setjmp(T1623492514_2.context);
			if (T1623492514_2.status == 0) {
				{
					while (1) {
						struct dirent* x_276167_1623492514;
						NimStringDesc* volatile y_276169_1623492514;
						x_276167_1623492514 = readdir(d_276165_1623492514);
						{
							if (!(x_276167_1623492514 == NIM_NIL)) goto LA15;
							goto LA11;
						}
						LA15: ;
						y_276169_1623492514 = cstrToNimstr(((NCSTRING) ((*x_276167_1623492514).d_name)));
						{
							NIM_BOOL LOC19;
							struct stat s_276171_1623492514;
							Pathcomponent137212 volatile k_276173_1623492514;
							LOC19 = (NIM_BOOL)0;
							LOC19 = !(eqStrings(y_276169_1623492514, ((NimStringDesc*) &T1623492514_3)));
							if (!(LOC19)) goto LA20;
							LOC19 = !(eqStrings(y_276169_1623492514, ((NimStringDesc*) &T1623492514_4)));
							LA20: ;
							if (!LOC19) goto LA21;
							memset((void*)(&s_276171_1623492514), 0, sizeof(s_276171_1623492514));
							{
								if (!NIM_TRUE) goto LA25;
								y_276169_1623492514 = HEX2F_128265_2125978480(dir0, y_276169_1623492514);
							}
							LA25: ;
							k_276173_1623492514 = ((Pathcomponent137212) 0);
							{
								int LOC29;
								LOC29 = (int)0;
								LOC29 = lstat(y_276169_1623492514->data, (&s_276171_1623492514));
								if (!(LOC29 < ((NI32) 0))) goto LA30;
								goto LA11;
							}
							LA30: ;
							{
								NIM_BOOL LOC34;
								LOC34 = (NIM_BOOL)0;
								LOC34 = S_ISDIR(s_276171_1623492514.st_mode);
								if (!LOC34) goto LA35;
								k_276173_1623492514 = ((Pathcomponent137212) 2);
							}
							goto LA32;
							LA35: ;
							{
								NIM_BOOL LOC38;
								LOC38 = (NIM_BOOL)0;
								LOC38 = S_ISLNK(s_276171_1623492514.st_mode);
								if (!LOC38) goto LA39;
								k_276173_1623492514 = getsymlinkfilekind_137219_2125978480(y_276169_1623492514);
							}
							goto LA32;
							LA39: ;
							LA32: ;
							k_276138_1623492514 = k_276173_1623492514;
							p_276139_1623492514 = y_276169_1623492514;
							{
								NIM_BOOL LOC43;
								LOC43 = (NIM_BOOL)0;
								LOC43 = (k_276138_1623492514 == ((Pathcomponent137212) 2));
								if (!(LOC43)) goto LA44;
								LOC43 = !(((NU8)(p_276139_1623492514->data[pos0]) == (NU8)(46)));
								LA44: ;
								if (!LOC43) goto LA45;
								addpackage_276083_1623492514(packages0, p_276139_1623492514);
							}
							LA45: ;
						}
						LA21: ;
					}
				} LA11: ;
				popSafePoint();
			}
			else {
				popSafePoint();
			}
			{
				int LOC49;
				LOC49 = (int)0;
				LOC49 = closedir(d_276165_1623492514);
			}
			if (T1623492514_2.status != 0) reraiseException();
		}
		LA8: ;
	}
	{
		NimStringDesc* p_276149_1623492514;
		p_276149_1623492514 = (NimStringDesc*)0;
		{
			NimStringDesc* key_276179_1623492514;
			NimStringDesc* val_276181_1623492514;
			key_276179_1623492514 = (NimStringDesc*)0;
			val_276181_1623492514 = (NimStringDesc*)0;
			{
				NI h_276183_1623492514;
				NI HEX3Atmp_276185_1623492514;
				NI res_276187_1623492514;
				h_276183_1623492514 = (NI)0;
				HEX3Atmp_276185_1623492514 = (NI)0;
				HEX3Atmp_276185_1623492514 = ((*packages0).data ? ((*packages0).data->Sup.len-1) : -1);
				res_276187_1623492514 = ((NI) 0);
				{
					while (1) {
						if (!(res_276187_1623492514 <= HEX3Atmp_276185_1623492514)) goto LA54;
						h_276183_1623492514 = res_276187_1623492514;
						{
							NimStringDesc* res_276191_1623492514;
							if (!!((*packages0).data->data[h_276183_1623492514].Field0 == 0)) goto LA57;
							key_276179_1623492514 = (*packages0).data->data[h_276183_1623492514].Field0;
							val_276181_1623492514 = (*packages0).data->data[h_276183_1623492514].Field1;
							{
								if (!eqStrings(val_276181_1623492514, ((NimStringDesc*) &T1623492514_5))) goto LA61;
								res_276191_1623492514 = key_276179_1623492514;
							}
							goto LA59;
							LA61: ;
							{
								NimStringDesc* LOC64;
								LOC64 = (NimStringDesc*)0;
								LOC64 = rawNewString(key_276179_1623492514->Sup.len + val_276181_1623492514->Sup.len + 1);
appendString(LOC64, key_276179_1623492514);
appendChar(LOC64, 45);
appendString(LOC64, val_276181_1623492514);
								res_276191_1623492514 = LOC64;
							}
							LA59: ;
							p_276149_1623492514 = res_276191_1623492514;
							addnimblepath_276107_1623492514(p_276149_1623492514, info0);
						}
						LA57: ;
						res_276187_1623492514 += ((NI) 1);
					} LA54: ;
				}
			}
		}
	}
}

N_NIMCALL(void, nimblepath_276192_1623492514)(NimStringDesc* path0, Tlineinfo191336 info0) {
	addpathrec_276112_1623492514(path0, info0);
	addnimblepath_276107_1623492514(path0, info0);
}
NIM_EXTERNC N_NOINLINE(void, compiler_nimblecmdInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_nimblecmdDatInit000)(void) {
}

