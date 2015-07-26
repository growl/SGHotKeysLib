//
//  SGKeyCombo.h
//  SGHotKeyCenter
//
//  Created by Justin Williams on 7/26/09.
//  Copyright 2009 Second Gear. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface SGKeyCombo : NSObject {
  NSInteger keyCode;
  NSInteger modifiers;
}

@property (nonatomic, assign) NSInteger keyCode;
@property (nonatomic, assign) NSInteger modifiers;

+ (id)clearKeyCombo;
+ (instancetype)keyComboWithKeyCode:(NSInteger)theKeyCode modifiers:(NSInteger)theModifiers;
- (instancetype)initWithKeyCode:(NSInteger)theKeyCode modifiers:(NSInteger)theModifiers NS_DESIGNATED_INITIALIZER;

- (instancetype)initWithPlistRepresentation:(id)thePlist;
@property (nonatomic, readonly, strong) id plistRepresentation;

- (BOOL)isEqual:(SGKeyCombo *)theCombo;

@property (nonatomic, getter=isClearCombo, readonly) BOOL clearCombo;
@property (nonatomic, getter=isValidHotKeyCombo, readonly) BOOL validHotKeyCombo;

@end

@interface SGKeyCombo (UserDisplayAdditions)
@property (nonatomic, readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *keyCodeString;
@property (nonatomic, readonly) NSUInteger modifierMask;
@end

