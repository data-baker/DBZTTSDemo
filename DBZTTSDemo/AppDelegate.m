//
//  AppDelegate.m
//  frmeworkDemo
//
//  Created by linxi on 2019/11/14.
//  Copyright © 2019 biaobei. All rights reserved.
//

#import "AppDelegate.h"
//#import "DBZLogManager.h"
//void uncaughtExceptionHandler(NSException*exception){
//    NSLog(@"CRASH: %@", exception);
//    NSLog(@"Stack Trace: %@",[exception callStackSymbols]);
//    // Internal error reporting
//}


@interface AppDelegate ()

@end

@implementation AppDelegate


- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    // Override point for customization after application launch.
//    [[DBZLogManager sharedInstance]redirectNSLogToDocumentFolderFlag:NO];

    return YES;
}


#pragma mark - UISceneSession lifecycle


- (UISceneConfiguration *)application:(UIApplication *)application configurationForConnectingSceneSession:(UISceneSession *)connectingSceneSession options:(UISceneConnectionOptions *)options {
    // Called when a new scene session is being created.
    // Use this method to select a configuration to create the new scene with.
    return [[UISceneConfiguration alloc] initWithName:@"Default Configuration" sessionRole:connectingSceneSession.role];
}


- (void)application:(UIApplication *)application didDiscardSceneSessions:(NSSet<UISceneSession *> *)sceneSessions {
    // Called when the user discards a scene session.
    // If any sessions were discarded while the application was not running, this will be called shortly after application:didFinishLaunchingWithOptions.
    // Use this method to release any resources that were specific to the discarded scenes, as they will not return.
}


@end
