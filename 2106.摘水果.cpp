#include <vector>
#include <cmath>

using namespace std;
/*
 * @lc app=leetcode.cn id=2106 lang=cpp
 *
 * [2106] 摘水果
 */

// @lc code=start
class Solution {
public:
    int maxTotalFruits(vector<vector<int>>& fruits, int startPos, int k) {
        int x = 0;
        int start = 0;
        int sum = 0;
        for(int i = 0; i < fruits.size(); i++)
        {
            if(fruits[i][0] >= startPos)
            {
                if(fruits[i][0] == startPos)
                start = fruits[i][1];
                x = i;
                break;
            }
           
        }

        for(int i = x; i < fruits.size(); i++)
        {
            fruits[i][0] -= startPos;
            if(fruits[i][0] > 0)
            {
                sum += fruits[i][1];
                fruits[i][1] = sum;
            }          
        }

        sum = 0;
        for(int i = x - 1; i >= 0 ; i--)
        {
            fruits[i][0] -= startPos;
            sum += fruits[i][1];
            fruits[i][1] = sum;         
        }

        int maxFruit = 0;
        for(vector<int> fruit : fruits)
        {
            if(abs(fruit[0]) > k)
            continue;
            else if(k < abs(fruit[0]) * 3)
            {
                maxFruit = max(fruit[1] ,  maxFruit);
            }
            else
            {
                int distance = k - abs(fruit[0]) * 2;
                if(fruit[0] > 0)
                {
                    vector<int> temp;
                    for(vector<int> f : fruits)
                    {
                        if(f[0] > 0 - distance)
                        {
                            temp = f;
                            break;
                        }
                    }
                    maxFruit = max(fruit[1] + temp[1] ,  maxFruit);
                }
                else if(fruit[0] < 0)
                {
                    vector<int> temp;
                    for(vector<int> f : fruits)
                    {
                        if(f[0] > distance)
                        break;
                        temp = f;
                    }
                    maxFruit = max(fruit[1] + temp[1] ,  maxFruit);
                }
            }
        }
        return maxFruit + start;
    }
};

//哪里出问题了呢？
// @lc code=end

