# Notes, observations

*Array must have a constant size. An array is stored on a stack and the compiler must know, which size of array he has to manage. The other option is to allocate an array dynamically(during a program), but I will learn this technique later.

*It's better to use a pointer to arrays instead for example copy all array to save memory in a stack

*We can use a const keyword to prevent override data in an array. String behaves similar, but I will find out later

*An array declared inside a function is not automatically initialized. Only a global array and a static array inside a function have this property See [more](https://stackoverflow.com/questions/1414215/initial-value-of-int-array-in-c) 
