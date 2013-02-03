/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class <SUScriptNavigationItem>, UINavigationItem, NSString;

@interface SUScriptNavigationItem : SUScriptObject {
}

@property(copy) NSString * backButtonTitle;
@property id hidesBackButton;
@property(retain) <SUScriptNavigationItem> * leftItem;
@property id leftItemsSupplementBackButton;
@property(retain) <SUScriptNavigationItem> * leftMostItem;
@property(readonly) UINavigationItem * nativeNavigationItem;
@property(retain) NSString * prompt;
@property(retain) <SUScriptNavigationItem> * rightItem;
@property(retain) NSString * title;
@property(retain) id titleView;

+ (void)_disconnectNavigationItem:(id)arg1 scriptObject:(id)arg2;
+ (id)_rootScriptObjectForObject:(id)arg1;
+ (void)disconnectNavigationItem:(id)arg1 forScriptObject:(id)arg2;
+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)_className;
- (id)_copyScriptButtonForButtonItem:(id)arg1;
- (id)_copyScriptObjectForButtonItem:(id)arg1;
- (id)attributeKeys;
- (id)backButtonTitle;
- (id)hidesBackButton;
- (id)init;
- (id)initWithNativeNavigationItem:(id)arg1;
- (id)leftItem;
- (id)leftItems;
- (id)leftItemsSupplementBackButton;
- (id)leftMostItem;
- (id)nativeNavigationItem;
- (id)prompt;
- (id)rightItem;
- (id)rightItems;
- (id)scriptAttributeKeys;
- (void)setBackButtonTitle:(id)arg1;
- (void)setHidesBackButton:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHidesBackButton:(id)arg1;
- (void)setLeftItem:(id)arg1 animated:(BOOL)arg2;
- (void)setLeftItem:(id)arg1;
- (void)setLeftItems:(id)arg1 animated:(BOOL)arg2;
- (void)setLeftItems:(id)arg1;
- (void)setLeftItemsSupplementBackButton:(id)arg1;
- (void)setLeftMostItem:(id)arg1 animated:(BOOL)arg2;
- (void)setLeftMostItem:(id)arg1;
- (void)setPrompt:(id)arg1;
- (void)setRightItem:(id)arg1 animated:(BOOL)arg2;
- (void)setRightItem:(id)arg1;
- (void)setRightItems:(id)arg1 animated:(BOOL)arg2;
- (void)setRightItems:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleView:(id)arg1 animated:(BOOL)arg2;
- (void)setTitleView:(id)arg1;
- (void)tearDownUserInterface;
- (id)title;
- (id)titleView;

@end
