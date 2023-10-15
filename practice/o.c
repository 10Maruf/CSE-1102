#include <stdio.h>
#include <string.h>
struct employee
{
    int id;
    char name[50];
}e1,e2; // declaring e1 variable for structure
int main()
{
    // employee e1,e2;
    // store first employee information
    e1.id = 101;
    e2.id = 201;
    strcpy(e1.name, "Sonoo Jaiswal"); // copying string into char array
                                      // printing first employee information
        printf("employee 1 id : %d %d\n", e1.id,e2.id);
    printf("employee 1 name : %s\n", e1.name);
    return 0;
    
}