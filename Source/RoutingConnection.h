#import <Foundation/Foundation.h>
#import <CocoaHTTPServer/HTTPConnection.h> 
@class RoutingHTTPServer, GCDAsyncSocket;

@interface RoutingConnection : HTTPConnection

@property (nonatomic, readonly) GCDAsyncSocket *socket;

@property (nonatomic, readonly) HTTPMessage *request;

-(HTTPConfig *)config;

@end
