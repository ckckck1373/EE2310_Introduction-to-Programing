#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;
int b=1;
void permute(char a[], int i, int n)
{
   int j;
   if (i == n)
     {
        cout << "The "<< b << "-th Pattern: (" << a << " ) " << endl;
        b=b+1;
     }
   else
   {
       for (j = i; j <= n; j++)
       {
          swap(a[i], a[j]);
          permute(a, i+1, n);
          swap(a[i], a[j]);
       }
   }
}

int main()
{
   char a[] = "0123";
   permute(a, 0, 3);
   getchar();
   cout << "There are" << b << "permutations in total!"<< endl;
   return 0;

}
