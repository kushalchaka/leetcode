class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::vector <int> result;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (i != j) {
                    if (nums.at(i) + nums.at(j) == target) {
                        result.push_back(i);
                        result.push_back(j);
                    }
                }

            }
        }
        return result;
    }
}; 
