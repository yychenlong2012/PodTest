//
//  babyModel.h
//  BuggyNew
//
//  Created by goat on 2019/5/21.
//  Copyright © 2019 3Pomelos. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface babyModel : NSObject

@property(nonatomic,copy) NSString *birthday;
@property(nonatomic,copy) NSString *birthday_fromnow;
@property(nonatomic,copy) NSString *header;
@property(nonatomic,copy) NSString *name;
@property(nonatomic,copy) NSString *objectid;
@property(nonatomic,copy) NSString *height;
@property(nonatomic,copy) NSString *relation;
@property(nonatomic,copy) NSString *sex;
@property(nonatomic,copy) NSString *weight;

@property(nonatomic,copy) NSString *describe;

@end

NS_ASSUME_NONNULL_END
