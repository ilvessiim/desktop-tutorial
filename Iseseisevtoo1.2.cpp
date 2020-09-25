#include <iostream>
using namespace std;
#include <vector>
#include <math.h> 
#include <fstream>
#include <algorithm> 

vector <float> resultArr{};
ofstream resultFile;
void sportsMan() {
    float result;
    float better=0;
    cin >> result;
    resultFile << result << "; ";
    resultArr.push_back(result);
    for(int i=0; i<5; i++){
        cout << "Sisesta tulemus: " << endl;
        cin >> result;
        resultFile << result << "; ";
        if (result > resultArr[i]){
            better=result-resultArr[i];
            cout << "See tulemus on eelmisest " << better << " meetrit parem." << endl;
            resultArr.push_back(result);
        }
        else if (result < resultArr[i]){
            better=resultArr[i]-result;
            cout << "See tulemus on eelmisest " << better << " meetrit halvem." << endl;
            resultArr.push_back(result);
        }
    }
    sort(resultArr.begin(),resultArr.end());
    resultFile << " " << '\n';
    resultFile <<"Parim tulemus: " << resultArr[5] << " Paremuselt teine: " << resultArr[4];
    cout << "Parim tulemus oli: " << resultArr[5] << " meetrit ja paremuselt teine oli: " << resultArr[4] << " meetrit" << endl;
    resultFile.close();
}

int main(){
    resultFile.open("Sportlase_nimi_tulemused.txt");
    string name, surname;
    cout << "Mis on sinu nimi(ees-ja perekonnanimi)?" << endl;
    cin >> name >> surname;
    resultFile << "Nimi:" << name << " "<< surname << '\n' << "Tulemused: ";
    cout << "Sisesta enda kuulitõuke tulemused: " << endl;
    sportsMan();

}