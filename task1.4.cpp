#include <iostream>
using namespace std;

void swapMinMax(int arr[], int size) {
    //finding the maximum element
    int maxElement = arr[0];
    int maxIndex = 0;

    for (int i = 1; i < size; i++) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
            maxIndex = i;
        }
    }

    // Finding the minimum element
    int minElement = arr[size - 1];
    int minIndex = size - 1;

    for (int i = size - 2; i >= 0; i--) {
        if (arr[i] < minElement) {
            minElement = arr[i];
            minIndex = i;
        }
    }

    // Swapping the elements
    int temp = arr[maxIndex];
    arr[maxIndex] = arr[minIndex];
    arr[minIndex] = temp;
}
int main() {
    int arr[] = {1,1,1,2,2,2,2};
    int size = sizeof(arr) / sizeof(arr[0]);
    std::cout<< "Original Array" <<std::endl;
    for(int i=0;i<size;i++) {
        std::cout<<arr[i] <<" " <<std::endl;
    }
    swapMinMax(arr, size);
    std::cout<<"Swapped Array" << std::endl;
    for(int i=0;i<size;i++) {
        std::cout<<arr[i]<< " " <<std::endl;
    }
    return 0;
}
