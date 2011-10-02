//
//  sampleProjectAppDelegate.h
//  sampleProject
//
//  Created by Usman Ahmad on 10/2/11.
//  Copyright 2011 Upanels. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface sampleProjectAppDelegate : NSObject <NSApplicationDelegate> {
@private
    NSWindow *window;
}

@property (assign) IBOutlet NSWindow *window;

@end
