/* soapSearchBindingService.cpp
   Generated by gSOAP 2.8.17r from onvif.h

Copyright(C) 2000-2013, Robert van Engelen, Genivia Inc. All Rights Reserved.
The generated code is released under one of the following licenses:
GPL or Genivia's license for commercial use.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
*/

#include "soapSearchBindingService.h"

SearchBindingService::SearchBindingService()
{	SearchBindingService_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

SearchBindingService::SearchBindingService(const struct soap &_soap) : soap(_soap)
{ }

SearchBindingService::SearchBindingService(soap_mode iomode)
{	SearchBindingService_init(iomode, iomode);
}

SearchBindingService::SearchBindingService(soap_mode imode, soap_mode omode)
{	SearchBindingService_init(imode, omode);
}

SearchBindingService::~SearchBindingService()
{ }

void SearchBindingService::SearchBindingService_init(soap_mode imode, soap_mode omode)
{	soap_imode(this, imode);
	soap_omode(this, omode);
	static const struct Namespace namespaces[] =
{
	{"SOAP-ENV", "http://www.w3.org/2003/05/soap-envelope", "http://schemas.xmlsoap.org/soap/envelope/", NULL},
	{"SOAP-ENC", "http://www.w3.org/2003/05/soap-encoding", "http://schemas.xmlsoap.org/soap/encoding/", NULL},
	{"xsi", "http://www.w3.org/2001/XMLSchema-instance", "http://www.w3.org/*/XMLSchema-instance", NULL},
	{"xsd", "http://www.w3.org/2001/XMLSchema", "http://www.w3.org/*/XMLSchema", NULL},
	{"c14n", "http://www.w3.org/2001/10/xml-exc-c14n#", NULL, NULL},
	{"wsu", "http://docs.oasis-open.org/wss/2004/01/oasis-200401-wss-wssecurity-utility-1.0.xsd", NULL, NULL},
	{"xenc", "http://www.w3.org/2001/04/xmlenc#", NULL, NULL},
	{"wsc", "http://schemas.xmlsoap.org/ws/2005/02/sc", NULL, NULL},
	{"ds", "http://www.w3.org/2000/09/xmldsig#", NULL, NULL},
	{"wsse", "http://docs.oasis-open.org/wss/2004/01/oasis-200401-wss-wssecurity-secext-1.0.xsd", "http://docs.oasis-open.org/wss/oasis-wss-wssecurity-secext-1.1.xsd", NULL},
	{"wsa", "http://schemas.xmlsoap.org/ws/2004/08/addressing", NULL, NULL},
	{"wsdd", "http://schemas.xmlsoap.org/ws/2005/04/discovery", NULL, NULL},
	{"chan", "http://schemas.microsoft.com/ws/2005/02/duplex", NULL, NULL},
	{"wsa5", "http://www.w3.org/2005/08/addressing", "http://schemas.xmlsoap.org/ws/2004/08/addressing", NULL},
	{"xmime", "http://tempuri.org/xmime.xsd", NULL, NULL},
	{"xop", "http://www.w3.org/2004/08/xop/include", NULL, NULL},
	{"tt", "http://www.onvif.org/ver10/schema", NULL, NULL},
	{"wsrfbf", "http://docs.oasis-open.org/wsrf/bf-2", NULL, NULL},
	{"wstop", "http://docs.oasis-open.org/wsn/t-1", NULL, NULL},
	{"wsrfr", "http://docs.oasis-open.org/wsrf/r-2", NULL, NULL},
	{"tdn", "http://www.onvif.org/ver10/network/wsdl", NULL, NULL},
	{"tds", "http://www.onvif.org/ver10/device/wsdl", NULL, NULL},
	{"tev", "http://www.onvif.org/ver10/events/wsdl", NULL, NULL},
	{"wsnt", "http://docs.oasis-open.org/wsn/b-2", NULL, NULL},
	{"timg", "http://www.onvif.org/ver20/imaging/wsdl", NULL, NULL},
	{"tls", "http://www.onvif.org/ver10/display/wsdl", NULL, NULL},
	{"tmd", "http://www.onvif.org/ver10/deviceIO/wsdl", NULL, NULL},
	{"tptz", "http://www.onvif.org/ver20/ptz/wsdl", NULL, NULL},
	{"trc", "http://www.onvif.org/ver10/recording/wsdl", NULL, NULL},
	{"trp", "http://www.onvif.org/ver10/replay/wsdl", NULL, NULL},
	{"trt", "http://www.onvif.org/ver10/media/wsdl", NULL, NULL},
	{"trv", "http://www.onvif.org/ver10/receiver/wsdl", NULL, NULL},
	{"tse", "http://www.onvif.org/ver10/search/wsdl", NULL, NULL},
	{NULL, NULL, NULL, NULL}
};
	soap_set_namespaces(this, namespaces);
}

void SearchBindingService::destroy()
{	soap_destroy(this);
	soap_end(this);
}

void SearchBindingService::reset()
{	destroy();
	soap_done(this);
	soap_initialize(this);
	SearchBindingService_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

#ifndef WITH_PURE_VIRTUAL
SearchBindingService *SearchBindingService::copy()
{	SearchBindingService *dup = SOAP_NEW_COPY(SearchBindingService(*(struct soap*)this));
	return dup;
}
#endif

int SearchBindingService::soap_close_socket()
{	return soap_closesock(this);
}

int SearchBindingService::soap_force_close_socket()
{	return soap_force_closesock(this);
}

int SearchBindingService::soap_senderfault(const char *string, const char *detailXML)
{	return ::soap_sender_fault(this, string, detailXML);
}

int SearchBindingService::soap_senderfault(const char *subcodeQName, const char *string, const char *detailXML)
{	return ::soap_sender_fault_subcode(this, subcodeQName, string, detailXML);
}

int SearchBindingService::soap_receiverfault(const char *string, const char *detailXML)
{	return ::soap_receiver_fault(this, string, detailXML);
}

int SearchBindingService::soap_receiverfault(const char *subcodeQName, const char *string, const char *detailXML)
{	return ::soap_receiver_fault_subcode(this, subcodeQName, string, detailXML);
}

void SearchBindingService::soap_print_fault(FILE *fd)
{	::soap_print_fault(this, fd);
}

#ifndef WITH_LEAN
#ifndef WITH_COMPAT
void SearchBindingService::soap_stream_fault(std::ostream& os)
{	::soap_stream_fault(this, os);
}
#endif

char *SearchBindingService::soap_sprint_fault(char *buf, size_t len)
{	return ::soap_sprint_fault(this, buf, len);
}
#endif

void SearchBindingService::soap_noheader()
{	this->header = NULL;
}

void SearchBindingService::soap_header(struct _wsse__Security *wsse__Security, char *wsa__MessageID, struct wsa__Relationship *wsa__RelatesTo, struct wsa__EndpointReferenceType *wsa__From, struct wsa__EndpointReferenceType *wsa__ReplyTo, struct wsa__EndpointReferenceType *wsa__FaultTo, char *wsa__To, char *wsa__Action, struct wsdd__AppSequenceType *wsdd__AppSequence, char *wsa5__MessageID, struct wsa5__RelatesToType *wsa5__RelatesTo, struct wsa5__EndpointReferenceType *wsa5__From, struct wsa5__EndpointReferenceType *wsa5__ReplyTo, struct wsa5__EndpointReferenceType *wsa5__FaultTo, char *wsa5__To, char *wsa5__Action, struct chan__ChannelInstanceType *chan__ChannelInstance)
{	::soap_header(this);
	this->header->wsse__Security = wsse__Security;
	this->header->wsa__MessageID = wsa__MessageID;
	this->header->wsa__RelatesTo = wsa__RelatesTo;
	this->header->wsa__From = wsa__From;
	this->header->wsa__ReplyTo = wsa__ReplyTo;
	this->header->wsa__FaultTo = wsa__FaultTo;
	this->header->wsa__To = wsa__To;
	this->header->wsa__Action = wsa__Action;
	this->header->wsdd__AppSequence = wsdd__AppSequence;
	this->header->wsa5__MessageID = wsa5__MessageID;
	this->header->wsa5__RelatesTo = wsa5__RelatesTo;
	this->header->wsa5__From = wsa5__From;
	this->header->wsa5__ReplyTo = wsa5__ReplyTo;
	this->header->wsa5__FaultTo = wsa5__FaultTo;
	this->header->wsa5__To = wsa5__To;
	this->header->wsa5__Action = wsa5__Action;
	this->header->chan__ChannelInstance = chan__ChannelInstance;
}

const SOAP_ENV__Header *SearchBindingService::soap_header()
{	return this->header;
}

int SearchBindingService::run(int port)
{	if (soap_valid_socket(this->master) || soap_valid_socket(bind(NULL, port, 100)))
	{	for (;;)
		{	if (!soap_valid_socket(accept()) || serve())
				return this->error;
			soap_destroy(this);
			soap_end(this);
		}
	}
	else
		return this->error;
	return SOAP_OK;
}

SOAP_SOCKET SearchBindingService::bind(const char *host, int port, int backlog)
{	return soap_bind(this, host, port, backlog);
}

SOAP_SOCKET SearchBindingService::accept()
{	return soap_accept(this);
}

#if defined(WITH_OPENSSL) || defined(WITH_GNUTLS)
int SearchBindingService::ssl_accept()
{	return soap_ssl_accept(this);
}
#endif

int SearchBindingService::serve()
{
#ifndef WITH_FASTCGI
	unsigned int k = this->max_keep_alive;
#endif
	do
	{

#ifndef WITH_FASTCGI
		if (this->max_keep_alive > 0 && !--k)
			this->keep_alive = 0;
#endif

		if (soap_begin_serve(this))
		{	if (this->error >= SOAP_STOP)
				continue;
			return this->error;
		}
		if (dispatch() || (this->fserveloop && this->fserveloop(this)))
		{
#ifdef WITH_FASTCGI
			soap_send_fault(this);
#else
			return soap_send_fault(this);
#endif
		}

#ifdef WITH_FASTCGI
		soap_destroy(this);
		soap_end(this);
	} while (1);
#else
	} while (this->keep_alive);
#endif
	return SOAP_OK;
}

static int serve___tse__GetServiceCapabilities(SearchBindingService*);
static int serve___tse__GetRecordingSummary(SearchBindingService*);
static int serve___tse__GetRecordingInformation(SearchBindingService*);
static int serve___tse__GetMediaAttributes(SearchBindingService*);
static int serve___tse__FindRecordings(SearchBindingService*);
static int serve___tse__GetRecordingSearchResults(SearchBindingService*);
static int serve___tse__FindEvents(SearchBindingService*);
static int serve___tse__GetEventSearchResults(SearchBindingService*);
static int serve___tse__FindPTZPosition(SearchBindingService*);
static int serve___tse__GetPTZPositionSearchResults(SearchBindingService*);
static int serve___tse__GetSearchState(SearchBindingService*);
static int serve___tse__EndSearch(SearchBindingService*);
static int serve___tse__FindMetadata(SearchBindingService*);
static int serve___tse__GetMetadataSearchResults(SearchBindingService*);

int SearchBindingService::dispatch()
{	soap_peek_element(this);
	if (!soap_match_tag(this, this->tag, "tse:GetServiceCapabilities"))
		return serve___tse__GetServiceCapabilities(this);
	if (!soap_match_tag(this, this->tag, "tse:GetRecordingSummary"))
		return serve___tse__GetRecordingSummary(this);
	if (!soap_match_tag(this, this->tag, "tse:GetRecordingInformation"))
		return serve___tse__GetRecordingInformation(this);
	if (!soap_match_tag(this, this->tag, "tse:GetMediaAttributes"))
		return serve___tse__GetMediaAttributes(this);
	if (!soap_match_tag(this, this->tag, "tse:FindRecordings"))
		return serve___tse__FindRecordings(this);
	if (!soap_match_tag(this, this->tag, "tse:GetRecordingSearchResults"))
		return serve___tse__GetRecordingSearchResults(this);
	if (!soap_match_tag(this, this->tag, "tse:FindEvents"))
		return serve___tse__FindEvents(this);
	if (!soap_match_tag(this, this->tag, "tse:GetEventSearchResults"))
		return serve___tse__GetEventSearchResults(this);
	if (!soap_match_tag(this, this->tag, "tse:FindPTZPosition"))
		return serve___tse__FindPTZPosition(this);
	if (!soap_match_tag(this, this->tag, "tse:GetPTZPositionSearchResults"))
		return serve___tse__GetPTZPositionSearchResults(this);
	if (!soap_match_tag(this, this->tag, "tse:GetSearchState"))
		return serve___tse__GetSearchState(this);
	if (!soap_match_tag(this, this->tag, "tse:EndSearch"))
		return serve___tse__EndSearch(this);
	if (!soap_match_tag(this, this->tag, "tse:FindMetadata"))
		return serve___tse__FindMetadata(this);
	if (!soap_match_tag(this, this->tag, "tse:GetMetadataSearchResults"))
		return serve___tse__GetMetadataSearchResults(this);
	return this->error = SOAP_NO_METHOD;
}

static int serve___tse__GetServiceCapabilities(SearchBindingService *soap)
{	struct __tse__GetServiceCapabilities soap_tmp___tse__GetServiceCapabilities;
	_tse__GetServiceCapabilitiesResponse tse__GetServiceCapabilitiesResponse;
	tse__GetServiceCapabilitiesResponse.soap_default(soap);
	soap_default___tse__GetServiceCapabilities(soap, &soap_tmp___tse__GetServiceCapabilities);
	if (!soap_get___tse__GetServiceCapabilities(soap, &soap_tmp___tse__GetServiceCapabilities, "-tse:GetServiceCapabilities", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = soap->GetServiceCapabilities(soap_tmp___tse__GetServiceCapabilities.tse__GetServiceCapabilities, &tse__GetServiceCapabilitiesResponse);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	tse__GetServiceCapabilitiesResponse.soap_serialize(soap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || tse__GetServiceCapabilitiesResponse.soap_put(soap, "tse:GetServiceCapabilitiesResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || tse__GetServiceCapabilitiesResponse.soap_put(soap, "tse:GetServiceCapabilitiesResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

static int serve___tse__GetRecordingSummary(SearchBindingService *soap)
{	struct __tse__GetRecordingSummary soap_tmp___tse__GetRecordingSummary;
	_tse__GetRecordingSummaryResponse tse__GetRecordingSummaryResponse;
	tse__GetRecordingSummaryResponse.soap_default(soap);
	soap_default___tse__GetRecordingSummary(soap, &soap_tmp___tse__GetRecordingSummary);
	if (!soap_get___tse__GetRecordingSummary(soap, &soap_tmp___tse__GetRecordingSummary, "-tse:GetRecordingSummary", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = soap->GetRecordingSummary(soap_tmp___tse__GetRecordingSummary.tse__GetRecordingSummary, &tse__GetRecordingSummaryResponse);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	tse__GetRecordingSummaryResponse.soap_serialize(soap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || tse__GetRecordingSummaryResponse.soap_put(soap, "tse:GetRecordingSummaryResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || tse__GetRecordingSummaryResponse.soap_put(soap, "tse:GetRecordingSummaryResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

static int serve___tse__GetRecordingInformation(SearchBindingService *soap)
{	struct __tse__GetRecordingInformation soap_tmp___tse__GetRecordingInformation;
	_tse__GetRecordingInformationResponse tse__GetRecordingInformationResponse;
	tse__GetRecordingInformationResponse.soap_default(soap);
	soap_default___tse__GetRecordingInformation(soap, &soap_tmp___tse__GetRecordingInformation);
	if (!soap_get___tse__GetRecordingInformation(soap, &soap_tmp___tse__GetRecordingInformation, "-tse:GetRecordingInformation", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = soap->GetRecordingInformation(soap_tmp___tse__GetRecordingInformation.tse__GetRecordingInformation, &tse__GetRecordingInformationResponse);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	tse__GetRecordingInformationResponse.soap_serialize(soap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || tse__GetRecordingInformationResponse.soap_put(soap, "tse:GetRecordingInformationResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || tse__GetRecordingInformationResponse.soap_put(soap, "tse:GetRecordingInformationResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

static int serve___tse__GetMediaAttributes(SearchBindingService *soap)
{	struct __tse__GetMediaAttributes soap_tmp___tse__GetMediaAttributes;
	_tse__GetMediaAttributesResponse tse__GetMediaAttributesResponse;
	tse__GetMediaAttributesResponse.soap_default(soap);
	soap_default___tse__GetMediaAttributes(soap, &soap_tmp___tse__GetMediaAttributes);
	if (!soap_get___tse__GetMediaAttributes(soap, &soap_tmp___tse__GetMediaAttributes, "-tse:GetMediaAttributes", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = soap->GetMediaAttributes(soap_tmp___tse__GetMediaAttributes.tse__GetMediaAttributes, &tse__GetMediaAttributesResponse);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	tse__GetMediaAttributesResponse.soap_serialize(soap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || tse__GetMediaAttributesResponse.soap_put(soap, "tse:GetMediaAttributesResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || tse__GetMediaAttributesResponse.soap_put(soap, "tse:GetMediaAttributesResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

static int serve___tse__FindRecordings(SearchBindingService *soap)
{	struct __tse__FindRecordings soap_tmp___tse__FindRecordings;
	_tse__FindRecordingsResponse tse__FindRecordingsResponse;
	tse__FindRecordingsResponse.soap_default(soap);
	soap_default___tse__FindRecordings(soap, &soap_tmp___tse__FindRecordings);
	if (!soap_get___tse__FindRecordings(soap, &soap_tmp___tse__FindRecordings, "-tse:FindRecordings", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = soap->FindRecordings(soap_tmp___tse__FindRecordings.tse__FindRecordings, &tse__FindRecordingsResponse);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	tse__FindRecordingsResponse.soap_serialize(soap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || tse__FindRecordingsResponse.soap_put(soap, "tse:FindRecordingsResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || tse__FindRecordingsResponse.soap_put(soap, "tse:FindRecordingsResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

static int serve___tse__GetRecordingSearchResults(SearchBindingService *soap)
{	struct __tse__GetRecordingSearchResults soap_tmp___tse__GetRecordingSearchResults;
	_tse__GetRecordingSearchResultsResponse tse__GetRecordingSearchResultsResponse;
	tse__GetRecordingSearchResultsResponse.soap_default(soap);
	soap_default___tse__GetRecordingSearchResults(soap, &soap_tmp___tse__GetRecordingSearchResults);
	if (!soap_get___tse__GetRecordingSearchResults(soap, &soap_tmp___tse__GetRecordingSearchResults, "-tse:GetRecordingSearchResults", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = soap->GetRecordingSearchResults(soap_tmp___tse__GetRecordingSearchResults.tse__GetRecordingSearchResults, &tse__GetRecordingSearchResultsResponse);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	tse__GetRecordingSearchResultsResponse.soap_serialize(soap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || tse__GetRecordingSearchResultsResponse.soap_put(soap, "tse:GetRecordingSearchResultsResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || tse__GetRecordingSearchResultsResponse.soap_put(soap, "tse:GetRecordingSearchResultsResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

static int serve___tse__FindEvents(SearchBindingService *soap)
{	struct __tse__FindEvents soap_tmp___tse__FindEvents;
	_tse__FindEventsResponse tse__FindEventsResponse;
	tse__FindEventsResponse.soap_default(soap);
	soap_default___tse__FindEvents(soap, &soap_tmp___tse__FindEvents);
	if (!soap_get___tse__FindEvents(soap, &soap_tmp___tse__FindEvents, "-tse:FindEvents", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = soap->FindEvents(soap_tmp___tse__FindEvents.tse__FindEvents, &tse__FindEventsResponse);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	tse__FindEventsResponse.soap_serialize(soap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || tse__FindEventsResponse.soap_put(soap, "tse:FindEventsResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || tse__FindEventsResponse.soap_put(soap, "tse:FindEventsResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

static int serve___tse__GetEventSearchResults(SearchBindingService *soap)
{	struct __tse__GetEventSearchResults soap_tmp___tse__GetEventSearchResults;
	_tse__GetEventSearchResultsResponse tse__GetEventSearchResultsResponse;
	tse__GetEventSearchResultsResponse.soap_default(soap);
	soap_default___tse__GetEventSearchResults(soap, &soap_tmp___tse__GetEventSearchResults);
	if (!soap_get___tse__GetEventSearchResults(soap, &soap_tmp___tse__GetEventSearchResults, "-tse:GetEventSearchResults", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = soap->GetEventSearchResults(soap_tmp___tse__GetEventSearchResults.tse__GetEventSearchResults, &tse__GetEventSearchResultsResponse);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	tse__GetEventSearchResultsResponse.soap_serialize(soap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || tse__GetEventSearchResultsResponse.soap_put(soap, "tse:GetEventSearchResultsResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || tse__GetEventSearchResultsResponse.soap_put(soap, "tse:GetEventSearchResultsResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

static int serve___tse__FindPTZPosition(SearchBindingService *soap)
{	struct __tse__FindPTZPosition soap_tmp___tse__FindPTZPosition;
	_tse__FindPTZPositionResponse tse__FindPTZPositionResponse;
	tse__FindPTZPositionResponse.soap_default(soap);
	soap_default___tse__FindPTZPosition(soap, &soap_tmp___tse__FindPTZPosition);
	if (!soap_get___tse__FindPTZPosition(soap, &soap_tmp___tse__FindPTZPosition, "-tse:FindPTZPosition", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = soap->FindPTZPosition(soap_tmp___tse__FindPTZPosition.tse__FindPTZPosition, &tse__FindPTZPositionResponse);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	tse__FindPTZPositionResponse.soap_serialize(soap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || tse__FindPTZPositionResponse.soap_put(soap, "tse:FindPTZPositionResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || tse__FindPTZPositionResponse.soap_put(soap, "tse:FindPTZPositionResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

static int serve___tse__GetPTZPositionSearchResults(SearchBindingService *soap)
{	struct __tse__GetPTZPositionSearchResults soap_tmp___tse__GetPTZPositionSearchResults;
	_tse__GetPTZPositionSearchResultsResponse tse__GetPTZPositionSearchResultsResponse;
	tse__GetPTZPositionSearchResultsResponse.soap_default(soap);
	soap_default___tse__GetPTZPositionSearchResults(soap, &soap_tmp___tse__GetPTZPositionSearchResults);
	if (!soap_get___tse__GetPTZPositionSearchResults(soap, &soap_tmp___tse__GetPTZPositionSearchResults, "-tse:GetPTZPositionSearchResults", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = soap->GetPTZPositionSearchResults(soap_tmp___tse__GetPTZPositionSearchResults.tse__GetPTZPositionSearchResults, &tse__GetPTZPositionSearchResultsResponse);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	tse__GetPTZPositionSearchResultsResponse.soap_serialize(soap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || tse__GetPTZPositionSearchResultsResponse.soap_put(soap, "tse:GetPTZPositionSearchResultsResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || tse__GetPTZPositionSearchResultsResponse.soap_put(soap, "tse:GetPTZPositionSearchResultsResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

static int serve___tse__GetSearchState(SearchBindingService *soap)
{	struct __tse__GetSearchState soap_tmp___tse__GetSearchState;
	_tse__GetSearchStateResponse tse__GetSearchStateResponse;
	tse__GetSearchStateResponse.soap_default(soap);
	soap_default___tse__GetSearchState(soap, &soap_tmp___tse__GetSearchState);
	if (!soap_get___tse__GetSearchState(soap, &soap_tmp___tse__GetSearchState, "-tse:GetSearchState", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = soap->GetSearchState(soap_tmp___tse__GetSearchState.tse__GetSearchState, &tse__GetSearchStateResponse);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	tse__GetSearchStateResponse.soap_serialize(soap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || tse__GetSearchStateResponse.soap_put(soap, "tse:GetSearchStateResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || tse__GetSearchStateResponse.soap_put(soap, "tse:GetSearchStateResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

static int serve___tse__EndSearch(SearchBindingService *soap)
{	struct __tse__EndSearch soap_tmp___tse__EndSearch;
	_tse__EndSearchResponse tse__EndSearchResponse;
	tse__EndSearchResponse.soap_default(soap);
	soap_default___tse__EndSearch(soap, &soap_tmp___tse__EndSearch);
	if (!soap_get___tse__EndSearch(soap, &soap_tmp___tse__EndSearch, "-tse:EndSearch", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = soap->EndSearch(soap_tmp___tse__EndSearch.tse__EndSearch, &tse__EndSearchResponse);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	tse__EndSearchResponse.soap_serialize(soap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || tse__EndSearchResponse.soap_put(soap, "tse:EndSearchResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || tse__EndSearchResponse.soap_put(soap, "tse:EndSearchResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

static int serve___tse__FindMetadata(SearchBindingService *soap)
{	struct __tse__FindMetadata soap_tmp___tse__FindMetadata;
	_tse__FindMetadataResponse tse__FindMetadataResponse;
	tse__FindMetadataResponse.soap_default(soap);
	soap_default___tse__FindMetadata(soap, &soap_tmp___tse__FindMetadata);
	if (!soap_get___tse__FindMetadata(soap, &soap_tmp___tse__FindMetadata, "-tse:FindMetadata", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = soap->FindMetadata(soap_tmp___tse__FindMetadata.tse__FindMetadata, &tse__FindMetadataResponse);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	tse__FindMetadataResponse.soap_serialize(soap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || tse__FindMetadataResponse.soap_put(soap, "tse:FindMetadataResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || tse__FindMetadataResponse.soap_put(soap, "tse:FindMetadataResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

static int serve___tse__GetMetadataSearchResults(SearchBindingService *soap)
{	struct __tse__GetMetadataSearchResults soap_tmp___tse__GetMetadataSearchResults;
	_tse__GetMetadataSearchResultsResponse tse__GetMetadataSearchResultsResponse;
	tse__GetMetadataSearchResultsResponse.soap_default(soap);
	soap_default___tse__GetMetadataSearchResults(soap, &soap_tmp___tse__GetMetadataSearchResults);
	if (!soap_get___tse__GetMetadataSearchResults(soap, &soap_tmp___tse__GetMetadataSearchResults, "-tse:GetMetadataSearchResults", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = soap->GetMetadataSearchResults(soap_tmp___tse__GetMetadataSearchResults.tse__GetMetadataSearchResults, &tse__GetMetadataSearchResultsResponse);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	tse__GetMetadataSearchResultsResponse.soap_serialize(soap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || tse__GetMetadataSearchResultsResponse.soap_put(soap, "tse:GetMetadataSearchResultsResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || tse__GetMetadataSearchResultsResponse.soap_put(soap, "tse:GetMetadataSearchResultsResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}
/* End of server object code */
