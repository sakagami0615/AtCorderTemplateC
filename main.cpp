//include
//------------------------------------------
#include <algorithm>
#include <bitset>
#include <cstring>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>
using namespace std;

// debug
//--------------------------------------------
#define dump(x)  cerr << #x << " = " << (x) << endl;
#define debug(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl;

//typedef
//------------------------------------------
typedef long long LL;
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<string> VS;
typedef pair<int, int> PII;

// conversion
//------------------------------------------
inline int cvt2int(string s) {int v; istringstream sin(s);sin>>v;return v;}
template<class T> inline string cvt2string(T x) {ostringstream sout;sout<<x;return sout.str();}

// for loop
//------------------------------------------
#define FOR(i,b,e) for(int i=(int)b;i<(int)e;++i)
#define RFOR(i,b,e) for(int i=(int)(e)-1;i>=(int)b;--i)
#define REP(i,e) for(int i=0;i<(int)e;++i)
#define RREP(i,e) for(int i=int(e)-1;i>=0;--i)

// logical
//------------------------------------------
#define TER(x,t,f) (x)?(t):(f)
template<class T> inline bool chmax(T &m, const T &n) {if (m<n) {m=n; return true;} return false;}
template<class T> inline bool chmin(T &m, const T &n) {if (m>n) {m=n; return true;} return false;}

// math
//------------------------------------------
template<class T> inline T sqr(T x) {return (x*x);}

// array
//------------------------------------------
#define ZERO(ary) memset((ary),0,sizeof(ary))
#define FILL(ary,v) memset((ary),v,sizeof(ary))

// container
//------------------------------------------
#define ALL(obj) (obj).begin(),(obj).end()
#define RALL(a) (a).rbegin(), (a).rend()
#define SIZE(obj) ((int)(obj).size())
#define SORT(obj) sort((obj).begin(),(obj).end())
#define PB push_back
#define MP make_pair
#define MT make_tuple

// disp
//------------------------------------------
#define DISP(s) cout << s
#define DISPL(s) cout << s << endl
#define YES(n) cout << ((n)?"YES":"NO") << endl
#define POSSIBLE(n) cout << ((n)?"POSSIBLE":"IMPOSSIBLE") << endl

//constant
//--------------------------------------------
const int INF = 1e9;
const LL LINF = 1e18;
const double EPS = 1e-15;
const int MOD = 1e9+7;
const double PI = acos(-1.0);

// global
//------------------------------------------
int i,j,k,l,m,n;



void mymain()
{
	
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	mymain();
	
	return 0;
}