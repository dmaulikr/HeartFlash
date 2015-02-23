//
//  YMPulseRateMater.h
//  pulseRateMeter
//
//  Created by matsumoto on 2012/12/23.
//  Copyright (c) 2012年 matsumoto. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol YMPulseRateMeterDelegate <NSObject>

@required
- (void) completeWithPulseRate:(float)pulseRate;

@optional
- (void)pulseRateMeterStartMeasureing;

@end

@interface YMPulseRateMater : NSObject
@property (nonatomic, assign) id<YMPulseRateMeterDelegate> delegate;
- (void)start;
@end
