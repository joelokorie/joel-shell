#include <stdio.h>

int main(int argc, char *argv[]) {
    char **arg_ptr = argv;
    while (*arg_ptr != NULL) {
        printf("%s\n", *arg_ptr);
        arg_ptr++;
    }
    return 0;
}
