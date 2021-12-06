## getchat()
- pobiera znak, uważać na bufor! while(ch =getchar()!='\n\) if(ch==' ') printf(error);

## snprintf(bufor, długość, printf tablica)
- konwersja z int, double na string. Chyba nieużywany w systemach embedded.(korzysta z bibliotek, które zajmują dużo miejsca),  dodaje się +1 do długości, by dołączyć terminated null in strings.

## fgets() czytanie linii z buforkiem. Czyta spacje przed łańcuchem. Kończy odczyt wraz z pojawieniem się \n delimiter.Zamiast delimtera dołącza znak \0
## scanf() nie czyta spacji przed łańcuchem, po odczytaniu spacji w łańcuchu przerywa odczyt
## getline()() - nowa funkcja dodana w c11, do obczajenia

## memcpy() and memmove()

## strcpy(dest,source) - must have

##

## <stdbool.h> bool

## nice way to remove a string char [link](https://stackoverflow.com/questions/5457608/how-to-remove-the-character-at-a-given-index-from-a-string-in-c)

## sscanf() Boski do dzielenia stringów i zliczania ile zmiennycb zostało wypełnionych [link](https://www.tutorialspoint.com/c_standard_library/c_function_sscanf.htm)

## Do obsługi łańcuchów możemy zastosować nastepujące funkcje: strcpy(),strncpy(),strcat(),strncat(),strcmp();
