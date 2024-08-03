#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<string> str;
    string in;
    cout<<"Enter paragraph : \n";
    while(true){
        cin>>in;
        if(in=="end")
            break;
        str.push_back(in);
    }
    map <string,int> freq;
    for(auto it:str){
        freq[it]++;
    }
    cout<<"frequency of words :\n";
    for(auto it:freq){
        cout<<it.first<<" : "<<it.second<<endl;
    }
    

    return 0;
}
