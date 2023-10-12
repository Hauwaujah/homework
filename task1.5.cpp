#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,5};
    int n = 5, sum = 0;
    for(int i=0;i<n;i++) {
        sum+=arr[i];
    }
    std::cout<<sum <<std::endl;
    return 0;
}