/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPMediaItem, MPMediaQuery;



@interface MPMusicPlayerClientState : NSObject 
{
    MPMediaQuery *_query;
    MPMediaItem *_firstItem;
    NSInteger _shuffleMode;
    NSInteger _repeatMode;
    BOOL _useApplicationSpecificQueue;
    BOOL _allowsRemoteUIAccess;
    BOOL _videoPlaybackEnabled;
    BOOL _seeking;
    NSInteger _backgroundPlaybackAccess;
}

@property BOOL seeking;
@property BOOL videoPlaybackEnabled;
@property NSInteger backgroundPlaybackAccess;
@property(retain) MPMediaItem *firstItem;
@property BOOL allowsRemoteUIAccess;
@property BOOL useApplicationSpecificQueue;
@property NSInteger shuffleMode;
@property NSInteger repeatMode;
@property(retain) MPMediaQuery *query;


- (NSInteger)repeatMode;
- (void)setRepeatMode:(NSInteger)arg1;
- (void)setShuffleMode:(NSInteger)arg1;
- (id)query;
- (void)dealloc;
- (BOOL)seeking;
- (void)setSeeking:(BOOL)arg1;
- (BOOL)videoPlaybackEnabled;
- (void)setVideoPlaybackEnabled:(BOOL)arg1;
- (NSInteger)backgroundPlaybackAccess;
- (void)setBackgroundPlaybackAccess:(NSInteger)arg1;
- (id)firstItem;
- (void)setFirstItem:(id)arg1;
- (BOOL)useApplicationSpecificQueue;
- (void)setUseApplicationSpecificQueue:(BOOL)arg1;
- (NSInteger)shuffleMode;
- (BOOL)allowsRemoteUIAccess;
- (void)setAllowsRemoteUIAccess:(BOOL)arg1;
- (void)setQuery:(id)arg1;

@end