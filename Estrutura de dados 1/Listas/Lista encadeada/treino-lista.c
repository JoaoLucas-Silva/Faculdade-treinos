#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Person
{
    int id;
    int age;
    char name[50];
    struct Person *next;
} Person;

Person *initialize();
Person *insert_b(Person *p1, int id, int age, char name[50]);
void printP(Person *p1);

int main(void)
{
    Person *p1;

    p1 = initialize();
    p1 = insert_b(p1, 1, 25, "joao");
    printP(p1);

    return 0;
}

Person *initialize()
{
    return NULL;
}

Person *insert_b(Person *p1, int id1, int age1, char name1[50])
{
    Person *p = (Person *)malloc(sizeof(Person));

    if (p == NULL)
    {
        return p;
    }

    p->id = id1;
    p->age = age1;
    strcpy(p->name, name1); // Copia a string 'name1' para 'p->name
    p->next = p1;

    return p;
}

void printP(Person *p1)
{
    Person *p;

    for (p = p1; p != NULL; p = p->next)
    {
        printf("id: %d, age: %d, name: %s\n", p->id, p->age, p->name);
    }
}