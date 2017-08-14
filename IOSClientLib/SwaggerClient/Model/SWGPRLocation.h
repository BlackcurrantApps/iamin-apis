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


@protocol SWGPRLocation
@end

@interface SWGPRLocation : SWGObject


@property(nonatomic) NSNumber* lat;

@property(nonatomic) NSNumber* lon;

@property(nonatomic) SWGInlineResponse200* appUser;

@end