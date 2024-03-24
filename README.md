# This is what I learned about STL.

## 关于容器

容器分为容器，序列容器，关联容器，无序关联容器

### 无序关联容器

unordered_set,unordered_multiset,unordered_map,unordered_multimap;

### 容器

* 所有的容器应该都具有容器的基本特征
* C++primer plus p562&&p53

### 序列容器

* 序列容器则多了一些要求，这些要求在p564，所有的序列都满足这些要求
* 序列的可选要求，一些序列容器满足这些要求
* 除此之外每一种序列容器都有其特定的要求

### 关联容器

* 关联容器除了满足容器的基本特征，同样它有其特有的要求，其中的还涉及了pair类型。
---
## 关于 函数对象（functor）
> 以函数方式与（）结合使用的任意对象
在我的理解上就是对象承载了函数的功能，像函数一样工作
### 例子
- 先定义一个类
```c
class liner
{
private:
    double a;
    double b;
public:
    liner(double x, double y):a(x),b(y){}
    double operator ()(double s){return b+a*s}
};
```
- 使用
```c
liner f1(2.3,4);//初始化对象
double y1=f1(6);//返回 4+2.3*6
//这里f1是一个对像，却承担了函数的作用
```
### 函数适配器
> 让函数能够满足不同的接口
In my view,通过使用函数对象的方法将多参数模板函数转换为少参数的函数对象。
### 例子
- 假设有一个接受两个参数模板的模板函数
```c
template<class T>
bool tooBig(const T &val,const T &lim){return val>lim}
```
- 将他转换为单个参数的函数第项
```c
template<class T>
class Toobig
{
private:
    T cutoff;
public:
    Toobig(const T& t):cutoff(t){}
    bool operator()(const T&v){
        return v>cutoff;
    }
}
```



