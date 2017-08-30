#import "SWGInlineResponse2004Items.h"

@implementation SWGInlineResponse2004Items

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
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:@{ @"_id": @"id", @"name": @"name", @"_description": @"description", @"entryFee": @"entryFee", @"parentMainEventId": @"parentMainEventId", @"parentCategoryId": @"parentCategoryId", @"multipleTicketsPerUser": @"multipleTicketsPerUser", @"groupSize": @"groupSize", @"registrable": @"registrable", @"startTime": @"startTime", @"isVotingEnabled": @"isVotingEnabled", @"intrestType": @"intrestType", @"isEventTicketTransferable": @"isEventTicketTransferable", @"backdropUrl": @"backdropUrl", @"currentInvolvement": @"currentInvolvement", @"isCurrentUserIAMINED": @"isCurrentUserIAMINED", @"isCurrentUserHavingTicket": @"isCurrentUserHavingTicket", @"condensedHead": @"condensedHead" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"_id", @"name", @"_description", @"entryFee", @"parentMainEventId", @"parentCategoryId", @"multipleTicketsPerUser", @"groupSize", @"registrable", @"startTime", @"isVotingEnabled", @"intrestType", @"isEventTicketTransferable", @"backdropUrl", @"currentInvolvement", @"isCurrentUserIAMINED", @"isCurrentUserHavingTicket", @"condensedHead"];
  return [optionalProperties containsObject:propertyName];
}

@end
