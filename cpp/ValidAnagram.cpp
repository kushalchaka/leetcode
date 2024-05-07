class Solution {
public:
    bool isAnagram(string s, string t) {
        int length1 = s.length();
        int length2 = t.length();
        char * arr1 = new char[length1 + 1];
        char * arr2 = new char[length2 + 1];
        std::strcpy(arr1, s.c_str());
        std::strcpy(arr2, t.c_str());
        std::sort(arr1, arr1 + length1);
        std::sort(arr2, arr2 + length2);
        for (int i = 0; i < std::max(length1,length2); i++)
        {
            if (arr1[i] != arr2[i])
            {
                return false;
            }
        } 
        return true; 
    }
};
