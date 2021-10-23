// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Web_Http_Headers_0_H
#define WINRT_Windows_Web_Http_Headers_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    template <typename T> struct __declspec(empty_bases) IReference;
    struct Uri;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct __declspec(empty_bases) IVector;
}
WINRT_EXPORT namespace winrt::Windows::Networking
{
    struct HostName;
}
WINRT_EXPORT namespace winrt::Windows::Storage::Streams
{
    struct IBuffer;
}
WINRT_EXPORT namespace winrt::Windows::Web::Http::Headers
{
    struct IHttpCacheDirectiveHeaderValueCollection;
    struct IHttpChallengeHeaderValue;
    struct IHttpChallengeHeaderValueCollection;
    struct IHttpChallengeHeaderValueFactory;
    struct IHttpChallengeHeaderValueStatics;
    struct IHttpConnectionOptionHeaderValue;
    struct IHttpConnectionOptionHeaderValueCollection;
    struct IHttpConnectionOptionHeaderValueFactory;
    struct IHttpConnectionOptionHeaderValueStatics;
    struct IHttpContentCodingHeaderValue;
    struct IHttpContentCodingHeaderValueCollection;
    struct IHttpContentCodingHeaderValueFactory;
    struct IHttpContentCodingHeaderValueStatics;
    struct IHttpContentCodingWithQualityHeaderValue;
    struct IHttpContentCodingWithQualityHeaderValueCollection;
    struct IHttpContentCodingWithQualityHeaderValueFactory;
    struct IHttpContentCodingWithQualityHeaderValueStatics;
    struct IHttpContentDispositionHeaderValue;
    struct IHttpContentDispositionHeaderValueFactory;
    struct IHttpContentDispositionHeaderValueStatics;
    struct IHttpContentHeaderCollection;
    struct IHttpContentRangeHeaderValue;
    struct IHttpContentRangeHeaderValueFactory;
    struct IHttpContentRangeHeaderValueStatics;
    struct IHttpCookiePairHeaderValue;
    struct IHttpCookiePairHeaderValueCollection;
    struct IHttpCookiePairHeaderValueFactory;
    struct IHttpCookiePairHeaderValueStatics;
    struct IHttpCredentialsHeaderValue;
    struct IHttpCredentialsHeaderValueFactory;
    struct IHttpCredentialsHeaderValueStatics;
    struct IHttpDateOrDeltaHeaderValue;
    struct IHttpDateOrDeltaHeaderValueStatics;
    struct IHttpExpectationHeaderValue;
    struct IHttpExpectationHeaderValueCollection;
    struct IHttpExpectationHeaderValueFactory;
    struct IHttpExpectationHeaderValueStatics;
    struct IHttpLanguageHeaderValueCollection;
    struct IHttpLanguageRangeWithQualityHeaderValue;
    struct IHttpLanguageRangeWithQualityHeaderValueCollection;
    struct IHttpLanguageRangeWithQualityHeaderValueFactory;
    struct IHttpLanguageRangeWithQualityHeaderValueStatics;
    struct IHttpMediaTypeHeaderValue;
    struct IHttpMediaTypeHeaderValueFactory;
    struct IHttpMediaTypeHeaderValueStatics;
    struct IHttpMediaTypeWithQualityHeaderValue;
    struct IHttpMediaTypeWithQualityHeaderValueCollection;
    struct IHttpMediaTypeWithQualityHeaderValueFactory;
    struct IHttpMediaTypeWithQualityHeaderValueStatics;
    struct IHttpMethodHeaderValueCollection;
    struct IHttpNameValueHeaderValue;
    struct IHttpNameValueHeaderValueFactory;
    struct IHttpNameValueHeaderValueStatics;
    struct IHttpProductHeaderValue;
    struct IHttpProductHeaderValueFactory;
    struct IHttpProductHeaderValueStatics;
    struct IHttpProductInfoHeaderValue;
    struct IHttpProductInfoHeaderValueCollection;
    struct IHttpProductInfoHeaderValueFactory;
    struct IHttpProductInfoHeaderValueStatics;
    struct IHttpRequestHeaderCollection;
    struct IHttpResponseHeaderCollection;
    struct IHttpTransferCodingHeaderValue;
    struct IHttpTransferCodingHeaderValueCollection;
    struct IHttpTransferCodingHeaderValueFactory;
    struct IHttpTransferCodingHeaderValueStatics;
    struct HttpCacheDirectiveHeaderValueCollection;
    struct HttpChallengeHeaderValue;
    struct HttpChallengeHeaderValueCollection;
    struct HttpConnectionOptionHeaderValue;
    struct HttpConnectionOptionHeaderValueCollection;
    struct HttpContentCodingHeaderValue;
    struct HttpContentCodingHeaderValueCollection;
    struct HttpContentCodingWithQualityHeaderValue;
    struct HttpContentCodingWithQualityHeaderValueCollection;
    struct HttpContentDispositionHeaderValue;
    struct HttpContentHeaderCollection;
    struct HttpContentRangeHeaderValue;
    struct HttpCookiePairHeaderValue;
    struct HttpCookiePairHeaderValueCollection;
    struct HttpCredentialsHeaderValue;
    struct HttpDateOrDeltaHeaderValue;
    struct HttpExpectationHeaderValue;
    struct HttpExpectationHeaderValueCollection;
    struct HttpLanguageHeaderValueCollection;
    struct HttpLanguageRangeWithQualityHeaderValue;
    struct HttpLanguageRangeWithQualityHeaderValueCollection;
    struct HttpMediaTypeHeaderValue;
    struct HttpMediaTypeWithQualityHeaderValue;
    struct HttpMediaTypeWithQualityHeaderValueCollection;
    struct HttpMethodHeaderValueCollection;
    struct HttpNameValueHeaderValue;
    struct HttpProductHeaderValue;
    struct HttpProductInfoHeaderValue;
    struct HttpProductInfoHeaderValueCollection;
    struct HttpRequestHeaderCollection;
    struct HttpResponseHeaderCollection;
    struct HttpTransferCodingHeaderValue;
    struct HttpTransferCodingHeaderValueCollection;
}
namespace winrt::impl
{
    template <> struct category<Windows::Web::Http::Headers::IHttpCacheDirectiveHeaderValueCollection>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::Headers::IHttpChallengeHeaderValue>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::Headers::IHttpChallengeHeaderValueCollection>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::Headers::IHttpChallengeHeaderValueFactory>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::Headers::IHttpChallengeHeaderValueStatics>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::Headers::IHttpConnectionOptionHeaderValue>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::Headers::IHttpConnectionOptionHeaderValueCollection>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::Headers::IHttpConnectionOptionHeaderValueFactory>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::Headers::IHttpConnectionOptionHeaderValueStatics>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::Headers::IHttpContentCodingHeaderValue>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::Headers::IHttpContentCodingHeaderValueCollection>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::Headers::IHttpContentCodingHeaderValueFactory>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::Headers::IHttpContentCodingHeaderValueStatics>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::Headers::IHttpContentCodingWithQualityHeaderValue>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::Headers::IHttpContentCodingWithQualityHeaderValueCollection>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::Headers::IHttpContentCodingWithQualityHeaderValueFactory>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::Headers::IHttpContentCodingWithQualityHeaderValueStatics>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::Headers::IHttpContentDispositionHeaderValue>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::Headers::IHttpContentDispositionHeaderValueFactory>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::Headers::IHttpContentDispositionHeaderValueStatics>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::Headers::IHttpContentHeaderCollection>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::Headers::IHttpContentRangeHeaderValue>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::Headers::IHttpContentRangeHeaderValueFactory>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::Headers::IHttpContentRangeHeaderValueStatics>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::Headers::IHttpCookiePairHeaderValue>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::Headers::IHttpCookiePairHeaderValueCollection>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::Headers::IHttpCookiePairHeaderValueFactory>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::Headers::IHttpCookiePairHeaderValueStatics>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::Headers::IHttpCredentialsHeaderValue>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::Headers::IHttpCredentialsHeaderValueFactory>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::Headers::IHttpCredentialsHeaderValueStatics>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::Headers::IHttpDateOrDeltaHeaderValue>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::Headers::IHttpDateOrDeltaHeaderValueStatics>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::Headers::IHttpExpectationHeaderValue>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::Headers::IHttpExpectationHeaderValueCollection>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::Headers::IHttpExpectationHeaderValueFactory>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::Headers::IHttpExpectationHeaderValueStatics>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::Headers::IHttpLanguageHeaderValueCollection>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::Headers::IHttpLanguageRangeWithQualityHeaderValue>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::Headers::IHttpLanguageRangeWithQualityHeaderValueCollection>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::Headers::IHttpLanguageRangeWithQualityHeaderValueFactory>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::Headers::IHttpLanguageRangeWithQualityHeaderValueStatics>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::Headers::IHttpMediaTypeHeaderValue>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::Headers::IHttpMediaTypeHeaderValueFactory>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::Headers::IHttpMediaTypeHeaderValueStatics>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::Headers::IHttpMediaTypeWithQualityHeaderValue>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::Headers::IHttpMediaTypeWithQualityHeaderValueCollection>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::Headers::IHttpMediaTypeWithQualityHeaderValueFactory>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::Headers::IHttpMediaTypeWithQualityHeaderValueStatics>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::Headers::IHttpMethodHeaderValueCollection>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::Headers::IHttpNameValueHeaderValue>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::Headers::IHttpNameValueHeaderValueFactory>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::Headers::IHttpNameValueHeaderValueStatics>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::Headers::IHttpProductHeaderValue>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::Headers::IHttpProductHeaderValueFactory>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::Headers::IHttpProductHeaderValueStatics>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::Headers::IHttpProductInfoHeaderValue>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::Headers::IHttpProductInfoHeaderValueCollection>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::Headers::IHttpProductInfoHeaderValueFactory>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::Headers::IHttpProductInfoHeaderValueStatics>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::Headers::IHttpRequestHeaderCollection>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::Headers::IHttpResponseHeaderCollection>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::Headers::IHttpTransferCodingHeaderValue>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::Headers::IHttpTransferCodingHeaderValueCollection>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::Headers::IHttpTransferCodingHeaderValueFactory>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::Headers::IHttpTransferCodingHeaderValueStatics>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::Headers::HttpCacheDirectiveHeaderValueCollection>{ using type = class_category; };
    template <> struct category<Windows::Web::Http::Headers::HttpChallengeHeaderValue>{ using type = class_category; };
    template <> struct category<Windows::Web::Http::Headers::HttpChallengeHeaderValueCollection>{ using type = class_category; };
    template <> struct category<Windows::Web::Http::Headers::HttpConnectionOptionHeaderValue>{ using type = class_category; };
    template <> struct category<Windows::Web::Http::Headers::HttpConnectionOptionHeaderValueCollection>{ using type = class_category; };
    template <> struct category<Windows::Web::Http::Headers::HttpContentCodingHeaderValue>{ using type = class_category; };
    template <> struct category<Windows::Web::Http::Headers::HttpContentCodingHeaderValueCollection>{ using type = class_category; };
    template <> struct category<Windows::Web::Http::Headers::HttpContentCodingWithQualityHeaderValue>{ using type = class_category; };
    template <> struct category<Windows::Web::Http::Headers::HttpContentCodingWithQualityHeaderValueCollection>{ using type = class_category; };
    template <> struct category<Windows::Web::Http::Headers::HttpContentDispositionHeaderValue>{ using type = class_category; };
    template <> struct category<Windows::Web::Http::Headers::HttpContentHeaderCollection>{ using type = class_category; };
    template <> struct category<Windows::Web::Http::Headers::HttpContentRangeHeaderValue>{ using type = class_category; };
    template <> struct category<Windows::Web::Http::Headers::HttpCookiePairHeaderValue>{ using type = class_category; };
    template <> struct category<Windows::Web::Http::Headers::HttpCookiePairHeaderValueCollection>{ using type = class_category; };
    template <> struct category<Windows::Web::Http::Headers::HttpCredentialsHeaderValue>{ using type = class_category; };
    template <> struct category<Windows::Web::Http::Headers::HttpDateOrDeltaHeaderValue>{ using type = class_category; };
    template <> struct category<Windows::Web::Http::Headers::HttpExpectationHeaderValue>{ using type = class_category; };
    template <> struct category<Windows::Web::Http::Headers::HttpExpectationHeaderValueCollection>{ using type = class_category; };
    template <> struct category<Windows::Web::Http::Headers::HttpLanguageHeaderValueCollection>{ using type = class_category; };
    template <> struct category<Windows::Web::Http::Headers::HttpLanguageRangeWithQualityHeaderValue>{ using type = class_category; };
    template <> struct category<Windows::Web::Http::Headers::HttpLanguageRangeWithQualityHeaderValueCollection>{ using type = class_category; };
    template <> struct category<Windows::Web::Http::Headers::HttpMediaTypeHeaderValue>{ using type = class_category; };
    template <> struct category<Windows::Web::Http::Headers::HttpMediaTypeWithQualityHeaderValue>{ using type = class_category; };
    template <> struct category<Windows::Web::Http::Headers::HttpMediaTypeWithQualityHeaderValueCollection>{ using type = class_category; };
    template <> struct category<Windows::Web::Http::Headers::HttpMethodHeaderValueCollection>{ using type = class_category; };
    template <> struct category<Windows::Web::Http::Headers::HttpNameValueHeaderValue>{ using type = class_category; };
    template <> struct category<Windows::Web::Http::Headers::HttpProductHeaderValue>{ using type = class_category; };
    template <> struct category<Windows::Web::Http::Headers::HttpProductInfoHeaderValue>{ using type = class_category; };
    template <> struct category<Windows::Web::Http::Headers::HttpProductInfoHeaderValueCollection>{ using type = class_category; };
    template <> struct category<Windows::Web::Http::Headers::HttpRequestHeaderCollection>{ using type = class_category; };
    template <> struct category<Windows::Web::Http::Headers::HttpResponseHeaderCollection>{ using type = class_category; };
    template <> struct category<Windows::Web::Http::Headers::HttpTransferCodingHeaderValue>{ using type = class_category; };
    template <> struct category<Windows::Web::Http::Headers::HttpTransferCodingHeaderValueCollection>{ using type = class_category; };
    template <> inline constexpr auto& name_v<Windows::Web::Http::Headers::HttpCacheDirectiveHeaderValueCollection> = L"Windows.Web.Http.Headers.HttpCacheDirectiveHeaderValueCollection";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Headers::HttpChallengeHeaderValue> = L"Windows.Web.Http.Headers.HttpChallengeHeaderValue";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Headers::HttpChallengeHeaderValueCollection> = L"Windows.Web.Http.Headers.HttpChallengeHeaderValueCollection";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Headers::HttpConnectionOptionHeaderValue> = L"Windows.Web.Http.Headers.HttpConnectionOptionHeaderValue";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Headers::HttpConnectionOptionHeaderValueCollection> = L"Windows.Web.Http.Headers.HttpConnectionOptionHeaderValueCollection";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Headers::HttpContentCodingHeaderValue> = L"Windows.Web.Http.Headers.HttpContentCodingHeaderValue";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Headers::HttpContentCodingHeaderValueCollection> = L"Windows.Web.Http.Headers.HttpContentCodingHeaderValueCollection";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Headers::HttpContentCodingWithQualityHeaderValue> = L"Windows.Web.Http.Headers.HttpContentCodingWithQualityHeaderValue";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Headers::HttpContentCodingWithQualityHeaderValueCollection> = L"Windows.Web.Http.Headers.HttpContentCodingWithQualityHeaderValueCollection";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Headers::HttpContentDispositionHeaderValue> = L"Windows.Web.Http.Headers.HttpContentDispositionHeaderValue";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Headers::HttpContentHeaderCollection> = L"Windows.Web.Http.Headers.HttpContentHeaderCollection";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Headers::HttpContentRangeHeaderValue> = L"Windows.Web.Http.Headers.HttpContentRangeHeaderValue";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Headers::HttpCookiePairHeaderValue> = L"Windows.Web.Http.Headers.HttpCookiePairHeaderValue";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Headers::HttpCookiePairHeaderValueCollection> = L"Windows.Web.Http.Headers.HttpCookiePairHeaderValueCollection";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Headers::HttpCredentialsHeaderValue> = L"Windows.Web.Http.Headers.HttpCredentialsHeaderValue";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Headers::HttpDateOrDeltaHeaderValue> = L"Windows.Web.Http.Headers.HttpDateOrDeltaHeaderValue";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Headers::HttpExpectationHeaderValue> = L"Windows.Web.Http.Headers.HttpExpectationHeaderValue";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Headers::HttpExpectationHeaderValueCollection> = L"Windows.Web.Http.Headers.HttpExpectationHeaderValueCollection";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Headers::HttpLanguageHeaderValueCollection> = L"Windows.Web.Http.Headers.HttpLanguageHeaderValueCollection";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Headers::HttpLanguageRangeWithQualityHeaderValue> = L"Windows.Web.Http.Headers.HttpLanguageRangeWithQualityHeaderValue";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Headers::HttpLanguageRangeWithQualityHeaderValueCollection> = L"Windows.Web.Http.Headers.HttpLanguageRangeWithQualityHeaderValueCollection";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Headers::HttpMediaTypeHeaderValue> = L"Windows.Web.Http.Headers.HttpMediaTypeHeaderValue";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Headers::HttpMediaTypeWithQualityHeaderValue> = L"Windows.Web.Http.Headers.HttpMediaTypeWithQualityHeaderValue";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Headers::HttpMediaTypeWithQualityHeaderValueCollection> = L"Windows.Web.Http.Headers.HttpMediaTypeWithQualityHeaderValueCollection";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Headers::HttpMethodHeaderValueCollection> = L"Windows.Web.Http.Headers.HttpMethodHeaderValueCollection";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Headers::HttpNameValueHeaderValue> = L"Windows.Web.Http.Headers.HttpNameValueHeaderValue";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Headers::HttpProductHeaderValue> = L"Windows.Web.Http.Headers.HttpProductHeaderValue";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Headers::HttpProductInfoHeaderValue> = L"Windows.Web.Http.Headers.HttpProductInfoHeaderValue";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Headers::HttpProductInfoHeaderValueCollection> = L"Windows.Web.Http.Headers.HttpProductInfoHeaderValueCollection";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Headers::HttpRequestHeaderCollection> = L"Windows.Web.Http.Headers.HttpRequestHeaderCollection";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Headers::HttpResponseHeaderCollection> = L"Windows.Web.Http.Headers.HttpResponseHeaderCollection";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Headers::HttpTransferCodingHeaderValue> = L"Windows.Web.Http.Headers.HttpTransferCodingHeaderValue";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Headers::HttpTransferCodingHeaderValueCollection> = L"Windows.Web.Http.Headers.HttpTransferCodingHeaderValueCollection";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Headers::IHttpCacheDirectiveHeaderValueCollection> = L"Windows.Web.Http.Headers.IHttpCacheDirectiveHeaderValueCollection";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Headers::IHttpChallengeHeaderValue> = L"Windows.Web.Http.Headers.IHttpChallengeHeaderValue";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Headers::IHttpChallengeHeaderValueCollection> = L"Windows.Web.Http.Headers.IHttpChallengeHeaderValueCollection";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Headers::IHttpChallengeHeaderValueFactory> = L"Windows.Web.Http.Headers.IHttpChallengeHeaderValueFactory";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Headers::IHttpChallengeHeaderValueStatics> = L"Windows.Web.Http.Headers.IHttpChallengeHeaderValueStatics";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Headers::IHttpConnectionOptionHeaderValue> = L"Windows.Web.Http.Headers.IHttpConnectionOptionHeaderValue";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Headers::IHttpConnectionOptionHeaderValueCollection> = L"Windows.Web.Http.Headers.IHttpConnectionOptionHeaderValueCollection";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Headers::IHttpConnectionOptionHeaderValueFactory> = L"Windows.Web.Http.Headers.IHttpConnectionOptionHeaderValueFactory";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Headers::IHttpConnectionOptionHeaderValueStatics> = L"Windows.Web.Http.Headers.IHttpConnectionOptionHeaderValueStatics";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Headers::IHttpContentCodingHeaderValue> = L"Windows.Web.Http.Headers.IHttpContentCodingHeaderValue";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Headers::IHttpContentCodingHeaderValueCollection> = L"Windows.Web.Http.Headers.IHttpContentCodingHeaderValueCollection";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Headers::IHttpContentCodingHeaderValueFactory> = L"Windows.Web.Http.Headers.IHttpContentCodingHeaderValueFactory";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Headers::IHttpContentCodingHeaderValueStatics> = L"Windows.Web.Http.Headers.IHttpContentCodingHeaderValueStatics";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Headers::IHttpContentCodingWithQualityHeaderValue> = L"Windows.Web.Http.Headers.IHttpContentCodingWithQualityHeaderValue";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Headers::IHttpContentCodingWithQualityHeaderValueCollection> = L"Windows.Web.Http.Headers.IHttpContentCodingWithQualityHeaderValueCollection";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Headers::IHttpContentCodingWithQualityHeaderValueFactory> = L"Windows.Web.Http.Headers.IHttpContentCodingWithQualityHeaderValueFactory";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Headers::IHttpContentCodingWithQualityHeaderValueStatics> = L"Windows.Web.Http.Headers.IHttpContentCodingWithQualityHeaderValueStatics";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Headers::IHttpContentDispositionHeaderValue> = L"Windows.Web.Http.Headers.IHttpContentDispositionHeaderValue";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Headers::IHttpContentDispositionHeaderValueFactory> = L"Windows.Web.Http.Headers.IHttpContentDispositionHeaderValueFactory";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Headers::IHttpContentDispositionHeaderValueStatics> = L"Windows.Web.Http.Headers.IHttpContentDispositionHeaderValueStatics";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Headers::IHttpContentHeaderCollection> = L"Windows.Web.Http.Headers.IHttpContentHeaderCollection";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Headers::IHttpContentRangeHeaderValue> = L"Windows.Web.Http.Headers.IHttpContentRangeHeaderValue";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Headers::IHttpContentRangeHeaderValueFactory> = L"Windows.Web.Http.Headers.IHttpContentRangeHeaderValueFactory";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Headers::IHttpContentRangeHeaderValueStatics> = L"Windows.Web.Http.Headers.IHttpContentRangeHeaderValueStatics";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Headers::IHttpCookiePairHeaderValue> = L"Windows.Web.Http.Headers.IHttpCookiePairHeaderValue";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Headers::IHttpCookiePairHeaderValueCollection> = L"Windows.Web.Http.Headers.IHttpCookiePairHeaderValueCollection";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Headers::IHttpCookiePairHeaderValueFactory> = L"Windows.Web.Http.Headers.IHttpCookiePairHeaderValueFactory";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Headers::IHttpCookiePairHeaderValueStatics> = L"Windows.Web.Http.Headers.IHttpCookiePairHeaderValueStatics";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Headers::IHttpCredentialsHeaderValue> = L"Windows.Web.Http.Headers.IHttpCredentialsHeaderValue";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Headers::IHttpCredentialsHeaderValueFactory> = L"Windows.Web.Http.Headers.IHttpCredentialsHeaderValueFactory";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Headers::IHttpCredentialsHeaderValueStatics> = L"Windows.Web.Http.Headers.IHttpCredentialsHeaderValueStatics";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Headers::IHttpDateOrDeltaHeaderValue> = L"Windows.Web.Http.Headers.IHttpDateOrDeltaHeaderValue";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Headers::IHttpDateOrDeltaHeaderValueStatics> = L"Windows.Web.Http.Headers.IHttpDateOrDeltaHeaderValueStatics";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Headers::IHttpExpectationHeaderValue> = L"Windows.Web.Http.Headers.IHttpExpectationHeaderValue";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Headers::IHttpExpectationHeaderValueCollection> = L"Windows.Web.Http.Headers.IHttpExpectationHeaderValueCollection";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Headers::IHttpExpectationHeaderValueFactory> = L"Windows.Web.Http.Headers.IHttpExpectationHeaderValueFactory";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Headers::IHttpExpectationHeaderValueStatics> = L"Windows.Web.Http.Headers.IHttpExpectationHeaderValueStatics";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Headers::IHttpLanguageHeaderValueCollection> = L"Windows.Web.Http.Headers.IHttpLanguageHeaderValueCollection";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Headers::IHttpLanguageRangeWithQualityHeaderValue> = L"Windows.Web.Http.Headers.IHttpLanguageRangeWithQualityHeaderValue";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Headers::IHttpLanguageRangeWithQualityHeaderValueCollection> = L"Windows.Web.Http.Headers.IHttpLanguageRangeWithQualityHeaderValueCollection";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Headers::IHttpLanguageRangeWithQualityHeaderValueFactory> = L"Windows.Web.Http.Headers.IHttpLanguageRangeWithQualityHeaderValueFactory";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Headers::IHttpLanguageRangeWithQualityHeaderValueStatics> = L"Windows.Web.Http.Headers.IHttpLanguageRangeWithQualityHeaderValueStatics";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Headers::IHttpMediaTypeHeaderValue> = L"Windows.Web.Http.Headers.IHttpMediaTypeHeaderValue";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Headers::IHttpMediaTypeHeaderValueFactory> = L"Windows.Web.Http.Headers.IHttpMediaTypeHeaderValueFactory";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Headers::IHttpMediaTypeHeaderValueStatics> = L"Windows.Web.Http.Headers.IHttpMediaTypeHeaderValueStatics";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Headers::IHttpMediaTypeWithQualityHeaderValue> = L"Windows.Web.Http.Headers.IHttpMediaTypeWithQualityHeaderValue";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Headers::IHttpMediaTypeWithQualityHeaderValueCollection> = L"Windows.Web.Http.Headers.IHttpMediaTypeWithQualityHeaderValueCollection";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Headers::IHttpMediaTypeWithQualityHeaderValueFactory> = L"Windows.Web.Http.Headers.IHttpMediaTypeWithQualityHeaderValueFactory";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Headers::IHttpMediaTypeWithQualityHeaderValueStatics> = L"Windows.Web.Http.Headers.IHttpMediaTypeWithQualityHeaderValueStatics";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Headers::IHttpMethodHeaderValueCollection> = L"Windows.Web.Http.Headers.IHttpMethodHeaderValueCollection";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Headers::IHttpNameValueHeaderValue> = L"Windows.Web.Http.Headers.IHttpNameValueHeaderValue";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Headers::IHttpNameValueHeaderValueFactory> = L"Windows.Web.Http.Headers.IHttpNameValueHeaderValueFactory";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Headers::IHttpNameValueHeaderValueStatics> = L"Windows.Web.Http.Headers.IHttpNameValueHeaderValueStatics";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Headers::IHttpProductHeaderValue> = L"Windows.Web.Http.Headers.IHttpProductHeaderValue";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Headers::IHttpProductHeaderValueFactory> = L"Windows.Web.Http.Headers.IHttpProductHeaderValueFactory";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Headers::IHttpProductHeaderValueStatics> = L"Windows.Web.Http.Headers.IHttpProductHeaderValueStatics";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Headers::IHttpProductInfoHeaderValue> = L"Windows.Web.Http.Headers.IHttpProductInfoHeaderValue";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Headers::IHttpProductInfoHeaderValueCollection> = L"Windows.Web.Http.Headers.IHttpProductInfoHeaderValueCollection";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Headers::IHttpProductInfoHeaderValueFactory> = L"Windows.Web.Http.Headers.IHttpProductInfoHeaderValueFactory";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Headers::IHttpProductInfoHeaderValueStatics> = L"Windows.Web.Http.Headers.IHttpProductInfoHeaderValueStatics";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Headers::IHttpRequestHeaderCollection> = L"Windows.Web.Http.Headers.IHttpRequestHeaderCollection";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Headers::IHttpResponseHeaderCollection> = L"Windows.Web.Http.Headers.IHttpResponseHeaderCollection";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Headers::IHttpTransferCodingHeaderValue> = L"Windows.Web.Http.Headers.IHttpTransferCodingHeaderValue";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Headers::IHttpTransferCodingHeaderValueCollection> = L"Windows.Web.Http.Headers.IHttpTransferCodingHeaderValueCollection";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Headers::IHttpTransferCodingHeaderValueFactory> = L"Windows.Web.Http.Headers.IHttpTransferCodingHeaderValueFactory";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Headers::IHttpTransferCodingHeaderValueStatics> = L"Windows.Web.Http.Headers.IHttpTransferCodingHeaderValueStatics";
    template <> inline constexpr guid guid_v<Windows::Web::Http::Headers::IHttpCacheDirectiveHeaderValueCollection>{ 0x9A586B89,0xD5D0,0x4FBE,{ 0xBD,0x9D,0xB5,0xB3,0x63,0x68,0x11,0xB4 } }; // 9A586B89-D5D0-4FBE-BD9D-B5B3636811B4
    template <> inline constexpr guid guid_v<Windows::Web::Http::Headers::IHttpChallengeHeaderValue>{ 0x393361AF,0x0F7D,0x4820,{ 0x9F,0xDD,0xA2,0xB9,0x56,0xEE,0xAE,0xAB } }; // 393361AF-0F7D-4820-9FDD-A2B956EEAEAB
    template <> inline constexpr guid guid_v<Windows::Web::Http::Headers::IHttpChallengeHeaderValueCollection>{ 0xCA9E5F81,0xAEE0,0x4353,{ 0xA1,0x0B,0xE6,0x25,0xBA,0xBD,0x64,0xC2 } }; // CA9E5F81-AEE0-4353-A10B-E625BABD64C2
    template <> inline constexpr guid guid_v<Windows::Web::Http::Headers::IHttpChallengeHeaderValueFactory>{ 0xC452C451,0xD99C,0x40AA,{ 0x93,0x99,0x90,0xEE,0xB9,0x8F,0xC6,0x13 } }; // C452C451-D99C-40AA-9399-90EEB98FC613
    template <> inline constexpr guid guid_v<Windows::Web::Http::Headers::IHttpChallengeHeaderValueStatics>{ 0xF3D38A72,0xFC01,0x4D01,{ 0xA0,0x08,0xFC,0xB7,0xC4,0x59,0xD6,0x35 } }; // F3D38A72-FC01-4D01-A008-FCB7C459D635
    template <> inline constexpr guid guid_v<Windows::Web::Http::Headers::IHttpConnectionOptionHeaderValue>{ 0xCB4AF27A,0x4E90,0x45EB,{ 0x8D,0xCD,0xFD,0x14,0x08,0xF4,0xC4,0x4F } }; // CB4AF27A-4E90-45EB-8DCD-FD1408F4C44F
    template <> inline constexpr guid guid_v<Windows::Web::Http::Headers::IHttpConnectionOptionHeaderValueCollection>{ 0xE4F56C1D,0x5142,0x4E00,{ 0x8E,0x0F,0x01,0x95,0x09,0x33,0x76,0x29 } }; // E4F56C1D-5142-4E00-8E0F-019509337629
    template <> inline constexpr guid guid_v<Windows::Web::Http::Headers::IHttpConnectionOptionHeaderValueFactory>{ 0xD93CCC1E,0x0B7D,0x4C3F,{ 0xA5,0x8D,0xA2,0xA1,0xBD,0xEA,0xBC,0x0A } }; // D93CCC1E-0B7D-4C3F-A58D-A2A1BDEABC0A
    template <> inline constexpr guid guid_v<Windows::Web::Http::Headers::IHttpConnectionOptionHeaderValueStatics>{ 0xAAA75D37,0xA946,0x4B1F,{ 0x85,0xAF,0x48,0xB6,0x8B,0x3C,0x50,0xBD } }; // AAA75D37-A946-4B1F-85AF-48B68B3C50BD
    template <> inline constexpr guid guid_v<Windows::Web::Http::Headers::IHttpContentCodingHeaderValue>{ 0xBCF7F92A,0x9376,0x4D85,{ 0xBC,0xCC,0x9F,0x4F,0x9A,0xCA,0xB4,0x34 } }; // BCF7F92A-9376-4D85-BCCC-9F4F9ACAB434
    template <> inline constexpr guid guid_v<Windows::Web::Http::Headers::IHttpContentCodingHeaderValueCollection>{ 0x7D221721,0xA6DB,0x436E,{ 0x8E,0x83,0x91,0x59,0x61,0x92,0x81,0x9C } }; // 7D221721-A6DB-436E-8E83-91596192819C
    template <> inline constexpr guid guid_v<Windows::Web::Http::Headers::IHttpContentCodingHeaderValueFactory>{ 0xC53D2BD7,0x332B,0x4350,{ 0x85,0x10,0x2E,0x67,0xA2,0x28,0x9A,0x5A } }; // C53D2BD7-332B-4350-8510-2E67A2289A5A
    template <> inline constexpr guid guid_v<Windows::Web::Http::Headers::IHttpContentCodingHeaderValueStatics>{ 0x94D8602E,0xF9BF,0x42F7,{ 0xAA,0x46,0xED,0x27,0x2A,0x41,0xE2,0x12 } }; // 94D8602E-F9BF-42F7-AA46-ED272A41E212
    template <> inline constexpr guid guid_v<Windows::Web::Http::Headers::IHttpContentCodingWithQualityHeaderValue>{ 0x94531CD5,0x8B13,0x4D73,{ 0x86,0x51,0xF7,0x6B,0x38,0xF8,0x84,0x95 } }; // 94531CD5-8B13-4D73-8651-F76B38F88495
    template <> inline constexpr guid guid_v<Windows::Web::Http::Headers::IHttpContentCodingWithQualityHeaderValueCollection>{ 0x7C0D753E,0xE899,0x4378,{ 0xB5,0xC8,0x41,0x2D,0x82,0x07,0x11,0xCC } }; // 7C0D753E-E899-4378-B5C8-412D820711CC
    template <> inline constexpr guid guid_v<Windows::Web::Http::Headers::IHttpContentCodingWithQualityHeaderValueFactory>{ 0xC45EEE1A,0xC553,0x46FC,{ 0xAD,0xE2,0xD7,0x5C,0x1D,0x53,0xDF,0x7B } }; // C45EEE1A-C553-46FC-ADE2-D75C1D53DF7B
    template <> inline constexpr guid guid_v<Windows::Web::Http::Headers::IHttpContentCodingWithQualityHeaderValueStatics>{ 0xE8C9357C,0x8F89,0x4801,{ 0x8E,0x75,0x4C,0x9A,0xBF,0xC3,0xDE,0x71 } }; // E8C9357C-8F89-4801-8E75-4C9ABFC3DE71
    template <> inline constexpr guid guid_v<Windows::Web::Http::Headers::IHttpContentDispositionHeaderValue>{ 0xF2A2EEDC,0x2629,0x4B49,{ 0x99,0x08,0x96,0xA1,0x68,0xE9,0x36,0x5E } }; // F2A2EEDC-2629-4B49-9908-96A168E9365E
    template <> inline constexpr guid guid_v<Windows::Web::Http::Headers::IHttpContentDispositionHeaderValueFactory>{ 0x9915BBC4,0x456C,0x4E81,{ 0x82,0x95,0xB2,0xAB,0x3C,0xBC,0xF5,0x45 } }; // 9915BBC4-456C-4E81-8295-B2AB3CBCF545
    template <> inline constexpr guid guid_v<Windows::Web::Http::Headers::IHttpContentDispositionHeaderValueStatics>{ 0x29C56067,0x5A37,0x46E4,{ 0xB0,0x74,0xC5,0x17,0x7D,0x69,0xCA,0x66 } }; // 29C56067-5A37-46E4-B074-C5177D69CA66
    template <> inline constexpr guid guid_v<Windows::Web::Http::Headers::IHttpContentHeaderCollection>{ 0x40612A44,0x47AE,0x4B7E,{ 0x91,0x24,0x69,0x62,0x8B,0x64,0xAA,0x18 } }; // 40612A44-47AE-4B7E-9124-69628B64AA18
    template <> inline constexpr guid guid_v<Windows::Web::Http::Headers::IHttpContentRangeHeaderValue>{ 0x04D967D3,0xA4F6,0x495C,{ 0x95,0x30,0x85,0x79,0xFC,0xBA,0x8A,0xA9 } }; // 04D967D3-A4F6-495C-9530-8579FCBA8AA9
    template <> inline constexpr guid guid_v<Windows::Web::Http::Headers::IHttpContentRangeHeaderValueFactory>{ 0x3F5BD691,0xA03C,0x4456,{ 0x9A,0x6F,0xEF,0x27,0xEC,0xD0,0x3C,0xAE } }; // 3F5BD691-A03C-4456-9A6F-EF27ECD03CAE
    template <> inline constexpr guid guid_v<Windows::Web::Http::Headers::IHttpContentRangeHeaderValueStatics>{ 0x80A346CA,0x174C,0x4FAE,{ 0x82,0x1C,0x13,0x4C,0xD2,0x94,0xAA,0x38 } }; // 80A346CA-174C-4FAE-821C-134CD294AA38
    template <> inline constexpr guid guid_v<Windows::Web::Http::Headers::IHttpCookiePairHeaderValue>{ 0xCBD46217,0x4B29,0x412B,{ 0xBD,0x90,0xB3,0xD8,0x14,0xAB,0x8E,0x1B } }; // CBD46217-4B29-412B-BD90-B3D814AB8E1B
    template <> inline constexpr guid guid_v<Windows::Web::Http::Headers::IHttpCookiePairHeaderValueCollection>{ 0xF3F44350,0x581E,0x4ECC,{ 0x9F,0x59,0xE5,0x07,0xD0,0x4F,0x06,0xE6 } }; // F3F44350-581E-4ECC-9F59-E507D04F06E6
    template <> inline constexpr guid guid_v<Windows::Web::Http::Headers::IHttpCookiePairHeaderValueFactory>{ 0x635E326F,0x146F,0x4F56,{ 0xAA,0x21,0x2C,0xB7,0xD6,0xD5,0x8B,0x1E } }; // 635E326F-146F-4F56-AA21-2CB7D6D58B1E
    template <> inline constexpr guid guid_v<Windows::Web::Http::Headers::IHttpCookiePairHeaderValueStatics>{ 0x6E866D48,0x06AF,0x4462,{ 0x81,0x58,0x99,0x38,0x8D,0x5D,0xCA,0x81 } }; // 6E866D48-06AF-4462-8158-99388D5DCA81
    template <> inline constexpr guid guid_v<Windows::Web::Http::Headers::IHttpCredentialsHeaderValue>{ 0xC34CC3CB,0x542E,0x4177,{ 0xA6,0xC7,0xB6,0x74,0xCE,0x19,0x3F,0xBF } }; // C34CC3CB-542E-4177-A6C7-B674CE193FBF
    template <> inline constexpr guid guid_v<Windows::Web::Http::Headers::IHttpCredentialsHeaderValueFactory>{ 0xF21D9E91,0x4D1C,0x4182,{ 0xBF,0xD1,0x34,0x47,0x0A,0x62,0xF9,0x50 } }; // F21D9E91-4D1C-4182-BFD1-34470A62F950
    template <> inline constexpr guid guid_v<Windows::Web::Http::Headers::IHttpCredentialsHeaderValueStatics>{ 0xA69B2BE6,0xCE8C,0x4443,{ 0xA3,0x5A,0x1B,0x72,0x7B,0x13,0x10,0x36 } }; // A69B2BE6-CE8C-4443-A35A-1B727B131036
    template <> inline constexpr guid guid_v<Windows::Web::Http::Headers::IHttpDateOrDeltaHeaderValue>{ 0xEAFCAA6A,0xC4DC,0x49E2,{ 0xA2,0x7D,0x04,0x3A,0xDF,0x58,0x67,0xA3 } }; // EAFCAA6A-C4DC-49E2-A27D-043ADF5867A3
    template <> inline constexpr guid guid_v<Windows::Web::Http::Headers::IHttpDateOrDeltaHeaderValueStatics>{ 0x7C2659A8,0x6672,0x4E90,{ 0x9A,0x9A,0xF3,0x97,0x66,0xF7,0xF5,0x76 } }; // 7C2659A8-6672-4E90-9A9A-F39766F7F576
    template <> inline constexpr guid guid_v<Windows::Web::Http::Headers::IHttpExpectationHeaderValue>{ 0x4CE585CD,0x3A99,0x43AF,{ 0xA2,0xE6,0xEC,0x23,0x2F,0xEA,0x96,0x58 } }; // 4CE585CD-3A99-43AF-A2E6-EC232FEA9658
    template <> inline constexpr guid guid_v<Windows::Web::Http::Headers::IHttpExpectationHeaderValueCollection>{ 0xE78521B3,0xA0E2,0x4AC4,{ 0x9E,0x66,0x79,0x70,0x6C,0xB9,0xFD,0x58 } }; // E78521B3-A0E2-4AC4-9E66-79706CB9FD58
    template <> inline constexpr guid guid_v<Windows::Web::Http::Headers::IHttpExpectationHeaderValueFactory>{ 0x4EA275CB,0xD53E,0x4868,{ 0x88,0x56,0x1E,0x21,0xA5,0x03,0x0D,0xC0 } }; // 4EA275CB-D53E-4868-8856-1E21A5030DC0
    template <> inline constexpr guid guid_v<Windows::Web::Http::Headers::IHttpExpectationHeaderValueStatics>{ 0x3019ABE2,0xCFE5,0x473B,{ 0xA5,0x7F,0xFB,0xA5,0xB1,0x4E,0xB2,0x57 } }; // 3019ABE2-CFE5-473B-A57F-FBA5B14EB257
    template <> inline constexpr guid guid_v<Windows::Web::Http::Headers::IHttpLanguageHeaderValueCollection>{ 0x9EBD7CA3,0x8219,0x44F6,{ 0x99,0x02,0x8C,0x56,0xDF,0xD3,0x34,0x0C } }; // 9EBD7CA3-8219-44F6-9902-8C56DFD3340C
    template <> inline constexpr guid guid_v<Windows::Web::Http::Headers::IHttpLanguageRangeWithQualityHeaderValue>{ 0x7256E102,0x0080,0x4DB4,{ 0xA0,0x83,0x7D,0xE7,0xB2,0xE5,0xBA,0x4C } }; // 7256E102-0080-4DB4-A083-7DE7B2E5BA4C
    template <> inline constexpr guid guid_v<Windows::Web::Http::Headers::IHttpLanguageRangeWithQualityHeaderValueCollection>{ 0x885D5ABD,0x4B4F,0x480A,{ 0x89,0xCE,0x8A,0xED,0xCE,0xE6,0xE3,0xA0 } }; // 885D5ABD-4B4F-480A-89CE-8AEDCEE6E3A0
    template <> inline constexpr guid guid_v<Windows::Web::Http::Headers::IHttpLanguageRangeWithQualityHeaderValueFactory>{ 0x7BB83970,0x780F,0x4C83,{ 0x9F,0xE4,0xDC,0x30,0x87,0xF6,0xBD,0x55 } }; // 7BB83970-780F-4C83-9FE4-DC3087F6BD55
    template <> inline constexpr guid guid_v<Windows::Web::Http::Headers::IHttpLanguageRangeWithQualityHeaderValueStatics>{ 0x2541E146,0xF308,0x46F5,{ 0xB6,0x95,0x42,0xF5,0x40,0x24,0xEC,0x68 } }; // 2541E146-F308-46F5-B695-42F54024EC68
    template <> inline constexpr guid guid_v<Windows::Web::Http::Headers::IHttpMediaTypeHeaderValue>{ 0x16B28533,0xE728,0x4FCB,{ 0xBD,0xB0,0x08,0xA4,0x31,0xA1,0x48,0x44 } }; // 16B28533-E728-4FCB-BDB0-08A431A14844
    template <> inline constexpr guid guid_v<Windows::Web::Http::Headers::IHttpMediaTypeHeaderValueFactory>{ 0xBED747A8,0xCD17,0x42DD,{ 0x93,0x67,0xAB,0x9C,0x5B,0x56,0xDD,0x7D } }; // BED747A8-CD17-42DD-9367-AB9C5B56DD7D
    template <> inline constexpr guid guid_v<Windows::Web::Http::Headers::IHttpMediaTypeHeaderValueStatics>{ 0xE04D83DF,0x1D41,0x4D8C,{ 0xA2,0xDE,0x6F,0xD2,0xED,0x87,0x39,0x9B } }; // E04D83DF-1D41-4D8C-A2DE-6FD2ED87399B
    template <> inline constexpr guid guid_v<Windows::Web::Http::Headers::IHttpMediaTypeWithQualityHeaderValue>{ 0x188D5E32,0x76BE,0x44A0,{ 0xB1,0xCD,0x20,0x74,0xBD,0xED,0x2D,0xDE } }; // 188D5E32-76BE-44A0-B1CD-2074BDED2DDE
    template <> inline constexpr guid guid_v<Windows::Web::Http::Headers::IHttpMediaTypeWithQualityHeaderValueCollection>{ 0x3C0C6B73,0x1342,0x4587,{ 0xA0,0x56,0x18,0xD0,0x2F,0xF6,0x71,0x65 } }; // 3C0C6B73-1342-4587-A056-18D02FF67165
    template <> inline constexpr guid guid_v<Windows::Web::Http::Headers::IHttpMediaTypeWithQualityHeaderValueFactory>{ 0x4C6D20F4,0x9457,0x44E6,{ 0xA3,0x23,0xD1,0x22,0xB9,0x58,0x78,0x0B } }; // 4C6D20F4-9457-44E6-A323-D122B958780B
    template <> inline constexpr guid guid_v<Windows::Web::Http::Headers::IHttpMediaTypeWithQualityHeaderValueStatics>{ 0x5B070CD9,0xB560,0x4FC8,{ 0x98,0x35,0x7E,0x6C,0x0A,0x65,0x7B,0x24 } }; // 5B070CD9-B560-4FC8-9835-7E6C0A657B24
    template <> inline constexpr guid guid_v<Windows::Web::Http::Headers::IHttpMethodHeaderValueCollection>{ 0x43BC3FF4,0x6119,0x4ADF,{ 0x93,0x8C,0x34,0xBF,0xFF,0xCF,0x92,0xED } }; // 43BC3FF4-6119-4ADF-938C-34BFFFCF92ED
    template <> inline constexpr guid guid_v<Windows::Web::Http::Headers::IHttpNameValueHeaderValue>{ 0xD8BA7463,0x5B9A,0x4D1B,{ 0x93,0xF9,0xAA,0x5B,0x44,0xEC,0xFD,0xDF } }; // D8BA7463-5B9A-4D1B-93F9-AA5B44ECFDDF
    template <> inline constexpr guid guid_v<Windows::Web::Http::Headers::IHttpNameValueHeaderValueFactory>{ 0x770E2267,0xCBF8,0x4736,{ 0xA9,0x25,0x93,0xFB,0xE1,0x0C,0x7C,0xA8 } }; // 770E2267-CBF8-4736-A925-93FBE10C7CA8
    template <> inline constexpr guid guid_v<Windows::Web::Http::Headers::IHttpNameValueHeaderValueStatics>{ 0xFFD4030F,0x1130,0x4152,{ 0x86,0x59,0x25,0x69,0x09,0xA9,0xD1,0x15 } }; // FFD4030F-1130-4152-8659-256909A9D115
    template <> inline constexpr guid guid_v<Windows::Web::Http::Headers::IHttpProductHeaderValue>{ 0xF4FEEE03,0xEBD4,0x4160,{ 0xB9,0xFF,0x80,0x7C,0x51,0x83,0xB6,0xE6 } }; // F4FEEE03-EBD4-4160-B9FF-807C5183B6E6
    template <> inline constexpr guid guid_v<Windows::Web::Http::Headers::IHttpProductHeaderValueFactory>{ 0x611AA4F5,0x82BC,0x42FB,{ 0x97,0x7B,0xDC,0x00,0x53,0x6E,0x5E,0x86 } }; // 611AA4F5-82BC-42FB-977B-DC00536E5E86
    template <> inline constexpr guid guid_v<Windows::Web::Http::Headers::IHttpProductHeaderValueStatics>{ 0x90C33E29,0xBEFC,0x4337,{ 0xBE,0x62,0x49,0xF0,0x97,0x97,0x5F,0x53 } }; // 90C33E29-BEFC-4337-BE62-49F097975F53
    template <> inline constexpr guid guid_v<Windows::Web::Http::Headers::IHttpProductInfoHeaderValue>{ 0x1B1A8732,0x4C35,0x486A,{ 0x96,0x6F,0x64,0x64,0x89,0x19,0x8E,0x4D } }; // 1B1A8732-4C35-486A-966F-646489198E4D
    template <> inline constexpr guid guid_v<Windows::Web::Http::Headers::IHttpProductInfoHeaderValueCollection>{ 0x877DF74A,0xD69B,0x44F8,{ 0xAD,0x4F,0x45,0x3A,0xF9,0xC4,0x2E,0xD0 } }; // 877DF74A-D69B-44F8-AD4F-453AF9C42ED0
    template <> inline constexpr guid guid_v<Windows::Web::Http::Headers::IHttpProductInfoHeaderValueFactory>{ 0x24220FBE,0xEABE,0x4464,{ 0xB4,0x60,0xEC,0x01,0x0B,0x7C,0x41,0xE2 } }; // 24220FBE-EABE-4464-B460-EC010B7C41E2
    template <> inline constexpr guid guid_v<Windows::Web::Http::Headers::IHttpProductInfoHeaderValueStatics>{ 0xDB7FD857,0x327A,0x4E73,{ 0x81,0xE5,0x70,0x59,0xA3,0x02,0xB0,0x42 } }; // DB7FD857-327A-4E73-81E5-7059A302B042
    template <> inline constexpr guid guid_v<Windows::Web::Http::Headers::IHttpRequestHeaderCollection>{ 0xAF40329B,0xB544,0x469B,{ 0x86,0xB9,0xAC,0x3D,0x46,0x6F,0xEA,0x36 } }; // AF40329B-B544-469B-86B9-AC3D466FEA36
    template <> inline constexpr guid guid_v<Windows::Web::Http::Headers::IHttpResponseHeaderCollection>{ 0x7A990969,0xFA3F,0x41ED,{ 0xAA,0xC6,0xBF,0x95,0x79,0x75,0xC1,0x6B } }; // 7A990969-FA3F-41ED-AAC6-BF957975C16B
    template <> inline constexpr guid guid_v<Windows::Web::Http::Headers::IHttpTransferCodingHeaderValue>{ 0x436F32F9,0x3DED,0x42BD,{ 0xB3,0x8A,0x54,0x96,0xA2,0x51,0x1C,0xE6 } }; // 436F32F9-3DED-42BD-B38A-5496A2511CE6
    template <> inline constexpr guid guid_v<Windows::Web::Http::Headers::IHttpTransferCodingHeaderValueCollection>{ 0x202C8C34,0x2C03,0x49B8,{ 0x96,0x65,0x73,0xE2,0x7C,0xB2,0xFC,0x79 } }; // 202C8C34-2C03-49B8-9665-73E27CB2FC79
    template <> inline constexpr guid guid_v<Windows::Web::Http::Headers::IHttpTransferCodingHeaderValueFactory>{ 0xBB62DFFC,0xE361,0x4F08,{ 0x8E,0x4F,0xC9,0xE7,0x23,0xDE,0x70,0x3B } }; // BB62DFFC-E361-4F08-8E4F-C9E723DE703B
    template <> inline constexpr guid guid_v<Windows::Web::Http::Headers::IHttpTransferCodingHeaderValueStatics>{ 0x6AB8892A,0x1A98,0x4D32,{ 0xA9,0x06,0x74,0x70,0xA9,0x87,0x5C,0xE5 } }; // 6AB8892A-1A98-4D32-A906-7470A9875CE5
    template <> struct default_interface<Windows::Web::Http::Headers::HttpCacheDirectiveHeaderValueCollection>{ using type = Windows::Web::Http::Headers::IHttpCacheDirectiveHeaderValueCollection; };
    template <> struct default_interface<Windows::Web::Http::Headers::HttpChallengeHeaderValue>{ using type = Windows::Web::Http::Headers::IHttpChallengeHeaderValue; };
    template <> struct default_interface<Windows::Web::Http::Headers::HttpChallengeHeaderValueCollection>{ using type = Windows::Web::Http::Headers::IHttpChallengeHeaderValueCollection; };
    template <> struct default_interface<Windows::Web::Http::Headers::HttpConnectionOptionHeaderValue>{ using type = Windows::Web::Http::Headers::IHttpConnectionOptionHeaderValue; };
    template <> struct default_interface<Windows::Web::Http::Headers::HttpConnectionOptionHeaderValueCollection>{ using type = Windows::Web::Http::Headers::IHttpConnectionOptionHeaderValueCollection; };
    template <> struct default_interface<Windows::Web::Http::Headers::HttpContentCodingHeaderValue>{ using type = Windows::Web::Http::Headers::IHttpContentCodingHeaderValue; };
    template <> struct default_interface<Windows::Web::Http::Headers::HttpContentCodingHeaderValueCollection>{ using type = Windows::Web::Http::Headers::IHttpContentCodingHeaderValueCollection; };
    template <> struct default_interface<Windows::Web::Http::Headers::HttpContentCodingWithQualityHeaderValue>{ using type = Windows::Web::Http::Headers::IHttpContentCodingWithQualityHeaderValue; };
    template <> struct default_interface<Windows::Web::Http::Headers::HttpContentCodingWithQualityHeaderValueCollection>{ using type = Windows::Web::Http::Headers::IHttpContentCodingWithQualityHeaderValueCollection; };
    template <> struct default_interface<Windows::Web::Http::Headers::HttpContentDispositionHeaderValue>{ using type = Windows::Web::Http::Headers::IHttpContentDispositionHeaderValue; };
    template <> struct default_interface<Windows::Web::Http::Headers::HttpContentHeaderCollection>{ using type = Windows::Web::Http::Headers::IHttpContentHeaderCollection; };
    template <> struct default_interface<Windows::Web::Http::Headers::HttpContentRangeHeaderValue>{ using type = Windows::Web::Http::Headers::IHttpContentRangeHeaderValue; };
    template <> struct default_interface<Windows::Web::Http::Headers::HttpCookiePairHeaderValue>{ using type = Windows::Web::Http::Headers::IHttpCookiePairHeaderValue; };
    template <> struct default_interface<Windows::Web::Http::Headers::HttpCookiePairHeaderValueCollection>{ using type = Windows::Web::Http::Headers::IHttpCookiePairHeaderValueCollection; };
    template <> struct default_interface<Windows::Web::Http::Headers::HttpCredentialsHeaderValue>{ using type = Windows::Web::Http::Headers::IHttpCredentialsHeaderValue; };
    template <> struct default_interface<Windows::Web::Http::Headers::HttpDateOrDeltaHeaderValue>{ using type = Windows::Web::Http::Headers::IHttpDateOrDeltaHeaderValue; };
    template <> struct default_interface<Windows::Web::Http::Headers::HttpExpectationHeaderValue>{ using type = Windows::Web::Http::Headers::IHttpExpectationHeaderValue; };
    template <> struct default_interface<Windows::Web::Http::Headers::HttpExpectationHeaderValueCollection>{ using type = Windows::Web::Http::Headers::IHttpExpectationHeaderValueCollection; };
    template <> struct default_interface<Windows::Web::Http::Headers::HttpLanguageHeaderValueCollection>{ using type = Windows::Web::Http::Headers::IHttpLanguageHeaderValueCollection; };
    template <> struct default_interface<Windows::Web::Http::Headers::HttpLanguageRangeWithQualityHeaderValue>{ using type = Windows::Web::Http::Headers::IHttpLanguageRangeWithQualityHeaderValue; };
    template <> struct default_interface<Windows::Web::Http::Headers::HttpLanguageRangeWithQualityHeaderValueCollection>{ using type = Windows::Web::Http::Headers::IHttpLanguageRangeWithQualityHeaderValueCollection; };
    template <> struct default_interface<Windows::Web::Http::Headers::HttpMediaTypeHeaderValue>{ using type = Windows::Web::Http::Headers::IHttpMediaTypeHeaderValue; };
    template <> struct default_interface<Windows::Web::Http::Headers::HttpMediaTypeWithQualityHeaderValue>{ using type = Windows::Web::Http::Headers::IHttpMediaTypeWithQualityHeaderValue; };
    template <> struct default_interface<Windows::Web::Http::Headers::HttpMediaTypeWithQualityHeaderValueCollection>{ using type = Windows::Web::Http::Headers::IHttpMediaTypeWithQualityHeaderValueCollection; };
    template <> struct default_interface<Windows::Web::Http::Headers::HttpMethodHeaderValueCollection>{ using type = Windows::Web::Http::Headers::IHttpMethodHeaderValueCollection; };
    template <> struct default_interface<Windows::Web::Http::Headers::HttpNameValueHeaderValue>{ using type = Windows::Web::Http::Headers::IHttpNameValueHeaderValue; };
    template <> struct default_interface<Windows::Web::Http::Headers::HttpProductHeaderValue>{ using type = Windows::Web::Http::Headers::IHttpProductHeaderValue; };
    template <> struct default_interface<Windows::Web::Http::Headers::HttpProductInfoHeaderValue>{ using type = Windows::Web::Http::Headers::IHttpProductInfoHeaderValue; };
    template <> struct default_interface<Windows::Web::Http::Headers::HttpProductInfoHeaderValueCollection>{ using type = Windows::Web::Http::Headers::IHttpProductInfoHeaderValueCollection; };
    template <> struct default_interface<Windows::Web::Http::Headers::HttpRequestHeaderCollection>{ using type = Windows::Web::Http::Headers::IHttpRequestHeaderCollection; };
    template <> struct default_interface<Windows::Web::Http::Headers::HttpResponseHeaderCollection>{ using type = Windows::Web::Http::Headers::IHttpResponseHeaderCollection; };
    template <> struct default_interface<Windows::Web::Http::Headers::HttpTransferCodingHeaderValue>{ using type = Windows::Web::Http::Headers::IHttpTransferCodingHeaderValue; };
    template <> struct default_interface<Windows::Web::Http::Headers::HttpTransferCodingHeaderValueCollection>{ using type = Windows::Web::Http::Headers::IHttpTransferCodingHeaderValueCollection; };
    template <> struct abi<Windows::Web::Http::Headers::IHttpCacheDirectiveHeaderValueCollection>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MaxAge(void**) noexcept = 0;
            virtual int32_t __stdcall put_MaxAge(void*) noexcept = 0;
            virtual int32_t __stdcall get_MaxStale(void**) noexcept = 0;
            virtual int32_t __stdcall put_MaxStale(void*) noexcept = 0;
            virtual int32_t __stdcall get_MinFresh(void**) noexcept = 0;
            virtual int32_t __stdcall put_MinFresh(void*) noexcept = 0;
            virtual int32_t __stdcall get_SharedMaxAge(void**) noexcept = 0;
            virtual int32_t __stdcall put_SharedMaxAge(void*) noexcept = 0;
            virtual int32_t __stdcall ParseAdd(void*) noexcept = 0;
            virtual int32_t __stdcall TryParseAdd(void*, bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::Headers::IHttpChallengeHeaderValue>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Parameters(void**) noexcept = 0;
            virtual int32_t __stdcall get_Scheme(void**) noexcept = 0;
            virtual int32_t __stdcall get_Token(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::Headers::IHttpChallengeHeaderValueCollection>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ParseAdd(void*) noexcept = 0;
            virtual int32_t __stdcall TryParseAdd(void*, bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::Headers::IHttpChallengeHeaderValueFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromScheme(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromSchemeWithToken(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::Headers::IHttpChallengeHeaderValueStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Parse(void*, void**) noexcept = 0;
            virtual int32_t __stdcall TryParse(void*, void**, bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::Headers::IHttpConnectionOptionHeaderValue>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Token(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::Headers::IHttpConnectionOptionHeaderValueCollection>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ParseAdd(void*) noexcept = 0;
            virtual int32_t __stdcall TryParseAdd(void*, bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::Headers::IHttpConnectionOptionHeaderValueFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::Headers::IHttpConnectionOptionHeaderValueStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Parse(void*, void**) noexcept = 0;
            virtual int32_t __stdcall TryParse(void*, void**, bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::Headers::IHttpContentCodingHeaderValue>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ContentCoding(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::Headers::IHttpContentCodingHeaderValueCollection>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ParseAdd(void*) noexcept = 0;
            virtual int32_t __stdcall TryParseAdd(void*, bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::Headers::IHttpContentCodingHeaderValueFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::Headers::IHttpContentCodingHeaderValueStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Parse(void*, void**) noexcept = 0;
            virtual int32_t __stdcall TryParse(void*, void**, bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::Headers::IHttpContentCodingWithQualityHeaderValue>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ContentCoding(void**) noexcept = 0;
            virtual int32_t __stdcall get_Quality(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::Headers::IHttpContentCodingWithQualityHeaderValueCollection>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ParseAdd(void*) noexcept = 0;
            virtual int32_t __stdcall TryParseAdd(void*, bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::Headers::IHttpContentCodingWithQualityHeaderValueFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromValue(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromValueWithQuality(void*, double, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::Headers::IHttpContentCodingWithQualityHeaderValueStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Parse(void*, void**) noexcept = 0;
            virtual int32_t __stdcall TryParse(void*, void**, bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::Headers::IHttpContentDispositionHeaderValue>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DispositionType(void**) noexcept = 0;
            virtual int32_t __stdcall put_DispositionType(void*) noexcept = 0;
            virtual int32_t __stdcall get_FileName(void**) noexcept = 0;
            virtual int32_t __stdcall put_FileName(void*) noexcept = 0;
            virtual int32_t __stdcall get_FileNameStar(void**) noexcept = 0;
            virtual int32_t __stdcall put_FileNameStar(void*) noexcept = 0;
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
            virtual int32_t __stdcall put_Name(void*) noexcept = 0;
            virtual int32_t __stdcall get_Parameters(void**) noexcept = 0;
            virtual int32_t __stdcall get_Size(void**) noexcept = 0;
            virtual int32_t __stdcall put_Size(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::Headers::IHttpContentDispositionHeaderValueFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::Headers::IHttpContentDispositionHeaderValueStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Parse(void*, void**) noexcept = 0;
            virtual int32_t __stdcall TryParse(void*, void**, bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::Headers::IHttpContentHeaderCollection>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ContentDisposition(void**) noexcept = 0;
            virtual int32_t __stdcall put_ContentDisposition(void*) noexcept = 0;
            virtual int32_t __stdcall get_ContentEncoding(void**) noexcept = 0;
            virtual int32_t __stdcall get_ContentLanguage(void**) noexcept = 0;
            virtual int32_t __stdcall get_ContentLength(void**) noexcept = 0;
            virtual int32_t __stdcall put_ContentLength(void*) noexcept = 0;
            virtual int32_t __stdcall get_ContentLocation(void**) noexcept = 0;
            virtual int32_t __stdcall put_ContentLocation(void*) noexcept = 0;
            virtual int32_t __stdcall get_ContentMD5(void**) noexcept = 0;
            virtual int32_t __stdcall put_ContentMD5(void*) noexcept = 0;
            virtual int32_t __stdcall get_ContentRange(void**) noexcept = 0;
            virtual int32_t __stdcall put_ContentRange(void*) noexcept = 0;
            virtual int32_t __stdcall get_ContentType(void**) noexcept = 0;
            virtual int32_t __stdcall put_ContentType(void*) noexcept = 0;
            virtual int32_t __stdcall get_Expires(void**) noexcept = 0;
            virtual int32_t __stdcall put_Expires(void*) noexcept = 0;
            virtual int32_t __stdcall get_LastModified(void**) noexcept = 0;
            virtual int32_t __stdcall put_LastModified(void*) noexcept = 0;
            virtual int32_t __stdcall Append(void*, void*) noexcept = 0;
            virtual int32_t __stdcall TryAppendWithoutValidation(void*, void*, bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::Headers::IHttpContentRangeHeaderValue>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FirstBytePosition(void**) noexcept = 0;
            virtual int32_t __stdcall get_LastBytePosition(void**) noexcept = 0;
            virtual int32_t __stdcall get_Length(void**) noexcept = 0;
            virtual int32_t __stdcall get_Unit(void**) noexcept = 0;
            virtual int32_t __stdcall put_Unit(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::Headers::IHttpContentRangeHeaderValueFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromLength(uint64_t, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromRange(uint64_t, uint64_t, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromRangeWithLength(uint64_t, uint64_t, uint64_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::Headers::IHttpContentRangeHeaderValueStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Parse(void*, void**) noexcept = 0;
            virtual int32_t __stdcall TryParse(void*, void**, bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::Headers::IHttpCookiePairHeaderValue>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
            virtual int32_t __stdcall get_Value(void**) noexcept = 0;
            virtual int32_t __stdcall put_Value(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::Headers::IHttpCookiePairHeaderValueCollection>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ParseAdd(void*) noexcept = 0;
            virtual int32_t __stdcall TryParseAdd(void*, bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::Headers::IHttpCookiePairHeaderValueFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromName(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromNameWithValue(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::Headers::IHttpCookiePairHeaderValueStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Parse(void*, void**) noexcept = 0;
            virtual int32_t __stdcall TryParse(void*, void**, bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::Headers::IHttpCredentialsHeaderValue>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Parameters(void**) noexcept = 0;
            virtual int32_t __stdcall get_Scheme(void**) noexcept = 0;
            virtual int32_t __stdcall get_Token(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::Headers::IHttpCredentialsHeaderValueFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromScheme(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromSchemeWithToken(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::Headers::IHttpCredentialsHeaderValueStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Parse(void*, void**) noexcept = 0;
            virtual int32_t __stdcall TryParse(void*, void**, bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::Headers::IHttpDateOrDeltaHeaderValue>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Date(void**) noexcept = 0;
            virtual int32_t __stdcall get_Delta(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::Headers::IHttpDateOrDeltaHeaderValueStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Parse(void*, void**) noexcept = 0;
            virtual int32_t __stdcall TryParse(void*, void**, bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::Headers::IHttpExpectationHeaderValue>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
            virtual int32_t __stdcall get_Value(void**) noexcept = 0;
            virtual int32_t __stdcall put_Value(void*) noexcept = 0;
            virtual int32_t __stdcall get_Parameters(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::Headers::IHttpExpectationHeaderValueCollection>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ParseAdd(void*) noexcept = 0;
            virtual int32_t __stdcall TryParseAdd(void*, bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::Headers::IHttpExpectationHeaderValueFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromName(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromNameWithValue(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::Headers::IHttpExpectationHeaderValueStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Parse(void*, void**) noexcept = 0;
            virtual int32_t __stdcall TryParse(void*, void**, bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::Headers::IHttpLanguageHeaderValueCollection>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ParseAdd(void*) noexcept = 0;
            virtual int32_t __stdcall TryParseAdd(void*, bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::Headers::IHttpLanguageRangeWithQualityHeaderValue>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_LanguageRange(void**) noexcept = 0;
            virtual int32_t __stdcall get_Quality(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::Headers::IHttpLanguageRangeWithQualityHeaderValueCollection>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ParseAdd(void*) noexcept = 0;
            virtual int32_t __stdcall TryParseAdd(void*, bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::Headers::IHttpLanguageRangeWithQualityHeaderValueFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromLanguageRange(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromLanguageRangeWithQuality(void*, double, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::Headers::IHttpLanguageRangeWithQualityHeaderValueStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Parse(void*, void**) noexcept = 0;
            virtual int32_t __stdcall TryParse(void*, void**, bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::Headers::IHttpMediaTypeHeaderValue>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CharSet(void**) noexcept = 0;
            virtual int32_t __stdcall put_CharSet(void*) noexcept = 0;
            virtual int32_t __stdcall get_MediaType(void**) noexcept = 0;
            virtual int32_t __stdcall put_MediaType(void*) noexcept = 0;
            virtual int32_t __stdcall get_Parameters(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::Headers::IHttpMediaTypeHeaderValueFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::Headers::IHttpMediaTypeHeaderValueStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Parse(void*, void**) noexcept = 0;
            virtual int32_t __stdcall TryParse(void*, void**, bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::Headers::IHttpMediaTypeWithQualityHeaderValue>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CharSet(void**) noexcept = 0;
            virtual int32_t __stdcall put_CharSet(void*) noexcept = 0;
            virtual int32_t __stdcall get_MediaType(void**) noexcept = 0;
            virtual int32_t __stdcall put_MediaType(void*) noexcept = 0;
            virtual int32_t __stdcall get_Parameters(void**) noexcept = 0;
            virtual int32_t __stdcall get_Quality(void**) noexcept = 0;
            virtual int32_t __stdcall put_Quality(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::Headers::IHttpMediaTypeWithQualityHeaderValueCollection>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ParseAdd(void*) noexcept = 0;
            virtual int32_t __stdcall TryParseAdd(void*, bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::Headers::IHttpMediaTypeWithQualityHeaderValueFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromMediaType(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromMediaTypeWithQuality(void*, double, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::Headers::IHttpMediaTypeWithQualityHeaderValueStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Parse(void*, void**) noexcept = 0;
            virtual int32_t __stdcall TryParse(void*, void**, bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::Headers::IHttpMethodHeaderValueCollection>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ParseAdd(void*) noexcept = 0;
            virtual int32_t __stdcall TryParseAdd(void*, bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::Headers::IHttpNameValueHeaderValue>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
            virtual int32_t __stdcall get_Value(void**) noexcept = 0;
            virtual int32_t __stdcall put_Value(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::Headers::IHttpNameValueHeaderValueFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromName(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromNameWithValue(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::Headers::IHttpNameValueHeaderValueStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Parse(void*, void**) noexcept = 0;
            virtual int32_t __stdcall TryParse(void*, void**, bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::Headers::IHttpProductHeaderValue>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
            virtual int32_t __stdcall get_Version(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::Headers::IHttpProductHeaderValueFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromName(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromNameWithVersion(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::Headers::IHttpProductHeaderValueStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Parse(void*, void**) noexcept = 0;
            virtual int32_t __stdcall TryParse(void*, void**, bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::Headers::IHttpProductInfoHeaderValue>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Product(void**) noexcept = 0;
            virtual int32_t __stdcall get_Comment(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::Headers::IHttpProductInfoHeaderValueCollection>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ParseAdd(void*) noexcept = 0;
            virtual int32_t __stdcall TryParseAdd(void*, bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::Headers::IHttpProductInfoHeaderValueFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromComment(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromNameWithVersion(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::Headers::IHttpProductInfoHeaderValueStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Parse(void*, void**) noexcept = 0;
            virtual int32_t __stdcall TryParse(void*, void**, bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::Headers::IHttpRequestHeaderCollection>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Accept(void**) noexcept = 0;
            virtual int32_t __stdcall get_AcceptEncoding(void**) noexcept = 0;
            virtual int32_t __stdcall get_AcceptLanguage(void**) noexcept = 0;
            virtual int32_t __stdcall get_Authorization(void**) noexcept = 0;
            virtual int32_t __stdcall put_Authorization(void*) noexcept = 0;
            virtual int32_t __stdcall get_CacheControl(void**) noexcept = 0;
            virtual int32_t __stdcall get_Connection(void**) noexcept = 0;
            virtual int32_t __stdcall get_Cookie(void**) noexcept = 0;
            virtual int32_t __stdcall get_Date(void**) noexcept = 0;
            virtual int32_t __stdcall put_Date(void*) noexcept = 0;
            virtual int32_t __stdcall get_Expect(void**) noexcept = 0;
            virtual int32_t __stdcall get_From(void**) noexcept = 0;
            virtual int32_t __stdcall put_From(void*) noexcept = 0;
            virtual int32_t __stdcall get_Host(void**) noexcept = 0;
            virtual int32_t __stdcall put_Host(void*) noexcept = 0;
            virtual int32_t __stdcall get_IfModifiedSince(void**) noexcept = 0;
            virtual int32_t __stdcall put_IfModifiedSince(void*) noexcept = 0;
            virtual int32_t __stdcall get_IfUnmodifiedSince(void**) noexcept = 0;
            virtual int32_t __stdcall put_IfUnmodifiedSince(void*) noexcept = 0;
            virtual int32_t __stdcall get_MaxForwards(void**) noexcept = 0;
            virtual int32_t __stdcall put_MaxForwards(void*) noexcept = 0;
            virtual int32_t __stdcall get_ProxyAuthorization(void**) noexcept = 0;
            virtual int32_t __stdcall put_ProxyAuthorization(void*) noexcept = 0;
            virtual int32_t __stdcall get_Referer(void**) noexcept = 0;
            virtual int32_t __stdcall put_Referer(void*) noexcept = 0;
            virtual int32_t __stdcall get_TransferEncoding(void**) noexcept = 0;
            virtual int32_t __stdcall get_UserAgent(void**) noexcept = 0;
            virtual int32_t __stdcall Append(void*, void*) noexcept = 0;
            virtual int32_t __stdcall TryAppendWithoutValidation(void*, void*, bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::Headers::IHttpResponseHeaderCollection>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Age(void**) noexcept = 0;
            virtual int32_t __stdcall put_Age(void*) noexcept = 0;
            virtual int32_t __stdcall get_Allow(void**) noexcept = 0;
            virtual int32_t __stdcall get_CacheControl(void**) noexcept = 0;
            virtual int32_t __stdcall get_Connection(void**) noexcept = 0;
            virtual int32_t __stdcall get_Date(void**) noexcept = 0;
            virtual int32_t __stdcall put_Date(void*) noexcept = 0;
            virtual int32_t __stdcall get_Location(void**) noexcept = 0;
            virtual int32_t __stdcall put_Location(void*) noexcept = 0;
            virtual int32_t __stdcall get_ProxyAuthenticate(void**) noexcept = 0;
            virtual int32_t __stdcall get_RetryAfter(void**) noexcept = 0;
            virtual int32_t __stdcall put_RetryAfter(void*) noexcept = 0;
            virtual int32_t __stdcall get_TransferEncoding(void**) noexcept = 0;
            virtual int32_t __stdcall get_WwwAuthenticate(void**) noexcept = 0;
            virtual int32_t __stdcall Append(void*, void*) noexcept = 0;
            virtual int32_t __stdcall TryAppendWithoutValidation(void*, void*, bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::Headers::IHttpTransferCodingHeaderValue>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Parameters(void**) noexcept = 0;
            virtual int32_t __stdcall get_Value(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::Headers::IHttpTransferCodingHeaderValueCollection>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ParseAdd(void*) noexcept = 0;
            virtual int32_t __stdcall TryParseAdd(void*, bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::Headers::IHttpTransferCodingHeaderValueFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::Headers::IHttpTransferCodingHeaderValueStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Parse(void*, void**) noexcept = 0;
            virtual int32_t __stdcall TryParse(void*, void**, bool*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Web_Http_Headers_IHttpCacheDirectiveHeaderValueCollection
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<Windows::Foundation::TimeSpan>) MaxAge() const;
        WINRT_IMPL_AUTO(void) MaxAge(Windows::Foundation::IReference<Windows::Foundation::TimeSpan> const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<Windows::Foundation::TimeSpan>) MaxStale() const;
        WINRT_IMPL_AUTO(void) MaxStale(Windows::Foundation::IReference<Windows::Foundation::TimeSpan> const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<Windows::Foundation::TimeSpan>) MinFresh() const;
        WINRT_IMPL_AUTO(void) MinFresh(Windows::Foundation::IReference<Windows::Foundation::TimeSpan> const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<Windows::Foundation::TimeSpan>) SharedMaxAge() const;
        WINRT_IMPL_AUTO(void) SharedMaxAge(Windows::Foundation::IReference<Windows::Foundation::TimeSpan> const& value) const;
        WINRT_IMPL_AUTO(void) ParseAdd(param::hstring const& input) const;
        WINRT_IMPL_AUTO(bool) TryParseAdd(param::hstring const& input) const;
    };
    template <> struct consume<Windows::Web::Http::Headers::IHttpCacheDirectiveHeaderValueCollection>
    {
        template <typename D> using type = consume_Windows_Web_Http_Headers_IHttpCacheDirectiveHeaderValueCollection<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_Headers_IHttpChallengeHeaderValue
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::Web::Http::Headers::HttpNameValueHeaderValue>) Parameters() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Scheme() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Token() const;
    };
    template <> struct consume<Windows::Web::Http::Headers::IHttpChallengeHeaderValue>
    {
        template <typename D> using type = consume_Windows_Web_Http_Headers_IHttpChallengeHeaderValue<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_Headers_IHttpChallengeHeaderValueCollection
    {
        WINRT_IMPL_AUTO(void) ParseAdd(param::hstring const& input) const;
        WINRT_IMPL_AUTO(bool) TryParseAdd(param::hstring const& input) const;
    };
    template <> struct consume<Windows::Web::Http::Headers::IHttpChallengeHeaderValueCollection>
    {
        template <typename D> using type = consume_Windows_Web_Http_Headers_IHttpChallengeHeaderValueCollection<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_Headers_IHttpChallengeHeaderValueFactory
    {
        WINRT_IMPL_AUTO(Windows::Web::Http::Headers::HttpChallengeHeaderValue) CreateFromScheme(param::hstring const& scheme) const;
        WINRT_IMPL_AUTO(Windows::Web::Http::Headers::HttpChallengeHeaderValue) CreateFromSchemeWithToken(param::hstring const& scheme, param::hstring const& token) const;
    };
    template <> struct consume<Windows::Web::Http::Headers::IHttpChallengeHeaderValueFactory>
    {
        template <typename D> using type = consume_Windows_Web_Http_Headers_IHttpChallengeHeaderValueFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_Headers_IHttpChallengeHeaderValueStatics
    {
        WINRT_IMPL_AUTO(Windows::Web::Http::Headers::HttpChallengeHeaderValue) Parse(param::hstring const& input) const;
        WINRT_IMPL_AUTO(bool) TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpChallengeHeaderValue& challengeHeaderValue) const;
    };
    template <> struct consume<Windows::Web::Http::Headers::IHttpChallengeHeaderValueStatics>
    {
        template <typename D> using type = consume_Windows_Web_Http_Headers_IHttpChallengeHeaderValueStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_Headers_IHttpConnectionOptionHeaderValue
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Token() const;
    };
    template <> struct consume<Windows::Web::Http::Headers::IHttpConnectionOptionHeaderValue>
    {
        template <typename D> using type = consume_Windows_Web_Http_Headers_IHttpConnectionOptionHeaderValue<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_Headers_IHttpConnectionOptionHeaderValueCollection
    {
        WINRT_IMPL_AUTO(void) ParseAdd(param::hstring const& input) const;
        WINRT_IMPL_AUTO(bool) TryParseAdd(param::hstring const& input) const;
    };
    template <> struct consume<Windows::Web::Http::Headers::IHttpConnectionOptionHeaderValueCollection>
    {
        template <typename D> using type = consume_Windows_Web_Http_Headers_IHttpConnectionOptionHeaderValueCollection<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_Headers_IHttpConnectionOptionHeaderValueFactory
    {
        WINRT_IMPL_AUTO(Windows::Web::Http::Headers::HttpConnectionOptionHeaderValue) Create(param::hstring const& token) const;
    };
    template <> struct consume<Windows::Web::Http::Headers::IHttpConnectionOptionHeaderValueFactory>
    {
        template <typename D> using type = consume_Windows_Web_Http_Headers_IHttpConnectionOptionHeaderValueFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_Headers_IHttpConnectionOptionHeaderValueStatics
    {
        WINRT_IMPL_AUTO(Windows::Web::Http::Headers::HttpConnectionOptionHeaderValue) Parse(param::hstring const& input) const;
        WINRT_IMPL_AUTO(bool) TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpConnectionOptionHeaderValue& connectionOptionHeaderValue) const;
    };
    template <> struct consume<Windows::Web::Http::Headers::IHttpConnectionOptionHeaderValueStatics>
    {
        template <typename D> using type = consume_Windows_Web_Http_Headers_IHttpConnectionOptionHeaderValueStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_Headers_IHttpContentCodingHeaderValue
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) ContentCoding() const;
    };
    template <> struct consume<Windows::Web::Http::Headers::IHttpContentCodingHeaderValue>
    {
        template <typename D> using type = consume_Windows_Web_Http_Headers_IHttpContentCodingHeaderValue<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_Headers_IHttpContentCodingHeaderValueCollection
    {
        WINRT_IMPL_AUTO(void) ParseAdd(param::hstring const& input) const;
        WINRT_IMPL_AUTO(bool) TryParseAdd(param::hstring const& input) const;
    };
    template <> struct consume<Windows::Web::Http::Headers::IHttpContentCodingHeaderValueCollection>
    {
        template <typename D> using type = consume_Windows_Web_Http_Headers_IHttpContentCodingHeaderValueCollection<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_Headers_IHttpContentCodingHeaderValueFactory
    {
        WINRT_IMPL_AUTO(Windows::Web::Http::Headers::HttpContentCodingHeaderValue) Create(param::hstring const& contentCoding) const;
    };
    template <> struct consume<Windows::Web::Http::Headers::IHttpContentCodingHeaderValueFactory>
    {
        template <typename D> using type = consume_Windows_Web_Http_Headers_IHttpContentCodingHeaderValueFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_Headers_IHttpContentCodingHeaderValueStatics
    {
        WINRT_IMPL_AUTO(Windows::Web::Http::Headers::HttpContentCodingHeaderValue) Parse(param::hstring const& input) const;
        WINRT_IMPL_AUTO(bool) TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpContentCodingHeaderValue& contentCodingHeaderValue) const;
    };
    template <> struct consume<Windows::Web::Http::Headers::IHttpContentCodingHeaderValueStatics>
    {
        template <typename D> using type = consume_Windows_Web_Http_Headers_IHttpContentCodingHeaderValueStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_Headers_IHttpContentCodingWithQualityHeaderValue
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) ContentCoding() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<double>) Quality() const;
    };
    template <> struct consume<Windows::Web::Http::Headers::IHttpContentCodingWithQualityHeaderValue>
    {
        template <typename D> using type = consume_Windows_Web_Http_Headers_IHttpContentCodingWithQualityHeaderValue<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_Headers_IHttpContentCodingWithQualityHeaderValueCollection
    {
        WINRT_IMPL_AUTO(void) ParseAdd(param::hstring const& input) const;
        WINRT_IMPL_AUTO(bool) TryParseAdd(param::hstring const& input) const;
    };
    template <> struct consume<Windows::Web::Http::Headers::IHttpContentCodingWithQualityHeaderValueCollection>
    {
        template <typename D> using type = consume_Windows_Web_Http_Headers_IHttpContentCodingWithQualityHeaderValueCollection<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_Headers_IHttpContentCodingWithQualityHeaderValueFactory
    {
        WINRT_IMPL_AUTO(Windows::Web::Http::Headers::HttpContentCodingWithQualityHeaderValue) CreateFromValue(param::hstring const& contentCoding) const;
        WINRT_IMPL_AUTO(Windows::Web::Http::Headers::HttpContentCodingWithQualityHeaderValue) CreateFromValueWithQuality(param::hstring const& contentCoding, double quality) const;
    };
    template <> struct consume<Windows::Web::Http::Headers::IHttpContentCodingWithQualityHeaderValueFactory>
    {
        template <typename D> using type = consume_Windows_Web_Http_Headers_IHttpContentCodingWithQualityHeaderValueFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_Headers_IHttpContentCodingWithQualityHeaderValueStatics
    {
        WINRT_IMPL_AUTO(Windows::Web::Http::Headers::HttpContentCodingWithQualityHeaderValue) Parse(param::hstring const& input) const;
        WINRT_IMPL_AUTO(bool) TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpContentCodingWithQualityHeaderValue& contentCodingWithQualityHeaderValue) const;
    };
    template <> struct consume<Windows::Web::Http::Headers::IHttpContentCodingWithQualityHeaderValueStatics>
    {
        template <typename D> using type = consume_Windows_Web_Http_Headers_IHttpContentCodingWithQualityHeaderValueStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_Headers_IHttpContentDispositionHeaderValue
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) DispositionType() const;
        WINRT_IMPL_AUTO(void) DispositionType(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) FileName() const;
        WINRT_IMPL_AUTO(void) FileName(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) FileNameStar() const;
        WINRT_IMPL_AUTO(void) FileNameStar(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Name() const;
        WINRT_IMPL_AUTO(void) Name(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::Web::Http::Headers::HttpNameValueHeaderValue>) Parameters() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<uint64_t>) Size() const;
        WINRT_IMPL_AUTO(void) Size(Windows::Foundation::IReference<uint64_t> const& value) const;
    };
    template <> struct consume<Windows::Web::Http::Headers::IHttpContentDispositionHeaderValue>
    {
        template <typename D> using type = consume_Windows_Web_Http_Headers_IHttpContentDispositionHeaderValue<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_Headers_IHttpContentDispositionHeaderValueFactory
    {
        WINRT_IMPL_AUTO(Windows::Web::Http::Headers::HttpContentDispositionHeaderValue) Create(param::hstring const& dispositionType) const;
    };
    template <> struct consume<Windows::Web::Http::Headers::IHttpContentDispositionHeaderValueFactory>
    {
        template <typename D> using type = consume_Windows_Web_Http_Headers_IHttpContentDispositionHeaderValueFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_Headers_IHttpContentDispositionHeaderValueStatics
    {
        WINRT_IMPL_AUTO(Windows::Web::Http::Headers::HttpContentDispositionHeaderValue) Parse(param::hstring const& input) const;
        WINRT_IMPL_AUTO(bool) TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpContentDispositionHeaderValue& contentDispositionHeaderValue) const;
    };
    template <> struct consume<Windows::Web::Http::Headers::IHttpContentDispositionHeaderValueStatics>
    {
        template <typename D> using type = consume_Windows_Web_Http_Headers_IHttpContentDispositionHeaderValueStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_Headers_IHttpContentHeaderCollection
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Web::Http::Headers::HttpContentDispositionHeaderValue) ContentDisposition() const;
        WINRT_IMPL_AUTO(void) ContentDisposition(Windows::Web::Http::Headers::HttpContentDispositionHeaderValue const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Web::Http::Headers::HttpContentCodingHeaderValueCollection) ContentEncoding() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Web::Http::Headers::HttpLanguageHeaderValueCollection) ContentLanguage() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<uint64_t>) ContentLength() const;
        WINRT_IMPL_AUTO(void) ContentLength(Windows::Foundation::IReference<uint64_t> const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Uri) ContentLocation() const;
        WINRT_IMPL_AUTO(void) ContentLocation(Windows::Foundation::Uri const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Storage::Streams::IBuffer) ContentMD5() const;
        WINRT_IMPL_AUTO(void) ContentMD5(Windows::Storage::Streams::IBuffer const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Web::Http::Headers::HttpContentRangeHeaderValue) ContentRange() const;
        WINRT_IMPL_AUTO(void) ContentRange(Windows::Web::Http::Headers::HttpContentRangeHeaderValue const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Web::Http::Headers::HttpMediaTypeHeaderValue) ContentType() const;
        WINRT_IMPL_AUTO(void) ContentType(Windows::Web::Http::Headers::HttpMediaTypeHeaderValue const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<Windows::Foundation::DateTime>) Expires() const;
        WINRT_IMPL_AUTO(void) Expires(Windows::Foundation::IReference<Windows::Foundation::DateTime> const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<Windows::Foundation::DateTime>) LastModified() const;
        WINRT_IMPL_AUTO(void) LastModified(Windows::Foundation::IReference<Windows::Foundation::DateTime> const& value) const;
        WINRT_IMPL_AUTO(void) Append(param::hstring const& name, param::hstring const& value) const;
        WINRT_IMPL_AUTO(bool) TryAppendWithoutValidation(param::hstring const& name, param::hstring const& value) const;
    };
    template <> struct consume<Windows::Web::Http::Headers::IHttpContentHeaderCollection>
    {
        template <typename D> using type = consume_Windows_Web_Http_Headers_IHttpContentHeaderCollection<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_Headers_IHttpContentRangeHeaderValue
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<uint64_t>) FirstBytePosition() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<uint64_t>) LastBytePosition() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<uint64_t>) Length() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Unit() const;
        WINRT_IMPL_AUTO(void) Unit(param::hstring const& value) const;
    };
    template <> struct consume<Windows::Web::Http::Headers::IHttpContentRangeHeaderValue>
    {
        template <typename D> using type = consume_Windows_Web_Http_Headers_IHttpContentRangeHeaderValue<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_Headers_IHttpContentRangeHeaderValueFactory
    {
        WINRT_IMPL_AUTO(Windows::Web::Http::Headers::HttpContentRangeHeaderValue) CreateFromLength(uint64_t length) const;
        WINRT_IMPL_AUTO(Windows::Web::Http::Headers::HttpContentRangeHeaderValue) CreateFromRange(uint64_t from, uint64_t to) const;
        WINRT_IMPL_AUTO(Windows::Web::Http::Headers::HttpContentRangeHeaderValue) CreateFromRangeWithLength(uint64_t from, uint64_t to, uint64_t length) const;
    };
    template <> struct consume<Windows::Web::Http::Headers::IHttpContentRangeHeaderValueFactory>
    {
        template <typename D> using type = consume_Windows_Web_Http_Headers_IHttpContentRangeHeaderValueFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_Headers_IHttpContentRangeHeaderValueStatics
    {
        WINRT_IMPL_AUTO(Windows::Web::Http::Headers::HttpContentRangeHeaderValue) Parse(param::hstring const& input) const;
        WINRT_IMPL_AUTO(bool) TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpContentRangeHeaderValue& contentRangeHeaderValue) const;
    };
    template <> struct consume<Windows::Web::Http::Headers::IHttpContentRangeHeaderValueStatics>
    {
        template <typename D> using type = consume_Windows_Web_Http_Headers_IHttpContentRangeHeaderValueStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_Headers_IHttpCookiePairHeaderValue
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Name() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Value() const;
        WINRT_IMPL_AUTO(void) Value(param::hstring const& value) const;
    };
    template <> struct consume<Windows::Web::Http::Headers::IHttpCookiePairHeaderValue>
    {
        template <typename D> using type = consume_Windows_Web_Http_Headers_IHttpCookiePairHeaderValue<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_Headers_IHttpCookiePairHeaderValueCollection
    {
        WINRT_IMPL_AUTO(void) ParseAdd(param::hstring const& input) const;
        WINRT_IMPL_AUTO(bool) TryParseAdd(param::hstring const& input) const;
    };
    template <> struct consume<Windows::Web::Http::Headers::IHttpCookiePairHeaderValueCollection>
    {
        template <typename D> using type = consume_Windows_Web_Http_Headers_IHttpCookiePairHeaderValueCollection<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_Headers_IHttpCookiePairHeaderValueFactory
    {
        WINRT_IMPL_AUTO(Windows::Web::Http::Headers::HttpCookiePairHeaderValue) CreateFromName(param::hstring const& name) const;
        WINRT_IMPL_AUTO(Windows::Web::Http::Headers::HttpCookiePairHeaderValue) CreateFromNameWithValue(param::hstring const& name, param::hstring const& value) const;
    };
    template <> struct consume<Windows::Web::Http::Headers::IHttpCookiePairHeaderValueFactory>
    {
        template <typename D> using type = consume_Windows_Web_Http_Headers_IHttpCookiePairHeaderValueFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_Headers_IHttpCookiePairHeaderValueStatics
    {
        WINRT_IMPL_AUTO(Windows::Web::Http::Headers::HttpCookiePairHeaderValue) Parse(param::hstring const& input) const;
        WINRT_IMPL_AUTO(bool) TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpCookiePairHeaderValue& cookiePairHeaderValue) const;
    };
    template <> struct consume<Windows::Web::Http::Headers::IHttpCookiePairHeaderValueStatics>
    {
        template <typename D> using type = consume_Windows_Web_Http_Headers_IHttpCookiePairHeaderValueStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_Headers_IHttpCredentialsHeaderValue
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::Web::Http::Headers::HttpNameValueHeaderValue>) Parameters() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Scheme() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Token() const;
    };
    template <> struct consume<Windows::Web::Http::Headers::IHttpCredentialsHeaderValue>
    {
        template <typename D> using type = consume_Windows_Web_Http_Headers_IHttpCredentialsHeaderValue<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_Headers_IHttpCredentialsHeaderValueFactory
    {
        WINRT_IMPL_AUTO(Windows::Web::Http::Headers::HttpCredentialsHeaderValue) CreateFromScheme(param::hstring const& scheme) const;
        WINRT_IMPL_AUTO(Windows::Web::Http::Headers::HttpCredentialsHeaderValue) CreateFromSchemeWithToken(param::hstring const& scheme, param::hstring const& token) const;
    };
    template <> struct consume<Windows::Web::Http::Headers::IHttpCredentialsHeaderValueFactory>
    {
        template <typename D> using type = consume_Windows_Web_Http_Headers_IHttpCredentialsHeaderValueFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_Headers_IHttpCredentialsHeaderValueStatics
    {
        WINRT_IMPL_AUTO(Windows::Web::Http::Headers::HttpCredentialsHeaderValue) Parse(param::hstring const& input) const;
        WINRT_IMPL_AUTO(bool) TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpCredentialsHeaderValue& credentialsHeaderValue) const;
    };
    template <> struct consume<Windows::Web::Http::Headers::IHttpCredentialsHeaderValueStatics>
    {
        template <typename D> using type = consume_Windows_Web_Http_Headers_IHttpCredentialsHeaderValueStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_Headers_IHttpDateOrDeltaHeaderValue
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<Windows::Foundation::DateTime>) Date() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<Windows::Foundation::TimeSpan>) Delta() const;
    };
    template <> struct consume<Windows::Web::Http::Headers::IHttpDateOrDeltaHeaderValue>
    {
        template <typename D> using type = consume_Windows_Web_Http_Headers_IHttpDateOrDeltaHeaderValue<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_Headers_IHttpDateOrDeltaHeaderValueStatics
    {
        WINRT_IMPL_AUTO(Windows::Web::Http::Headers::HttpDateOrDeltaHeaderValue) Parse(param::hstring const& input) const;
        WINRT_IMPL_AUTO(bool) TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpDateOrDeltaHeaderValue& dateOrDeltaHeaderValue) const;
    };
    template <> struct consume<Windows::Web::Http::Headers::IHttpDateOrDeltaHeaderValueStatics>
    {
        template <typename D> using type = consume_Windows_Web_Http_Headers_IHttpDateOrDeltaHeaderValueStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_Headers_IHttpExpectationHeaderValue
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Name() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Value() const;
        WINRT_IMPL_AUTO(void) Value(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::Web::Http::Headers::HttpNameValueHeaderValue>) Parameters() const;
    };
    template <> struct consume<Windows::Web::Http::Headers::IHttpExpectationHeaderValue>
    {
        template <typename D> using type = consume_Windows_Web_Http_Headers_IHttpExpectationHeaderValue<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_Headers_IHttpExpectationHeaderValueCollection
    {
        WINRT_IMPL_AUTO(void) ParseAdd(param::hstring const& input) const;
        WINRT_IMPL_AUTO(bool) TryParseAdd(param::hstring const& input) const;
    };
    template <> struct consume<Windows::Web::Http::Headers::IHttpExpectationHeaderValueCollection>
    {
        template <typename D> using type = consume_Windows_Web_Http_Headers_IHttpExpectationHeaderValueCollection<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_Headers_IHttpExpectationHeaderValueFactory
    {
        WINRT_IMPL_AUTO(Windows::Web::Http::Headers::HttpExpectationHeaderValue) CreateFromName(param::hstring const& name) const;
        WINRT_IMPL_AUTO(Windows::Web::Http::Headers::HttpExpectationHeaderValue) CreateFromNameWithValue(param::hstring const& name, param::hstring const& value) const;
    };
    template <> struct consume<Windows::Web::Http::Headers::IHttpExpectationHeaderValueFactory>
    {
        template <typename D> using type = consume_Windows_Web_Http_Headers_IHttpExpectationHeaderValueFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_Headers_IHttpExpectationHeaderValueStatics
    {
        WINRT_IMPL_AUTO(Windows::Web::Http::Headers::HttpExpectationHeaderValue) Parse(param::hstring const& input) const;
        WINRT_IMPL_AUTO(bool) TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpExpectationHeaderValue& expectationHeaderValue) const;
    };
    template <> struct consume<Windows::Web::Http::Headers::IHttpExpectationHeaderValueStatics>
    {
        template <typename D> using type = consume_Windows_Web_Http_Headers_IHttpExpectationHeaderValueStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_Headers_IHttpLanguageHeaderValueCollection
    {
        WINRT_IMPL_AUTO(void) ParseAdd(param::hstring const& input) const;
        WINRT_IMPL_AUTO(bool) TryParseAdd(param::hstring const& input) const;
    };
    template <> struct consume<Windows::Web::Http::Headers::IHttpLanguageHeaderValueCollection>
    {
        template <typename D> using type = consume_Windows_Web_Http_Headers_IHttpLanguageHeaderValueCollection<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_Headers_IHttpLanguageRangeWithQualityHeaderValue
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) LanguageRange() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<double>) Quality() const;
    };
    template <> struct consume<Windows::Web::Http::Headers::IHttpLanguageRangeWithQualityHeaderValue>
    {
        template <typename D> using type = consume_Windows_Web_Http_Headers_IHttpLanguageRangeWithQualityHeaderValue<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_Headers_IHttpLanguageRangeWithQualityHeaderValueCollection
    {
        WINRT_IMPL_AUTO(void) ParseAdd(param::hstring const& input) const;
        WINRT_IMPL_AUTO(bool) TryParseAdd(param::hstring const& input) const;
    };
    template <> struct consume<Windows::Web::Http::Headers::IHttpLanguageRangeWithQualityHeaderValueCollection>
    {
        template <typename D> using type = consume_Windows_Web_Http_Headers_IHttpLanguageRangeWithQualityHeaderValueCollection<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_Headers_IHttpLanguageRangeWithQualityHeaderValueFactory
    {
        WINRT_IMPL_AUTO(Windows::Web::Http::Headers::HttpLanguageRangeWithQualityHeaderValue) CreateFromLanguageRange(param::hstring const& languageRange) const;
        WINRT_IMPL_AUTO(Windows::Web::Http::Headers::HttpLanguageRangeWithQualityHeaderValue) CreateFromLanguageRangeWithQuality(param::hstring const& languageRange, double quality) const;
    };
    template <> struct consume<Windows::Web::Http::Headers::IHttpLanguageRangeWithQualityHeaderValueFactory>
    {
        template <typename D> using type = consume_Windows_Web_Http_Headers_IHttpLanguageRangeWithQualityHeaderValueFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_Headers_IHttpLanguageRangeWithQualityHeaderValueStatics
    {
        WINRT_IMPL_AUTO(Windows::Web::Http::Headers::HttpLanguageRangeWithQualityHeaderValue) Parse(param::hstring const& input) const;
        WINRT_IMPL_AUTO(bool) TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpLanguageRangeWithQualityHeaderValue& languageRangeWithQualityHeaderValue) const;
    };
    template <> struct consume<Windows::Web::Http::Headers::IHttpLanguageRangeWithQualityHeaderValueStatics>
    {
        template <typename D> using type = consume_Windows_Web_Http_Headers_IHttpLanguageRangeWithQualityHeaderValueStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_Headers_IHttpMediaTypeHeaderValue
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) CharSet() const;
        WINRT_IMPL_AUTO(void) CharSet(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) MediaType() const;
        WINRT_IMPL_AUTO(void) MediaType(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::Web::Http::Headers::HttpNameValueHeaderValue>) Parameters() const;
    };
    template <> struct consume<Windows::Web::Http::Headers::IHttpMediaTypeHeaderValue>
    {
        template <typename D> using type = consume_Windows_Web_Http_Headers_IHttpMediaTypeHeaderValue<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_Headers_IHttpMediaTypeHeaderValueFactory
    {
        WINRT_IMPL_AUTO(Windows::Web::Http::Headers::HttpMediaTypeHeaderValue) Create(param::hstring const& mediaType) const;
    };
    template <> struct consume<Windows::Web::Http::Headers::IHttpMediaTypeHeaderValueFactory>
    {
        template <typename D> using type = consume_Windows_Web_Http_Headers_IHttpMediaTypeHeaderValueFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_Headers_IHttpMediaTypeHeaderValueStatics
    {
        WINRT_IMPL_AUTO(Windows::Web::Http::Headers::HttpMediaTypeHeaderValue) Parse(param::hstring const& input) const;
        WINRT_IMPL_AUTO(bool) TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpMediaTypeHeaderValue& mediaTypeHeaderValue) const;
    };
    template <> struct consume<Windows::Web::Http::Headers::IHttpMediaTypeHeaderValueStatics>
    {
        template <typename D> using type = consume_Windows_Web_Http_Headers_IHttpMediaTypeHeaderValueStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_Headers_IHttpMediaTypeWithQualityHeaderValue
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) CharSet() const;
        WINRT_IMPL_AUTO(void) CharSet(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) MediaType() const;
        WINRT_IMPL_AUTO(void) MediaType(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::Web::Http::Headers::HttpNameValueHeaderValue>) Parameters() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<double>) Quality() const;
        WINRT_IMPL_AUTO(void) Quality(Windows::Foundation::IReference<double> const& value) const;
    };
    template <> struct consume<Windows::Web::Http::Headers::IHttpMediaTypeWithQualityHeaderValue>
    {
        template <typename D> using type = consume_Windows_Web_Http_Headers_IHttpMediaTypeWithQualityHeaderValue<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_Headers_IHttpMediaTypeWithQualityHeaderValueCollection
    {
        WINRT_IMPL_AUTO(void) ParseAdd(param::hstring const& input) const;
        WINRT_IMPL_AUTO(bool) TryParseAdd(param::hstring const& input) const;
    };
    template <> struct consume<Windows::Web::Http::Headers::IHttpMediaTypeWithQualityHeaderValueCollection>
    {
        template <typename D> using type = consume_Windows_Web_Http_Headers_IHttpMediaTypeWithQualityHeaderValueCollection<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_Headers_IHttpMediaTypeWithQualityHeaderValueFactory
    {
        WINRT_IMPL_AUTO(Windows::Web::Http::Headers::HttpMediaTypeWithQualityHeaderValue) CreateFromMediaType(param::hstring const& mediaType) const;
        WINRT_IMPL_AUTO(Windows::Web::Http::Headers::HttpMediaTypeWithQualityHeaderValue) CreateFromMediaTypeWithQuality(param::hstring const& mediaType, double quality) const;
    };
    template <> struct consume<Windows::Web::Http::Headers::IHttpMediaTypeWithQualityHeaderValueFactory>
    {
        template <typename D> using type = consume_Windows_Web_Http_Headers_IHttpMediaTypeWithQualityHeaderValueFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_Headers_IHttpMediaTypeWithQualityHeaderValueStatics
    {
        WINRT_IMPL_AUTO(Windows::Web::Http::Headers::HttpMediaTypeWithQualityHeaderValue) Parse(param::hstring const& input) const;
        WINRT_IMPL_AUTO(bool) TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpMediaTypeWithQualityHeaderValue& mediaTypeWithQualityHeaderValue) const;
    };
    template <> struct consume<Windows::Web::Http::Headers::IHttpMediaTypeWithQualityHeaderValueStatics>
    {
        template <typename D> using type = consume_Windows_Web_Http_Headers_IHttpMediaTypeWithQualityHeaderValueStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_Headers_IHttpMethodHeaderValueCollection
    {
        WINRT_IMPL_AUTO(void) ParseAdd(param::hstring const& input) const;
        WINRT_IMPL_AUTO(bool) TryParseAdd(param::hstring const& input) const;
    };
    template <> struct consume<Windows::Web::Http::Headers::IHttpMethodHeaderValueCollection>
    {
        template <typename D> using type = consume_Windows_Web_Http_Headers_IHttpMethodHeaderValueCollection<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_Headers_IHttpNameValueHeaderValue
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Name() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Value() const;
        WINRT_IMPL_AUTO(void) Value(param::hstring const& value) const;
    };
    template <> struct consume<Windows::Web::Http::Headers::IHttpNameValueHeaderValue>
    {
        template <typename D> using type = consume_Windows_Web_Http_Headers_IHttpNameValueHeaderValue<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_Headers_IHttpNameValueHeaderValueFactory
    {
        WINRT_IMPL_AUTO(Windows::Web::Http::Headers::HttpNameValueHeaderValue) CreateFromName(param::hstring const& name) const;
        WINRT_IMPL_AUTO(Windows::Web::Http::Headers::HttpNameValueHeaderValue) CreateFromNameWithValue(param::hstring const& name, param::hstring const& value) const;
    };
    template <> struct consume<Windows::Web::Http::Headers::IHttpNameValueHeaderValueFactory>
    {
        template <typename D> using type = consume_Windows_Web_Http_Headers_IHttpNameValueHeaderValueFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_Headers_IHttpNameValueHeaderValueStatics
    {
        WINRT_IMPL_AUTO(Windows::Web::Http::Headers::HttpNameValueHeaderValue) Parse(param::hstring const& input) const;
        WINRT_IMPL_AUTO(bool) TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpNameValueHeaderValue& nameValueHeaderValue) const;
    };
    template <> struct consume<Windows::Web::Http::Headers::IHttpNameValueHeaderValueStatics>
    {
        template <typename D> using type = consume_Windows_Web_Http_Headers_IHttpNameValueHeaderValueStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_Headers_IHttpProductHeaderValue
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Name() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Version() const;
    };
    template <> struct consume<Windows::Web::Http::Headers::IHttpProductHeaderValue>
    {
        template <typename D> using type = consume_Windows_Web_Http_Headers_IHttpProductHeaderValue<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_Headers_IHttpProductHeaderValueFactory
    {
        WINRT_IMPL_AUTO(Windows::Web::Http::Headers::HttpProductHeaderValue) CreateFromName(param::hstring const& productName) const;
        WINRT_IMPL_AUTO(Windows::Web::Http::Headers::HttpProductHeaderValue) CreateFromNameWithVersion(param::hstring const& productName, param::hstring const& productVersion) const;
    };
    template <> struct consume<Windows::Web::Http::Headers::IHttpProductHeaderValueFactory>
    {
        template <typename D> using type = consume_Windows_Web_Http_Headers_IHttpProductHeaderValueFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_Headers_IHttpProductHeaderValueStatics
    {
        WINRT_IMPL_AUTO(Windows::Web::Http::Headers::HttpProductHeaderValue) Parse(param::hstring const& input) const;
        WINRT_IMPL_AUTO(bool) TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpProductHeaderValue& productHeaderValue) const;
    };
    template <> struct consume<Windows::Web::Http::Headers::IHttpProductHeaderValueStatics>
    {
        template <typename D> using type = consume_Windows_Web_Http_Headers_IHttpProductHeaderValueStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_Headers_IHttpProductInfoHeaderValue
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Web::Http::Headers::HttpProductHeaderValue) Product() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Comment() const;
    };
    template <> struct consume<Windows::Web::Http::Headers::IHttpProductInfoHeaderValue>
    {
        template <typename D> using type = consume_Windows_Web_Http_Headers_IHttpProductInfoHeaderValue<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_Headers_IHttpProductInfoHeaderValueCollection
    {
        WINRT_IMPL_AUTO(void) ParseAdd(param::hstring const& input) const;
        WINRT_IMPL_AUTO(bool) TryParseAdd(param::hstring const& input) const;
    };
    template <> struct consume<Windows::Web::Http::Headers::IHttpProductInfoHeaderValueCollection>
    {
        template <typename D> using type = consume_Windows_Web_Http_Headers_IHttpProductInfoHeaderValueCollection<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_Headers_IHttpProductInfoHeaderValueFactory
    {
        WINRT_IMPL_AUTO(Windows::Web::Http::Headers::HttpProductInfoHeaderValue) CreateFromComment(param::hstring const& productComment) const;
        WINRT_IMPL_AUTO(Windows::Web::Http::Headers::HttpProductInfoHeaderValue) CreateFromNameWithVersion(param::hstring const& productName, param::hstring const& productVersion) const;
    };
    template <> struct consume<Windows::Web::Http::Headers::IHttpProductInfoHeaderValueFactory>
    {
        template <typename D> using type = consume_Windows_Web_Http_Headers_IHttpProductInfoHeaderValueFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_Headers_IHttpProductInfoHeaderValueStatics
    {
        WINRT_IMPL_AUTO(Windows::Web::Http::Headers::HttpProductInfoHeaderValue) Parse(param::hstring const& input) const;
        WINRT_IMPL_AUTO(bool) TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpProductInfoHeaderValue& productInfoHeaderValue) const;
    };
    template <> struct consume<Windows::Web::Http::Headers::IHttpProductInfoHeaderValueStatics>
    {
        template <typename D> using type = consume_Windows_Web_Http_Headers_IHttpProductInfoHeaderValueStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_Headers_IHttpRequestHeaderCollection
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Web::Http::Headers::HttpMediaTypeWithQualityHeaderValueCollection) Accept() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Web::Http::Headers::HttpContentCodingWithQualityHeaderValueCollection) AcceptEncoding() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Web::Http::Headers::HttpLanguageRangeWithQualityHeaderValueCollection) AcceptLanguage() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Web::Http::Headers::HttpCredentialsHeaderValue) Authorization() const;
        WINRT_IMPL_AUTO(void) Authorization(Windows::Web::Http::Headers::HttpCredentialsHeaderValue const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Web::Http::Headers::HttpCacheDirectiveHeaderValueCollection) CacheControl() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Web::Http::Headers::HttpConnectionOptionHeaderValueCollection) Connection() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Web::Http::Headers::HttpCookiePairHeaderValueCollection) Cookie() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<Windows::Foundation::DateTime>) Date() const;
        WINRT_IMPL_AUTO(void) Date(Windows::Foundation::IReference<Windows::Foundation::DateTime> const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Web::Http::Headers::HttpExpectationHeaderValueCollection) Expect() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) From() const;
        WINRT_IMPL_AUTO(void) From(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Networking::HostName) Host() const;
        WINRT_IMPL_AUTO(void) Host(Windows::Networking::HostName const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<Windows::Foundation::DateTime>) IfModifiedSince() const;
        WINRT_IMPL_AUTO(void) IfModifiedSince(Windows::Foundation::IReference<Windows::Foundation::DateTime> const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<Windows::Foundation::DateTime>) IfUnmodifiedSince() const;
        WINRT_IMPL_AUTO(void) IfUnmodifiedSince(Windows::Foundation::IReference<Windows::Foundation::DateTime> const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<uint32_t>) MaxForwards() const;
        WINRT_IMPL_AUTO(void) MaxForwards(Windows::Foundation::IReference<uint32_t> const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Web::Http::Headers::HttpCredentialsHeaderValue) ProxyAuthorization() const;
        WINRT_IMPL_AUTO(void) ProxyAuthorization(Windows::Web::Http::Headers::HttpCredentialsHeaderValue const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Uri) Referer() const;
        WINRT_IMPL_AUTO(void) Referer(Windows::Foundation::Uri const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Web::Http::Headers::HttpTransferCodingHeaderValueCollection) TransferEncoding() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Web::Http::Headers::HttpProductInfoHeaderValueCollection) UserAgent() const;
        WINRT_IMPL_AUTO(void) Append(param::hstring const& name, param::hstring const& value) const;
        WINRT_IMPL_AUTO(bool) TryAppendWithoutValidation(param::hstring const& name, param::hstring const& value) const;
    };
    template <> struct consume<Windows::Web::Http::Headers::IHttpRequestHeaderCollection>
    {
        template <typename D> using type = consume_Windows_Web_Http_Headers_IHttpRequestHeaderCollection<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_Headers_IHttpResponseHeaderCollection
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<Windows::Foundation::TimeSpan>) Age() const;
        WINRT_IMPL_AUTO(void) Age(Windows::Foundation::IReference<Windows::Foundation::TimeSpan> const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Web::Http::Headers::HttpMethodHeaderValueCollection) Allow() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Web::Http::Headers::HttpCacheDirectiveHeaderValueCollection) CacheControl() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Web::Http::Headers::HttpConnectionOptionHeaderValueCollection) Connection() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<Windows::Foundation::DateTime>) Date() const;
        WINRT_IMPL_AUTO(void) Date(Windows::Foundation::IReference<Windows::Foundation::DateTime> const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Uri) Location() const;
        WINRT_IMPL_AUTO(void) Location(Windows::Foundation::Uri const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Web::Http::Headers::HttpChallengeHeaderValueCollection) ProxyAuthenticate() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Web::Http::Headers::HttpDateOrDeltaHeaderValue) RetryAfter() const;
        WINRT_IMPL_AUTO(void) RetryAfter(Windows::Web::Http::Headers::HttpDateOrDeltaHeaderValue const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Web::Http::Headers::HttpTransferCodingHeaderValueCollection) TransferEncoding() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Web::Http::Headers::HttpChallengeHeaderValueCollection) WwwAuthenticate() const;
        WINRT_IMPL_AUTO(void) Append(param::hstring const& name, param::hstring const& value) const;
        WINRT_IMPL_AUTO(bool) TryAppendWithoutValidation(param::hstring const& name, param::hstring const& value) const;
    };
    template <> struct consume<Windows::Web::Http::Headers::IHttpResponseHeaderCollection>
    {
        template <typename D> using type = consume_Windows_Web_Http_Headers_IHttpResponseHeaderCollection<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_Headers_IHttpTransferCodingHeaderValue
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::Web::Http::Headers::HttpNameValueHeaderValue>) Parameters() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Value() const;
    };
    template <> struct consume<Windows::Web::Http::Headers::IHttpTransferCodingHeaderValue>
    {
        template <typename D> using type = consume_Windows_Web_Http_Headers_IHttpTransferCodingHeaderValue<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_Headers_IHttpTransferCodingHeaderValueCollection
    {
        WINRT_IMPL_AUTO(void) ParseAdd(param::hstring const& input) const;
        WINRT_IMPL_AUTO(bool) TryParseAdd(param::hstring const& input) const;
    };
    template <> struct consume<Windows::Web::Http::Headers::IHttpTransferCodingHeaderValueCollection>
    {
        template <typename D> using type = consume_Windows_Web_Http_Headers_IHttpTransferCodingHeaderValueCollection<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_Headers_IHttpTransferCodingHeaderValueFactory
    {
        WINRT_IMPL_AUTO(Windows::Web::Http::Headers::HttpTransferCodingHeaderValue) Create(param::hstring const& input) const;
    };
    template <> struct consume<Windows::Web::Http::Headers::IHttpTransferCodingHeaderValueFactory>
    {
        template <typename D> using type = consume_Windows_Web_Http_Headers_IHttpTransferCodingHeaderValueFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_Headers_IHttpTransferCodingHeaderValueStatics
    {
        WINRT_IMPL_AUTO(Windows::Web::Http::Headers::HttpTransferCodingHeaderValue) Parse(param::hstring const& input) const;
        WINRT_IMPL_AUTO(bool) TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpTransferCodingHeaderValue& transferCodingHeaderValue) const;
    };
    template <> struct consume<Windows::Web::Http::Headers::IHttpTransferCodingHeaderValueStatics>
    {
        template <typename D> using type = consume_Windows_Web_Http_Headers_IHttpTransferCodingHeaderValueStatics<D>;
    };
}
#endif
