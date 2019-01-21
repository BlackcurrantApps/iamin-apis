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





@protocol SWGCategory
@end

@interface SWGCategory : SWGObject


@property(nonatomic) NSNumber* _id;

@property(nonatomic) NSString* name;

@property(nonatomic) NSNumber* parentMainEventId;

@property(nonatomic) NSNumber* isdefault;

@property(nonatomic) NSNumber* isHidden;

@property(nonatomic) NSString* backdropUrl;

@property(nonatomic) NSNumber* condenseEvents;

@end
