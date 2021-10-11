#include <stdio.h>
#include <unistd.h>
#include <ctype.h>

int main(){
    char c;
    char upperC;
    int n;

    do{
        n = read(STDIN_FILENO,&c,1);
        upperC = toupper(c);
        write(STDOUT_FILENO, &upperC, 1);

    }while(n != 0);

    read(STDIN_FILENO,&c,1);
    upperC = toupper(c);
    write(STDOUT_FILENO, &upperC, 1);

    return 0;
}