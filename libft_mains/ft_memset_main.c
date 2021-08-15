#include <stdio.h>
#include <string.h>

int main () {
   char str[50];
   char str2[50];

   strcpy(str,"This is string.h library function");
   puts(str);

   ft_strlcpy(str2,"This is string.h library function", 100);
   puts(str2);

   memset(str,'$',7);
   puts(str);

   ft_memset(str2,'$',7);
   puts(str2);

   return(0);
}
