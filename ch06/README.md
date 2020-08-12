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
int fact(int i){
    
}
```