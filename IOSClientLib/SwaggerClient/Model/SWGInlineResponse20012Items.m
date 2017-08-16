#import "SWGInlineResponse20012Items.h"

@implementation SWGInlineResponse20012Items

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
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:@{ @"_id": @"id", @"email": @"email", @"mainEventListingId": @"MainEventListingId", @"amountCollected": @"AmountCollected", @"lat": @"lat", @"lon": @"lon", @"locationUpdateTimestamp": @"locationUpdateTimestamp" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"_id", @"email", @"mainEventListingId", @"amountCollected", @"lat", @"lon", @"locationUpdateTimestamp"];
  return [optionalProperties containsObject:propertyName];
}

@end
