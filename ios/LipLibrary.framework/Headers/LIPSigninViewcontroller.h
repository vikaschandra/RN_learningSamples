//
//  MHSigninViewcontroller.h
//  LipLibrary
//
//  Created by Anuvandhana Selvaraj on 17/11/15.
//  Copyright © 2015 Anuvandhana Selvaraj. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LIPBaseViewController.h"
#import "LipLoginResult.h"


@interface LIPSigninViewcontroller : LIPBaseViewController<NSURLSessionDelegate,UITextFieldDelegate>
@property (nonatomic, weak) NSString *clientID;

@end
