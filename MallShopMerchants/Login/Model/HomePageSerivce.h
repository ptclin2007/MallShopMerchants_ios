//
//  HomePageSerivce.h
//  MallShopMerchants
//
//  Created by 黄伟业 on 2019/5/8.
//  Copyright © 2019 yezhongzheng. All rights reserved.
//

#import "BaseModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface HomePageSerivce : BaseModel

/**
 *获取商户信息
 */
+ (void)getSupplierInfoWithParam:(NSDictionary *)dic successfulBlock:(SuccessfulBlock)sBlock failedBlock:(FailedBlock)fBlock;

@end

NS_ASSUME_NONNULL_END
