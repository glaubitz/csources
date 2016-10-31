/* Generated by Nim Compiler v0.14.3 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include "winsock2.h"
#include <string.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Addrinfo116053 Addrinfo116053;
typedef struct TY584619 TY584619;
typedef struct Timeval116051 Timeval116051;
typedef struct Tfdset116049 Tfdset116049;
typedef NIM_CHAR TY116059[257];
typedef NIM_CHAR TY116062[129];
typedef N_STDCALL_PTR(int, TY116347) (NI16 wversionrequired0, WSADATA* Wsdata0);
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 Domain575604;
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
typedef NU8 Socktype575606;
typedef NU8 Protocol575608;
typedef N_STDCALL_PTR(NI, TY116200) (int af0, int typ0, int protocol0);
typedef N_STDCALL_PTR(int, TY116215) (NI s0, SOCKADDR* name0, unsigned int namelen0);
struct  Addrinfo116053  {
int aiflags;
int aifamily;
int aisocktype;
int aiprotocol;
NI aiaddrlen;
NCSTRING aicanonname;
SOCKADDR* aiaddr;
Addrinfo116053* ainext;
};
typedef N_STDCALL_PTR(int, TY116352) (NCSTRING nodename0, NCSTRING servname0, Addrinfo116053* hints0, Addrinfo116053** res0);
typedef N_STDCALL_PTR(void, TY116361) (Addrinfo116053* ai0);
typedef N_STDCALL_PTR(int, TY116256) (NI s0, int backlog0);
struct  Timeval116051  {
NI32 tvsec;
NI32 tvusec;
};
typedef NI TY116101[64];
struct  Tfdset116049  {
int fdcount;
TY116101 fdarray;
};
typedef N_STDCALL_PTR(int, TY116276) (int nfds0, Tfdset116049* readfds0, Tfdset116049* writefds0, Tfdset116049* exceptfds0, Timeval116051* timeout0);
typedef N_STDCALL_PTR(int, TY116205) (NI s0);
typedef NU8 Tnimnodekind3405;
struct  TNimNode  {
Tnimnodekind3405 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef NIM_CHAR TY116069[14];
struct TY584619 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
N_NOINLINE(void, raiseoserror_127224_2125978480)(NI32 errorcode0, NimStringDesc* additionalinfo0);
N_NIMCALL(NI32, oslasterror_127240_2125978480)(void);
N_NIMCALL(int, toint_575820_466562973)(Domain575604 domain0);
N_NIMCALL(int, toint_575823_466562973)(Socktype575606 typ0);
N_NIMCALL(int, toint_575826_466562973)(Protocol575608 p0);
N_NIMCALL(NimStringDesc*, HEX24_8401_1689653243)(NU64 x0);
N_NIMCALL(Timeval116051, timevalfrommilliseconds_579812_466562973)(NI timeout0);
N_NIMCALL(void, createfdset_579823_466562973)(Tfdset116049* fd0, TY584619* s0, NI* m0);
N_NIMCALL(void, Fdzero_116342_114176342)(Tfdset116049* s0);
N_NIMCALL(void, Fdset_116327_114176342)(NI socket0, Tfdset116049* s0);
N_NIMCALL(void, prunesocketset_580014_466562973)(TY584619** s0, Tfdset116049* fd0);
N_NIMCALL(int, Fdisset_116321_114176342)(NI socket0, Tfdset116049* set0);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* seq0, NI elemsize0, NI newlen0);
STRING_LITERAL(T466562973_2, "", 0);
NI osinvalidsocket_575650_466562973;
WSADATA wsa_580106_466562973;
extern TY116347 Dl_116346;
TNimType NTI575604; /* Domain */
TNimType NTI575606; /* SockType */
TNimType NTI575608; /* Protocol */
extern TY116200 Dl_116199;
extern TY116215 Dl_116214;
extern TY116352 Dl_116351;
extern TY116361 Dl_116360;
extern TY116256 Dl_116255;
extern TY116276 Dl_116275;
extern TY116205 Dl_116204;

N_NIMCALL(int, toint_575820_466562973)(Domain575604 domain0) {
	int result0;
	result0 = (int)0;
	result0 = ((int) (((NI16)(NU16)(NU)(((NI) (domain0))))));
	return result0;
}

N_NIMCALL(int, toint_575823_466562973)(Socktype575606 typ0) {
	int result0;
	result0 = (int)0;
	result0 = ((int) (typ0));
	return result0;
}

N_NIMCALL(int, toint_575826_466562973)(Protocol575608 p0) {
	int result0;
	result0 = (int)0;
	result0 = ((int) (p0));
	return result0;
}

N_NIMCALL(NI, newnativesocket_576001_466562973)(Domain575604 domain0, Socktype575606 socktype0, Protocol575608 protocol0) {
	NI result0;
	int LOC1;
	int LOC2;
	int LOC3;
	result0 = (NI)0;
	LOC1 = (int)0;
	LOC1 = toint_575820_466562973(domain0);
	LOC2 = (int)0;
	LOC2 = toint_575823_466562973(socktype0);
	LOC3 = (int)0;
	LOC3 = toint_575826_466562973(protocol0);
	result0 = Dl_116199(LOC1, LOC2, LOC3);
	return result0;
}

N_NIMCALL(NU16, ntohs_577087_466562973)(NU16 x0) {
	NU16 result0;
	result0 = (NU16)0;
	result0 = (NU16)((NU16)((NU16)(x0) >> (NU16)(((NU16) 8))) | (NU16)((NU16)(x0) << (NU16)(((NU16) 8))));
	return result0;
}

N_NIMCALL(NU32, ntohl_576806_466562973)(NU32 x0) {
	NU32 result0;
	result0 = (NU32)0;
	result0 = (NU32)((NU32)((NU32)((NU32)((NU32)(x0) >> (NU32)(((NU32) 24))) | (NU32)((NU32)((NU32)(x0) >> (NU32)(((NU32) 8))) & ((NU32) 65280))) | (NU32)((NU32)((NU32)(x0) << (NU32)(((NU32) 8))) & ((NU32) 16711680))) | (NU32)((NU32)(x0) << (NU32)(((NU32) 24))));
	return result0;
}

N_NIMCALL(int, bindaddr_576201_466562973)(NI socket0, SOCKADDR* name0, unsigned int namelen0) {
	int result0;
	result0 = (int)0;
	result0 = Dl_116214(socket0, name0, namelen0);
	return result0;
}

N_NIMCALL(Addrinfo116053*, getaddrinfo_576402_466562973)(NimStringDesc* address0, NU16 port0, Domain575604 domain0, Socktype575606 socktype0, Protocol575608 protocol0) {
	Addrinfo116053* result0;
	Addrinfo116053 hints0;
	int gairesult0;
	NimStringDesc* LOC5;
	result0 = (Addrinfo116053*)0;
	memset((void*)(&hints0), 0, sizeof(hints0));
	result0 = NIM_NIL;
	hints0.aifamily = toint_575820_466562973(domain0);
	hints0.aisocktype = toint_575823_466562973(socktype0);
	hints0.aiprotocol = toint_575826_466562973(protocol0);
	{
		if (!(domain0 == ((Domain575604) 23))) goto LA3;
		hints0.aiflags = ((int) 8);
	}
	LA3: ;
	LOC5 = (NimStringDesc*)0;
	LOC5 = HEX24_8401_1689653243(port0);
	gairesult0 = Dl_116351(address0->data, LOC5->data, (&hints0), &result0);
	{
		NI32 LOC10;
		if (!!((gairesult0 == ((NI32) 0)))) goto LA8;
		LOC10 = (NI32)0;
		LOC10 = oslasterror_127240_2125978480();
		raiseoserror_127224_2125978480(LOC10, ((NimStringDesc*) &T466562973_2));
	}
	LA8: ;
	return result0;
}

N_NIMCALL(void, dealloc_576802_466562973)(Addrinfo116053* ai0) {
	Dl_116360(ai0);
}

N_NIMCALL(int, listen_576208_466562973)(NI socket0, int backlog0) {
	int result0;
	result0 = (int)0;
	result0 = Dl_116255(socket0, backlog0);
	return result0;
}

N_NIMCALL(Timeval116051, timevalfrommilliseconds_579812_466562973)(NI timeout0) {
	Timeval116051 result0;
	memset((void*)(&result0), 0, sizeof(result0));
	{
		NI seconds0;
		if (!!((timeout0 == ((NI) -1)))) goto LA3;
		seconds0 = (NI)(timeout0 / ((NI) 1000));
		result0.tvsec = ((NI32) (seconds0));
		result0.tvusec = ((NI32) ((NI)((NI)(timeout0 - (NI)(seconds0 * ((NI) 1000))) * ((NI) 1000))));
	}
	LA3: ;
	return result0;
}

N_NIMCALL(void, createfdset_579823_466562973)(Tfdset116049* fd0, TY584619* s0, NI* m0) {
	Fdzero_116342_114176342(fd0);
	{
		NI i_580002_466562973;
		NI i_580011_466562973;
		NI L_580013_466562973;
		i_580002_466562973 = (NI)0;
		i_580011_466562973 = ((NI) 0);
		L_580013_466562973 = (s0 ? s0->Sup.len : 0);
		{
			while (1) {
				if (!(i_580011_466562973 < L_580013_466562973)) goto LA3;
				i_580002_466562973 = s0->data[i_580011_466562973];
				(*m0) = (((*m0) >= i_580002_466562973) ? (*m0) : i_580002_466562973);
				Fdset_116327_114176342(i_580002_466562973, fd0);
				i_580011_466562973 += ((NI) 1);
			} LA3: ;
		}
	}
}

N_NIMCALL(void, prunesocketset_580014_466562973)(TY584619** s0, Tfdset116049* fd0) {
	NI i0;
	NI L0;
	i0 = ((NI) 0);
	L0 = ((*s0) ? (*s0)->Sup.len : 0);
	{
		while (1) {
			if (!(i0 < L0)) goto LA2;
			{
				int LOC5;
				LOC5 = (int)0;
				LOC5 = Fdisset_116321_114176342((*s0)->data[i0], fd0);
				if (!(LOC5 == ((NI32) 0))) goto LA6;
				(*s0)->data[i0] = (*s0)->data[(NI)(L0 - ((NI) 1))];
				L0 -= ((NI) 1);
			}
			goto LA3;
			LA6: ;
			{
				i0 += ((NI) 1);
			}
			LA3: ;
		} LA2: ;
	}
	(*s0) = (TY584619*) setLengthSeq(&((*s0))->Sup, sizeof(NI), ((NI) (L0)));
}

N_NIMCALL(NI, select_580060_466562973)(TY584619** readfds0, NI timeout0) {
	NI result0;
	Timeval116051 tv0;
	Tfdset116049 rd0;
	NI m0;
	result0 = (NI)0;
	tv0 = timevalfrommilliseconds_579812_466562973(timeout0);
	memset((void*)(&rd0), 0, sizeof(rd0));
	m0 = ((NI) 0);
	createfdset_579823_466562973((&rd0), (*readfds0), (&m0));
	{
		int LOC5;
		if (!!((timeout0 == ((NI) -1)))) goto LA3;
		LOC5 = (int)0;
		LOC5 = Dl_116275(((int) ((NI)(m0 + ((NI) 1)))), (&rd0), NIM_NIL, NIM_NIL, (&tv0));
		result0 = ((NI) (LOC5));
	}
	goto LA1;
	LA3: ;
	{
		int LOC7;
		LOC7 = (int)0;
		LOC7 = Dl_116275(((int) ((NI)(m0 + ((NI) 1)))), (&rd0), NIM_NIL, NIM_NIL, NIM_NIL);
		result0 = ((NI) (LOC7));
	}
	LA1: ;
	prunesocketset_580014_466562973(readfds0, (&rd0));
	return result0;
}

N_NIMCALL(void, close_576013_466562973)(NI socket0) {
	int LOC1;
	LOC1 = (int)0;
	LOC1 = Dl_116204(socket0);
}
NIM_EXTERNC N_NOINLINE(void, stdlib_nativesocketsInit000)(void) {
	osinvalidsocket_575650_466562973 = INVALID_SOCKET;
	{
		int LOC3;
		NI32 LOC6;
		LOC3 = (int)0;
		LOC3 = Dl_116346(((NI16) 257), (&wsa_580106_466562973));
		if (!!((LOC3 == ((NI32) 0)))) goto LA4;
		LOC6 = (NI32)0;
		LOC6 = oslasterror_127240_2125978480();
		raiseoserror_127224_2125978480(LOC6, ((NimStringDesc*) &T466562973_2));
	}
	LA4: ;
}

NIM_EXTERNC N_NOINLINE(void, stdlib_nativesocketsDatInit000)(void) {
static TNimNode* T466562973_3[3];
NI T466562973_5;
static char* NIM_CONST T466562973_4[3] = {
"AF_UNIX", 
"AF_INET", 
"AF_INET6"};
static TNimNode* T466562973_6[4];
NI T466562973_8;
static char* NIM_CONST T466562973_7[4] = {
"SOCK_STREAM", 
"SOCK_DGRAM", 
"SOCK_RAW", 
"SOCK_SEQPACKET"};
static TNimNode* T466562973_9[6];
NI T466562973_11;
static char* NIM_CONST T466562973_10[6] = {
"IPPROTO_TCP", 
"IPPROTO_UDP", 
"IPPROTO_IP", 
"IPPROTO_IPV6", 
"IPPROTO_RAW", 
"IPPROTO_ICMP"};
static TNimNode T466562973_0[16];
NTI575604.size = sizeof(Domain575604);
NTI575604.kind = 14;
NTI575604.base = 0;
NTI575604.flags = 3;
for (T466562973_5 = 0; T466562973_5 < 3; T466562973_5++) {
T466562973_0[T466562973_5+0].kind = 1;
T466562973_0[T466562973_5+0].offset = T466562973_5;
T466562973_0[T466562973_5+0].name = T466562973_4[T466562973_5];
T466562973_3[T466562973_5] = &T466562973_0[T466562973_5+0];
}
T466562973_0[0].offset = 0;
T466562973_0[1].offset = 2;
T466562973_0[2].offset = 23;
T466562973_0[3].len = 3; T466562973_0[3].kind = 2; T466562973_0[3].sons = &T466562973_3[0];
NTI575604.node = &T466562973_0[3];
NTI575604.flags = 1<<2;
NTI575606.size = sizeof(Socktype575606);
NTI575606.kind = 14;
NTI575606.base = 0;
NTI575606.flags = 3;
for (T466562973_8 = 0; T466562973_8 < 4; T466562973_8++) {
T466562973_0[T466562973_8+4].kind = 1;
T466562973_0[T466562973_8+4].offset = T466562973_8;
T466562973_0[T466562973_8+4].name = T466562973_7[T466562973_8];
T466562973_6[T466562973_8] = &T466562973_0[T466562973_8+4];
}
T466562973_0[4].offset = 1;
T466562973_0[5].offset = 2;
T466562973_0[6].offset = 3;
T466562973_0[7].offset = 5;
T466562973_0[8].len = 4; T466562973_0[8].kind = 2; T466562973_0[8].sons = &T466562973_6[0];
NTI575606.node = &T466562973_0[8];
NTI575606.flags = 1<<2;
NTI575608.size = sizeof(Protocol575608);
NTI575608.kind = 14;
NTI575608.base = 0;
NTI575608.flags = 3;
for (T466562973_11 = 0; T466562973_11 < 6; T466562973_11++) {
T466562973_0[T466562973_11+9].kind = 1;
T466562973_0[T466562973_11+9].offset = T466562973_11;
T466562973_0[T466562973_11+9].name = T466562973_10[T466562973_11];
T466562973_9[T466562973_11] = &T466562973_0[T466562973_11+9];
}
T466562973_0[9].offset = 6;
T466562973_0[10].offset = 17;
T466562973_0[11].offset = 18;
T466562973_0[12].offset = 19;
T466562973_0[13].offset = 20;
T466562973_0[14].offset = 21;
T466562973_0[15].len = 6; T466562973_0[15].kind = 2; T466562973_0[15].sons = &T466562973_9[0];
NTI575608.node = &T466562973_0[15];
NTI575608.flags = 1<<2;
}

