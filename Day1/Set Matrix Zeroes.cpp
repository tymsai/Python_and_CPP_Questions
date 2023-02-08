#include <iostream>
using namespace std;
int main(){
    int matrix[5][5]={
        {1,1,1,3,0},
        {1,1,1,1,3},
        {1,2,1,3,0},
        {1,1,1,0,1},
        {1,0,1,1,3},
    };
    int rows = sizeof matrix / sizeof matrix[0];
    int cols = sizeof matrix[0] / sizeof matrix[0][0];
    int arr[cols], arr2[rows];
    for(int i=0; i<rows; i++)
        for(int j=0; j<cols; j++)
            if(matrix[i][j]==0){
                arr[j]=1;
                arr2[i]=1;
            }
    for(int j=0; j<cols; j++)
        if(arr[j]==1)
            for(int i=0; i<rows; i++)
                matrix[i][j]=0;
    for(int i=0; i<rows; i++)
        if(arr2[i]==1)
            for(int j=0; j<cols; j++)
                matrix[i][j]=0;
    for(int i=0; i<rows; i++){
        cout<<endl;
        for(int j=0; j<cols; j++)
            cout<<matrix[i][j];
    }
}
