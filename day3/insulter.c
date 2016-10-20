#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void)
{
    char name[64];   

    printf("Please enter your name:  "); 

    //TODO: Check results of gets
    fgets(name, sizeof(name), stdin);

    size_t len = strlen(name);

    name[len -1] = '\0';

    printf("%s is smelly\n", name);

    if(0 == strncmp(name, "Stephen", sizeof(name))){
        puts("Learn to phucking spell");
    }
    
    strncat(name, "head", sizeof(name) - len);
    printf("%s, %s is a stupid %s\n", name, name, name);

    char buf[128];

    //TODO: Check return value
    snprintf(buf, sizeof(name), "PFC %s", name );
    strncpy(name, buf, sizeof(name));

    
    printf("Ha, ha, %s is so dumb\n", name);


}

