#include <algorithm>
#include <iostream>
using namespace std;
int main(){
    int arr[] = { 1, 2, 3 };
    sort(arr, arr + 3);
    do {
        cout << arr[0] << " " << arr[1] << " " << arr[2] << "\n";
    } while (next_permutation(arr, arr + 3));
    return 0;
}
