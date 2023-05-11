    // Writter      : @JahidulZaid
    // Problem Link : https://www.codechef.com/problems/STONES
    // Language     : c++
    // Date         : 6/5/2023
    // Submission   : https://www.codechef.com/viewsolution/95814049
    #include <bits/stdc++.h>
    using namespace std;
    #define optimize() ios_base::sync_with_stdio;cin.tie(0);cout.tie(0);
    #define endl '\n'

    using namespace std;

    int main()
    {
        int t;
        cin >> t;
        cin.ignore();
        while(t--){
            string j;
            getline(cin, j);
            string s;
            getline(cin, s);
            int mined=0;
            for(int i =0; i<s.size(); i++){
                for(int m = 0; m< j.size(); m++ ){
                    if(j[m]==s[i]){
                        mined++;
                        break;
                    }
                }
            }
            cout << mined << endl;
            
        }
   
        return 0;
    }
    