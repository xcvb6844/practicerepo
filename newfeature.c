#include <stdio.h>
#include <unistd.h>

int main() {
    // [v1.1] print and log current working dir.
    char pwd[1024];
    FILE *f = fopen("pwd-log.log", "w");
    getcwd(pwd, sizeof(pwd));
    printf("print working dir: %s\n", pwd);
    fprintf(f, "%s\n", pwd);
    fclose(f);
    return 0;
}
