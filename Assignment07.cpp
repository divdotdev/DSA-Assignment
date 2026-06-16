// FROG 1 (AT-CODER)

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     vector<int>h(n);
//     for(int i=0;i<n;i++)
//     {
//         cin>>h[i];
//     }
//     vector<int> dp(n,0);
//     dp[0]=0;
//     dp[1]=abs(h[1]-h[0]);
//     for(int i=2;i<n;i++)
//     {
//         int st1=dp[i-1]+abs(h[i]-h[i-1]),st2=dp[i-2]+abs(h[i]-h[i-2]);
//         dp[i]=min(st1,st2);
//     }
//     cout<<dp[n-1];
//     return 0;
// }





// FROG 2 (AT-CODER)

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n,k;
//     cin>>n>>k;
//     vector<int>v(n);
//     for(int i=0;i<n;i++)
//     {
//         cin>>v[i];
//     }
//     vector<int> dp(n,1e9);
//     dp[0]=0;
//     for(int i=1;i<n;i++)
//     {
//         for(int j=1;j<=k;j++)
//         {
//             if(i-j>=0)
//             {
//                 dp[i]=min(dp[i],dp[i-j]+abs(v[i]-v[i-j]));
//             }
//         }
//     }
//     cout<<dp[n-1];
//     return 0;
// }