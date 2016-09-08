//
//  JLCollectionViewCell.h
//  JLWaterfallFlow
//
//  Created by Jasy on 16/1/25.
//  Copyright © 2016年 Jasy. All rights reserved.
//

#import <UIKit/UIKit.h>
@class DataModel;
@interface JLCollectionViewCell : UICollectionViewCell
@property (weak, nonatomic) IBOutlet UIImageView *cellImg;
@property (weak, nonatomic) IBOutlet UILabel *priceLa;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *bottomHeight;


-(void)setCellData:(DataModel *)dataModel;
@end
