// #include <stdio.h>
// #include <string.h>

char *mx_strnew(const int size);
int mx_strlen(const char *s);
char *mx_strcpy(char *dst, const char *src);

char *mx_strdup(const char *str) {
    char *arr = mx_strnew(mx_strlen(str));
    mx_strcpy(arr, str);
return arr;
}
// int main() {
//     const char arr1[] = "jhhhh";
//     printf("%s\n", strdup(arr1));
// } Я НА КУРИЛКЕ!!!!!!!!!!!
