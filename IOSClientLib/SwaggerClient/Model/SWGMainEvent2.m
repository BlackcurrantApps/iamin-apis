#import "SWGMainEvent2.h"

@implementation SWGMainEvent2

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
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:@{ @"_id": @"id", @"positionInList": @"positionInList", @"name": @"name", @"_description": @"description", @"eventStart": @"eventStart", @"eventEnd": @"eventEnd", @"managerEmail": @"ManagerEmail", @"hasSingleCategory": @"hasSingleCategory", @"hasSingleEvent": @"hasSingleEvent", @"singleEventId": @"singleEventId", @"singleCategoryId": @"singleCategoryId", @"isPublished": @"isPublished", @"lat": @"lat", @"lon": @"lon", @"hashtag": @"hashtag", @"isTrending": @"isTrending", @"city": @"city", @"isPaytmEnabled": @"isPaytmEnabled", @"mainEventType": @"mainEventType", @"backdropUrl": @"backdropUrl" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"_id", @"positionInList", @"name", @"_description", @"eventStart", @"eventEnd", @"managerEmail", @"hasSingleCategory", @"hasSingleEvent", @"singleEventId", @"singleCategoryId", @"isPublished", @"lat", @"lon", @"hashtag", @"isTrending", @"city", @"isPaytmEnabled", @"mainEventType", @"backdropUrl"];
  return [optionalProperties containsObject:propertyName];
}

@end
