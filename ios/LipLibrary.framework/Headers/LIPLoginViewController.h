//
//  LoginViewController.h
//  LipLibrary
//
//  Created by Anuvandhana Selvaraj on 06/11/15.
//  Copyright © 2015 Logitech. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LIPBaseViewController.h"
#import "LipLoginResult.h"


@interface LIPLoginViewController : LIPBaseViewController<NSURLSessionDelegate>

@property (nonatomic, strong) NSString *clientID;


@end
