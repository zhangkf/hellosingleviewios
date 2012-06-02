//
//  ZKFViewController.h
//  HelloViewApp
//
//  Created by twer on 5/29/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ZKFViewController : UIViewController
{
    UILabel *label;
    
}

 @property(nonatomic, retain) IBOutlet UILabel *label;

-(IBAction)clickButton; 

@end
