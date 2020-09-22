// #include <unistd.h>
void mx_foreach(int* arr, int size, void(*f)(int)) {
    for (int i = 0; i < size; i++) {
        f(arr[i]);
    }
}
// int main() {
// void mx_printint(int n);
// int arr[] = {1, 2, 3, 4, 5};
// mx_foreach(arr, 5, mx_printint);
// }
