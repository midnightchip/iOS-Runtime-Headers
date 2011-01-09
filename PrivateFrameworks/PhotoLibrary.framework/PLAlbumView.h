/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class <PLAlbumViewDataSource>, UITableView, <PLAlbumViewDelegate>, PLImageCountCell, NSMutableIndexSet, UILongPressGestureRecognizer, UITapGestureRecognizer;



@interface PLAlbumView : UIView <UITableViewDataSource, UITableViewDelegate, UIGestureRecognizerDelegate>
{
    NSUInteger _photoCount;
    NSUInteger _columnsPerRow;
    struct CGPoint { 
        float x; 
        float y; 
    } _previousContentOffset;
    UITableView *_tableView;
    NSUInteger _tableViewRowCount;
    <PLAlbumViewDataSource> *_dataSource;
    NSInteger _selectionStyle;
    UITapGestureRecognizer *_tapRecognizer;
    NSUInteger _photoIndexToBeSelected;
    BOOL _allowsSelectionGestures;
    PLImageCountCell *_imageCountCell;
    <PLAlbumViewDelegate> *_delegate;
    NSMutableIndexSet *_selectedPhotoIndexes;
    NSMutableIndexSet *_badgedPhotoIndexes;
    NSMutableIndexSet *_activityIndexes;
    UILongPressGestureRecognizer *_longPressRecognizer;
    NSUInteger _calloutBarSelectionIndex;
    BOOL _swipeSelection;
    struct { 
        unsigned int displayTextBadges : 1; 
        unsigned int canShowCopyCallout : 1; 
        unsigned int delegateCanSelect : 1; 
        unsigned int delegateSelectionDidChange : 1; 
        unsigned int delegateDidTapPhoto : 1; 
        unsigned int delegatePreheatImageData : 1; 
        unsigned int delegateShouldShowPhotoCount : 1; 
    } _albumViewFlags;
}

@property NSInteger photoSelectionStyle;
@property(copy) NSIndexSet *selectedPhotoIndexes;
@property(copy) NSIndexSet *badgedPhotoIndexes;
@property(copy) NSIndexSet *activityIndexes;
@property BOOL displaysTextBadges;
@property BOOL canShowCopyCallout;
@property float bottomInset;
@property <PLAlbumViewDelegate> *delegate;
@property(readonly) NSUInteger calloutPhotoIndex;
@property BOOL allowsSelectionGestures;
@property <PLAlbumViewDataSource> *dataSource;


- (void)setBottomInset:(float)arg1;
- (float)bottomInset;
- (id)tableView;
- (void)clearSelection;
- (NSInteger)tableView:(id)arg1 numberOfRowsInSection:(NSInteger)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)canBecomeFirstResponder;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)reloadData;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)dataSource;
- (struct CGSize { float x1; float x2; })_cellSize;
- (BOOL)_shouldShowImageCountCell;
- (void)_updateColumnsPerRow;
- (void)_updatePhotoCount;
- (void)_updateImageCountCell;
- (void)_updateTableViewRowCount;
- (void)_setupTableView;
- (NSUInteger)_tableRowForPhotoIndex:(NSUInteger)arg1;
- (NSUInteger)_cellPhotoIndexForPhotoIndex:(NSUInteger)arg1;
- (void)_updateTableCell:(id)arg1 photoStartIndex:(NSUInteger)arg2;
- (void)insertPhotoAtIndex:(NSUInteger)arg1;
- (void)removePhotoAtIndex:(NSUInteger)arg1;
- (BOOL)isPhotoVisibleAtIndex:(NSUInteger)arg1;
- (void)_changeSelectionOfPhotoAtIndex:(NSUInteger)arg1 notifyDelegate:(BOOL)arg2;
- (NSUInteger)_photoIndexAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)_changeSelectionOfPhotoAtPoint:(struct CGPoint { float x1; float x2; })arg1 notifyDelegate:(BOOL)arg2;
- (NSInteger)photoSelectionStyle;
- (NSUInteger)selectedPhotoIndex;
- (id)selectedPhotoIndexes;
- (void)setSelectedPhotoIndexes:(id)arg1;
- (void)selectPhotoAtIndex:(NSUInteger)arg1;
- (void)deselectPhotoAtIndex:(NSUInteger)arg1;
- (void)_changeBadgeStateOfPhotoAtIndex:(NSUInteger)arg1;
- (id)badgedPhotoIndexes;
- (void)setBadgedPhotoIndexes:(id)arg1;
- (void)badgePhotoAtIndex:(NSUInteger)arg1;
- (void)debadgePhotoAtIndex:(NSUInteger)arg1;
- (void)_changeActivityStateOfPhotoAtIndex:(NSUInteger)arg1;
- (id)activityIndexes;
- (void)setActivityIndexes:(id)arg1;
- (void)showActivityOnPhotoAtIndex:(NSUInteger)arg1;
- (void)hideActivityOnPhotoAtIndex:(NSUInteger)arg1;
- (void)setDisplaysTextBadges:(BOOL)arg1;
- (BOOL)displaysTextBadges;
- (void)menuDidHideNotification:(id)arg1;
- (void)_tapGesture:(id)arg1;
- (void)_longPressGesture:(id)arg1;
- (void)_updateAutoscrollTimerWithScrollDirection:(id)arg1;
- (void)_selectAfterDelay;
- (NSUInteger)calloutPhotoIndex;
- (void)scrollToPhotoAtIndex:(NSUInteger)arg1 atScrollPosition:(NSInteger)arg2 animated:(BOOL)arg3;
- (void)scrollToBottom;
- (void)insertPhotosAtIndexes:(id)arg1;
- (void)removePhotosAtIndexes:(id)arg1;
- (void)reloadPhotoAtIndex:(NSUInteger)arg1;
- (BOOL)allowsSelectionGestures;
- (void)setAllowsSelectionGestures:(BOOL)arg1;
- (void)_preheatImageDataForDownwardScroll:(BOOL)arg1;
- (void)setPhotoSelectionStyle:(NSInteger)arg1;
- (void)setCanShowCopyCallout:(BOOL)arg1;
- (BOOL)canShowCopyCallout;

@end