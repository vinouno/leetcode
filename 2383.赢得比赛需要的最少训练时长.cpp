/*
 * @lc app=leetcode.cn id=2383 lang=cpp
 *
 * [2383] 赢得比赛需要的最少训练时长
 */

// @lc code=start
class Solution {
public:
    int minNumberOfHours(int initialEnergy, int initialExperience, vector<int>& energy, vector<int>& experience) {
        int sumExperience = initialExperience;
        int sumEnergy = 0;
        int result = 0;
        for(int num : experience)
        {
            if(sumExperience <= num)
            {
                result += (num + 1 -sumExperience);
                sumExperience = num + 1;
            }
            else
            sumExperience += num;
        }
        for(int num : energy)
        {
            sumEnergy += num;
        }
        if(sumEnergy >= initialEnergy)
        result += (sumEnergy + 1 - initialEnergy);
        return result;
    }
};
// @lc code=end

