//
//  GaoFileManager.h
//  GaoPreviewDemo
//
//  Created by Gikki Ares on 2020/9/3.
//

#import <UIKit/UIKit.h>
#import "JsFile.h"

/**
 管理宏观意义上的通用文件.
 提供所有文件的通用操作.

 */

NS_ASSUME_NONNULL_BEGIN

@interface JsFileManager : NSObject

/**
 寻找Bundle中指定名称的文件,返回的是fileUrl.
 */
+ (NSURL *)fileUrlOfFileInMainBundleNamed:(NSString *)strFileName;
+ (NSString *)pathStringForFileInDocumentDirectoryWithName:(NSString *)fileName;
+ (NSString *)documentDirectory;
+ (BOOL)isFileExist:(NSString *)filePath;


+ (NSString *)pathStringForFileInAppGroupNamed:(NSString *)appGroupName fileName:(NSString *)fileName;
+ (NSURL *)urlForFileNamed:(NSString *)fileName inAppGroup:(NSString *)appGroup;
	
+ (void)saveImageToAlbum:(UIImage *)image;

#pragma mark 1 目录中的文件管理
#pragma mark 1.1 控制文件数量
//保证指定目录下的文件不超过count,如果超过,删除创建日期最小的.
+(void)keepFileCount:(int)count inDir:(NSString *)dirPath;
+ (NSArray *)fileArrayInDir:(NSString *)dirPath;
#pragma mark 1.2 清空
//删除再新建.
+ (void)emptyDir:(NSString *)dirPath;
+ (void)emptyFile:(NSString *)filePath;
//+(void)keepFileCount:(int)count isKeepNewFile:(BOOL)isKeepNewFile;

@end

NS_ASSUME_NONNULL_END
