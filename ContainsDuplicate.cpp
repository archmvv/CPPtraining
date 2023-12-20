#include <iostream>
#include <vector>
#include <algorithm> 
#include <unordered_set>

bool containsDuplicate(std::vector<int>& nums) {
    std::sort(nums.begin(), nums.end());
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i-1] == nums[i])
            return true;
    }
    return false;
}

bool containsNearbyDuplicate(std::vector<int>& nums, int k) {
    for (int i = 0; i < nums.size()-1; i++){
        for (int j = i + 1; j < nums.size(); j++){
            if(nums[i] == nums[j] && j-i <= k){
                return true;
            }
        }
    }
    return false;
}



int main() {
    std::vector<int> arr = {2, 14, 55, 23, 17, 4, 8, 14}; 

    int k =3;
    if(containsNearbyDuplicate(arr, k) == true){
    std::cout << "There is at least one duplicate number in the list which" <<
                "is " << k << " elements away.";
    }else{
        std::cout << "There are none duplicate numbers in the list which "<<
                "are " << k << " elements away from one another.";
    }

    if(containsDuplicate(arr) == true){
    std::cout << "There is at least one duplicate number in the list.\n";
    }else{
        std::cout << "There are none duplicate numbers in the list.\n";
    }

    return 0;
}

