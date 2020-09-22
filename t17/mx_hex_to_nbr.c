// #include <stdio.h>
unsigned long mx_hex_to_nbr(const char *hex) {
    int lenth = 0;
    unsigned long p = 0;
    unsigned long pow = 1;

    for (int i = 0; hex[i] != '\0'; i++)
        lenth++;
    for (int i = lenth-1; hex[i] != '\0'; i--) {
        if (hex[i] >= 65 && hex[i] <= 70) {
            p = p + (hex[i] - 55) * pow;
            pow *= 16; 
        }
        if (hex[i] >= 48 && hex[i] <= 57) {
            p = p + (hex[i] - 48) * pow;
            pow *= 16;
        }
        if (hex[i] >= 97 && hex[i] <= 102) {
            p = p + (hex[i] - 87) * pow;
            pow *= 16;
        }
    }
return p;
}

// int main() {
// printf("%lu\n", mx_hex_to_nbr("-1"));

// }
