/* Generated by Nim Compiler v0.14.3 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <time.h>
#include <string.h>
#include <sys/select.h>
#include <sys/time.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Timeinfo114804 Timeinfo114804;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Keyvaluepair153604 Keyvaluepair153604;
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
struct  TNimObject  {
TNimType* m_type;
};
typedef NU8 Month114403;
typedef NU8 Weekday114405;
struct  Timeinfo114804  {
  TNimObject Sup;
NI second;
NI minute;
NI hour;
NI monthday;
Month114403 month;
NI year;
Weekday114405 weekday;
NI yearday;
NIM_BOOL isdst;
NimStringDesc* tzname;
NI timezone;
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
typedef Weekday114405 TY115653[7];
struct Keyvaluepair153604 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
N_NIMCALL(NI64, ntDiffTime)(time_t a0, time_t b0);
N_NIMCALL(void, getlocaltime_114844_2726502234)(time_t t0, Timeinfo114804* Result);
N_NIMCALL(void, tmtotimeinfo_115646_2726502234)(struct tm* tm0, NIM_BOOL local0, Timeinfo114804* Result);
N_NIMCALL(void, gettzname_114892_2726502234)(Keyvaluepair153604* Result);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str0);
N_NIMCALL(void, unsureAsgnRef)(void** dest0, void* src0);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src0);
N_NIMCALL(NI, gettimezone_115001_2726502234)(void);
N_NIMCALL(void, genericShallowAssign)(void* dest0, void* src0, TNimType* mt0);
N_NOINLINE(void, chckNil)(void* p0);
N_NIMCALL(void, genericReset)(void* dest0, TNimType* mt0);
N_NIMCALL(time_t, gettime_114842_2726502234)(void);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x0);
static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0);
static N_INLINE(void, copymem_7485_1689653243)(void* dest0, void* source0, NI size0);
static N_INLINE(void, appendChar)(NimStringDesc* dest0, NIM_CHAR c0);
N_NIMCALL(NimStringDesc*, nsuIntToStr)(NI x0, NI minchars0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space0);
NIM_CONST TY115653 weekdays_115651_2726502234 = {((Weekday114405) 6),
((Weekday114405) 0),
((Weekday114405) 1),
((Weekday114405) 2),
((Weekday114405) 3),
((Weekday114405) 4),
((Weekday114405) 5)}
;
STRING_LITERAL(T2726502234_9, "UTC", 3);
extern TNimType NTI3608; /* RootObj */
TNimType NTI114804; /* TimeInfo */
extern TNimType NTI104; /* int */
TNimType NTI114807; /* range 0..61(int) */
TNimType NTI114809; /* range 0..59(int) */
TNimType NTI114811; /* range 0..23(int) */
TNimType NTI114814; /* range 1..31(int) */
TNimType NTI114403; /* Month */
TNimType NTI114405; /* WeekDay */
TNimType NTI114819; /* range 0..365(int) */
extern TNimType NTI130; /* bool */
extern TNimType NTI138; /* string */

N_NIMCALL(NI64, ntDiffTime)(time_t a0, time_t b0) {
	NI64 result0;
	NF LOC1;
{	result0 = (NI64)0;
	LOC1 = (NF)0;
	LOC1 = difftime(a0, b0);
	result0 = float64ToInt64(LOC1);
	goto BeforeRet;
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(NIM_BOOL, ntEqTime)(time_t a0, time_t b0) {
	NIM_BOOL result0;
	NI64 LOC1;
	result0 = (NIM_BOOL)0;
	LOC1 = (NI64)0;
	LOC1 = ntDiffTime(a0, b0);
	result0 = (LOC1 == IL64(0));
	return result0;
}

N_NIMCALL(void, gettzname_114892_2726502234)(Keyvaluepair153604* Result) {
{	unsureAsgnRef((void**) (&(*Result).Field0), cstrToNimstr(tzname[(((NI) 0))- 0]));
	unsureAsgnRef((void**) (&(*Result).Field1), cstrToNimstr(tzname[(((NI) 1))- 0]));
	goto BeforeRet;
	}BeforeRet: ;
}

N_NIMCALL(NI, gettimezone_115001_2726502234)(void) {
	NI result0;
{	result0 = (NI)0;
	result0 = timezone;
	goto BeforeRet;
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(void, tmtotimeinfo_115646_2726502234)(struct tm* tm0, NIM_BOOL local0, Timeinfo114804* Result) {
	Timeinfo114804 LOC1;
	memset((void*)(&LOC1), 0, sizeof(LOC1));
	LOC1.Sup.m_type = (&NTI114804);
	memset((void*)(&LOC1), 0, sizeof(LOC1));
	LOC1.Sup.m_type = (&NTI114804);
	LOC1.second = ((NI) (((NI) ((*tm0).tm_sec))));
	LOC1.minute = ((NI) (((NI) ((*tm0).tm_min))));
	LOC1.hour = ((NI) (((NI) ((*tm0).tm_hour))));
	LOC1.monthday = ((NI) (((NI) ((*tm0).tm_mday))));
	LOC1.month = ((Month114403) ((*tm0).tm_mon));
	LOC1.year = ((NI) ((NI32)((*tm0).tm_year + ((NI32) 1900))));
	LOC1.weekday = weekdays_115651_2726502234[(((NI) ((*tm0).tm_wday)))- 0];
	LOC1.yearday = ((NI) (((NI) ((*tm0).tm_yday))));
	LOC1.isdst = (((NI32) 0) < (*tm0).tm_isdst);
	{
		if (!local0) goto LA4;
		{
			Keyvaluepair153604 LOC10;
			if (!(((NI32) 0) < (*tm0).tm_isdst)) goto LA8;
			memset((void*)(&LOC10), 0, sizeof(LOC10));
			gettzname_114892_2726502234((&LOC10));
			LOC1.tzname = copyString(LOC10.Field1);
		}
		goto LA6;
		LA8: ;
		{
			Keyvaluepair153604 LOC12;
			memset((void*)(&LOC12), 0, sizeof(LOC12));
			gettzname_114892_2726502234((&LOC12));
			LOC1.tzname = copyString(LOC12.Field0);
		}
		LA6: ;
	}
	goto LA2;
	LA4: ;
	{
		LOC1.tzname = copyString(((NimStringDesc*) &T2726502234_9));
	}
	LA2: ;
	{
		if (!local0) goto LA16;
		LOC1.timezone = gettimezone_115001_2726502234();
	}
	goto LA14;
	LA16: ;
	{
		LOC1.timezone = ((NI) 0);
	}
	LA14: ;
	genericShallowAssign((void*)Result, (void*)(&LOC1), (&NTI114804));
}

N_NIMCALL(void, getlocaltime_114844_2726502234)(time_t t0, Timeinfo114804* Result) {
	time_t a0;
	struct tm* lt0;
	a0 = t0;
	lt0 = localtime((&a0));
	chckNil((void*)Result);
	genericReset((void*)Result, (&NTI114804));
	(*Result).Sup.m_type = (&NTI114804);
	tmtotimeinfo_115646_2726502234((&(*lt0)), NIM_TRUE, Result);
}

N_NIMCALL(time_t, gettime_114842_2726502234)(void) {
	time_t result0;
{	result0 = (time_t)0;
	result0 = time(NIM_NIL);
	goto BeforeRet;
	}BeforeRet: ;
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

static N_INLINE(void, appendChar)(NimStringDesc* dest0, NIM_CHAR c0) {
	(*dest0).data[((*dest0).Sup.len)- 0] = c0;
	(*dest0).data[((NI)((*dest0).Sup.len + ((NI) 1)))- 0] = 0;
	(*dest0).Sup.len += ((NI) 1);
}

N_NIMCALL(NimStringDesc*, ntgetDateStr)(void) {
	NimStringDesc* result0;
	Timeinfo114804 ti0;
	time_t LOC1;
	NimStringDesc* LOC2;
	NimStringDesc* LOC3;
	NimStringDesc* LOC4;
	NimStringDesc* LOC5;
	result0 = (NimStringDesc*)0;
	memset((void*)(&ti0), 0, sizeof(ti0));
	ti0.Sup.m_type = (&NTI114804);
	LOC1 = (time_t)0;
	LOC1 = gettime_114842_2726502234();
	chckNil((void*)(&ti0));
	memset((void*)(&ti0), 0, sizeof(ti0));
	ti0.Sup.m_type = (&NTI114804);
	getlocaltime_114844_2726502234(LOC1, (&ti0));
	LOC2 = (NimStringDesc*)0;
	LOC3 = (NimStringDesc*)0;
	LOC3 = nimIntToStr(ti0.year);
	LOC4 = (NimStringDesc*)0;
	LOC4 = nsuIntToStr(((NI) ((NI)(((NI) (ti0.month)) + ((NI) 1)))), ((NI) 2));
	LOC5 = (NimStringDesc*)0;
	LOC5 = nsuIntToStr(((NI) (ti0.monthday)), ((NI) 2));
	LOC2 = rawNewString(LOC3->Sup.len + LOC4->Sup.len + LOC5->Sup.len + 2);
appendString(LOC2, LOC3);
appendChar(LOC2, 45);
appendString(LOC2, LOC4);
appendChar(LOC2, 45);
appendString(LOC2, LOC5);
	result0 = LOC2;
	return result0;
}

N_NIMCALL(NimStringDesc*, ntgetClockStr)(void) {
	NimStringDesc* result0;
	Timeinfo114804 ti0;
	time_t LOC1;
	NimStringDesc* LOC2;
	NimStringDesc* LOC3;
	NimStringDesc* LOC4;
	NimStringDesc* LOC5;
	result0 = (NimStringDesc*)0;
	memset((void*)(&ti0), 0, sizeof(ti0));
	ti0.Sup.m_type = (&NTI114804);
	LOC1 = (time_t)0;
	LOC1 = gettime_114842_2726502234();
	chckNil((void*)(&ti0));
	memset((void*)(&ti0), 0, sizeof(ti0));
	ti0.Sup.m_type = (&NTI114804);
	getlocaltime_114844_2726502234(LOC1, (&ti0));
	LOC2 = (NimStringDesc*)0;
	LOC3 = (NimStringDesc*)0;
	LOC3 = nsuIntToStr(((NI) (ti0.hour)), ((NI) 2));
	LOC4 = (NimStringDesc*)0;
	LOC4 = nsuIntToStr(((NI) (ti0.minute)), ((NI) 2));
	LOC5 = (NimStringDesc*)0;
	LOC5 = nsuIntToStr(((NI) (ti0.second)), ((NI) 2));
	LOC2 = rawNewString(LOC3->Sup.len + LOC4->Sup.len + LOC5->Sup.len + 2);
appendString(LOC2, LOC3);
appendChar(LOC2, 58);
appendString(LOC2, LOC4);
appendChar(LOC2, 58);
appendString(LOC2, LOC5);
	result0 = LOC2;
	return result0;
}

N_NIMCALL(NF, toseconds_114864_2726502234)(time_t time0) {
	NF result0;
	result0 = (NF)0;
	result0 = ((NF) (time0));
	return result0;
}

N_NIMCALL(NF, ntepochTime)(void) {
	NF result0;
	struct timeval a0;
	result0 = (NF)0;
	memset((void*)(&a0), 0, sizeof(a0));
	gettimeofday((&a0), NIM_NIL);
	result0 = ((NF)(((double) (a0.tv_sec))) + (NF)(((NF)(((double) (a0.tv_usec))) * (NF)(9.9999999999999995e-07))));
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_timesInit000)(void) {
	tzset();
}

NIM_EXTERNC N_NOINLINE(void, stdlib_timesDatInit000)(void) {
static TNimNode* T2726502234_2[11];
static TNimNode* T2726502234_3[12];
NI T2726502234_5;
static char* NIM_CONST T2726502234_4[12] = {
"mJan", 
"mFeb", 
"mMar", 
"mApr", 
"mMay", 
"mJun", 
"mJul", 
"mAug", 
"mSep", 
"mOct", 
"mNov", 
"mDec"};
static TNimNode* T2726502234_6[7];
NI T2726502234_8;
static char* NIM_CONST T2726502234_7[7] = {
"dMon", 
"dTue", 
"dWed", 
"dThu", 
"dFri", 
"dSat", 
"dSun"};
static TNimNode T2726502234_0[33];
NTI114804.size = sizeof(Timeinfo114804);
NTI114804.kind = 17;
NTI114804.base = (&NTI3608);
T2726502234_2[0] = &T2726502234_0[1];
NTI114807.size = sizeof(NI);
NTI114807.kind = 20;
NTI114807.base = (&NTI104);
NTI114807.flags = 3;
T2726502234_0[1].kind = 1;
T2726502234_0[1].offset = offsetof(Timeinfo114804, second);
T2726502234_0[1].typ = (&NTI114807);
T2726502234_0[1].name = "second";
T2726502234_2[1] = &T2726502234_0[2];
NTI114809.size = sizeof(NI);
NTI114809.kind = 20;
NTI114809.base = (&NTI104);
NTI114809.flags = 3;
T2726502234_0[2].kind = 1;
T2726502234_0[2].offset = offsetof(Timeinfo114804, minute);
T2726502234_0[2].typ = (&NTI114809);
T2726502234_0[2].name = "minute";
T2726502234_2[2] = &T2726502234_0[3];
NTI114811.size = sizeof(NI);
NTI114811.kind = 20;
NTI114811.base = (&NTI104);
NTI114811.flags = 3;
T2726502234_0[3].kind = 1;
T2726502234_0[3].offset = offsetof(Timeinfo114804, hour);
T2726502234_0[3].typ = (&NTI114811);
T2726502234_0[3].name = "hour";
T2726502234_2[3] = &T2726502234_0[4];
NTI114814.size = sizeof(NI);
NTI114814.kind = 20;
NTI114814.base = (&NTI104);
NTI114814.flags = 3;
T2726502234_0[4].kind = 1;
T2726502234_0[4].offset = offsetof(Timeinfo114804, monthday);
T2726502234_0[4].typ = (&NTI114814);
T2726502234_0[4].name = "monthday";
T2726502234_2[4] = &T2726502234_0[5];
NTI114403.size = sizeof(Month114403);
NTI114403.kind = 14;
NTI114403.base = 0;
NTI114403.flags = 3;
for (T2726502234_5 = 0; T2726502234_5 < 12; T2726502234_5++) {
T2726502234_0[T2726502234_5+6].kind = 1;
T2726502234_0[T2726502234_5+6].offset = T2726502234_5;
T2726502234_0[T2726502234_5+6].name = T2726502234_4[T2726502234_5];
T2726502234_3[T2726502234_5] = &T2726502234_0[T2726502234_5+6];
}
T2726502234_0[18].len = 12; T2726502234_0[18].kind = 2; T2726502234_0[18].sons = &T2726502234_3[0];
NTI114403.node = &T2726502234_0[18];
T2726502234_0[5].kind = 1;
T2726502234_0[5].offset = offsetof(Timeinfo114804, month);
T2726502234_0[5].typ = (&NTI114403);
T2726502234_0[5].name = "month";
T2726502234_2[5] = &T2726502234_0[19];
T2726502234_0[19].kind = 1;
T2726502234_0[19].offset = offsetof(Timeinfo114804, year);
T2726502234_0[19].typ = (&NTI104);
T2726502234_0[19].name = "year";
T2726502234_2[6] = &T2726502234_0[20];
NTI114405.size = sizeof(Weekday114405);
NTI114405.kind = 14;
NTI114405.base = 0;
NTI114405.flags = 3;
for (T2726502234_8 = 0; T2726502234_8 < 7; T2726502234_8++) {
T2726502234_0[T2726502234_8+21].kind = 1;
T2726502234_0[T2726502234_8+21].offset = T2726502234_8;
T2726502234_0[T2726502234_8+21].name = T2726502234_7[T2726502234_8];
T2726502234_6[T2726502234_8] = &T2726502234_0[T2726502234_8+21];
}
T2726502234_0[28].len = 7; T2726502234_0[28].kind = 2; T2726502234_0[28].sons = &T2726502234_6[0];
NTI114405.node = &T2726502234_0[28];
T2726502234_0[20].kind = 1;
T2726502234_0[20].offset = offsetof(Timeinfo114804, weekday);
T2726502234_0[20].typ = (&NTI114405);
T2726502234_0[20].name = "weekday";
T2726502234_2[7] = &T2726502234_0[29];
NTI114819.size = sizeof(NI);
NTI114819.kind = 20;
NTI114819.base = (&NTI104);
NTI114819.flags = 3;
T2726502234_0[29].kind = 1;
T2726502234_0[29].offset = offsetof(Timeinfo114804, yearday);
T2726502234_0[29].typ = (&NTI114819);
T2726502234_0[29].name = "yearday";
T2726502234_2[8] = &T2726502234_0[30];
T2726502234_0[30].kind = 1;
T2726502234_0[30].offset = offsetof(Timeinfo114804, isdst);
T2726502234_0[30].typ = (&NTI130);
T2726502234_0[30].name = "isDST";
T2726502234_2[9] = &T2726502234_0[31];
T2726502234_0[31].kind = 1;
T2726502234_0[31].offset = offsetof(Timeinfo114804, tzname);
T2726502234_0[31].typ = (&NTI138);
T2726502234_0[31].name = "tzname";
T2726502234_2[10] = &T2726502234_0[32];
T2726502234_0[32].kind = 1;
T2726502234_0[32].offset = offsetof(Timeinfo114804, timezone);
T2726502234_0[32].typ = (&NTI104);
T2726502234_0[32].name = "timezone";
T2726502234_0[0].len = 11; T2726502234_0[0].kind = 2; T2726502234_0[0].sons = &T2726502234_2[0];
NTI114804.node = &T2726502234_0[0];
}

