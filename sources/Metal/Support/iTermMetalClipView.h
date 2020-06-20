//
//  iTermMetalClipView.h
//  iTerm2SharedARC
//
//  Created by George Nachman on 10/2/17.
//

#import <Cocoa/Cocoa.h>

#import "iTermMTKView.h"

@interface iTermMetalClipView : NSClipView

@property (nonatomic, weak) NSView<iTermMTKView> *metalView NS_AVAILABLE_MAC(10_11);
@property (nonatomic) BOOL useMetal;

@end
