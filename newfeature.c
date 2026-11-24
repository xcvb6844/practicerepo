#include <stdio.h>
#include <unistd.h>

int main() {
    char pwd[1024];
    getcwd(pwd, sizeof(pwd));
    printf("%s\n", pwd);
    return 0;
}
