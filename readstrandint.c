#include <stdio.h>

int main() {

    char name[100];
    int age;
    printf("Enter your name and age: ");
    
    // %s denotes the fact that we are reading a string value, name is the variable that said values pass to, Similarly for %d and int age
    // MUST SCAN INT WITH &
    scanf("%s %d", name, &age);
    // %s denotes that we intend to insert a string and %d int
    printf("\n %s, you\'re pretty smart for a %d year old\n", name, age);

    return 0;

}