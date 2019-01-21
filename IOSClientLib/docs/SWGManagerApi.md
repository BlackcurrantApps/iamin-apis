# SWGManagerApi

All URIs are relative to *https://iamin-events.appspot.com/_ah/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**managerAddEventHead**](SWGManagerApi.md#manageraddeventhead) | **POST** /managerApi/v1/addEventHead | Add Event Head to Event
[**managerAddManager**](SWGManagerApi.md#manageraddmanager) | **POST** /managerApi/v1/addManager | Add Manager to Main Event
[**managerAddPR**](SWGManagerApi.md#manageraddpr) | **POST** /managerApi/v1/addPR | Add PR Representative to Main Event
[**managerAnnounceAll**](SWGManagerApi.md#managerannounceall) | **POST** /managerApi/v1/announceAll | Send Announcements to everyone
[**managerAnnounceIAMINers**](SWGManagerApi.md#managerannounceiaminers) | **POST** /managerApi/v1/announceIAMINers | Send Announcements to iaminer&#39;s only
[**managerAnnounceTicketHolders**](SWGManagerApi.md#managerannounceticketholders) | **POST** /managerApi/v1/announceTicketHolders | Send Announcements to ticket holders only
[**managerDeleteCategory**](SWGManagerApi.md#managerdeletecategory) | **DELETE** /managerApi/v1/deleteCategory | Delete Category only if empty
[**managerDeleteEvent**](SWGManagerApi.md#managerdeleteevent) | **DELETE** /managerApi/v1/deleteEvent | Edit &amp; Add Event
[**managerDeleteEventHead**](SWGManagerApi.md#managerdeleteeventhead) | **DELETE** /managerApi/v1/deleteEventHead | Delete Event Head
[**managerDeleteManager**](SWGManagerApi.md#managerdeletemanager) | **DELETE** /managerApi/v1/deleteManager | Delete Manager
[**managerDeletePR**](SWGManagerApi.md#managerdeletepr) | **DELETE** /managerApi/v1/deletePR | Delete PR if Amount collected &#x3D; 0
[**managerEditCategory**](SWGManagerApi.md#managereditcategory) | **POST** /managerApi/v1/editCategory | Edit &amp; Add Event
[**managerEditEvent**](SWGManagerApi.md#managereditevent) | **POST** /managerApi/v1/editEvent | Edit &amp; Add Event
[**managerEditMainListing**](SWGManagerApi.md#managereditmainlisting) | **PUT** /managerApi/v1/editMainListing | Edit Main Event
[**managerGetEvent**](SWGManagerApi.md#managergetevent) | **GET** /managerApi/v1/getEvent | get a event by event id
[**managerGetEventCategories**](SWGManagerApi.md#managergeteventcategories) | **GET** /managerApi/v1/getEventCategories | get a categories under a main event
[**managerGetEventCategory**](SWGManagerApi.md#managergeteventcategory) | **GET** /managerApi/v1/getEventCategory | get a category by id
[**managerGetEventHeads**](SWGManagerApi.md#managergeteventheads) | **GET** /managerApi/v1/getEventHeads | get Event Heads for Event
[**managerGetEvents**](SWGManagerApi.md#managergetevents) | **GET** /managerApi/v1/getEvents | get a events under a category
[**managerGetHistory**](SWGManagerApi.md#managergethistory) | **GET** /managerApi/v1/getHistory | Get Main Event History
[**managerGetMainListing**](SWGManagerApi.md#managergetmainlisting) | **GET** /managerApi/v1/getMainListing | get a single Main Event
[**managerGetManagers**](SWGManagerApi.md#managergetmanagers) | **GET** /managerApi/v1/getManagers | get Managers for main event
[**managerGetPRS**](SWGManagerApi.md#managergetprs) | **GET** /managerApi/v1/getPRS | get PRs for main event
[**managerGetStats**](SWGManagerApi.md#managergetstats) | **GET** /managerApi/v1/getStats | Delete Main Event Stats


# **managerAddEventHead**
```objc
-(NSURLSessionTask*) managerAddEventHeadWithEhEmail: (NSString*) ehEmail
    eventID: (NSNumber*) eventID
        completionHandler: (void (^)(SWGEventHead* output, NSError* error)) handler;
```

Add Event Head to Event

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: GoogleAuth)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Authorization"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Authorization"];


NSString* ehEmail = @"ehEmail_example"; // 
NSNumber* eventID = @789; // 

SWGManagerApi*apiInstance = [[SWGManagerApi alloc] init];

// Add Event Head to Event
[apiInstance managerAddEventHeadWithEhEmail:ehEmail
              eventID:eventID
          completionHandler: ^(SWGEventHead* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGManagerApi->managerAddEventHead: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ehEmail** | **NSString***|  | 
 **eventID** | **NSNumber***|  | 

### Return type

[**SWGEventHead***](SWGEventHead.md)

### Authorization

[GoogleAuth](../README.md#GoogleAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **managerAddManager**
```objc
-(NSURLSessionTask*) managerAddManagerWithManageremail: (NSString*) manageremail
    mainEventId: (NSNumber*) mainEventId
        completionHandler: (void (^)(SWGManager* output, NSError* error)) handler;
```

Add Manager to Main Event

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: GoogleAuth)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Authorization"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Authorization"];


NSString* manageremail = @"manageremail_example"; // 
NSNumber* mainEventId = @789; // 

SWGManagerApi*apiInstance = [[SWGManagerApi alloc] init];

// Add Manager to Main Event
[apiInstance managerAddManagerWithManageremail:manageremail
              mainEventId:mainEventId
          completionHandler: ^(SWGManager* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGManagerApi->managerAddManager: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **manageremail** | **NSString***|  | 
 **mainEventId** | **NSNumber***|  | 

### Return type

[**SWGManager***](SWGManager.md)

### Authorization

[GoogleAuth](../README.md#GoogleAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **managerAddPR**
```objc
-(NSURLSessionTask*) managerAddPRWithPRemail: (NSString*) pRemail
    mainEventId: (NSNumber*) mainEventId
        completionHandler: (void (^)(SWGPRRepresentative* output, NSError* error)) handler;
```

Add PR Representative to Main Event

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: GoogleAuth)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Authorization"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Authorization"];


NSString* pRemail = @"pRemail_example"; // 
NSNumber* mainEventId = @789; // 

SWGManagerApi*apiInstance = [[SWGManagerApi alloc] init];

// Add PR Representative to Main Event
[apiInstance managerAddPRWithPRemail:pRemail
              mainEventId:mainEventId
          completionHandler: ^(SWGPRRepresentative* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGManagerApi->managerAddPR: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **pRemail** | **NSString***|  | 
 **mainEventId** | **NSNumber***|  | 

### Return type

[**SWGPRRepresentative***](SWGPRRepresentative.md)

### Authorization

[GoogleAuth](../README.md#GoogleAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **managerAnnounceAll**
```objc
-(NSURLSessionTask*) managerAnnounceAllWithMainEventID: (NSNumber*) mainEventID
    message: (NSString*) message
        completionHandler: (void (^)(NSError* error)) handler;
```

Send Announcements to everyone

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: GoogleAuth)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Authorization"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Authorization"];


NSNumber* mainEventID = @789; // 
NSString* message = @"message_example"; // 

SWGManagerApi*apiInstance = [[SWGManagerApi alloc] init];

// Send Announcements to everyone
[apiInstance managerAnnounceAllWithMainEventID:mainEventID
              message:message
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGManagerApi->managerAnnounceAll: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **mainEventID** | **NSNumber***|  | 
 **message** | **NSString***|  | 

### Return type

void (empty response body)

### Authorization

[GoogleAuth](../README.md#GoogleAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **managerAnnounceIAMINers**
```objc
-(NSURLSessionTask*) managerAnnounceIAMINersWithMainEventId: (NSNumber*) mainEventId
    message: (NSString*) message
        completionHandler: (void (^)(NSError* error)) handler;
```

Send Announcements to iaminer's only

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: GoogleAuth)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Authorization"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Authorization"];


NSNumber* mainEventId = @789; // 
NSString* message = @"message_example"; // 

SWGManagerApi*apiInstance = [[SWGManagerApi alloc] init];

// Send Announcements to iaminer's only
[apiInstance managerAnnounceIAMINersWithMainEventId:mainEventId
              message:message
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGManagerApi->managerAnnounceIAMINers: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **mainEventId** | **NSNumber***|  | 
 **message** | **NSString***|  | 

### Return type

void (empty response body)

### Authorization

[GoogleAuth](../README.md#GoogleAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **managerAnnounceTicketHolders**
```objc
-(NSURLSessionTask*) managerAnnounceTicketHoldersWithMainEventId: (NSNumber*) mainEventId
    message: (NSString*) message
        completionHandler: (void (^)(NSError* error)) handler;
```

Send Announcements to ticket holders only

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: GoogleAuth)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Authorization"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Authorization"];


NSNumber* mainEventId = @789; // 
NSString* message = @"message_example"; // 

SWGManagerApi*apiInstance = [[SWGManagerApi alloc] init];

// Send Announcements to ticket holders only
[apiInstance managerAnnounceTicketHoldersWithMainEventId:mainEventId
              message:message
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGManagerApi->managerAnnounceTicketHolders: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **mainEventId** | **NSNumber***|  | 
 **message** | **NSString***|  | 

### Return type

void (empty response body)

### Authorization

[GoogleAuth](../README.md#GoogleAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **managerDeleteCategory**
```objc
-(NSURLSessionTask*) managerDeleteCategoryWithCategoryID: (NSNumber*) categoryID
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete Category only if empty

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: GoogleAuth)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Authorization"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Authorization"];


NSNumber* categoryID = @789; // 

SWGManagerApi*apiInstance = [[SWGManagerApi alloc] init];

// Delete Category only if empty
[apiInstance managerDeleteCategoryWithCategoryID:categoryID
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGManagerApi->managerDeleteCategory: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **categoryID** | **NSNumber***|  | 

### Return type

void (empty response body)

### Authorization

[GoogleAuth](../README.md#GoogleAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **managerDeleteEvent**
```objc
-(NSURLSessionTask*) managerDeleteEventWithEventId: (NSNumber*) eventId
        completionHandler: (void (^)(NSError* error)) handler;
```

Edit & Add Event

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: GoogleAuth)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Authorization"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Authorization"];


NSNumber* eventId = @789; // 

SWGManagerApi*apiInstance = [[SWGManagerApi alloc] init];

// Edit & Add Event
[apiInstance managerDeleteEventWithEventId:eventId
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGManagerApi->managerDeleteEvent: %@", error);
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

# **managerDeleteEventHead**
```objc
-(NSURLSessionTask*) managerDeleteEventHeadWithEventID: (NSNumber*) eventID
    ehEmail: (NSString*) ehEmail
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete Event Head

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: GoogleAuth)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Authorization"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Authorization"];


NSNumber* eventID = @789; // 
NSString* ehEmail = @"ehEmail_example"; // 

SWGManagerApi*apiInstance = [[SWGManagerApi alloc] init];

// Delete Event Head
[apiInstance managerDeleteEventHeadWithEventID:eventID
              ehEmail:ehEmail
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGManagerApi->managerDeleteEventHead: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **eventID** | **NSNumber***|  | 
 **ehEmail** | **NSString***|  | 

### Return type

void (empty response body)

### Authorization

[GoogleAuth](../README.md#GoogleAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **managerDeleteManager**
```objc
-(NSURLSessionTask*) managerDeleteManagerWithMainEventId: (NSNumber*) mainEventId
    managerEmail: (NSString*) managerEmail
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete Manager

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: GoogleAuth)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Authorization"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Authorization"];


NSNumber* mainEventId = @789; // 
NSString* managerEmail = @"managerEmail_example"; // 

SWGManagerApi*apiInstance = [[SWGManagerApi alloc] init];

// Delete Manager
[apiInstance managerDeleteManagerWithMainEventId:mainEventId
              managerEmail:managerEmail
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGManagerApi->managerDeleteManager: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **mainEventId** | **NSNumber***|  | 
 **managerEmail** | **NSString***|  | 

### Return type

void (empty response body)

### Authorization

[GoogleAuth](../README.md#GoogleAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **managerDeletePR**
```objc
-(NSURLSessionTask*) managerDeletePRWithMainEventID: (NSNumber*) mainEventID
    prEmail: (NSString*) prEmail
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete PR if Amount collected = 0

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: GoogleAuth)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Authorization"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Authorization"];


NSNumber* mainEventID = @789; // 
NSString* prEmail = @"prEmail_example"; // 

SWGManagerApi*apiInstance = [[SWGManagerApi alloc] init];

// Delete PR if Amount collected = 0
[apiInstance managerDeletePRWithMainEventID:mainEventID
              prEmail:prEmail
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGManagerApi->managerDeletePR: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **mainEventID** | **NSNumber***|  | 
 **prEmail** | **NSString***|  | 

### Return type

void (empty response body)

### Authorization

[GoogleAuth](../README.md#GoogleAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **managerEditCategory**
```objc
-(NSURLSessionTask*) managerEditCategoryWithCategory: (SWGCategory*) category
        completionHandler: (void (^)(SWGCategory* output, NSError* error)) handler;
```

Edit & Add Event

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: GoogleAuth)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Authorization"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Authorization"];


SWGCategory* category = [[SWGCategory alloc] init]; // 

SWGManagerApi*apiInstance = [[SWGManagerApi alloc] init];

// Edit & Add Event
[apiInstance managerEditCategoryWithCategory:category
          completionHandler: ^(SWGCategory* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGManagerApi->managerEditCategory: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **category** | [**SWGCategory***](SWGCategory.md)|  | 

### Return type

[**SWGCategory***](SWGCategory.md)

### Authorization

[GoogleAuth](../README.md#GoogleAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **managerEditEvent**
```objc
-(NSURLSessionTask*) managerEditEventWithEvent: (SWGEvent*) event
        completionHandler: (void (^)(SWGEvent* output, NSError* error)) handler;
```

Edit & Add Event

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: GoogleAuth)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Authorization"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Authorization"];


SWGEvent* event = [[SWGEvent alloc] init]; // 

SWGManagerApi*apiInstance = [[SWGManagerApi alloc] init];

// Edit & Add Event
[apiInstance managerEditEventWithEvent:event
          completionHandler: ^(SWGEvent* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGManagerApi->managerEditEvent: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **event** | [**SWGEvent***](SWGEvent.md)|  | 

### Return type

[**SWGEvent***](SWGEvent.md)

### Authorization

[GoogleAuth](../README.md#GoogleAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **managerEditMainListing**
```objc
-(NSURLSessionTask*) managerEditMainListingWithMainEvent: (SWGMainEvent*) mainEvent
        completionHandler: (void (^)(NSError* error)) handler;
```

Edit Main Event

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: GoogleAuth)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Authorization"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Authorization"];


SWGMainEvent* mainEvent = [[SWGMainEvent alloc] init]; // 

SWGManagerApi*apiInstance = [[SWGManagerApi alloc] init];

// Edit Main Event
[apiInstance managerEditMainListingWithMainEvent:mainEvent
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGManagerApi->managerEditMainListing: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **mainEvent** | [**SWGMainEvent***](SWGMainEvent.md)|  | 

### Return type

void (empty response body)

### Authorization

[GoogleAuth](../README.md#GoogleAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **managerGetEvent**
```objc
-(NSURLSessionTask*) managerGetEventWithEventId: (NSNumber*) eventId
        completionHandler: (void (^)(SWGEvent* output, NSError* error)) handler;
```

get a event by event id

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: GoogleAuth)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Authorization"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Authorization"];


NSNumber* eventId = @789; // 

SWGManagerApi*apiInstance = [[SWGManagerApi alloc] init];

// get a event by event id
[apiInstance managerGetEventWithEventId:eventId
          completionHandler: ^(SWGEvent* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGManagerApi->managerGetEvent: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **eventId** | **NSNumber***|  | 

### Return type

[**SWGEvent***](SWGEvent.md)

### Authorization

[GoogleAuth](../README.md#GoogleAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **managerGetEventCategories**
```objc
-(NSURLSessionTask*) managerGetEventCategoriesWithMainEventID: (NSNumber*) mainEventID
        completionHandler: (void (^)(SWGInlineResponse2001* output, NSError* error)) handler;
```

get a categories under a main event

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: GoogleAuth)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Authorization"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Authorization"];


NSNumber* mainEventID = @789; // 

SWGManagerApi*apiInstance = [[SWGManagerApi alloc] init];

// get a categories under a main event
[apiInstance managerGetEventCategoriesWithMainEventID:mainEventID
          completionHandler: ^(SWGInlineResponse2001* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGManagerApi->managerGetEventCategories: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **mainEventID** | **NSNumber***|  | 

### Return type

[**SWGInlineResponse2001***](SWGInlineResponse2001.md)

### Authorization

[GoogleAuth](../README.md#GoogleAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **managerGetEventCategory**
```objc
-(NSURLSessionTask*) managerGetEventCategoryWithCategoryID: (NSNumber*) categoryID
        completionHandler: (void (^)(SWGCategory* output, NSError* error)) handler;
```

get a category by id

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: GoogleAuth)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Authorization"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Authorization"];


NSNumber* categoryID = @789; // 

SWGManagerApi*apiInstance = [[SWGManagerApi alloc] init];

// get a category by id
[apiInstance managerGetEventCategoryWithCategoryID:categoryID
          completionHandler: ^(SWGCategory* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGManagerApi->managerGetEventCategory: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **categoryID** | **NSNumber***|  | 

### Return type

[**SWGCategory***](SWGCategory.md)

### Authorization

[GoogleAuth](../README.md#GoogleAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **managerGetEventHeads**
```objc
-(NSURLSessionTask*) managerGetEventHeadsWithEventID: (NSNumber*) eventID
        completionHandler: (void (^)(SWGInlineResponse20010* output, NSError* error)) handler;
```

get Event Heads for Event

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: GoogleAuth)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Authorization"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Authorization"];


NSNumber* eventID = @789; // 

SWGManagerApi*apiInstance = [[SWGManagerApi alloc] init];

// get Event Heads for Event
[apiInstance managerGetEventHeadsWithEventID:eventID
          completionHandler: ^(SWGInlineResponse20010* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGManagerApi->managerGetEventHeads: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **eventID** | **NSNumber***|  | 

### Return type

[**SWGInlineResponse20010***](SWGInlineResponse20010.md)

### Authorization

[GoogleAuth](../README.md#GoogleAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **managerGetEvents**
```objc
-(NSURLSessionTask*) managerGetEventsWithCategoryID: (NSNumber*) categoryID
        completionHandler: (void (^)(SWGInlineResponse2002* output, NSError* error)) handler;
```

get a events under a category

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: GoogleAuth)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Authorization"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Authorization"];


NSNumber* categoryID = @789; // 

SWGManagerApi*apiInstance = [[SWGManagerApi alloc] init];

// get a events under a category
[apiInstance managerGetEventsWithCategoryID:categoryID
          completionHandler: ^(SWGInlineResponse2002* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGManagerApi->managerGetEvents: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **categoryID** | **NSNumber***|  | 

### Return type

[**SWGInlineResponse2002***](SWGInlineResponse2002.md)

### Authorization

[GoogleAuth](../README.md#GoogleAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **managerGetHistory**
```objc
-(NSURLSessionTask*) managerGetHistoryWithMaineventId: (NSNumber*) maineventId
        completionHandler: (void (^)(SWGInlineResponse2005* output, NSError* error)) handler;
```

Get Main Event History

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: GoogleAuth)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Authorization"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Authorization"];


NSNumber* maineventId = @789; // 

SWGManagerApi*apiInstance = [[SWGManagerApi alloc] init];

// Get Main Event History
[apiInstance managerGetHistoryWithMaineventId:maineventId
          completionHandler: ^(SWGInlineResponse2005* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGManagerApi->managerGetHistory: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **maineventId** | **NSNumber***|  | 

### Return type

[**SWGInlineResponse2005***](SWGInlineResponse2005.md)

### Authorization

[GoogleAuth](../README.md#GoogleAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **managerGetMainListing**
```objc
-(NSURLSessionTask*) managerGetMainListingWithMainEventId: (NSNumber*) mainEventId
        completionHandler: (void (^)(SWGMainEvent* output, NSError* error)) handler;
```

get a single Main Event

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: GoogleAuth)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Authorization"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Authorization"];


NSNumber* mainEventId = @789; // 

SWGManagerApi*apiInstance = [[SWGManagerApi alloc] init];

// get a single Main Event
[apiInstance managerGetMainListingWithMainEventId:mainEventId
          completionHandler: ^(SWGMainEvent* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGManagerApi->managerGetMainListing: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **mainEventId** | **NSNumber***|  | 

### Return type

[**SWGMainEvent***](SWGMainEvent.md)

### Authorization

[GoogleAuth](../README.md#GoogleAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **managerGetManagers**
```objc
-(NSURLSessionTask*) managerGetManagersWithMainEventId: (NSNumber*) mainEventId
        completionHandler: (void (^)(SWGInlineResponse2009* output, NSError* error)) handler;
```

get Managers for main event

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: GoogleAuth)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Authorization"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Authorization"];


NSNumber* mainEventId = @789; // 

SWGManagerApi*apiInstance = [[SWGManagerApi alloc] init];

// get Managers for main event
[apiInstance managerGetManagersWithMainEventId:mainEventId
          completionHandler: ^(SWGInlineResponse2009* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGManagerApi->managerGetManagers: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **mainEventId** | **NSNumber***|  | 

### Return type

[**SWGInlineResponse2009***](SWGInlineResponse2009.md)

### Authorization

[GoogleAuth](../README.md#GoogleAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **managerGetPRS**
```objc
-(NSURLSessionTask*) managerGetPRSWithMainEventId: (NSNumber*) mainEventId
        completionHandler: (void (^)(SWGInlineResponse2008* output, NSError* error)) handler;
```

get PRs for main event

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: GoogleAuth)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Authorization"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Authorization"];


NSNumber* mainEventId = @789; // 

SWGManagerApi*apiInstance = [[SWGManagerApi alloc] init];

// get PRs for main event
[apiInstance managerGetPRSWithMainEventId:mainEventId
          completionHandler: ^(SWGInlineResponse2008* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGManagerApi->managerGetPRS: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **mainEventId** | **NSNumber***|  | 

### Return type

[**SWGInlineResponse2008***](SWGInlineResponse2008.md)

### Authorization

[GoogleAuth](../README.md#GoogleAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **managerGetStats**
```objc
-(NSURLSessionTask*) managerGetStatsWithMainEventId: (NSNumber*) mainEventId
        completionHandler: (void (^)(SWGMainEventStats* output, NSError* error)) handler;
```

Delete Main Event Stats

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: GoogleAuth)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Authorization"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Authorization"];


NSNumber* mainEventId = @789; // 

SWGManagerApi*apiInstance = [[SWGManagerApi alloc] init];

// Delete Main Event Stats
[apiInstance managerGetStatsWithMainEventId:mainEventId
          completionHandler: ^(SWGMainEventStats* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGManagerApi->managerGetStats: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **mainEventId** | **NSNumber***|  | 

### Return type

[**SWGMainEventStats***](SWGMainEventStats.md)

### Authorization

[GoogleAuth](../README.md#GoogleAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

