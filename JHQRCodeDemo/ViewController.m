//
//  ViewController.m
//  JHQRCodeDemo
//
//  Created by Jiang Hao on 2020/7/29.
//  Copyright © 2020 jianghao. All rights reserved.
//

#import "ViewController.h"
#import "QRCodeTool.h"
@interface ViewController ()
@property (weak, nonatomic) IBOutlet UIImageView *qrCodeView;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    NSString *urlString=@"https://www.baidu.com";
    self.qrCodeView.image=[QRCodeTool qrCodeImgWidth:200
                                     andColorWithRed:1 Green:0 Blue:0
                                     andQRString:urlString];
    
}


@end
