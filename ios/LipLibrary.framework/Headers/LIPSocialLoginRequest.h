//
//  LIPSocialLoginRequest.h
//  LipLibrary
//
//  Created by Anuvandhana Selvaraj on 22/12/15.
//  Copyright © 2015 Anuvandhana Selvaraj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface LIPSocialLoginRequest : NSObject

@property (nonatomic, strong) NSString *socialLoginProviderType;
@property (nonatomic, strong) NSString *socialLoginAccessToken;
@property (nonatomic, strong) NSString *socialLoginIdToken;

@end
