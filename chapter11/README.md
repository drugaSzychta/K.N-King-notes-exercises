# CHAPTER 11 NOTES/THOUGHTS

:warning: An * operator have different meaning depend of the context. For example:
int * var indicate to a compiler that this literal is a pointer. However, *var is a indirection operator.
```c
int *var =3;  // a sign to the compliler that var is a pointer of int. = is a assignent operator
*var;  //a indirection opertor (a value which var points to)
```

:warning: A pointer is not always the same as an adress.(look at Q&A at the end of a chapter)

:warning: Operator [] turn literal into something similar to a bunch od pointers. See [answer:](https://stackoverflow.com/questions/2094666/pointers-in-c-when-to-use-the-ampersand-and-the-asterisk)

:warning: A const keyword prevents a variable from changing during program. A static keyword change a feature about allocation.
Static variable is file memory allocation, not automatic storage duration. More [information:](https://stackoverflow.com/questions/2094666/pointers-in-c-when-to-use-the-ampersand-and-the-asterisk):

