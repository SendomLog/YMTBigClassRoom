//
//  GPLDraftManager.h
//  YiMiApp
//
//  Created by 顾鹏凌 on 2016/10/9.
//  Copyright © 2016年 xieyan. All rights reserved.
//

#import <Foundation/Foundation.h>

static NSString * const UserInfoNew = @"UserInfoNew";
static NSString * const OldCacheKey = @"OldCacheKey";
static NSString * const OldSettingModelKey = @"NewestSettingModelKey";//OldSettingModelKey
static NSString * const OldAVControlModelKey = @"OldAVControlModelKey";

static NSString * const GoodIPList = @"GoodIPList";
static NSString * const LessonPlanList = @"LessonPlanList";

//oss 时间校验
//static NSString * const OssTokenTimeStemp = @"OssTokenTimeStemp";
static NSString * const OssTokensData = @"OssTokensData";

static NSString * const SCFileDetailData = @"SCFileDetailData";


#define GPL_DRAFT (GPLDraftManager *)[GPLDraftManager sharedInstance]

@interface GPLDraftManager : NSObject

+ (GPLDraftManager *)sharedInstance;
/**
 *	@brief	某个key的cache是否存在
 *
 *  @return 自动标识
 */
- (BOOL)containsObjectFromKey:(NSString *)key;
/**
 *	@brief	删除某个key的cache
 *
 *  @return 自动标识
 */
- (void)removeCacheFromKey:(NSString *)key;

/**
 *	@brief	删除全部cache
 *
 *  @return 自动标识
 */
- (void)removeAllCache;

/**
 *	@brief	为某个obj设置cache的key
 *
 *  @return 自动标识
 */
- (void)setCacheFromObject:(id)obj toKey:(NSString *)key;
///#begin zh-cn
/**
 *	@brief	读取某个key的cache信息
 *  @param  同步
 */
///#end
- (id)readCacheFromKey:(NSString *)key;
///#begin zh-cn
/**
 *	@brief	读取某个key的cache信息
 *
 *  @param  callBlock     加载完成事件处理 contains为yes表示成功
 */
///#end
- (void)readCacheFromKey:(NSString *)key callBlock:(void(^)(BOOL contains, id anObject))callBlock;

@end
