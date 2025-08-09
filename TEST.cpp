//Biểu thức đúng
#include <bits/stdc++.h>
using namespace std;

void TestCase() {
    string s;
    getline(cin, s);
    int res = 0, dem = 0;
    stack<int> st;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == '(') {
            st.push(i);
            dem++;
            res = max(res, dem);
        }
        else if (s[i] == ')') {
            if (!st.empty() && s[st.top()] == '(') {
               st.pop();
               dem--;
            } else {
                cout << -1;
                return;
            }
        }
    }
    if (!st.empty())
        cout << -1;
    else
        cout << res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1; cin >> T; cin.ignore();
    while (T--) {
        TestCase();
        cout << endl;
    }
    return 0;
}

//Chênh lệch nhỏ nhất
#include <bits/stdc++.h>
using namespace std;

int n, k, ans;
int hv[10], vs[10];
string a[10], b[10];

void solve() {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < k; ++j) {
            b[i][j] = a[i][hv[j]];
        }
    }
    sort(b, b + n);
    int minn = stoi(b[0]);
    int maxx = stoi(b[n - 1]);
    ans = min(ans, maxx - minn);
}

void Try(int i) {
    for (int j = 0; j < k; ++j) {
        if (!vs[j]) {
            hv[i] = j;
            vs[j] = 1;
            if (i == k - 1) solve();
            else Try(i + 1);
            vs[j] = 0;
        }
    }
}

void testCase() {
    cin >> n >> k;
    ans = INT_MAX;
    memset(vs, 0, sizeof(vs));
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        b[i] = a[i];
    }
    Try(0);
    cout << ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}

//Chia cắt đồ thị
#include <bits/stdc++.h>
using namespace std;

int V, E, u, v;
vector<vector<int>> G;
vector<int> vs;

void BFS(int u) {
    queue<int> q;
    q.push(u);
    vs[u] = true;
    while (!q.empty()) {
        u = q.front(); q.pop();
        for (int v : G[u]) {
            if (!vs[v]) {
                q.push(v);
                vs[v] = true;
            }
        }
    }
}

void TestCase() {
    cin >> V >> E;
    G.assign(V + 1, {});
    while (E--) {
        cin >> u >> v;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    int res = 0, lthong = 1;
    for (int i = 1; i <= V; ++i) {
        int cnt = 0;
        // vs.assign(V + 1, false);
        vs[i] = true;
        for (int j = 1; j <= V; ++j) {
            if (!vs[j]) {
                BFS(j);
                cnt++;
            }
        }
        if (cnt > lthong) {
            lthong = cnt;
            res = i;
        }
    }
    cout << res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1; cin >> T;
    while (T--) {
        TestCase();
        cout << "\n";
    }
    return 0;
}
//Chia đôi
#include <bits/stdc++.h>
using namespace std;

long long f[35][35] = {};

void prepare() {
    f[0][0] = 0;
    f[0][1] = f[1][0] = 1;
    for (int i = 0; i <= 30; ++i) {
        for (int j = 0; j <= 30; ++j) {
            if (i == 0) f[i][j] = 1;
            if (j == 0) f[i][j] = f[i - 1][1];
            if (i && j) f[i][j] = f[i - 1][j + 1] + f[i][j - 1];
        }
    }
}

void testCase() {
    int n; cin >> n;
    cout << f[n][0];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    prepare();
    int T = 1; cin >> T;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}

// Chữ số nguyên tố
#include <bits/stdc++.h>
using namespace std;

void TestCase() {
    int n; cin >> n;
    queue<string> q;
    vector<int> a = {2, 3, 5, 7};
    do {
        int x = 0;
        for (int i : a)
            x = x * 10 + i;
        if (x % 2 != 0)
            q.push(to_string(x));
    } while (next_permutation(a.begin(), a.end()));

    while (!q.empty()) {
        string s = q.front();
        q.pop();
        if (s.back() != '2')
            cout << s << endl;
        if (s.length() == n)
            break;
        q.push(s + '2');
        q.push(s + '3');
        q.push(s + '5');
        q.push(s + '7');
    }
    while (!q.empty()) {
        if (q.front().back() != '2')
            cout << q.front() << endl;
        q.pop();
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1;
    while (T--) {
        TestCase();
        cout << "\n";
    }
    return 0;
}
//Chu trình trên đồ thị có hướng
// 

#include <bits/stdc++.h>
using namespace std;

int V, E, s, t, u, v, ok;
vector<vector<int>> G;
vector<int> vs;

void DFS(int u) {
    if (ok) return;
    vs[u] = 1;
    for (int v : G[u]) {
        if (vs[v] == 0)
            DFS(v);
        else if (vs[v] == 1) {
            ok = 1;
            return;
        }
    }
    vs[u] = 2;
}

void TestCase() {
    ok = 0;
    cin >> V >> E;
    G.assign(V + 1, {});
    vs.assign(V + 1, 0);
    while (E--) {
        cin >> u >> v;
        G[u].push_back(v);
    }
    for (int i = 1; i <= V; ++i) {
        if (!vs[i] && !ok) {
            DFS(i);
        }
    }
    cout << (ok ? "YES" : "NO");
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1; cin >> T;
    while (T--) {
        TestCase();
        cout << "\n";
    }
    return 0;
}

//Đánh số thứ tự cặp dấu ngoặc
#include <bits/stdc++.h>
using namespace std;

void testCase() {
    string s; getline(cin, s);
    int index = 0;
    stack<int> st;
    vector<int> res;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == '(') {
            index++;
            st.push(index);
            res.push_back(index);
        } else if (s[i] == ')') {
            res.push_back(st.top());
            st.pop();
        }
    }
    for (int i : res) cout << i << " ";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1; cin >> T; cin.ignore();
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}

//Đảo từ
#include <bits/stdc++.h>
using namespace std;

void testCase() {
    string str, s;
    getline(cin, str);
    vector<string> v;
    stringstream ss(str);
    while (ss >> s) {
        reverse(s.begin(), s.end());
        v.push_back(s);
    }
    for (string i : v) cout << i << " ";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1; cin >> T; cin.ignore();
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}

// Dãy con tổng bằng S
#include <bits/stdc++.h>
using namespace std;

int n, s, res;
vector<int> a;

void Try(int i, int sum, int cou) {
    if (sum == s) {
        res = min(res, cou);
        return;
    }
    if (i == n or cou >= res or sum > s) {
        return;
    }
    for (int j = 0; j <= 1; ++j) {
        Try(i + 1, sum + j * a[i], cou + j);
    }
}

void testCase() {
    res = INT_MAX;
    cin >> n >> s;
    a.resize(n);
    for (int &i : a) cin >> i;
    Try(0, 0, 0);
    if (res == INT_MAX) res = -1;
    cout << res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}

//Dãy con liên tiếp
#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    vector<int> a(n);
    for (int &i : a) cin >> i;
    int maxx = *max_element(a.begin(), a.end());
    int len = 1;
    for (int i = 0; i < n; ++i) {
        if (a[i] == maxx) {
            int l = 1;
            while (i + 1 < n && a[i + 1] == maxx) {
                l++;
                i++;
            }
            len = max(len, l);
        }
    }
    cout << len;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}
//Dãy con tăng dần
#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> a, b;
vector<vector<int>> res;

void solve() {
    if (b.size() < 2) return;
    vector<int> c(b.begin(), b.end());
    sort(c.begin(), c.end());
    if (b == c) res.push_back(b);
}

void Try(int i) {
    for (int j = 0; j <= 1; ++j) {
        if (j == 1) b.push_back(a[i]);
        if (i == n - 1) solve();
        else Try(i + 1);
        if (j == 1) b.pop_back();
    }
}

bool cmp(vector<int> a, vector<int> b) {
    string x = "", y = "";
    for (int i : a) x += to_string(i) + " ";
    for (int i : b) y += to_string(i) + " ";
    return x < y;
}

void testCase() {
    cin >> n;
    a.resize(n);
    for (int &i : a) cin >> i;
    Try(0);
    sort(res.begin(), res.end(), cmp);
    for (auto i : res) {
        for (int j : i) cout << j << " ";
        cout << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}
//Dãy số đẹp
#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    vector<int> a(n);
    for (int &i : a) cin >> i;
    int res = 0;
    for (int i = 0; i < n - 1; ++i) {
        if (max(a[i], a[i + 1]) <= 2 * min(a[i], a[i + 1]))
            continue;
        if (a[i] < a[i + 1]) {
            int now = a[i];
            while (now * 2 < a[i + 1]) {
                now *= 2;
                res++;
            }
        } else {
            int now = a[i];
            while (now > 2 * a[i + 1]) {
                now = ceil(1.0 * now / 2);
                res++;
            }
        }
    }
    cout << res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1; cin >> T;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}

// Đếm số vật cản trên mê cung
#include <bits/stdc++.h>
using namespace std;

const int X[4] = {-1, 0, 1, 0};
const int Y[4] = {0, 1, 0, -1};

int n, m, ans = 0;
vector<string> a;

void bfs(int i, int j) {
    a[i][j] = '.';
    for (int k = 0; k < 4; ++k) {
        int x = i + X[k];
        int y = j + Y[k];
        if (x >= 0 && x < n && y >= 0 && y < m && a[x][y] == '#') {
            bfs(x, y);
        }
    }
}

void TestCase() {
    cin >> n >> m;
    a.resize(n);
    for (string &x : a) cin >> x;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (a[i][j] == '#') {
                ans++;
                bfs(i, j);
            }
        }
    }
    cout << ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T = 1;
    while (T--) {
        TestCase();
        cout << "\n";
    }
    return 0;
}

//Di chuyển trên ma trận nhị phân
// DI CHUYỂN TRÊN MA TRẬN NHỊ PHÂN

#include <bits/stdc++.h>
using namespace std;

int BinToDec(string s) {
    int x = 0;
    for (int i = 0; i < s.length(); ++i) {
        x = x * 2 + (s[i] - '0');
    }
    return x;
}

string DecToHec(int x) {
    string s = "";
    while (x > 0) {
        int mod = x % 16;
        if (mod < 10) s += mod + '0';
        else s += (mod - 10) + 'A';
        x /= 16;
    }
    reverse(s.begin(), s.end());
    return s;
}

void TestCase() {
    int n; cin >> n;
    string a[100][100], dp[100][100];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> a[i][j];
        }
    }
    dp[0][0] += a[0][0];
    for (int i = 1; i < n; ++i) {
        dp[0][i] = dp[0][i - 1] + a[0][i];
        dp[i][0] = dp[i - 1][0] + a[i][0];
    }
    for (int i = 1; i < n; ++i) {
        for (int j = 1; j < n; ++j) {
            dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]) + a[i][j];
        }
    }
    string s = dp[n - 1][n - 1];
    while (s.length() % 4) {
        s = "0" + s;
    }
    for (int i = 0; i < s.length(); i += 4) {
        string sub = s.substr(i, 4);
        int dec = BinToDec(sub);
        string hec = DecToHec(dec);
        cout << hec;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1;
    while (T--) {
        TestCase();
        cout << "\n";
    }
    return 0;
}

//Di chuyển trong mê cung
#include <bits/stdc++.h>
using namespace std;

const int dr[4] = {-1, 0, 0, 1};
const int dc[4] = {0, -1, 1, 0};
const string ds[4] = {"U", "L", "R", "D"};

int n, a[10][10];
vector<string> res;

void Try(int i, int j, string s) {
    if (i == n and j == n) {
        res.push_back(s);
        return;
    }
    for (int k = 0; k < 4; ++k) {
        int x = i + dr[k];
        int y = j + dc[k];
        if (x >= 1 and x <= n and y >= 1 and y <= n and a[x][y] == 1) {
            a[x][y] = 0;
            Try(x, y, s + ds[k]);
            a[x][y] = 1;
        }
    }
}

void testCase() {
    res.clear();
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cin >> a[i][j];
        }
    }
    a[1][1] = 0;
    Try(1, 1, "");
    if (res.empty()) cout << -1;
    else {
        sort(res.begin(), res.end());
        cout << res.size() << " ";
        for (string i : res) cout << i << " ";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1; cin >> T;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}

//Đoạn liên tiếp
#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    vector<int> a(n), l(n);
    for (int &i : a) cin >> i;
    stack<int> st;
    for (int i = 0; i < n; ++i) {
        while (!st.empty() && a[st.top()] <= a[i]) {
            st.pop();
        }
        if (st.empty()) l[i] = 0;
        else l[i] = st.top() + 1;
        st.push(i);
    }
    for (int i = 0; i < n; ++i) {
        cout << i - l[i] + 1 << " ";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1; cin >> T;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}

//Đường đi có hướng
#include <bits/stdc++.h>
using namespace std;

int V, E, s, t, u, v;
vector<vector<int>> G;
vector<bool> vs;
vector<int> pre;

void BFS(int s) {
    queue<int> q;
    q.push(s);
    vs[s] = true;
    while (!q.empty()) {
        u = q.front(); q.pop();
        for (int v : G[u]) {
            if (!vs[v]) {
                q.push(v);
                vs[v] = true;
                pre[v] = u;
            }
        }
    }
}

void Trace(int t) {
    int last = t;
    stack<int> st;
    while (last != -1) {
        st.push(last);
        last = pre[last];
    }
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
}

void TestCase() {
    cin >> V >> E >> s >> t;
    G.assign(V + 1, {});
    vs.assign(V + 1, false);
    pre.assign(V + 1, -1);
    while (E--) {
        cin >> u >> v;
        G[u].push_back(v);
    }
    BFS(s);
    if (!vs[t]) cout << -1;
    else Trace(t);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1; cin >> T;
    while (T--) {
        TestCase();
        cout << "\n";
    }
    return 0;
}

//Duyệt cây theo mức đảo ngược
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
    
    Node(int data) {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

void MakeNode(Node *root, int n1, int n2, char c) {
    switch (c) {
        case 'L':
            root->left = new Node(n2);
            break;
        case 'R':
            root->right = new Node(n2);
            break;
    }
}

void Insert(Node *root, int n1, int n2, char c) {
    if (root == NULL)
        return;
    if (root->data == n1)
        MakeNode(root, n1, n2, c);
    else {
        Insert(root->left, n1, n2, c);
        Insert(root->right, n1, n2, c);
    }
}

void ReverseLevelOrder(Node *root) {
    queue<Node*> q;
    q.push(root);
    stack<int> st;
    while (!q.empty()) {
        Node* p = q.front(); q.pop();
        st.push(p->data);
        if (p->right != NULL)
            q.push(p->right);
        if (p->left != NULL)
            q.push(p->left);
    }
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
}

void TestCase() {
    int n; cin >> n;
    Node *root = NULL;
    queue<Node*> q;
    while (n--) {
        int n1, n2;
        char c;
        cin >> n1 >> n2 >> c;
        if (root == NULL) {
            root = new Node(n1);
        } 
        Insert(root, n1, n2, c);
    }
    ReverseLevelOrder(root);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1; cin >> T;
    while (T--) {
        TestCase();
        cout << endl;
    }
    return 0;
}

//Hình chữ nhật đơn sắc
#include <bits/stdc++.h>
using namespace std;

long long solve(int a[], int n) {
    int l[n], r[n];
    stack<int> st;
    for (int i = 0; i < n; ++i) {
        while (!st.empty() && a[st.top()] >= a[i]) {
            st.pop();
        }
        if (st.empty()) l[i] = 0;
        else l[i] = st.top() + 1;
        st.push(i);
    }
    while (!st.empty()) st.pop();
    for (int i = n - 1; i >= 0; --i) {
        while (!st.empty() && a[st.top()] >= a[i]) {
            st.pop();
        }
        if (st.empty()) r[i] = n - 1;
        else r[i] = st.top() - 1;
        st.push(i);
    }
    long long res = 0;
    for (int i = 0; i < n; ++i) {
        res = max(res, (long long)a[i] * (r[i] - l[i] + 1));
    }
    return res;
}

void testCase() {
    int m, n;
    cin >> m >> n;
    int a[n], b[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        b[i] = m - a[i];
    }
    cout << max(solve(a, n), solve(b, n));
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}
//Hoán vị ngược
#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> a, vs;
vector<vector<int>> res;

void Try(int i) {
    for (int j = 1; j <= n; ++j) {
        if (!vs[j]) {
            a[i] = j;
            vs[j] = 1;
            if (i == n) res.push_back(a);
            else Try(i + 1);
            vs[j] = 0;
        }
    }
}

void testCase() {
    res.clear();
    cin >> n;
    a.resize(n + 1);
    vs.resize(n + 1, 0);
    Try(1);
    for (int i = res.size() - 1; i >= 0; --i) {
        for (int j = 1; j <= n; ++j) {
            cout << res[i][j];
        }
        if (i != 0) cout << ",";
    }
}

int main() {
    int T = 1; cin >> T;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}
//kiểm tra câu viết đúng quy tắc
#include <bits/stdc++.h>
using namespace std;

void TestCase() {
    string s; getline(cin, s);
    stack<int> st;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == '(' or s[i] == '[')
            st.push(s[i]);
        else if (s[i] == ')') {
            if (!st.empty() && st.top() == '(')
                st.pop();
            else
                st.push(s[i]);
        } else if (s[i] == ']') {
            if (!st.empty() && st.top() == '[')
                st.pop();
            else
                st.push(s[i]);
        }
    }
    cout << (st.empty() ? "YES" : "NO");
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1; cin >> T; cin.ignore();
    while (T--) {
        TestCase();
        cout << "\n";
    }
    return 0;
}
//Lũy thừa ma trận 4
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n, k;
const ll MOD = 1e9 + 7;

class Matrix {
public:
    ll mt[15][15];

    Matrix operator * (Matrix B) {
        Matrix A = *this, C;
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= n; ++j) {
                C.mt[i][j] = 0;
                for (int k = 1; k <= n; ++k) {
                    C.mt[i][j] += A.mt[i][k] * B.mt[k][j];
                    C.mt[i][j] %= MOD;
                }
            }
        }
        return C;
    }
};

Matrix Pow(Matrix A, int k) {
    if (k == 1) {
        return A;
    }
    Matrix res = Pow(A, k / 2);
    res = res * res;
    if (k % 2 == 1) {
        res = res * A;
    }
    return res;
}

void testCase() {
    cin >> n >> k;
    Matrix A;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cin >> A.mt[i][j];
        }
    }
    Matrix res = Pow(A, k);
    ll sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += res.mt[1][i];
        sum %= MOD;
    }
    cout << sum;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1; cin >> T;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}
//Lũy thừa ma trận 5
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n, k;
const ll MOD = 1e9 + 7;

class Matrix {
public:
    ll mt[15][15];

    Matrix operator * (Matrix B) {
        Matrix A = *this, C;
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= n; ++j) {
                C.mt[i][j] = 0;
                for (int k = 1; k <= n; ++k) {
                    C.mt[i][j] += A.mt[i][k] * B.mt[k][j];
                    C.mt[i][j] %= MOD;
                }
            }
        }
        return C;
    }
};

Matrix Pow(Matrix A, int k) {
    if (k == 1) {
        return A;
    }
    Matrix res = Pow(A, k / 2);
    res = res * res;
    if (k % 2 == 1) {
        res = res * A;
    }
    return res;
}

void testCase() {
    cin >> n >> k;
    Matrix A;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cin >> A.mt[i][j];
        }
    }
    Matrix res = Pow(A, k);
    ll sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += res.mt[n][i];
        sum %= MOD;
    }
    cout << sum;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1; cin >> T;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}
//lũy thừa ma trận
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n, k;
const ll MOD = 1e9 + 7;

class Matrix {
public:
    ll mt[15][15];

    Matrix operator * (Matrix B) {
        Matrix A = *this, C;
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= n; ++j) {
                C.mt[i][j] = 0;
                for (int k = 1; k <= n; ++k) {
                    C.mt[i][j] += A.mt[i][k] * B.mt[k][j];
                    C.mt[i][j] %= MOD;
                }
            }
        }
        return C;
    }
};

Matrix Pow(Matrix A, int k) {
    if (k == 1) {
        return A;
    }
    Matrix res = Pow(A, k / 2);
    res = res * res;
    if (k % 2 == 1) {
        res = res * A;
    }
    return res;
}

void testCase() {
    cin >> n >> k;
    Matrix A;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cin >> A.mt[i][j];
        }
    }
    Matrix res = Pow(A, k);
    ll sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += res.mt[i][n - i + 1];
        sum %= MOD;
    }
    cout << sum;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1; cin >> T;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}
//mã số
#include <bits/stdc++.h>
using namespace std;

int n;
string s;
vector<string> nums;
vector<string> words;
bool vs[10] = {};

void TryNum(int i) {
    for (int j = 1; j <= n; ++j) {
        s[i] = j + '0';
        if (i == n - 1) {
            nums.push_back(s);
        } else {
            TryNum(i + 1);
        }
    }
}

void TryWord(int i) {
    for (int j = 1; j <= n; ++j) {
        if (!vs[j]) {
            vs[j] = true;
            s[i] = (j - 1) + 'A';
            if (i == n - 1) {
                words.push_back(s);
            } else {
                TryWord(i + 1);
            }
            vs[j] = false;
        }
    }
}

void testCase() {
    cin >> n;
    s.resize(n);
    TryNum(0);
    TryWord(0);
    for (string i : words) {
        for (string j : nums) {
            cout << i << j << endl;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}
//MIN và MAX
#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    vector<int> a(n), l(n), r(n);
    stack<int> st;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < n; ++i) {
        while (!st.empty() && a[st.top()] >= a[i]) {
            st.pop();
        }
        if (st.empty())
            l[i] = 0;
        else
            l[i] = st.top() + 1;
        st.push(i);
    }
    while (!st.empty()) {
        st.pop();
    }
    for (int i = n - 1; i >= 0; --i) {
        while (!st.empty() && a[st.top()] >= a[i]) {
            st.pop();
        }
        if (st.empty())
            r[i] = n - 1;
        else 
            r[i] = st.top() - 1;
        st.push(i);
    }
    long long res = 0;
    for (int i = 0; i < n; ++i) {
        res = max(res, (long long)a[i] * (r[i] - l[i] + 1));
    }
    cout << res << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}
//người du lịch
#include <bits/stdc++.h>
using namespace std;

int n, minKc, ans;
int a[20][20], vs[20];
vector<int> way, path;

void Try(int ind, int cou, int val) {
    if (val + minKc * (n - cou + 1) >= ans)
        return;
    if (cou == n) {
        val += a[ind][1];
        if (val < ans) {
            ans = val;
            path = way;
        }
        return;
    }
    for (int i = 2; i <= n; ++i) {
        if (vs[i] == 0) {
            vs[i] = 1;
            way[cou] = i;
            Try(i, cou + 1, val + a[ind][i]);
            vs[i] = 0;
        }
    }
}

void testCase() {
    cin >> n;
    way.resize(n);
    path.resize(n);
    minKc = ans = INT_MAX;

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cin >> a[i][j];
            if (a[i][j] != 0) {
                minKc = min(minKc, a[i][j]);
            }
        }
    }

    vs[1] = 1;
    way[0] = 1;
    Try(1, 1, 0);

    cout << "(";
    for (int i = 0; i < path.size(); ++i) {
        cout << path[i] << ",";
    }
    cout << "1)\n" << ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}
//Phần tử lớn nhất trong dãy con
#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int &i : a) cin >> i;
    deque<int> dq;
    for (int i = 0; i < n; ++i) {
        if (!dq.empty() && i - dq.front() == k) {
            dq.pop_front();
        }
        while (!dq.empty() && a[dq.back()] <= a[i]) {
            dq.pop_back();
        }
        dq.push_back(i);
        if (i + 1 >= k) {
            cout << a[dq.front()] << " ";
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1; cin >> T;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}
//quân vua trên bàn cờ
#include <bits/stdc++.h>
using namespace std;

void testCase() {
    pair<int, int> s, t;
    cin >> s.first >> s.second >> t.first >> t.second;
    int x = abs(s.first - t.first);
    int y = abs(s.second - t.second);
    cout << min(x, y) + abs(x - y);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}
//sắp xếp chẵn lẻ
#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    vector<int> even, odd, dd(n, 0);
    for (int i = 0; i < n; ++i) {
        int x; cin >> x;
        (x % 2 == 0) ? even.push_back(x) : odd.push_back(x);
        dd[i] = x % 2;
    }
    sort(even.begin(), even.end());
    sort(odd.rbegin(), odd.rend());
    int i = 0, j = 0;
    for (int k = 0; k < n; ++k) {
        cout << (dd[k] ? odd[j++] : even[i++]) << " ";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}

//sắp xếp quân hậu
#include <bits/stdc++.h>
using namespace std;

int a[10][10];
int vs[10] = {}, cc[20] = {}, cp[20] = {};
int res = 0, t = 1;

void Try(int i, int val) {
    for (int j = 1; j <= 8; ++j) {
        if (!vs[j] && !cc[i + j - 1] && !cp[i - j + 8]) {
            vs[j] = cc[i + j - 1] = cp[i - j + 8] = true;
            if (i == 8) {
                res = max(res, val + a[i][j]);
            } else {
                Try(i + 1, val + a[i][j]);
            }
            vs[j] = cc[i + j - 1] = cp[i - j + 8] = false;
        }
    }
}

void testCase() {
    res = 0;
    for (int i = 1; i <= 8; ++i) {
        for (int j = 1; j <= 8; ++j) {
            cin >> a[i][j];
        }
    }
    Try(1, 0);
    cout << "Test " << t << ": " << res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1; cin >> T;
    while (T--) {
        testCase();
        cout << "\n";
        t++;
    }
    return 0;
}
//số 2 ưu thế
#include <bits/stdc++.h>
using namespace std;

class Data {
public:
    string str;
    int cou;

    Data(string s, int c) {
        str = s;
        cou = c;
    }
};

void testCase() {
    int n; cin >> n;
    queue<Data> q;
    vector<string> res;
    q.push(Data("", 0));
    while (res.size() != n) {
        string str = q.front().str;
        int cou = q.front().cou;
        q.pop();

        if (str[0] == '0') {
            continue;
        }
        if (cou * 2 > str.length()) {
            res.push_back(str);
        }

        q.push(Data(str + '0', cou));
        q.push(Data(str + '1', cou));
        q.push(Data(str + '2', cou + 1));
    }
    for (int i = 0; i < n; ++i) {
        cout << res[i] << " ";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1; cin >> T;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}

//số bước di chuyển ít nhất
#include <bits/stdc++.h>
#define II pair<int, int>
using namespace std;

int a[1005][1005];
int res[1005][1005];

void TestCase() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> a[i][j];
            res[i][j] = INT_MAX;
        }
    }
    queue<II> q;
    q.push({0, 0});
    res[0][0] = 0;
    while (!q.empty()) {
        int r = q.front().first;
        int c = q.front().second;
        q.pop();
        if (r == n - 1 and c == m - 1) {
            cout << res[r][c];
            return;
        }
        int i, j;
        if (r + 1 < n) {
            i = r + abs(a[r][c] - a[r + 1][c]), j = c;
            if (i < n and res[i][j] == INT_MAX) {
                res[i][j] = res[r][c] + 1;
                q.push({i, j});
            }
        }
        if (c + 1 < m) {
            i = r, j = c + abs(a[r][c] - a[r][c + 1]);
            if (j < m and res[i][j] == INT_MAX) {
                res[i][j] = res[r][c] + 1;
                q.push({i, j});
            }
        }
        if (r + 1 < n and c + 1 < m) {
            i = r + abs(a[r][c] - a[r + 1][c + 1]);
            j = c + abs(a[r][c] - a[r + 1][c + 1]);
            if (i < n and j < m and res[i][j] == INT_MAX) {
                res[i][j] =  res[r][c] + 1;
                q.push({i, j});
            }
        }
    }
    cout << -1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1; cin >> T;
    while (T--) {
        TestCase();
        cout << "\n";
    }
    return 0;
}
//số cặp bạn tốt
#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n, k;
    cin >> n >> k;
    vector<string> s(300001);
    vector<vector<int>> f(300001, vector<int>(31, 0));
    for (int i = 1; i <= n; ++i) {
        cin >> s[i];
        f[i] = f[i - 1];
        f[i][s[i].length()]++;
    }
    long long ans = 0;
    for (int i = 1; i <= n; ++i) {
        ans += f[i - 1][s[i].size()] - f[max(i - k - 1, 0)][s[i].size()];
    }
    cout << ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}
//số lộc phát đối xứng chẵn
#include <bits/stdc++.h>
using namespace std;

string solve(string s) {
    string t(s.rbegin(), s.rend());
    return s + t;
}

void TestCase() {
    int n; cin >> n;
    queue<string> q;
    q.push("");

    while (!q.empty() && n > 0) {
        string t = q.front(); q.pop();
        if (t != "") {
            cout << solve(t) << " ";
            n--;
        }
        q.push(t + '6');
        q.push(t + '8');
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1; cin >> T;
    while (T--) {
        TestCase();
        cout << "\n";
    }
    return 0;
}
//số lộc phát
#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    vector<string> v;
    queue<string> q;
    q.push("");
    while (!q.empty()) {
        string s = q.front();
        q.pop();
        if (s.length() == n) v.push_back(s);

        if (s.length() == n) continue;
        q.push(s + "6");
        q.push(s + "8");
    }
    cout << v.size() << endl;
    for (string i : v) cout << i << " ";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1; cin >> T;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}
//số lượng giấu ngoặc vuông lớn nhất
#include <bits/stdc++.h>
using namespace std;

void TestCase() {
    string s; cin >> s;
    stack<int> st;
    st.push(-1);
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == ')' and !st.empty() and s[st.top()] == '(')
            st.pop();
        else if (s[i] == ']' and !st.empty() and s[st.top()] == '[')
            st.pop();
        else
            st.push(i);
    }
    st.push(s.length());
    
    vector<int> v;
    while (!st.empty()) {
        v.push_back(st.top());
        st.pop();
    }
    reverse(v.begin(), v.end());
    // for (int i : v) cout << i << " ";

    int res = 0;
    for (int i = 1; i < v.size(); ++i) {
        int count = 0;
        for (int j = v[i - 1] + 1; j < v[i]; ++j) {
            if (s[j] == '[')
                count++;
        }
        res = max(res, count);
    }
    cout << res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1;
    while (T--) {
        TestCase();
        cout << "\n";
    }
    return 0;
}
//số may mắn tiếp theo
#include <bits/stdc++.h>
using namespace std;

void testCase() {
    long long a, b;
    cin >> a >> b;
    vector<long long> v;

    queue<string> q;
    q.push("");
    while (true) {
        string s = q.front(); q.pop();
        if (s != "") {
            v.push_back(stoll(s));
            if (s.length() == 9) break;
        }
        q.push(s + '4');
        q.push(s + '7');
    }
    while (!q.empty()) {
        v.push_back(stoll(q.front()));
        q.pop();
    }

    int index = lower_bound(v.begin(), v.end(), a) - v.begin();
    long long res = 0;
    while (a <= b) {
        long long n = min(v[index], b) - a + 1;
        a = v[index] + 1;
        res += n * v[index];
        index++;
    }
    cout << res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}
//số nguyên thủy
#include <bits/stdc++.h>
using namespace std;

string solve(string s) {
    string t = s;
    reverse(t.begin(), t.end());
    return s + t;
}

void testCase() {
    int n; cin >> n;
    queue<string> q;
    q.push("");
    while (!q.empty()) {
        string s = q.front();
        q.pop();
        if (s != "") {
            cout << solve(s) << " ";
            n--;
            if (n == 0) break;
        }
        q.push(s + "4");
        q.push(s + "5");
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1; cin >> T;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}
//số thuận nghịch
#include <bits/stdc++.h>
using namespace std;

long long f[1001][1001];

void testCase() {
    string s; cin >> s;
    int n = s.length();
    for (int i = 0; i < n; ++i) {
        f[i][i] = 1;
    }
    int res = 1;
    for (int k = 1; k <= n; ++k) {
        for (int i = 0; i < n - k; ++i) {
            int j = i + k;
            if (s[i] == s[j] && k == 1) {
                f[i][j] = 1;
            } else if (s[i] == s[j] && k > 1) {
                f[i][j] = f[i + 1][j - 1];
            } else {
                f[i][j] = 0;
            }
            if (f[i][j]) {
                res = max(res, j - i + 1);
            }
        }
    }
    cout << res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1; cin >> T;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}

// tách nhóm tối ưu
#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n, k; 
    cin >> n >> k;
    vector<int> a(n);
    for (int &i : a) cin >> i;
    sort(a.begin(), a.end());
    int cnt = 1;
    for (int i = 1; i < n; ++i) {
        if (a[i] > a[i - 1] + k) {
            cnt++;
        }
    }
    cout << cnt;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}
//Tăng giảm
#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    vector<float> a(n), b(n), f(n, 1);
    for (int i = 0; i < n; ++i) {
        cin >> a[i] >> b[i];
    }
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < i; ++j) {
            if (a[i] > a[j] && b[i] < b[j]) {
                f[i] = max(f[i], f[j] + 1);
            }
        }
    }
    cout << *max_element(f.begin(), f.end());
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1; cin >> T;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}
//Tích chữ số
#include <bits/stdc++.h>
using namespace std;

void testCase() {
    long long p; cin >> p;
    if (p == 1) {
        cout << 1;
        return;
    }
    int d[10] = {};
    for (int i = 9; i >= 2; --i) {
        while (p % i == 0) {
            p /= i;
            d[i]++;
        }
    }
    if (p != 1) {
        cout << -1;
        return;
    }

    for (int i = 2; i <= 9; ++i) {
        for (int j = 1; j <= d[i]; ++j) {
            cout << i;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1; cin >> T;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}
//tổ hợp ngược
#include <bits/stdc++.h>
using namespace std;

int n, k;
vector<int> a;
vector<vector<int>> b;

void Try(int i) {
    for (int j = a[i - 1] + 1; j <= n - k + i; ++j) {
        a[i] = j;
        if (i == k) b.push_back(a);
        else Try(i + 1);
    }
}

void testCase() {
    cin >> n >> k;
    a.assign(k + 1, 0);
    b.clear();
    Try(1);
    for (int i = b.size() - 1; i >= 0; --i) {
        for (int j = 1; j < b[i].size(); ++j) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1; cin >> T;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}
// tổng các số tự nhiên
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> res;

void Try(int remain, int limit, vector<int> v) {
    if (remain == 0) {
        res.push_back(v);
        return;
    }
    for (int i = limit; i >= 1; --i) {
        if (remain >= i) {
            v.push_back(i);
            Try(remain - i, i, v);
            v.pop_back();
        }
    }
}

void testCase() {
    int n; cin >> n;
    Try(n, n, {});
    cout << res.size() << endl;
    for (auto v : res) {
        cout << "(";
        for (int i = 0; i < v.size() - 1; ++i) {
            cout << v[i] << " ";
        }
        cout << v.back() << ") ";
    }
    res.clear();
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1; cin >> T;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}
//tổng chữ số
#include <bits/stdc++.h>
using namespace std;

int sumDigit(long long n) {
    int sum = 0;
    while (n) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

void TestCase() {
    long long n, k, x = 1;
    cin >> n >> k;
    long long m = n;
    while (sumDigit(n) > k) {
        x *= 10;
        if (n % x != 0) {
            n = n - n % x + x;
        }
    }
    cout << n - m;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1; cin >> T;
    while (T--) {
        TestCase();
        cout << endl;
    }
    return 0;
}
//tổng số cách di chuyển
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int MOD = 1e9 + 7;

void testCase() {
    int n, k;
    cin >> n >> k;
    vector<ll> f(1e5 + 1, 0);
    ll tmp = 0;
    for (int i = 1; i <= k; ++i) {
        f[i] = (tmp + 1) % MOD;
        tmp = (tmp + f[i]) % MOD;
    }
    for (int i = k + 1; i <= n; ++i) {
        for (int j = 1; j <= k; ++j) {
            f[i] += f[i - j];
            f[i] %= MOD;
        }
    }
    cout << f[n];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1; cin >> T;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}
//tổng ước số
#include <bits/stdc++.h>
using namespace std;

int a, b;
vector<int> f;

void sieve() {
    for (int i = 1; i <= b; ++i) {
        for (int j = i; j <= b; j += i) {
            f[j] += i;
        }
    }
}

void testCase() {
    cin >> a >> b;
    f.resize(b + 1);
    sieve();
    int cou = 0;
    for (int i = a; i <= b; ++i) {
        cou += (f[i] - i > i);
    }
    cout << cou;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}
//Trò chơi caro ngang
#include <bits/stdc++.h>
using namespace std;

int n;
char c;
string s;
vector<string> res;

void solve() {
    int maxX = 0, maxO = 0;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == 'X') {
            int len = 1;
            while (i + 1 < s.length() && s[i + 1] == 'X') {
                len++;
                i++;
            }
            maxX = max(maxX, len);
        }
        else if (s[i] == 'O') {
            int len = 1;
            while (i + 1 < s.length() && s[i + 1] == 'O') {
                len++;
                i++;
            }
            maxO = max(maxO, len);
        }
    }
    if ((c == 'X' && maxX >= 5 && maxX > maxO) || (c == 'O' && maxO >= 5 && maxO > maxX))
        res.push_back(s);
}

void Try(int i) {
    for (int j = 0; j <= 1; ++j) {
        if (j == 0) s[i] = 'O';
        else s[i] = 'X';

        if (i == n - 1) solve();
        else Try(i + 1);
    }
}

void testCase() {
    cin >> n >> c;
    res.clear();
    s.resize(n);
    Try(0);
    for (string i : res) {
        cout << i << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1; cin >> T;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}
//Xâu AB
#include <bits/stdc++.h>
using namespace std;

int n;
string s;
vector<string> res;

void Try(int i) {
    if (i == n) {
        res.push_back(s);
        return;
    }
    for (int j = 0; j <= 1; ++j) {
        s[i] = j + 'A';
        Try(i + 1);
    }
}

void testCase() {
    cin >> n;
    s.resize(n);
    res.clear();
    Try(0);
    for (int i = 0; i < res.size(); ++i) {
        cout << res[i];
        if (i != res.size() - 1) {
            cout << ",";
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1; cin >> T;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}
//Xâu con nhỏ nhất
#include <bits/stdc++.h>
using namespace std;

void testCase() {
    string s; cin >> s;
    int sl = 0, dd[256] = {};
    for (int i = 0; i < s.length(); ++i) {
        dd[s[i]]++;
        if (dd[s[i]] == 1) {
            sl++;
        }
    }
    memset(dd, 0, sizeof(dd));
    int cnt = 0, index = 0, res = s.length();
    for (int i = 0; i < s.length(); ++i) {
        dd[s[i]]++;
        if (dd[s[i]] == 1) {
            cnt++;
        }
        if (cnt == sl) {
            while (dd[s[index]] > 1) {
                dd[s[index]]--;
                index++;
            }
            res = min(res, i - index + 1);
        }
    }
    cout << res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1; cin >> T;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}

// Xâu nhị phân đối xứng
#include <bits/stdc++.h>
using namespace std;

string solve(string s) {
    string t(s.rbegin(), s.rend());
    return s + t;
}

void testCase() {
    int n; cin >> n;
    queue<string> q;
    q.push("");
    vector<string> res;
    while (!q.empty()) {
        string t = q.front(); q.pop();
        if (t.length() * 2 > n) break;
        if (t != "") {
            res.push_back(solve(t));
        }
        q.push(t + '0');
        q.push(t + '1');
    }
    for (string s : res) cout << s << " ";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1; cin >> T;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}