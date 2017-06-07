#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d\n", &t);
    string e;
    while(t--)
    {
        getline(cin, e);

        for(int i=0;i<e.size();i++)
            if(isalpha(e[i]))
                e[i]+=3;

        reverse(e.begin(), e.end());

        for(int i=(e.size()/2);e[i]!='\0';i++)
                e[i]-=1;
        cout<<e<<endl;
    }
    return 0;
}
