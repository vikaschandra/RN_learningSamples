//
//  LipInterface.h
//  LearningSample
//
//  Created by Vikas Chandra on 01/11/17.
//  Copyright © 2017 Facebook. All rights reserved.
//


#ifndef LipInterface_h
#define LipInterface_h

#import <Foundation/Foundation.h>
#import <LipLibrary/LipInputParametersWithUI.h>
#import <LipLibrary/LIPApiConstants.h>
#import <LipLibrary/LIPAccountManager.h>
#import <React/RCTBridgeModule.h>


@interface LipInterface : NSObject <RCTBridgeModule,LIPAccountManagerDelegate>



@end

#endif
