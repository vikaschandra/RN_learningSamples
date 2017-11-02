//
//  LIPError.h
//  LipLibrary
//
//  Created by Anuvandhana Selvaraj on 30/12/15.
//  Copyright © 2015 Anuvandhana Selvaraj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LIPErrorConstants.h"

@interface LIPError : NSObject
@property (nonatomic, strong) NSString *errorMessage;
@property (nonatomic) NSInteger errorCode;
@property (nonatomic, strong) NSDictionary* lipInfo;
@property (nonatomic) LIPEventLabel lipEvent;
@property (nonatomic, strong) NSString* logCode;
@end
