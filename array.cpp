#include<iostream>
using namespace std;

  //  int main(){
   

   /*
      int marks[5] = {100, 101, 102, 103, 104,};

      marks[0] = 1000;

      cout << marks[0] << endl;
      cout << marks[1] << endl;
      cout << marks[2] << endl;
      cout << marks[3] << endl;
      cout << marks[4] << endl;
         
     */
        // find min and max

/*
     int nums[] ={5, 15, 22, 45, -31, -19};
     int size = 6;

     int smallest = INT8_MAX;
     int largest = INT8_MIN;

     for(int i = 0; i<size; i++) {
        
        if(nums[i] < smallest){
            smallest = nums[i];
        }
        if(nums[i] > largest){
            largest = nums[i];
        }
     }

     cout << "smallest =" <<smallest << endl; 
     cout << "smallest =" <<largest << endl; 

*/


     // search the element::

/*
     int linearSearch(int arr[], int sz, int target) {
        for(int i =0; i<sz; i++){
            if(arr[i] == target){
            return i;
        }
     }

     return -1;

}


  int main() {
    int arr[] = {4, 5, 3, 7, 1, 8, 2, 1};
    int sz =7;
    int target = 8;


    cout << linearSearch(arr, sz, target) << endl;

    return 0;
   }

   */

   // reverse the arrey




void reverseArray(int arr[], int sz) {
    int start = 0, end = sz-1;

    while(start < end) {
         swap(arr[start], arr[end]);
         start++;
         end--;
    }
}

   int main() {
    int arr[] = {4, 5, 3, 7, 1, 8, 2};
    int sz =7;

    reverseArray(arr, sz);

    for(int i=0; i<sz; i++){
        cout << arr[i] << " ";
    }
      
     cout<<endl; 
    return 0;
   }

