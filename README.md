Qt5二维码识别库Qr
--------------------
###这是一个什么样的库？
在Qt5开发程序时，可以用ZXing库识别二维码，但是在开发的过程中直接将ZXing库的源码引入比较繁琐。因此，我将ZXing库封装成了dll，以便于在项目中使用ZXing。

###什么情况下使用Qr库？
首先，Qr还是依赖Qt框架的，因此，建议在Qt程序中使用Qr。其次，我是在Win32+MSVC2010下开发的。

###如何使用Qr库？
Qr库只导出了一个GetQrStr这一个函数，函数的原型是：
	bool GetQrStr(const char* file, char* buffer, int buffer_size)
使用方法见
	test/main.cpp
    
###其他
我的联系方式是thlgood(#)yucoat.com
