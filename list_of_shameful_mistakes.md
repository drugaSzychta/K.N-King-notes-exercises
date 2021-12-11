* Confusion between pointer and array. We cannot always treat array as a pointer. [Solution](https://stackoverflow.com/questions/3364445/lvalue-required-as-increment-operand)
* We must not copy string to a pointer points bto a string. String is a read-only object.
```c
char *p[2];
strcpy(*p,"Hello World"); // WRONG
```

* It's better to learn how initialize a pointer to an array
```c
char (*p)[5]; // a pointer which can points to a 5 char array. Application: for statement
char *p[5]; // an array of 5 pointer type char.
```
