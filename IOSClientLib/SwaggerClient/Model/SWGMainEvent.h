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




@protocol SWGMainEvent
@end

@interface SWGMainEvent : SWGObject


@property(nonatomic) NSNumber* _id;

@property(nonatomic) NSNumber* positionInList;

@property(nonatomic) NSString* name;

@property(nonatomic) NSString* _description;

@property(nonatomic) NSNumber* eventStart;

@property(nonatomic) NSNumber* eventEnd;

@property(nonatomic) NSString* managerEmail;
/* True if this Main Event has only one Category. [optional]
 */
@property(nonatomic) NSNumber* hasSingleCategory;
/* True if this Main Event has only one Leaf Level Event. [optional]
 */
@property(nonatomic) NSNumber* hasSingleEvent;

@property(nonatomic) NSNumber* singleEventId;

@property(nonatomic) NSNumber* singleCategoryId;

@property(nonatomic) NSNumber* isPublished;

@property(nonatomic) NSNumber* lat;

@property(nonatomic) NSNumber* lon;

@property(nonatomic) NSString* hashtag;

@property(nonatomic) NSNumber* isTrending;

@property(nonatomic) NSString* city;

@property(nonatomic) NSNumber* isPaytmEnabled;

@property(nonatomic) NSString* mainEventType;

@property(nonatomic) NSString* backdropUrl;

@end
