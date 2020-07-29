# JHQRCodeDemo
一行代码快速生成二维码
```
1.先导入文件
#import "QRCodeTool.h"
```
```
2.调用
NSString *urlString=@"https://www.baidu.com";
    self.qrCodeView.image=[QRCodeTool qrCodeImgWidth:200
                                     andColorWithRed:1 Green:0 Blue:0
                                     andQRString:urlString];
```
