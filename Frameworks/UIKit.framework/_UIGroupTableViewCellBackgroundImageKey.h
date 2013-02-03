/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIColor;

@interface _UIGroupTableViewCellBackgroundImageKey : NSObject <NSCopying> {
    struct CGSize { 
        float width; 
        float height; 
    UIColor *_backgroundColor;
    UIColor *_borderColor;
    UIColor *_fillColor;
    float _leftPhase;
    BOOL _opaque;
    float _rightPhase;
    NSInteger _sectionLocation;
    } _size;
}

@property(retain) UIColor *backgroundColor;
@property(retain) UIColor *borderColor;
@property(retain) UIColor *fillColor;
@property float leftPhase;
@property BOOL opaque;
@property float rightPhase;
@property NSInteger sectionLocation;
@property CGSize size;

- (id)backgroundColor;
- (id)borderColor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)fillColor;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (float)leftPhase;
- (BOOL)opaque;
- (float)rightPhase;
- (NSInteger)sectionLocation;
- (void)setBackgroundColor:(id)arg1;
- (void)setBorderColor:(id)arg1;
- (void)setFillColor:(id)arg1;
- (void)setLeftPhase:(float)arg1;
- (void)setOpaque:(BOOL)arg1;
- (void)setRightPhase:(float)arg1;
- (void)setSectionLocation:(NSInteger)arg1;
- (void)setSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })size;

@end
