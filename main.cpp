#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    double MAX_TIME = 4;
    double nums[10000] = {};
    double times[10000] = {};
    string hits[10000] = {};
    int temp = 0;
    for(int i = 1; i<=10000; i++)
        times[i] = MAX_TIME*double(i)/10000.0;
    for(int i = 0; i<10000; i++){
        if(nums[i] < -8000.0){
            hits[i] = "1";
        }
        else{
            hits[i] = "";
        }
    }
    ofstream myfile;
    myfile.open ("total.txt");
    ifstream myin;
    myin.open("totals.txt");
    string line;
    int temp1 = 0;
    while(getline(myin, line)){
            myfile<<line<<hits[temp1]<<'\n';
            temp1++;
    }
    /*
    myfile.close();
    double sum = 0.0;
    for(int i = 0; i<= temp; i++){
        cout<<hits[i]<<endl;
        sum+=hits[i];
    }
    double muon_lifetime = sum/temp;
    cout<<muon_lifetime+0.4<<endl;*/
    return 0;
}