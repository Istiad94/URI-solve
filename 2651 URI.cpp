#include<bits/stdc++.h>
using namespace std;

/// M A C R O Starts Here
#define pf printf
#define sf scanf
#define MAX 500000
#define INF 99999
#define pi acos(-1.0)
#define get_stl(s) getline(cin,s)
#define sif(a) scanf("%d",&a)
#define pif(a) printf("%d\n",a)
#define puf(a) printf("%llu\n",a)

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    //freopen("in.txt","r", stdin);
    //freopen("out.txt","w", stdout);

    string a;
    cin>>a;

    bool match = false;

    for(int i=0;i<a.size()-4;i++)
        if(tolower(a[i])=='z'&&tolower(a[i+1])=='e'&&tolower(a[i+2])=='l'&&tolower(a[i+3])=='d'&&tolower(a[i+4])=='a')
        {
            match = true;
            break;
        }
    if(match)
        pf("Link Bolado\n");
    else
        pf("Link Tranquilo\n");

    return 0;
}
