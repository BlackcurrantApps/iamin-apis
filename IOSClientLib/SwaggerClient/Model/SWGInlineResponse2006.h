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


#import "SWGInlineResponse2003Items.h"
#import "SWGMainEvent1.h"


@protocol SWGInlineResponse2006
@end

@interface SWGInlineResponse2006 : SWGObject


@property(nonatomic) NSArray<SWGMainEvent1>* isManagerForMainEvents;

@property(nonatomic) NSArray<SWGMainEvent1>* isPrForEvents;

@property(nonatomic) NSArray<SWGInlineResponse2003Items>* isEventHeadForEvents;

@end