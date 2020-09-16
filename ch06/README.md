笔记->[https://blog.oneneko.com/C++-Primer-ch6.html](https://blog.oneneko.com/C++-Primer-ch6.html)  

## 练习 6.1
实参：形参的初始值  
形参：在函数参数列表中声明的局部变量，由每个函数调用中提供的参数初始化  
## 练习 6.2
```
(a) string f(){  //函数返回值应该是string而不是int
        string s;  
        //..  
        return s;  
    }

(b) void f2(int i){/* ... */} //函数应该定义返回类型
(c) int cacl(int v1,int v2) {/* ... */ } //形参列表参数名不能重复
(d) double squre(double x) { return x*x; } //函数体需要定义作用范围
```
## 练习 6.3
```
#include<iostream>

int fact(int i){
    if(i<0){
        cout<<"error"<<endl;
        return -1;
    }
    return i> 1 ? i * fact( i - 1 ) : 1;
}

int main(){
    cout<<fact(5)<<endl;
    return 0;
}
```
## 练习 6.4
```
#include<iostream>
using namespace std;
int fact(int i){
    if(i == 1 || i == 0 ){
        return 1;
    }
    return i*fact(i-1);
}
int main(){
    while(true){
        int num = 0;
        cout<<"please input a num:"<<endl;
        cin >> num;
        if(num<0){
            cout<<endl<<"illeagel num!"<<endl;
            continue;
        }
        cout<<fact(num)<<endl;
    }
}
```
## 练习 6.5
```
#include <iostream>
using namespace std;
int abs(int i)
{
    return i > 0 ? i : -i;
}

int main()
{
    std::cout << abs(-6) << std::endl;
    return 0;
}
```
## 练习 6.6
形参：在参数列表中定义，生命周期与函数相同  
局部变量：在函数内部定义，生命周期与函数相同(如果未主动释放)  
局部静态变量：在函数内部定义，生命周期从初始化开始，到程序结束  
```
int func(int n){
    int n1=0;
    static int n2=0;
}
```
## 练习 6.7
```
int func(){
    static int n=-1;
    return ++n;
}
```
## [练习 6.8](Chapter6.h)
## 练习 6.9
[fact.cc](fact.cc)  
[factMain.cc](factMain.cc)  
## 练习 6.10