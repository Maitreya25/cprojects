#include <stdio.h>

int main() {

    char name[100];
    printf("Enter your name: ");
    
    // %s denotes the fact that we are reading a string value, name is the variable that said values pass to
    scanf("%s", name);
    // %s denotes that we intend to insert a string variable which here is name
    printf("\nYou\'re a smart person %s\n", name);

    return 0;

}