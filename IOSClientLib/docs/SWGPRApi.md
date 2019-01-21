# SWGPRApi

All URIs are relative to *https://iamin-events.appspot.com/_ah/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**prCheckInByEmail**](SWGPRApi.md#prcheckinbyemail) | **POST** /prApi/v1/checkInByEmail | Check in User
[**prCheckInByTicketId**](SWGPRApi.md#prcheckinbyticketid) | **POST** /prApi/v1/checkInByTicketId | Check in User
[**prGetEventList**](SWGPRApi.md#prgeteventlist) | **GET** /prApi/v1/getEventList | get Events
[**prGetHistory**](SWGPRApi.md#prgethistory) | **GET** /prApi/v1/getHistory | get History
[**prGetIAMIN**](SWGPRApi.md#prgetiamin) | **GET** /prApi/v1/getIAMIN | get IAMIN
[**prGetIAMINers**](SWGPRApi.md#prgetiaminers) | **GET** /prApi/v1/getIAMINers | get IAMINers for the main event sharing contacts
[**prGetIaminByEmail**](SWGPRApi.md#prgetiaminbyemail) | **GET** /prApi/v1/getIaminByEmail | get IAMIN
[**prGetPRRepresentative**](SWGPRApi.md#prgetprrepresentative) | **GET** /prApi/v1/getPRRepresentative | get Self Profile
[**prGetStats**](SWGPRApi.md#prgetstats) | **GET** /prApi/v1/getStats | get Stats
[**prGetTicketById**](SWGPRApi.md#prgetticketbyid) | **GET** /prApi/v1/getTicketById | get Ticket
[**prGiveTicketByEmailAndCell**](SWGPRApi.md#prgiveticketbyemailandcell) | **POST** /prApi/v1/giveTicketByEmailAndCell | give Ticket
[**prGiveTicketbyIaminId**](SWGPRApi.md#prgiveticketbyiaminid) | **POST** /prApi/v1/giveTicketbyIaminId | give Ticket
[**prUpdateLocation**](SWGPRApi.md#prupdatelocation) | **PUT** /prApi/v1/UpdateLocation | update location shown on the map to buyers


# **prCheckInByEmail**
```objc
-(NSURLSessionTask*) prCheckInByEmailWithEmail: (NSString*) email
    eventId: (NSNumber*) eventId
    quantity: (NSNumber*) quantity
        completionHandler: (void (^)(SWGEventLog* output, NSError* error)) handler;
```

Check in User

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: GoogleAuth)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Authorization"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Authorization"];


NSString* email = @"email_example"; // 
NSNumber* eventId = @789; // 
NSNumber* quantity = @56; // 

SWGPRApi*apiInstance = [[SWGPRApi alloc] init];

// Check in User
[apiInstance prCheckInByEmailWithEmail:email
              eventId:eventId
              quantity:quantity
          completionHandler: ^(SWGEventLog* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGPRApi->prCheckInByEmail: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **email** | **NSString***|  | 
 **eventId** | **NSNumber***|  | 
 **quantity** | **NSNumber***|  | 

### Return type

[**SWGEventLog***](SWGEventLog.md)

### Authorization

[GoogleAuth](../README.md#GoogleAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **prCheckInByTicketId**
```objc
-(NSURLSessionTask*) prCheckInByTicketIdWithTicketID: (NSNumber*) ticketID
    quantity: (NSNumber*) quantity
        completionHandler: (void (^)(SWGEventLog* output, NSError* error)) handler;
```

Check in User

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: GoogleAuth)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Authorization"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Authorization"];


NSNumber* ticketID = @789; // 
NSNumber* quantity = @56; // 

SWGPRApi*apiInstance = [[SWGPRApi alloc] init];

// Check in User
[apiInstance prCheckInByTicketIdWithTicketID:ticketID
              quantity:quantity
          completionHandler: ^(SWGEventLog* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGPRApi->prCheckInByTicketId: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ticketID** | **NSNumber***|  | 
 **quantity** | **NSNumber***|  | 

### Return type

[**SWGEventLog***](SWGEventLog.md)

### Authorization

[GoogleAuth](../README.md#GoogleAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **prGetEventList**
```objc
-(NSURLSessionTask*) prGetEventListWithMainEventID: (NSNumber*) mainEventID
        completionHandler: (void (^)(SWGInlineResponse2002* output, NSError* error)) handler;
```

get Events

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: GoogleAuth)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Authorization"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Authorization"];


NSNumber* mainEventID = @789; // 

SWGPRApi*apiInstance = [[SWGPRApi alloc] init];

// get Events
[apiInstance prGetEventListWithMainEventID:mainEventID
          completionHandler: ^(SWGInlineResponse2002* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGPRApi->prGetEventList: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **mainEventID** | **NSNumber***|  | 

### Return type

[**SWGInlineResponse2002***](SWGInlineResponse2002.md)

### Authorization

[GoogleAuth](../README.md#GoogleAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **prGetHistory**
```objc
-(NSURLSessionTask*) prGetHistoryWithMaineventId: (NSNumber*) maineventId
        completionHandler: (void (^)(SWGInlineResponse2005* output, NSError* error)) handler;
```

get History

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: GoogleAuth)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Authorization"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Authorization"];


NSNumber* maineventId = @789; // 

SWGPRApi*apiInstance = [[SWGPRApi alloc] init];

// get History
[apiInstance prGetHistoryWithMaineventId:maineventId
          completionHandler: ^(SWGInlineResponse2005* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGPRApi->prGetHistory: %@", error);
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

# **prGetIAMIN**
```objc
-(NSURLSessionTask*) prGetIAMINWithIaminId: (NSNumber*) iaminId
        completionHandler: (void (^)(SWGIAMIN* output, NSError* error)) handler;
```

get IAMIN

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: GoogleAuth)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Authorization"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Authorization"];


NSNumber* iaminId = @789; // 

SWGPRApi*apiInstance = [[SWGPRApi alloc] init];

// get IAMIN
[apiInstance prGetIAMINWithIaminId:iaminId
          completionHandler: ^(SWGIAMIN* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGPRApi->prGetIAMIN: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **iaminId** | **NSNumber***|  | 

### Return type

[**SWGIAMIN***](SWGIAMIN.md)

### Authorization

[GoogleAuth](../README.md#GoogleAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **prGetIAMINers**
```objc
-(NSURLSessionTask*) prGetIAMINersWithMainEventid: (NSNumber*) mainEventid
        completionHandler: (void (^)(SWGInlineResponse2003* output, NSError* error)) handler;
```

get IAMINers for the main event sharing contacts

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: GoogleAuth)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Authorization"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Authorization"];


NSNumber* mainEventid = @789; // 

SWGPRApi*apiInstance = [[SWGPRApi alloc] init];

// get IAMINers for the main event sharing contacts
[apiInstance prGetIAMINersWithMainEventid:mainEventid
          completionHandler: ^(SWGInlineResponse2003* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGPRApi->prGetIAMINers: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **mainEventid** | **NSNumber***|  | 

### Return type

[**SWGInlineResponse2003***](SWGInlineResponse2003.md)

### Authorization

[GoogleAuth](../README.md#GoogleAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **prGetIaminByEmail**
```objc
-(NSURLSessionTask*) prGetIaminByEmailWithEmail: (NSString*) email
    eventId: (NSNumber*) eventId
    cellNo: (NSString*) cellNo
        completionHandler: (void (^)(SWGIAMIN* output, NSError* error)) handler;
```

get IAMIN

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: GoogleAuth)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Authorization"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Authorization"];


NSString* email = @"email_example"; // 
NSNumber* eventId = @789; // 
NSString* cellNo = @"cellNo_example"; // 

SWGPRApi*apiInstance = [[SWGPRApi alloc] init];

// get IAMIN
[apiInstance prGetIaminByEmailWithEmail:email
              eventId:eventId
              cellNo:cellNo
          completionHandler: ^(SWGIAMIN* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGPRApi->prGetIaminByEmail: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **email** | **NSString***|  | 
 **eventId** | **NSNumber***|  | 
 **cellNo** | **NSString***|  | 

### Return type

[**SWGIAMIN***](SWGIAMIN.md)

### Authorization

[GoogleAuth](../README.md#GoogleAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **prGetPRRepresentative**
```objc
-(NSURLSessionTask*) prGetPRRepresentativeWithMainEventid: (NSNumber*) mainEventid
        completionHandler: (void (^)(SWGPRRepresentative* output, NSError* error)) handler;
```

get Self Profile

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: GoogleAuth)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Authorization"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Authorization"];


NSNumber* mainEventid = @789; // 

SWGPRApi*apiInstance = [[SWGPRApi alloc] init];

// get Self Profile
[apiInstance prGetPRRepresentativeWithMainEventid:mainEventid
          completionHandler: ^(SWGPRRepresentative* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGPRApi->prGetPRRepresentative: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **mainEventid** | **NSNumber***|  | 

### Return type

[**SWGPRRepresentative***](SWGPRRepresentative.md)

### Authorization

[GoogleAuth](../README.md#GoogleAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **prGetStats**
```objc
-(NSURLSessionTask*) prGetStatsWithMainEventId: (NSNumber*) mainEventId
        completionHandler: (void (^)(SWGMainEventStats* output, NSError* error)) handler;
```

get Stats

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: GoogleAuth)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Authorization"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Authorization"];


NSNumber* mainEventId = @789; // 

SWGPRApi*apiInstance = [[SWGPRApi alloc] init];

// get Stats
[apiInstance prGetStatsWithMainEventId:mainEventId
          completionHandler: ^(SWGMainEventStats* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGPRApi->prGetStats: %@", error);
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

# **prGetTicketById**
```objc
-(NSURLSessionTask*) prGetTicketByIdWithTicketID: (NSNumber*) ticketID
        completionHandler: (void (^)(SWGTicket* output, NSError* error)) handler;
```

get Ticket

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: GoogleAuth)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Authorization"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Authorization"];


NSNumber* ticketID = @789; // 

SWGPRApi*apiInstance = [[SWGPRApi alloc] init];

// get Ticket
[apiInstance prGetTicketByIdWithTicketID:ticketID
          completionHandler: ^(SWGTicket* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGPRApi->prGetTicketById: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ticketID** | **NSNumber***|  | 

### Return type

[**SWGTicket***](SWGTicket.md)

### Authorization

[GoogleAuth](../README.md#GoogleAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **prGiveTicketByEmailAndCell**
```objc
-(NSURLSessionTask*) prGiveTicketByEmailAndCellWithEmail: (NSString*) email
    eventId: (NSNumber*) eventId
    quantity: (NSNumber*) quantity
    cellNo: (NSString*) cellNo
    remark: (NSString*) remark
        completionHandler: (void (^)(SWGTicket* output, NSError* error)) handler;
```

give Ticket

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: GoogleAuth)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Authorization"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Authorization"];


NSString* email = @"email_example"; // 
NSNumber* eventId = @789; // 
NSNumber* quantity = @56; // 
NSString* cellNo = @"cellNo_example"; // 
NSString* remark = @"remark_example"; // 

SWGPRApi*apiInstance = [[SWGPRApi alloc] init];

// give Ticket
[apiInstance prGiveTicketByEmailAndCellWithEmail:email
              eventId:eventId
              quantity:quantity
              cellNo:cellNo
              remark:remark
          completionHandler: ^(SWGTicket* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGPRApi->prGiveTicketByEmailAndCell: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **email** | **NSString***|  | 
 **eventId** | **NSNumber***|  | 
 **quantity** | **NSNumber***|  | 
 **cellNo** | **NSString***|  | 
 **remark** | **NSString***|  | 

### Return type

[**SWGTicket***](SWGTicket.md)

### Authorization

[GoogleAuth](../README.md#GoogleAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **prGiveTicketbyIaminId**
```objc
-(NSURLSessionTask*) prGiveTicketbyIaminIdWithIaminId: (NSNumber*) iaminId
    quantity: (NSNumber*) quantity
    remark: (NSString*) remark
        completionHandler: (void (^)(SWGTicket* output, NSError* error)) handler;
```

give Ticket

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: GoogleAuth)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Authorization"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Authorization"];


NSNumber* iaminId = @789; // 
NSNumber* quantity = @56; // 
NSString* remark = @"remark_example"; // 

SWGPRApi*apiInstance = [[SWGPRApi alloc] init];

// give Ticket
[apiInstance prGiveTicketbyIaminIdWithIaminId:iaminId
              quantity:quantity
              remark:remark
          completionHandler: ^(SWGTicket* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGPRApi->prGiveTicketbyIaminId: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **iaminId** | **NSNumber***|  | 
 **quantity** | **NSNumber***|  | 
 **remark** | **NSString***|  | 

### Return type

[**SWGTicket***](SWGTicket.md)

### Authorization

[GoogleAuth](../README.md#GoogleAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **prUpdateLocation**
```objc
-(NSURLSessionTask*) prUpdateLocationWithLat: (NSNumber*) lat
    lon: (NSNumber*) lon
        completionHandler: (void (^)(SWGPRRepresentative* output, NSError* error)) handler;
```

update location shown on the map to buyers

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: GoogleAuth)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Authorization"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Authorization"];


NSNumber* lat = @1.2; // 
NSNumber* lon = @1.2; // 

SWGPRApi*apiInstance = [[SWGPRApi alloc] init];

// update location shown on the map to buyers
[apiInstance prUpdateLocationWithLat:lat
              lon:lon
          completionHandler: ^(SWGPRRepresentative* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGPRApi->prUpdateLocation: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **lat** | **NSNumber***|  | 
 **lon** | **NSNumber***|  | 

### Return type

[**SWGPRRepresentative***](SWGPRRepresentative.md)

### Authorization

[GoogleAuth](../README.md#GoogleAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

