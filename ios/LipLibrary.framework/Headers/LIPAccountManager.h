//
//  LIPAccountManager.h
//  LipLibrary
//
//  Created by Anuvandhana Selvaraj on 24/11/15.
//  Copyright © 2015 Logitech. All rights reserved.
//

/* The comments provided are high level description of the methods. For detailed description please refer the document https://docs.google.com/document/d/1_4Lgbwdap14_ooB9U-gyLNcjtTSXaEgE-7TLVNqesEY/edit */

#import <Foundation/Foundation.h>
#import "LIPRequest.h"
#import "LIPSocialLoginRequest.h"
#import "LipInputParametersWithUI.h"
#import "LIPApiConstants.h"
#import "LIPBaseViewController.h"
#import "LIPCustomizationInputs.h"
#import "LIPInitializationInputs.h"

@protocol LIPAccountManagerDelegate;
@interface LIPAccountManager : NSObject<LIPLoginResultsDelegate>

@property (nonatomic, weak) id <LIPAccountManagerDelegate> delegate;


@property (nonatomic, weak) LipLoginResult *lipLoginResult;
@property (nonatomic, strong) LIPServerAuthenticationCompletionHandler completion;

+ (instancetype) sharedManager;



-(BOOL) isSocialAccount;

-(NSString*)socialProviderId;

/*!
 *  @abstract This method is used by the client to request Sign in. Internally it   constructs a LIPSignInManager object and invokes the authenticateSignInWithCompletionHandler: method.
 *
 *  @param userInfo       LIPRequest object that contains a dictionary of values to be sent to LIP.Should not be nil.
 *  @param completion The callback to be invoked when the response is received from LIP
 */
-(void)requestSignInWithUserInfo: (LIPRequest *)userInfo andCompletionHandler: (LIPServerAuthenticationCompletionHandler)completion;

/*!
 *  @abstract This method is used by the client to request Sign out. Internally it   constructs a LIPSignInManager object and invokes the authenticateSignOutForClient: method.
 *
 *  @param clientDetails       LIPRequest object that contains a dictionary of values to be sent to LIP.
 *  @param completion The callback to be invoked when the response is received from LIP
 */
-(void)requestSignOutWithClientDetails: (LIPRequest *)clientDetails andCompletionHandler: (LIPServerAuthenticationCompletionHandler)completion;

/*!
 *  @abstract This method is used by the client to request Social Login. Internally it   constructs a LIPSocialSignInManager object and invokes the authenticateSocialSignForClient: method.
 *
 *  @param userInfo       LIPRequest object that contains a dictionary of values to be sent to LIP.Should not be nil.
 *  @param loginInfo       LIPRequest object that contains the social login details. Should not be nil.
 *  @param completion The callback to be invoked when the response is received from LIP
 */
-(void)requestSocialLoginForClient: (LIPRequest*)userInfo WithLoginInfo: (LIPSocialLoginRequest *)loginInfo andCompletionHandler: (LIPServerAuthenticationCompletionHandler)completion;

/*!
 *  @abstract This method is used by the client to get the User Information.
 *
 *  @param completion The callback to be invoked when the response is received from LIP
 */
-(void)requestUserInfoWithCompletionHandler: (LIPServerAuthenticationCompletionHandler)completion;

/*!
 *  @abstract This method is used by the client to refresh the tokens.
 *
 *  @param completion The callback to be invoked when the response is received from LIP
 */
-(void)requestRefreshWithCompletionHandler: (LIPServerAuthenticationCompletionHandler)completion;

/*!
 *  @abstract This method sends an email to the email address associated with the identity to reset the password.
 *
 *  @param emailDetails       A dictionary of values that contains the email details. Should not be nil.
 *  @param completion The callback to be invoked when the response is received from LIP
 */
-(void)requestForgotPasswordLink: (LIPRequest *)emailDetails withCompletionHandler: (LIPServerAuthenticationCompletionHandler)completion;

/*!
 *  @abstract This method is used by the client to resend Email.
 *
 *  @param completion The callback to be invoked when the response is received from LIP
 */
-(void)requestResendEmailWithCompletionHandler: (LIPServerAuthenticationCompletionHandler)completion;

/*!
 *  @abstract This method is used by the client to change the claims like emailID, password, firstName ...
 *
 *  @param requestDetails       LIPRequest object that contains a dictionary of values that contains the claims to be changed. Should not be nil.
 
 *  @param completion The callback to be invoked when the response is received from LIP
 */
-(void)requestChangeClaimsWithRequestDetails: (LIPRequest *)requestDetails andCompletionHandler: (LIPServerAuthenticationCompletionHandler)completion;
/*!
 *  @abstract This method is used by the client to change the password.
 *
 *  @param requestDetails       LIPRequest object that contains a dictionary of values that contains the new password. Should not be nil.
 
 *  @param completion The callback to be invoked when the response is received from LIP
 */

-(void)requestChangePasswordWithRequestDetails: (LIPRequest *)requestDetails andCompletionHandler: (LIPServerAuthenticationCompletionHandler)completion;

/*!
 *  @abstract This method is used by the client to login to lip server using LIP SDK UI.
 *  @param viewcontroller    Viewcontroller on top of which lip ui will be presented. If nil the apps rootviewcontroller will be taken and presented on it.
 *  @param inputParameters       LipInputParametersWithUI object that contains the input parameters. Should not be nil.
 *  @param completion The callback to be invoked when the response is received from LIP
 */

-(void) loginToLipServerPresentingUIOnViewController: (UIViewController*)viewcontroller  withinputParameters: (LipInputParametersWithUI*) inputParameters andCompletionHandler: (LIPServerAuthenticationCompletionHandler)completion;

/*!
 *  @abstract This method is used by the client to get the tokens.

 *  @param completion The callback to be invoked when the response is received from LIP
 */
- (void)getTokens:(LIPServerAuthenticationCompletionHandler)completion;

-(void)setLipInitializationParameters: (LIPInitializationInputs *)inputs;
-(BOOL)isLIPInitialized;

/*!
 *  @abstract This method is used by the client to get the idToken and acessToken of the user.
 *
 *  @return reads from keychain if available or returns nil
 *
 * @param user emailId
 */

-(void)resetLIPDataForEmail:(NSString*)emailId;

/*!
 @abstract This method is used for reauthorising the social login before change password request
 */

-(void)reAuthroizeSocialAccount:(LIPRequest *)requestDetails withViewControler:(UIViewController*)viewController onAuthorizationSuccess:(LIPServerAuthenticationCompletionHandler) authorizationCompletion;

@end
@protocol LIPAccountManagerDelegate <NSObject>
/// Delegate Method called when the there is an error with LIP
- (void)lipAccountManager:(LIPAccountManager *)manager error:(LIPError *)error;
@end
