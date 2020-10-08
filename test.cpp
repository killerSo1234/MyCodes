#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> diffWaysToCompute(string input)
    {
        vector<int> ans;
        bool flag = true;
        int size = input.length();
        for (size_t i = 0; i < size; i++)
        {
            char ch = input[i];
            if (ch == '+' || ch == '-' || ch == '*')
            {
                flag = false;
                vector<int> ans_left = diffWaysToCompute(input.substr(0, i));
                vector<int> ans_right = diffWaysToCompute(input.substr(i + 1));

                for (int n = 0; n < ans_left.size(); n++)
                {
                    for (int m = 0; m < ans_right.size(); m++)
                    {
                        switch (ch)
                        {
                        case '+':
                            ans.push_back(ans_left[n] + ans_right[m]);
                            break;
                        case '-':
                            ans.push_back(ans_left[n] - ans_right[m]);
                            break;
                        case '*':
                            ans.push_back(ans_left[n] * ans_right[m]);
                            break;
                        }
                    }
                }
            }
        }
        if (flag)
        {
            ans.push_back(stoi(input));
            cout<<"Conveted "<<stoi(input)<<endl;
            return ans;
        }
        return ans;
    }
};

int main()
{
    Solution sl ;
    vector<int> a = sl.diffWaysToCompute("2*3-4*5");
    for(int v:a){
        cout<<v<<" ";
    }
}