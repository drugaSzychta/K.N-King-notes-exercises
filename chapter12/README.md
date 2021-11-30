## Important Notes/Observations

*The size of a type pointers doesn't have to be true all [times](https://stackoverflow.com/questions/20763616/how-many-bytes-do-pointers-take-up).
*Another nice post to [understand a pointer](https://stackoverflow.com/questions/69376685/is-a-char-array-more-efficient-than-a-char-pointer-in-c)(house vs sign which point to a house
*A term variable length arrays is a C feature which help us dealing with memory overflow.

*We can use arithmetic calculation with pointers, and substraction between pointers(this substraction means "distance" between pointers)
*Name of the array is the same as an pointer to the first element of array, BUT it doesn't means that pointers eqpals array(to prove it use sizeof() function to see the difference)
*Combination indirection operator and postfix operator is possible for example:
`*p++ // retrieve a value where p pointo to and increment a pointer by one`
*An array copied to a function ins" copied by value. Large arrays doesn't make any performance issues.
*We can use a pointer in a function to fetch a data from array.
```c
fun(int a[]);
...
fun(int *p){
...}```

*Compilers determine which way is better to deal with arrays: by array subscription or by pointer. In the past there was a difference, but not today
*Pointer points to a string is exist of course.


