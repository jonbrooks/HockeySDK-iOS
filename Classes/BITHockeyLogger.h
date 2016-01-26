//
//  BITHockeyLogger.h
//  HockeySDK
//
//  Created by Lukas Spieß on 26/01/16.
//
//

#import <Foundation/Foundation.h>
#import "HockeySDKEnums.h"

#define BITHockeyLog(_level, _message, ...) [BITHockeyLogger logLevel:_level function:__PRETTY_FUNCTION__ line:__LINE__ message:_message, ##__VA_ARGS__]

#define BITHockeyLogError(format, ...)   BITHockeyLog(BITLogLevelError,   format, ##__VA_ARGS__)
#define BITHockeyLogWarning(format, ...) BITHockeyLog(BITLogLevelWarning, format, ##__VA_ARGS__)
#define BITHockeyLogDebug(format, ...)   BITHockeyLog(BITLogLevelDebug,   format, ##__VA_ARGS__)
#define BITHockeyLogVerbose(format, ...) BITHockeyLog(BITLogLevelVerbose, format, ##__VA_ARGS__)

@interface BITHockeyLogger : NSObject

+ (BITLogLevel)currentLogLevel;
+ (void)setCurrentLogLevel:(BITLogLevel)currentLogLevel;

+ (void)logLevel:(BITLogLevel)loglevel function:(const char *)function line:(int)line message:(NSString *)message, ...;

@end
