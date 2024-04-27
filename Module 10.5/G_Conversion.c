
#include <stdio.h>
#include <ctype.h> // For the toupper and tolower functions
#include<string.h>

int main() {
    char str[1001]; 
    fgets(str, sizeof(str), stdin); // Read input string including spaces

    
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ',') {

            str[i] = ' ';
        } 
        else if (isupper(str[i])) 
        {
            str[i] = tolower(str[i]);
        } 
        else if (islower(str[i]))
         {
            str[i] = toupper(str[i]);
        }
    }
    
        printf("%s",str);
       


    return 0;
}
