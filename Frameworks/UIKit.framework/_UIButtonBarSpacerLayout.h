/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIButtonBarSpacerLayout : _UIButtonBarLayout {
    NSLayoutConstraint *_equalSize;
    bool _flexible;
    bool _groupSpacer;
    UIBarButtonItem *_item;
    NSLayoutConstraint *_minimumSize;
    NSLayoutConstraint *_requestedSize;
    UIView *_spacer;
}

+ (float)minimumLayoutWidthForSpacerBetweenLayout:(id)arg1 andLayout:(id)arg2 givenMinimumSpaceWidth:(float)arg3;
+ (id)spacerForLayoutMetrics:(id)arg1 betweenLayout:(id)arg2 andLayout:(id)arg3;

- (void).cxx_destruct;
- (void)_addConstraintsToActivate:(id)arg1 toDeactivate:(id)arg2;
- (void)_addLayoutViews:(id)arg1;
- (void)_configure;
- (bool)_isSpace;
- (id)_item;
- (id)description;
- (id)initWithLayoutMetrics:(id)arg1;
- (id)initWithLayoutMetrics:(id)arg1 barButtonItem:(id)arg2;
- (float)minimumLayoutWidthGivenMinimumSpaceWidth:(float)arg1;

@end