//
//  conversionGoodsModel.h
//  BuggyNew
//
//  Created by goat on 2019/6/18.
//  Copyright © 2019 3Pomelos. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

//积分兑换商品模型
@interface conversionGoodsModel : NSObject

@property(nonatomic,copy) NSString *create_time;
@property(nonatomic,copy) NSString *detail_img;
@property(nonatomic,copy) NSString *goods_img;
@property(nonatomic,copy) NSString *goods_name;   //详细名称
@property(nonatomic,copy) NSString *goods_num;    //兑换数
@property(nonatomic,copy) NSString *ID;
@property(nonatomic,copy) NSString *integral;     //需消耗积分数
@property(nonatomic,copy) NSString *repertory;    //库存
@property(nonatomic,copy) NSString *update_time;
@property(nonatomic,copy) NSString *short_name;   //简称
@end

NS_ASSUME_NONNULL_END
