//
//  LIPCustomizationInputs.h
//  LipLibrary
//
//  Created by Anuvandhana Selvaraj on 12/04/16.
//  Copyright © 2016 Anuvandhana Selvaraj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface LIPCustomizationInputs : NSObject

@property (nonatomic,strong) NSString* lipFontType;
@property (nonatomic, retain) UIColor* lipFontcolor;
@property (nonatomic, retain) UIColor* lipButtonBackgoundColorStateNormal;
@property (nonatomic, retain) UIColor* lipButtonBackgoundColorStateHighlighted;
@property (nonatomic, retain) UIColor* lipButtonFontColor;
@property (nonatomic, strong) NSString* lipButtonFontType;
@property (nonatomic, retain) UIColor* lipScreenBackgroundColor;

@end
