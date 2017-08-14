#import "SWGComment.h"

@implementation SWGComment

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
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:@{ @"_id": @"id", @"timeStamp": @"timeStamp", @"eventID": @"eventID", @"senderEmail": @"senderEmail", @"message": @"message", @"senderProfilePic": @"senderProfilePic", @"senderName": @"senderName", @"isSenderManager": @"isSenderManager", @"isSenderEventHead": @"isSenderEventHead" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"_id", @"timeStamp", @"eventID", @"senderEmail", @"message", @"senderProfilePic", @"senderName", @"isSenderManager", @"isSenderEventHead"];
  return [optionalProperties containsObject:propertyName];
}

@end
