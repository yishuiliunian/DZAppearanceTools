//
//  DZFontUtilities.h
//  Pods
//
//  Created by stonedong on 16/4/5.
//
//

#import <Foundation/Foundation.h>

#define DEFINE_EXTERN_FONT(name) FOUNDATION_EXTERN UIFont* DZFont##name();

#define IMP_SYSTEM_FONT(name, size) UIFont* DZFont##name() {\
static UIFont* font = nil;\
static dispatch_once_t onceToken;\
dispatch_once(&onceToken, ^{\
font = [UIFont systemFontOfSize:size];\
});\
return font;\
}


#define IMP_SYSTEM_BOLD_FONT(name, size) UIFont* DZFont##name() {\
static UIFont* font = nil;\
static dispatch_once_t onceToken;\
dispatch_once(&onceToken, ^{\
font = [UIFont boldSystemFontOfSize:size];\
});\
return font;\
}