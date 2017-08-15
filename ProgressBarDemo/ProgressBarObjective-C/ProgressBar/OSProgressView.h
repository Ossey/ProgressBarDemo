//
//  OSProgressView.h
//  ProgressBarDemo
//
//  Created by Ossey on 15/08/2017.
//  Copyright © 2017 Ossey. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface OSProgressView : UIImageView

@property (nonatomic, strong) UIImageView *progressBar;

@property (nonatomic, assign) CGFloat progress;

@property (nonatomic, strong) UIColor *progressTintColor;

@property (nonatomic, strong) UIColor *trackTintColor;

- (instancetype)initWithFrame:(CGRect)frame;

- (void)setProgress:(CGFloat)progress animated:(BOOL)animated;

@end
