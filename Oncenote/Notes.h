//
//  Notes.h
//  Oncenote
//
//  Created by chenyufeng on 15/11/14.
//  Copyright © 2015年 chenyufengweb. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Notes : NSObject

@property(nonatomic,copy) NSString* userId;
@property(nonatomic,copy) NSString* username;
@property(nonatomic,copy) NSString* noteTitle;
@property(nonatomic,copy) NSString* noteText;

@end
