//
//  Copyright (c) 2013 Luke Scott
//  https://github.com/lukescott/DraggableCollectionView
//  Distributed under MIT license
//

#import <Foundation/Foundation.h>

@class LSCollectionViewHelper;

@protocol UICollectionViewDataSource_Draggable <UICollectionViewDataSource>
@required

- (void)collectionView:(UICollectionView *)collectionView moveItemAtIndexPath:(NSIndexPath *)fromIndexPath toIndexPath:(NSIndexPath *)toIndexPath;
- (BOOL)collectionView:(UICollectionView *)collectionView canMoveItemAtIndexPath:(NSIndexPath *)indexPath;

@optional

- (BOOL)collectionView:(UICollectionView *)collectionView canMoveItemAtIndexPath:(NSIndexPath *)indexPath toIndexPath:(NSIndexPath *)toIndexPath;
- (void (^)(UIView *cell))collectionView:(UICollectionView *)collectionView customActionForMovingIndexAtIndexPath:(NSIndexPath *)indexPath toPosition:(CGPoint)position completion:(void (^)())completion;

- (void)collectionView:(UICollectionView *)collectionView didStartMovingItemAtIndexPath:(NSIndexPath *)fromIndexPath;

@end
