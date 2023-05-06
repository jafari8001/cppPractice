// 8654

#include <iostream>
using namespace std;

int main(){
    int number, temp;
    cin>> number;
    temp = number;

    int len = 0;
    while (temp>0){
        temp = temp/10;
        len++;
    }

    int k = 10;
    for (int i = 0; i < len; i++){
        temp = number;
        while (temp >= k){
            cout<< temp%k<<"\t";
            temp = temp/10;
        }
        cout << temp % k << "\t";
        cout<<"\n";        
        k *= 10;
    }
       
}