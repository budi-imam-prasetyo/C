#include <stdio.h>

int binarySearch(int arr[], int n, int key){
    int left = 0;
    int right = n - 1;

    while(left <= right){
        int mid = left + (right - left) / 2;

        if(arr[mid] == key){
            return mid;
        }
        if(arr[mid] < key){
            left = mid + 1;
        }else{
            right = mid - 1;
        }
    }
    return -1;
}

int main(){
    int arr[] = {10, 15, 25, 40, 65};
    int n = sizeof(arr)/sizeof(arr[0]);

    int key = 25;
    int result = binarySearch(arr, n, key);

    if(result != -1){
        printf("Elemen  %d ditemukan di indeks %d\n", key, result);
    }else{
        printf("Elemen tidak ditemukan");
    }
    return 0;

}