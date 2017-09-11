#import "SWGPaytmTransaction1.h"

@implementation SWGPaytmTransaction1

- (instancetype)init {
  self = [super init];
  if (self) {
    // initialize property's default value, if any
    
  }
  return self;
}


/**
 * Maps json key to property name.
 * This method is used by `JSONModel`.
 */
+ (JSONKeyMapper *)keyMapper {
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:@{ @"oRDERID": @"ORDER_ID", @"gENERATETIMESTAMP": @"GENERATE_TIMESTAMP", @"tXNAMOUNT": @"TXN_AMOUNT", @"mOBILENO": @"MOBILE_NO", @"eMAIL": @"EMAIL", @"ticketQuantity": @"ticketQuantity", @"eventId": @"eventId", @"isTicketIssued": @"isTicketIssued", @"status": @"status", @"mID": @"MID", @"cHANNELID": @"CHANNEL_ID", @"iNDUSTRYTYPEID": @"INDUSTRY_TYPE_ID", @"wEBSITE": @"WEBSITE", @"cUSTID": @"CUST_ID", @"cALLBACKURL": @"CALLBACK_URL", @"cHECKSUMGENERATORURL": @"CHECKSUM_GENERATOR_URL", @"cHECKSUMVERIFYURL": @"CHECKSUM_VERIFY_URL" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"oRDERID", @"gENERATETIMESTAMP", @"tXNAMOUNT", @"mOBILENO", @"eMAIL", @"ticketQuantity", @"eventId", @"isTicketIssued", @"status", @"mID", @"cHANNELID", @"iNDUSTRYTYPEID", @"wEBSITE", @"cUSTID", @"cALLBACKURL", @"cHECKSUMGENERATORURL", @"cHECKSUMVERIFYURL"];
  return [optionalProperties containsObject:propertyName];
}

@end
