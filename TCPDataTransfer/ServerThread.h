//
//  ServerThread.h
//  TCPDataTransfer
//
//  Created by Shan on 4/4/16.
//  Copyright (c) 2016 Shan. All rights reserved.
//

#import <Foundation/Foundation.h>
#include <sys/socket.h>
#include <netinet/in.h>
@interface ServerThread : NSThread{
    
    CFSocketRef obj_server;
    
}

-(void)initializedServer;
-(void)main;
-(void)stopServer;
@end
