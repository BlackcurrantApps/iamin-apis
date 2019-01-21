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


#import "SWGTicket.h"
@protocol SWGTicket;
@class SWGTicket;



@protocol SWGInlineResponse2004
@end

@interface SWGInlineResponse2004 : SWGObject


@property(nonatomic) NSArray<SWGTicket>* items;

@end
