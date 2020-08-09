#include <iostream>
#include <vector>
std::vector<int> convertArrayToVector_v1(int src[],int n);
std::vector<int> convertArrayToVector_v2(int src[],int n);
std::vector<int> convertArrayToVector_v3(int src[],int n);
std::vector<int> convertArrayToVector_v4(int src[],int n);
void print(std::vector<int> numbers);
int main()
{
    // input array
    int src[] ={ 1, 2, 3, 4, 5 };
    int n = sizeof(src) / sizeof(src[0]);// size of src
    std::vector<int> dest = convertArrayToVector_v1(src,n);
    print(dest);
    return 0;
}
std::vector<int> convertArrayToVector_v1(int src[],int n) {
    std::vector<int> dest(src, src + n);
    return dest;
}
std::vector<int> convertArrayToVector_v2(int src[],int n) {
    std::vector<int> dest;
    for (int i = 0; i < n; i++) {
        dest.push_back(i);
    }
    return dest;
}
std::vector<int> convertArrayToVector_v3(int src[], int n) {
    std::vector<int> dest(n);
    copy(src, src + n, dest.begin());
    return dest;
}
std::vector<int> convertArrayToVector_v4(int src[], int n) {
    std::vector<int> dest(n);
    memcpy(&dest[0], &src[0], n*sizeof(int));
    return dest;
}
void print(std::vector<int> numbers) {
    for (int i: numbers) {
        std::cout << i << " ";
    }
}
