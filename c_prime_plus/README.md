## 记录写 c 中的一些东西

+ printf 一定要双引号，单引号表示字符常量，会报错
+ %zd 用于 sizeof 和 strlen，其中 sizeof 如果用于数组，会返回整个数组大小（如果用于返回字符数组）
+ 我的机器在输入 double 数时，需要用 %lf 而不是 %f，否则只会返回0
+ C 可以预先声明函数，之后再写函数内容，比如 5_7.c
+ do while 循环中，while后面有分号
+ getchar 类似于先接受输入的字符队列，然后一个一个提取字符进行赋值操作，比如 7_0.c
+ putchar 因为是输出单个字符，因此要用单引号而不是双引号
+ 在我的运行环境下，初始化 char ch，会给ch赋值 Null
+ getchar 会逐个读入字符，例如23，它会读入2和3
+ while(getchar()!='\n'){continue;}  //跳过剩下字符，直到回车符号
+ 重定向中，可执行程序一定要在左边，> to   < get
+ C的标准I/O库把不同文件映射成统一的流来统一处理
+ chars in C are integers. Unless EOF occurs, getchar() is defined to return "an unsigned char converted to an int" , so if it helps you can imagine that it reads some char, c, then returns (int)(unsigned char)c.
+ putchar()输出的是字符型