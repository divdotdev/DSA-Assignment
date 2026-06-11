// Question 1 => NEXT GREATER(Brute force)
#include <iostream>
using namespace std;
int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        int ans=-1;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]>arr[i])
            {
                ans=arr[j];
                break;
            }
        }
        cout<<ans;
    }
    return 0;
}

// Question 1 => NEXT GREATER(Stack Approach)
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int>ans(n,-1);
    stack<int>s;
    for(int i=n-1;i>=0;i--){
        while(!s.empty()&&s.top()<= v[i]){
            s.pop();
        }
        if(!s.empty()){
            ans[i]=s.top();
        }
        s.push(v[i]);
    }
    for(int i=0; i<n;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}



// Question 2 => PREVIOUS GREATER(Brute force approach)

#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        int ans=-1;
        for(int j=i-1;j>=0;j--){
            if(arr[j]>arr[i]){
                ans=arr[j];
                break;
            }
        }
        cout<<ans<< " ";
    }
    return 0;
}

// Question 2 => PREVIOUS GREATER(Stack Approach)

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int>ans(n,-1);
    stack<int>s;
    for(int i=0;i<n;i++){
        while(!s.empty()&&s.top()<=v[i]){
            s.pop();
        }
        if(!s.empty()){
            ans[i]=s.top();
        }
        s.push(v[i]);
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}


// QUESTION 3 => NEXT SMALLER

#include <iostream>
using namespace std;
int main() 
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        int ans=-1;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                ans=arr[j];
                break;
            }
        }
        cout<<ans<<" ";
    }
    return 0;
}


// QUESTION 4 => PREVIOUS SMALLER

#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        int ans=-1;
        for(int j=i-1;j>=0;j--){
            if(arr[j]<arr[i]){
                ans=arr[j];
                break;
            }
        }
        cout<<ans<< " ";
    }
    return 0;
}