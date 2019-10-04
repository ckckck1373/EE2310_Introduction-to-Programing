#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define N 9

using namespace std;
void cpp_swap(int&,int&);
int A[N];
int main()
{
    cout << "Hello world!" << endl;
    cout << "Original randomly generated Array: " ;
    srand(time(0));
    for(int i=0;i<N;i++)
    {
        A[i]=rand()%20;
    }
    for(int k=0;k<N;k++)
    {
        printf("%2d ",A[k]);
    }
    cout << endl;
    cout << "Array agter the reversal: ";
    for(int j=0;j<(N-1)/2;j++)
    {
        cpp_swap(A[j],A[N-j-1]);
    }
    for(int k=0;k<N;k++)
    {
        printf("%2d ",A[k]);
    }
    return 0;
}


void cpp_swap(int& x,int& y)
{
    int tmp;
    tmp=x;
    x=y;
    y=tmp;
}
