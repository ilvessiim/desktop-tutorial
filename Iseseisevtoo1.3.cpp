#include <iostream>
using namespace std;
#include <stdlib.h>
#include<time.h>
#include <vector>
#include <algorithm> 
#include <fstream>

vector <float> kenoArr{};
ofstream kenoFile;
void kenoLoto(){
    int randomNumber;
    srand(time(0));
    randomNumber = (rand() % 80) + 1;
    kenoArr.push_back(randomNumber);
    for (int i=0; i<19;i++){
        randomNumber = (rand() % 80) + 1;
        if(find(kenoArr.begin(), kenoArr.end(), randomNumber)!=kenoArr.end()){
            i--;
        }
        else {
            kenoArr.push_back(randomNumber);
        }
    }
    sort(kenoArr.begin(),kenoArr.end());
    kenoFile.open("kenofile.txt");
    kenoFile << "Winning numbers: ";
    cout << "Winning numbers: ";
    for(int i=0; i<kenoArr.size(); i++){
        kenoFile << kenoArr[i] << ", ";
        cout << kenoArr[i] << ", " ;
    }
}

int main() {
    kenoLoto();
}