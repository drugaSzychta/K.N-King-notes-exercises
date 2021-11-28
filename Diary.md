28.11.2021
I didn't know that in gdb online when I create two char arrays and put them into printf("%s %s, a, b), there would be a problem with output.
Solution: add \0 at the end of a array of characters. Additional [link](https://stackoverflow.com/questions/9106752/space-removal-from-a-string-in-place-c-style-with-pointers)

* I can not right now why this condition should works 
 `for(size_t index = 0; nominals[index]; index++)
    {
        printf("%.2f = %d\n", (double)nominals[index]/100, result[index]);
    }`
    [link](https://stackoverflow.com/questions/70135954/how-can-i-round-a-fraction-properly-to-two-places-after-the-decimal)
