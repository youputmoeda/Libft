#include <stdio.h>
#include <string.h>

int main () {
   char dest[] = "oldstring";
   char dest2[] = "oldstring";
   const char src[]  = "newstring";

   printf("Before memmove dest = %s, src = %s\n", dest, src);
   memmove(dest, src, 9);
   printf("(S)After memmove dest = %s, src = %s\n", dest, src);
   ft_memmove(dest2, src, 9);
   printf("(F)After memmove dest = %s, src = %s\n", dest2, src);

   return(0);
}
