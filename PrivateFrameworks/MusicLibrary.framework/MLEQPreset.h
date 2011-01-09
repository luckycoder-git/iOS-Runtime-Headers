/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class NSString;



@interface MLEQPreset : NSObject 
{
    NSString *_name;
    NSString *_localizedName;
    NSInteger _builtInPresetType;
}

+ (id)eqPresetForBuiltInPresetType:(NSInteger)arg1;
+ (id)eqPresetForName:(id)arg1;

- (id)initWithBuiltInPresetType:(NSInteger)arg1;
- (NSInteger)builtInPresetType;
- (NSInteger)typeForAVController;
- (id)localizedName;
- (id)name;
- (void)dealloc;

@end