#import "SWGUserRoles1.h"

@implementation SWGUserRoles1

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
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:@{ @"isManagerForMainEvents": @"isManagerForMainEvents", @"isPrForEvents": @"isPrForEvents", @"isEventHeadForEvents": @"isEventHeadForEvents" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"isManagerForMainEvents", @"isPrForEvents", @"isEventHeadForEvents"];
  return [optionalProperties containsObject:propertyName];
}

@end
