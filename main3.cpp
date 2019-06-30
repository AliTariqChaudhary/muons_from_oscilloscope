#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main(){
    double MAX_TIME = 4;
    double times[10000] = {};
    for(int i = 1; i<=10000; i++)
        times[i] = MAX_TIME*double(i)/10000.0;
    ifstream myfile;
    string line;
    ofstream myfile2;
    myfile2.open ("totes.txt");
    int temp1 = 0;
    myfile.open ("total.txt");
    int sum = 0;
    double total = 0.0;
    double temp2 = 0.0;
    double temp3 = 0.0;
    int temp4=0;

    while(getline(myfile, line)){
        if(temp1>920 && temp1%2==0){
            temp2+=times[temp1];
            temp3+=line.substr(10).length();
            if(temp4 == 200){
                temp4 = 0;
                myfile2<<temp2/200.0-.376<<'\n';
                temp3 = 0.0;
                temp2 = 0.0;
            }
            temp4++;
            }
        if(temp1>900){
            sum+=line.substr(10).length();
            total+=double(line.substr(10).length())*times[temp1];
        }
        temp1++;
    }
    myfile.close();
    myfile2.close();
    cout<<total/sum+.4;
}
