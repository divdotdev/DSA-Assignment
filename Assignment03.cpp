// SEATED TOGETHER(SAMESIT)

// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int x;
//     cin>>x;
//     if(x%5==0)
//     {
//         cout<<"No";
//     }
//     else
//     {
//         cout<<"Yes";
//     }
//     return 0;
// 	// your code goes here

// }




// EARLY CERTIFICATES(EARLYWIN)

// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int T;
//     cin>>T;
//     while(T--){
//         int N,M;
//         cin>>N>>M;
//         string A,B;
//         cin>>A>>B;
//         int len;
//         if(N<M)
//             len = N;
//         else
//         len=M;
//         for(int i=0;i<len;i++){
//             if(A[i]==B[i])
//             cout<<A[i];
//             else
//             break;
//         }
//         cout<<endl;
//     }
//     return 0;
// 	// your code goes here

// }




// DRAFT PICK(DRAFTPICK)
// #include <bits/stdc++.h>
// using namespace std;
// int main() {

//    int t;
//    cin >> t;
//    while (t--) {
//       int n, k;
//       cin >> n >> k;

//       vector<int> v(n, 0);
//       int i = 0;

//       while (k) {
//          v[i] += k;
//          k--, i++;
//          if (i == n) {
//             i = 0;
//             reverse(v.begin(), v.end());
//          }
//       }

//       cout << *max_element(v.begin(), v.end()) << endl;
//    }

//    return 0;
// }




// EVENTULLY EQUL(EQMNG)
// #include <bits/stdc++.h>
// using namespace std;
// int main() {

//    int t;
//    cin >> t;
//    while (t--) {
//       int a, b, c;
//       cin >> a >> b >> c;
//       if (a == b) cout << 0 << endl;
//       else if (__gcd(a, c) == __gcd(b, c)) cout << 1 << endl;
//       else if (__gcd(a, c + 1) == __gcd(b, c + 1)) cout << 2 << endl;
//       else cout << 3 << endl;
//    }

//    return 0;
// }