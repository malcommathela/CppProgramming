//
// Created by malco on 07/07/2026.
//


#include <algorithm>
#include  <iostream>
#include <array>
using namespace std;


int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    i++;
    swap(arr[i], arr[high]);

    return i;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivot = partition(arr, low, high);
        quickSort(arr, low, pivot - 1);
        quickSort(arr, pivot + 1, high);
    }
}

int main () {
    int array[] = {3,5,1,4,9,6,5,8};
    quickSort(array, 0, std::size(array) - 1);
    for (int i = 0; i < std::size(array); i++) {
        cout << array[i] << " ";
    }

}


