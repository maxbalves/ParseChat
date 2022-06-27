//
//  LoginViewController.h
//  ParseChat
//
//  Created by Max Bagatini Alves on 6/27/22.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface LoginViewController : UIViewController

- (void) presentChat;

- (BOOL) isBlankUsername:(NSString *)username password:(NSString *)password;

- (void) showAlertWithTitle:(NSString *)title message:(NSString *)message;

@end

NS_ASSUME_NONNULL_END
