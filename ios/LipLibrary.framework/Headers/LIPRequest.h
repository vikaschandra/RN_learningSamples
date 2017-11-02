//
//  LIPRequest.h
//  LipLibrary
//
//  Created by Anuvandhana Selvaraj on 22/12/15.
//  Copyright © 2015 Anuvandhana Selvaraj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface LIPRequest : NSObject

@property (nonatomic, strong) NSString *emailID;
@property (nonatomic, strong) NSString *password;
@property (nonatomic, strong) NSString *clientID;
@property (nonatomic, strong) NSString *firstName;
@property (nonatomic, strong) NSString *lastName;
@property (nonatomic, strong) NSString *refreshToken;
@property (nonatomic, strong) NSString *accessToken;
@property (nonatomic, strong) NSString *baseURL;
@property (nonatomic, strong) NSString *lipNewPassword;
@property (nonatomic, strong) NSString *language;
@property (nonatomic, strong) NSDictionary *appClaim;
@property (nonatomic, strong) NSDictionary *emailOptIn;

@property (nonatomic) BOOL createAccount;
@property (nonatomic) BOOL verifyEmail;
@property (nonatomic) BOOL signOutAllSessions;

@property (nonatomic) BOOL isNonPersistentMode;
@property (nonatomic) BOOL isDoNotValidate;
@property (nonatomic) BOOL isHarmonyProInstaller;
@property (nonatomic) BOOL isChangePasswordReq;
@end
