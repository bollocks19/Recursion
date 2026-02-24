#include <iostream>
using namespace std;
int suma(int b[], int n)
{
    if (n==0)
        return 0;
    else return suma(b,n-1)+b[n-1];
        
}
int main()
{
    int v[5]={1,2,3,4,5};
    cout<<suma(v,5);
}
