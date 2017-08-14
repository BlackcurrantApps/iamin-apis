#import "SWGInlineResponse2002.h"

@implementation SWGInlineResponse2002

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
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:@{ @"trendingEvents": @"trendingEvents", @"collegeEvents": @"collegeEvents", @"clubEvents": @"clubEvents", @"concertEvents": @"concertEvents" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"trendingEvents", @"collegeEvents", @"clubEvents", @"concertEvents"];
  return [optionalProperties containsObject:propertyName];
}

@end
