
// -------------------------------------ajeet gupta ---------------------------------------------     
#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
#include<math.h>                                                                                 
#include<string>
#include<unordered_set>
#include<unordered_map>
#include<cstring>
#include<map>
#include<stack>
#include<set>
#include<queue>
#include <deque>
#include<ext/pb_ds/assoc_container.hpp>  
#include<ext/pb_ds/tree_policy.hpp>  

// #define rep(i,n) for (int i = 0; i < (n); ++i)
const long long INF = 1ll << 32;



 
// for iterator (*it).first == it->first for maps
// A TO Z --> 65 TO 90 ,  a to z --> 97 to 122
#define int               long  long
// #define INF               1e18
#define nline             "\n"
#define sl                s.length()
#define pb                push_back               
#define fr(a,b)           for(int i = a; i < b; i++)
#define rep(i,a,b)        for(int i = a; i < b; i++)
#define mod               1000000007 
#define all(x)            (x).begin(), (x).end()
#define prDouble(x)       cout << fixed << setprecision(10) << x
#define triplet           pair<ll,pair<ll,ll>>
#define goog(tno)         cout << "Case #" << tno <<": "
#define fast_io           ios_base::sync_with_stdio(false);cin.tie(NULL)
#define read(x)           int x; cin >> x
#define show(x)           cout<<x<<endl
const int Mod = 1e9+7;

/* 
sum upto n = (n*(n+1))/2 
sun upto n-1 = (n*(n-1)/2)  
(a+b)%M = ( (a%M) + (b%M) )% M
(a*b)%M = ( (a%M) * (b%M) )% M
(a-b)%M = ( (a%M) - (b%M) + M)% M  // extra +M for making positve
*/

using namespace std;
// using namespace __gnu_pbds;
// typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds; // find_by_order, order_of_key


typedef long long ll;
typedef unsigned long long ull;
typedef unordered_map<ll, bool> ump;
typedef  priority_queue<int, vector<int>, greater<int> > pq;  // MIN HEAP 


#ifndef ONLINE_JUDGE
#define debug(x) cerr <<#x <<" ";_print(x); cerr<<nline;
#else
#define debug(x)
#endif

// void _print(int a ){ cerr<<a; }
void _print(string a ){ cerr<<a; }
// void _print(long long a ){ cerr<<a; }
void _print(bool a ){ cerr<<a; }  
void _print(char a ){ cerr<<a; }

template<class T> void _print(vector<T> v1){ cerr<<"[ "; for(T i:v1){_print(i);cerr<<" ";}cerr<<"]";}
template<class T> void _print(set<T> s1){cerr<<"[ ";for(T i:s1){_print(i);cerr<<" ";}cerr<<"]";}

void debug_gen()
{
    #ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
    #endif
}

void init_code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}





// void swap(int a, int b)
// {
//    int temp = a;
//    a=b;
//    b = temp;
// }

void printpair(vector<pair<ll,ll>> &v)
{
   for(int i=0; i<v.size(); ++i)
   {
      cout<<v[i].first<<" "<<v[i].second<<endl;
   }
   cout<<endl;


}

// finding gcd using long division menthod using RECURSION
int GCD(int a, int b)
{
   if(b==0)    
   {
      return a;
   }
   return GCD(b, a%b);
}




// int fact[1000001];



const int N = 21000;
vector<int> prime(N+1);
vector<bool> isprime(N+1, true);


void seve()
{
    isprime[1] = false;
    for(int i=2; i<=N; ++i)
    {
        if(isprime[i])
            {
                prime.push_back(i);
                for(int j = i*i; j<=N; j+=i)
                {
                    isprime[j] =false;
                }

            }
    }


}


void solve(){  
   
    int num;
    cin >>num;
    int ajeet[num+2];
    int abhay[num+2];
    for(int i=1; i<=num; ++i )
    cin >> ajeet[i];
    for(int i=1; i<=num; ++i )
    cin >> abhay[i];
    
    int max = 0;
    int max_ind =0;
    for(int i =1; i<=num; ++i)
    {
        if(ajeet[i]>max )
        {
            max = ajeet[i];
            max_ind = i;
        }else if(ajeet[i]==max )
        {
            if(abhay[i]>abhay[max_ind]){
                max = ajeet[i];
                max_ind = i;
            }
        }
    }
    cout<<max_ind<<endl;
 
}


     




set <int > s;
bool prime_square[1000000];
void sieve(){
   for(int i =2; i<1000000; ++i)
   {
      if(!prime_square[i])
      {
         s.insert(i*i);
         for(int j= i*i; j<1000000; j+=i )
         {
            prime_square[j]= true;

         }
      }
   }
   
}


// int main() 

signed main()
{
   // TOTAL SUBARRAY OF N DISTINCT ELEMENT IS (N*(N+1)/2)
   debug_gen();
   fast_io;
   init_code();
   seve();
   ll tt;
   cin>>tt; 
   while(tt--)
   {
   solve();
   } 
   // solve();


 

   }



 
   
  

    // solve();

    // int a =10;
    // int b=20;
    // a++;
    // string s ="ajeet";
    // vector<int> v1={1,2,3};
    // debug(v1); 
    // vector<string> vs ={"ajeet ", "gupta"};
    // debug(vs);
    // debug(a);
    // debug(b);
    // set<int> s2;
    // s2.insert(20000);
    // s2.insert(88888);
    // debug(s2);

