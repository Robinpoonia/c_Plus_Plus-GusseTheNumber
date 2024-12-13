#include<iostream>
using namespace std;
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

int generateRandomNumber(int min, int max) {
    // Generate a random number between min and max
    return min + (rand() % (max - min + 1));
}

int main(){
    cout<<"Gusse the random number";
    int randomNumber = generateRandomNumber(1,100);
    while(true){
        int n;
        cin>>n;
        

        if(n == randomNumber){
            cout<<"YOU WIN"<<endl;
            break;
        }
        if(n > randomNumber){
            cout<<"number is higher"<<endl;
        }else{
            cout<<"number is lower"<<endl;
        }
    }
}   