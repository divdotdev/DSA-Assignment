// Stock Span Problem
// class Solution {
//   public:
//     vector<int> calculateSpan(vector<int>& arr) {
//     stack<int>s;
//     vector<int> ans;
//     for(int i=0;i<arr.size();i++){
//         while(!s.empty() && arr[i]>=arr[s.top()])s.pop();
//         if(s.empty()) ans.push_back(i+1);
//         else ans.push_back(i-s.top());
//         s.push(i);
//     }
//     return ans;
//     }
// };


// Celebrity Problem














// Games on the Train(2236 A) [CODEFORCES]
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
 
        int a=0;
        int b=100;
        for(int i=0;i<n;i++)
        {
            int c;
            cin>>c;
            if(c>a)
                a=c;
            if(c<b)
                b=c;
        }
        cout<<a-b+1<<endl;
    }
    return 0;
}
