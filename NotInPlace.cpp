#include <bits/stdc++.h>
using namespace std;
int main()
    int i,n,c=0;
    cin >> n;
    vector <int> (n);
    for(i=0;i<n;i++){
        cin >> temp;
        vec.push_back(temp);
        vec2[i] = vec[i];
    }
    sort(vec.begin(),vec.end())
    for(i=0;i<n;i++){
        if(vec[i]!=vec2[i])
            c++;
    }
    cout << c;
    return 0;
}