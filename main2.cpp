#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main(){
    double MAX_TIME = 4;
    double times[10000] = {};
    for(int i = 1; i<=10000; i++)
        times[i] = MAX_TIME*double(i)/10000.0;
    ofstream myfile;
    myfile.open ("total.txt");
    for(int i = 0; i<10000; i++){
        myfile<<fixed<<setprecision(4)<<times[i]<<" :  \n";
    }
}
