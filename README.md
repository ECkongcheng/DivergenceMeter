# 世界线变动率探测仪

## 介绍
演示视频（B站）：https://www.bilibili.com/video/BV1yb411T746
这个项目的开始其实就是因为喜欢命运石之门里面的世界线变动率探测仪，于是就把他做了出来放在了b站上。
然后越来越多的人想要复现这个，于是我就打算把它开源出来。
之前只是把工程放在群文件里让大家加群下载 但是人越来越多就显得很麻烦 于是就在这里开源出来。

## 说明
主控： STM32F030F4P6 核心板
辉光管：QS18-12 （南昌，新光）
驱动：移位寄存器+三极管（74HC595+13001）
适配器：220V-12V适配器
电源：LM2596 12V-5V
RTC：DS3231
OLED：IIC 128*64 

## 程序
使用的是CubeMX创建的工程基于STM32HAL库进行开发，完全c语言代码。

## 硬件
驱动板可以直接使用PCB打样，接口也在丝印标注可以很方便的驱动整个辉光管驱动板。
控制板由于采用的都是模块可以直接用万能板搭起来，关于GPIO的连接可以参照pdf或者是工程内的GPIO_Link.txt，如果随时遇到任何问题欢迎来QQ群交流。
## 图片
### 整机
![整机](https://github.com/kerisu/DivergenceMeter/blob/master/image/overview.jpg)
### 控制板
![控制板](https://github.com/kerisu/DivergenceMeter/blob/master/image/ctbd.jpg)
### 驱动板 AD
![驱动板PCB](https://github.com/kerisu/DivergenceMeter/blob/master/image/PCB1.png)
![驱动板PCB](https://github.com/kerisu/DivergenceMeter/blob/master/image/PCB2.png)
![驱动板PCB](https://github.com/kerisu/DivergenceMeter/blob/master/image/PCB3.png)
![驱动板PCB](https://github.com/kerisu/DivergenceMeter/blob/master/image/PCB4.png)
### 驱动板 实物
![控制板](https://github.com/kerisu/DivergenceMeter/blob/master/image/pcbb.jpg)
![控制板](https://github.com/kerisu/DivergenceMeter/blob/master/image/pcbt.jpg)


