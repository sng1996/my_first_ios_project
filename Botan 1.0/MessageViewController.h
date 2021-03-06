//
//  MessageViewController.h
//  Botan 1.0
//
//  Created by Сергей Гаврилко on 14.03.17.
//  Copyright © 2017 Сергей Гаврилко. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AppDelegate.h"
#import "MessageCell.h"
#import "Message.h"
#import "TalkingViewController.h"

@interface MessageViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>{
    
    AppDelegate *mainDelegate;
    NSMutableArray *arrForTable;
    IBOutlet UITableView *mainTableView;
    NSData *jsonData;
}

@property (nonatomic, strong) IBOutlet UITableView *mainTableView;

@end
