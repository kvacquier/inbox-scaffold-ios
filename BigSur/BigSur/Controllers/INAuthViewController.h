//
//  INAuthViewController.h
//  BigSur
//
//  Created by Ben Gotow on 5/15/14.
//  Copyright (c) 2014 Inbox. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface INAuthViewController : UIViewController <UITextFieldDelegate>

@property (weak, nonatomic) IBOutlet UITextField *emailField;
@property (weak, nonatomic) IBOutlet UIButton *signInButton;

- (IBAction)signInTapped:(id)sender;

@end
