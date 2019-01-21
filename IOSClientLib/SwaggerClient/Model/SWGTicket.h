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


#import "SWGAppUser.h"
#import "SWGEvent.h"
@protocol SWGAppUser;
@class SWGAppUser;
@protocol SWGEvent;
@class SWGEvent;



@protocol SWGTicket
@end

@interface SWGTicket : SWGObject


@property(nonatomic) NSNumber* _id;

@property(nonatomic) NSString* appUserEmail;

@property(nonatomic) NSNumber* eventId;

@property(nonatomic) NSNumber* timeStamp;

@property(nonatomic) NSString* pREmail;

@property(nonatomic) NSNumber* activeQuantity;

@property(nonatomic) NSNumber* checkedInQuantity;

@property(nonatomic) NSNumber* parentMainEventId;

@property(nonatomic) SWGEvent* event;

@property(nonatomic) SWGAppUser* bearer;

@end
