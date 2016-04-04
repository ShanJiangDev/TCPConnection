//
//  ServerThread.m
//  TCPDataTransfer
//
//  Created by Shan on 4/4/16.
//  Copyright (c) 2016 Shan. All rights reserved.
//

#import "ServerThread.h"

@implementation ServerThread

-(void)initializedServer{
    
    CFSocketContext sctx = {0, (__bridge void *)(self),NULL,NULL,NULL};
    
    obj_server = CFSocketCreate(kCFAllocatorDefault, AF_INET, SOCK_STREAM, IPPROTO_TCP,kCFSocketAcceptCallBack,TCPServerCallBackHandler, &sctx);
    
    struct sockaddr_in socket_addr;
    memset(&socket_addr, 0, sizeof(socket_addr));
    socket_addr.sin_len = sizeof(socket_addr);
    socket_addr.sin_family = AF_INET;
    socket_addr.sin_port = htons(6658);
    socket_addr.sin_addr.s_addr = INADDR_ANY;
    
    CFDataRef dref = CFDataCreate(kCFAllocatorDefault, (UInt8*)&socket_addr, sizeof(socket_addr));
    
    CFSocketSetAddress(obj_server, dref);
    
    CFRelease(dref);
    
}

-(void)main{
    
    CFRunLoopSourceRef loopref = CFSocketCreateRunLoopSource(kCFAllocatorDefault, obj_server, 0);
    
    CFRunLoopAddSource(CFRunLoopGetCurrent(), loopref, kCFRunLoopDefaultMode);
    
    CFRelease(loopref);
    
    CFRunLoopRun();
}

void TCPServerCallBackHandler(CFSocketRef s, CFSocketCallBackType callbacktype, CFDataRef address, const void *data, void *info){
}
@end


