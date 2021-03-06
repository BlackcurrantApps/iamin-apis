#import "SWGEventLog1.h"

@implementation SWGEventLog1

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
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:@{ @"_id": @"id", @"appUserEmail": @"appUserEmail", @"staffEmail": @"staffEmail", @"mainEventListingId": @"MainEventListingId", @"eventId": @"EventId", @"timeStamp": @"timeStamp", @"paytmOrderId": @"paytmOrderId", @"quantity": @"quantity", @"amount": @"Amount", @"mainEventListingName": @"MainEventListingName", @"eventName": @"EventName", @"action": @"action", @"remark": @"remark" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"_id", @"appUserEmail", @"staffEmail", @"mainEventListingId", @"eventId", @"timeStamp", @"paytmOrderId", @"quantity", @"amount", @"mainEventListingName", @"eventName", @"action", @"remark"];
  return [optionalProperties containsObject:propertyName];
}

@end
