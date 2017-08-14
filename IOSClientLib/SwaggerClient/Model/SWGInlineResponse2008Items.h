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




@protocol SWGInlineResponse2008Items
@end

@interface SWGInlineResponse2008Items : SWGObject


@property(nonatomic) NSNumber* _id;

@property(nonatomic) NSNumber* timeStamp;

@property(nonatomic) NSNumber* eventID;

@property(nonatomic) NSString* senderEmail;

@property(nonatomic) NSString* message;

@property(nonatomic) NSString* senderProfilePic;

@property(nonatomic) NSString* senderName;

@property(nonatomic) NSNumber* isSenderManager;

@property(nonatomic) NSNumber* isSenderEventHead;

@end