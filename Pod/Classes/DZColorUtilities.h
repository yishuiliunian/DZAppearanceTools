//
//  DZColorUtilities.h
//  Pods
//
//  Created by stonedong on 16/4/5.
//
//

#import <Foundation/Foundation.h>
#import <HexColors.h>
#define LTExternColor(name) FOUNDATION_EXTERN UIColor* LTColor##name ();
#define LTColorDefine(name , hex, a) UIColor* LTColor##name()\
{\
static UIColor* pinkColor = nil;\
static dispatch_once_t onceToken;\
dispatch_once(&onceToken, ^{\
pinkColor = [UIColor hx_colorWithHexString:@""#hex alpha:a];\
});\
return pinkColor;\
}


