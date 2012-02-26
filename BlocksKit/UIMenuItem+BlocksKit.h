//
//  UIMenuItem+BlocksKit.h
//  BlocksKit
//
//  Created by Philip Messlehner on 26.02.12.
//  Copyright (c) 2012 Dizzy Technology. All rights reserved.
//

#import "BKGlobals.h"

/** Block event initialization for UIMenuItem.
 
 This set of extensions has near-drop-in replacements
 for the standard UIMenuItem initialization,
 using a block handler instead of a target/selector.
 
 Includes code by the following:
 
 - Kevin O'Neill.  <https://github.com/kevinoneill>. 2011. BSD.
 - Zach Waldowski. <https://github.com/zwaldowski>.  2011. MIT.
 - Philip Messlehner. <https://github.com/messi>.    2011. MIT.
 
 @warning UIMenuItem is only available on iOS or in a Mac app using Chameleon.
 */

@interface UIMenuItem (BlocksKit)

/** Creates and returns a configured item containing the specified system item.
 
 @return Newly initialized item with the specified properties.
 @param title The title of the menu item.
 @param action The block that gets fired for handling the command represented by the menu item.
 */
- (id)initWithTitle:(NSString *)title handler:(BKSenderBlock)action;

@end
