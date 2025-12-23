#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main (){
    string text ;
	ifstream source;
	ofstream dest;
	source.open("cheerbook.txt");
	dest.open("cheerbook_copy.txt");
	    cout << "-------------------- BOOM ---------------------\n";
	    while(getline(source , text)){
	        dest << text << "\n";
	    }
	    cout << "-------------------- HA!! ---------------------";
    
    source.close();
    dest.close();
	return 0;
}
