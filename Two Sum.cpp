#include <bits/stdc++.h>

using namespace std;

int main() {
    int nums [] = {3,2,4};
    int target;
    cin >> target;
    int x=0,y=0;
    int size = sizeof(nums)/sizeof(nums[0]);
    for (int i = 0; i <size ; ++i) {
        int search = target - nums[i];
        for (int j = i+1; j <size ; ++j) {
            if (nums[j] == search){
                x = i;
                y = j;
                break;
            }
        }
    }
    cout <<"[" << x << "," << y << "]";
}
