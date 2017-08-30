# SWGEventHeadApi

All URIs are relative to *https://iamin-events.appspot.com/_ah/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ehAddVotingCandidate**](SWGEventHeadApi.md#ehaddvotingcandidate) | **POST** /eventHeadApi/v1/addVotingCandidate | Add a voting candidate
[**ehAnnounceAll**](SWGEventHeadApi.md#ehannounceall) | **POST** /eventHeadApi/v1/announceAll | send anouncement to everyone
[**ehAnnounceIAMINers**](SWGEventHeadApi.md#ehannounceiaminers) | **POST** /eventHeadApi/v1/announceIAMINers | send anouncement to iaminers
[**ehAnnounceTicketHolders**](SWGEventHeadApi.md#ehannounceticketholders) | **POST** /eventHeadApi/v1/announceTicketHolders | send anouncement to tickey holders
[**ehDisableVoting**](SWGEventHeadApi.md#ehdisablevoting) | **PUT** /eventHeadApi/v1/disableVoting | Disable Voting
[**ehEditEvent**](SWGEventHeadApi.md#eheditevent) | **PUT** /eventHeadApi/v1/editEvent | Edit Event
[**ehEnableVoting**](SWGEventHeadApi.md#ehenablevoting) | **PUT** /eventHeadApi/v1/enableVoting | Enable Voting
[**ehFreeUpgradeIAMINER**](SWGEventHeadApi.md#ehfreeupgradeiaminer) | **POST** /eventHeadApi/v1/freeUpgradeIAMINER | give Ticket to iaminer
[**ehGetEvent**](SWGEventHeadApi.md#ehgetevent) | **GET** /eventHeadApi/v1/getEvent | get Event
[**ehGetIAMINers**](SWGEventHeadApi.md#ehgetiaminers) | **GET** /eventHeadApi/v1/getIAMINers | get IAMINers
[**ehGetStats**](SWGEventHeadApi.md#ehgetstats) | **GET** /eventHeadApi/v1/getStats | get Event
[**ehGetTicketHolders**](SWGEventHeadApi.md#ehgetticketholders) | **GET** /eventHeadApi/v1/getTicketHolders | get Ticket holders for this event
[**ehGetVotingCandidates**](SWGEventHeadApi.md#ehgetvotingcandidates) | **GET** /eventHeadApi/v1/getVotingCandidates | get Voting Candidates
[**ehRemoveAllCandidatesAndResetVoting**](SWGEventHeadApi.md#ehremoveallcandidatesandresetvoting) | **DELETE** /eventHeadApi/v1/removeAllCandidatesAndResetVoting | Remove a voting candidate
[**ehRemoveVotingCandidate**](SWGEventHeadApi.md#ehremovevotingcandidate) | **DELETE** /eventHeadApi/v1/removeVotingCandidate | Remove a voting candidate
[**ehgetHistory**](SWGEventHeadApi.md#ehgethistory) | **GET** /eventHeadApi/v1/getHistory | get History


# **ehAddVotingCandidate**
```objc
-(NSURLSessionTask*) ehAddVotingCandidateWithEventId: (NSNumber*) eventId
    name: (NSString*) name
        completionHandler: (void (^)(SWGInlineResponse20010Items* output, NSError* error)) handler;
```

Add a voting candidate

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: GoogleAuth)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Authorization"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Authorization"];


NSNumber* eventId = @789; // 
NSString* name = @"name_example"; // 

SWGEventHeadApi*apiInstance = [[SWGEventHeadApi alloc] init];

// Add a voting candidate
[apiInstance ehAddVotingCandidateWithEventId:eventId
              name:name
          completionHandler: ^(SWGInlineResponse20010Items* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGEventHeadApi->ehAddVotingCandidate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **eventId** | **NSNumber***|  | 
 **name** | **NSString***|  | 

### Return type

[**SWGInlineResponse20010Items***](SWGInlineResponse20010Items.md)

### Authorization

[GoogleAuth](../README.md#GoogleAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ehAnnounceAll**
```objc
-(NSURLSessionTask*) ehAnnounceAllWithEventId: (NSNumber*) eventId
    message: (NSString*) message
        completionHandler: (void (^)(NSError* error)) handler;
```

send anouncement to everyone

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: GoogleAuth)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Authorization"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Authorization"];


NSNumber* eventId = @789; // 
NSString* message = @"message_example"; // 

SWGEventHeadApi*apiInstance = [[SWGEventHeadApi alloc] init];

// send anouncement to everyone
[apiInstance ehAnnounceAllWithEventId:eventId
              message:message
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGEventHeadApi->ehAnnounceAll: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **eventId** | **NSNumber***|  | 
 **message** | **NSString***|  | 

### Return type

void (empty response body)

### Authorization

[GoogleAuth](../README.md#GoogleAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ehAnnounceIAMINers**
```objc
-(NSURLSessionTask*) ehAnnounceIAMINersWithEventId: (NSNumber*) eventId
    message: (NSString*) message
        completionHandler: (void (^)(NSError* error)) handler;
```

send anouncement to iaminers

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: GoogleAuth)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Authorization"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Authorization"];


NSNumber* eventId = @789; // 
NSString* message = @"message_example"; // 

SWGEventHeadApi*apiInstance = [[SWGEventHeadApi alloc] init];

// send anouncement to iaminers
[apiInstance ehAnnounceIAMINersWithEventId:eventId
              message:message
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGEventHeadApi->ehAnnounceIAMINers: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **eventId** | **NSNumber***|  | 
 **message** | **NSString***|  | 

### Return type

void (empty response body)

### Authorization

[GoogleAuth](../README.md#GoogleAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ehAnnounceTicketHolders**
```objc
-(NSURLSessionTask*) ehAnnounceTicketHoldersWithEventId: (NSNumber*) eventId
    message: (NSString*) message
        completionHandler: (void (^)(NSError* error)) handler;
```

send anouncement to tickey holders

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: GoogleAuth)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Authorization"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Authorization"];


NSNumber* eventId = @789; // 
NSString* message = @"message_example"; // 

SWGEventHeadApi*apiInstance = [[SWGEventHeadApi alloc] init];

// send anouncement to tickey holders
[apiInstance ehAnnounceTicketHoldersWithEventId:eventId
              message:message
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGEventHeadApi->ehAnnounceTicketHolders: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **eventId** | **NSNumber***|  | 
 **message** | **NSString***|  | 

### Return type

void (empty response body)

### Authorization

[GoogleAuth](../README.md#GoogleAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ehDisableVoting**
```objc
-(NSURLSessionTask*) ehDisableVotingWithEventId: (NSNumber*) eventId
        completionHandler: (void (^)(NSError* error)) handler;
```

Disable Voting

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: GoogleAuth)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Authorization"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Authorization"];


NSNumber* eventId = @789; // 

SWGEventHeadApi*apiInstance = [[SWGEventHeadApi alloc] init];

// Disable Voting
[apiInstance ehDisableVotingWithEventId:eventId
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGEventHeadApi->ehDisableVoting: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **eventId** | **NSNumber***|  | 

### Return type

void (empty response body)

### Authorization

[GoogleAuth](../README.md#GoogleAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ehEditEvent**
```objc
-(NSURLSessionTask*) ehEditEventWithEvent: (SWGEvent2*) event
        completionHandler: (void (^)(SWGInlineResponse2004Items* output, NSError* error)) handler;
```

Edit Event

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: GoogleAuth)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Authorization"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Authorization"];


SWGEvent2* event = [[SWGEvent2 alloc] init]; // 

SWGEventHeadApi*apiInstance = [[SWGEventHeadApi alloc] init];

// Edit Event
[apiInstance ehEditEventWithEvent:event
          completionHandler: ^(SWGInlineResponse2004Items* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGEventHeadApi->ehEditEvent: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **event** | [**SWGEvent2***](SWGEvent2.md)|  | 

### Return type

[**SWGInlineResponse2004Items***](SWGInlineResponse2004Items.md)

### Authorization

[GoogleAuth](../README.md#GoogleAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ehEnableVoting**
```objc
-(NSURLSessionTask*) ehEnableVotingWithEventId: (NSNumber*) eventId
        completionHandler: (void (^)(NSError* error)) handler;
```

Enable Voting

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: GoogleAuth)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Authorization"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Authorization"];


NSNumber* eventId = @789; // 

SWGEventHeadApi*apiInstance = [[SWGEventHeadApi alloc] init];

// Enable Voting
[apiInstance ehEnableVotingWithEventId:eventId
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGEventHeadApi->ehEnableVoting: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **eventId** | **NSNumber***|  | 

### Return type

void (empty response body)

### Authorization

[GoogleAuth](../README.md#GoogleAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ehFreeUpgradeIAMINER**
```objc
-(NSURLSessionTask*) ehFreeUpgradeIAMINERWithIAMIN: (SWGIAMIN1*) iAMIN
        completionHandler: (void (^)(NSError* error)) handler;
```

give Ticket to iaminer

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: GoogleAuth)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Authorization"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Authorization"];


SWGIAMIN1* iAMIN = [[SWGIAMIN1 alloc] init]; // 

SWGEventHeadApi*apiInstance = [[SWGEventHeadApi alloc] init];

// give Ticket to iaminer
[apiInstance ehFreeUpgradeIAMINERWithIAMIN:iAMIN
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGEventHeadApi->ehFreeUpgradeIAMINER: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **iAMIN** | [**SWGIAMIN1***](SWGIAMIN1.md)|  | 

### Return type

void (empty response body)

### Authorization

[GoogleAuth](../README.md#GoogleAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ehGetEvent**
```objc
-(NSURLSessionTask*) ehGetEventWithEventId: (NSNumber*) eventId
        completionHandler: (void (^)(SWGInlineResponse2004Items* output, NSError* error)) handler;
```

get Event

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: GoogleAuth)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Authorization"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Authorization"];


NSNumber* eventId = @789; // 

SWGEventHeadApi*apiInstance = [[SWGEventHeadApi alloc] init];

// get Event
[apiInstance ehGetEventWithEventId:eventId
          completionHandler: ^(SWGInlineResponse2004Items* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGEventHeadApi->ehGetEvent: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **eventId** | **NSNumber***|  | 

### Return type

[**SWGInlineResponse2004Items***](SWGInlineResponse2004Items.md)

### Authorization

[GoogleAuth](../README.md#GoogleAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ehGetIAMINers**
```objc
-(NSURLSessionTask*) ehGetIAMINersWithEventId: (NSNumber*) eventId
        completionHandler: (void (^)(SWGInlineResponse2005* output, NSError* error)) handler;
```

get IAMINers

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: GoogleAuth)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Authorization"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Authorization"];


NSNumber* eventId = @789; // 

SWGEventHeadApi*apiInstance = [[SWGEventHeadApi alloc] init];

// get IAMINers
[apiInstance ehGetIAMINersWithEventId:eventId
          completionHandler: ^(SWGInlineResponse2005* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGEventHeadApi->ehGetIAMINers: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **eventId** | **NSNumber***|  | 

### Return type

[**SWGInlineResponse2005***](SWGInlineResponse2005.md)

### Authorization

[GoogleAuth](../README.md#GoogleAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ehGetStats**
```objc
-(NSURLSessionTask*) ehGetStatsWithEventId: (NSNumber*) eventId
        completionHandler: (void (^)(SWGInlineResponse20015* output, NSError* error)) handler;
```

get Event

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: GoogleAuth)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Authorization"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Authorization"];


NSNumber* eventId = @789; // 

SWGEventHeadApi*apiInstance = [[SWGEventHeadApi alloc] init];

// get Event
[apiInstance ehGetStatsWithEventId:eventId
          completionHandler: ^(SWGInlineResponse20015* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGEventHeadApi->ehGetStats: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **eventId** | **NSNumber***|  | 

### Return type

[**SWGInlineResponse20015***](SWGInlineResponse20015.md)

### Authorization

[GoogleAuth](../README.md#GoogleAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ehGetTicketHolders**
```objc
-(NSURLSessionTask*) ehGetTicketHoldersWithEventId: (NSNumber*) eventId
        completionHandler: (void (^)(SWGInlineResponse2006* output, NSError* error)) handler;
```

get Ticket holders for this event

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: GoogleAuth)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Authorization"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Authorization"];


NSNumber* eventId = @789; // 

SWGEventHeadApi*apiInstance = [[SWGEventHeadApi alloc] init];

// get Ticket holders for this event
[apiInstance ehGetTicketHoldersWithEventId:eventId
          completionHandler: ^(SWGInlineResponse2006* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGEventHeadApi->ehGetTicketHolders: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **eventId** | **NSNumber***|  | 

### Return type

[**SWGInlineResponse2006***](SWGInlineResponse2006.md)

### Authorization

[GoogleAuth](../README.md#GoogleAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ehGetVotingCandidates**
```objc
-(NSURLSessionTask*) ehGetVotingCandidatesWithEventId: (NSNumber*) eventId
        completionHandler: (void (^)(SWGInlineResponse20010* output, NSError* error)) handler;
```

get Voting Candidates

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: GoogleAuth)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Authorization"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Authorization"];


NSNumber* eventId = @789; // 

SWGEventHeadApi*apiInstance = [[SWGEventHeadApi alloc] init];

// get Voting Candidates
[apiInstance ehGetVotingCandidatesWithEventId:eventId
          completionHandler: ^(SWGInlineResponse20010* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGEventHeadApi->ehGetVotingCandidates: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **eventId** | **NSNumber***|  | 

### Return type

[**SWGInlineResponse20010***](SWGInlineResponse20010.md)

### Authorization

[GoogleAuth](../README.md#GoogleAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ehRemoveAllCandidatesAndResetVoting**
```objc
-(NSURLSessionTask*) ehRemoveAllCandidatesAndResetVotingWithEventId: (NSNumber*) eventId
        completionHandler: (void (^)(NSError* error)) handler;
```

Remove a voting candidate

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: GoogleAuth)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Authorization"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Authorization"];


NSNumber* eventId = @789; // 

SWGEventHeadApi*apiInstance = [[SWGEventHeadApi alloc] init];

// Remove a voting candidate
[apiInstance ehRemoveAllCandidatesAndResetVotingWithEventId:eventId
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGEventHeadApi->ehRemoveAllCandidatesAndResetVoting: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **eventId** | **NSNumber***|  | 

### Return type

void (empty response body)

### Authorization

[GoogleAuth](../README.md#GoogleAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ehRemoveVotingCandidate**
```objc
-(NSURLSessionTask*) ehRemoveVotingCandidateWithEventId: (NSNumber*) eventId
    candidateId: (NSNumber*) candidateId
        completionHandler: (void (^)(NSError* error)) handler;
```

Remove a voting candidate

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: GoogleAuth)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Authorization"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Authorization"];


NSNumber* eventId = @789; // 
NSNumber* candidateId = @789; // 

SWGEventHeadApi*apiInstance = [[SWGEventHeadApi alloc] init];

// Remove a voting candidate
[apiInstance ehRemoveVotingCandidateWithEventId:eventId
              candidateId:candidateId
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGEventHeadApi->ehRemoveVotingCandidate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **eventId** | **NSNumber***|  | 
 **candidateId** | **NSNumber***|  | 

### Return type

void (empty response body)

### Authorization

[GoogleAuth](../README.md#GoogleAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ehgetHistory**
```objc
-(NSURLSessionTask*) ehgetHistoryWithEventId: (NSNumber*) eventId
        completionHandler: (void (^)(SWGInlineResponse2008* output, NSError* error)) handler;
```

get History

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: GoogleAuth)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Authorization"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Authorization"];


NSNumber* eventId = @789; // 

SWGEventHeadApi*apiInstance = [[SWGEventHeadApi alloc] init];

// get History
[apiInstance ehgetHistoryWithEventId:eventId
          completionHandler: ^(SWGInlineResponse2008* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGEventHeadApi->ehgetHistory: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **eventId** | **NSNumber***|  | 

### Return type

[**SWGInlineResponse2008***](SWGInlineResponse2008.md)

### Authorization

[GoogleAuth](../README.md#GoogleAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

