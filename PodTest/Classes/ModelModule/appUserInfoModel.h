//
//  appUserInfoModel.h
//  BuggyNew
//
//  Created by goat on 2019/5/16.
//  Copyright © 2019 3Pomelos. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface appUserInfoModel : NSObject

/*
 *  app登录用户的信息
 */
@property(nonatomic,copy) NSString *growth;   //成长值
@property(nonatomic,copy) NSString *header;
@property(nonatomic,copy) NSString *nickname;
@property(nonatomic,copy) NSString *uid;     //用户id
@property(nonatomic,copy) NSString *weight;

@end

NS_ASSUME_NONNULL_END
