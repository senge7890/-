//
//  JLCollectionViewCell.m
//  JLWaterfallFlow
//
//  Created by Jasy on 16/1/25.
//  Copyright © 2016年 Jasy. All rights reserved.
//

#import "JLCollectionViewCell.h"
#import "UIImageView+WebCache.h"
#import "DataModel.h"
@implementation JLCollectionViewCell

- (void)awakeFromNib {
    // Initialization code
}

-(void)setCellData:(DataModel *)dataModel
{
    [self.cellImg sd_setImageWithURL:[NSURL URLWithString:dataModel.img]];
    self.priceLa.text = dataModel.price;
}

@end
