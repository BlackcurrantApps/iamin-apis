# SWGAppUserApi

All URIs are relative to *https://iamin-events.appspot.com/_ah/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**callRegister**](SWGAppUserApi.md#callregister) | **POST** /appUserApi/v1/register | Register a new App User
[**castVote**](SWGAppUserApi.md#castvote) | **POST** /appUserApi/v1/castVote | Cast a vote
[**deleteIAMIN**](SWGAppUserApi.md#deleteiamin) | **DELETE** /appUserApi/v1/deleteIAMIN | Delete IAMIN
[**getAppPopup**](SWGAppUserApi.md#getapppopup) | **GET** /appUserApi/v1/getAppPopup | Get the current application popup
[**getAppVersion**](SWGAppUserApi.md#getappversion) | **GET** /appUserApi/v1/getAppVersion | Register a new app user
[**getCategories**](SWGAppUserApi.md#getcategories) | **GET** /appUserApi/v1/getCategories | get categories inside a main-event
[**getCommentsForEvent**](SWGAppUserApi.md#getcommentsforevent) | **GET** /appUserApi/v1/getCommentsForEvent | get Comments on a Event
[**getEvent**](SWGAppUserApi.md#getevent) | **GET** /appUserApi/v1/getEvent | get a single event inside a category
[**getEvents**](SWGAppUserApi.md#getevents) | **GET** /appUserApi/v1/getEvents | get events inside a category
[**getHistory**](SWGAppUserApi.md#gethistory) | **GET** /appUserApi/v1/getHistory | get history of transactions for a user
[**getIAMIN**](SWGAppUserApi.md#getiamin) | **GET** /appUserApi/v1/getIAMIN | get by IAMIN ID
[**getIAMINS**](SWGAppUserApi.md#getiamins) | **GET** /appUserApi/v1/getIAMINS | get iamins of a user
[**getMainListings**](SWGAppUserApi.md#getmainlistings) | **GET** /appUserApi/v1/getMainListings | get all published Main Events
[**getOffers**](SWGAppUserApi.md#getoffers) | **GET** /appUserApi/v1/getOffers | Get offers displayed on the app
[**getPRLocations**](SWGAppUserApi.md#getprlocations) | **GET** /appUserApi/v1/getPRLocations | get prs for a event along with their locations
[**getSortedMainListings**](SWGAppUserApi.md#getsortedmainlistings) | **GET** /appUserApi/v1/getSortedMainListings | get sorted Main Events
[**getTicket**](SWGAppUserApi.md#getticket) | **GET** /appUserApi/v1/getTicket | get Tickets of a user
[**getTickets**](SWGAppUserApi.md#gettickets) | **GET** /appUserApi/v1/getTickets | get Tickets of a user
[**getUser**](SWGAppUserApi.md#getuser) | **GET** /appUserApi/v1/getUser | Get registered app user
[**getUserRoles**](SWGAppUserApi.md#getuserroles) | **GET** /appUserApi/v1/getUserRoles | get priviledges for a user
[**getVotingCandidates**](SWGAppUserApi.md#getvotingcandidates) | **GET** /appUserApi/v1/getVotingCandidates | get Voting candidates on a event if enabled
[**iamin**](SWGAppUserApi.md#iamin) | **POST** /appUserApi/v1/iamin | IAMIN in an event
[**initializePaytmTransaction**](SWGAppUserApi.md#initializepaytmtransaction) | **POST** /appUserApi/v1/initializePaytmTransaction | Initialize a paytm transaction
[**paytmTransactionSuccess**](SWGAppUserApi.md#paytmtransactionsuccess) | **POST** /appUserApi/v1/PaytmTransactionSuccess | Initialize a paytm transaction
[**postComment**](SWGAppUserApi.md#postcomment) | **POST** /appUserApi/v1/postComment | Post comment on a event
[**postEventFeedback**](SWGAppUserApi.md#posteventfeedback) | **POST** /appUserApi/v1/PostEventFeedback | post feedback on a event
[**setIaminQuantity**](SWGAppUserApi.md#setiaminquantity) | **PUT** /appUserApi/v1/setIaminQuantity | Set quantity of tickets wanted
[**transferTicket**](SWGAppUserApi.md#transferticket) | **POST** /appUserApi/v1/transferTicket | Transfer your ticket
[**updateContactPreference**](SWGAppUserApi.md#updatecontactpreference) | **PUT** /appUserApi/v1/updateContactPreference | update contact preferences on an iamin


# **callRegister**
```objc
-(NSURLSessionTask*) callRegisterWithAppUser: (SWGAppUser1*) appUser
        completionHandler: (void (^)(NSError* error)) handler;
```

Register a new App User

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: GoogleAuth)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Authorization"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Authorization"];


SWGAppUser1* appUser = [[SWGAppUser1 alloc] init]; // 

SWGAppUserApi*apiInstance = [[SWGAppUserApi alloc] init];

// Register a new App User
[apiInstance callRegisterWithAppUser:appUser
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGAppUserApi->callRegister: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **appUser** | [**SWGAppUser1***](SWGAppUser1.md)|  | 

### Return type

void (empty response body)

### Authorization

[GoogleAuth](../README.md#GoogleAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **castVote**
```objc
-(NSURLSessionTask*) castVoteWithEventID: (NSNumber*) eventID
    candidateID: (NSNumber*) candidateID
        completionHandler: (void (^)(NSError* error)) handler;
```

Cast a vote

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: GoogleAuth)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Authorization"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Authorization"];


NSNumber* eventID = @789; // 
NSNumber* candidateID = @789; // 

SWGAppUserApi*apiInstance = [[SWGAppUserApi alloc] init];

// Cast a vote
[apiInstance castVoteWithEventID:eventID
              candidateID:candidateID
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGAppUserApi->castVote: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **eventID** | **NSNumber***|  | 
 **candidateID** | **NSNumber***|  | 

### Return type

void (empty response body)

### Authorization

[GoogleAuth](../README.md#GoogleAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteIAMIN**
```objc
-(NSURLSessionTask*) deleteIAMINWithEventId: (NSNumber*) eventId
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete IAMIN

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: GoogleAuth)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Authorization"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Authorization"];


NSNumber* eventId = @789; // 

SWGAppUserApi*apiInstance = [[SWGAppUserApi alloc] init];

// Delete IAMIN
[apiInstance deleteIAMINWithEventId:eventId
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGAppUserApi->deleteIAMIN: %@", error);
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

# **getAppPopup**
```objc
-(NSURLSessionTask*) getAppPopupWithCompletionHandler: 
        (void (^)(SWGAppPopup* output, NSError* error)) handler;
```

Get the current application popup

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: GoogleAuth)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Authorization"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Authorization"];



SWGAppUserApi*apiInstance = [[SWGAppUserApi alloc] init];

// Get the current application popup
[apiInstance getAppPopupWithCompletionHandler: 
          ^(SWGAppPopup* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGAppUserApi->getAppPopup: %@", error);
                        }
                    }];
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**SWGAppPopup***](SWGAppPopup.md)

### Authorization

[GoogleAuth](../README.md#GoogleAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getAppVersion**
```objc
-(NSURLSessionTask*) getAppVersionWithCompletionHandler: 
        (void (^)(SWGAppVersion* output, NSError* error)) handler;
```

Register a new app user

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: GoogleAuth)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Authorization"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Authorization"];



SWGAppUserApi*apiInstance = [[SWGAppUserApi alloc] init];

// Register a new app user
[apiInstance getAppVersionWithCompletionHandler: 
          ^(SWGAppVersion* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGAppUserApi->getAppVersion: %@", error);
                        }
                    }];
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**SWGAppVersion***](SWGAppVersion.md)

### Authorization

[GoogleAuth](../README.md#GoogleAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getCategories**
```objc
-(NSURLSessionTask*) getCategoriesWithMainEventId: (NSNumber*) mainEventId
        completionHandler: (void (^)(SWGInlineResponse2001* output, NSError* error)) handler;
```

get categories inside a main-event

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: GoogleAuth)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Authorization"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Authorization"];


NSNumber* mainEventId = @789; // 

SWGAppUserApi*apiInstance = [[SWGAppUserApi alloc] init];

// get categories inside a main-event
[apiInstance getCategoriesWithMainEventId:mainEventId
          completionHandler: ^(SWGInlineResponse2001* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGAppUserApi->getCategories: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **mainEventId** | **NSNumber***|  | 

### Return type

[**SWGInlineResponse2001***](SWGInlineResponse2001.md)

### Authorization

[GoogleAuth](../README.md#GoogleAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getCommentsForEvent**
```objc
-(NSURLSessionTask*) getCommentsForEventWithEventID: (NSNumber*) eventID
        completionHandler: (void (^)(SWGInlineResponse2006* output, NSError* error)) handler;
```

get Comments on a Event

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: GoogleAuth)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Authorization"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Authorization"];


NSNumber* eventID = @789; // 

SWGAppUserApi*apiInstance = [[SWGAppUserApi alloc] init];

// get Comments on a Event
[apiInstance getCommentsForEventWithEventID:eventID
          completionHandler: ^(SWGInlineResponse2006* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGAppUserApi->getCommentsForEvent: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **eventID** | **NSNumber***|  | 

### Return type

[**SWGInlineResponse2006***](SWGInlineResponse2006.md)

### Authorization

[GoogleAuth](../README.md#GoogleAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getEvent**
```objc
-(NSURLSessionTask*) getEventWithEventID: (NSNumber*) eventID
        completionHandler: (void (^)(SWGEvent1* output, NSError* error)) handler;
```

get a single event inside a category

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: GoogleAuth)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Authorization"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Authorization"];


NSNumber* eventID = @789; // 

SWGAppUserApi*apiInstance = [[SWGAppUserApi alloc] init];

// get a single event inside a category
[apiInstance getEventWithEventID:eventID
          completionHandler: ^(SWGEvent1* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGAppUserApi->getEvent: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **eventID** | **NSNumber***|  | 

### Return type

[**SWGEvent1***](SWGEvent1.md)

### Authorization

[GoogleAuth](../README.md#GoogleAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getEvents**
```objc
-(NSURLSessionTask*) getEventsWithCategoryId: (NSNumber*) categoryId
        completionHandler: (void (^)(SWGInlineResponse2002* output, NSError* error)) handler;
```

get events inside a category

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: GoogleAuth)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Authorization"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Authorization"];


NSNumber* categoryId = @789; // 

SWGAppUserApi*apiInstance = [[SWGAppUserApi alloc] init];

// get events inside a category
[apiInstance getEventsWithCategoryId:categoryId
          completionHandler: ^(SWGInlineResponse2002* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGAppUserApi->getEvents: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **categoryId** | **NSNumber***|  | 

### Return type

[**SWGInlineResponse2002***](SWGInlineResponse2002.md)

### Authorization

[GoogleAuth](../README.md#GoogleAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getHistory**
```objc
-(NSURLSessionTask*) getHistoryWithCompletionHandler: 
        (void (^)(SWGInlineResponse2005* output, NSError* error)) handler;
```

get history of transactions for a user

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: GoogleAuth)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Authorization"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Authorization"];



SWGAppUserApi*apiInstance = [[SWGAppUserApi alloc] init];

// get history of transactions for a user
[apiInstance getHistoryWithCompletionHandler: 
          ^(SWGInlineResponse2005* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGAppUserApi->getHistory: %@", error);
                        }
                    }];
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**SWGInlineResponse2005***](SWGInlineResponse2005.md)

### Authorization

[GoogleAuth](../README.md#GoogleAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getIAMIN**
```objc
-(NSURLSessionTask*) getIAMINWithIaminID: (NSNumber*) iaminID
        completionHandler: (void (^)(SWGIAMIN1* output, NSError* error)) handler;
```

get by IAMIN ID

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: GoogleAuth)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Authorization"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Authorization"];


NSNumber* iaminID = @789; // 

SWGAppUserApi*apiInstance = [[SWGAppUserApi alloc] init];

// get by IAMIN ID
[apiInstance getIAMINWithIaminID:iaminID
          completionHandler: ^(SWGIAMIN1* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGAppUserApi->getIAMIN: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **iaminID** | **NSNumber***|  | 

### Return type

[**SWGIAMIN1***](SWGIAMIN1.md)

### Authorization

[GoogleAuth](../README.md#GoogleAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getIAMINS**
```objc
-(NSURLSessionTask*) getIAMINSWithCompletionHandler: 
        (void (^)(SWGInlineResponse2003* output, NSError* error)) handler;
```

get iamins of a user

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: GoogleAuth)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Authorization"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Authorization"];



SWGAppUserApi*apiInstance = [[SWGAppUserApi alloc] init];

// get iamins of a user
[apiInstance getIAMINSWithCompletionHandler: 
          ^(SWGInlineResponse2003* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGAppUserApi->getIAMINS: %@", error);
                        }
                    }];
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**SWGInlineResponse2003***](SWGInlineResponse2003.md)

### Authorization

[GoogleAuth](../README.md#GoogleAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getMainListings**
```objc
-(NSURLSessionTask*) getMainListingsWithCompletionHandler: 
        (void (^)(SWGSortedMainEvents1* output, NSError* error)) handler;
```

get all published Main Events

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: GoogleAuth)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Authorization"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Authorization"];



SWGAppUserApi*apiInstance = [[SWGAppUserApi alloc] init];

// get all published Main Events
[apiInstance getMainListingsWithCompletionHandler: 
          ^(SWGSortedMainEvents1* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGAppUserApi->getMainListings: %@", error);
                        }
                    }];
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**SWGSortedMainEvents1***](SWGSortedMainEvents1.md)

### Authorization

[GoogleAuth](../README.md#GoogleAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getOffers**
```objc
-(NSURLSessionTask*) getOffersWithCompletionHandler: 
        (void (^)(SWGInlineResponse200* output, NSError* error)) handler;
```

Get offers displayed on the app

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: GoogleAuth)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Authorization"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Authorization"];



SWGAppUserApi*apiInstance = [[SWGAppUserApi alloc] init];

// Get offers displayed on the app
[apiInstance getOffersWithCompletionHandler: 
          ^(SWGInlineResponse200* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGAppUserApi->getOffers: %@", error);
                        }
                    }];
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**SWGInlineResponse200***](SWGInlineResponse200.md)

### Authorization

[GoogleAuth](../README.md#GoogleAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getPRLocations**
```objc
-(NSURLSessionTask*) getPRLocationsWithMainEventID: (NSNumber*) mainEventID
        completionHandler: (void (^)(SWGLocationContainer* output, NSError* error)) handler;
```

get prs for a event along with their locations

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: GoogleAuth)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Authorization"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Authorization"];


NSNumber* mainEventID = @789; // 

SWGAppUserApi*apiInstance = [[SWGAppUserApi alloc] init];

// get prs for a event along with their locations
[apiInstance getPRLocationsWithMainEventID:mainEventID
          completionHandler: ^(SWGLocationContainer* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGAppUserApi->getPRLocations: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **mainEventID** | **NSNumber***|  | 

### Return type

[**SWGLocationContainer***](SWGLocationContainer.md)

### Authorization

[GoogleAuth](../README.md#GoogleAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getSortedMainListings**
```objc
-(NSURLSessionTask*) getSortedMainListingsWithCity: (NSString*) city
        completionHandler: (void (^)(SWGSortedMainEvents1* output, NSError* error)) handler;
```

get sorted Main Events

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: GoogleAuth)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Authorization"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Authorization"];


NSString* city = @"city_example"; // 

SWGAppUserApi*apiInstance = [[SWGAppUserApi alloc] init];

// get sorted Main Events
[apiInstance getSortedMainListingsWithCity:city
          completionHandler: ^(SWGSortedMainEvents1* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGAppUserApi->getSortedMainListings: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **city** | **NSString***|  | 

### Return type

[**SWGSortedMainEvents1***](SWGSortedMainEvents1.md)

### Authorization

[GoogleAuth](../README.md#GoogleAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getTicket**
```objc
-(NSURLSessionTask*) getTicketWithTicketID: (NSNumber*) ticketID
        completionHandler: (void (^)(SWGTicket1* output, NSError* error)) handler;
```

get Tickets of a user

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: GoogleAuth)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Authorization"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Authorization"];


NSNumber* ticketID = @789; // 

SWGAppUserApi*apiInstance = [[SWGAppUserApi alloc] init];

// get Tickets of a user
[apiInstance getTicketWithTicketID:ticketID
          completionHandler: ^(SWGTicket1* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGAppUserApi->getTicket: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ticketID** | **NSNumber***|  | 

### Return type

[**SWGTicket1***](SWGTicket1.md)

### Authorization

[GoogleAuth](../README.md#GoogleAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getTickets**
```objc
-(NSURLSessionTask*) getTicketsWithCompletionHandler: 
        (void (^)(SWGInlineResponse2004* output, NSError* error)) handler;
```

get Tickets of a user

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: GoogleAuth)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Authorization"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Authorization"];



SWGAppUserApi*apiInstance = [[SWGAppUserApi alloc] init];

// get Tickets of a user
[apiInstance getTicketsWithCompletionHandler: 
          ^(SWGInlineResponse2004* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGAppUserApi->getTickets: %@", error);
                        }
                    }];
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**SWGInlineResponse2004***](SWGInlineResponse2004.md)

### Authorization

[GoogleAuth](../README.md#GoogleAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getUser**
```objc
-(NSURLSessionTask*) getUserWithCompletionHandler: 
        (void (^)(SWGAppUser2* output, NSError* error)) handler;
```

Get registered app user

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: GoogleAuth)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Authorization"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Authorization"];



SWGAppUserApi*apiInstance = [[SWGAppUserApi alloc] init];

// Get registered app user
[apiInstance getUserWithCompletionHandler: 
          ^(SWGAppUser2* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGAppUserApi->getUser: %@", error);
                        }
                    }];
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**SWGAppUser2***](SWGAppUser2.md)

### Authorization

[GoogleAuth](../README.md#GoogleAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getUserRoles**
```objc
-(NSURLSessionTask*) getUserRolesWithCompletionHandler: 
        (void (^)(SWGUserRoles1* output, NSError* error)) handler;
```

get priviledges for a user

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: GoogleAuth)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Authorization"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Authorization"];



SWGAppUserApi*apiInstance = [[SWGAppUserApi alloc] init];

// get priviledges for a user
[apiInstance getUserRolesWithCompletionHandler: 
          ^(SWGUserRoles1* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGAppUserApi->getUserRoles: %@", error);
                        }
                    }];
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**SWGUserRoles1***](SWGUserRoles1.md)

### Authorization

[GoogleAuth](../README.md#GoogleAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getVotingCandidates**
```objc
-(NSURLSessionTask*) getVotingCandidatesWithEventID: (NSNumber*) eventID
        completionHandler: (void (^)(SWGInlineResponse2007* output, NSError* error)) handler;
```

get Voting candidates on a event if enabled

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: GoogleAuth)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Authorization"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Authorization"];


NSNumber* eventID = @789; // 

SWGAppUserApi*apiInstance = [[SWGAppUserApi alloc] init];

// get Voting candidates on a event if enabled
[apiInstance getVotingCandidatesWithEventID:eventID
          completionHandler: ^(SWGInlineResponse2007* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGAppUserApi->getVotingCandidates: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **eventID** | **NSNumber***|  | 

### Return type

[**SWGInlineResponse2007***](SWGInlineResponse2007.md)

### Authorization

[GoogleAuth](../README.md#GoogleAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **iamin**
```objc
-(NSURLSessionTask*) iaminWithEventId: (NSNumber*) eventId
        completionHandler: (void (^)(SWGIAMIN1* output, NSError* error)) handler;
```

IAMIN in an event

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: GoogleAuth)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Authorization"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Authorization"];


NSNumber* eventId = @789; // 

SWGAppUserApi*apiInstance = [[SWGAppUserApi alloc] init];

// IAMIN in an event
[apiInstance iaminWithEventId:eventId
          completionHandler: ^(SWGIAMIN1* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGAppUserApi->iamin: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **eventId** | **NSNumber***|  | 

### Return type

[**SWGIAMIN1***](SWGIAMIN1.md)

### Authorization

[GoogleAuth](../README.md#GoogleAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **initializePaytmTransaction**
```objc
-(NSURLSessionTask*) initializePaytmTransactionWithEventId: (NSNumber*) eventId
    transferToEmail: (NSString*) transferToEmail
    cellNo: (NSString*) cellNo
    quantity: (NSNumber*) quantity
        completionHandler: (void (^)(SWGPaytmTransaction1* output, NSError* error)) handler;
```

Initialize a paytm transaction

Call this before making any payment

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: GoogleAuth)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Authorization"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Authorization"];


NSNumber* eventId = @789; // 
NSString* transferToEmail = @"transferToEmail_example"; // 
NSString* cellNo = @"cellNo_example"; // 
NSNumber* quantity = @56; // 

SWGAppUserApi*apiInstance = [[SWGAppUserApi alloc] init];

// Initialize a paytm transaction
[apiInstance initializePaytmTransactionWithEventId:eventId
              transferToEmail:transferToEmail
              cellNo:cellNo
              quantity:quantity
          completionHandler: ^(SWGPaytmTransaction1* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGAppUserApi->initializePaytmTransaction: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **eventId** | **NSNumber***|  | 
 **transferToEmail** | **NSString***|  | 
 **cellNo** | **NSString***|  | 
 **quantity** | **NSNumber***|  | 

### Return type

[**SWGPaytmTransaction1***](SWGPaytmTransaction1.md)

### Authorization

[GoogleAuth](../README.md#GoogleAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **paytmTransactionSuccess**
```objc
-(NSURLSessionTask*) paytmTransactionSuccessWithOrderID: (NSString*) orderID
        completionHandler: (void (^)(SWGTicket1* output, NSError* error)) handler;
```

Initialize a paytm transaction

Call this before making any payment

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: GoogleAuth)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Authorization"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Authorization"];


NSString* orderID = @"orderID_example"; // 

SWGAppUserApi*apiInstance = [[SWGAppUserApi alloc] init];

// Initialize a paytm transaction
[apiInstance paytmTransactionSuccessWithOrderID:orderID
          completionHandler: ^(SWGTicket1* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGAppUserApi->paytmTransactionSuccess: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **orderID** | **NSString***|  | 

### Return type

[**SWGTicket1***](SWGTicket1.md)

### Authorization

[GoogleAuth](../README.md#GoogleAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **postComment**
```objc
-(NSURLSessionTask*) postCommentWithEventID: (NSNumber*) eventID
    message: (NSString*) message
        completionHandler: (void (^)(NSError* error)) handler;
```

Post comment on a event

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: GoogleAuth)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Authorization"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Authorization"];


NSNumber* eventID = @789; // 
NSString* message = @"message_example"; // 

SWGAppUserApi*apiInstance = [[SWGAppUserApi alloc] init];

// Post comment on a event
[apiInstance postCommentWithEventID:eventID
              message:message
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGAppUserApi->postComment: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **eventID** | **NSNumber***|  | 
 **message** | **NSString***|  | 

### Return type

void (empty response body)

### Authorization

[GoogleAuth](../README.md#GoogleAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **postEventFeedback**
```objc
-(NSURLSessionTask*) postEventFeedbackWithEventID: (NSNumber*) eventID
    message: (NSString*) message
    rating: (NSNumber*) rating
        completionHandler: (void (^)(NSError* error)) handler;
```

post feedback on a event

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: GoogleAuth)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Authorization"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Authorization"];


NSNumber* eventID = @789; // 
NSString* message = @"message_example"; // 
NSNumber* rating = @56; //  (optional)

SWGAppUserApi*apiInstance = [[SWGAppUserApi alloc] init];

// post feedback on a event
[apiInstance postEventFeedbackWithEventID:eventID
              message:message
              rating:rating
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGAppUserApi->postEventFeedback: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **eventID** | **NSNumber***|  | 
 **message** | **NSString***|  | 
 **rating** | **NSNumber***|  | [optional] 

### Return type

void (empty response body)

### Authorization

[GoogleAuth](../README.md#GoogleAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **setIaminQuantity**
```objc
-(NSURLSessionTask*) setIaminQuantityWithIaminId: (NSNumber*) iaminId
    quantity: (NSNumber*) quantity
        completionHandler: (void (^)(SWGIAMIN1* output, NSError* error)) handler;
```

Set quantity of tickets wanted

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: GoogleAuth)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Authorization"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Authorization"];


NSNumber* iaminId = @789; // 
NSNumber* quantity = @56; // 

SWGAppUserApi*apiInstance = [[SWGAppUserApi alloc] init];

// Set quantity of tickets wanted
[apiInstance setIaminQuantityWithIaminId:iaminId
              quantity:quantity
          completionHandler: ^(SWGIAMIN1* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGAppUserApi->setIaminQuantity: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **iaminId** | **NSNumber***|  | 
 **quantity** | **NSNumber***|  | 

### Return type

[**SWGIAMIN1***](SWGIAMIN1.md)

### Authorization

[GoogleAuth](../README.md#GoogleAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **transferTicket**
```objc
-(NSURLSessionTask*) transferTicketWithTicketId: (NSNumber*) ticketId
    transferToEmail: (NSString*) transferToEmail
    transferToCell: (NSString*) transferToCell
    transferQuantity: (NSNumber*) transferQuantity
        completionHandler: (void (^)(NSError* error)) handler;
```

Transfer your ticket

Transfering ticket can be enabled/disabled in the manager console

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: GoogleAuth)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Authorization"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Authorization"];


NSNumber* ticketId = @789; // 
NSString* transferToEmail = @"transferToEmail_example"; // 
NSString* transferToCell = @"transferToCell_example"; // 
NSNumber* transferQuantity = @56; // 

SWGAppUserApi*apiInstance = [[SWGAppUserApi alloc] init];

// Transfer your ticket
[apiInstance transferTicketWithTicketId:ticketId
              transferToEmail:transferToEmail
              transferToCell:transferToCell
              transferQuantity:transferQuantity
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGAppUserApi->transferTicket: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ticketId** | **NSNumber***|  | 
 **transferToEmail** | **NSString***|  | 
 **transferToCell** | **NSString***|  | 
 **transferQuantity** | **NSNumber***|  | 

### Return type

void (empty response body)

### Authorization

[GoogleAuth](../README.md#GoogleAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateContactPreference**
```objc
-(NSURLSessionTask*) updateContactPreferenceWithIaminId: (NSNumber*) iaminId
    canContact: (NSString*) canContact
        completionHandler: (void (^)(SWGIAMIN1* output, NSError* error)) handler;
```

update contact preferences on an iamin

set whether or not the user wants to share contact details.

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: GoogleAuth)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Authorization"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Authorization"];


NSNumber* iaminId = @789; // 
NSString* canContact = @"canContact_example"; // 

SWGAppUserApi*apiInstance = [[SWGAppUserApi alloc] init];

// update contact preferences on an iamin
[apiInstance updateContactPreferenceWithIaminId:iaminId
              canContact:canContact
          completionHandler: ^(SWGIAMIN1* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGAppUserApi->updateContactPreference: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **iaminId** | **NSNumber***|  | 
 **canContact** | **NSString***|  | 

### Return type

[**SWGIAMIN1***](SWGIAMIN1.md)

### Authorization

[GoogleAuth](../README.md#GoogleAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

