#include <stdio.h>
#include <string.h>

int main(){
    char str[50];
    int count = 0;
    int freq[256] = {0};

    printf("Enter String: ");
    gets(str);

    for(int i = 0; str[i] != '\0'; i++)
    {
        freq[str[i]]++;
    }

    for(int i = 0; i < 256; i++)
    {
        if(freq[i] != 0) 
        {
            printf("%c => %d\n", i, freq[i]);
        }
    }

    return 0;
}