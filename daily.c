#include <stdio.h>
#include<math.h>

// Day 1

//print name given by user
// int main() {
// char name[100];
// printf("enter your name:");
// scanf("%s", &name);
// printf("your name is : %s", name );
// return 0;
// }


//area of a square
// int main() {
//     float side;
//     printf("enter the side of a square :");
//     scanf("%f", &side);
//     printf("area of a square is : %f", side*side);
// }


//area of a circle
// int main() {
//     float r;
//     printf("enter the radius of a circle:");
//     scanf("%f", &r);
//     printf("area of a circle is : %f", 3.14*r*r);
// } 


//check that number divisible by 2 or not
// int main() {
//     int n;
//     printf("enter any number:");
//     scanf("%d", &n);
//     if(n%2 == 0) {
//         printf("number is divisible by 2");
//     }
//     else {
//         printf("number is NOT divisible by 2");
//     }
// }


// print average of 3 number input by user
// int main() {
//     float a,b,c;
//     float avg;
//     printf("enter a : ");
//     scanf("%f", &a);
//     printf("enter b : ");
//     scanf("%f", &b);
//     printf("enter c : ");
//     scanf("%f", &c);
//     avg = (a+b+c)/3;
//     printf("the average of the numbers is %f", avg);
// }

// DAY 2


// write a program to check that given charecter is digit or not
// int main() {
//    char ch;
//    printf("enter any charecter: ");
//    scanf("%c", &ch);
//    if(ch>= '0'&& ch<='9') {
//     printf("its a digit");
//    }
//    else {
//     printf("not a digit");
//    }
//    return 0;
//    }


// to print the smallest number
// int main() {
//     float a,b,c;
//     printf("enter a: ");
//     scanf("%f", &a);
//     printf("enter b: ");
//     scanf("%f", &b);
//     printf("enter c: ");
//     scanf("%f", &c);
//     if(a<b && a<c) {
//         printf("smallest value is %f" , a);
//     } 
//     else if(b<a && b<c) {
//         printf("smallest value is %f ", b );
//     }
//     else {
//         printf("smallest value is %f", c);
// }
// }


// to check upper case or lower case
// int main() {
//     char ch;
//     printf("enter any charecter:");
//     scanf("%c", &ch);
//    ch >= 'a' && ch<='z' ? printf("small") : printf("capital");
//     return 0;
// }


// printing the numbers from 0 to n, if n is given by user
// int main() {
//     int n;
//     printf("enter n:");
//     scanf("%d",&n);
//     for(int i=0; i<=n;i++) {
//         printf("%d\n", i);
//     }
//     return 0;
// }


// print the sum of first n natural number 
// int main() {
//     int n;
//     int m=0;
//     printf("enter n:");
//     scanf("%d", &n);
//     for(int i=1; i<=n; i++) {
//         m=m+i;
//     }
//     printf("%d", m);
//     return 0;
// }

// DAY 3


// print the table of a number input by the user
// int main() {
//     int n,i,m;
//     printf("enter any number:");
//     scanf("%d", &n);
//     for( i=1; i<=10; i++) {
//         m=n*i;
//         printf("%d\n", m);
//     }    
//     return 0;
// }


// keep taking number as input from the user until user enters an odd number
// int main() {
//     int n;
//     do{
//         printf("enter any number:");
//         scanf("%d", &n);
//         printf("%d\n", n);
//         if(n%2 != 0) {
//         break;
//         }
//     }while (1);
//     printf("thank you");
//     return 0;
// }


// print all no 1-10 except 6
// int main() {
//   for(int i=1;i<=10;i++) {
//     if(i==6){
//       continue;
//     }
//     printf("%d\n", i);
//   }
//   return 0 ;
// }


// print all the odd number from 5 to 50 
// int main() {
//   for(int i = 5; i<=50 ; i++){
//     if(i%2==0){
//       continue;
//     }
//     printf("%d\n", i);
//   }
//   return 0;
// }


// print the factorial of number n
// int main() {
//   int n,m=1;
//   printf("enter the number:");
//   scanf("%d", &n);
//   for(int i=n;i>=1;i--){
//     m=m*i;
//   }
//   printf("%d", m);
//   return 0;
// }
 
// DAY 4


// print reverse of the table n
// int main() {
//     int n,m;
//     printf("Enter any number:");
//     scanf("%d", &n);
//     for(int i=10; i>=1 ; i--) {
//         m=n*i; 
//          printf("%d\n", m);
//     }
//     return 0;
// } 


// calculate the sum of all number b/w 5 to 50
// int main() {
//     int n=0;
// for(int i=5; i<=50; i++) {
//     n=n+i ;
// }
//  printf("%d", n);
// return 0;
// }


// write 2 function one to print hello and second to print good bye 
//     void printHello();
//     void printgb();
// int main() {
//     printHello();
//     printgb();
//     return 0;
// }
// void printHello() {
//     printf("Hello World\n");
// }
// void printgb() {
//     printf("Good Bye!!");
// }


// write a function that print Namaste if user is Indian and Bonjour if the user is french 
// void printNamaste();
// void printBonjour();
// int main() {
//     char a;
//     printf("Enter I for Indian and F for french :");
//     scanf("%c",&a);
//     if(a=='i') {
//         printNamaste();
//     }
//     else if (a=='f') {
//         printBonjour();
//     }
//     else {
//         printf("Wrong Input Please Enter I or F");
//     }
//     return 0;
// }
// void printNamaste() {
//     printf("Namaste");
// }
// void printBonjour() {
//     printf("Bonjour");
// }


// use library function to calculate the sq of a number given by user 
// int main() {
//     int n;
//     printf("Enter n:");
//     scanf("%d",&n);
//     printf("square is %f", pow(n,2));
//     return 0;
// }

// DAY 5


// print hello world n times using functions
// void printhw(int count);
// int main() {
//     printhw(5);
//     return 0;
// }
// void printhw(int count) {
//     if(count == 0) {
//         return;
//     }
//     printf("Hello World\n");
//     printhw(count-1);
// }


// sum of first n natural number 
// int sum(int n);
// int main() {
//     printf("sum is %d", sum(5));
//     return 0 ;
// }
// int sum(int n) {
//     if(n==1) {
//         return 1;
//     }
//     int sumNm1=sum(n-1);
//     int sumN = sumNm1 + n ;
//     return sumN;
// }


// factorial of n
// int fac(int n);
// int main() {
// printf("factorial is %d", fac(5));
// }
// int fac(int n) {
//     if(n==0) {
//         return 1;
//     }
//     int facNm1 = fac(n-1);
//     int facn = facNm1*n;
//     return facn;
// }


// write a function to convert celsius to fahrenheit
// float celtof(float c);
// int main() {
//     float a = celtof(0);
// printf("f is %f ", a);
// return 0;
// }
// float celtof(float c) {
//     float f = c*(9/5) + 32;
//     return f;
// }


// write a function to calculate percentage of a student from marks in science maths sanskrit
// int perc(float x, float y, float z);
// int main() {
//     float a,b,c;
//     printf("Enter your marks in maths :");
//     scanf("%f" , &a);
//     printf("Enter your marks in sanskrit :");
//     scanf("%f" , &b);
//     printf("Enter your marks in science :");
//     scanf("%f" , &c);
//     printf("Percentage is : %d",perc(a,b,c)); 
//     return 0;
// }
// int perc(float x, float y, float z) {
//     float per;
//     per = (x+y+z)/3;
//     return per; 
// }

// DAY 6
// write a function to print n terms of the fibonacci sequence
// int fibN(int n);

// int main() {
//     int a;
// printf("Enter number n:");
// scanf("%d", &a);
// printf("%d", fibN(a));
// return 0;
// }
// int fibN(int n) {
//     if(n==0) {
//         return 0;
//     }
//     if(n==1) {
//         return 1;
//     }
//    int  fibNm1 = fibN(n-1);
//    int  fibNm2= fibN(n-2);
//    int fibN = fibNm1 + fibNm2 ;
//     return fibN ;
// }


// fibonacci sequence with loop
// int main() {
//     int n,first =0, second=1 , next ;
//     printf("Enter number n:");
//     scanf("%d", &n);
//   if (n >= 1) {
//         printf("%d", first);
//     }
//     if (n >= 2) {
//         printf(" %d", second);
//     }
//    for (int i = 3; i <= n; i++) {
//         next = first + second;
//         printf(" %d", next);
//         first = second;
//         second = next;
//     }
//    return 0;    
// }

// check prime using function 
// void isprime(int a);

// int main() {
// int b;
// printf("Enter the number :- ");
// scanf("%d",&b);
// isprime(b);
// return 0;
// }

// void isprime(int a) {
//     int i,flag=0;
//      if (a <= 1) {
//         printf("Number is not prime");
//         return;
//     }
//     for(i=2;i<=a/2;i++) {
//       if (a % i == 0) {
//             flag = 1;
//             break;
//         }
//     }
//  if (flag == 0) {
//         printf("Number is prime");
//     } else {
//         printf("Number is not prime");
//     }
// return;
// }

// pow function
// int powe(int a, int b);
// int main() {
//     int a,b;
//     printf("enter number:-");
//     scanf("%d",&a);
//     printf("enter power:-");
//     scanf("%d",&b);
//     printf("result is : %d",powe(a,b));
//     return 0;
// }
// int powe(int a, int b) {
//     int c=1;
//     for(int i=1;i<=b;i++) {
//         c = c * a ;
//     }
//     return c;
// }

// Write a C program using a function int reverse(int n) that takes an integer n as input and returns its reverse
// int reverse(int n);
// int main() {
// int n;
// printf("Enter number to reverse:");
// scanf("%d",&n);
// printf("reversed number is %d",reverse(n));
// return 0;
// }
// int reverse(int n) {
//     int rev=0;
//     for(; n > 0; n /= 10) {
//         int digit = n%10;
//         rev = rev*10+digit;
//     }
//     return rev;
// }

// print the value of i using pointer to pointer 
// int main() {
//   int i;
//   printf("Enter i:");
//   scanf("%d",&i);
//   int *ptr = &i;
//   int **pptr = &ptr;
//   printf("%d",**pptr) ;
//   return 0;
// }

// swap x and y using pointer
// void _swap(int *a,int *b);
// int main() {
// int x,y;
// printf("Enter x:");
// scanf("%d",&x);
// printf("Enter y:");
// scanf("%d",&y);
// _swap(&x,&y);
// printf("x is %d and y is %d", x,y);
//   return 0;
// }
// void _swap(int *a, int *b) {
// int t=*a;
// *a=*b;
// *b=t;
// }