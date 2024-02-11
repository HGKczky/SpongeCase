#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){
    char input[1000];
    printf("Enter text: ");
    fgets(input, sizeof(input), stdin);
    size_t len = strlen(input);
    if (input[len - 1] == '\n') {
        input[len - 1] = '\0';
    }
    for(int x = 0; input[x] != '\0'; x++){
        if(x % 2 == 1){
            input[x] = toupper(input[x]);
        }
        else{
            input[x] = tolower(input[x]);
        }
    }
    printf("%s\n", input);
    return 0;
}
