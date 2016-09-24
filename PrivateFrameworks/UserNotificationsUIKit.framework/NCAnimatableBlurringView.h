/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCAnimatableBlurringView : UIView <NCBlurring> {
    BOOL  _didConfigureBlurFilter;
    double  _inputRadius;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) double inputRadius;
@property (readonly) Class superclass;

+ (id)_inputRadiusKeyPath;

- (void)_configureBlurFilterIfNecessary;
- (BOOL)_shouldAnimatePropertyWithKey:(id)arg1;
- (float)inputRadius;
- (void)setInputRadius:(float)arg1;

@end