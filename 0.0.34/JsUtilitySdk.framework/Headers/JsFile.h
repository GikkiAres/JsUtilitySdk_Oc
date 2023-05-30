//
//  LogFile.h
//  GaCameraViewProject
//
//  Created by GikkiAres on 2020/4/8.
//  Copyright © 2020 GikkiAres. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JsFile : NSObject

@property(nonatomic,strong)NSString * filePath;
@property(nonatomic,strong)NSString * fileName;
//大小是字节数.
@property(nonatomic,assign)int fileSize;
@property(nonatomic,assign)BOOL isExisted;
@property(nonatomic,assign)BOOL isDirectory;

//文件创建日期,timestamp in s;
@property(nonatomic,strong)NSDate * createdDate;

+ (JsFile *)fileWithFilePath:(NSString *)filePath;

//获取指定目录下所有的文件列表,排除子目录
+ (NSMutableArray *)fileListInDirPath:(NSString *)dirPath;

- (void)remove;

@end

NS_ASSUME_NONNULL_END
