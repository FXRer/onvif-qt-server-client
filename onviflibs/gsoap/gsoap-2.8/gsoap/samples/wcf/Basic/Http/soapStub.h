/* soapStub.h
   Generated by gSOAP 2.8.17r from calculator.h

Copyright(C) 2000-2014, Robert van Engelen, Genivia Inc. All Rights Reserved.
The generated code is released under one of the following licenses:
GPL or Genivia's license for commercial use.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
*/

#ifndef soapStub_H
#define soapStub_H
#include <vector>
#define SOAP_NAMESPACE_OF_mssamhi	"http://Microsoft.Samples.Http/Imports"
#define SOAP_NAMESPACE_OF_mssamh	"http://Microsoft.Samples.Http"
#include "stdsoap2.h"
#if GSOAP_VERSION != 20817
# error "GSOAP VERSION MISMATCH IN GENERATED CODE: PLEASE REINSTALL PACKAGE"
#endif


/******************************************************************************\
 *                                                                            *
 * Enumerations                                                               *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Types with Custom Serializers                                              *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Classes and Structs                                                        *
 *                                                                            *
\******************************************************************************/


#if 0 /* volatile type: do not declare here, declared elsewhere */

#endif

#ifndef SOAP_TYPE__mssamh__Add
#define SOAP_TYPE__mssamh__Add (8)
/* mssamh:Add */
class SOAP_CMAC _mssamh__Add
{
public:
	double *n1;	/* optional element of type xsd:double */
	double *n2;	/* optional element of type xsd:double */
	struct soap *soap;	/* transient */
public:
	virtual int soap_type() const { return 8; } /* = unique type id SOAP_TYPE__mssamh__Add */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         _mssamh__Add() { _mssamh__Add::soap_default(NULL); }
	virtual ~_mssamh__Add() { }
};
#endif

#ifndef SOAP_TYPE__mssamh__AddResponse
#define SOAP_TYPE__mssamh__AddResponse (9)
/* mssamh:AddResponse */
class SOAP_CMAC _mssamh__AddResponse
{
public:
	double *AddResult;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* optional element of type xsd:double */
	struct soap *soap;	/* transient */
public:
	virtual int soap_type() const { return 9; } /* = unique type id SOAP_TYPE__mssamh__AddResponse */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         _mssamh__AddResponse() { _mssamh__AddResponse::soap_default(NULL); }
	virtual ~_mssamh__AddResponse() { }
};
#endif

#ifndef SOAP_TYPE__mssamh__Subtract
#define SOAP_TYPE__mssamh__Subtract (10)
/* mssamh:Subtract */
class SOAP_CMAC _mssamh__Subtract
{
public:
	double *n1;	/* optional element of type xsd:double */
	double *n2;	/* optional element of type xsd:double */
	struct soap *soap;	/* transient */
public:
	virtual int soap_type() const { return 10; } /* = unique type id SOAP_TYPE__mssamh__Subtract */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         _mssamh__Subtract() { _mssamh__Subtract::soap_default(NULL); }
	virtual ~_mssamh__Subtract() { }
};
#endif

#ifndef SOAP_TYPE__mssamh__SubtractResponse
#define SOAP_TYPE__mssamh__SubtractResponse (11)
/* mssamh:SubtractResponse */
class SOAP_CMAC _mssamh__SubtractResponse
{
public:
	double *SubtractResult;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* optional element of type xsd:double */
	struct soap *soap;	/* transient */
public:
	virtual int soap_type() const { return 11; } /* = unique type id SOAP_TYPE__mssamh__SubtractResponse */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         _mssamh__SubtractResponse() { _mssamh__SubtractResponse::soap_default(NULL); }
	virtual ~_mssamh__SubtractResponse() { }
};
#endif

#ifndef SOAP_TYPE__mssamh__Multiply
#define SOAP_TYPE__mssamh__Multiply (12)
/* mssamh:Multiply */
class SOAP_CMAC _mssamh__Multiply
{
public:
	double *n1;	/* optional element of type xsd:double */
	double *n2;	/* optional element of type xsd:double */
	struct soap *soap;	/* transient */
public:
	virtual int soap_type() const { return 12; } /* = unique type id SOAP_TYPE__mssamh__Multiply */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         _mssamh__Multiply() { _mssamh__Multiply::soap_default(NULL); }
	virtual ~_mssamh__Multiply() { }
};
#endif

#ifndef SOAP_TYPE__mssamh__MultiplyResponse
#define SOAP_TYPE__mssamh__MultiplyResponse (13)
/* mssamh:MultiplyResponse */
class SOAP_CMAC _mssamh__MultiplyResponse
{
public:
	double *MultiplyResult;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* optional element of type xsd:double */
	struct soap *soap;	/* transient */
public:
	virtual int soap_type() const { return 13; } /* = unique type id SOAP_TYPE__mssamh__MultiplyResponse */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         _mssamh__MultiplyResponse() { _mssamh__MultiplyResponse::soap_default(NULL); }
	virtual ~_mssamh__MultiplyResponse() { }
};
#endif

#ifndef SOAP_TYPE__mssamh__Divide
#define SOAP_TYPE__mssamh__Divide (14)
/* mssamh:Divide */
class SOAP_CMAC _mssamh__Divide
{
public:
	double *n1;	/* optional element of type xsd:double */
	double *n2;	/* optional element of type xsd:double */
	struct soap *soap;	/* transient */
public:
	virtual int soap_type() const { return 14; } /* = unique type id SOAP_TYPE__mssamh__Divide */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         _mssamh__Divide() { _mssamh__Divide::soap_default(NULL); }
	virtual ~_mssamh__Divide() { }
};
#endif

#ifndef SOAP_TYPE__mssamh__DivideResponse
#define SOAP_TYPE__mssamh__DivideResponse (15)
/* mssamh:DivideResponse */
class SOAP_CMAC _mssamh__DivideResponse
{
public:
	double *DivideResult;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* optional element of type xsd:double */
	struct soap *soap;	/* transient */
public:
	virtual int soap_type() const { return 15; } /* = unique type id SOAP_TYPE__mssamh__DivideResponse */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         _mssamh__DivideResponse() { _mssamh__DivideResponse::soap_default(NULL); }
	virtual ~_mssamh__DivideResponse() { }
};
#endif

#ifndef SOAP_TYPE___tempuri__Add
#define SOAP_TYPE___tempuri__Add (22)
/* Operation wrapper: */
struct __tempuri__Add
{
public:
	_mssamh__Add *mssamh__Add;	/* optional element of type mssamh:Add */
public:
	int soap_type() const { return 22; } /* = unique type id SOAP_TYPE___tempuri__Add */
};
#endif

#ifndef SOAP_TYPE___tempuri__Subtract
#define SOAP_TYPE___tempuri__Subtract (26)
/* Operation wrapper: */
struct __tempuri__Subtract
{
public:
	_mssamh__Subtract *mssamh__Subtract;	/* optional element of type mssamh:Subtract */
public:
	int soap_type() const { return 26; } /* = unique type id SOAP_TYPE___tempuri__Subtract */
};
#endif

#ifndef SOAP_TYPE___tempuri__Multiply
#define SOAP_TYPE___tempuri__Multiply (30)
/* Operation wrapper: */
struct __tempuri__Multiply
{
public:
	_mssamh__Multiply *mssamh__Multiply;	/* optional element of type mssamh:Multiply */
public:
	int soap_type() const { return 30; } /* = unique type id SOAP_TYPE___tempuri__Multiply */
};
#endif

#ifndef SOAP_TYPE___tempuri__Divide
#define SOAP_TYPE___tempuri__Divide (34)
/* Operation wrapper: */
struct __tempuri__Divide
{
public:
	_mssamh__Divide *mssamh__Divide;	/* optional element of type mssamh:Divide */
public:
	int soap_type() const { return 34; } /* = unique type id SOAP_TYPE___tempuri__Divide */
};
#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_SOAP_ENV__Header
#define SOAP_TYPE_SOAP_ENV__Header (35)
/* SOAP Header: */
struct SOAP_ENV__Header
{
public:
	int soap_type() const { return 35; } /* = unique type id SOAP_TYPE_SOAP_ENV__Header */
#ifdef WITH_NOEMPTYSTRUCT
private:
	char dummy;	/* dummy member to enable compilation */
#endif
};
#endif

#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_SOAP_ENV__Code
#define SOAP_TYPE_SOAP_ENV__Code (36)
/* SOAP Fault Code: */
struct SOAP_ENV__Code
{
public:
	char *SOAP_ENV__Value;	/* optional element of type xsd:QName */
	struct SOAP_ENV__Code *SOAP_ENV__Subcode;	/* optional element of type SOAP-ENV:Code */
public:
	int soap_type() const { return 36; } /* = unique type id SOAP_TYPE_SOAP_ENV__Code */
};
#endif

#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_SOAP_ENV__Detail
#define SOAP_TYPE_SOAP_ENV__Detail (38)
/* SOAP-ENV:Detail */
struct SOAP_ENV__Detail
{
public:
	char *__any;
	int __type;	/* any type of element <fault> (defined below) */
	void *fault;	/* transient */
public:
	int soap_type() const { return 38; } /* = unique type id SOAP_TYPE_SOAP_ENV__Detail */
};
#endif

#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_SOAP_ENV__Reason
#define SOAP_TYPE_SOAP_ENV__Reason (41)
/* SOAP-ENV:Reason */
struct SOAP_ENV__Reason
{
public:
	char *SOAP_ENV__Text;	/* optional element of type xsd:string */
public:
	int soap_type() const { return 41; } /* = unique type id SOAP_TYPE_SOAP_ENV__Reason */
};
#endif

#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_SOAP_ENV__Fault
#define SOAP_TYPE_SOAP_ENV__Fault (42)
/* SOAP Fault: */
struct SOAP_ENV__Fault
{
public:
	char *faultcode;	/* optional element of type xsd:QName */
	char *faultstring;	/* optional element of type xsd:string */
	char *faultactor;	/* optional element of type xsd:string */
	struct SOAP_ENV__Detail *detail;	/* optional element of type SOAP-ENV:Detail */
	struct SOAP_ENV__Code *SOAP_ENV__Code;	/* optional element of type SOAP-ENV:Code */
	struct SOAP_ENV__Reason *SOAP_ENV__Reason;	/* optional element of type SOAP-ENV:Reason */
	char *SOAP_ENV__Node;	/* optional element of type xsd:string */
	char *SOAP_ENV__Role;	/* optional element of type xsd:string */
	struct SOAP_ENV__Detail *SOAP_ENV__Detail;	/* optional element of type SOAP-ENV:Detail */
public:
	int soap_type() const { return 42; } /* = unique type id SOAP_TYPE_SOAP_ENV__Fault */
};
#endif

#endif

/******************************************************************************\
 *                                                                            *
 * Typedefs                                                                   *
 *                                                                            *
\******************************************************************************/

#ifndef SOAP_TYPE__QName
#define SOAP_TYPE__QName (5)
typedef char *_QName;
#endif

#ifndef SOAP_TYPE__XML
#define SOAP_TYPE__XML (6)
typedef char *_XML;
#endif


/******************************************************************************\
 *                                                                            *
 * Externals                                                                  *
 *                                                                            *
\******************************************************************************/


#endif

/* End of soapStub.h */
