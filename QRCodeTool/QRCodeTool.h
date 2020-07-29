//
//  QRCodeTool.h
//  Test
//
//  Created by Jiang Hao on 2020/7/17.
//  Copyright © 2020 jianghao. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN

@interface QRCodeTool : NSObject
/* qrString:二维码链接
 * width:二维码大小(宽高1:1)
 * RGB:二维码渐变颜色,默认:1-0-0
 */
+(UIImage*)qrCodeImgWidth:(CGFloat)width andColorWithRed:(CGFloat)red Green:(CGFloat)green Blue:(CGFloat)blue andQRString:(NSString *)qrString;

@end

NS_ASSUME_NONNULL_END
