int mx_factorial_iter(int n) {
    int i = 1;
    if (n == 0) 
        return 1;
    else if (n < 0 || n > 12)
        return 0;
    else    
        for (int j = 1; j <= n; j++) {
            i = i * j;
        }
    return i;
}

// int main() {
//     printf("%d\n", mx_factorial_iter(0));
//     return 0;
// }

