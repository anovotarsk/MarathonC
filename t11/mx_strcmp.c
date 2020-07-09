int mx_strcmp(const char *s1, const char *s2) {
    int len1 = 0;
    int len2 = 0;
    while (s1[len1] != '\0') {len1++;}
    while (s2[len2] != '\0') {len2++;}
    int len = 0;
    if (len1 < len2)
        len = len1;
    else
        len = len2;
    for (int i = 0; i < len; i++) {
        if (s1[i] > s2[i]) return 1;
        if (s1[i] < s2[i]) return -1;
    }
    if (len1 > len2) return 1;
    if (len1 < len2) return -1;
    return 0;
}

