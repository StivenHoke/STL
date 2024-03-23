#include<iostream>
using namespace std;
#include<map>

int main(   ){
   // std::cout<<"hello,World!"<<std::endl;
    double arr[5]={5.3,1.1,3.4,3.6,5.8};
    for(auto x:arr)
    cout<<x<<endl;

    map<int,string>mapStu;
    //插入元素,使用了匿名的pair对象
    mapStu.insert(pair<int,string>(0,"stu_zero"));

    //修改元素
    mapStu[0]="Stu_zero";

    mapStu[1]="Stu_two";
    mapStu[2]="Stu_three";
    //mapStu[-1]="test";

    //输出元素 解构方法 auto &[key,value]
    //这是在c++17中才支持的解构功能，将复合类型的数据提取到变量中
    for(auto &[key,value]:mapStu)
    cout<<value<<' '<<key<<endl;

    //输出元素，迭代器
    for(map<int,string>::iterator itr=mapStu.begin();itr!=mapStu.end();itr++)
    cout<<itr->first<<' '<<itr->second<<endl;

    //查找
    auto itr=mapStu.find(1);
    if(itr!=mapStu.end()){
        cout<<itr->second<<endl;
    }else
    {
        cout<<"not found"<<endl;
    }

    //size()
    
    auto a=mapStu.size();
    cout<<"size:"<<a<<endl;
    system("pause");
    return 0;

}