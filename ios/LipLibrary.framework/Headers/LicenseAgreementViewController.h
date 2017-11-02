//
//  LicenseAgreementViewController.h
//  LipLibrary
//
//  Created by Anuvandhana Selvaraj on 11/12/15.
//  Copyright © 2015 Anuvandhana Selvaraj. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LIPBaseViewController.h"
#import "LipLoginResult.h"
#import "LIPSocialLoginConstants.h"
#import "LIPRequest.h"

@interface LicenseAgreementViewController : LIPBaseViewController
@property (nonatomic, weak) NSString *clientID;
@property (nonatomic) LIPSocialAuthenticationProvider provider;
@property (nonatomic, strong) LIPRequest *loginRequest;
@property (nonatomic, strong) LipLoginResult *loginResult;

@end
