//  Trying out arrays, pointers and types: structs, enums, unions

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// int incr(a, b) {
    
//     a = a * 2;
//     b = b * 2;
//     int c = a + b;

//     return c;
// }


// void incr2(int *a, int *b) {
    
//     int temp = *a;
//     *a = temp * 2;
//     temp = *b;
//     *b = temp * 2;
// }


int main() {

// int x = 5;
// int y = 10;
// int *p;
// p = &x;

// printf("\n%d is the value of x\n", *p);
// printf("\n%p is the address of x\n", p);


// p = &y;

// printf("\n%d is the value of x\n", x);
// printf("\n%p is the address of x\n", &x);
// printf("\n%d is the value of y\n", y);
// printf("\n%p is the address of y\n", &y);
// printf("\nThe address of p is %p\n", p);
// printf("\nThe p is pointing at %d\n", *p);



// int x = 5;
// int y = 2; 


// printf("\n(%d * 2) + (%d * 2) = % d\n\n", x, y, incr(x, y));


// incr2(&x, &y);
// printf("\n%d + %d = % d\n\n", x, y, (x + y));
// printf("\nx: %d  and y: %d\n\n", x, y);



// int i;
// int b = 2;
// char x[5] = {'a', 'b', 'c', 'd', 'e'};
// char y[] = "Hello";
// char z[6] = {'a', 'b', 'c', 'd', 'e', '\0'};
// int a[7] = {1, 2, 3, 4, 5, 6, 10};

// for (i = 0 ; i < 7 ; i++)
// {
//     printf("%d, ", a[i]);
// }


// printf("\n%d\n\n", *p);
// printf("\n%p\n\n", p);
// printf("\n%d\n\n", *q);
// printf("\n%p\n\n", q);


// int *p = &a[2];
// int *q = p + 3; 

// printf("\n%d\n\n", *p);
// printf("\n%p\n\n", p);
// printf("\n%d\n\n", *q);
// printf("\n%p\n\n", q);


// int i;
// char foo[3] = {[0 ... 2] = 11};

// for (i = 0; i < 3 ; i++) {
// printf("\n%c\n\n", foo[i]);



// }


struct {

    char name[15];
    int age; 
    float height; 
} Brook, Mama, Baba;

strcpy(Brook.name, "Brook");
Brook.age = 22;
Brook.height = 183.5;

printf("\n My name is %s and I am %d years old and %.1f cm tall\n\n", Brook.name, Brook.age, Brook.height);

enum {
    SUNDAY, 
    MONDAY, 
    TUES, 
    WED,
    THURS, 
    FRID,
    SAT
} daysOfWeek









    return 0;
}



