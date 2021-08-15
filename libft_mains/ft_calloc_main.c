#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *p1 = calloc(4, sizeof(int));
    int *p1F = ft_calloc(4, sizeof(int));    // allocate and zero out an array of 4 int
    int *p2 = calloc(1, sizeof(int[4])); 
    int *p2F = ft_calloc(1, sizeof(int[4])); // same, naming the array type directly
    int *p3 = calloc(4, sizeof *p3);     
    int *p3F = ft_calloc(4, sizeof *p3);     // same, without repeating the type name

    if(p2) {
        for(int n=0; n<4; ++n) // print the array
            printf("p2[%d] == %d\n", n, p2[n]);
    }

    if(p2F) {
        for(int n=0; n<4; ++n) // print the array
            printf("p2F[%d] == %d\n", n, p2F[n]);
    }

    free(p1);
    free(p2);
    free(p3);
    free(p1F);
    free(p2F);
    free(p3F);
}
