// this content is LEARN by me from harry bhai's video no.34/35

#include <stdio.h>

void printStr(char str[])
{
    int i=0;
    while(str[i]!='\0')
    {
        printf("%c", str[i]);
        i++;
    }
    printf("\n");
}
int main()
{
    char str[77];
    gets(str);
    printf("Using custom function printStr\n");
    printStr(str);
    printf("Using printf %s\n", str);
    printf("using puts: \n");
    puts(str);
    return 0
    }

=============================================================================================================
strcat( ):-
    This function is used to concatenates the source string at the end of the target string. For example, “Hello” and “World” on concatenation would result into a string “HelloWorld”. Here is an example of strcat( ):

#include <stdio.h>
#include<string.h>
int main( ) { 
char  s[ ] = "Hello" ;
char  t[30] = "World" ;
strcat ( t, s ) ;
printf ( "String = %s", t ) ;
return 0;}
//Output: string = HelloWorld
=============================================================================================================

strlen( ):-
This function is used to counts the number of characters present in a string. Its example is given below:

#include <stdio.h>
#include<string.h>
int main( ) { 
char  str[ ] = "Harry is my teacher " ;
int  str_length;
str_length= strlen ( str ) ;
printf ( " length = %d", str_length );
return 0;
}
//Output: length = 5 
===============================================================================================================

strcpy( ):-
This function is used to copies the contents of one string into another. The base addresses of the source and target strings should be given to this function. Here is an example of strcpy( ):

#include <stdio.h>
#include<string.h>
int main( ) { 
char  s[ ] = "I'm LEARNING from CodeWithHarry" ;
char  t[20] ;
strcpy ( t, s ) ;
printf ( "\n Source string = %s", s ) ;
printf ( "\n Target string = %s", t ) ; 
return 0;
}
//And here is the output...
//Source string = CodeWithHarry
//Target string = CodeWithHarry
=======================================================================================================================

strcmp( ):-
This function is used to compares two strings to find out whether they are same or different. The strcmp() will compare two strings character by character until there is a mismatch or end of one of the strings is reached. If both of the strings are identical, strcmp( ) returns a value zero. If they are not identical, it will return the numeric difference between the ASCII values of the first non-matching pairs of characters. Here is a example of strcmp( ).

#include <stdio.h>
#include <string.h>
int main()
{
char string1[ ] = "Harry" ;
char string2[ ] = "Code" ;
int a;
a= strcmp ( string1, string2 ) ;
printf ("\n%d", a) ;
return 0;
}
//Output:5
===========================================================================================================================

strrev():-
This function is used to show the reverse of the string. Following are the example of strrev():

#include<stdio.h>
#include<string.h>
int main()
{
char str[50] = "12345";
printf("After reversing string is =%s",strrev(str));
return 0;}
//Output: After reversing string is = 54321
===========================================================================================================================

