#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    // prompt user for their name
    printf("Who you is?\n");
    
    string name = get_string();
    int n = 0;
    while (name[n] != '\0')
    {
        n++;
    }
    printf("%i\n", n);
    
     // make sure a string gets returned as a string
     if (name != NULL)
        {
        // iterate over the characters of the string one at a time
        for (int i = 0, l = strlen(name); i < l; i++)
         {
             if (name[i] >= 'a' && name[i] <= 'z')
             {
                 printf("%c\n", name[i] - ('a' - 'A'));
             }
             else
             {
             // print the character of the string one based of the i'th position of string
              printf("%c\n", name[i]);
             }

         }
        }

    for (char c = 'A'; c <= 'Z'; c++)
    {
        // print f knows how to write a character as an integer value in ASCII
        printf("%c is %i\n", c, c);
    }

    
    
    // determine where the first letter of each string, and then print the value of each letter.
    
    // print the initials
    
    
    
}
