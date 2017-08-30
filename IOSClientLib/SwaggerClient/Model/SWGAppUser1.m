#import "SWGAppUser1.h"

@implementation SWGAppUser1

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
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:@{ @"email": @"email", @"contactNo": @"contactNo", @"name": @"name", @"gender": @"gender", @"institution": @"Institution", @"city": @"city", @"intrests": @"intrests", @"profilePic": @"profilePic", @"regId": @"regId" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"email", @"contactNo", @"name", @"gender", @"institution", @"city", @"intrests", @"profilePic", @"regId"];
  return [optionalProperties containsObject:propertyName];
}

@end
