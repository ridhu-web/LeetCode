// https://leetcode.com/problems/edit-distance

class Solution {
public:
    int minDistance(string word1, string word2) {
        vector <vector<int>> dp;
        int n1=word1.size();
        int n2=word2.size();
        dp.resize(n1+1, vector <int> (n2+1));

        for (int i=0;i<=n1;i++)
            dp[i][0]=i;

        for(int j=0;j<=n2;j++)
            dp[0][j]=j;

        for(int i=1;i<=n1;i++)
        {
            for(int j=1;j<=n2;j++)
            {
                int left=dp[i-1][j]+1;
                int down=dp[i][j-1]+1;

                int left_down=dp[i-1][j-1];
                cout<<"condition :"<<(word1[i]!=word2[j])<<endl;

                if(word1[i-1]!=word2[j-1])
                {
                    cout<<"happening   " <<dp[i-1][j-1]<<endl;
                    left_down=dp[i-1][j-1]+1;6;
                }
                    

                dp[i][j]=min(left,min(down,left_down));
                cout<<dp[i][j]<<"  ";
            }
            cout<<endl;
        }

        return dp[n1][n2];
    }
};