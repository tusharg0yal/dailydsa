#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0, max_count= INT_MIN;
        for(int i = 0 ;i < nums.size() ;++i){
            if(nums[i]==1){
                count++;
            }else{
                count = 0;
            }
            
            max_count = max(count, max_count);
        }
        return max_count;
}
int main(){
    vector<int> nums;
    int n;
    cin>>n;
    for(int i = 0 ; i < n;++i){
        int a;
        cin>>a;
        nums.push_back(a);
    }
    cout << findMaxConsecutiveOnes(nums);
}