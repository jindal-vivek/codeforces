#include <bits/stdc++.h>
using namespace std;










int main(){
    //freopen("input.txt" , "r" ,stdin);


    int n,ans=2;

    cin >> n;

    vector<pair<int,int>> x(n);

    for(int i = 0 ; i < n ; ++i){
        int a,b;
        cin >> a >> b;
        x[i] = make_pair(a,b);

    }
    if(n==1){
        cout << 1 << endl;
        return 0;
    }
    int isLeft = -1;
    for(int i = 1 ; i < n-1 ; ++i){
        int zz;
        if(isLeft == -1 || isLeft == 0){
            zz= x[i-1].first;
        }
        else{
            zz = x[i-1].first + x[i-1].second;
        }
        if(zz < x[i].first-x[i].second){

            ans+=1;
            isLeft = -1;
        }
        else if(x[i+1].first > x[i].first+x[i].second){
            ans+=1;
            isLeft = 1;
        }
        else{
            isLeft = 0;
        }

    }

    cout << ans << endl;
    return 0;
}

