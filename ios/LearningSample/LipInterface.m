//
//  LipInterface.m
//  LearningSample
//
//  Created by Vikas Chandra on 01/11/17.
//  Copyright © 2017 Facebook. All rights reserved.
//

#import "LipInterface.h"
NSString * const kHarmonyAppClientID = @"aa10d1b6-d851-444c-8c80-7f63522cc3sd";


@implementation LipInterface

RCT_EXPORT_MODULE()

//- (NSDictionary *)constantsToExport {
//  return @{@"greeting": @"Welcome to the React Native Vikas\n"};
//}

RCT_EXPORT_METHOD(showLIPLoginWithParams:(NSDictionary*)msg:(RCTResponseSenderBlock)callback) {
  
LipInputParametersWithUI *params = [self lipParametersWithVerifyEmail:NO createAccountFlow:[[msg valueForKey:@"createAccount"]boolValue] shouldPersistTokens:YES shouldValidate:YES];
  [self loginWithParameters:params completionHandler:^(LipLoginResult *response, LIPError *error){
    NSLog(@"%s",__FUNCTION__);
    NSLog(@"ParamtersREceived from JS %@",msg);
    
   // NSArray *arraytoReturn = nil;
     NSArray *arraytoReturn = [NSArray arrayWithObjects:@"hjsj",@"dffdkkd",nil];
    callback(@[[NSNull null], arraytoReturn]);

//    if(response !=nil){
//      arraytoReturn = [NSArray arrayWithObject:response];
//      callback(@[[NSNull null], arraytoReturn]);
//    }
//    else{
//      callback(@[[NSNull null], [NSNull null]]);
//    }
  }];

}

- (void)loginWithParameters:(LipInputParametersWithUI *)params completionHandler:(LIPServerAuthenticationCompletionHandler)completion {
  NSLog(@"%s",__FUNCTION__);

  LIPAccountManager *accountManager = [self lipAccountManager];
  [accountManager loginToLipServerPresentingUIOnViewController:nil
                                           withinputParameters:params andCompletionHandler:completion];
}


#pragma mark - LIP Input Parameters

- (LipInputParametersWithUI *)lipParametersWithVerifyEmail:(BOOL)shouldVerifyEmail
                                         createAccountFlow:(BOOL)isCreateAccount
                                       shouldPersistTokens:(BOOL)shouldPersist
                                            shouldValidate:(BOOL)shouldValidate {
  
  [self initializationInputs];
  LipInputParametersWithUI *inputParameters = [[LipInputParametersWithUI alloc] init];
  inputParameters.clientID = kHarmonyAppClientID;

  //inputParameters.lipBaseURL = kHarmonyLIPBaseUrl;
  inputParameters.lipBaseURL = @"https://accounts.logi.com/identity/";
  inputParameters.isCreateAccount = isCreateAccount;
  inputParameters.isVerifyEmail = shouldVerifyEmail;
  inputParameters.isNonPersistentMode = !shouldPersist;
  inputParameters.isDoNotValidate = !shouldValidate;
  inputParameters.marketingOptInText = NSLocalizedString(@"lip_sign_up_receive_updates", @"Keep me informed");
  inputParameters.isHarmonyProInstaller = NO;
  inputParameters.emailId = @"testing@lipinterface.com";
  
  
  return inputParameters;
}


- (LIPAccountManager *)lipAccountManager {
  LIPAccountManager *accountManager = [LIPAccountManager sharedManager];
  if (accountManager.delegate) {
    accountManager.delegate = nil;
  }
  accountManager.delegate = self;
  return accountManager;
}

- (void) initializationInputs{
  
  LIPAccountManager *accountManager = [LIPAccountManager sharedManager];
  
  LIPInitializationInputs *initializationInputs = [[LIPInitializationInputs alloc]init];
  initializationInputs.lipAppTermsofUse = NSLocalizedString(@"lip_signup_tou_url", @"https://files.myharmony.com/Assets/legal/en/termsofuse.html");
  initializationInputs.lipAppClaimPrefix = @"harmony";
  initializationInputs.lipAppPrivacyPloicy = NSLocalizedString(@"PRIVPOLY_URL", @"https://files.myharmony.com/Assets/legal/en/privacypolicy.html");
  initializationInputs.clientId = kHarmonyAppClientID;

  initializationInputs.baseUrl = @"https://accounts.logi.com/identity/";
  initializationInputs.clientEmail = @"testing@lipinterface.com";
  initializationInputs.bufferTime = 300;//setting buffertime to 5 mins
  
  [accountManager setLipInitializationParameters:initializationInputs];
}


#pragma mark LIPAccountManagerDelegate methods

- (void)lipAccountManager:(LIPAccountManager *)manager error:(LIPError *)error {
  switch(error.lipEvent) {
    case LIPEventError:
    {
      
    }
      break;
      
    case LIPEventInfo:
     
      break;
      
    case LIPEventDebug:
      ///Write to Log file
      break;
  }
}

@end
