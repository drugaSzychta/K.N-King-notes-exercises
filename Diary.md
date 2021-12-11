28.11.2021
I didn't know that in gdb online when I create two char arrays and put them into printf("%s %s, a, b), there would be a problem with output.
Solution: add \0 at the end of a array of characters. Additional [link](https://stackoverflow.com/questions/9106752/space-removal-from-a-string-in-place-c-style-with-pointers)

* I can't comprehend right now why this condition should works 
 `for(size_t index = 0; nominals[index]; index++)
    {
        printf("%.2f = %d\n", (double)nominals[index]/100, result[index]);
    }`
    [link](https://stackoverflow.com/questions/70135954/how-can-i-round-a-fraction-properly-to-two-places-after-the-decimal)
    
* [interesting](https://stackoverflow.com/questions/37259472/why-does-c-not-allow-concatenating-strings-when-using-the-conditional-operator/37259811#37259811) They talk about translation phase an d run-time phase. translation part belongs to the compiler of course

* It's a good idea to use malloc() in embedded systems? [link](https://electronics.stackexchange.com/questions/171257/realloc-wasting-lots-of-space-in-my-mcu/171581#171581)
* Nice way to remove a string char [link](https://stackoverflow.com/questions/5457608/how-to-remove-the-character-at-a-given-index-from-a-string-in-c)

06.12.2021
* I try to understand this program from chapter 13 [link](https://stackoverflow.com/questions/15314072/understanding-the-strcmp-function-in-one-month-reminder-progam)
It is a strange that when we assign a string to a 2d array, we can only use arr[] instead arr[][];

* The difference between *arr[] and **arr [link](https://stackoverflow.com/questions/37932739/difference-between-arr-and-arr)
