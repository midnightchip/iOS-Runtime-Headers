/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentPassTableCell : PSTableCell {
    UIControl * _actionButton;
    UIView * _cardSnapshotView;
    <PKPaymentPassTableCellDelegate> * _delegate;
    UILabel * _mainLabel;
    PKPaymentPass * _pass;
    PKPaymentApplication * _paymentApplication;
    int  _settingsContext;
    BOOL  _showAddButton;
    BOOL  _showState;
    BOOL  _showSubTitle;
    UIActivityIndicatorView * _spinner;
    UILabel * _subTextLabel;
}

@property (nonatomic, readonly) UIControl *actionButton;
@property (nonatomic) <PKPaymentPassTableCellDelegate> *delegate;
@property (nonatomic, readonly) UILabel *mainLabel;
@property (nonatomic, retain) PKPaymentPass *pass;
@property (nonatomic) BOOL showAddButton;
@property (nonatomic) BOOL showSubTitle;
@property (nonatomic, readonly) UILabel *subTextLabel;

- (void).cxx_destruct;
- (void)_addButtonPressed:(id)arg1;
- (id)_stringForPassState:(unsigned int)arg1;
- (void)_verifyButtonPressed:(id)arg1;
- (id)actionButton;
- (void)dealloc;
- (id)delegate;
- (void)disableAddButton;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)layoutSubviews;
- (id)mainLabel;
- (id)pass;
- (void)pk_applyAppearance:(id)arg1;
- (id)pk_childrenForAppearance;
- (void)setDelegate:(id)arg1;
- (void)setFelicaProperties:(id)arg1;
- (void)setPass:(id)arg1;
- (void)setShowAddButton:(BOOL)arg1;
- (void)setShowSubTitle:(BOOL)arg1;
- (void)showActivitySpinner:(BOOL)arg1;
- (BOOL)showAddButton;
- (BOOL)showSubTitle;
- (id)subTextLabel;
- (void)tintColorDidChange;

@end
