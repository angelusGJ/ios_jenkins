//
//  DetailViewControllerTest.h
//  iOsJenkins
//
//  Created by Angel Garcia Jerez on 09/08/12.
//  Copyright (c) 2012 Angel Garcia Jerez. All rights reserved.
//

#import <SenTestingKit/SenTestingKit.h>
#import <OCMock/OCMock.h>
#import "DetailViewcontroller.h"

@interface DetailViewControllerTest : SenTestCase
    @property(nonatomic) DetailViewController *detailView;
    @property (nonatomic, strong) id detailItem;
    @property (nonatomic, strong) id detailDescriptionLabel;
@end
