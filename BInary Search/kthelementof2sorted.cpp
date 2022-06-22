#include <iostream>
#include<vector>
//#define mod 1e9+7


using namespace std;
long long mod = 1000000007;
int main()
{
 int i;
 cin>>i;
 while(i--){
        int count=1;
     int n,k;
     cin>>n>>k;
      unsigned long long int rem=k;
     for(int i=0;i<n-1;i++)
  {
   rem=(rem*2)%mod;
  }
  cout<<rem%mod<<endl;}
 
 return 0;
}