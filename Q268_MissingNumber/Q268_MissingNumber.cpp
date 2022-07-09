#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int missingNumber(vector<int>& nums) {
    int i;

    sort(nums.begin(), nums.end());

    for (i = 0; i < nums.size(); i++) {
        if (i != nums[i]) {
            return i;
        }
    }

    return i;
}

int main()
{
    vector<int> vec = { 0, 1, 3 };

    cout << missingNumber(vec);

    return 0;
}