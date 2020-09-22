// #include <stdio.h>

double mx_pow(double n, unsigned int pow) {
    double p = 1;
    if (pow == 0) 
        return 1;
    for (unsigned int i = 0; i < pow; i++) {
        p *= n;
    }
    return p;
}
// int main() {
//     printf("%f\n", mx_pow(5, 2));
// }

