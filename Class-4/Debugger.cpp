#include<bits/stdc++.h>
using namespace std;

#define all(x)     x.begin(), x.end()
#define dbg(args...)    {string sss(#args);sss+=',';cerr<<"-->";debugger::call(all(sss), args);cerr<<"\n";}
#define dbgA(A, n)      {cerr<<"-->"<<#A<<"=(";forn(i, n)cerr<<A[i]<<" ";cerr<<")\n";}
#define dbgA2(A, n, m)  {cerr<<"-->"<<#A<<"=\n";forn(i, n){forn(j, m){cerr<<setw(4)<<A[i][j]<<" ";}cerr<<"\n";}cerr<<"\n";}

struct debugger
{
    typedef string::iterator si;
    static void call(si it, si ed) {}
    template<typename T, typename ... aT>
    static void call(si it, si ed, T a, aT... rest)
    {
        string b;
        for(; *it!=','; ++it) if(*it!=' ')b+=*it;
        cerr << b << " = " << a << " ";
        call(++it, ed, rest...);
    }
};

int main()
{

    int n;
    scanf("%d", &n);

    int currentValue = 1;
    int digitWillBeAdded = 2;

    dbg(currentValue, digitWillBeAdded);

    int sum = 0;
    for(int term=1; term<=n; term++)
    {
        sum = sum + currentValue;


        /// preparing for the next term
        currentValue = (currentValue * 10) + digitWillBeAdded;
        digitWillBeAdded+=1;
        dbg(currentValue, digitWillBeAdded);
    }

    dbg(sum);

    return 0;
}




