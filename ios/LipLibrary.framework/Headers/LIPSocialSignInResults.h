//
//  LIPSocialSignInResults.h
//  Logitech Harmony
//
//  Created by Nagaraju Varthala on 17/08/15.
//  Copyright (c) 2015 Logitech. All rights reserved.
//

#import <Foundation/Foundation.h>

/*
 * @abstract This class is model for SocialSignIn response.
 */

@interface LIPSocialSignInResults : NSObject

@property (nonatomic, strong) NSString *accessToken;
@property (nonatomic, strong) NSString *idToken;
@property (nonatomic, strong) NSString *emailId;
@property (nonatomic, strong) NSString *provider;

@end
