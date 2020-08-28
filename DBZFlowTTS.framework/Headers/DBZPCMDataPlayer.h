//
//  DBZPCMDataPlayer.h
//  VoicePlayDemo
//
//  Created by linxi on 2018/11/20.
//  Copyright © 2019年 L. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AudioToolbox/AudioToolbox.h>
#import "DBZTTSEnumerate.h"
#import "DBZFailureModel.h"

NS_ASSUME_NONNULL_BEGIN

@protocol DBZPCMPlayDelegate <NSObject>

/// 准备好了，可以开始播放了，回调
- (void)readlyToPlay;

/// 播放完成回调
- (void)playFinished;

/// 播放暂停回调
- (void)playPausedIfNeed;

/// 播放开始回调
- (void)playResumeIfNeed;

///更新buffer的位置回调
-  (void)updateBufferPositon:(float)bufferPosition;

/// 播放错误的回调
- (void)playerCallBackFaiure:(DBZFailureModel *)failureModel;


@end

@interface DBZPCMDataPlayer : NSObject

/// 当前的播放进度
@property(nonatomic,assign)NSInteger currentPlayPosition;

/// 音频长度
@property(nonatomic,assign)NSInteger audioLength;

@property(nonatomic,weak)id <DBZPCMPlayDelegate> delegate;
/// 当前的播放状态
@property(nonatomic,assign,getter=isPlayerPlaying)BOOL playerPlaying;

/// 是否准备好开始播放
@property(nonatomic,assign,getter=isReadyToPlay)BOOL readyToPlay;

/// 是否缓存完成
@property(nonatomic,assign,getter=isFinished)BOOL finished;

/// 播放的过程中因为数据不足而暂停
@property(nonatomic,assign,getter=isPausePlayIfNeed)BOOL pausePlayIfNeed;

/// 初始化sdk
/// @param audioType 传入audioType
- (instancetype)initWithType:(DBZTTSAudioType)audioType;

/// 开始播放
- (void)startPlay;
/// 暂停播放
- (void)pausePlay;
/// 停止播放
- (void)stopPlay;

///回调当次buffer的数据
/// @param data 当次buffer获取到的数据
/// @param length 数据的总长度
- (void)appendData:(NSData *)data totalDatalength:(float)length endFlag:(BOOL)endflag;


@end

NS_ASSUME_NONNULL_END
