//
//  GUIHandler.h
//  TCPDataTransfer
//
//  Created by Shan on 4/4/16.
//  Copyright (c) 2016 Shan. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Cocoa/Cocoa.h>

@interface GUIHandler : NSObject

@property (weak) IBOutlet NSTextField *tx_receive_data;

@property (weak) IBOutlet NSTextField *tx_send_data;

- (IBAction)StartServerNow:(id)sender;
- (IBAction)StopServerNow:(id)sender;
- (IBAction)ConnectToServer:(id)sender;
- (IBAction)DisconnectFromServer:(id)sender;
- (IBAction)SendData:(id)sender;

@end
