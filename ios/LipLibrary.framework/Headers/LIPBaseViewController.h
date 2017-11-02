//
//  LIPBaseViewController.h
//  LipLibrary
//
//  Created by Anuvandhana Selvaraj on 08/12/15.
//  Copyright © 2015 Anuvandhana Selvaraj. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LIPError.h"
#import "LipLoginResult.h"
#import "LIPInitializationInputs.h"

@protocol LIPLoginResultsDelegate <NSObject>
- (void)receivedLIPSignInResponse:(LipLoginResult *)response withError:(LIPError *)error;
@end

@interface LIPBaseViewController : UIViewController{
    __weak id<LIPLoginResultsDelegate> lipLoginResultsDelegate;

}
@property (nonatomic, weak) id<LIPLoginResultsDelegate> lipLoginResultsDelegate;

@property (nonatomic) BOOL isCreateNewAccount;
@property (nonatomic) BOOL isDoNotValidate;
@property (nonatomic) BOOL isNonPersistentMode;
@property (nonatomic) BOOL isVerifyEmail;
@property (nonatomic,strong) NSString* baseURL;
@property (nonatomic,strong) NSString* emailId;
@property (nonatomic, strong) NSString* marketingOptInText;
@property (nonatomic, strong) LIPInitializationInputs *initializationInputs;

@property (nonatomic,assign) BOOL isHarmonyProInstaller;
@property (nonatomic,strong) NSString  *autoLoadWithProvider;

- (void)updateBackgroundColorWithHexString:(NSString*)hexString;
- (void)showToastWithMessage:(NSString *)message withDelay:(float)delay
               andCompletion:(void(^)(void))completionHandler;
- (void)showToastWithMessage:(NSString *)message andCompletion:(void(^)(void))completionHandler;
- (void)showFullScreenOverlayWithText:(NSString *)msg;
- (void)hideFullScreenOverlay;
-(NSString *)handleErrorScenarios:(LIPError*)error;
NSString *LIPLocalizedString(NSString* key, NSString* comment);
-(void)callBackWithLIPResponse: (LipLoginResult *)result andError:(LIPError *)error;
@end
