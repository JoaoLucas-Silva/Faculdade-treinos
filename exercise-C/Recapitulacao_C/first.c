#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
/*
void f2(char hello[]);
void f1(char hello[]);

int main()
{
    //char msg[] = "Hello World";
    //printf("Endereco: %p, valor: %s, tamanho: %d", &msg, msg, (int)(strlen(msg)));

    char hello[] = "Hello World";
    printf("from main: %p\n", &hello);
    f1(hello);

    return 0;
}

void f2(char hello[])
{
    printf("from f2: %p\n", &hello);
    printf("%s\n", hello);
}

void f1(char hello[])
{
    printf("from f1: %p\n", &hello);
    f2(hello);
}
*/

int main()
{
    char hello[] = "Hello World";
    printf("from main: %p\n", &hello);

    char *hello2 = malloc(sizeof(hello));
    strcpy(hello2, hello);
    printf("hello2: %p\n", &hello2);
    printf("hello2: %s\n", hello2);

    char *hello3 = hello + 6;
    printf("hello3: %p\n", &hello3);
    printf("hello3: %s\n", hello3);
    
    free(hello2);

    return 0;
}