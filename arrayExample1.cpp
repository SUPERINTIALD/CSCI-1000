#include <iostream>
using namespace std;

int main(){
    //const = make it permanent and cannot be changed
    const int arrSize = 5;
int score[arrSize]; 
    cout<<"Enter 5 scores";
    for(int i=0; i < arrSize; i++){
        cin >> score[i];
    }
    cout<< "5 scores entered: ";
    for(int i = 0; i< arrSize; i++)
        cout << score[i] << " ";
        cout << endl;
    
    int max = score [0];

    for(int i = 0; i<arrSize; i ++){
        if (score[i]>max)
        max = score[i];
        cout << max << " ";
        cout <<endl;
    }


    return 0;
}