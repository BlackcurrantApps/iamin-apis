#import "SWGTicket1.h"

@implementation SWGTicket1

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
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:@{ @"_id": @"id", @"appUserEmail": @"appUserEmail", @"eventId": @"eventId", @"timeStamp": @"timeStamp", @"pREmail": @"PREmail", @"activeQuantity": @"activeQuantity", @"checkedInQuantity": @"checkedInQuantity", @"parentMainEventId": @"parentMainEventId", @"event": @"event", @"bearer": @"bearer" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"_id", @"appUserEmail", @"eventId", @"timeStamp", @"pREmail", @"activeQuantity", @"checkedInQuantity", @"parentMainEventId", @"event", @"bearer"];
  return [optionalProperties containsObject:propertyName];
}

@end
