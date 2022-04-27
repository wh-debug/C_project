

#include "iostream"
#include "vector"

using namespace std;

bool flag = true;

class Solution {
public:
    vector<int> Subscript = {0, 0};   
    vector<int> twoSum(vector<int>& nums, int target);
};


vector<int> Solution::twoSum(vector<int> &nums, int target)
{

    for (int iter = 0; iter != nums.size(); ++iter){
        if (nums[iter] <= target){
            if (flag){
                cout << "one first" << endl;
                Subscript[iter - iter] = iter;
                flag = false;
            }            
            else if(nums[iter] == (target - nums[Subscript[0]])){
                Subscript[iter - (iter- 1)] = iter;
            }
        }
    }
    return Subscript;
}

int main(int argc, char** argv)
{
    Solution myfun;
    vector<int> ctest;
    vector<int> num = {2,7,11,15};

    ctest = myfun.twoSum(num, 17);

    for(int i = 0; i < 2; i++){
        cout << ctest[i] << ' ';
    }
    cout << endl;

    return 0;
}
