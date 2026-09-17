#include <iostream>
int main(){
    int n;
    std::cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i){
        std::cin >> arr[i];
    }

    for (int i = 1; i < n; ++i){
        int j, key;
        key = arr[i];
        j = i-1;
        while ((j >= 0) && (arr[j] > key)){
            arr[j+1] = arr[j];
            --j;
        }
        arr[j+1] = key;
    }
    for (int i = 0; i < n ;++i){
        std::cout << arr[i] << " ";
    }
    return 0;
}