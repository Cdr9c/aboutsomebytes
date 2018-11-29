#include <iostream>
using namespace std;
int n;
int main()
{
    cout<<"n=";cin>>n;
    int x=0;
    while (n>0)
    {
        n=n>>1;
        x=x+1;
    }
  cout<<x;
  return 0;
}
