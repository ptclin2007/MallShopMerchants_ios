//
//  MySetSerivce.h
//  MallShopMerchants
//
//  Created by 黄伟业 on 2019/5/9.
//  Copyright © 2019 yezhongzheng. All rights reserved.
//

#import "BaseModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface MySetSerivce : BaseModel

/**
 *商户公告列表
 */
+ (void)getMsgboxWithParam:(NSDictionary *)dic successfulBlock:(SuccessfulBlock)sBlock failedBlock:(FailedBlock)fBlock;

@end

NS_ASSUME_NONNULL_END
