//
//  LIPApiConstants.h
//  LipLibrary
//
//  Created by Anuvandhana Selvaraj on 24/11/15.
//  Copyright © 2015 Logitech. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LipLoginResult.h"
#import "LIPError.h"

typedef void(^LIPSocialAuthenticationCompletionHandler)(id response, id error);

extern NSString *const kLIPBaseUrl;

extern NSString *const kLIPSignin;
extern NSString *const kLIPSignOut;
extern NSString *const kLIPUserinfo;
extern NSString *const kLIPRefresh;
extern NSString *const kLIPForgot;
extern NSString *const kLIPResend;
extern NSString *const kLIPChangeClaims;
extern NSString *const kLIPChangePassword;

//LIP Request Keys
extern NSString *const kLIPEmail;
extern NSString *const kChannelId;
extern NSString *const kLIPClientAccessToken;
extern NSString *const kLIPSocial;
extern NSString *const kLIPClientID;
extern NSString *const kHeaderAuthorization;
extern NSString *const kMethodPost;
extern NSString *const kMethodGet;
extern NSString *const kSignOutAll;
extern NSString *const kLIPRefreshToken;
extern NSString * const kLIPCreateAccount;
extern NSString * const kLIPFirstName;
extern NSString *const kLIPLastName;
extern NSString *const kLIPOldPassword;
extern NSString *const kLIPNewPassword;
extern NSString *const kLIPPicture;
extern NSString * const kLIPLanguage;

//LIP Response Keys
extern NSString * const kLIPResponseSocialProvider;
extern NSString * const kLIPResponseAccessToken;
extern NSString * const kLIPResponseIDToken;
extern NSString * const kLIPResponseEmailStatus;
extern NSString * const kLIPResponseResetPassword;
extern NSString * const kLIPResponseIsSocialAccount;
extern NSString * const kLIPResponseSocialAccessToken;
extern NSString * const kLIPResponseSocialIdToken;


//Social Provider
extern NSString * const kLIPSocialProviderFacebook;
extern NSString * const kLIPSocialProviderGoogle;

//LIP Error

extern NSString *const kLIPGoogleSignInErrorDomain;
//LIP Plist constants
extern NSString *const kGoogleSignInClientIdForLIP;

NS_ENUM(NSInteger)
{
    kLIPUserActionCancelled = -1,
    kLIPUserErrorMissingAppClaimPrefix = -1001,
    kLIPUserErrorMissingAppTermsOfUse =  -1002,
    kLIPUserErrorMissingPrivacyPolicy =  -1003,
    kLIPUserErrorMissingAppClientId =  -1004,
    kLIPUserErrorMissingAppBaseUrl =  -1005,
    kLIPRefreshtokenUnavailable    =  -1006,
};


extern NSString * const kPoliciesString ;

#define CUSTOM_NAVIGATION_VIEW_LEFT_BUTTON          11
#define CUSTOM_NAVIGATION_VIEW_RIGHT_BUTTON         22
#define CUSTOM_NAVIGATION_VIEW_RIGHT_INFO_BUTTON    33

//CompletionHandler block
typedef void(^LIPServerAuthenticationCompletionHandler)(LipLoginResult *response, LIPError *error);
typedef void(^LIPServicesCompletionHandler)(NSURLResponse *response, NSData *data, NSError *error);

//Error codes such as Google client Id missing in plist.
typedef enum LIPInputMissingError : NSUInteger {
    LIPGoogleSignInClientIdMissingInPlist = 11,
}LIPInputMissingError;

@interface LIPApiConstants : NSObject

@end
