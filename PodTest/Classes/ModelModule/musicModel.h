//
//  musicModel.h
//  BuggyNew
//
//  Created by goat on 2019/3/21.
//  Copyright © 2019 3Pomelos. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface musicModel : NSObject

@property (nonatomic ,copy) NSString *musicname;       //音乐名
@property (nonatomic ,copy) NSString *imageurl;     //音乐图片
@property (nonatomic ,copy) NSString *musicid;
@property (nonatomic ,copy) NSString *musicurl;     //音乐地址
@property (nonatomic ,copy) NSString *time;


@property (nonatomic ,copy) NSString *albumID;   //所属专辑ID

//@property (nonatomic ,copy) NSString *musicName;
//@property (nonatomic ,copy) NSString *time;    //时长
//@property (nonatomic ,assign) NSInteger musicId;   //歌曲唯一标识
//@property (nonatomic ,copy) NSString *musicUrl;   //音乐url
//@property (nonatomic ,copy) NSString *imageUrl;   //图片url
//@property (nonatomic ,copy) NSString *lyricUrl;   //歌词url
//@property (nonatomic ,assign) NSInteger musicType;  //专辑子分类

@end

NS_ASSUME_NONNULL_END
