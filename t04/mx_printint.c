#include <unistd.h>
#include <limits.h>

void mx_printchar(char c);

void mx_printint(int n) {
    if (n == INT_MIN) {
        write(1, "-2147483648", 11);
        return;
    }
    if (n < 0){
        mx_printchar('-');
        n *= -1;
    }
    if (n / 10){
        mx_printint(n / 10);
    }
    mx_printchar(n % 10 + 48);
}

// int main() {
//     mx_printint(17);
//     mx_printchar('\n');

// }
