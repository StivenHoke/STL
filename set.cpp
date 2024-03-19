#include<algorithm>
#include<iostream>
#include<string>
#include<vector>
#include<set>

using namespace std;

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