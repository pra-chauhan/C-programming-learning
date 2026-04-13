// #include<stdio.h>
// int main() {
//     int i = 10;
//     int j = i;
//     printf("the value of i is %d and the value of j is %d", i, j);
// //%d is called format specifier which is used to print integer values in C language. It tells the printf function to expect an integer argument and to format it accordingly when printing the output. In this case, %d is used to print the values of i and j, which are both integers.
//     return 0;
// }

//arithmetic operators .
// #include<stdio.h>
// int main() 
// {
//     int a= 3, b =4 , c = a+b, d = a-b;
//     printf("the value of a is %d and b is %d and c is %d and d is %d", a, b, c, d);
   
//     // this does not work for exponentiation in C lang.
//     // int d = a^b; this will not give the correct result for exponentiation in C language. The ^ operator in C is a bitwise XOR operator, not an exponentiation operator. To perform exponentiation in C, you can use the pow() function from the math library. For example, to calculate a raised to the power of b, you can use: double result = pow(a, b); and make sure to include the math.h header at the beginning of your code.
//    // for exponentiation we have to use math library in C language. <math.h> 
//     return 0;
// }



// Type cnversion in C language
// #include<stdio.h>
// int main() {
//     int a = 9, b= 2; 
//     float c = a/b;
//     printf("the value of c is %f", c); // output is 4.000 becaue int -> int restult in int only 
//     return 0;
// }

// #include<stdio.h>
// int main() {
//     float a = 9, b= 2; 
//     float c = a/b;
//     printf("the value of c is %f", c); // output is in float now
//     return 0;
// }

//Associativity in C
#include<stdio.h>
int main() {
    int a =3, b=6, c=9;
    printf("the value is %d\n", a*b/c + 7);
    printf(" the value is %d", 3*b/2*c + 7*a);
    //3*b/2*c + 7*a -- firstly staars will evaluated.  --- (3*b)/2*c + 7*a  
    // -> 3*6/2*9 + 7*3 
    // -> 18/2*9 + 21
    // -> 9*9 + 21
    // -> 81 + 21
    // -> 102
    
    return 0;

}
