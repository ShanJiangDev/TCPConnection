//
//  ClientThread.h
//  TCPDataTransfer
//
//  Created by Shan on 4/4/16.
//  Copyright (c) 2016 Shan. All rights reserved.
//

#import <Foundation/Foundation.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

@interface ClientThread : NSThread{

    CFSocketRef obj_client;
    
}
-(void)initializeClient;
-(void)main;
//-(void)TCPClientCallBackHandler;
-(void)DisconnectFromServer;
-(void)SendTCPDataPacke:(const char*) data;

@end
