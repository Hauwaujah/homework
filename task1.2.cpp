#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,2,-3,-4,-5,6};
    int n = sizeof(arr) / sizeof(arr[0]);

    int pos = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i] >= 0)
        {
            arr[pos] = arr[i];
            pos++;
        }
    }
    for(int i = 0; i < pos; i++)
    {
        std::cout<<arr[i] <<" ";
    }
    return 0;
}
