char *mx_strcpy(char *dst, const char *src);
int mx_strlen(const char *s);
char *mx_strnew(const int size);

char *mx_strdup(const char *str) {
    int len = mx_strlen(str);
    char *s = mx_strnew(len);
    mx_strcpy(s, str);
    return s;
}

