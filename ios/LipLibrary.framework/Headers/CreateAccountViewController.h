//
//  CreateAccountViewController.h
//  LipLibrary
//
//  Created by Anuvandhana Selvaraj on 09/12/15.
//  Copyright © 2015 Anuvandhana Selvaraj. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LIPBaseViewController.h"
#import "LipLoginResult.h"


@interface CreateAccountViewController : LIPBaseViewController<UITextFieldDelegate>
@property (nonatomic, weak) NSString *clientID;
@end
