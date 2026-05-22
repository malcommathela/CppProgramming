//
// Created by malco on 05/20/2026.
//

#include "start.h"

#include <algorithm>
#include <iostream>
using namespace std;

bool palindrome(int n) {
    int org = n;
    int res = 0;
    while (n > 0) {
        res = res * 10 + n % 10;
        n /= 10;
    }
    return res == org;
}

int partition(int arr[], int start, int end) {
    int pivot = arr[end];
    int i = start - 1;
    for (int j = start; j <= end - 1; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[end]);
    return i + 1;
}

void quickSort(int arr[], int start, int end) {
    if (end <= start) return;
    int pivot = partition(arr, start, end);
    quickSort(arr, start, pivot - 1);
    quickSort(arr, pivot + 1, end);

}

int main() {
    int arr[] = {4,7,35,75,3,65,673,23,8};
    int size = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr, 0, size-1);
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " " ;
    }
    return 0;
}



