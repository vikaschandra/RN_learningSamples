//
//  LIPSocialLoginConstants.h
//  Logitech Harmony
//
//  Created by Nagaraju Varthala on 17/08/15.
//  Copyright (c) 2015 Logitech. All rights reserved.
//

#import <Foundation/Foundation.h>

//Social authentication providers such as Facebook, Google Plus.
typedef enum LIPSocialAuthenticationProvider : NSUInteger {
    LIPSocialAuthenticationProviderNone = 0,
    LIPSocialAuthenticationProviderGoogleSignIn,
    LIPSocialAuthenticationProviderFacebook,
}LIPSocialAuthenticationProvider;

//Error codes such as Email permission not granted in Facebook, for which Facebook don't return any error.
typedef enum LIPFacebookSocialAuthenticationError : NSUInteger {
    LIPFacebookSocialAuthenticationNone = 0,
    LIPFacebookSocialAuthenticationCancelledByUser,
    LIPFacebookSocialAuthenticationEmailPermissionNotGranted,
    LIPFacebookSocialAuthenticationCancelledByUserInSettings,
    LIPFacebookSocialAuthenticationEmailNotAssociated
}LIPFacebookSocialAuthenticationError;

#pragma mark Social Login Provider Constants
//Social Login Providers
extern NSString *const kLIPSocialLoginProviderFacebook;
extern NSString *const kLIPSocialLoginProviderGoogleSignIn;


//CompletionHandler block
typedef void(^LIPSocialAuthenticationCompletionHandler)(id response, id error);

//Facebook Permissions
extern NSString *const kFacebookPermissionPublicProfile;
extern NSString *const kFacebookPermissionEmail;

//LIP error domain
extern NSString *const kLIPSocialSignInFacebookErrorDomain;
extern NSString *const kLIPFacebookPermissionsEmailNotGrantedReason;
extern NSString *const kLIPFacebookEmailNotAssociatedReason;
extern NSString *const kLIPFacebookPermissionsEmailNotGrantedRecoveryMessage;
extern NSString *const kLIPFacebookPermissionsCancelledByUserReason;
extern NSString *const kLIPFacebookPermissionsCancelledByUserRecoveryMessage;
extern NSString *const kLIPFacebookPermissionsCancelledInSettingsReason;
extern NSString *const kLIPFacebookPermissionsCancelledInSettingsRecoveryMessage;
extern NSString *const kLIPFacebookPermissionsEmailNotAssociatedRecoveryMessage;


