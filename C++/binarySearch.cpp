#include<bits/stdc++.h>
using namespace std ;

int binarysearch(int n , int a[], int key){
    int start  = 0 , end = n ;
    while(start<=end){
        int mid = (start+end)/2;
        if(a[mid]==key){
            return mid ;
            break ;
        }
        else if (mid>key){
            end = mid- 1 ;
        }
        else {
            start = mid + 1 ;
        }
    }
    return -1 ;

}
int main(){
    int n ;
    cin >> n ;
    int a[n];
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    cout<< "key \n";
    int key ;
    cin >> key ;
    cout << binarysearch( n , a , key); 
}
