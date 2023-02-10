#include <iostream>

using namespace std;
int n=5;
int arr[5][5];
int main(){
    arr[0][0]=1;
    for(int i=1; i<n; i++){
        arr[i][0]=1;
        for(int j=1; j<n; j++){
            arr[i][j]=arr[i-1][j]+arr[i-1][j-1];
        }    
        cout<<endl;
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<",";
        }    
        cout<<endl;
    }
}
