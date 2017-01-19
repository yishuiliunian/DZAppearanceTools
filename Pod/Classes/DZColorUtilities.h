//
//  DZColorUtilities.h
//  Pods
//
//  Created by stonedong on 16/4/5.
//
//

#import <Foundation/Foundation.h>
#import <Chameleon.h>
#define DZExternColor(name) FOUNDATION_EXTERN UIColor* DZColor##name ();
#define DZColorDefine(name , hex, a) UIColor* DZColor##name()\
{\
static UIColor* pinkColor = nil;\
static dispatch_once_t onceToken;\
dispatch_once(&onceToken, ^{\
pinkColor = [UIColor colorWithHexString:@""#hex withAlpha:a];\
});\
return pinkColor;\
}


