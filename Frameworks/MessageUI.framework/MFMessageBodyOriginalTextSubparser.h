/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <MFMessageBodyElement_Private>, NSMutableArray;

@interface MFMessageBodyOriginalTextSubparser : MFMessageBodySubparser {
    BOOL _foundForwardSeparator;
    BOOL _foundText;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _foundTextBlock;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _foundWhitespaceBlock;

    <MFMessageBodyElement_Private> *_lastNonWhitespaceTextElement;
    NSMutableArray *_lastTextElements;
}

- (void)_consumeAnyLastTextElementAsAttribution:(BOOL)arg1;
- (void)_consumeTextElement:(id)arg1 isAttribution:(BOOL)arg2;
- (void)copyBlocks;
- (void)dealloc;
- (void)messageBodyParser:(id)arg1 foundMessageBodyElement:(id)arg2;
- (void)messageBodyParserDidFinishParsing:(id)arg1;
- (void)setFoundTextBlock:(id)arg1;
- (void)setFoundWhitespaceBlock:(id)arg1;

@end
