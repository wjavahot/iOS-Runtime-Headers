/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSObject<UITextDocumentProxy>, NSString, UIInputView, UIKeyboard;

@interface UIInputViewController : UIViewController <UITextInputDelegate, _UITextDocumentInterfaceDelegate> {
    BOOL _alignsToContentViewController;
    NSString *_primaryLanguage;
    NSObject<UITextDocumentProxy> *_textDocumentProxy;
}

@property BOOL _alignsToContentViewController;
@property(readonly) UIKeyboard * _keyboard;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(retain) UIInputView * inputView;
@property(copy) NSString * primaryLanguage;
@property(readonly) Class superclass;
@property(readonly) NSObject<UITextDocumentProxy> * textDocumentProxy;

+ (BOOL)_requiresProxyInterface;

- (BOOL)_alignsToContentViewController;
- (id)_compatibilityController;
- (void)_didResetDocumentState;
- (id)_extensionContext;
- (id)_keyboard;
- (id)_proxyInterface;
- (void)_setExtensionContext:(id)arg1;
- (void)_setTextDocumentProxy:(id)arg1;
- (void)_setupInputController;
- (BOOL)_shouldForwardSystemLayoutFittingSizeChanges;
- (struct CGSize { float x1; float x2; })_systemLayoutSizeFittingSize:(struct CGSize { float x1; float x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (id)_textDocumentInterface;
- (void)_willResetDocumentState;
- (void)advanceToNextInputMode;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)dismissKeyboard;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)inputView;
- (void)loadView;
- (id)primaryLanguage;
- (void)requestSupplementaryLexiconWithCompletion:(id)arg1;
- (void)returnToPreviousInputMode;
- (void)selectionDidChange:(id)arg1;
- (void)selectionWillChange:(id)arg1;
- (void)setInputView:(id)arg1;
- (void)setPrimaryLanguage:(id)arg1;
- (void)setView:(id)arg1;
- (void)set_alignsToContentViewController:(BOOL)arg1;
- (void)textDidChange:(id)arg1;
- (id)textDocumentProxy;
- (void)textWillChange:(id)arg1;
- (void)viewDidLoad;

@end
