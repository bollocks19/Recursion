#include <iostream>
#include <cmath>
using namespace std;
int digit_sum(signed int n)
{ 
    if(n<10)
    return n;
    else return digit_sum(n/10)+n%10;
    
    
        
}
int main()
{ int n,th;
cout<<digit_sum(-8);

}
