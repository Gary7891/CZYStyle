//
//  CZYStyle.h
//  CZYStyle
//
//  Created by Gary on 08/04/2018.
//  Copyright © 2018 czy. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>


#define CZYSTYLE(_SELECTOR) [[CZYStyle globalStyleSheet] styleWithSelector:@#_SELECTOR]

#define CZYSTYLESTATE(_SELECTOR, _STATE) [[CZYStyle globalStyleSheet] \
styleWithSelector:@#_SELECTOR forState:_STATE]

#define CZYSTYLESHEET ((id)[CZYStyle globalStyleSheet])

#define CZYSTYLEVAR(_VARNAME) [CZYSTYLESHEET _VARNAME]

@interface CZYStyle : NSObject


+ (CZYStyle*)globalStyleSheet;

+ (void)setGlobalStyleSheet:(CZYStyle*)styleSheet;

- (UIColor *)getColorByHex:(NSString *)hexColor;
- (UIColor *)getColorByHex:(NSString *)hexColor alpha:(CGFloat)alpha;

@end
