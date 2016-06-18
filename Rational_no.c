#include<stdio.h>
#include<conio.h>

typedef struct{
        int numerator;
        int denomenator;
        }rational;

rational makerational(int,int);
rational add_rational(rational,rational);
int main()
 {
          
          rational r1=makerational(1,3);
          rational r2=makerational(2,5);
          rational sum=add_rational(r1,r2);
          
          printf("%d / %d",sum.numerator,sum.denomenator);
          
          getch();
          return 0;
 
}

rational makerational(int a, int b)
{
         rational r_number;
         r_number.numerator=a;
         r_number.denomenator=b;
         if(b==0)
         {
           printf("No solution");
                 }
         else{
         return r_number;
         }
         }   

rational add_rational(rational r1, rational r2)
{
         rational result;
         
         result.numerator=(r1.numerator*r2.denomenator)+(r2.numerator*r1.denomenator);
         result.denomenator=(r1.denomenator*r2.denomenator);
         
         
         return result;
         }
         
         
         
         
         
