/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSDeveloperIdentityProviderStore : NSObject <VSDeveloperServiceProtocol> {
    VSPersistentContainer * _persistentContainer;
    VSRemoteNotifier * _remoteNotifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) VSPersistentContainer *persistentContainer;
@property (nonatomic, retain) VSRemoteNotifier *remoteNotifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_developerIdentityProviderInContext:(id)arg1;
- (id)_fetchRequest;
- (void)_noteDidChange;
- (void)_performBlock:(id /* block */)arg1;
- (void)addDeveloperIdentityProvider:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchDeveloperIdentityProvidersWithCompletionHandler:(id /* block */)arg1;
- (id)init;
- (id)persistentContainer;
- (id)remoteNotifier;
- (void)removeDeveloperIdentityProviderWithUniqueID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setPersistentContainer:(id)arg1;
- (void)setRemoteNotifier:(id)arg1;
- (void)updateExistingDeveloperIdentityProvider:(id)arg1 completionHandler:(id /* block */)arg2;

@end
