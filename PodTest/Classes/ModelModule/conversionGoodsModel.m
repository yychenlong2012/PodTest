//
//  conversionGoodsModel.m
//  BuggyNew
//
//  Created by goat on 2019/6/18.
//  Copyright © 2019 3Pomelos. All rights reserved.
//

#import "conversionGoodsModel.h"

@implementation conversionGoodsModel

+ (NSDictionary *)mj_replacedKeyFromPropertyName{
    /* 返回的字典，key为模型属性名，value为转化的字典的多级key */
    return @{
             @"ID" : @"id",
             };
}

@end
