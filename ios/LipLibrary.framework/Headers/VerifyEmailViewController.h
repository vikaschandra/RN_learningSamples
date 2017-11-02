//
//  VerifyEmailViewController.h
//  LipLibrary
//
//  Created by Anuvandhana Selvaraj on 11/12/15.
//  Copyright © 2015 Anuvandhana Selvaraj. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LIPBaseViewController.h"
#import "LipLoginResult.h"



@interface VerifyEmailViewController : LIPBaseViewController

@property (nonatomic, weak) NSString *clientID;
@property (nonatomic, weak) LipLoginResult *lipLoginResult;
@property (nonatomic, weak) NSString *emailId;

@end
