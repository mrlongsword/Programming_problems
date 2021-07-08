#include<iostream>
using namespace std;
int main()
{
    string num;
    cin>>num;
    int odd = num[0] + num[2];
    int even = num[1]+num[3];
    cout<<odd - even<<endl;
}
