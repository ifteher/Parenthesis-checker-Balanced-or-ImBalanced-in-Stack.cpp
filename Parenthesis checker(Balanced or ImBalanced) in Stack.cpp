//
/////   ***   ---   |||         In the name of ALLAH        |||   ---   ***   ///
//#include<bits/stdc++.h>
//using namespace std;
//
//typedef long long ll;
//typedef vector<int> vi;
//typedef vector<ll> vl;
//typedef vector<vi> vvi;
//typedef vector<vl> vvl;
//typedef pair<int,int> pii;
//typedef pair<double, double> pdd;
//typedef pair<ll, ll> pll;
//typedef vector<pii> vii;
//typedef vector<pll> vll;
//typedef double dl;
//
//#define endl '\n'
//#define PB push_back
//#define F first
//#define S second
//#define all(a) (a).begin(),(a).end()
//#define rall(a) (a).rbegin(),(a).rend()
//#define sz(x) (int)x.size()
//#define tc int t; cin>>t; while(t--)
//
//const double PI = acos(-1);
//const double eps = 1e-9;
//const int inf = 2000000000;
//const ll infLL = 9000000000000000000;
//#define MOD 1000000007
//
//#define mem(a,b) memset(a, b, sizeof(a) )
//#define sqr(a) ((a) * (a))
//
//#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
//#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
//
//#define dbg(args...) do {cerr << #args << " : "; faltu(args); } while(0)
//void faltu () {            cerr << endl;}
//template < typename T, typename ... hello>void faltu( T arg, const hello &... rest) {cerr << arg << ' ';faltu(rest...);}
//
//ll gcd ( ll a, ll b ) { return __gcd ( a, b ); }
//ll lcm ( ll a, ll b ) { return a * ( b / gcd ( a, b ) ); }
// bool cmp(const pair<int, pair<int,char>> &a,
//         const pair<int,pair<int,char>> &b)
//{
//
//   if (a.second.first != b.second.first) {
//        if(a.second.first>b.second.first)
//
//        return true;
//
//         return   false;
//    }
//
//    else {
//            if(a.first<b.first)
//            return true;
//        return false;
//    }
//}
//
//int main()
//{
//    optimize();
//stack<string>st;
/////stack er jonno kono iterator nai.
/////stack er jonno kono clear function o nai jeno stack ke directly clear korte pari.
//st.push("element shes\n");
//st.push("khaled");
//st.push("zayed");
//st.push("Mitu");
//st.push("Sakina Begum Rume");
//st.push("faruk taki");
/////cout<<st.top()<<endl;
//cout<<st.size()<<endl;
//while(!st.empty())
//{
//    cout<<st.top()<<endl;
//    st.pop();
//}
//return 0;
//}
///Stack Problem: ImBalanced Bracket sequence.
#include<bits/stdc++.h>
using namespace std;
bool isBalanced(char c1,char c2)
{
    return ((c1=='(' && c2==')') || (c1=='{' && c2=='}') || (c1=='[' && c2==']'));
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        stack<char>st;
        bool done=0;
        for(auto u:s)
        {
            if(u=='(' || u=='{' || u=='[')
                {
                    st.push(u);
                }
            else
            {
                if(st.empty())
                {
                    done=0;
                    break;
                }
                else
                {
                    if(isBalanced(st.top(),u)==1)
                    {
                        st.pop();
                    }
                    else{
                        done=0;
                        break;
                    }
                }
            }
        }
        if(!st.empty())
            done=0;
        if(done==1) cout<<"stack is Balanced\n";
        else cout<<"stack is Imbalanced\n";
    }
}
/*Test case:5
()()()
Stack is Balanced
[{()}]
Stack is Balanced
[(){}}
Stack is ImBalanced
{[()}
Stack is ImBalanced
[]{}()
Stack is Balanced
*/
