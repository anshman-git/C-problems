#include <stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>


// DAY  1
// 1
// print "Hello world"
// int main() {
//     printf("Hello World");
//     return 0;
// }

// 2
// add 2 no input by user
// int main() {
//     int a,b,sum;
//     printf("Enter number a: ");
//     scanf("%d",&a);
//     printf("Enter number b: ");
//     scanf("%d",&b);
//     sum = a+b;
//     printf("%d + %d = %d",a,b,sum);
//     return 0;
// }

// 3
//area of a square
// int main() {
//     float side;
//     printf("enter the side of a square :");
//     scanf("%f", &side);
//     printf("area of a square is : %f", side*side);
// }


// 4
//area of a circle
// int main() {
//     float r;
//     printf("enter the radius of a circle:");
//     scanf("%f", &r);
//     printf("area of a circle is : %f", 3.14*r*r);
// } 


// 5
// Some aruthmatic question 
// int main() {
//     int a=2,b=3,c=4,d=5;
//     printf("%d",a*b-c+d);
// }



// DAY  3
// 6
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


// 7
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


// 8
// check that given charecter is digit or not
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


// 9
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


// 10
// check pass or fail
// int main() {
//     int marks;
//     printf("Enter marks");
//     scanf("%d",&marks);
//     if(marks>=33) {
//         printf("Pass");
//     }
//     else{
//     printf("FAIL");
// }
// }


// DAY  3
// 11
// int main() {
//     int marks;
//     printf("Enter marks");
//     scanf("%d",&marks);
//     if(marks>30) {
//         printf("C");
//     }
//     else if(30 <= marks < 70 ) {
//         printf("B");
//     }
//     else if(70 <= marks < 90 ) {
//         printf("A");
//     }else if(90 <= marks <=100) {
//         printf("A+");
//     }
// }


// 12
// to check upper case or lower case
// int main() {
//     char ch;
//     printf("enter any charecter:");
//     scanf("%c", &ch);
//    ch >= 'a' && ch<='z' ? printf("small") : printf("capital");
//     return 0;
// }


// print number from 0 to 10
// int main() {
//     for (int i=0;i<=10;i++) {
//         printf("%d\n",i);
//     }
//     return 0;
// }


// 14
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


// 15
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


// DAY  4
// 16
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


// 17
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


// 18
// keep taking number as input from the user until user enters multiple of 7
// int main() {
//     int n;
//     do{
//         printf("enter any number:");
//         scanf("%d", &n);
//         printf("%d\n", n);
//         if(n%7 != 0) {
//         break;
//         }
//     }while (1);
//     printf("thank you");
//     return 0;
// }



// 19
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


// 20
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


// DAY  5
// 21
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
 

// 22
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


// 23
// calculate the sum of all number b/w 5 to 50
// int main() {
//     int n=0;
// for(int i=5; i<=50; i++) {
//     n=n+i ;
// }
//  printf("%d", n);
// return 0;
// }


// 24
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


// 25
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


// DAY  6
// 26
// use library function to calculate the sq of a number given by user 
// int main() {
//     int n;
//     printf("Enter n:");
//     scanf("%d",&n);
//     printf("square is %f", pow(n,2));
//     return 0;
// }


// 27
// write a function to calculate area sq of cirle and rectangle
// int areaofcircle(int r);
// int areaofrec(int a,int b);
// int main() {
//     int r,a,b;
//     print("Enter radius: ");
//     scanf("%d",&r);

//     printf("Enter length and breath : ");
//     scanf("%d %d",&a,&b);
    
//     printf("Area of circle and rectangle id %d and %d",areaofcircle(r),areaofrec(a,b));
//     return 0;
// }
// int areaofcircle(int r) {
//     float are= 3.14*r*r;
//     return are;
// }
// int areaofrec(int a,int b) {
//     int areaa=a*b;
//     return areaa;
// }

// 28
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


// 29
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


// 30
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



// DAY  6
// 31
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


// 32
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


// 33
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


// 34
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


// 35
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



// DAY  7
// 36
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


// 37
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


// 38
// write a function to calculate the sum product average of 2 number using pointer
// void dowork(int a,int b,int *sum, int*prod,int *avg);
// int main() {
// int a=3,b=5;
// int sum,prod,avg;
// dowork(a,b,&sum,&prod,&avg);
// printf("sum=%d prod=%d avg=%d",sum,prod,avg);
// return 0;
// }
// void dowork(int a,int b,int *sum,int *prod,int *avg) {
// *sum=a+b;
// *prod=a*b;
// *avg=(a+b)/2;
// }


// 39
// write a program in c to find the maximum number b/w two number using pointer
// void max(int *a,int *b);
// int main() {
// int a,b;
// printf("Enter a:");
// scanf("%d",&a);
// printf("Enter b:");
// scanf("%d",&b);
// max(&a,&b);
// }
// void max(int *a,int *b) {
//   if(*a>*b) {
//     printf("a is greater");
//   }
//   else {
//     printf("b is greater");
//   }
// }


// DAY  8
// 41
// print all the letter in english alphabet using pointer 
// int main() {
//   int a[26];
//   int *ptr=a;
//       for (int i = 0; i < 26; i++) {
//         *(ptr + i) = 'A' + i;
//     }
//    for (int i = 0; i < 26; i++) {
//         printf("%c \n", *(ptr + i));
//     }
//     return 0;
// }


// 42
// write a program to enter price of 3 items and print their final cost with gst using array
// int main() {
//     int price[3];
//     printf("Enter 3 price: ");
//     scanf("%d %d %d",&price[0],&price[1],&price[2]);
//     printf("Price of 1 = %f\n",price[0]+(0.18*price[0]));
//     printf("Price of 2 = %f\n",price[1]+(0.18*price[1]));
//     printf("Price of 3 = %f\n",price[2]+(0.18*price[2]));
//     return 0;
// }


// 43
// write a function to count the no of odd number in an array
// int count(int arr[],int n);
// int main() {
// int arr[] = {1,2,3,4,5,6};
// printf("%d",count(arr,6));
// }
// int count(int arr[],int n) {
//   int count=0;
//   for(int i=0;i<n;i++) {
//     if(arr[i] % 2 !=0) {
//       count++;
//     }
//   }
//   return count;
// }


// 44
// some mathematical question
// solved in copy 


// DAY  9
// 45
// write a function to reverse an array
// void rev(int arr[], int n);
// int main() {
//     int n;
//     printf("Enter size of array: ");
//     scanf("%d", &n);
//     int arr[n];
//     printf("Enter array values:\n");
//     for(int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
//     rev(arr, n);
//     printf("Reversed array:\n");
//     for(int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }
// void rev(int arr[], int n) {
//     for(int i = 0; i < n/2; i++) {
//         int temp = arr[i];
//         arr[i] = arr[n-i-1];
//         arr[n-i-1] = temp;
//     }
// }

// 46
// write a program to store the first n fibonacci number
// int main() {
// int n;
// printf("Enter n:");
// scanf("%d",&n);
// int fib[n];
// fib[0]=0;
// fib[1]=1;
// printf("%d\t",fib[0]);
// printf("%d\t",fib[1]);
// for(int i=2;i<n;i++) {
//     fib[i]=fib[i-1] + fib[i-2];
//     printf("%d\t",fib[i]);
// }
// printf("\n");
// }


// 47
// create a 2d array storing the table of 2 and 3
// void table(int arr[][10],int n,int m,int num);
// int main() {
// int tab[2][10],m,n;
// table(tab,0,10,2);
// table(tab,1,10,3);
// for(int i=0;i<10;i++) {
//     printf("%d\t",tab[0][i]);
// }
// printf("\n");
// for(int i=0;i<10;i++) {
//     printf("%d\t",tab[1][i]);
// }
// return 0;
// }
// void table(int arr[][10],int n,int m,int num) {
// for(int i=0;i<m;i++) {
//     arr[n][i] = num * (i+1);
// }
// }


// 48
// make a program that input user name and print its length
// int countLength(char arr[]);
// int main() {
//     char name[100];
//     fgets(name,100,stdin);
//     printf("length = %d",countLength(name));
//     return 0;
// }
// int countLength(char arr[]) {
//     int count = 0;
//     for(int i=0;arr[i]!='\0';i++) {
//         count++;
//     }
//     return count-1;
// }


// 49
// make a program that input user name and print its length using string
// int main() {
//     char a[100];
//     printf("Enter the charectar to check the length : ");
//     scanf(" %s",a); 
//     int length = strlen(a);
//     printf("length = %d",length);
// }


// 50
// take a string input from user using %c
// int main() {
//     char a[100];
//     char ch;
//     int i=0;

//     while(ch !='\n') {
//         scanf("%c",&ch);
//         a[i]= ch;
//         i++;
//     }
//     a[i] = '\0';
//     puts(a);
//     return 0;
// }



// DAY  10
// 51
// Salting 
// find the salted form of a password enter by a user if the salt is 123 and added to the end
// void salting(char pass[]);
// int main() {
// char pass[100];
// scanf("%s",&pass);
// salting(pass);
// }
// void salting(char pass[]) {
//     char slat[] = "123";
//     char newpass[100];
//     strcpy(newpass,pass);
//     strcat(newpass,slat);
//     puts(newpass);
// }



// 52
// slice 



// 53
// print all Palindrome Words in a Sentence
// int ispali(char str[]);

// int main() {
// char sent[100];
// printf("Enter a sentence:");
// fgets(sent, sizeof(sent), stdin);

// sent[strcspn(sent, "\n")] = 0;

// char word[50];
// int k=0;
// for(int i=0; sent[i] != '\0'; i++) {
//     if(sent[i] != ' ') {
//         word[k++] = sent[i];
//     }
//     else {
//         word[k++] = '\0';
//         if(ispali(word)) {
//             printf("%s ",word); 
//         }
//         k=0;
//     }
// }

// word[k] = '\0';
// if(ispali(word)) {
//     printf("%s ",word);
// }

// return 0;
// }

// int ispali(char str[]) {
// int i=0;
// int j=strlen(str)-1;
// while(i<j) {
//     if(str[i]!= str[j]) {
//         return 0;
//     }
//     i++;
//     j--;
// }
// return 1;
// }



// 54
// count vovels and consonant
// int main () {
//     int vovels=0,consonants=0;
//     char chr[100];
//     printf("Enter the sentence : ");
//     fgets(chr,sizeof(chr),stdin);
//    for (int i = 0; chr[i] != '\0'; i++) {
//     char ch=chr[i];
//         if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u' ||
//             ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') {
//             vovels++;
//         }
//         else if ((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')) {
//             consonants++;
//         }
//     }
//     printf("Vowels = %d\n", vovels);
//     printf("Consonants = %d\n", consonants);
//     return 0;
// }


// 55
// Write a program to check whether two strings are anagrams of each other.
// int main() {
//     char ch[100], ch2[100],temp;
//     int i, j, len, isAnagram = 1;
//     printf("Enter first string: ");
//     scanf("%s", &ch);
//     printf("Enter second string: ");
//     scanf("%s", &ch2);
//     if (strlen(ch) != strlen(ch2)) {
//         printf("Not Anagram \n");
//         return 0;
//     }
//     len = strlen(ch);
//     for (i = 0; i < len - 1; i++) {
//         for (j = i + 1; j < len; j++) {
//             if (ch[i] > ch[j]) {
//                 temp = ch[i];
//                 ch[i] = ch[j];
//                 ch[j] = temp;
//             }
//             if (ch2[i] > ch2[j]) {
//                 temp = ch2[i];
//                 ch2[i] = ch2[j];
//                 ch2[j] = temp;
//             }
//         }
//     }
//     for (i = 0; i < len; i++) {
//         if (ch[i] != ch2[i]) {
//             isAnagram = 0;
//             break;
//         }
//     }
//     if (isAnagram)
//         printf("Anagram\n");
//     else
//         printf("Not Anagram\n");
//     return 0;
// }


// DAY  12
// 56
// Write a program that takes an input string and prints its reverse, but do not use the built-in function strrev().
// int main() {
//     int j;
//     char str[100],temp[100];
//     printf("Enter string:");
//     scanf("%s",str);
//     j=strlen(str);
//     temp[j]='\0';
//     for(int i=0;i<=j-1;i++) {
//         temp[j-1-i] = str[i];
//     }
//     printf("%s",temp);
// }


// 57
// write a program to remove all duplicate character from a given string. the output should contain only the unique character, preserving the order of their first appearence
// int main() {
//     char str[100],temp[100];
//     int k=0;

//     printf("Enter string: ");
//     scanf("%s",str);

//     for(int i=0;i < strlen(str);i++) {
//         int dup = 0 ;
//         for(int j=0;j<k;j++) {
//             if (str[i] == temp[j]) {
//                 dup = 1;
//                 break;
//             }
//         }
//             if (!dup) {
//             temp[k++] = str[i];
//             }
        
//     }
//     temp[k]='\0';
//     printf("after removing : %s",temp);
//     return 0;
// }


// 58
// Frequency Count of Characters in a String
// int main() {
//     char str[100],str2[100];
//     int count;
//     printf("Enter string: ");
//      gets(str);
//     printf("Frequency of charecter : \n");
//     for(int i = 0;i<strlen(str);i++) {

//         if (str2[i]==1) {
//             continue;
//         }
//         count = 1;
//         for (int j = i + 1; j < strlen(str); j++) {
//             if (str[i] == str[j]) {
//                 count++;
//                 str2[j] = 1; 
//             }
//         }
//         printf("%c = %d\n",str[i],count);
//     }
//     return 0;
// }


// 59
// reverse each word in string
// int main() {
//     char str[100];
//     int len;
//     printf("Enter string: ");
//     gets(str);
//     len = strlen(str);
    
//     for(int i = len; i >= 0;i--) {
//     printf("%c",str[i]);
//     }
//     return 0;
// }


// 60
// create a string to store first and last name of the user and print all the charector in loop
// void printString(char arr[]);
// int main() {
// char firstName[] = "Anshman";
// char lastName[] = "Khare";

// printString(firstName);
// printString(lastName);

// return 0;
// }
// void printString(char arr[]) {
//     for(int i=0; arr[i] != '\0';i++) {
//         printf("%c", arr[i]);
//     }
//     printf("\n");
// }


// DAY  13
// 61
// write the full name of the user
// int main() {
//     char str[100];
//     gets(str);
//     puts(str);
//     return 0;
// }


// 62
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




// 63
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


// 64
//write a function to count the occurence of vovels in a string

// int countvovel(char str[100]);

// int main() {
// char str[100];
// printf("Enter String:");
// gets(str);
// printf("There are %d vovels in the string",countvovel(str));
// return 0;
// }

// int countvovel(char str[100]) {
//     int count = 0;
//     for(int i=0;i<=strlen(str)-1;i++) {

//     if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u') {
//         count++;
//     }
// }
// return count;
// }



// 65
// check if a charecter is present in a charecter or not
// int main() {
//     char str[100],ch;
//     int a=0;
//     printf("Enter String:");
//     gets(str);
//     printf("Enter the charector you want to check in your string:");
//     scanf("%c",&ch);
//     for (int i=0;str[i]!='\0';i++) {
//         if (str[i] == ch) {
//           a+=1;
//         }
       
//     }
//     if(a>0) {
//     printf("YES");
//     }
//     else {

//     printf("NO %c charector not found",ch);
// }
//     return 0;
// }



// DAY  14

// 66
// write a program to store data of 3 student using structure
// struct student {
//     int roll;
//     float cgpa;
//     char name[100];
// };
// int main () {
//     struct student s1={1,8.4,"Anshman"};
//     struct student s2={2,8.4,"Rohit"};
//     struct student s3={3,8.8,"Rahul"};
//     printf("\n");
//     printf(" name = %s\t  name = %s\t name = %s\n ",s1.name,s2.name,s3.name);
//     printf("roll = %d\t  roll = %d\t roll = %d\n ",s1.roll,s2.roll,s3.roll);
//     printf("cgpa=%f\t  cgpa=%f\t cgpa=%f\n",s1.cgpa,s2.cgpa,s3.cgpa);
//     return 0;
// }


//67
// reverse an array using pointer
// int main() {
//     int arr[5] = {1, 2, 3, 4, 5};
//     int *start = arr,*end = arr + 4,temp;
//     while (start < end) {
//         temp = *start;
//         *start = *end;
//         *end = temp;
//         start++;
//         end--;
//     }

//     for (int i = 0; i < 5; i++) {
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }


//68
// create a structure to store vectores. then make a function to return sum of two vectors
// struct vector {
//     int x;
//     int y;
// };

// void calsum(struct vector v1,struct vector v2,struct vector sum);

// int main() {
//     struct vector v1={5,10};
//     struct vector v2 = {3,7};
//     struct vector sum = {0};
    
//     calsum(v1,v2,sum);
//     return 0;

// }

// void calsum(struct vector v1,struct vector v2,struct vector sum) {
//     sum.x = v1.x + v2.x;
//     sum.y = v2.y + v1.y;

//     printf("sum of x is = %d\n",sum.x);
//     printf("Sum of y is = %d\n",sum.y);

// }


// 69
//bill
// struct customer {
//     char name[50];
//     char phone[15];
//     int items;                
//     char itemName[50][50];   
//     float price[50];         
//     float total;             
// };
// void printBill(struct customer c);
// int main() {
//     struct customer c;
 
//     printf("Enter Customer Name: ");
//     fgets(c.name, sizeof(c.name), stdin);
//     c.name[strcspn(c.name, "\n")] = '\0'; 

//     printf("Enter Phone Number: ");
//     fgets(c.phone, sizeof(c.phone), stdin);
//     c.phone[strcspn(c.phone, "\n")] = '\0';

//     printf("Enter number of items: ");
//     scanf("%d", &c.items);

//     c.total = 0;
//     for (int i = 0; i < c.items; i++) {
//         printf("\nEnter name of item %d: ", i + 1);
//         scanf("%s", c.itemName[i]);

//         printf("Enter price of %s: Rs. ", c.itemName[i]);
//         scanf("%f", &c.price[i]);

//         c.total += c.price[i];  
//     }
//     printBill(c);
//     return 0;
// }

// void printBill(struct customer c) {
//     printf("\n================== BILL===================\n");
//     printf("Customer Name : %s\n", c.name);
//     printf("Phone Number  : %s\n", c.phone);
//     printf("------------------------------------------\n");
//     printf("Items Purchased:\n");

//     for (int i = 0; i < c.items; i++) {
//         printf("%d. %s  -  Rs. %.2f\n", i + 1, c.itemName[i], c.price[i]);
//     }

//     printf("------------------------------------------\n");
//     printf("Total Amount (without GST): Rs. %.2f\n", c.total);

//     float gst = c.total * 0.18;  
//     float grandTotal = c.total + gst;

//     printf("GST (18%%)                : Rs. %.2f\n", gst);
//     printf("Grand Total (with GST)    : Rs. %.2f\n", grandTotal);
//     printf("==========================================\n");
//     printf("      Thanks for Shopping! Visit Again \n");
//     printf("==========================================\n");
// }

// create a structure to store vectores. then make a function to return sum of two vectors
// struct vector {
//     int x;
//     int y;
// };

// void calsum(struct vector v1,struct vector v2,struct vector sum);

// int main() {
//     struct vector v1={5,10};
//     struct vector v2 = {3,7};
//     struct vector sum = {0};
    
//     calsum(v1,v2,sum);
//     return 0;

// }

// void calsum(struct vector v1,struct vector v2,struct vector sum) {
//     sum.x = v1.x + v2.x;
//     sum.y = v2.y + v1.y;

//     printf("sum of x is = %d\n",sum.x);
//     printf("Sum of y is = %d\n",sum.y);

// }


// 70
// create a structure to store complex number (use arrow operator)
// struct complex {
// int realno;
// int imgno;
// };

// int main() {
//     int a,b;
//     printf("Enter in the form of a+ib\n");
//     printf("\nEnter a:");
//     scanf("%d",&a);
//     printf("Enter b:");
   
//     scanf("%d",&b);
//     struct complex number1 = {a,b};
//     struct complex *ptr = &number1;
//     printf("\nreal part = %d\n",ptr->realno);
//     printf("Imagenary part = %d\n",ptr->imgno);
//     return 0;
// }

//71
//  make a structure to store bank account information of a customer of abc bank also make alias for it.
// struct account {
//     int accno;
//     char name[100];
//     char ifsccode[100];
// } acc;
// int main() {
//     struct account acc1;
//     printf("Enter your name :");
//     scanf("%s",acc1.name);
//     printf("Enter account number :");
//     scanf("%d",acc1.accno);
//     printf("Enter IFSC code :");
//     scanf("%s",acc1.ifsccode);
   
//     struct account acc2, acc3;
//     printf("\nEnter your name :");
//     scanf("%s", acc2.name);
//     printf("Enter account number :");
//     scanf("%d", &acc2.accno);
//     printf("Enter IFSC code :");
//     scanf("%s", acc2.ifsccode);

//     printf("\nEnter your name :");
//     scanf("%s", acc3.name);
//     printf("Enter account number :");
//     scanf("%d", &acc3.accno);
//     printf("Enter IFSC code :");
//     scanf("%s", acc3.ifsccode);

//     printf("\nAccount holder name : %s",acc1.name);
//     printf("\nAccount number : %d",acc1.accno);
//     printf("\nIFSC code : %s",acc1.ifsccode);


//     printf("\nAccount holder name : %s", acc2.name);
//     printf("\nAccount number : %d", acc2.accno);
//     printf("\nIFSC code : %s", acc2.ifsccode);

//     printf("\nAccount holder name : %s", acc3.name);
//     printf("\nAccount number : %d", acc3.accno);
//     printf("\nIFSC code : %s", acc3.ifsccode);
//     return 0;
// }

// 72
// check if a file is exist or not before reding from it
// int main() {
//     FILE *fptr;
//     fptr = fopen("text.txt","r");
//     if (fptr == NULL) {
//         printf("File does not exist.\n");
//     } else {
//         printf("File exists.\n");
//         fclose(fptr);
//     }
//     return 0;
// }

// 73
// make a program to read 5 integer from a file
// int main() {
//     FILE *fptr;
//     int num;
//     fptr = fopen("number.txt", "r");
//     for(int i=0;i<5;i++) {
//     fscanf(fptr,"%d",&num);
//     printf("%d\n",num);
//     }
//     fclose(fptr);
//     return 0;
// }

// 74
// make a program to input student information from a user and enter it to a file
// int main() {
//     FILE *fptr;
//     fptr = fopen("student.txt","w");
//     int roll;
//     char name[100];
//     float cgpa;
//     printf("Enter name:");
//     scanf("%s",name);
//     printf("Enter roll number:");
//     scanf("%d",&roll);
//     printf("Enter CGPA:");
//     scanf("%f",&cgpa);

//     fprintf(fptr,"Name: %s\nRoll Number: %d\nCGPA: %.2f\n",name,roll,cgpa);
//     fclose(fptr);
//     return 0;
// }

// 75
// write a program to write all the odd number from 1 to n in a file 
// int main() {
//     FILE *fptr;
//     fptr = fopen("Odd.txt","w");
//     int n;
//     printf("Enter n:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++) {
//         if(i%2!=0) {
//             fprintf(fptr,"%d\n",i);
//         }
//     }
//     fclose(fptr);
//     return 0;
// }

// 76
//  2 number a and b are given in a file write a program to read them and print their sum in to the file
// int main() {
//     FILE *fptr;
//     fptr = fopen("number.txt","r");
//     int a,b;
//     fscanf(fptr,"%d %d",&a,&b);
//     fclose(fptr);

//     int sum = a + b;

//     fptr = fopen("number.txt","w");
//     fprintf(fptr,"Sum is %d",sum);
//     fclose(fptr);
//     return 0;
// }


// 77
// write a program to allocat memory to store 5 prices
// int main() {
//     float *ptr;
//     ptr = (float *)malloc(5 * sizeof(float));
//     ptr[0] = 1;
//     ptr[1] = 2;
//     ptr[2] = 3;
//     ptr[3] = 4;
//     ptr[4] = 5;
//     for(int i=0;i<5;i++) {
//         printf("%f\n",ptr[i]);
//     }
//     return 0;
// }


//78
// Write a program to check if a number is an Armstrong number
// int main () {
//     int n,a,b=0,c;
//     float ams=0.0;
//     printf("Enter number n: ");
//     scanf("%d",&n);
//     a=n;
//     while (a!=0) {
//         a=a/10;
//         ++b;
//     }  
//     a=n;
//    while (a != 0) {
//     c = a % 10;
//     ams = ams + pow(c, b);
//     a = a / 10;
// }

//     if((int)ams==n) {
//         printf("%d is an Armstrong number.\n",n);
//     }
//     else{
//         printf("%d is not an Armstrong number.\n",n);
//     }
//     return 0;
// }


// 79
// write a program to allocate memory of size n, where n is entered by user.
// int main() {
//     int *ptr;
//     int n;
//     printf("Enter number n: ");
//     scanf("%d",&n);
//     ptr = (int *) calloc(n,sizeof(int) );

//     for(int i=0;i<=n;i++) {
//         printf("%d\n",ptr[i]);

//     }
//     return 0;
// }


// 80
// create a array of size 5(using calloc )& enter its valuse from the user.
// int main() {
//     int *ptr;
//     int n;
//     ptr = (int *) calloc(5,sizeof(int) );
    
//     printf("Enter number n(5): ");
//     for(int i=0;i<5;i++) {
//     scanf("%d",&ptr[i]);
//     }

//     for(int i=0;i<5;i++) {
//         printf("Number %d is %d\n",i,ptr[i]);
//     }

//     return 0;
// }


// 81
// Allocate memory to store first 5 odd number, then reallocate it top store first 6 even number.
// int main() {
//     int *ptr;
//     ptr = (int *) calloc(5,sizeof(int));
//     ptr[0]=1;
//     ptr[1]=2;
//     ptr[2]=3;
//     ptr[3]=4;
//     ptr[4]=5;
//     for (int i=0;i<5;i++) {
//         printf("%d\n",ptr[i]);
//     }
//     printf("\n");
//     ptr[0] = 2;
//     ptr[1] =4;
//     ptr[2] =6;
//     ptr[3] =8;
//     ptr[4] =12;
//     ptr[5] =14;
//     for(int i=0;i<6;i++) {
//         printf("%d\n",ptr[i]);
//     }
//     return 0;
    
// }

// 82
// Allocate memory for 5 no then dynamically increase to 8 no.
// int main() {
//     int *ptr;
//     ptr = (int *) calloc(5,sizeof(int));
//     printf("Enter number(5):");
//     for(int i=0;i<5;i++) {
//         scanf("%d",&ptr[i]);
//     }
//     ptr = realloc(ptr,8);
//     printf("Enter Numbers(8):");
//     for(int i=0;i<8;i++) {
//         scanf("%d",&ptr[i]);
//     }
//     for(int i=0;i<8;i++) {
//         printf("Number %d is %d\n",i,ptr[i]);
//     }
//     return 0;
// }

// 83
// Create an array of size 5(using calloc) &enter its value from the user
// int main() {
//     int *ptr;
//     ptr = (int *) calloc(5,sizeof(int));
//     printf("Enter numbers(5):");
//     for(int i=0;i<5;i++) {
//         scanf("%d",&ptr[i]);
//     }

//     for(int i=0;i<5;i++) {
//         printf("Number %d is %d\n",i,ptr[i]);
//     }
//     return 0;

// }


// 84
// write a program to swap two number using call by refrence(pointer only,no third variable) 
// void swap(int *a,int *b);
// int main() {
//     int a,b;
//     printf("Enter a:");
//     scanf("%d",&a);
//     printf("Enter b:");
//     scanf("%d",&b);
//     swap(&a,&b);
//     printf("after swap a = %d and b = %d\n",a,b);
//     return 0;
// }
// void swap(int *a,int *b) {
//     int temp = *a;
//     *a = *b;
//     *b=temp;
// }


// 85
// Write a program to count vowels in a string using pointer.
// int main() {
//     char str[100];
//     char *ptr;
//     int count =0;
//     printf("Enter string:");
//     fgets(str, sizeof(str), stdin);

//     ptr = str;

//     while (*ptr != '\0') {
//     if (*ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u' ||
//         *ptr == 'A' || *ptr == 'E' || *ptr == 'I' || *ptr == 'O' || *ptr == 'U') {
//         count++;
//     }
//     ptr++; 
//     }

//     printf("Vowels are %d",count);
//     return 0;
// }

// 86
// Write a program to find the largest element in an array using pointer.
// int main() {
//     int n;
//     printf("enter n:");
//     scanf("%d",&n);
//     int arr[n];
//     printf("\nEnter the arr = ");
//     for(int i=0;i<n;i++) {
//     scanf("%d",&arr[i]);
//     }
//     int *ptr = arr;
//     int largest = *ptr;
//     for(int i=0;i<n;i++) {
//         if(*ptr>largest) {
//             largest = *ptr;
//         } 
//         ptr++;
//     }
//     printf("\nlargest arr is %d",largest);
//     return 0;
// }

// 87
// Write a program to reverse an array using pointer arithmetic (no indexing).
// int main() {
//     int n;
//     printf("enter n:");
//     scanf("%d",&n);
//     int arr[n];
//     printf("\nEnter the arr = ");
//     for(int i=0;i<n;i++) {
//     scanf("%d",&arr[i]);
//     }
//     int *start = arr;
//     int *end = arr+n-1;
//     while(start<end) {
//     int temp = *start;
//     *start = *end;
//     *end = temp;
//     start++;
//     end--;
//     }
//     printf("after swapping arr = ");
//     for(int i=0;i<n;i++) {
//     printf("%d ",arr[i]);
//     }
//     return 0;
// }


// 88
// Write a program to find length of a string without using strlen() function, only pointer.
// int main() {
//     char str[100];
//     int count=0;
//     printf("Enter the str = ");
//     scanf("%s",str);
//     char *ptr;
//     ptr=str;
//     for(int i=0;*ptr != '\0';i++) {
        
//         count++;
//         ptr++;
//     } 
//     printf("length = %d",count);
//     return 0;
// }

