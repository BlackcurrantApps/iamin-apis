#import <Foundation/Foundation.h>
#import "SWGAppPopup.h"
#import "SWGAppUser1.h"
#import "SWGAppUser2.h"
#import "SWGAppVersion.h"
#import "SWGEvent1.h"
#import "SWGIAMIN1.h"
#import "SWGInlineResponse200.h"
#import "SWGInlineResponse2001.h"
#import "SWGInlineResponse2002.h"
#import "SWGInlineResponse2003.h"
#import "SWGInlineResponse2004.h"
#import "SWGInlineResponse2005.h"
#import "SWGInlineResponse2006.h"
#import "SWGInlineResponse2007.h"
#import "SWGLocationContainer.h"
#import "SWGPaytmTransaction1.h"
#import "SWGSortedMainEvents1.h"
#import "SWGTicket1.h"
#import "SWGUserRoles1.h"
#import "SWGApi.h"

/**
* IAMIN API
* API Backend for the IAMIN App
*
* OpenAPI spec version: 1.0.0
* Contact: sanket@blackcurrantapps.com
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/



@interface SWGAppUserApi: NSObject <SWGApi>

extern NSString* kSWGAppUserApiErrorDomain;
extern NSInteger kSWGAppUserApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(SWGApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Register a new App User
/// 
///
/// @param appUser 
/// 
///  code:204 message:"OK"
///
/// @return 
-(NSURLSessionTask*) callRegisterWithAppUser: (SWGAppUser1*) appUser
    completionHandler: (void (^)(NSError* error)) handler;


/// Cast a vote
/// 
///
/// @param eventID 
/// @param candidateID 
/// 
///  code:200 message:"OK"
///
/// @return 
-(NSURLSessionTask*) castVoteWithEventID: (NSNumber*) eventID
    candidateID: (NSNumber*) candidateID
    completionHandler: (void (^)(NSError* error)) handler;


/// Delete IAMIN
/// 
///
/// @param eventId 
/// 
///  code:200 message:"OK"
///
/// @return 
-(NSURLSessionTask*) deleteIAMINWithEventId: (NSNumber*) eventId
    completionHandler: (void (^)(NSError* error)) handler;


/// Get the current application popup
/// 
///
/// 
///  code:200 message:"OK"
///
/// @return SWGAppPopup*
-(NSURLSessionTask*) getAppPopupWithCompletionHandler: 
    (void (^)(SWGAppPopup* output, NSError* error)) handler;


/// Register a new app user
/// 
///
/// 
///  code:200 message:"OK"
///
/// @return SWGAppVersion*
-(NSURLSessionTask*) getAppVersionWithCompletionHandler: 
    (void (^)(SWGAppVersion* output, NSError* error)) handler;


/// get categories inside a main-event
/// 
///
/// @param mainEventId 
/// 
///  code:200 message:"OK"
///
/// @return SWGInlineResponse2001*
-(NSURLSessionTask*) getCategoriesWithMainEventId: (NSNumber*) mainEventId
    completionHandler: (void (^)(SWGInlineResponse2001* output, NSError* error)) handler;


/// get Comments on a Event
/// 
///
/// @param eventID 
/// 
///  code:200 message:"OK"
///
/// @return SWGInlineResponse2006*
-(NSURLSessionTask*) getCommentsForEventWithEventID: (NSNumber*) eventID
    completionHandler: (void (^)(SWGInlineResponse2006* output, NSError* error)) handler;


/// get a single event inside a category
/// 
///
/// @param eventID 
/// 
///  code:200 message:"OK"
///
/// @return SWGEvent1*
-(NSURLSessionTask*) getEventWithEventID: (NSNumber*) eventID
    completionHandler: (void (^)(SWGEvent1* output, NSError* error)) handler;


/// get events inside a category
/// 
///
/// @param categoryId 
/// 
///  code:200 message:"OK"
///
/// @return SWGInlineResponse2002*
-(NSURLSessionTask*) getEventsWithCategoryId: (NSNumber*) categoryId
    completionHandler: (void (^)(SWGInlineResponse2002* output, NSError* error)) handler;


/// get history of transactions for a user
/// 
///
/// 
///  code:200 message:"OK"
///
/// @return SWGInlineResponse2005*
-(NSURLSessionTask*) getHistoryWithCompletionHandler: 
    (void (^)(SWGInlineResponse2005* output, NSError* error)) handler;


/// get by IAMIN ID
/// 
///
/// @param iaminID 
/// 
///  code:200 message:"OK"
///
/// @return SWGIAMIN1*
-(NSURLSessionTask*) getIAMINWithIaminID: (NSNumber*) iaminID
    completionHandler: (void (^)(SWGIAMIN1* output, NSError* error)) handler;


/// get iamins of a user
/// 
///
/// 
///  code:200 message:"OK"
///
/// @return SWGInlineResponse2003*
-(NSURLSessionTask*) getIAMINSWithCompletionHandler: 
    (void (^)(SWGInlineResponse2003* output, NSError* error)) handler;


/// get all published Main Events
/// 
///
/// 
///  code:200 message:"OK"
///
/// @return SWGSortedMainEvents1*
-(NSURLSessionTask*) getMainListingsWithCompletionHandler: 
    (void (^)(SWGSortedMainEvents1* output, NSError* error)) handler;


/// Get offers displayed on the app
/// 
///
/// 
///  code:200 message:"OK"
///
/// @return SWGInlineResponse200*
-(NSURLSessionTask*) getOffersWithCompletionHandler: 
    (void (^)(SWGInlineResponse200* output, NSError* error)) handler;


/// get prs for a event along with their locations
/// 
///
/// @param mainEventID 
/// 
///  code:200 message:"OK"
///
/// @return SWGLocationContainer*
-(NSURLSessionTask*) getPRLocationsWithMainEventID: (NSNumber*) mainEventID
    completionHandler: (void (^)(SWGLocationContainer* output, NSError* error)) handler;


/// get sorted Main Events
/// 
///
/// @param city 
/// 
///  code:200 message:"OK"
///
/// @return SWGSortedMainEvents1*
-(NSURLSessionTask*) getSortedMainListingsWithCity: (NSString*) city
    completionHandler: (void (^)(SWGSortedMainEvents1* output, NSError* error)) handler;


/// get Tickets of a user
/// 
///
/// @param ticketID 
/// 
///  code:200 message:"OK"
///
/// @return SWGTicket1*
-(NSURLSessionTask*) getTicketWithTicketID: (NSNumber*) ticketID
    completionHandler: (void (^)(SWGTicket1* output, NSError* error)) handler;


/// get Tickets of a user
/// 
///
/// 
///  code:200 message:"OK"
///
/// @return SWGInlineResponse2004*
-(NSURLSessionTask*) getTicketsWithCompletionHandler: 
    (void (^)(SWGInlineResponse2004* output, NSError* error)) handler;


/// Get registered app user
/// 
///
/// 
///  code:200 message:"OK"
///
/// @return SWGAppUser2*
-(NSURLSessionTask*) getUserWithCompletionHandler: 
    (void (^)(SWGAppUser2* output, NSError* error)) handler;


/// get priviledges for a user
/// 
///
/// 
///  code:200 message:"OK"
///
/// @return SWGUserRoles1*
-(NSURLSessionTask*) getUserRolesWithCompletionHandler: 
    (void (^)(SWGUserRoles1* output, NSError* error)) handler;


/// get Voting candidates on a event if enabled
/// 
///
/// @param eventID 
/// 
///  code:200 message:"OK"
///
/// @return SWGInlineResponse2007*
-(NSURLSessionTask*) getVotingCandidatesWithEventID: (NSNumber*) eventID
    completionHandler: (void (^)(SWGInlineResponse2007* output, NSError* error)) handler;


/// IAMIN in an event
/// 
///
/// @param eventId 
/// 
///  code:200 message:"OK"
///
/// @return SWGIAMIN1*
-(NSURLSessionTask*) iaminWithEventId: (NSNumber*) eventId
    completionHandler: (void (^)(SWGIAMIN1* output, NSError* error)) handler;


/// Initialize a paytm transaction
/// Call this before making any payment
///
/// @param eventId 
/// @param cellNo 
/// @param quantity 
/// 
///  code:200 message:"OK"
///
/// @return SWGPaytmTransaction1*
-(NSURLSessionTask*) initializePaytmTransactionWithEventId: (NSNumber*) eventId
    cellNo: (NSString*) cellNo
    quantity: (NSNumber*) quantity
    completionHandler: (void (^)(SWGPaytmTransaction1* output, NSError* error)) handler;


/// Initialize a paytm transaction
/// Call this before making any payment
///
/// @param orderID 
/// 
///  code:200 message:"OK"
///
/// @return SWGTicket1*
-(NSURLSessionTask*) paytmTransactionSuccessWithOrderID: (NSString*) orderID
    completionHandler: (void (^)(SWGTicket1* output, NSError* error)) handler;


/// Post comment on a event
/// 
///
/// @param eventID 
/// @param message 
/// 
///  code:200 message:"OK"
///
/// @return 
-(NSURLSessionTask*) postCommentWithEventID: (NSNumber*) eventID
    message: (NSString*) message
    completionHandler: (void (^)(NSError* error)) handler;


/// post feedback on a event
/// 
///
/// @param eventID 
/// @param message 
/// @param rating  (optional)
/// 
///  code:200 message:"OK"
///
/// @return 
-(NSURLSessionTask*) postEventFeedbackWithEventID: (NSNumber*) eventID
    message: (NSString*) message
    rating: (NSNumber*) rating
    completionHandler: (void (^)(NSError* error)) handler;


/// Set quantity of tickets wanted
/// 
///
/// @param iaminId 
/// @param quantity 
/// 
///  code:200 message:"OK"
///
/// @return SWGIAMIN1*
-(NSURLSessionTask*) setIaminQuantityWithIaminId: (NSNumber*) iaminId
    quantity: (NSNumber*) quantity
    completionHandler: (void (^)(SWGIAMIN1* output, NSError* error)) handler;


/// Transfer your ticket
/// Transfering ticket can be enabled/disabled in the manager console
///
/// @param ticketId 
/// @param transferToEmail 
/// @param transferToCell 
/// @param transferQuantity 
/// 
///  code:200 message:"OK"
///
/// @return 
-(NSURLSessionTask*) transferTicketWithTicketId: (NSNumber*) ticketId
    transferToEmail: (NSString*) transferToEmail
    transferToCell: (NSString*) transferToCell
    transferQuantity: (NSNumber*) transferQuantity
    completionHandler: (void (^)(NSError* error)) handler;


/// update contact preferences on an iamin
/// set whether or not the user wants to share contact details.
///
/// @param iaminId 
/// @param canContact 
/// 
///  code:200 message:"OK"
///
/// @return SWGIAMIN1*
-(NSURLSessionTask*) updateContactPreferenceWithIaminId: (NSNumber*) iaminId
    canContact: (NSString*) canContact
    completionHandler: (void (^)(SWGIAMIN1* output, NSError* error)) handler;



@end
