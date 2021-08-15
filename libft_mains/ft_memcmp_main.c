#include <stdio.h>
#include <string.h>

int main () {
   char str1[15];
   char str2[15];
   int ret;
   int ret2;

   ft_memcpy(str1, "abcdef", 6);
   ft_memcpy(str2, "ABCDEF", 6);

   ret = memcmp(str1, str2, 5);
   ret2 = ft_memcmp(str1, str2, 5);

   if(ret > 0) {
      printf("(S)str2 is less than str1");
   } else if(ret < 0) {
      printf("(S)str1 is less than str2");
   } else {
      printf("(S)str1 is equal to str2");
   }

   if(ret2 > 0) {
      printf("\n(F)str2 is less than str1");
   } else if(ret2 < 0) {
      printf("\n(F)str1 is less than str2");
   } else {
      printf("\n(F)str1 is equal to str2");
   }

   return(0);
}
