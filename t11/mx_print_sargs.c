#include <unistd.h>

void mx_printchar(char c);
void mx_printstr(const char *s);
int mx_strcmp(const char *s1, const char *s2);
int mx_strlen(const char *s);

int main(int argc, char *argv[]) {
    if (argc == 1) return 0;
    char *tmp;
    for (int i = 1; i < argc; i++) {
        for (int j = 1; j < argc; j++) {
            if (mx_strcmp(argv[j], argv[i]) == 1) {
                tmp = argv[j];
                argv[j] = argv[i];
                argv[i] = tmp;
            }
        }
    }
    for (int i = 1; i < argc; i++) {
        mx_printstr(argv[i]);
        mx_printchar('\n');
    }
}
