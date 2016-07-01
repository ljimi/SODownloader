//
//  SOMusic.h
//  SODownloadExample
//
//  Created by xueyi on 16/5/3.
//  Copyright © 2016年 http://scfhao.coding.me. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SOMusic : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *fileName;

@property (strong, nonatomic, readonly) NSString *downloadURL;

+ (NSArray *)allMusicList;

@end