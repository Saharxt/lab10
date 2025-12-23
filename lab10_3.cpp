#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;

int main(){
    string text;
    int i = 0;
    double mean ;
    double sum = 0; ;
    double G ;
    double R;
        ifstream source;
        source.open("score.txt");
    while(getline(source,text)){
        i++ ;
        double value = stod(text);
        R += value*value;
        sum = sum+value;
    }
    mean = sum/i;
    G = sqrt((R/i)-(mean*mean));

    
    
    
    
    cout << "Number of data = "<< i <<"\n";
    cout << setprecision(3);
    cout << "Mean = "<< mean << "\n";
    cout << "Standard deviation = "<< G ;
}