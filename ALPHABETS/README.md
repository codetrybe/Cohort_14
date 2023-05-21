# CodeTrybe_Challenge

## INTERACTIVE ALPHABETS PRINTING

A repository containing the CodeTybe challenge given by [```Adeyemi Samuel```](https://github.com/Samfrodo9) on ```INTERACTIVE ALPHABET PRINTING``` 

**A code a day keeps Julien away😎**

This is a challenge and you are expected to write an interactive program that prints the Aplhabets in uppercase or lowercase based on user inputs either in the forward or reverse direction


```c
#include <stdio.h>
#include <string.h>
#include "main.h"


int main(void)
{

    printf("Do you want to see a list of the Alphabets?\n(Enter Yes or No)\n");
    char answer[20];

    scanf("%s", answer);

    if(strcmp(answer ,"Y") == 0  || strcmp(answer , "y") == 0 || strcmp(answer, "yes") == 0 || strcmp(answer, "Yes") == 0 || strcmp(answer, "YES") == 0)
    {
        printf("Do you want to print to upper(u) or lower(l)?\n");

        char check[10];

        scanf("%s", check);

                if (strcmp(check ,"upper") == 0  || strcmp(check , "Upper") == 0 || strcmp(check, "UPPER") == 0 || strcmp(check, "U") == 0 || strcmp(check, "u") == 0 )
                {
                    printf("Enter start Alphabet ");
                    getchar();
                    char begin, end;

                    scanf("%c", &begin); /* Getting Begin Value*/
                    putchar('\n');
                    getchar();
                    printf("Enter end Alphabet ");
                    scanf("%c", &end); /* Getting Ending Value*/
                    putchar('\n');

                    upper(begin, end); /* Calling function Upper and passing Begin and Ending values to it*/
                }

            

                else if( strcmp(check, "lower") == 0  || strcmp(check , "Lower") == 0 || strcmp(check, "LOWER") == 0 || strcmp(check, "L") == 0 || strcmp(check, "l") == 0 )
                {
                    char begin, end;
                    printf("Enter start Alphabet ");
                    getchar();

                    scanf("%c", &begin);
                    putchar('\n');
                    getchar();
                    printf("Enter end Alphabet ");
                    scanf("%c", &end);
                    putchar('\n');
                    lower(begin, end);

                }
    }


    else if((strcmp(answer ,"N") == 0  || strcmp(answer , "n") == 0 || strcmp(answer, "no") == 0 || strcmp(answer, "No") == 0 || strcmp(answer, "NO") == 0))
    {
        printf("Okay, Bye\n");
    }


    else 
    {
        printf("Enter a Valid value\n");
    }

    return (0);
}

```
----
``` bash
DELL@SamfrodoPC MINGW64 ~/Desktop/Learning_C/ALX-PLD/ALX tasks/Challenge
$ gcc Alphabet.c -o alphabet

DELL@SamfrodoPC MINGW64 ~/Desktop/Learning_C/ALX-PLD/ALX tasks/Challenge
$ ./alphabet.exe 
Do you want to see a list of the Alphabets?
(Enter Yes or No)
yes
Do you want to print to upper(u) or lower(l)?
u
Enter start Alphabet A

Enter end Alphabet J

Alphabets from A - J is  A B C D E F G H I J 

DELL@SamfrodoPC MINGW64 ~/Desktop/Learning_C/ALX-PLD/ALX tasks/Challenge
$ ./alphabet.exe 
Do you want to see a list of the Alphabets?
(Enter Yes or No)
YES
Do you want to print to upper(u) or lower(l)?
UPPER
Enter start Alphabet Z

Enter end Alphabet D

Alphabets from Z - D is  Z Y X W V U T S R Q P O N M L K J I H G F E D

DELL@SamfrodoPC MINGW64 ~/Desktop/Learning_C/ALX-PLD/ALX tasks/Challenge
$ ./alphabet.exe 
Do you want to see a list of the Alphabets?
(Enter Yes or No)
y
Do you want to print to upper(u) or lower(l)?
l
Enter start Alphabet a

Enter end Alphabet l

Alphabets from a - l is  a b c d e f g h i j k l 

DELL@SamfrodoPC MINGW64 ~/Desktop/Learning_C/ALX-PLD/ALX tasks/Challenge
$ ./alphabet.exe 
Do you want to see a list of the Alphabets?
(Enter Yes or No)
y
Do you want to print to upper(u) or lower(l)?
l
Enter start Alphabet A

Enter end Alphabet L

Alphabets from a - l is  a b c d e f g h i j k l

DELL@SamfrodoPC MINGW64 ~/Desktop/Learning_C/ALX-PLD/ALX tasks/Challenge
$ ./alphabet.exe 
Do you want to see a list of the Alphabets?
(Enter Yes or No)
y
Do you want to print to upper(u) or lower(l)?
l
Enter start Alphabet l

Enter end Alphabet a

Alphabets from l - a is  l k j i h g f e d c b a

DELL@SamfrodoPC MINGW64 ~/Desktop/Learning_C/ALX-PLD/ALX tasks/Challenge
$ ./alphabet.exe 
Do you want to see a list of the Alphabets?
(Enter Yes or No)
y
Do you want to print to upper(u) or lower(l)?
l
Enter start Alphabet L

Enter end Alphabet A

Alphabets from l - a is  l k j i h g f e d c b a

```


##### CHALLENGE TIME
