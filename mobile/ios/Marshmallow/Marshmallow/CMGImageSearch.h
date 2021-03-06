//
//  CMGImageSearch.h
//  Marshmallow
//
//  Created by Brandon Borders on 10/27/15.
//  Copyright © 2015 Cantilevered Marshmallow. All rights reserved.
//

#import "CMSearchPopup.h"
#import "CMGImageCell.h"
#import <SFFocusViewLayout/SFFocusViewLayout.h>
#import <Haneke/Haneke.h>
#import <AFNetworking/AFNetworking.h>
#import <FontAwesomeKit/FontAwesomeKit.h>

@interface CMGImageResult : NSObject

@property (nonatomic, strong) UIImage *image;

@property (nonatomic, strong) NSString *url;

@end

@protocol CMGImageSearchDelegate

@required

- (void)imageSelected:(CMGImageResult *)result;

@end

@interface CMGImageSearch : CMSearchPopup<UICollectionViewDelegate, UICollectionViewDataSource, UIGestureRecognizerDelegate, UISearchBarDelegate>

@property (nonatomic, strong) UICollectionView *collectionView;

@property (nonatomic, strong) NSArray<NSString *> *images;

@property (nonatomic, strong) id<CMGImageSearchDelegate> delegate;

@property (nonatomic, weak) CMGImageCell *selectedCell;

@property (nonatomic, weak) NSString *selectedUrl;

- (void)cellSelected:(UITapGestureRecognizer *)sender;

@end