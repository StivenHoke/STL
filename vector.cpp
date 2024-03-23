#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//vector是一个序列容器，是数组的一种类表示，提供了自动管理内存功能（动态改变对象长度，随着元素的添加和删除而增大和缩小）
//序列容器有deque,list,forward_list,queue,priority_queue,stack,vector
//它提供了对元素的随机访问，在尾部添加和删除元素的时间是固定的，但在头部和中间插入，删除是线性复杂度。
void show(int &r);
int main(){
    //往容器里插入元素的方式a(n,t)
    vector<int> a(5,3);
    for_each(a.begin(),a.end(),show);
    cout<<"第零号元素 "<<a[0]<<endl;

    //用迭代器的方式a(i,j)
    int ary[5]={1,7,9,2,3};
    vector<int> b(ary,ary+5);
    for_each(b.begin(),b.end(),show);
    cout<<"排序后："<<endl;
    sort(b.begin(),b.end());
    for_each(b.begin(),b.end(),show);

    //vector除了序列的要求外还提供了反转容器的概念，这里我们将已经排好序的b对象进行翻转
    //反转容器（reversible container）提供了两种类方法，（什么是类方法？应该是只有这个类的对象才可以用的方法）rbegin()和rend();
    cout<<"翻转后： " <<endl;
    for_each(b.rbegin(),b.rend(),show);

    //什么是序列的要求？简单来说就是序列容器提供的功能，像上面两种插入容器的方式，加上insert(),erase(),clear()三种，就是所有序列容器都
    //提供的方法，对每一种序列容器都可以使用d

    //还有序列的可选要求，也就是说接下来的功能有的容器可以使用，有的则不可以
    //a.front(),a.back()二者返回类型的引用，迭代器的解引用，也就是迭代器指向的值适用于vector,list,deque
    cout<<"------------"<<endl;
    cout<<b.front()<<endl;
    cout<<b.back()<<endl;
    //a.push_back(),a.push_front(),a.pop_back(),a.pop_front()

    //值得一提的适用于vector，deque的a[n],a.at[n]，二者都是返回容器中第n个元素，但是后者有边界检查，会引发out_of_range异常检查
    cout<<"-------------"<<endl;
    cout<<"b[4]="<<b[4]<<endl;
    cout<<"b.at(4)="<<b.at(4)<<endl;
    //b.at(5)触发异常，程序终止

    vector<int>c;
    c=b;
    cout<<c.at(4)<<endl;

    cout<<"insert()函数的检测"<<endl;
    a.insert(a.begin(),ary,ary+5);
    for_each(a.begin(),a.end(),show);
    



    system("pause");
    return 0;
    
}
void show(int &r){
    cout<<r<<endl;
}
