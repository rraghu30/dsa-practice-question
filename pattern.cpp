#include<iostream>
using namespace std;

int main(){
     
    //  int n = 4;

    //  for(int i = 1; i <= n; i++){

    //     for(int j = 1; j <=n; j++){
    //         cout <<"*";
    //     }
    //     cout << endl;
    //  } 

// int n = 4;

//      for(int i = 1; i <= n; i++){
//             char ch = 'A';
//         for(int j = 1; j <=n; j++){
//             cout << ch ;
//             ch = ch + 1;
//         }
//         cout << endl;
//      } 



// int n = 4;
// char ch = 'A';
//      for(int i = 1; i <= n; i++){
           
//         for(int j = 1; j <=n; j++){
//             cout << ch ;
//             ch = ch + 1;
//         }
//         cout << endl;
//      } 


// int n = 4;
// int num = 1;
//      for(int i = 0; i < n; i++){
           
//         for(int j = 0; j < n; j++){
//             cout << num << " " ;
//             num++;
//         }
//         cout << endl;
//      } 


     // Pattern Problems 

    
// int n = 7;
//      for(int i = 0; i < n; i++){
           
//         for(int j = 0; j < i+1; j++){
//             cout <<"*";
//         }
//         cout << endl;
//      } 


     
// int n = 4;
//      for(int i = 0; i < n; i++){
           
//         for(int j = 0; j<i+1; j++){
//             cout <<(i+1);
           
//         }
//         cout << endl;
//      } 


    //  int n = 4;
    //  char ch = 'A';
    //  for(int i = 1; i < n; i++){
          
    //     for(int j = 1; j<i+1; j++){
    //         cout <<(ch);
           
    //     }
    //      ch = ch +1;
    //     cout << endl;
    //  } 


    //  int n = 7;
     
    //  for(int i = 1; i < n; i++){
          
    //     for(int j = 1; j<i+1; j++){
    //         cout << j <<" ";
           
    //     }
    //     cout << endl;
    //  } 


    //  int n = 7;
     
    //  for(int i = 0; i < n; i++){
          
    //     for(int j = i+1; j>0; j--){
    //         cout << j <<" ";
           
    //     }
    //     cout << endl;
    //  } 



    //  int n = 7;
    //  int num = 1;
    //  for(int i = 0; i < n; i++){
          
    //     for(int j =0; j< i +1; j++){
    //   //  for(int j = i+1; j>0; j--){   --- backwards  
    //         cout << num <<" ";
    //        num++;
    //     }
    //     cout << endl; 
    //  } 


    //    int n = 7;
    //  char ch = 'A';
    //  for(int i = 1; i < n; i++){
          
    //     for(int j = 1; j<i+1; j++){
    //         cout <<(ch);
    //         ch = ch +1;
    //     }
        
    //     cout << endl;
    //  } 


// ---- Problems ----
/*    A
      B A
      C B A
      D C B A 
                    */
      
      /*
        int n = 7;
     char ch = 'A';
     for(int i = 1; i < n; i++){
        
        for(int j =i+1; j>1; j--){
            cout <<(ch);
            ch = ch +1;
        }
       
        cout << endl;
     } 

     */

// inverted problems

 
 // --- piramid like str. ---
 
 /*
 int n = 7;
 int num = 1; 
 for(int i =0; i<n; i++){
    //spaces
    for(int j=0; j<i; j++){
        cout <<" ";
    }

    //num
    for(int j =0; j<n-i; j++){
        cout <<(i + 1);
    }
    cout << endl;
 }

   */

  // nested loop

/*
   int n =5;

    for(int i = 0; i < n; i++){

        for(int j=0; j<n-i-1; j++){
        cout<<" ";
    }

    for(int j=1; j<=i+1; j++){
        cout<< j;
    }

    for(int j=i; j>0; j--){
        cout << j;
    }

     cout<< endl;
    }
*/  

   // hollow diamond pattern

    return 0;
}