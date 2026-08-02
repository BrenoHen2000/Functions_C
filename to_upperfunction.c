#include <stdio.h>
#include <ctype.h>

void print_upper(char *string, char *string2){
    int i;
    for(i=0; string[i] != '\0'; i++)
       string2[i] = toupper(string[i]);
    string2[i]='\0';
}

int main() {
    char s[10] = "ola mundo";
    char t[10];
    print_upper(s, t);
    
   printf("%s", t);
    return 0;
}
