//
//  medalModel.h
//  BuggyNew
//
//  Created by goat on 2019/6/10.
//  Copyright © 2019 3Pomelos. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

//勋章模型
@interface medalModel : NSObject

@property(nonatomic,copy) NSString *image;
@property(nonatomic,copy) NSString *medal_name;

@end

NS_ASSUME_NONNULL_END
