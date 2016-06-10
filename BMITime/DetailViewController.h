//
//  DetailViewController.h
//  BMITime
//
//  Created by Michelle Vargas on 6/9/16.
//  Copyright © 2016 Michelle Vargas. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

