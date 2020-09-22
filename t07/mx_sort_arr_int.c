// #include <stdio.h>

void mx_sort_arr_int(int *arr, int size) {
    int n = 0;
    for (int i = 0; i <= size; i++) {
        for (int j = 0; j < size -1; j++) {
            if (arr[j] > arr[j+1]){
            n = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = n;
            }     
        }
    }
}
// int main() {
//     int arr[] = {3, 55, -11, 1, 0, 4, 22, 77};
//     int size = 8;
//     mx_sort_arr_int(arr, 8);
//     for (int i = 0; i < size; i++){
//         printf("%d\n", arr[i]);
//     }
// }
