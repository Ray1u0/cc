#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int T,i;
    cin >> T;
    long a,b,c;
    for(i=0;i<T;i++)
    {
        cin >> a >> b >> c;
        if(a+b>c)
            printf("Case #%d: true", i+1);
        else 
            printf("Case #%d: false", i+1);
        printf("\n");
    }
    return 0;
}