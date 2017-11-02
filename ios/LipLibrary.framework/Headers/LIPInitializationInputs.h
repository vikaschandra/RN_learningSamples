//
//  LIPInitializationInputs.h
//  LipLibrary
//
//  Created by Anuvandhana Selvaraj on 03/05/16.
//  Copyright © 2016 Anuvandhana Selvaraj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface LIPInitializationInputs : NSObject

@property (nonatomic, strong) NSString *lipAppClaimPrefix;
@property (nonatomic, strong) NSString *lipAppTermsofUse;
@property (nonatomic, strong) NSString *lipAppPrivacyPloicy;
@property (nonatomic, strong) NSString *clientId;
@property (nonatomic, strong) NSString *baseUrl;
@property (nonatomic) NSInteger bufferTime;
@property (nonatomic, strong) NSString *clientEmail;
@property (nonatomic, assign) BOOL doesNeedMultipleAccounts;

@end
