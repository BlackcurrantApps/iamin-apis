#import <Foundation/Foundation.h>
#import "SWGObject.h"

/**
* IAMIN API
* API Backend for the IAMIN App
*
* OpenAPI spec version: 1.0.0
* Contact: sanket@blackcurrantapps.com
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/





@protocol SWGEventLog
@end

@interface SWGEventLog : SWGObject


@property(nonatomic) NSNumber* _id;

@property(nonatomic) NSString* appUserEmail;

@property(nonatomic) NSString* staffEmail;

@property(nonatomic) NSNumber* mainEventListingId;

@property(nonatomic) NSNumber* eventId;

@property(nonatomic) NSNumber* timeStamp;

@property(nonatomic) NSString* paytmOrderId;

@property(nonatomic) NSNumber* quantity;

@property(nonatomic) NSNumber* amount;

@property(nonatomic) NSString* mainEventListingName;

@property(nonatomic) NSString* eventName;

@property(nonatomic) NSString* action;

@property(nonatomic) NSString* remark;

@end
