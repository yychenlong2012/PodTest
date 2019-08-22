//
//  appUserInfoModel.m
//  BuggyNew
//
//  Created by goat on 2019/5/16.
//  Copyright © 2019 3Pomelos. All rights reserved.
//

#import "appUserInfoModel.h"

@implementation appUserInfoModel

-(void)setHeader:(NSString *)header{
    if (header == nil) {
        _header = @"";
    }else{
        _header = header;
    }
}

@end
