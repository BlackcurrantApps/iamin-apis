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





@protocol SWGPaytmTransaction
@end

@interface SWGPaytmTransaction : SWGObject


@property(nonatomic) NSString* oRDERID;

@property(nonatomic) NSNumber* gENERATETIMESTAMP;

@property(nonatomic) NSNumber* tXNAMOUNT;

@property(nonatomic) NSString* mOBILENO;

@property(nonatomic) NSString* eMAIL;

@property(nonatomic) NSNumber* ticketQuantity;

@property(nonatomic) NSNumber* eventId;

@property(nonatomic) NSNumber* isTicketIssued;

@property(nonatomic) NSString* status;

@property(nonatomic) NSString* mID;

@property(nonatomic) NSString* cHANNELID;

@property(nonatomic) NSString* iNDUSTRYTYPEID;

@property(nonatomic) NSString* wEBSITE;

@property(nonatomic) NSString* cUSTID;

@property(nonatomic) NSString* cALLBACKURL;

@property(nonatomic) NSString* cHECKSUMGENERATORURL;

@property(nonatomic) NSString* cHECKSUMVERIFYURL;

@property(nonatomic) NSString* cHECKSUMHASH;

@end
