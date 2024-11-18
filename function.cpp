#include<iostream>
using namespace std;

/*
//function definition
void printHello(){
    cout<< "hello\n";
}

int main() {
    //function call 
    printHello();
    printHello();
    printHello();
    printHello();

*/

/*
 //sum of 2 number
 int sum(int a, int b){
    int s = a + b;
    return s;
 }

int main(){
    cout <<sum(10,  5)<< endl;

    return 0;
}

*/

// min of 2 num
// int minofTwo(int a, int b){  //Parameter
//     if(a<b){
//         return a;
//     } else{
//         return b;
//     }
// }

// int main(){
//     cout<<"min = " << minofTwo(5,3)<<endl;  // argument

//     return 0;
// }


// sum 1 to n;
/*
int sumN(int n) {
    int sum = 0;

    for(int i =1; i<=n; i++){
        sum +=i;
    }

    return sum;
}

int main() {
    cout<<sumN(5)<<endl;
    cout<<sumN(10)<<endl;

    return 0;
}

*/

int factorialN(int n){
    int fact = 1;

    for(int i=1; i<=n; i++){
        fact *= i;
    }

    return fact;
}

int main(){
    cout<< factorialN(5)<<endl;
    cout<< factorialN(10)<<endl;

    return 0;
}