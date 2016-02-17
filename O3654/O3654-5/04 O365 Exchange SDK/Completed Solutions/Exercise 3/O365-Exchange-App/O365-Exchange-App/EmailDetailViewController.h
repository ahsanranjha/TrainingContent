//
//  EmailDetailViewController.h
//  O365-Exchange-App
//
//  Created by Lucas Damian Napoli on 28/10/14.
//  Copyright (c) 2014 MS Open Tech. All rights reserved.
//

#import "ViewController.h"
#import <MSGraph-SDK-iOS/MSGraphServiceClient.h>
#import "ExchangeGraphService.h"
@interface EmailDetailViewController : ViewController
@property (weak, nonatomic) NSString *token;
@property (weak, nonatomic) IBOutlet UILabel *author;
@property (weak, nonatomic) IBOutlet UILabel *subject;
@property (weak, nonatomic) IBOutlet UILabel *date;
@property (weak, nonatomic) IBOutlet UIWebView *emailBody;

@property (nonatomic) MSGraphServiceMessage *currentMsg;
@end