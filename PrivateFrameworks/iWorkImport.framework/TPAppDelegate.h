/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSArray;

@interface TPAppDelegate : TSABaseApplicationDelegate {
    BOOL _appDoneLaunching;
    BOOL _cachedBidiIsSupported;
    BOOL _newDocumentOnLaunch;
}

@property(readonly) NSArray * wordDocumentTypes;

+ (id)sharedDelegate;

- (id)appChartPropertyOverrides;
- (id)applicationName;
- (id)applicationTemplateVariantsForLocale:(struct __CFLocale { }*)arg1;
- (id)createCompatibilityDelegate;
- (void)dealloc;
- (Class)documentRootClass;
- (id)documentTypeDisplayName;
- (id)importableDocumentTypes;
- (id)init;
- (id)nativeDocumentType;
- (id)nativeSFFDocumentType;
- (void)p_inputMethodsChanged:(id)arg1;
- (void)p_localeChanged:(id)arg1;
- (id)previewImageNameForDocumentType:(id)arg1;
- (id)previewImageNameForEncryptedNativeDocument;
- (id)previewImageNameForNativeDocument;
- (BOOL)supportsRTL;
- (BOOL)supportsScrollingInPhoneCommentUI;
- (BOOL)tableHeaderInspectorShowsRepeatHeaderRowsSwitch;
- (id)tangierEditingFormatDocumentType;
- (id)templateDocumentType;
- (id)templateSFFDocumentType;
- (id)templateTypeDisplayName;
- (BOOL)textInspectorShowsMoreSubpane;
- (id)wordDocumentTypes;

@end