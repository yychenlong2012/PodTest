//
//  confinementBabyModel.h
//  BuggyNew
//
//  Created by goat on 2019/6/12.
//  Copyright © 2019 3Pomelos. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

//预产期宝宝模型
@interface confinementBabyModel : NSObject

@property(nonatomic,strong) NSString *confinement_time;
@property(nonatomic,strong) NSString *is_pregnancy;
@property(nonatomic,strong) NSString *relation;

@end

NS_ASSUME_NONNULL_END
