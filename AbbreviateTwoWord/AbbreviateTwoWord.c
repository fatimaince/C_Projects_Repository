#include <stdio.h>
#include <ctype.h> 

char *get_initials(const char *full_name, char initials[4]) {
   
    initials[0] = toupper(full_name[0]);
    
    
    initials[1] = '.';
    
    // 3. İkinci kelimenin ilk harfini bulmak için boşluğu (' ') ara.
    int i = 0;
    while (full_name[i] != ' ') {
        i++;
    }
    
  
    initials[2] = toupper(full_name[i + 1]);
    
   
    initials[3] = '\0';
    
   
    return initials; 
}

int main() {
 
    char result[4]; 
    
   
    printf("Sam Harris => %s\n", get_initials("Sam Harris", result));
    printf("patrick feeney => %s\n", get_initials("patrick feeney", result));
    
    return 0;
}