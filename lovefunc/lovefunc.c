#include <stdio.h>
#include <stdbool.h>

#include <stdbool.h>

bool lovefunc(int flower1, int flower2) {
    
    return (flower1 + flower2) % 2 != 0;
}


int main() {
   int flower1, flower2;
   printf("enter both flower petal count: ");
   scanf("%d%d", &flower1, &flower2);
   if (lovefunc(flower1, flower2)==true) {
       printf("They are falling in love!!!");
   } else {
       printf("They are not in love."); 
    return 0;
   }
}