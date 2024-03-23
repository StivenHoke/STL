#include<algorithm>
#include<iostream>
#include<string>
#include<vector>
#include<set>

using namespace std;

//set 是一个弱排序的关联容器（元素的存储和检索依赖元素之间的关系）
//唯一性：元素唯一
//数据结构采用红黑树

//关于关联容器
//set,multiset,map,multimap
//区别：set和multiset区别是一个键是否对应多个值，像set的键和值类型相同，所以参数模板中类型只用写一个
//map和multimap的区别也类似
//map与set不同的是map的键和类型不同


int main(){
    //初始化一个字符串数组
    string str[] = {"word","yellow","at","number","student","at","word","number"};
    //拷贝给strs of vector;
    vector<string> strs(str,str+8);
    //拷贝给 se of set,这个时候set就会将重复的给删除
    set<string> se(strs.begin(),strs.end());
    for(auto x:se){
        cout<<x<<endl;
    }
    
    system("pause");

    return 0;
}