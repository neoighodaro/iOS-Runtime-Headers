/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSURL, NSString;

@interface NSURL : NSObject <NSCoding, NSCopying> {
    NSURL *_baseURL;
    void *_clients;
    void *_reserved;
    NSString *_urlString;
}

+ (id)URLWithDirtyString:(id)arg1;
+ (id)URLWithDirtyString:(id)arg1;
+ (id)URLWithDisplayIdentifier:(id)arg1 forSearchResultDomain:(NSInteger)arg2 andIdentifier:(unsigned long long)arg3;
+ (id)URLWithPackagePart:(id)arg1;
+ (id)URLWithScheme:(id)arg1 host:(id)arg2 port:(NSInteger)arg3 uri:(id)arg4;
+ (id)URLWithScheme:(id)arg1 host:(id)arg2 port:(NSInteger)arg3 uri:(id)arg4;
+ (id)URLWithString:(id)arg1 relativeToURL:(id)arg2;
+ (id)URLWithString:(id)arg1;
+ (id)URLWithTelephoneNumber:(id)arg1 addressBookUID:(NSInteger)arg2;
+ (id)URLWithTelephoneNumber:(id)arg1 promptUser:(BOOL)arg2;
+ (id)URLWithTelephoneNumber:(id)arg1;
+ (id)_URLWithData:(id)arg1 relativeToURL:(id)arg2;
+ (id)_URLWithDataAsString:(id)arg1 relativeToURL:(id)arg2;
+ (id)_web_URLWithComponents:(struct { id x1; id x2; id x3; id x4; NSInteger x5; id x6; id x7; id x8; })arg1;
+ (id)_web_URLWithData:(id)arg1 relativeToURL:(id)arg2;
+ (id)_web_URLWithData:(id)arg1;
+ (id)_web_URLWithDataAsString:(id)arg1 relativeToURL:(id)arg2;
+ (id)_web_URLWithDataAsString:(id)arg1;
+ (id)_web_URLWithString:(id)arg1 relativeToURL:(id)arg2;
+ (id)_web_URLWithUserTypedString:(id)arg1 relativeToURL:(id)arg2;
+ (id)_web_URLWithUserTypedString:(id)arg1;
+ (id)_web_uniqueWebDataURL;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (NSInteger)classicPortForScheme:(id)arg1;
+ (NSInteger)classicPortForScheme:(id)arg1;
+ (id)copyDictionaryForQueryString:(id)arg1 unescapedValues:(BOOL)arg2;
+ (id)escapedStringForString:(id)arg1;
+ (id)fileURLWithPath:(id)arg1 isDirectory:(BOOL)arg2;
+ (id)fileURLWithPath:(id)arg1;
+ (id)mapsURLWithFriendUserID:(id)arg1;
+ (id)mapsURLWithQuery:(id)arg1;
+ (id)mapsURLWithSourceAddress:(id)arg1 destinationAddress:(id)arg2;
+ (id)mapsURLWithSourceFriendUserID:(id)arg1 destinationFriendUserID:(id)arg2;
+ (BOOL)openURL:(id)arg1;
+ (id)queryStringForDictionary:(id)arg1 escapedValues:(BOOL)arg2;
+ (id)unescapedStringForString:(id)arg1;
+ (id)uniqueURLWithRelativePart:(id)arg1;

- (id)URLByRemovingLastPathComponent;
- (id)URLWithUsername:(id)arg1 withPassword:(id)arg2;
- (id)URLWithUsername:(id)arg1;
- (id)URLWithUsername:(id)arg1;
- (id)URLWithoutPassword;
- (id)URLWithoutUsername;
- (id)URLWithoutUsername;
- (void)_ICSStringWithOptions:(NSUInteger)arg1 appendingToString:(id)arg2;
- (id)_URLByEscapingSpacesAndControlChars;
- (unsigned long)_cfTypeID;
- (struct __CFURL { }*)_cfurl;
- (struct __CFDictionary { }*)_clientsCreatingIfNecessary:(BOOL)arg1;
- (void)_domain:(id*)arg1 subdomain:(id*)arg2;
- (void)_freeClients;
- (id)_hostString;
- (BOOL)_isAbsolute;
- (BOOL)_isGoogleMapsDomain:(id)arg1 subdomain:(id)arg2 path:(id)arg3 queryKeysAndValues:(id)arg4;
- (id)_relativeURLPath;
- (id)_web_URLByRemovingLastPathComponent_nowarn;
- (id)_web_URLByRemovingUserAndPath_nowarn;
- (id)_web_URLByRemovingUserAndQueryAndFragment_nowarn;
- (const char *)_web_URLCString;
- (struct { id x1; id x2; id x3; id x4; NSInteger x5; id x6; id x7; id x8; })_web_URLComponents;
- (id)_web_URLWithLowercasedScheme;
- (id)_web_dataForURLComponentType:(long)arg1;
- (BOOL)_web_hasQuestionMarkOnlyQueryString;
- (id)_web_hostData;
- (id)_web_hostString;
- (BOOL)_web_isEmpty;
- (BOOL)_web_isJavaScriptURL;
- (id)_web_originalData;
- (id)_web_originalDataAsString;
- (id)_web_schemeData;
- (id)_web_schemeSeparatorWithoutColon;
- (id)_web_scriptIfJavaScriptURL;
- (id)_web_suggestedFilenameWithMIMEType:(id)arg1;
- (id)_web_userVisibleString;
- (id)_webkit_URLByRemovingComponent:(long)arg1;
- (id)_webkit_URLByRemovingFragment;
- (id)_webkit_URLByRemovingResourceSpecifier;
- (id)_webkit_canonicalize;
- (BOOL)_webkit_isFTPDirectoryURL;
- (BOOL)_webkit_isFileURL;
- (BOOL)_webkit_isJavaScriptURL;
- (id)_webkit_scriptIfJavaScriptURL;
- (BOOL)_webkit_shouldLoadAsEmptyDocument;
- (id)_webkit_suggestedFilenameWithMIMEType:(id)arg1;
- (id)_webkit_youTubeURL;
- (id)absoluteString;
- (id)absoluteURL;
- (id)baseURL;
- (id)copyQueryStringDictionaryWithUnescapedValues:(BOOL)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)finalize;
- (id)fragment;
- (id)friendFinderURL;
- (void)getPhoneNumber:(id*)arg1 addressBookUID:(NSInteger*)arg2;
- (BOOL)hasTelephonyScheme;
- (NSUInteger)hash;
- (id)host;
- (id)init;
- (id)initFileURLWithPath:(id)arg1 isDirectory:(BOOL)arg2;
- (id)initFileURLWithPath:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDirtyString:(id)arg1;
- (id)initWithPackagePart:(id)arg1;
- (id)initWithScheme:(id)arg1 host:(id)arg2 path:(id)arg3;
- (id)initWithScheme:(id)arg1 host:(id)arg2 port:(NSInteger)arg3 uri:(id)arg4;
- (id)initWithString:(id)arg1 relativeToURL:(id)arg2;
- (id)initWithString:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToURL:(id)arg1;
- (BOOL)isFileURL;
- (BOOL)isGoogleMapsURL;
- (BOOL)isInternalToPackage;
- (BOOL)isInternalUIKitURL;
- (BOOL)isJavaScriptURL;
- (BOOL)isKindOfClass:(Class)arg1;
- (BOOL)isMemberOfClass:(Class)arg1;
- (BOOL)isSafeExternalURL;
- (BOOL)isSpringboardHandledURL;
- (BOOL)isWebSafeTelephoneURL;
- (BOOL)isWebcalURL;
- (id)itmsURL:(NSInteger*)arg1;
- (id)itmsURL;
- (id)lastRawPathComponent;
- (id)mapsURL;
- (id)parameterString;
- (id)password;
- (id)path;
- (id)phobosURL;
- (id)phoneNumber;
- (id)port;
- (id)query;
- (id)queryParameters;
- (id)radarWebURL;
- (id)rawPath;
- (id)relativePath;
- (id)relativeString;
- (oneway void)release;
- (id)resourceSpecifier;
- (id)retain;
- (NSUInteger)retainCount;
- (id)sanitizedURL;
- (id)scheme;
- (id)schemeSwizzledURL;
- (id)searchResultDomain;
- (id)searchResultIdentifier;
- (id)serverURL;
- (id)standardizedURL;
- (NSInteger)storeURLType;
- (id)unquotedPassword;
- (id)uri;
- (id)uri;
- (id)urlByConvertingToStoreURL;
- (id)urlByReplacingSchemeWithScheme:(id)arg1;
- (id)urlBySettingHost:(id)arg1;
- (id)urlBySettingPath:(id)arg1;
- (id)urlBySettingPort:(id)arg1;
- (id)urlBySettingQueryStringDictionary:(id)arg1;
- (id)urlBySettingScheme:(id)arg1;
- (id)user;
- (id)webSafeTelephoneURL;
- (id)youTubeURL;

@end
