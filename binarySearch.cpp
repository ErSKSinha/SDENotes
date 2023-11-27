#include <iostream>
#include <vector>
using namespace std;

/* 
    Binary Search using recursion
    
    Given an array of integers nums which is sorted in ascending order,
     and an integer target, write a function to search target in nums. 
    If target exists, then return its index. Otherwise, return -1.
 */

int binarySearchRecursion(vector<int> arr, int s, int e, int key) {
    int mid = s + ( e - s ) /2; 
    // base case 
    if(s > e) {
        return -1;
    }
    if(arr[mid] == key) {
        return mid;
    }
    if(arr[mid] < key) {
        return binarySearchRecursion(arr, mid + 1, e, key);
    }else {
        return binarySearchRecursion(arr, s , mid -1, key);
    }
}

int search(vector<int>& nums, int target) { //recursion method
        int s = 0; 
        int e = nums.size() -1;
        int ans = binarySearchRecursion(nums, s, e, target);
        return ans;
    }

int main() {
    vector<int> arr = {-1,0,3,5,9,12};
    int target = 9;
    int ans; 
    ans = search(arr, target);
    cout << "your  key array index is : " << ans << endl; 
    return 0;
}
