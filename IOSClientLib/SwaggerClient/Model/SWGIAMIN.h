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


#import "SWGInlineResponse200.h"
#import "SWGInlineResponse2003Items.h"


@protocol SWGIAMIN
@end

@interface SWGIAMIN : SWGObject


@property(nonatomic) NSNumber* _id;

@property(nonatomic) NSString* appUserEmail;

@property(nonatomic) NSNumber* eventId;

@property(nonatomic) NSNumber* timeStamp;

@property(nonatomic) NSNumber* parentMainEventId;

@property(nonatomic) NSNumber* contactPreference;

@property(nonatomic) NSNumber* requestQuantity;

@property(nonatomic) SWGInlineResponse2003Items* event;

@property(nonatomic) SWGInlineResponse200* bearer;

@end
