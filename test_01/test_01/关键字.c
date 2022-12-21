#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

//1.关键是C语言提供的，自己不能创建
//2.变量名不能是关键字

//typedef unsigned int u_int;
//int main()
//{//define不是关键字，是预处理指令
//	//include 也是预处理指令
//
//	//typedef叫做类型重命名
//	unsigned int num = 100;
//	u_int num2 = 100;//这两条表示一样的意思，相当于u_int替代了unsigned int；
//
//
//	return 0;
//
//}

//static-静态的
//1.static 修饰局部变量,改变了变量的生命周期（本质上是改变了变量的存储类型），
// 局部变量出了范围就销毁，static关键字相当于把他变成全局变量的范围
//2.修饰全局变量
//  static修饰的全局变量，使得这个全局变量只能在自己所在的源文件(.c)内部可以使用,
// 全局变量，在其他源文件内部可以使用，是因为全局变量具有外部链接属性
// 但是被static修饰之后，就变成了内部链接属性，其他源文件就不能链接到这个静态的全局变量了！
//3.修饰函数
