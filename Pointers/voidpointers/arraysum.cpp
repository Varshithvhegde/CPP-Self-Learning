#include <iostream>
#include <numeric>
using namespace std;
template <typename T>
T sumarray(void *arr, size_t size)
{
    T *typedArr = static_cast<T *>(arr);
    return std::accumulate(typedArr,typedArr+size,T{});
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    size_t intSize = sizeof(arr) / sizeof(arr[0]);
    int t = sumarray<int>(arr, intSize);
    cout<<t<<endl;
}
