#import "SWGOffer.h"

@implementation SWGOffer

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
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:@{ @"_id": @"id", @"offerType": @"offerType", @"name": @"name", @"positionInList": @"positionInList", @"creativeUrl": @"creativeUrl", @"callToActionText": @"callToActionText", @"redeemInstructions": @"redeemInstructions", @"coupounCode": @"coupounCode", @"callNumber": @"callNumber", @"smsText": @"smsText", @"url": @"url" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"_id", @"offerType", @"name", @"positionInList", @"creativeUrl", @"callToActionText", @"redeemInstructions", @"coupounCode", @"callNumber", @"smsText", @"url"];
  return [optionalProperties containsObject:propertyName];
}

@end
