//
//  medalModel.m
//  BuggyNew
//
//  Created by goat on 2019/6/10.
//  Copyright © 2019 3Pomelos. All rights reserved.
//

#import "medalModel.h"

@implementation medalModel


-(void)setMedal_name:(NSString *)medal_name{
    if (medal_name != nil) {
        _medal_name = NSLocalizedString(medal_name, nil);
    }else{
        _medal_name = medal_name;
    }
}


@end
