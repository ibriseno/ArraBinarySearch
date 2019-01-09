
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;
int main(){
    int arr[100], beg, mid, end, i, n, num;
    cout << "Enter Array size: " ;
    cin >> n;
    
    cout << endl;
    
    cout << "Enter numbers: ";
    for(i = 0; i < n; i++){
        cin >> arr[i];
    }
    beg = 0;
    end = n-1;
    
    cout << endl;
    
    cout << "Enter a value to be searched: ";
    cin >> num;
    
    while( beg <= end){
        mid = (beg+end)/2;
        if(arr[mid] == num){
            cout << "Item found at position: " << (mid + 1);
            
            exit(0);
        }else if(num > arr[mid]){
            beg = mid+1;
        }else if(num < arr[mid]){
            end = mid -1;
        }
    }
    cout << "Number not found";
}
