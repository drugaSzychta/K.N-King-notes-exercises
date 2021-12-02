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
