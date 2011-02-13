//
//  SMFMoviePreviewController.h
//  SMFramework
//
//  Created by Thomas Cool on 2/6/11.
//  Copyright 2011 tomcool.org. All rights reserved.
//

#import "SMFPhotoMethods.h"
#import "SMFThemeInfo.h"
#import <Backrow/Backrow.h>
@class BRControl;
@protocol SMFMoviePreviewControllerDatasource
-(NSString *)title;
-(NSString *)subtitle;
-(NSString *)summary;
-(NSArray  *)headers;
-(NSArray  *)columns;
-(NSString *)rating;
-(BRImage *)coverArt;
-(BRPhotoDataStoreProvider *)providerForShelf;
@optional
-(NSArray *)buttons;
-(NSString *)posterPath;
@end
@class SMFMoviePreviewController;
@protocol SMFMoviePreviewControllerDelegate
-(void)controller:(SMFMoviePreviewController *)c selectedControl:(BRControl *)ctrl;
@end

    

@interface SMFMoviePreviewController : BRController<SMFMoviePreviewControllerDatasource> {
    BRMetadataTitleControl *_metadataTitleControl;
    BRTextControl       * _summaryControl;
    BRButtonControl     * _previewButton;
    BRButtonControl     * _playButton;
    BRButtonControl     * _queueButton;
    BRButtonControl     * _moreButton;
    BRMediaShelfControl *_shelfControl;
    BRCoverArtPreviewControl *_previewControl;
    NSMutableDictionary        *_info;
    NSObject<SMFMoviePreviewControllerDatasource> *datasource;
    NSObject<SMFMoviePreviewControllerDelegate> *delegate;
    BOOL                _summaryToggled;
    BRDividerControl    *_div3;
    BRTextControl       *_alsoWatched;
}
@property (retain)NSObject<SMFMoviePreviewControllerDatasource>*datasource;
@property (retain)NSObject<SMFMoviePreviewControllerDelegate>*delegate;

+(NSDictionary *)columnHeaderAttributes;
+(NSDictionary *)columnLabelAttributes;
-(NSString *)title;
-(NSString *)subtitle;
-(NSString *)summary;
-(NSString *)posterPath;
-(NSArray  *)headers;
-(NSArray  *)columns;
-(NSString *)rating;
-(BRPhotoDataStoreProvider *)providerForShelf;
-(void)reload;
-(void)reloadShelf;
-(void)toggleLongSummary;
@end
