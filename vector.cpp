#include<iostream>
#include<vector>
using namespace std;

int main(){

    //  vector<char>vec = {'a', 'b', 'c', 'd', 'e'};

    //  for(char val : vec){
    //     cout << val << endl;
    //  }


    vector<int>vec;

    vec.push_back(01);
    vec.push_back(30);
    vec.push_back(05);
    vec.push_back(07);

    cout<<"After push back size :"<<vec.size()<<endl;

    vec.pop_back();

    for(int val : vec) {
        cout<< val <<endl;
    }

    return 0; 
}