//
//  LIPErrorConstants.h
//  LipLibrary
//
//  Created by Anuvandhana Selvaraj on 01/06/16.
//  Copyright © 2016 Anuvandhana Selvaraj. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum LIPEventLabel: NSUInteger {
    LIPEventError = 0,
    LIPEventDebug,
    LIPEventInfo,
}LIPEventLabel;

#define LIP_CODE_JSON_ERROR                        @"LIP_E001"
#define LIP_CODE_SOCIAL_LOGIN_ERROR                @"LIP_E002"
#define LIP_CODE_KEYCHAIN_ERROR                    @"LIP_E003"
#define LIP_CODE_UNKNOWN                           @"LIP_UNDEFINED"
#define LIP_CODE_DEBUG                             @"LIP_DEBUG"
#define LIP_CODE_INFO                              @"LIP_INFO"

extern NSString *const kLIPMessageJsonParseError;
extern NSString *const kLIPMessageSocialSigninError;
extern NSString *const kLIPMessageKeychainError;
extern NSString *const kLIPMessageUnknownResponseError;
extern NSString *const kLIPMessageRequestDetails;

NS_ENUM(NSInteger)
{
    LIPServerErrorEmailAlreadyRegistered = 		409,
    LIPServerErrorIncorrectIdOrPassword = 		401,
    LIPServerErrorAccountLocked =               423,
    LIPServerErrorDataNotFound =                404,
    LIPServerErrorServerDown   =                504,
    LIPServerErrorTokensExpired =               401,
};
@interface LIPErrorConstants : NSObject

@end
