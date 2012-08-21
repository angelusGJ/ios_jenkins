//
//  DetailViewController.h
//  iOsJenkins
//
//  Created by Angel Garcia Jerez on 09/08/12.
//  Copyright (c) 2012 Angel Garcia Jerez. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

- (void) setInvocation;
- (void) setInvocation;
@end
