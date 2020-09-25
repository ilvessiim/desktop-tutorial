#include <iostream>
using namespace std;

void numbersQualify() {
    int ans;
    int paaris=0;
    int paaritu=0;
    for(int i=0; i<5; i++){
        cout << "Insert number: " << endl;
        cin >> ans;
        if(ans%2==0){
            paaris++;
        }
        else{
            paaritu++;
        }
    }
    cout << "There were " << paaris << " even and " << paaritu << " odd numbers." << endl;
}

int main () {
    cout << "Insert 5 numbers." << endl;
    numbersQualify();
}