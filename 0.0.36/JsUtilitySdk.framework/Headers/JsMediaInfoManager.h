//
//  GaoMediaInfoManager.h
//  JssAssetManagerDemo
//
//  Created by Gikki Ares on 2020/7/24.
//  Copyright © 2020 vgemv. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreMedia/CoreMedia.h>
#import <AVFoundation/AVFoundation.h>
#import <AVKit/AVKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface JsMediaInfoManager : NSObject

/**
 For audio streams, the media subtype is the asbd.mFormatID.
 AudioStreamBasicDescription--AudioFormatID
 CF_ENUM(AudioFormatID)
 {
 kAudioFormatLinearPCM               = 'lpcm',
 kAudioFormatAC3                     = 'ac-3',
 kAudioFormat60958AC3                = 'cac3',
 kAudioFormatAppleIMA4               = 'ima4',
 kAudioFormatMPEG4AAC                = 'aac ',
 kAudioFormatMPEG4CELP               = 'celp',
 kAudioFormatMPEG4HVXC               = 'hvxc',
 kAudioFormatMPEG4TwinVQ             = 'twvq',
 kAudioFormatMACE3                   = 'MAC3',
 kAudioFormatMACE6                   = 'MAC6',
 kAudioFormatULaw                    = 'ulaw',
 kAudioFormatALaw                    = 'alaw',
 kAudioFormatQDesign                 = 'QDMC',
 kAudioFormatQDesign2                = 'QDM2',
 kAudioFormatQUALCOMM                = 'Qclp',
 kAudioFormatMPEGLayer1              = '.mp1',
 kAudioFormatMPEGLayer2              = '.mp2',
 kAudioFormatMPEGLayer3              = '.mp3',
 kAudioFormatTimeCode                = 'time',
 kAudioFormatMIDIStream              = 'midi',
 kAudioFormatParameterValueStream    = 'apvs',
 kAudioFormatAppleLossless           = 'alac',
 kAudioFormatMPEG4AAC_HE             = 'aach',
 kAudioFormatMPEG4AAC_LD             = 'aacl',
 kAudioFormatMPEG4AAC_ELD            = 'aace',
 kAudioFormatMPEG4AAC_ELD_SBR        = 'aacf',
 kAudioFormatMPEG4AAC_ELD_V2         = 'aacg',
 kAudioFormatMPEG4AAC_HE_V2          = 'aacp',
 kAudioFormatMPEG4AAC_Spatial        = 'aacs',
 kAudioFormatMPEGD_USAC              = 'usac',
 kAudioFormatAMR                     = 'samr',
 kAudioFormatAMR_WB                  = 'sawb',
 kAudioFormatAudible                 = 'AUDB',
 kAudioFormatiLBC                    = 'ilbc',
 kAudioFormatDVIIntelIMA             = 0x6D730011,
 kAudioFormatMicrosoftGSM            = 0x6D730031,
 kAudioFormatAES3                    = 'aes3',
 kAudioFormatEnhancedAC3             = 'ec-3',
 kAudioFormatFLAC                    = 'flac',
 kAudioFormatOpus                    = 'opus'
 };
 
 AudioFormatFlags???
 
 
 
 
 
 
 For video streams, the media subtype is the video codec type.
 For muxed streams, it is the format of the muxed stream.
 */
+ (NSString *)codecTypeStringFromCMVideoCodecType:(CMVideoCodecType)i_type;

//显示CMTime
+ (NSString *)timeStringForTime:(CMTime)cmtime;
+ (const char  *)timeCStringForTime:(CMTime)cmtime;
+ (NSString *)formattedTimeStringWithSecond:(double)f_sec;
+ (nullable const char *)formattedTimeCStringWithSecond:(double)f_sec;
+ (NSString *)stringForCMTime:(CMTime)cmtime;
+ (const char *)cstringForCMTime:(CMTime)cmtime;

+ (void)showAudioInfoFromCMSampleBuffer:(CMSampleBufferRef)sampleBuffer;
//+ (void)printSampleBufferForAudio:(CMSampleBufferRef)sampleBuffer;
+ (void)printSampleBufferForAudio:(CMSampleBufferRef)sampleBuffer withFrameCount:(long)frameCount;
+ (void)printAudioStreamBasicDescription:(AudioStreamBasicDescription)asbd;
+ (void)printSampleBufferForVideo:(CMSampleBufferRef)sampleBuffer withFrameCount:(long)frameCount isShowPixelBufferInfo:(BOOL)isShowPixelBufferInfo;

+ (void)checkCVPixelBuffeInfo:(CVPixelBufferRef)pixelBuffer;
//+ (void)checkCMSampleBufferInfo:(CMSampleBufferRef)sampleBuffer;
+ (int)dbFromCMSampleBuffer:(CMSampleBufferRef)sampleBuffer;




#pragma mark Craete Video Sample
	//视频
+ (CMSampleBufferRef)videoSampleBufferForPixelBuffer:(CVPixelBufferRef)pixelBuffer withPresentationTime:(CMTime)presentationTime;


#pragma mark Craete Audio Sample

+ (CMSampleBufferRef)createEmptyAudioSampleBuffrWithTiming:(CMSampleTimingInfo)timing channels:(int)channels sampleRate:(int)sampleRate numSamples:(int)numSamples bitsPerChannel:(int)bitsPerChannel;

+ (CMSampleBufferRef)createAudioSampleWithAudioBufferList:(AudioBufferList)audioBufferList audioStreamBasicDescription:(AudioStreamBasicDescription)asbd duration:(CMTime)duration pts:(CMTime)pts numSamples:(int)numSamples;

+ (CMSampleBufferRef)createAudioSampleWithAudioData:(void *)audioData numSamples:(int)numSamples timing:(CMSampleTimingInfo)timing channels:(int)channels sampleRate:(int)sampleRate bitsPerChannel:(int)bitsPerChannel;

+ (void)printOSTypeInfo:(OSType)osType;

@end

NS_ASSUME_NONNULL_END
