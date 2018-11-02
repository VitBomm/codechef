#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>
#include <vector>
#include <map>
using namespace std;
struct compare
{
    bool operator()(const string &s1,const string &s2)
    {
        return s1.size() < s2.size();
    }
};
void solved()
{
    map<string,bool> mapp;
    vector<string> v;
    bool vul = false;
    int n,i,save;
    string str,strtemp;
    cin>>n;
    save = n;
    for(i = 0; i<save;i++)
    {
        cin>>str;
        v.push_back(str);
    }
    compare c;
    sort(v.begin(),v.end(),c);
    for(i = 0; i<save;i++)
    {
        str = v[i];
        for(int j = 0;j<str.length();j++)
        {
            strtemp += str[j];
            if(mapp[strtemp] == true)
            {
                cout<<"vulnerable";
                return;
            }
        }
        mapp[strtemp] = true;
        strtemp.clear();
    }
    cout<<"non vulnerable";
}
int main()
{
    solved();
    return 0;
}
