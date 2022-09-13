# Soham.c
Ex.1]
#include <stdio.h>
int main() 
{
  float radius;
  printf("Enter radius");
  scanf("%f",&radius);
  printf("Area of a circle is :%f",3.14*radius*radius);
        return 0;
 }
    
Ex.2]
#include<stdio.h>
int main() 
{
 int side;
 printf("enter side");
 scanf ("%d",&side);
 
 printf("area is:%d", side*side);
 return 0;
}

Ex.3]
#include<stdio.h>
int main()
{
   int a;
    printf("Enter any number:");
    scanf("%d",&a);
    if(a>0)
    {
        printf("Given number is Positive");
    }
    else
    {
        printf("Given number is Negative");
    }
}

Ex.4]
/*Accept n no.s & check whether the inputed no. is Positive or Negative*/
#include<stdio.h>
int main() 
{
  int m,n,i; 
   printf("Enter how many numbers:");
   scanf("%d",&n);
   for(i=1;i<=n;i++);
   { printf("Enter any number");}
   scanf("%d",&n);
   if(m>0)
  {
   printf("Number is positive",&n); 
  }
   else
   { printf ("Number is Negative",&n);
   }
   return 0;
}

Ex.5]
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter any two number:");
    scanf("%d%d",&a,&b);
    printf("%d",a*b);

return 0;
}

Ex.6]
#include <stdio.h>

int main() {
    int a = 5*2-2*3  ;
    printf("%d", a);
    return 0;
}

Ex.7]
// Check whether no. is divisible by 2 or not
#include<stdio.h>
int main()
{
    int n;
    printf("write any number:");
    scanf("%d",&n);
    if( n % 2 == 0 ) 
    printf("It is divisible by 2");
    else
    printf("It is not dividible by 2");
    return 0;
}

Ex.8]
#include<stdio.h>
int main() {
    int a;
    printf("Enter any number :");
    scanf("%d /n",&a);
    if (a<10 && a>0){
         printf("its is an Digit");
    }
    else{
         printf("Its not an Digit");
    }
    printf("Thank You!");
    return 0;
}

Ex.9]
