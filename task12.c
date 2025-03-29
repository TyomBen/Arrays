#include <stdio.h>
#include <string.h>

int main ()
{
     char arr[] = "";

    for (int i = 0; i < 1; ++i){
            printf("Write a word: ");
            scanf("%s", &arr[i]);
            break;
        }
    
    for (int i = 0; i < strlen(arr); ++i){
            printf("%c", arr[i] - 32);
        }

    printf("\n");
}
