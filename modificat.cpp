#include<iostream>
using namespace std;
unsigned int n;
unsigned int ziua;
unsigned int luna;
unsigned int anul;
unsigned int cod=0;
int main()
{
cout<<endl<<" (dd/mm//yy) = 1 ; (mm/dd/yy) =2 ";
int code;
cin>>code;
if (code==1) {
                     cout<<endl<<" French format "<<endl;

                     cout<<" ziua = ";cin>>ziua;
                     cout<<" luna = ";cin>>luna;
                     cout<<" anul = ";cin>>anul;
                     n=n|ziua;
                     luna=luna<<28;
                     n=n|luna;
                     anul=anul<<23;
                     n<<n|anul;
                    cout<<"Codul datei este"<<n;
                    cout<<n;

                    }
else
if (code==2)  {
                     cout<<endl<<" English format "<<endl;
                     cout<<" ziua = ";cin>>ziua;
                     cout<<" luna = ";cin>>luna;
                     cout<<" anul = ";cin>>anul;
                     n=n|ziua;
                     luna=luna<<28;
                    n=n|luna;
                    n=n|ziua;
                    anul=anul<<23;
                    n<<n|anul;
                    cout<<"Codul datei este"<<n;
                    cout<<n;
                    }
else
{ cout<<endl<<" Sorry , no bananas today !"; }
return  0;
}



