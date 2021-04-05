## 记录写 cpp 中的一些东西

+ main() 语句中，可以省略最后的 return 语句
+ 改变编程习惯，c/c++ 中的char只能存储一个字符，如果要存储字符串要char类型的数组
+ C++ requires main() to be of type int.
+ Release2.0 之后，c++将字符常量存储为char类型，而不是跟C一样，将字符常量存储为int类型 
+ 需要复习组成原理知识了
+ int temp(2); int temp2 = 2; int temp3{2};
+ int 占4byte，即2^(-16)-1 ~ 2^16，-21亿~21亿
+ unsigned int 同样占4byte，但是范围从0~2^32，即0~42亿
+ cpp 的 cout 可以直接输出字符串数组 `cout << str_array;`