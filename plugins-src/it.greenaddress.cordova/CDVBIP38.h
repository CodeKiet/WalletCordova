//
//  CDVBIP38.h
//  GreenAddress
//

#import <Cordova/CDVPlugin.h>


@interface CDVBIP38 : CDVPlugin {}

- (void)decrypt_raw:(CDVInvokedUrlCommand*)command;
- (void)encrypt_raw:(CDVInvokedUrlCommand*)command;

- (void)decrypt:(CDVInvokedUrlCommand*)command;
- (void)encrypt:(CDVInvokedUrlCommand*)command;

- (void)clearCookies:(CDVInvokedUrlCommand*)command;  // TODO separate plugin?
- (void)launchBlockstreamAppStore:(CDVInvokedUrlCommand*)command;  // TODO separate plugin?

@end
