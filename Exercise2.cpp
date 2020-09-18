#include <iostream>
#include<string.h>
#include <math.h>
using namespace std;

void salaryPromotion (int ans) {
    int salaryArr[ans-1] = {};
for(int i=0; i < ans; i++){
    cout << "Add salary: " << endl;
    cin >> salaryArr[i];
}

size_t n = sizeof(salaryArr)/sizeof(salaryArr[0]);

for (size_t i=0; i<=n; i++){
    if (salaryArr[i]!=0){
        if(salaryArr[i]<1000){
            cout << "Person " << i+1 << " salary will rise from " << salaryArr[i] << " to " << salaryArr[i]+0.05*salaryArr[i] << endl;
        }
        else {
            cout << "Person " << i+1 << " salary will stay " << salaryArr[i] << endl;
        }
    }

}
}

int main() {
    cout << "We will have a salary raise for people, who earn less than 1000 euros." << endl;
    cout << "How many people work in your company?" << endl;
    int ans;
    cin >> ans;
    salaryPromotion(ans);

}