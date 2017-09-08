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




@protocol SWGAppUser2
@end

@interface SWGAppUser2 : SWGObject

/* email id of the user [optional]
 */
@property(nonatomic) NSString* email;

@property(nonatomic) NSString* contactNo;

@property(nonatomic) NSString* name;
/* 1 for male 0 for female [optional]
 */
@property(nonatomic) NSNumber* gender;

@property(nonatomic) NSString* institution;

@property(nonatomic) NSString* city;

@property(nonatomic) NSArray<NSString*>* intrests;
/* url to the profile picture [optional]
 */
@property(nonatomic) NSString* profilePic;
/* Google Cloud Messaging Registration ID [optional]
 */
@property(nonatomic) NSString* regId;

@end
