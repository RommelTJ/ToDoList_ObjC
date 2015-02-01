//
//  ToDoItem.h
//  ToDoList_ObjC
//
//  Created by Rommel Rico on 1/31/15.
//  Copyright (c) 2015 Rommel Rico. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
