* A string topic in c is a joke. Python is like a soft pillow compared to the c

*character constant is not the same as a single character string. An "a" string is represented by a pointer pointing to a memory that contains an 'a' character (with \0 character on next byte).
An 'a' constant is represented by an integer
For example:
```c
printf('c'); //WRONG!'c' is a integer value, not a pointer
```
*It's a common practice to represent a string array by the length of a string+1 because of a null  character('\0')
```c
#define N 20
char arr[LEN+1] = "Coding is my challenge";
char arr_2[] = "Coding is my challenge"; // If we left an empty place inside brackets, the compiler will automate assign a string length with a null termination
```
*We can't modify a string literal! [good explanation](https://stackoverflow.com/questions/480555/modifying-c-string-constants)
```c
char *p="Hello";
*p='d'; //undefined behavior.Maybe it will compile, but in other systems, it will crash the program
```
*array string vs pointer to a string:
```c
char arr[] = "Hello World"; //arr is a array name(type aggregate) and we can change elements like rest of arrays
char *p = "Hello World" //p is a pointer that point to a memory location contains 'H' and we can't change a string during a program
//(a string is in the executable part of a program)<- (I need to read more about it)
```C
#include <stdio.h>

int main()
{
    char arr[] = "Marek Wieja"; // We can't change
    int length = sizeof(arr)/ sizeof(arr[0]);
    printf("Length of an array: %d\n",length);
    char *p = arr; // but we can assign a pointer to a char array and change a value
    
    for(int i =0;i<length;i++){
        *p=*p+3;
        printf("%c ",*p++);
    }

    return 0;
}
```
* char *arg[] means array of pointers, or array of strings(the same meaning)
```C
int main(int argc,*arg[])
```

