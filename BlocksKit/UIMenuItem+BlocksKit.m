//
//  UIMenuItem+BlocksKit.m
//  BlocksKit
//
//  Created by Philip Messlehner on 26.02.12.
//  Copyright (c) 2012 Dizzy Technology. All rights reserved.
//

#import "UIMenuItem+BlocksKit.h"
#import "NSObject+AssociatedObjects.h"

static char kMenuItemBlockKey;

@interface UIMenuItem (BlocksKitInternal)
- (void)_handleAction:(UIBarButtonItem *)sender;
@end

@implementation UIMenuItem (BlocksKit)

- (id)initWithTitle:(NSString *)title handler:(BKSenderBlock)action {
    self = [[UIMenuItem alloc] initWithTitle:title action:@selector(_handleAction:)];
    [self associateCopyOfValue:action withKey:&kMenuItemBlockKey];
	return self;
}

- (void)_handleAction:(UIBarButtonItem *)sender {
	BKSenderBlock block = [self associatedValueForKey:&kMenuItemBlockKey];
	if (block)
		block(self);
}

@end
