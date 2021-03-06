/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABChameleonCell : UITableViewCell {
    int  _abCellStyle;
    bool  _hasConfiguredBackgroundViews;
    <ABStyleProvider> * _styleProvider;
}

@property (nonatomic) int abCellStyle;
@property (nonatomic, retain) <ABStyleProvider> *styleProvider;

- (void)_updateBackgroundViewsForCellStyleAndLocation;
- (void)_updateTextStylesForCellStyle;
- (int)abCellStyle;
- (void)dealloc;
- (void)setAbCellStyle:(int)arg1;
- (void)setSectionLocation:(int)arg1 animated:(bool)arg2;
- (void)setStyleProvider:(id)arg1;
- (id)styleProvider;

@end
