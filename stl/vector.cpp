#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> vec;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);
    cout<<vec[0]<<endl;
    cout<<vec[1]<<endl;
    cout<<vec[2]<<endl;
    cout<<vec[3]<<endl;
    cout<<vec.size()<<endl;
    vec.pop_back();
    cout<<vec.size()<<endl;
    cout<<vec[0]<<endl;
    cout<<vec[1]<<endl;
    cout<<vec[2]<<endl;
    return 0;
}
