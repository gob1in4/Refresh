// #include <stdio.h>
int mx_strcmp(const char*s1, const char*s2);

int mx_binary_search(char **arr, int size, const char *s, int *count) {  
    int i = 0;
    int lenth = size - 1;

    if (!*arr)
        return -1;
    else {
        while (i <= lenth) {  
            ++*count; 
            int m = (lenth + i) / 2;
            if (mx_strcmp(arr[m], s) == 0) {
                return m; 
            } 
            else if (mx_strcmp(arr[m], s) <= 0) {
                i = m + 1;  
            }
            else
                lenth = m - 1; 
        } 
        *count = 0;
        return -1; 
    }
}
  
// int main() {
//     char *arr[]= {"222", "Abcd", "aBc", "ab", "az", "z"};
//     int count = 0;
//     printf("%d\n" "%d\n", mx_binary_search(arr, 6, "kf", &count), count);
// }
