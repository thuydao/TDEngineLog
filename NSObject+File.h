//
//  NSObject+File.h
//  EngineLog
//
//  Created by Dao Duy Thuy on 10/22/14.
//  Copyright (c) 2014 QS. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject (File)

+ (NSString *)getDataPath;

+ (void)writeFile:(NSString*)content fileName:(NSString *)fileName;

+ (NSString *)getPathLog;

+ (void)clearFile:(NSString *)fileName;

@end
