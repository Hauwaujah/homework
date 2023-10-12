#include <iostream>
using namespace std;

void rearrange(int* arr,int n)
{
    for(int i=0;i<n-1;i++) {
        if(i % 2 == 0 && arr[i] > arr[i+1])
            swap(arr[i], arr[i+1]); }
}
void printArray(int arr[], int size)
{
    for(int i=0;i<size;i++)
        std::cout<<arr[i] <<" " <<std::endl;

}
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    std::cout << "Before rearranging" << std::endl;
    printArray(arr, n);

    rearrange(arr, n);
    std::cout << "After rearranging" << std::endl;
    printArray(arr, n);

    return 0;
}