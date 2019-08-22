//
//  musicAlbumModel.h
//  BuggyNew
//
//  Created by goat on 2019/5/24.
//  Copyright © 2019 3Pomelos. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

//音乐专辑模型
@interface musicAlbumModel : NSObject

@property(nonatomic,copy) NSString *albumaddress;
@property(nonatomic,copy) NSString *describe;
@property(nonatomic,copy) NSString *file;
@property(nonatomic,copy) NSString *imageface;
@property(nonatomic,copy) NSString *musictype;
@property(nonatomic,copy) NSString *title;
@property(nonatomic,copy) NSString *title_image;
@property(nonatomic,copy) NSString *objectid;   //专辑ID

@property(nonatomic,copy) NSString *collected_count;
@property(nonatomic,copy) NSString *downed_count;      //
@property(nonatomic,copy) NSString *sum_play_count;    //播放次数

@end

NS_ASSUME_NONNULL_END
