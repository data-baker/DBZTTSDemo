//
//  DBZTTSEnumerate.h
//  WebSocketDemo
//
//  Created by linxi on 2019/11/14.
//  Copyright © 2019 newbike. All rights reserved.
//

#ifndef DBZTTSEnumerate_h
#define DBZTTSEnumerate_h

typedef NS_ENUM(NSUInteger, DBZTTSAudioType){
    DBZTTSAudioTypePCM16K=4, // 返回16K采样率的pcm格式
    DBZTTSAudioTypePCM8K, // 返回8K采样率的pcm格式
};

typedef NS_ENUM(NSUInteger, DBZTTSRate) {
    DBZTTSRate8k = 1,
    DBZTTSRate16k,
};

typedef NS_ENUM(NSUInteger,DBZlanguageType) {
    DBZlanguageTypeChinese, // 中文
    DBZlanguageTypeEnglish // 英文
};

typedef NS_ENUM(NSUInteger,DBZErrorFailedCode) {
    DBZErrorFailedCodeInitial = 90001, // 合成SDK初始化失败
    DBZErrorFailedCodeText = 90002, // 合成文本内容为空
    DBZErrorFailedCodeParameters = 90003, // 参数格式错误
    DBZErrorFailedCodeResultParse = 90004, // 返回结果解析错误
    DBZErrorFailedCodeSynthesis = 90005, // 合成失败，失败信息相关错误
    DBZPlayerError = 90006, // 播放器相关错误
    //**********服务端返回的错误*********//
    DBZErrorFailedCodeAccessToken = 10001, // access_token参数获取失败或未传输
    DBZErrorFailedCodeDomin = 10002, //domain参数值错误
    DBZErrorFailedCodeLanguage =10003, //language参数错误
    DBZErrorFailedCodeVoiveName = 10004, // voiceName参数错误
    DBZErrorFailedCodeAudioType = 10005, // audioType 参数错误
    DBZErrorFailedCodeRate = 10006, // rate参数错误
    DBZErrorFailedCodeIdx = 10007, // idx错误
    DBZErrorFailedCodeSingle = 10008, // single错误
    DBZErrorFailedCodeTextSever = 10009, // text参数错误
    DBZErrorFailedCodeTextLong = 10010, //文本太长
    DBZErrorFailedCodeGetResource = 20000, //获取资源错误
    DBZErrorFailedCodeAssertText = 20001, //断句失败
    DBZErrorFailedCodeSegmentTation = 20002 ,// 分段数错误
    DBZErrorFailedCodeSegmentTationText = 20003, //分段后的文本长度错误
    DBZErrorFailedCodeEngineLink = 20004, // 获取引擎链接错误
    DBZErrorFailedCodeRPC = 20005, //RPC链接错误
    DBZErrorFailedCodeEngineInner = 20006,// 引擎内部错误
    DBZErrorFailedCodeRedis = 20007, // 操作redis错误
    DBZErrorFailedCodeAudioEncode = 20008,// 音频编码错误
    DBZErrorFailedCodeAuthor = 30000,//鉴权错误
    DBZErrorFailedCodeConcurrency = 30001,// 并发错误
    DBZErrorFailedCodeInnerConfigure = 30002,// 内部配置错误
    DBZErrorFailedCodeParseJSON = 30003, // json串解析错误
    DBZErrorFailedCodeGetUrl = 30004,// 获取url错误
    DBZErrorFailedCodeGetIP = 30005,// 获取客户ip错误
    DBZErrorFailedCodeTaskQueue = 30006,// 任务队列错误
    DBZErrorFailedCodeJsonStruct = 40001, //请求不是json结构
    DBZErrorFailedCodeLackRequireFied = 40002,// 缺少必须字段
    DBZErrorFailedCodeVersion = 40003,// 版本错误
    DBZErrorFailedCodeFiedType = 40004,//字段类型错误
    DBZErrorFailedCodeFiedError = 40005,// 参数错误
    
    
};




#endif /* DBZTTSEnumerate_h */
