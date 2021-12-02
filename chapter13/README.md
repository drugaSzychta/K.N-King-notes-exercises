*character constant is not the same as single character string. A "a" string is represented by a pointer poined to a memory contains an 'a' character (with \0 character on next byte).
An 'a' constant is represented by an integer
For example:
```c
printf('c'); //WRONG!'c' is a integer value, not a pointer
```
*It's a common practise to represent a string array by length of a string+1 because of a null  chaacter('\0')
```c
#define N 20
char arr[LEN+1] = "Coding is my challenge";
char arr_2[] = "Coding is my challenge"; // If we left an empty place inside brackets, compiler will automate assign a string length with a null termination
```
*We can't modify a string literal! [good explanation](https://stackoverflow.com/questions/480555/modifying-c-string-constants)
```c
char *p="Hello";
*p='d'; //undefined behavior.Maybe it will compile, but in other systems it will crash program
```
*array string vs pointer to a string:
```c
char arr[] = "Hello World"; //arr is a array name(type aggregate) and we can change elements like rest of arrays
char *p = "Hello World" //p is a pointer which point to a memory location contains 'H' and we can't change a string during a program
//(a string is in executable part of program)<- (I need to read more about it)
```

