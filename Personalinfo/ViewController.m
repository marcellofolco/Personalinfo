//
//  ViewController.m
//  Personalinfo
//
//  Created by Marcello Folco on 2017-01-23.
//  Copyright © 2017 Marcello Folco. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void) hideLabels{
    [self.FNLabel setHidden:YES];
    [self.LNLabel setHidden:YES];
    [self.PhoneLabel setHidden:YES];
    [self.NumberLabel setHidden:YES];
    [self.StreetLabel setHidden:YES];
    [self.CityLabel setHidden:YES];
    [self.CountryLabel setHidden:YES];
    [self.PCLabel setHidden:YES];
    
}

- (void)viewDidLoad {
    [self hideLabels];
    [self.ModButton setHidden:YES];
    [self.CButton setHidden:YES];
    
    
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction)cleardidTouchUpInside:(id)sender {
}

- (IBAction)submitdidTOuchUpInside:(id)sender {
}

- (IBAction)modifydidTouchUpInside:(id)sender {
}

@end
