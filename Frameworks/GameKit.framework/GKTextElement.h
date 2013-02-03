/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class UIColor, NSString, UIFont;

@interface GKTextElement : NSObject {
    struct CGSize { 
        float width; 
        float height; 
    struct CGSize { 
        float width; 
        float height; 
    struct CGSize { 
        float width; 
        float height; 
    UIColor *_color;
    UIFont *_font;
    UIColor *_highlightedColor;
    UIColor *_highlightedShadowColor;
    NSInteger _lineBreakMode;
    NSInteger _lineSpacing;
    } _offset;
    UIColor *_shadowColor;
    } _shadowOffset;
    } _size;
    NSString *_text;
    NSInteger _textAlignment;
}

@property(retain) UIColor *color;
@property(retain) UIFont *font;
@property(retain) UIColor *highlightedColor;
@property(retain) UIColor *highlightedShadowColor;
@property(retain) UIColor *shadowColor;
@property(retain) NSString *text;
@property NSInteger lineBreakMode;
@property NSInteger lineSpacing;
@property CGSize offset;
@property CGSize shadowOffset;
@property CGSize size;
@property NSInteger textAlignment;

- (id)color;
- (void)dealloc;
- (struct CGSize { float x1; float x2; })drawInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 highlighted:(BOOL)arg2;
- (id)font;
- (id)highlightedColor;
- (id)highlightedShadowColor;
- (id)init;
- (id)initWithTheme:(id)arg1;
- (NSInteger)lineBreakMode;
- (NSInteger)lineSpacing;
- (struct CGSize { float x1; float x2; })offset;
- (void)setColor:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setHighlightedColor:(id)arg1;
- (void)setHighlightedShadowColor:(id)arg1;
- (void)setLineBreakMode:(NSInteger)arg1;
- (void)setLineSpacing:(NSInteger)arg1;
- (void)setOffset:(struct CGSize { float x1; float x2; })arg1;
- (void)setShadowColor:(id)arg1;
- (void)setShadowOffset:(struct CGSize { float x1; float x2; })arg1;
- (void)setSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(NSInteger)arg1;
- (id)shadowColor;
- (struct CGSize { float x1; float x2; })shadowOffset;
- (struct CGSize { float x1; float x2; })size;
- (id)text;
- (NSInteger)textAlignment;

@end