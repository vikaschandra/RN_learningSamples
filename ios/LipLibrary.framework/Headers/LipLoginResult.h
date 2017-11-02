//
//  LipLoginResult.h
//  LipLibrary
//
//  Created by Anuvandhana Selvaraj on 21/12/15.
//  Copyright © 2015 Anuvandhana Selvaraj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface LipLoginResult : NSObject
@property (nonatomic, strong) NSString *accessToken;
@property (nonatomic, strong) NSString *idToken;
@property (nonatomic, strong) NSString *responseStatus;
@property (nonatomic, strong) NSDictionary *responseData;
@property (nonatomic, strong) NSString *userName;
@property (nonatomic, strong) NSString *password;
@property (nonatomic, strong) NSString *pictureUrl;
@property (nonatomic, strong) NSString *providerId;
@property (nonatomic, strong) NSString *socialAccessToken;
@property (nonatomic, strong) NSString *socialIdToken;

@property (nonatomic) BOOL isEmailOptInSelected;
@property (nonatomic) BOOL emailStatus;
@property (nonatomic) BOOL resetPassword;
@property (nonatomic) BOOL isSocialAccount;
@end
