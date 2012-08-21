//
//  DetailViewControllerTest.m
//  iOsJenkins
//
//  Created by Angel Garcia Jerez on 09/08/12.
//  Copyright (c) 2012 Angel Garcia Jerez. All rights reserved.
//

#import "DetailViewControllerTest.h"
#import <UIKit/UIKit.h>



@implementation DetailViewControllerTest
@synthesize detailView;
@synthesize detailItem;
@synthesize detailDescriptionLabel;

- (void)setUp {
    [super setUp];
    detailView = [[DetailViewController alloc] init];
    detailItem = [OCMockObject mockForClass: [NSDate class]];
    detailDescriptionLabel = [OCMockObject mockForClass: [UILabel class]];
    
    detailView.detailDescriptionLabel = detailDescriptionLabel;
    int result;
}

- (void) testHaveToSetTextLabelWithItemDescription  {
    [[[detailItem stub] andReturn: @"text"] description];
   // [[detailDescriptionLabel expect] setText: @"text"];
    
    [detailView setDetailItem: detailItem];
    
    [detailDescriptionLabel verify];
}
@end
