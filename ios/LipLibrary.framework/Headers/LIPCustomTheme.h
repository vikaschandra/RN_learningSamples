//
//  LIPCustomTheme.h
//  LipLibrary
//
//  Created by Anuvandhana Selvaraj on 18/04/16.
//  Copyright © 2016 Anuvandhana Selvaraj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LIPCustomizationInputs.h"

@interface LIPCustomTheme : NSObject

+ (instancetype) sharedManager;
-(void)setCustomThemes: (LIPCustomizationInputs *)inputs;

@end
