/*
 * @lc app=leetcode id=2038 lang=cpp
 *
 * [2038] Remove Colored Pieces if Both Neighbors are the Same Color
 */

// @lc code=start
class Solution
{
public:
    bool winnerOfGame(string colors)
    {
        map<char, int> ch;
        for (auto it = colors.begin(); it != colors.end();)
        {
            char x = *it;
            auto t = it;
            while (t != colors.end() && *t == x)
            {
                t++;
            }
            ch[x] += max(int(distance(it, t) - 2), 0);
            it = t;
        }

        if (ch['A'] > ch['B'])
        {
            return true;
        }
        return false;
    }
};
// @lc code=end
