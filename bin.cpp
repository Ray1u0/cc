#include <iostream>
#include <vector>
using namespace std;
int main()
{
    unsigned int n;
    cin>>n;
    vector<int> tmp;
    int rem=n;
    while(rem)
    {
        tmp.push_back(rem%2);
        rem/=2;
    }
    int i;
    for(i=tmp.size()-1;i>=0;--i)
    {
        cout<<tmp[i];
    }
    cout<<endl;
    return 0;
}