28.11.2021
I didn't know that in gdb online when I create two char arrays and put them into printf("%s %s, a, b), there would be a problem with output.
Solution: add \0 at the end of a array of characters. Additional [link](https://stackoverflow.com/questions/9106752/space-removal-from-a-string-in-place-c-style-with-pointers)
