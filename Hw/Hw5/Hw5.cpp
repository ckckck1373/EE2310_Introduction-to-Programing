#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "matrix.h"

using namespace std;
ostream& operator << (ostream& os, matrix& x);
int main()
{
    matrix a(1,1), b(1,1);
    matrix sum(1,1);
    a.set_an_entry(0,0,10);
    a.set_an_entry(0,1,20);
    a.set_an_entry(1,0,30);
    a.set_an_entry(1,1,10);
    b.set_an_entry(0,0,1);
    b.set_an_entry(0,1,2);
    b.set_an_entry(1,0,3);
    b.set_an_entry(1,1,4);
    sum = a + b;
    cout << "Matrix M1:" <<  endl;
    cout << a << endl;
    cout << "Matrix M2:" <<  endl;
    cout << b << endl;
    cout << "Matrix Sum:" <<  endl;
    cout << sum << endl;
    return 0;
}
//WE want to support CASCADED output
ostream& operator << (ostream& os, matrix& x){
      for(int j=0;j<2;j++)
      {
         for(int i=0;i<2;i++)
         {
           os << x.get_an_entry(j,i) <<"  ";
         }
           os << endl;
      }


}


#ifndef  MATRIX_H_INCLUDED
#define  MATRIX_H_INCLUDED
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#define Max_row 100
#define Max_col 100


using namespace std;
class matrix{
      private:
          int row_count;
          int col_count;
          double M[Max_row][Max_col];
      public:
        matrix(int row, int col){
              row_count=row;
              col_count=col;

        }
        void set_an_entry(int x,int y,int value){
            M[x][y]=value;
        }
        int get_an_entry(int x, int y){
            return(M[x][y]);
        }
        int get_row_count(){
            return(row_count);
        }
        int get_col_count(){
            return(col_count);
        }

        /*--- creating a new member function for "+" ---*/
        matrix operator+(matrix &M2){
            double a;
            matrix sum(1,1);
            for(int h=0;h<2;h++){
                 for(int n=0;n<2;n++){
                      a= M[h][n]+ M2.get_an_entry(h,n);
                      sum.set_an_entry(h,n,a);
            }


            }

            return(sum);

        }



};


#endif



