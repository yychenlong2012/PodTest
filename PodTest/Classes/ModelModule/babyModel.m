//
//  babyModel.m
//  BuggyNew
//
//  Created by goat on 2019/5/21.
//  Copyright © 2019 3Pomelos. All rights reserved.
//

#import "babyModel.h"

@implementation babyModel

+ (NSDictionary *)mj_replacedKeyFromPropertyName{
    /* 返回的字典，key为模型属性名，value为转化的字典的多级key */
    return @{
             @"ID" : @"id",
             };
}


-(void)setHeader:(NSString *)header{
    if (header == nil) {
        _header = @"";
    }else{
        _header = header;
    }
}

-(void)setHeight:(NSString *)height{
    if ([height isKindOfClass:[NSNull class]]) {
        _height = @"0";
    }else{
        if ([height isKindOfClass:[NSString class]]) {
            _height = [NSString stringWithFormat:@"%0.1f",height.floatValue];
        }else{
            _height = height;
        }
    }
}

-(void)setWeight:(NSString *)weight{
    if ([weight isKindOfClass:[NSNull class]]) {
        _weight = @"0";
    }else{
        if ([weight isKindOfClass:[NSString class]]) {
            _weight = [NSString stringWithFormat:@"%0.1f",weight.floatValue];
        }else{
            _weight = weight;
        }
    }
}
@end
