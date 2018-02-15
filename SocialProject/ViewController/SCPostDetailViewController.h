//
//  SCPostDetailViewController.h
//  SocialProject
//
//  Created by Cheng Qian on 8/24/17.
//  Copyright © 2017 Cheng Qian. All rights reserved.
//

#import <UIKit/UIKit.h>
@class SCPost;

@interface SCPostDetailViewController : UIViewController

- (void)loadDetailViewWithPost:(SCPost *)post;

@end
