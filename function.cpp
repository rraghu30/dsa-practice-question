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


/*
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

*/


/*
int sum(int a, int b){
    a = a + 10;
    b = b + 10;
    return a + b;
}

int main(){
    int a = 5, b = 4;
    cout << sum(a,b) <<endl;

    cout << a <<endl;
    cout << b <<endl;
    return 0;
}

*/

// sum of digit of a number

/*
int sumOfDigit(int num){
    int digSum = 0;

    while(num > 0){
        int lastDig = num % 10;
        num /= 10;

        digSum += lastDig; 
    }

    return digSum;
}

int main(){
    cout<<"sum = " <<sumOfDigit(2345) <<endl;

    return 0;
}

*/

/*

 int factorial(int n){
    int fact = 1;

    for(int i=1; i<=n; i++){
        fact *=i;
    }
    return fact;
 }

 int nCr(int n, int r){
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_nmr = factorial(n-r);

    return fact_n / (fact_r * fact_nmr);

 }

 int main(){
    int n = 6, r =3;
    cout<< nCr(n, r) << endl;

    return 0;
 }

 */

// hy , I am Raghu.


/*

int decToBinary(int decNum) {
    int ans =0, pow = 1;

    while(decNum > 0) {
        int rem = decNum % 2;
        decNum /= 2;

         ans +=(rem * pow);
         pow *= 10;
    }

    return ans;  // Binay number
}

int main(){
    int decNum = 50;

    for(int i=1; i<=10; i++){
        cout << decToBinary(i) << endl;
    }
    return 0;
}

*/

int main(){

   int a = 4, b = 8;

   cout << (a & b)<< endl;
   cout << (a || b)<< endl;
   cout << (a ^ b)<< endl;

   return 0;

}