#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


using namespace std;
class complex_number{
      private:
          double real;
          double imaginary;
      public:
        complex_number(double re,double im)
        {
              real=re;
              imaginary=im;
        }
        void setter(double re,double im)
        {
            real=re;
            imaginary=im;
        }
        double get_real()
        {
            return(real);
        }
        double get_imaginary()
        {
            return(imaginary);
        }
        double get_magnitude()
        {
            double magnitude=sqrt(pow(real,2)+pow(imaginary,2));
            return(magnitude);
        }
};

ostream& operator << (ostream& os, complex_number& x);

int main()
{
    complex_number a(2,7),b(4,0),c(9,4),d(8,8),e(2,4),f(5,5),g(3,2);
    cout << "Original Array of Complex numbers:" << endl;
    complex_number A[7]={a,b,c,d,e,f,g};
    for(int i=0;i<7;i++)
    {
        cout << A[i];
    }

    double B[7]={a.get_magnitude(),b.get_magnitude(),c.get_magnitude(),d.get_magnitude(),e.get_magnitude(),f.get_magnitude(),g.get_magnitude()};

    int i,j,smallest;
    double tmp2;
    complex_number tmp(0,0);
    for(int i=0;i<7;i++)
    {
        smallest=i;//set default value for smallest
        for(int j=0;j<6;j++)
        {
            if(B[j]< B[smallest])
            {
                smallest = j;
            }
            if(smallest!=i)
            {
                tmp =A[i];
                A[i]=A[smallest];
                A[smallest]=tmp;


                tmp2 =B[i];
                B[i]=B[smallest];
                B[smallest]=tmp2;
            }
        }
    }

    cout << endl << "The Magnitude of Median Element of the Array is :" << A[3] << endl;

    return 0;
}





ostream& operator << (ostream& os, complex_number& x){
      os << x.get_real() <<
      "+j" << x.get_imaginary() << "  ";
}







