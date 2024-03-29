//
//  YMRecordPlayDelegate.h
//  student
//
//  Created by mystarains on 2019/8/21.
//  Copyright © 2019 YiMi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "YMRecordPlayEnum.h"

NS_ASSUME_NONNULL_BEGIN

@protocol YMRecordPlayCommandParserDelegate <NSObject>

- (void)commandConvertClick:(id)converter type:(YMCommandConvertType)type content:(id)content userId:(NSString *)userId tag:(long)tag;

@end

@protocol YMRecordPlayerViewDelegate <NSObject>

- (void)recordPlayerView:(UIView*)sender clickType:(YMRecordPlayerViewClickType)type speed:(CGFloat)speed progress:(CGFloat)progress;

@end

@protocol YMRecordPlayDelegate <YMRecordPlayerViewDelegate,YMRecordPlayCommandParserDelegate>

@end

NS_ASSUME_NONNULL_END
