#include <iostream>

using namespace std;
int n,ans,a;
int flag=0;
int main()
{
    cout << "Please enter a limit for the prime number under search:10000" << endl;
    cin >> n ;
    ans=n;
    while(ans>1)
    {
        flag=0;
         for(a=2;a<ans;a++)
         {
             if(ans%a==0)
             {
                 flag=1;
                 break;
             }
         }
         if(flag==1)
         {
             ans=ans-1;
         }
         else
         {
             break;
         }

    }
    cout << "The largest prime number under 10000 is:" << ans << endl;
    return 0;
}
