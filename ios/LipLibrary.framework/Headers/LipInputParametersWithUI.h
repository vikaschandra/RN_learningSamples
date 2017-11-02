//
//  LipInputParametersWithUI.h
//  LipLibrary
//
//  Created by Anuvandhana Selvaraj on 30/12/15.
//  Copyright © 2015 Anuvandhana Selvaraj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LIPCustomizationInputs.h"

@interface LipInputParametersWithUI : NSObject

@property (nonatomic, strong) NSString *clientID;
@property (nonatomic, assign) BOOL isCreateAccount;
@property (nonatomic,assign) BOOL isVerifyEmail;
@property (nonatomic,assign) BOOL isNonPersistentMode;
@property (nonatomic,assign) BOOL isDoNotValidate;
@property (nonatomic, strong) NSString *lipBaseURL;
@property (nonatomic, strong) NSString *emailId;
@property (nonatomic, strong) NSString *marketingOptInText;
@property (nonatomic,assign) BOOL isHarmonyProInstaller;
@property (nonatomic, strong) NSString *autoLoadWithProvider;

@end
