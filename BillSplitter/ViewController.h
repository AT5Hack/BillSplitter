//
//  ViewController.h
//  BillSplitter
//
//  Created by Auston Salvana on 7/11/15.
//  Copyright (c) 2015 ASolo. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UILabel *billSplitLabel;
- (IBAction)splitBill:(id)sender;

@property (weak, nonatomic) IBOutlet UISlider *numberOfPeople;
@property (weak, nonatomic) IBOutlet UITextField *billTotal;

- (IBAction)sliderAction:(id)sender;
@end

