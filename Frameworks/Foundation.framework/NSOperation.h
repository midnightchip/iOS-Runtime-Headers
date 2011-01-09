/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */



@interface NSOperation : NSObject 
{
    id _private;
    void *_reserved;
}

@property NSUInteger tag;

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (void)initialize;

- (void)setCompletionBlock:(id)arg1;
- (void)setObservationInfo:(void*)arg1;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (BOOL)isConcurrent;
- (BOOL)isAsynchronous;
- (NSInteger)queuePriority;
- (void)setQueuePriority:(NSInteger)arg1;
- (void)waitUntilFinishedOrTimeout:(double)arg1;
- (void)addDependency:(id)arg1;
- (void)removeDependency:(id)arg1;
- (id)dependencies;
- (void)waitUntilFinished;
- (void*)observationInfo;
- (id)_implicitObservationInfo;
- (BOOL)isReady;
- (BOOL)isCancelled;
- (void)main;
- (void)finalize;
- (void)start;
- (void)cancel;
- (NSUInteger)retainCount;
- (id)init;
- (void)release;
- (id)retain;
- (void)dealloc;
- (double)threadPriority;
- (void)setThreadPriority:(double)arg1;
- (id)completionBlock;
- (NSUInteger)tag;
- (void)setTag:(NSUInteger)arg1;
- (void)NSOperationAdditions_dealloc;

@end