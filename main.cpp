#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,2,-3,-4,-5,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    std::cout<<"Array: ";
    for(int i = 0; i<n; i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<" " <<std::endl;

    int pos_count = count_if(arr, arr + n, [](int x) { return x >= 0; });
    std::cout << "Count of Positive elements ="<< pos_count<<", ";
    return 0;
}