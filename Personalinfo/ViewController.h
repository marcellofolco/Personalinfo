//
//  ViewController.h
//  Personalinfo
//
//  Created by Marcello Folco on 2017-01-23.
//  Copyright © 2017 Marcello Folco. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *FNTextField;
@property (weak, nonatomic) IBOutlet UITextField *LNTextField;
@property (weak, nonatomic) IBOutlet UITextField *PhoneTextField;
@property (weak, nonatomic) IBOutlet UITextField *NumTextField;
@property (weak, nonatomic) IBOutlet UITextField *StreetTextField;
@property (weak, nonatomic) IBOutlet UITextField *CityTextField;
@property (weak, nonatomic) IBOutlet UITextField *CountryTextField;
@property (weak, nonatomic) IBOutlet UITextField *PCTextField;

@property (weak, nonatomic) IBOutlet UIButton *CButton;
@property (weak, nonatomic) IBOutlet UIButton *SubButton;
@property (weak, nonatomic) IBOutlet UIButton *ModButton;

@property (weak, nonatomic) IBOutlet UILabel *FNLabel;
@property (weak, nonatomic) IBOutlet UILabel *LNLabel;
@property (weak, nonatomic) IBOutlet UILabel *PhoneLabel;
@property (weak, nonatomic) IBOutlet UILabel *NumberLabel;
@property (weak, nonatomic) IBOutlet UILabel *StreetLabel;
@property (weak, nonatomic) IBOutlet UILabel *CityLabel;
@property (weak, nonatomic) IBOutlet UILabel *CountryLabel;
@property (weak, nonatomic) IBOutlet UILabel *PCLabel;



@end

