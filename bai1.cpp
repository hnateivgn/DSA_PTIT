//S?p x?p-Tìm ki?m
// https://code.ptit.edu.vn/student/question/CTDL_005
// XÓA D? LI?U TRONG DSLK ÐON

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int x; cin >> x;
    for (int i = 0; i < n; ++i) {
        if (a[i] != x) cout << a[i] << " ";
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

// https://code.ptit.edu.vn/student/question/CTDL_006
// L?C D? LI?U TRÙNG TRONG DSLK ÐON

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    map<int, bool> mp;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < n; ++i) {
        if (mp[a[i]] == 0) {
            cout << a[i] << " ";
            mp[a[i]] = 1;
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

// https://code.ptit.edu.vn/student/question/DSA06001
// S?P X?P XEN K?

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    vector<int> a(n);
    for (int &i : a) {
        cin >> i;
    }
    sort(a.rbegin(), a.rend());
    for (int i = 0; i < n / 2; ++i) {
        cout << a[i] << " " << a[n - i - 1] << " ";
    }
    if (n % 2 != 0) cout << a[n / 2];
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

// https://code.ptit.edu.vn/student/question/DSA06002
// S?P X?P THEO GIÁ TR? TUY?T Ð?I

#include <bits/stdc++.h>
using namespace std;

int n, x;
vector<pair<int, int>> a;

bool cmp(pair<int, int> a, pair<int, int> b) {
    if (abs(x - a.first) == abs(x - b.first))
        return a.second < b.second;
    return abs(x - a.first) < abs(x - b.first);
}

void testCase() {
    cin >> n >> x;
    a.resize(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i].first;
        a[i].second = i;
    }
    sort(a.begin(), a.end(), cmp);
    for (auto i : a) cout << i.first << " ";
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

//todo N?u |X - a[i]| b?ng nhau thì s?p x?p theo th? t? xu?t hi?n

// https://code.ptit.edu.vn/student/question/DSA06003
// Ð?I CH? ÍT NH?T

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    vector<int> a(n);
    for (int &i : a) cin >> i;

    int ans = 0;
    for (int i = 0; i < n; ++i) {
        int k = i;
        for (int j = i + 1; j < n; ++j) {
            if (a[j] < a[k]) k = j;
        }
        if (k != i) {
            ans++;
            swap(a[i], a[k]);
        }
    }
    cout << ans;
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

// https://code.ptit.edu.vn/student/question/DSA06004
// H?P VÀ GIAO C?A HAI DÃY S? 1

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n, m, x;
    cin >> n >> m;

    set<int> a, b;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        a.insert(x);
    }
    for (int i = 0; i < m; ++i) {
        cin >> x;
        b.insert(x);
    }

    map<int, int> mp;
    for (int i : a) mp[i]++;
    for (int i : b) mp[i]++;

    for (auto i : mp) {
        cout << i.first << " ";
    }
    cout << endl;
    for (auto i : mp) {
        if (i.second >= 2)
            cout << i.first << " ";
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

// https://code.ptit.edu.vn/student/question/DSA06005
// H?P VÀ GIAO C?A HAI DÃY S? 2

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n, m, x;
    cin >> n >> m;

    map<int, int> mp;
    for (int i  = 0; i < n; ++i) {
        cin >> x;
        mp[x]++;
    }
    for (int i  = 0; i < m; ++i) {
        cin >> x;
        mp[x]++;
    }

    for (auto i : mp) {
        cout << i.first << " ";
    }
    cout << endl;
    for (auto i : mp) {
        if (i.second >= 2)
            cout << i.first << " ";
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
// https://code.ptit.edu.vn/student/question/DSA06006
// S?P X?P [0 1 2]

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    vector<int> a(n);
    for (int &i : a) cin >> i;
    sort(a.begin(), a.end());
    for (int i : a) cout << i << " ";
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
// https://code.ptit.edu.vn/student/question/DSA06007
// S?P X?P DÃY CON LIÊN T?C

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    vector<int> a(n);
    for (int &i : a) cin >> i;
    vector<int> b = a;
    sort(a.begin(), a.end());
    int i = 0, j = n - 1;
    while (a[i] == b[i]) i++;
    while (a[j] == b[j] && j > i) j--;
    cout << i + 1 << " " << j + 1;
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
// https://code.ptit.edu.vn/student/question/DSA06008
// Ð?M C?P

#include <bits/stdc++.h>
using namespace std;

int count(int x, int y[], int n, int a[]) {
	if (x == 0)
		return 0;
	if (x == 1)
		return a[0];
	int it = upper_bound(y, y + n, x) - y;
	int ans = n - it;
	ans += (a[0] + a[1]);
	if (x == 2)
		ans -= (a[3] + a[4]);
	if (x == 3)
		ans += a[2];
	return ans;
}

void testCase() {
    int n, m;
    cin >> n >> m;
    int x[n], y[m], a[5] = {}, ans = 0;
    for (int i = 0; i < n; i++)
			cin >> x[i];
    for (int i = 0; i < m; i++)
        cin >> y[i];
    for (int i = 0; i < n; i++) {
        if (y[i] < 5)
            a[y[i]]++;
    }
    sort(y, y + n);
    for (int i = 0; i < m; i++) {
        ans += count(x[i], y, n, a);
    }
    cout << ans << endl;
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
// https://code.ptit.edu.vn/student/question/DSA06009
// C?P S? T?NG B?NG K

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n, k, ans = 0;
    cin >> n >> k;
    vector<int> a(n);
    for (int &i : a) cin >> i;
    sort(a.begin(), a.end());
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (a[i] + a[j] == k)
                ans++;
        }
    }
    cout << ans;
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
// https://code.ptit.edu.vn/student/question/DSA06010
// S?P X?P CH? S?

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    bool dd[10] = {false};
    for (int i = 0; i < n; ++i) {
        long long x; cin >> x;
        while (x) {
            dd[x % 10] = true;
            x /= 10;
        }
    }
    for (int i = 0; i < 10; ++i) {
        if (dd[i]) cout << i << " ";
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
// https://code.ptit.edu.vn/student/question/DSA06011
// T?NG G?N 0 NH?T

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    int ans = 2e6;
    vector<int> a(n);
    for (int &i : a) cin >> i;
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            int sum = a[i] + a[j];
            if (abs(sum) < abs(ans)) ans = sum;
        }
    }
    cout << ans;
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
// https://code.ptit.edu.vn/student/question/DSA06012
// PH?N T? L?N NH?T

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int &i : a) cin >> i;
    sort(a.rbegin(), a.rend());
    a.resize(k);
    for (int i : a) cout << i << " ";
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
// https://code.ptit.edu.vn/student/question/DSA06013
// S? L?N XU?T HI?N

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n, x;
    cin >> n >> x;
    vector<int> dd(1e6 + 1, 0);
    for (int i = 0; i < n; ++i) {
        int num; cin >> num;
        dd[num]++;
    }
    if (dd[x]) cout << dd[x];
    else cout << -1;
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
// https://code.ptit.edu.vn/student/question/DSA06014
// T?NG C?P S? NGUYÊN T?

#include <bits/stdc++.h>
using namespace std;

vector<bool> e(1e6 + 1, true);
void eratosthenes() {
    e[0] = e[1] = false;
    for (int i = 2; i <= 1e3; ++i) {
        if (e[i]) {
            for (int j = i * i; j <= 1e6; j += i) {
                e[j] = false;
            }
        }
    }
}

void testCase() {
    int n; cin >> n;
    for (int i = 2; i <= n / 2; ++i) {
        if (e[i] && e[n - i]) {
            cout << i << " " << n - i;
            return;
        }
    }
    cout << -1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    eratosthenes();
    int T = 1; cin >> T;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}
// https://code.ptit.edu.vn/student/question/DSA06015
// MERGE SORT

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    vector<int> a(n);
    for (int &i : a) cin >> i;
    sort(a.begin(), a.end());
    for (int i : a) cout << i << " ";
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
// https://code.ptit.edu.vn/student/question/DSA06016
// TÍCH L?N NH?T - NH? NH?T

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int &i : a) cin >> i;
    for (int &i : b) cin >> i;
    cout << (long long) *max_element(a.begin(), a.end()) * *min_element(b.begin(), b.end());
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
// https://code.ptit.edu.vn/student/question/DSA06017
// TR?N HAI DÃY

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n + m);
    for (int i = 0; i < n + m; ++i) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    for (int i : a) cout << i << " ";
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
// https://code.ptit.edu.vn/student/question/DSA06018
// B? SUNG PH?N T?

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n, x; cin >> n;
    set<int> s;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        s.insert(x);
    }
    vector<int> v(s.begin(), s.end());
    cout << (v.back() -v.front() + 1) - v.size();
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
// https://code.ptit.edu.vn/student/question/DSA06019
// S?P X?P THEO S? L?N XU?T HI?N

#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b) {
    if (a.second == b.second)
        return a.first < b.first;
    return a.second > b.second;
}

void testCase() {
    int n; cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; ++i) {
        int x; cin >> x;
        mp[x]++;
    }
    vector<pair<int, int>> a(mp.begin(), mp.end());
    sort(a.begin(), a.end(), cmp);
    for (auto i : a) {
        for (int j = 1; j <= i.second; ++j) {
            cout << i.first << " ";
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
// https://code.ptit.edu.vn/student/question/DSA06020
// TÌM KI?M

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n, x;
    cin >> n >> x;
    vector<bool> dd(1e6 + 1, false);
    for (int i = 0; i < n; ++i) {
        int num; cin >> num;
        dd[num] = true;
    }
    if (dd[x]) cout << 1;
    else cout << -1;
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
// https://code.ptit.edu.vn/student/question/DSA06021
// TÌM KI?M TRONG DÃY S?P X?P VÒNG

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n, x, ans;
    cin >> n >> x;
    for (int i = 1; i <= n; ++i) {
        int num; cin >> num;
        if (num == x) ans = i;
    }
    cout << ans;
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
// https://code.ptit.edu.vn/student/question/DSA06022
// S? NH? NH?T VÀ NH? TH? HAI

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    set<int> s;
    for (int i = 0; i < n; ++i) {
        int x; cin >> x;
        s.insert(x);
    }
    vector<int> v(s.begin(), s.end());
    if (v.size() == 1) cout << -1;
    else cout << v[0] << " " << v[1];
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
// https://code.ptit.edu.vn/student/question/DSA06023
// S?P X?P Ð?I CH? TR?C TI?P

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    vector<int> a(n);
    for (int &i : a) cin >> i;

    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (a[j] < a[i])
                swap(a[i], a[j]);
        }
        
        cout << "Buoc " + to_string(i + 1) + ": ";
        for (int j = 0; j < n; ++j) {
            cout << a[j] << " ";
        }
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
// https://code.ptit.edu.vn/student/question/DSA06024
// S?P X?P CH?N

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    vector<int> a(n);
    for (int &i : a) cin >> i;
    
    // Selection sort
    for (int i = 0; i < n - 1; ++i) {
        int index = i;
        for (int j = i + 1; j < n; ++j) {
            if (a[j] < a[index]) 
                index = j;
        }
        swap(a[i], a[index]);
        
        cout << "Buoc " + to_string(i + 1) + ": ";
        for (int j = 0; j < n; ++j) {
            cout << a[j] << " ";
        }
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
// https://code.ptit.edu.vn/student/question/DSA06025
// S?P X?P CHÈN

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    vector<int> a(n);
    for (int &i : a) cin >> i;

    for (int i = 0; i < n; ++i) {
        int j = i;
        while (j > 0 && a[j] < a[j - 1]) {
            swap(a[j], a[j - 1]);
            j--;
        }

        cout << "Buoc " + to_string(i) + ": ";
        for (int j = 0; j <= i; ++j) {
            cout << a[j] << " ";
        }
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

// https://code.ptit.edu.vn/student/question/DSA06026
// S?P X?P N?I B?T

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    vector<int> a(n);
    for (int &i : a) cin >> i;

    // bubble sort
    for (int i = 1; i < n; ++i) {
        bool is_sorted = true;
        for (int j = 0; j < n - i; ++j) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
                is_sorted = false;
            }
        }
        if (is_sorted) break;
        
        cout << "Buoc " + to_string(i) + ": ";
        for (int j = 0; j < n; ++j) {
            cout << a[j] << " ";
        }
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
// https://code.ptit.edu.vn/student/question/DSA06027
// S?P X?P Ð?I CH? TR?C TI?P - LI?T KÊ NGU?C

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    vector<int> a(n);
    vector<vector<int>> b;
    for (int &i : a) cin >> i;

    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (a[j] < a[i])
                swap(a[i], a[j]);
        }
        b.push_back(a);
    }

    for (int i = b.size() - 1; i >= 0; --i) {
        cout << "Buoc " + to_string(i + 1) + ": ";
        for (int j = 0; j < n; ++j) {
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
// https://code.ptit.edu.vn/student/question/DSA06028
// S?P X?P CH?N - LI?T KÊ NGU?C

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    vector<int> a(n);
    vector<vector<int>> b;
    for (int &i : a) cin >> i;
    
    // Selection sort
    for (int i = 0; i < n - 1; ++i) {
        int index = i;
        for (int j = i + 1; j < n; ++j) {
            if (a[j] < a[index]) 
                index = j;
        }
        swap(a[i], a[index]);
        b.push_back(a);
    }

    for (int i = b.size() - 1; i >= 0; --i) {
        cout << "Buoc " + to_string(i + 1) + ": ";
        for (int j = 0; j < n; ++j) {
            cout << b[i][j] << " ";
        }
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
// https://code.ptit.edu.vn/student/question/DSA06029
// S?P X?P CHÈN - LI?T KÊ NGU?C

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    vector<int> a(n);
    vector<vector<int>> b;
    for (int &i : a) cin >> i;

    for (int i = 0; i < n; ++i) {
        int j = i;
        while (j > 0 && a[j] < a[j - 1]) {
            swap(a[j], a[j - 1]);
            j--;
        }
        vector<int> temp(a.begin(), a.begin() + i + 1);
        b.push_back(temp);
    }

    for (int i = b.size() - 1; i >= 0; --i) {
        cout << "Buoc " + to_string(i) + ": ";
        for (int j = 0; j < b[i].size(); ++j) {
            cout << b[i][j] << " ";
        }
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
// https://code.ptit.edu.vn/student/question/DSA06030
// S?P X?P N?I B?T - LI?T KÊ NGU?C

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    vector<int> a(n);
    vector<vector<int>> b;
    for (int &i : a) cin >> i;

    // bubble sort
    for (int i = 1; i < n; ++i) {
        bool is_sorted = true;
        for (int j = 0; j < n - i; ++j) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
                is_sorted = false;
            }
        }
        if (is_sorted) break;
        b.push_back(a);
    }

    for (int i = b.size() - 1; i >= 0; --i) {
        cout << "Buoc " + to_string(i + 1) + ": ";
        for (int j = 0; j < n; ++j) {
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
// https://code.ptit.edu.vn/student/question/DSA06031
// PH?N T? L?N NH?T TRONG DÃY CON

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int &i : a) cin >> i;
    deque<int> dq;
    for (int i = 0; i < n; ++i) {
        if (dq.front() == i - k) dq.pop_front();
        while (!dq.empty() && a[dq.back()] <= a[i])
            dq.pop_back();
        dq.push_back(i);
        if (i + 1 >= k) cout << a[dq.front()] << " ";
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
// https://code.ptit.edu.vn/student/question/DSA06032
// B? BA S? CÓ T?NG NH? HON K

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n, k;
    cin >> n >> k;
    long long a[5000], ans = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a, a + n);
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            long long x = k - a[i] - a[j];
            ans += lower_bound(a + j + 1, a + n, x) - (a + j + 1);
        }
    }
    cout << ans;
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
// https://code.ptit.edu.vn/student/question/DSA06033
// KHO?NG CÁCH XA NH?T

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    // @.@
    int n; cin >> n;
    pair<int, int> a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i].first;
        a[i].second = i;
    }
    sort(a, a + n);
    int ans = -1, Min = a[0].second, k = a[0].first;
    for (int i = 1; i < n; i++) {
        if (a[i].first > k)
            ans = max(ans, a[i].second - Min);
        if (Min > a[i].second) {
            Min = a[i].second;
            k = a[i].first;
        }
    }
    cout << ans;
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
// https://code.ptit.edu.vn/student/question/DSA06034
// C?P S? CÓ T?NG B?NG K

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    long long ans = 0; // note
    for (int i = 0; i < n; ++i) {
        ans += upper_bound(a.begin() + i + 1, a.end(), k - a[i]) - lower_bound(a.begin() + i + 1, a.end(), k - a[i]);
    }
    cout << ans;
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
// https://code.ptit.edu.vn/student/question/DSA06035
// DÃY TAM GIÁC DÀI NH?T

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    int a[100005], l[100005] = {}, r[100005] = {};
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }
    for (int i = 1; i <= n; ++i) {
        if (a[i] > a[i - 1])
            l[i] = l[i - 1] + 1;
        else
            l[i] = 1;
    }
    for (int i = n; i >= 1; --i) {
        if (a[i] > a[i + 1])
            r[i] = r[i + 1] + 1;
        else
            r[i] = 1;
    }
    int maxx = 0;
    for (int i = 1; i <= n; ++i) {
        maxx = max(maxx, l[i] + r[i] - 1);
    }
    cout << maxx;
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
// https://code.ptit.edu.vn/student/question/DSA06036
// B? BA S? B?NG K

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int &i : a) cin >> i;
    sort(a.begin(), a.end());
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (binary_search(a.begin() + j + 1, a.end(), k - a[i] - a[j])) {
                cout << "YES";
                return;
            }
        }
    }
    cout << "NO";
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
// https://code.ptit.edu.vn/student/question/DSA06039
// S? Ð?U TIÊN B? L?P

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    pair<int, int> ans(-1, 1e6); // value | index

    map<int, int> mp;
    for (int i = 1; i <= n; ++i) {
        int x; cin >> x;
        if (mp.find(x) != mp.end()) {
            if (mp[x] < ans.second) {
                ans = {x, mp[x]};
            }
        }
        else mp[x] = i;
    }
    if (ans.second == 1e6) cout << "NO";
    else cout << ans.first;
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
// https://code.ptit.edu.vn/student/question/DSA06040
// GIAO C?A BA DÃY S?

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<long long> a(n), b(m), c(k);
    for (auto &i : a) cin >> i;
    for (auto &i : b) cin >> i;
    for (auto &i : c) cin >> i;

    vector<long long> res;
    int i = 0, j = 0, z = 0;
    while (i < n && j < m && z < k) {
        if (a[i] == b[j] && a[i] == c[z]) {
            res.push_back(a[i]);
            i++, j++, z++;
        }
        else if (a[i] < b[j]) i++;
        else if (b[j] < c[z]) j++;
        else z++;
    }
    
    if (res.empty()) cout << -1;
    else {
        for (auto i : res) {
            cout << i << " ";
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
// https://code.ptit.edu.vn/student/question/DSA06041
// S? XU?T HI?N NHI?U NH?T

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    map<int, int> m;
    for (int i = 1; i <= n; ++i) {
        int x; cin >> x;
        m[x]++;
    }

    for (auto i : m) {
        if (i.second > n / 2) {
            cout << i.first;
            return;
        }
    }
    cout << "NO";
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
// https://code.ptit.edu.vn/student/question/DSA06043
// ÐI?M CÂN B?NG

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    vector<int> a(n + 1, 0);
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
        a[i] += a[i - 1];
    }

    for (int i = 1; i <= n; ++i) {
        int sum_left = a[i - 1];
        int sum_right = a[n] - a[i];
        if (sum_left == sum_right) {
            cout << i;
            return;
        }
    }
    cout << -1;
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
// https://code.ptit.edu.vn/student/question/DSA06044
// S?P X?P CH?N L?

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    vector<int> a;
    vector<int> b;
    for (int i = 1; i <= n; ++i) {
        int x; cin >> x;
        if (i % 2 == 1) a.push_back(x);
        else b.push_back(x);
    }
    sort(a.begin(), a.end());
    sort(b.rbegin(), b.rend());
    for (int i = 0; i < b.size(); ++i) {
        cout << a[i] << " " << b[i] << " ";
    }
    if (n % 2 == 1) cout << a.back();
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
// https://code.ptit.edu.vn/student/question/DSA06046
// CHÊNH L?CH NH? NH?T

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    vector<int> a(n);
    for (int &i : a) cin >> i;

    sort(a.begin(), a.end());
    int ans = 1e9;
    for (int i = 1; i < n; ++i) {
        ans = min(ans, a[i] - a[i - 1]);
    }
    cout << ans;
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
// https://code.ptit.edu.vn/student/question/DSA06048
// S? L?N QUAY VÒNG

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    vector<long long> a(n);
    for (auto &i : a) cin >> i;

    int ans = 0;
    for (int i = 1; i < n; ++i) {
        if (a[i] < a[i - 1]) {
            ans = i;
            break;
        }
    }
    cout << ans;
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
// https://code.ptit.edu.vn/student/question/DSA06049
// Ð?M C?P

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n, k;
    cin >> n >> k;
    int a[100000];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a, a + n);
    long long ans = 0;
    for (int i = 0; i < n; ++i) {
        ans += lower_bound(a + i + 1, a + n, a[i] + k) - (a + i + 1);
    }
    cout << ans;
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

//Sinh k? ti?p-Quay lui
// https://code.ptit.edu.vn/student/question/CTDL_001
// THU?T TOÁN SINH

#include <bits/stdc++.h>
using namespace std;

int n;
string s;

void solve() {
    string rs = s;
    reverse(rs.begin(), rs.end());
    if (rs == s) {
        for (char i : s) {
            cout << i << " ";
        }
        cout << endl;
    }
}

void Try(int i) {
    for (int j = 0; j <= 1; ++j) {
        s[i] = j + '0';
        if (i == n - 1) solve();
        else Try(i + 1);
    }
}

void testCase() {
    cin >> n;
    s.resize(n);
    Try(0);
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
// https://code.ptit.edu.vn/student/question/CTDL_002
// T?ng dãy con = K

#include <bits/stdc++.h>
using namespace std;

int n, k, ans;
vector<int> a, b;

void solve() {
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += a[i] * b[i];
    }
    if (sum == k) {
        ans++;
        for (int i = 0; i < n; ++i) {
            if (b[i]) cout << a[i] << " ";
        }
        cout << endl;
    }
}

void Try(int i) {
    for (int j = 0; j <= 1; ++j) {
        b[i] = j;
        if (i == n - 1) solve();
        else Try(i + 1);
    }
}

void testCase() {
    cin >> n >> k;
    a.resize(n);
    b.resize(n);
    for (int &i : a) cin >> i;
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
// https://code.ptit.edu.vn/student/question/DSA01001
// XÂU NH? PHÂN K? TI?P

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    string s; cin >> s;
    for (int i = s.length() - 1; i >= 0; --i) {
        if (s[i] == '1') s[i] = '0';
        else {
            s[i] = '1';
            break;
        }
    }
    cout << s;
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
// https://code.ptit.edu.vn/student/question/DSA01002
// T?P CON K? TI?P

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n, k;
    cin >> n >> k;
    vector<int> a(k + 1);
    for (int i = 1; i <= k; ++i) {
        cin >> a[i];
    }

    int i = k;
    while (a[i] == n - k + i) i--;
    if (i == 0) a[i] = 0;
    else a[i]++;
    
    while (i < k) {
        a[i + 1] = a[i] + 1;
        i++;
    }
    for (int i = 1; i <= k; ++i) {
        cout << a[i] << " ";
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
// https://code.ptit.edu.vn/student/question/DSA01003
// HOÁN V? K? TI?P

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }

    int i = n - 1;
    while (i >= 1 && a[i] >= a[i + 1]) i--;
    if (i == 0) {
        for (int j = 1; j <= n; ++j) {
            a[j] = j;
        }
    }
    else {
        for (int j = n; j > i; --j) {
            if (a[j] > a[i]) {
                swap(a[i], a[j]);
                break;
            }
        }
    }
    for (int i = 1; i <= n; ++i) {
        cout << a[i] << " ";
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
// https://code.ptit.edu.vn/student/question/DSA01004
// SINH T? H?P

#include <bits/stdc++.h>
using namespace std;

int n, k;
vector<int> a;

void solve() {
    for (int i = 1; i <= k; ++i) {
        cout << a[i];
    }
    cout << " ";
}

void Try(int i) {
    for (int j = a[i - 1] + 1; j <= n - k + i; ++j) {
        a[i] = j;
        if (i == k) solve();
        else Try(i + 1);
    }
}

void testCase() {
    cin >> n >> k;
    a.resize(k + 1);
    Try(1);
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
// https://code.ptit.edu.vn/student/question/DSA01005
// SINH HOÁN V?

#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> a, b;

void solve() {
    for (int i = 1; i <= n; ++i) {
        cout << a[i];
    }
    cout << " ";
}

void Try(int i) {
    for (int j = 1; j <= n; ++j) {
        if (!b[j]) {
            a[i] = j;
            b[j] = 1;
            if (i == n) solve();
            else Try(i + 1);
            b[j] = 0;
        }
    }
}

void testCase() {
    cin >> n;
    a.resize(n + 1);
    b.clear(); b.resize(n + 1, 0);
    Try(1);
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
// https://code.ptit.edu.vn/student/question/DSA01006
// HOÁN V? NGU?C

#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> a, b;

void solve() {
    for (int i = 1; i <= n; ++i) {
        cout << a[i];
    }
    cout << " ";
}

void Try(int i) {
    for (int j = n; j >= 1; --j) {
        if (!b[j]) {
            a[i] = j;
            b[j] = 1;
            if (i == n) solve();
            else Try(i + 1);
            b[j] = 0;
        }
    }
}

void testCase() {
    cin >> n;
    a.resize(n + 1);
    b.resize(n + 1, 0);
    Try(1);
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
// https://code.ptit.edu.vn/student/question/DSA01019
// HAHAHA

#include <bits/stdc++.h>
using namespace std;

int n;
string s;
vector<string> res;

void solve() {
    if (s[0] == 'H' && s[n - 1] == 'A' && s.find("HH") == -1) {
        res.push_back(s);
    }
}

void Try(int i) {
    for (int j = 0; j <= 1; ++j) {
        if (j == 0) s[i] = 'H';
        else s[i] = 'A';
        if (i == n - 1) solve();
        else Try(i + 1);
    }
}

void testCase() {
    cin >> n;
    s.resize(n);
    res.clear();
    Try(0);
    sort(res.begin(), res.end());
    for (string i : res) cout << i << endl;
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
// https://code.ptit.edu.vn/student/question/DSA01020
// XÂU NH? PHÂN TRU?C

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    string s; cin >> s;
    int i = s.length() - 1;
    while (i >= 0 && s[i] == '0') {
        s[i--] = '1';
    }
    if (i >= 0) s[i] = '0';
    cout << s;
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
// https://code.ptit.edu.vn/student/question/DSA01021
// T? H?P TI?P THEO

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n, k;
    cin >> n >> k;
    vector<int> a(k + 1);
    map<int, int> mp;
    for (int i = 1; i <= k; ++i) {
        cin >> a[i];
        mp[a[i]]++;
    }
    
    int i = k;
    while (i >= 1 && a[i] == n - k + i) i--;
    if (i == 0) {
        cout << k;
        return ;
    }
    
    a[i]++;
    while (i < k) {
        a[i + 1] = a[i] + 1;
        i++;
    }
    int ans = 0;
    for (int i = 1; i <= k; ++i) {
        if (mp[a[i]] == 0) ans++;
    }
    cout << ans;
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
// https://code.ptit.edu.vn/student/question/DSA01022
// S? TH? T? HOÁN V?

#include <bits/stdc++.h>
using namespace std;

int n, res;
int a[10], u[10], temp[10];
bool stop;

void solve() {
    res++;
    for (int i = 1; i <= n; ++i) {
        if (a[i] != temp[i])
            return;
    }
    stop = true;
}

void Try(int i) {
    if (stop) return;
    for (int j = 1; j <= n; ++j) {
        if (!u[j]) {
            a[i] = j;
            u[j] = 1;
            if (i == n) solve();
            else Try(i + 1);
            u[j] = 0;
        }
    }
}

void testCase() {
    res = 0; stop = false;
    memset(u, 0, sizeof(u));
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> temp[i];
    }
    Try(1);
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
// https://code.ptit.edu.vn/student/question/DSA01023
// S? TH? T? T? H?P

#include <bits/stdc++.h>
using namespace std;

int n, k, res;
int a[20], temp[20];
bool stop;

void solve() {
    res++;
    for (int i = 1; i <= k; ++i) {
        if (a[i] != temp[i])
            return;
    }
    stop = true;
}

void Try(int i) {
    if (stop) return;
    for (int j = a[i - 1] + 1; j <= n - k + i; ++j) {
        a[i] = j;
        if (i == k) solve();
        else Try(i + 1);
    }
}

void testCase() {
    res = 0; stop = false;
    cin >> n >> k;
    for (int i = 1; i <= k; ++i) {
        cin >> temp[i];
    }
    Try(1);
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
// https://code.ptit.edu.vn/student/question/DSA01024
// Ð?T TÊN - 1

#include <bits/stdc++.h>
using namespace std;

int n, k;
int a[30];
vector<string> temp;
vector<vector<string>> res;

void solve() {
    vector<string> x;
    for (int i = 1; i <= k; ++i) {
        x.push_back(temp[a[i]]);
    }
    sort(x.begin(), x.end());
    res.push_back(x);
}

void Try(int i) {
    for (int j = a[i - 1] + 1; j <= n - k + i; ++j) {
        a[i] = j;
        if (i == k) solve();
        else Try(i + 1);
    }
}

void testCase() {
    cin >> n >> k;
    map<string, bool> mp;
    for (int i = 1; i <= n; ++i) {
        string s; cin >> s;
        mp[s] = true;
    }
    temp.push_back("");
    for (auto i : mp) {
        temp.push_back(i.first);
    }
    n = temp.size() - 1;
    Try(1);
    sort(res.begin(), res.end());
    for (auto i : res) {
        for (string j : i) {
            cout << j << " ";
        }
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
// https://code.ptit.edu.vn/student/question/DSA01025
// Ð?T TÊN - 2

#include <bits/stdc++.h>
using namespace std;

int n, k;
vector<int> a;

void solve() {
    string s;
    for (int i = 1; i <= k; ++i) {
        s.push_back(a[i] + 'A' - 1);
    }
    cout << s << endl;
}

void Try(int i) {
    for (int j = a[i - 1] + 1; j <= n - k + i; ++j) {
        a[i] = j;
        if (i == k) solve();
        else Try(i + 1);
    }
}

void testCase() {
    cin >> n >> k;
    a.resize(k + 1, 0);
    Try(1);
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
// https://code.ptit.edu.vn/student/question/DSA01026
// PHÁT L?C

#include <bits/stdc++.h>
using namespace std;

int n;
string s;
vector<string> res;

void solve() {
    if (s.front() == '8' && s.back() == '6' && s.find("88") == -1 && s.find("6666") == -1) {
        res.push_back(s);
    }
}

void Try(int i) {
    for (int j = 0; j <= 1; ++j) {
        if (j == 0) s[i] = '6';
        else s[i] = '8';
        if (i == n - 1) solve();
        else Try( i + 1);
    }
}

void testCase() {
    cin >> n;
    s.resize(n);
    Try(0);
    sort(res.begin(), res.end());
    for (string i : res) {
        cout << i << endl;
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
// https://code.ptit.edu.vn/student/question/DSA01027
// HOÁN V? DÃY S?

#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> a, b, u;
vector<vector<int>> res;

void Try(int i) {
    for (int j = 0; j < n; ++j) {
        if (!u[j]) {
            b[i] = a[j];
            u[j] = 1;
            if (i == n - 1) res.push_back(b);
            else Try(i + 1);
            u[j] = 0;
        }
    }
}

void testCase() {
    cin >> n;
    a.resize(n);
    b.resize(n);
    u.resize(n, 0);
    for (int &i : a) cin >> i;
    sort(a.begin(), a.end());
    Try(0);
    sort(res.begin(), res.end());
    for (auto i : res) {
        for (int j : i) {
            cout << j << " ";
        }
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
// https://code.ptit.edu.vn/student/question/DSA01028
// LI?T KÊ T? H?P

#include <bits/stdc++.h>
using namespace std;

int n, k;
vector<int> a, b;

void solve() {
    for (int i = 1; i <= k; ++i) {
        cout << a[b[i]] << " ";
    }
    cout << endl;
}

void Try(int i) {
    for (int j = b[i - 1] + 1; j <= n; ++j) {
        b[i] = j;
        if (i == k) solve();
        else Try(i + 1);
    }
}

void testCase() {
    cin >> n >> k;
    set<int> s;
    for (int i = 1; i <= n; ++i) {
        int x; cin >> x;
        s.insert(x);
    }
    a.push_back(-1);
    for (auto i : s) a.push_back(i);
    n = s.size();
    b.resize(n + 1);
    for (int i = 0; i <= n; ++i) {
        b[i] = i;
    }
    Try(1);
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
// https://code.ptit.edu.vn/student/question/DSA02001
// DÃY S? 1

#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> a;
vector<int> b;

void print() {
    cout << "[";
    for (int i = 0; i < a.size(); ++i) {
        cout << a[i];
        if (i != a.size() - 1) cout << " ";
    }
    cout << "]" << endl;
}

void Try(int i) {
    print();
    if (i == 1) return;
    for (int j = 0; j < i - 1; ++j) {
        b.push_back(a[j] + a[j + 1]);
    }
    a = b;
    a.resize(i - 1);
    b.clear();
    Try(i - 1);
}

void testCase() {
    cin >> n;
    a.resize(n);
    for (int &i : a) cin >> i;
    Try(n);
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
// https://code.ptit.edu.vn/student/question/DSA02002
// DÃY S? 2

#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> a, b;
vector<vector<int>> res;

void Try(int i) {
    res.push_back(a);
    if (i == 1) return;
    for (int j = 0; j < i - 1; ++j) {
        b.push_back(a[j] + a[j + 1]);
    }
    a = b;
    b.clear();
    Try(i - 1);
}

void testCase() {
    cin >> n;
    a.resize(n);
    res.clear();
    for (int &i : a) cin >> i;
    Try(n);
    reverse(res.begin(), res.end());
    for (auto i : res) {
        cout << "[";
        for (int j = 0; j < i.size(); ++j) {
            cout << i[j];
            if (j != i.size() - 1) cout << " ";
        }
        cout << "] ";
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
// https://code.ptit.edu.vn/student/question/DSA02003
// DI CHUY?N TRONG MÊ CUNG 1

#include <bits/stdc++.h>
using namespace std;

int n, a[11][11];
vector<string> v;

void Try(int i, int j, string s) {
    if (i == n && j == n) {
        v.push_back(s);
        return;
    }
    if (i < n && a[i + 1][j] == 1)
        Try(i + 1, j, s + 'D');
    if (j < n && a[i][j + 1] == 1)
        Try(i, j + 1, s + 'R');
}

void TestCase() {
    v.clear();
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cin >> a[i][j];
        }
    }
    
    if (a[1][1] == 0 || a[n][n] == 0) {
        cout << "-1\n";
        return;
    }
    Try(1, 1, "");

    if (v.empty()) {
        cout << "-1\n";
        return;
    }
    sort(v.begin(), v.end());
    for (auto x : v) {
        cout << x << " ";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T; cin >> T;
    while (T--) {
        TestCase();
        cout << endl;
    }
    return 0;
}
// https://code.ptit.edu.vn/student/question/DSA02004
// DI CHUY?N TRONG MÊ CUNG 2

#include <bits/stdc++.h>
using namespace std;

const int X[4] = {-1, 0, 1, 0};
const int Y[4] = {0, 1, 0, -1};
const string S = "URDL";

int n, a[10][10];
vector<string> v;

void Try(int i, int j, string s) {
    if (i == n && j == n) {
        v.push_back(s);
        return;
    }
    for (int k = 0; k < 4; ++k) {
        int r = i + X[k];
        int c = j + Y[k];
        if (r >= 1 && r <= n && c >= 1 && c <= n && a[r][c] == 1) {
            a[r][c] = 0;
            Try(r, c, s + S[k]);
            a[r][c] = 1;
        }
    }
}

void TestCase() {
    v.clear();
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cin >> a[i][j];
        }
    }
    
    if (a[1][1] == 0 || a[n][n] == 0) {
        cout << -1;
        return;
    }

    a[1][1] = 0;
    Try(1, 1, "");

    if (v.empty()) {
        cout << -1;
        return;
    }
    sort(v.begin(), v.end());
    for (auto x : v) {
        cout << x << " ";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T; cin >> T;
    while (T--) {
        TestCase();
        cout << endl;
    }
    return 0;
}
// https://code.ptit.edu.vn/student/question/DSA02005
// HOÁN V? XÂU KÝ T?

#include <bits/stdc++.h>
using namespace std;

int n;
string a, b;
vector<bool> vs;

void Try(int i) {
    for (int j = 0; j < n; ++j) {
        if (!vs[j]) {
            b[i] = a[j];
            vs[j] = true;
            if (i == n - 1) cout << b << " ";
            else Try(i + 1);
            vs[j] = false;
        }
    }
}

void testCase() {
    cin >> a;
    sort(a.begin(), a.end());
    n = a.length();
    b.resize(n);
    vs.resize(n, false);
    Try(0);
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
// https://code.ptit.edu.vn/student/question/DSA02006
// DÃY CON T?NG B?NG K

#include <bits/stdc++.h>
using namespace std;

int n, k;
vector<int> a, b;
bool hasAnswer;

void solve() {
    int sum = 0;
    for (int i = 0; i < b.size(); ++i) {
        sum += a[b[i]];
    }
    if (sum == k) {
        hasAnswer = true;
        cout << "[";
        for (int i = 0; i < b.size(); ++i) {
            cout << a[b[i]];
            if (i != b.size() - 1) cout << " ";
        }
        cout << "] ";
    }
}

void Try(int i) {
    for (int j = 1; j >= 0; --j) {
        if (j == 1) b.push_back(i);
        if (i == n - 1) solve();
        else Try(i + 1);
        if (j == 1) b.pop_back();
    }
}

void testCase() {
    cin >> n >> k;
    a.resize(n);
    hasAnswer = false;
    for (int &i : a) cin >> i;
    sort(a.begin(), a.end());
    Try(0);
    if (!hasAnswer) cout << -1;
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
// https://code.ptit.edu.vn/student/question/DSA02012
// DI CHUY?N TRONG MA TR?N

#include <bits/stdc++.h>
using namespace std;

int n, m, ans;
int a[105][105];
bool vs[105][105];

void Try(int i, int j) {
    if (i == n && j == m) {
        ans++;
        return;
    }
    if (i + 1 <= n && !vs[i + 1][j])
        Try(i + 1, j);
    if (j + 1 <= m && !vs[i][j + 1])
        Try(i, j + 1);
}

void testCase() {
    ans = 0;
    cin >> n >> m;
    memset(vs, false, sizeof(vs));
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            cin >> a[i][j];
        }
    }
    Try(1, 1);
    cout << ans;
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
// https://code.ptit.edu.vn/student/question/DSA02016
// S?P X?P QUÂN H?U 1

#include <bits/stdc++.h>
using namespace std;

int n, ans;
int a[20], b[20], c[20];

void Try(int i) {
    for (int j = 1; j <= n; ++j) {
        if (!a[j] && !b[i + j - 1] && !c[i - j + n]) {
            a[j] = b[i + j - 1] = c[i - j + n] = 1;
            if (i == n) ans++;
            else Try(i + 1);
            a[j] = b[i + j - 1] = c[i - j + n] = 0;
        }
    }
}

void testCase() {
    cin >> n;
    ans = 0;
    Try(1);
    cout << ans;
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
// https://code.ptit.edu.vn/student/question/DSA02022
// NGÀY Ð?C BI?T

#include <bits/stdc++.h>
using namespace std;

string s(8, '0');
vector<string> res;

void solve() {
    int d = stoi(s.substr(0, 2));
    int m = stoi(s.substr(2, 2));
    int y = stoi(s.substr(4));
    if (d > 0 && d <= 31 && m > 0 && m <= 12 && y >= 2000) {
        string tmp = s;
        tmp.insert(2, 1, '/');
        tmp.insert(5, 1, '/');
        res.push_back(tmp);
    }
}

void Try(int i) {
    for (int j = 0; j <= 1; ++j) {
        if (j == 0) s[i] = '0';
        else s[i] = '2';

        if (i == 7) solve();
        else Try(i + 1);
    }
}

void testCase() {
    Try(0);
    sort(res.begin(), res.end());
    for (string i : res) cout << i << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1;
    while (T--) {
        testCase();
    }
    return 0;
}
// https://code.ptit.edu.vn/student/question/DSA02023
// Ð?T TÊN

#include <bits/stdc++.h>
using namespace std;

int n, k;
int a[30];
vector<string> temp;
vector<vector<string>> res;

void solve() {
    vector<string> x;
    for (int i = 1; i <= k; ++i) {
        x.push_back(temp[a[i]]);
    }
    sort(x.begin(), x.end());
    res.push_back(x);
}

void Try(int i) {
    for (int j = a[i - 1] + 1; j <= n - k + i; ++j) {
        a[i] = j;
        if (i == k) solve();
        else Try(i + 1);
    }
}

void testCase() {
    cin >> n >> k;
   set<string> se;
    for (int i = 1; i <= n; ++i) {
        string s; cin >> s;
        se.insert(s);
    }
    temp.push_back("");
    for (auto i : se) {
        temp.push_back(i);
    }
    n = se.size();
    Try(1);
    sort(res.begin(), res.end());
    for (auto i : res) {
        for (string j : i) {
            cout << j << " ";
        }
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
// https://code.ptit.edu.vn/student/question/DSA02024
// DÃY CON TANG D?N

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
    x.pop_back(); // remove the last space
    for (int i : b) y += to_string(i) + " ";
    y.pop_back();
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
// https://code.ptit.edu.vn/student/question/DSA02029
// THÁP HÀ N?I

#include <bits/stdc++.h>
using namespace std;

void tower(int n, char a, char b, char c) {
    if (n == 1) {
        cout << a << " -> " << c << endl;
        return;
    }
    tower(n - 1, a, c, b);
    tower(1, a, b, c);
    tower(n - 1, b, a, c);
}

void testCase() {
    int n; cin >> n;
    tower(n, 'A', 'B', 'C');
    // S? lu?ng | Ngu?n | Trung gian | Ðích
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
// https://code.ptit.edu.vn/student/question/DSA02030
// LI?T KÊ XÂU KÝ T?

#include <bits/stdc++.h>
using namespace std;

char c;
int k;
string s;

void Try(char i) {
    for (char j = i; j <= c; ++j) {
        s.push_back(j);
        if (s.length() == k) cout << s << endl;
        else Try(j);
        s.pop_back();
    }
}

void testCase() {
    cin >> c >> k;
    Try('A');
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
// https://code.ptit.edu.vn/student/question/DSA02031
// GHÉP CH? CÁI

#include <bits/stdc++.h>
using namespace std;

char c;
string s;
int vs[127];

bool isConsonat(char c) {
    return (c != 'A' && c != 'E');
}

void solve() {
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == 'A' || s[i] == 'E') {
            if (i > 0 && i < s.length() - 1 && isConsonat(s[i - 1]) && isConsonat(s[i + 1]))
                return;
        }
    }
    cout << s << endl;
}

void Try(char i) {
    for (char j = 'A'; j <= c; ++j) {
        if (!vs[j]) {
            vs[j] = 1;
            s.push_back(j);
            if (s.length() == c - 'A' + 1) solve();
            else Try(i + 1);
            vs[j] = 0;
            s.pop_back();
        }
    }
}

void testCase() {
    cin >> c;
    Try('A');
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
// https://code.ptit.edu.vn/student/question/DSA02033
// S? XA CÁCH

#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> a;
vector<bool> vs;

void solve() {
    for (int i = 1; i < n; ++i) {
        if (abs(a[i] - a[i + 1]) == 1)
            return;
    }
    for (int i = 1; i <= n; ++i) {
        cout << a[i];
    }
    cout << endl;
}

void Try(int i) {
    for (int j = 1; j <= n; ++j) {
        if (!vs[j]) {
            vs[j] = true;
            a[i] = j;
            if (i == n) solve();
            else Try(i + 1);
            vs[j] = false;
        }
    }
}

void testCase() {
    cin >> n;
    a.resize(n + 1);
    vs.resize(n + 1, false);
    Try(1);
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
// https://code.ptit.edu.vn/student/question/DSA02034
// TRÒ CHOI V?I CÁC CON S?

#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> a;
vector<bool> vs;

void solve() {
    for (int i = 1; i < n; ++i) {
        if (abs(a[i] - a[i + 1]) == 1)
            return;
    }
    for (int i = 1; i <= n; ++i) {
        cout << a[i];
    }
    cout << endl;
}

void Try(int i) {
    for (int j = 1; j <= n; ++j) {
        if (!vs[j]) {
            vs[j] = true;
            a[i] = j;
            if (i == n) solve();
            else Try(i + 1);
            vs[j] = false;
        }
    }
}

void testCase() {
    cin >> n;
    a.resize(n + 1);
    vs.resize(n + 1, false);
    Try(1);
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
// https://code.ptit.edu.vn/student/question/DSA05009
// T?P CON B?NG NHAU

#include <bits/stdc++.h>
using namespace std;

int n, sum;
int a[105];
bool stop;

void Try(int i, int s) {
    if (i == n || stop || s == sum / 2) {
        if (s == sum / 2) stop = true;
        return;
    }
    if (s + a[i] <= sum / 2) {
        // Nhánh c?n tránh TLE
        Try(i + 1, s + a[i]);
    }
    Try(i + 1, s);
}

void testCase() {
    cin >> n;
    sum = 0;
    stop = false;
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
        sum += a[i];
    }
    if (sum % 2 == 0) {
        Try(0, 0);
    }
    cout << (stop ? "YES" : "NO");
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

// https://code.ptit.edu.vn/student/question/CTDL_003
// PHUONG ÁN T?I UU

#include <bits/stdc++.h>
using namespace std;

int n, m;
string ans;
vector<int> w;
vector<int> v;
vector<vector<int>> f;

void trace(int n, int k) {
    if (n == 0)
        return;
    if (f[n][k] == f[n - 1][k])
        trace(n - 1, k);
    else {
        trace(n - 1, k - w[n]);
        ans[n - 1] = '1';
    }
}

void testCase() {
    cin >> n >> m;
    w.resize(n + 1);
    v.resize(n + 1);
    ans.resize(n, '0');
    f.resize(n + 1, vector<int>(m + 1, 0));

    for (int i = 1; i <= n; ++i) {
        cin >> v[i];
    }
    for (int i = 1; i <= n; ++i) {
        cin >> w[i];
    }

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (j >= w[i])
                f[i][j] = max(f[i - 1][j], f[i - 1][j - w[i]] + v[i]);
            else
                f[i][j] = f[i - 1][j];
        }
    }
    cout << f[n][m] << endl;
    trace(n, m);
    for (char i : ans) cout << i << ' ';
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

// https://code.ptit.edu.vn/student/question/CTDL_004
// DÃY CON TANG D?N B?C K

#include <bits/stdc++.h>
using namespace std;

int n, k, ans = 0;
vector<int> a, b, c;

void solve() {
    vector<int> tmp = c;
    sort(tmp.begin(), tmp.end());
    if (tmp == c) ans++;
}

void Try(int i) {
    for (int j = b[i - 1] + 1; j <= n - k + i; ++j) {
        b[i] = j;
        c[i] = a[b[i]];
        if (i == k) solve();
        else Try(i + 1);
    }
}

void testCase() {
    cin >> n >> k;
    a.resize(n + 1); // mang ban dau
    b.resize(k + 1, 0); // to hop index
    c.resize(k + 1, 0); // b -> c
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }
    Try(1);
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

// https://code.ptit.edu.vn/student/question/DSA01009
// XÂU AB Ð?C BI?T

#include <bits/stdc++.h>
using namespace std;

int n, k;
string s;
vector<string> res;

void solve() {
    string z(k, 'A');
    int pos = s.find(z, 0);
    if (pos != -1) {
        string sub = s.substr(pos + 1);
        if (sub.find(z) == -1)
        res.push_back(s);
    }
}

void Try(int i) {
    for (char j = 'A'; j <= 'B'; ++j) {
        s[i] = j;
        if (i == n - 1) solve();
        else Try(i + 1);
    }
}

void testCase() {
    cin >> n >> k;
    s.resize(n);
    Try(0);
    cout << res.size() << endl;
    sort(res.begin(), res.end());
    for (string i : res) cout << i << "\n";
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

// https://code.ptit.edu.vn/student/question/DSA01010
// T?P QUÂN S?

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n, k;
    cin >> n >> k;
    vector<int> a(k + 1);
    map<int, int> mp;
    for (int i = 1; i <= k; ++i) {
        cin >> a[i];
        mp[a[i]]++;
    }
    
    int i = k;
    while (i >= 1 && a[i] == n - k + i) i--;
    if (i == 0) {
        cout << k;
        return ;
    }
    
    a[i]++;
    while (i < k) {
        a[i + 1] = a[i] + 1;
        i++;
    }
    int ans = 0;
    for (int i = 1; i <= k; ++i) {
        if (mp[a[i]] == 0) ans++;
    }
    cout << ans;
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

// https://code.ptit.edu.vn/student/question/DSA01011
// HOÁN V? TI?P THEO C?A CHU?I S?

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    string s; cin >> s;
    int i = s.length() - 2;
    while (i >= 0 && s[i] >= s[i + 1]) i--;
    if (i == -1) {
        cout << n << " BIGGEST";
        return;
    }
    for (int j = s.length() - 1; j > i; --j) {
        if (s[j] > s[i]) {
            swap(s[i], s[j]);
            sort(s.begin() + i + 1, s.end());
            break;
        }
    }
    cout << n << " " << s;
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

// https://code.ptit.edu.vn/student/question/DSA01012
// MÃ GRAY 1

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    
    vector<string> a;
    a.push_back("0");
    a.push_back("1");

    for (int i = 2; i <= n; ++i) {
        int l = a.size();
        for (int i = l - 1; i >= 0; --i) {
            a.push_back(a[i]);
        }
        for (int i = 0; i < l; ++i) {
            a[i] = '0' + a[i];
        }
        for (int i = l; i < a.size(); ++i) {
            a[i] = '1' + a[i];
        }
    }

    for (string i : a) cout << i << " ";
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

// https://code.ptit.edu.vn/student/question/DSA01013
// MÃ GRAY 2

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    string s; cin >> s;
    string res = "";
    res.push_back(s[0]);
    for (int i = 1; i < s.length(); ++i) {
        if (s[i] != res.back())
            res.push_back('1');
        else
            res.push_back('0');
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

// https://code.ptit.edu.vn/student/question/DSA01014
// T?P H?P

#include <bits/stdc++.h>
using namespace std;

int n, k, s, ans;
int a[25];

void solve() {
    int sum = 0;
    for (int i = 1; i <= k; ++i) {
        sum += a[i];
    }
    if (sum == s) ans++;
}

void Try(int i) {
    for (int j = a[i - 1] + 1; j <= n - k + i; ++j) {
        a[i] = j;
        if (i == k) solve();
        else Try(i + 1);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    while (1) {
        cin >> n >> k >> s;
        if (n == 0 && k == 0 && s == 0) break;
        ans = 0;
        Try(1);
        cout << ans << endl;
    }
    return 0;
}

// https://code.ptit.edu.vn/student/question/DSA01015
// TÌM B?I S?

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    queue<string> q;
    q.push("9");

    while (true) {
        string s = q.front();
        q.pop();

        int x = 0;
        for (char i : s) {
            x = x * 10 + (i - '0');
            x %= n;
        }
        if (x == 0) {
            cout << s << endl;
            return;
        }
        q.push(s + '0');
        q.push(s + '9');
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

// https://code.ptit.edu.vn/student/question/DSA01016
// PHÂN TÍCH S? 1

#include <bits/stdc++.h>
using namespace std;

void Try(int limit, int remain, vector<int> a) {
    if (remain == 0) {
        cout << "(";
        for (int i = 0; i < a.size() - 1; ++i) {
            cout << a[i] << " ";
        }
        cout << a.back() << ") ";
    }
    for (int i = limit; i >= 1; --i) {
        if (remain >= i) {
            a.push_back(i);
            Try(i, remain - i, a);
            a.pop_back();
        }
    }
}

void testCase() {
    int n; cin >> n;
    Try(n, n, {});
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

// https://code.ptit.edu.vn/student/question/DSA01017
// MÃ GRAY 3

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    string s; cin >> s;
    string res(1, s[0]);
    for (int i = 1; i < s.length(); ++i) {
        if (s[i] != s[i - 1])
            res.push_back('1');
        else
            res.push_back('0');
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

// https://code.ptit.edu.vn/student/question/DSA02004
// DI CHUY?N TRONG MÊ CUNG 2

#include <bits/stdc++.h>
using namespace std;

const int X[4] = {-1, 0, 1, 0};
const int Y[4] = {0, 1, 0, -1};
const string S = "URDL";

int n, a[10][10];
vector<string> v;

void Try(int i, int j, string s) {
    if (i == n && j == n) {
        v.push_back(s);
        return;
    }
    for (int k = 0; k < 4; ++k) {
        int r = i + X[k];
        int c = j + Y[k];
        if (r >= 1 && r <= n && c >= 1 && c <= n && a[r][c] == 1) {
            a[r][c] = 0;
            Try(r, c, s + S[k]);
            a[r][c] = 1;
        }
    }
}

void TestCase() {
    v.clear();
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cin >> a[i][j];
        }
    }
    
    if (a[1][1] == 0 || a[n][n] == 0) {
        cout << -1;
        return;
    }

    a[1][1] = 0;
    Try(1, 1, "");

    if (v.empty()) {
        cout << -1;
        return;
    }
    sort(v.begin(), v.end());
    for (auto x : v) {
        cout << x << " ";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T; cin >> T;
    while (T--) {
        TestCase();
        cout << endl;
    }
    return 0;
}

// https://code.ptit.edu.vn/student/question/DSA02007
// Ð?I CH? CÁC CH? S?

#include <bits/stdc++.h>
using namespace std;

void TestCase() {
    int k; string s;
    cin >> k >> s;

    for (int i = 0; i < s.length(); ++i) {
        if (k == 0) break;
        // Tìm char l?n nh?t (l?n hon s[i]) và d?ng sau i
        char c = '0';
        for (int j = i + 1; j < s.length(); ++j) {
            c = max(c, s[j]);
        }
        if (c <= s[i]) continue;

        string newz = s;
        for (int j = i + 1; j < s.length(); ++j) {
            // N?u có nhi?u char cùng b?ng c, th? swap các TH và l?y TH max
            if (s[j] == c) {
                string temp = s;
                swap(temp[i], temp[j]);
                newz = max(newz, temp);
            }
        }
        s = newz;
        k--;
    }
    cout << s;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T; cin >> T;
    while (T--) {
        TestCase();
        cout << endl;
    }
    return 0;
}

// https://code.ptit.edu.vn/student/question/DSA02008
// CH?N S? T? MA TR?N VUÔNG C?P N

#include <bits/stdc++.h>
using namespace std;

int n, k;
vector<vector<int>> a, res;
vector<int> b;
vector<bool> used;

void solve() {
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += a[i][b[i]];
    }
    if (sum == k) {
        res.push_back(b);
    }
}

void Try(int i) {
    for (int j = 0; j < n; ++j) {
        if (!used[j]) {
            b[i] = j;
            used[j] = true;
            if (i == n - 1) solve();
            else Try(i + 1);
            used[j] = false;
        }
    }
}

void testCase() {
    cin >> n >> k;
    a.resize(n, vector<int>(n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> a[i][j];
        }
    }
    b.clear(); b.resize(n);
    used.clear(); used.resize(n, 0);
    res.clear();

    Try(0); // theo hàng
    cout << res.size() << endl;
    for (auto i : res) {
        for (int j : i) {
            cout << j + 1 << " ";
        }
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

// https://code.ptit.edu.vn/student/question/DSA02010
// T? H?P S? CÓ T?NG B?NG X

#include <bits/stdc++.h>
using namespace std;

int n, x;
vector<int> a;
bool ok;

void Try(int limit, int value, vector<int> v) {
    if (value == x) {
        ok = true;
        cout << "[";
        for (int i = 0; i < v.size(); ++i) {
            cout << v[i];
            if (i != v.size() - 1) cout << " ";
        }
        cout << "]";
    }
    for (int i = 0; i < n; ++i) {
        if (a[i] >= limit && value + a[i] <= x) {
            v.push_back(a[i]);
            Try(a[i], value + a[i], v);
            v.pop_back();
        }
    }
}

void testCase() {
    cin >> n >> x;
    a.resize(n);
    ok = false;
    for (int &i : a) cin >> i;
    sort(a.begin(), a.end());
    Try(1, 0, {});
    if (!ok) cout << -1;
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

// https://code.ptit.edu.vn/student/question/DSA02013
// S? NGUYÊN T?

#include <bits/stdc++.h>
using namespace std;

int n, p, s;
vector<vector<int>> res;
vector<int> e(201, 1);
vector<int> prime;

void sieve() {
    e[0] = e[1] = 0;
    for (int i = 2; i * i <= 200; ++i) {
        if (e[i]) {
            for (int j = i * i; j <= 200; j += i) {
                e[j] = 0;
            }
        }
    }
    for (int i = 2; i <= 200; ++i) {
        if (e[i] == 1)
            prime.push_back(i);
    }
}

void Try(int pos, int sum, vector<int> lst) {
    if (lst.size() == n) {
        if (sum == s)
            res.push_back(lst);
        return;
    }
    for (int i = pos; i < prime.size(); ++i) {
        if (sum + prime[i] <= s) {
            lst.push_back(prime[i]);
            Try(i + 1, sum + prime[i], lst);
            lst.pop_back();
        }
        else return;
    }
}

void testCase() {
    res.clear();
    cin >> n >> p >> s;
    for (int i = 0; i < prime.size(); ++i) {
        if (prime[i] > p) {
            Try(i, 0, {});
            break;
        }
    }
    sort(res.begin(), res.end());
    cout << res.size() << endl;
    for (auto i : res) {
        for (auto j : i) cout << j << " ";
        cout << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    sieve();
    int T = 1; cin >> T;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}

// https://code.ptit.edu.vn/student/question/DSA02017
// S?P X?P QUÂN H?U 2

#include <bits/stdc++.h>
using namespace std;

int a[20][20], ans;
bool b[20], c[20], d[20];

void Try(int i, int sum) {
    for (int j = 1; j <= 8; ++j) {
        if (!b[j] && !c[i + j - 1] && !d[i - j + 8]) {
            b[j] = c[i + j - 1] = d[i - j + 8] = true;
            sum += a[i][j];
            if (i == 8)
                ans = max(ans, sum);
            else
                Try(i + 1, sum);
            sum -= a[i][j];
            b[j] = c[i + j - 1] = d[i - j + 8] = false;
        }
    }
}

void testCase() {
    ans = 0;
    for (int i = 1; i <= 8; ++i) {
        for (int j = 1; j <= 8; ++j) {
            cin >> a[i][j];
        }
    }
    Try(1, 0);
    cout << ans;
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

// https://code.ptit.edu.vn/student/question/DSA02025
// KÝ T? L?P

#include <bits/stdc++.h>
using namespace std;

int n, ans;
string a[15], hv[15];
bool vs[15];

void Try(int i, int cou) {
    if (i > n) {
        ans = min(ans, cou);
        return;
    }
    for (int j = 1; j <= n; ++j) {
        if (!vs[j]) {
            vs[j] = true;
            hv[i] = a[j];

            // Nhánh c?n
            int dd[127] = {};
            for (char c : hv[i]) dd[c]++;
            for (char c : hv[i - 1]) dd[c]++;
            int dem = 0;
            for (int i = 'A'; i <= 'Z'; ++i) {
                if (dd[i] == 2) dem++;
            }
            if (cou + dem < ans)
                Try(i + 1, cou + dem);

            vs[j] = false;
        }
    }
}

void testCase() {
    ans = INT_MAX;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }
    Try(1, 0);
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

// https://code.ptit.edu.vn/student/question/DSA02026
// PHÉP TOÁN CO B?N

#include <bits/stdc++.h>
using namespace std;

string str;
int sign[2] = {'+', '-'};
bool isOK;

bool isCorrect() {
    int x = stoi(str.substr(0, 2));
    int y = stoi(str.substr(5, 2));
    int z = stoi(str.substr(10, 2));
    if (x < 10 || y < 10 || z < 10) {
        return false;
    }
    if (str[3] == '+')
        return (x + y == z);
    else
        return (x - y == z);
}

void Try(int i) {
    if (isOK) return;
    if (i == str.length()) {
        if (isCorrect()) {
            isOK = true;
            cout << str << endl;
        }
        return;
    }
    if (str[i] == '?') {
        if (i == 3) {
            for (int j = 0; j <= 1; ++j) {
                str[i] = sign[j];
                Try(i + 1);
            }
        } else {
            for (int j = 0; j <= 9; ++j) {
                str[i] = j + '0';
                Try(i + 1);
            }
        }
        str[i] = '?';
    } else {
        Try(i + 1);
    }
}

void testCase() {
    isOK = false;
    getline(cin, str);
    for (int i = 0; i < str.length(); ++i) {
        if (str[i] == '*' or str[i] == '/') {
            // không t?n t?i phép nhân hay chia gi?a 2 s? có 2 cs mà ra k?t qu? là 1 s? có 2 cs
            cout << "WRONG PROBLEM!";
            return;
        }
    }
    Try(0);
    if (!isOK) {
        cout << "WRONG PROBLEM!";
    }
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

// https://code.ptit.edu.vn/student/question/DSA02032
// T? H?P S? CÓ T?NG B?NG X

#include <bits/stdc++.h>
using namespace std;

int n, x, a[21];
vector<vector<int>> res;

void Try(int limit, int value, vector<int> v) {
    if (value == x) {
        res.push_back(v);
        return;
    }
    for (int i = 1; i <= n; ++i) {
        if (a[i] >= limit && value + a[i] <= x) {
            v.push_back(a[i]);
            Try(a[i], value + a[i], v);
            v.pop_back();
        }
    }
}

void TestCase() {
    res.clear();
    cin >> n >> x;
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }
    sort(a + 1, a + 1 + n);
    Try(1, 0, {});
    if (res.empty()) cout << -1;
    else {
        cout << res.size() << " ";
        for (auto v : res) {
            cout << "{";
            for (int i = 0; i < v.size() - 1; ++i) {
                cout << v[i] << " ";
            }
            cout << v.back() << "} ";
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T; cin >> T;
    while (T--) {
        TestCase();
        cout << endl;
    }
    return 0;
}

// https://code.ptit.edu.vn/student/question/DSA02035
// HOÁN V? CÁC CH? S?

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

// https://code.ptit.edu.vn/student/question/DSA02036
// DÃY CON CÓ T?NG L?

#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> a, b;
set<vector<int>> ss;

void Try(int i, int s) {
    for (int j = i; j < n; ++j) {
        b.push_back(a[j]);
        s += a[j];
        if (s % 2 == 1) {
            vector<int> s(b.rbegin(), b.rend());
            ss.insert(s);
        }
        if (j + 1 < n) Try(j + 1, s);
        b.pop_back();
        s -= a[j];
    }
}

void testCase() {
    a.clear();
    b.clear();
    ss.clear();

    cin >> n;
    a.resize(n);
    for (int &i : a) cin >> i;
    sort(a.begin(), a.end());
    Try(0, 0);
    for (auto i : ss) {
        for (auto j : i) {
            cout << j << " ";
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

// https://code.ptit.edu.vn/student/question/DSA02037
// DÃY CON CÓ T?NG NGUYÊN T?

#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> a, b;
vector<vector<int>> res;

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

void solve() {
    int sum = 0;
    for (int i : b) sum += i;
    if (isPrime(sum)) res.push_back(b);
}

void Try(int i) {
    for (int j = 0; j <= 1; ++j) {
        if (j == 1) b.push_back(a[i]);
        if (i == n - 1) solve();
        else Try(i + 1);
        if (j == 1) b.pop_back();
    }
}

void testCase() {
    cin >> n;
    a.resize(n);
    b.clear();
    res.clear();
    for (int &i : a) cin >> i;
    sort(a.rbegin(), a.rend());
    Try(0);
    sort(res.begin(), res.end());
    for (auto i : res) {
        for (int j : i) {
            cout << j << " ";
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

// https://code.ptit.edu.vn/student/question/DSA02038
// DÃY CON CÓ K PH?N T? TANG D?N

#include <bits/stdc++.h>
using namespace std;

int n, k;
vector<int> a, b;

void solve() {
    for (int i = 1; i <= k; ++i) {
        cout << a[b[i]] << " ";
    }
    cout << endl;
}

void Try(int i) {
    for (int j = b[i - 1] + 1; j <= n - k + i; ++j) {
        b[i] = j;
        if (i == k) solve();
        else Try(i + 1);
    }
}

void TestCase() {
    cin >> n >> k;
    a.resize(n + 1);
    b.resize(k + 1, 0);
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }
    sort(a.begin() + 1, a.end());
    Try(1);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T; cin >> T;
    while (T--) {
        TestCase();
        cout << endl;
    }
    return 0;
}

// https://code.ptit.edu.vn/student/question/DSA02039
// PHÂN TÍCH S? 2

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> res;

void Try(int limit, int remain, vector<int> v) {
    if (remain == 0) {
        res.push_back(v);
        return;
    }
    for (int i = limit; i >= 1; --i) {
        if (remain >= i) {
            v.push_back(i);
            Try(i, remain - i, v);
            v.pop_back();
        }
    }
}

void TestCase() {
    res.clear();
    int n;
    cin >> n;
    Try(n, n, {});
    cout << res.size() << endl;
    for (auto v : res) {
        cout << "(";
        for (int i = 0; i < v.size() - 1; ++i) {
            cout << v[i] << " ";
        }
        cout << v.back() << ") ";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        TestCase();
        cout << endl;
    }
    return 0;
}

// https://code.ptit.edu.vn/student/question/DSA02041
// BI?N Ð?I V? 1

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    queue<pair<int, int>> q;
    q.push({ n, 0 });
    while (true) {
        pair<int, int> p = q.front();
        q.pop();
        if (p.first == 1) {
            cout << p.second;
            return;
        }
        if (p.first % 3 == 0)
            q.push({ p.first / 3, p.second + 1 });
        if (p.first % 2 == 0)
            q.push({ p.first / 2, p.second + 1 });
        q.push({ p.first - 1, p.second + 1 });
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

// https://code.ptit.edu.vn/student/question/DSA02045
// T?P CON C?A XÂU KÝ T?

#include <bits/stdc++.h>
using namespace std;

int n;
string a;
vector<string> res;

void Try(int i, string s) {
    for (int j = 0; j <= 1; ++j) {
        if (j == 1) s.push_back(a[i]);
        if (i == n - 1) {
            if (s != "") res.push_back(s);
        }
        else Try(i + 1, s);
        if (j == 1) s.pop_back();
    }
}

void testCase() {
    cin >> n >> a;
    res.clear();
    Try(0, "");
    sort(res.begin(), res.end());
    for (string i : res) cout << i << " ";
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

// https://code.ptit.edu.vn/student/question/DSAKT012
// Ð?I TI?N

#include <bits/stdc++.h>
using namespace std;

int n, s, ans;
int a[30];

void Try(int index, int value, int count) {
    if (index == n || value >= s || count > ans) {
        if (value == s) {
            ans = min(ans, count);
        }
        return;
    }
    Try(index + 1, value, count);
    Try(index + 1, value + a[index], count + 1);
}

void testCase() {
    cin >> n >> s;
    ans = INT_MAX;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    Try(0, 0, 0);
    cout << (ans != INT_MAX ? ans : -1);
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

//Stack-Queue
// https://code.ptit.edu.vn/student/question/DSA07001
// NGAN X?P 1

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int x;
    string s;
    vector<int> v;
    while (cin >> s) {
        if (s == "push") {
            cin >> x;
            v.push_back(x);
        }
        else if (s == "pop") {
            if (!v.empty()) {
                v.pop_back();
            }
        }
        else if (s == "show") {
            if (v.empty())
                cout << "empty";
            else
                for (int i : v) cout << i << " ";
            cout << endl;
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
// https://code.ptit.edu.vn/student/question/DSA07002
// NGAN X?P 2

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n, x;
    cin >> n;
    string s;
    stack<int> st;
    while (n--) {
        cin >> s;
        if (s == "PUSH") {
            cin >> x;
            st.push(x);
        }
        else if (s == "POP") {
            if (!st.empty()) {
                st.pop();
            }
        }
        else if (s == "PRINT") {
            if (st.empty())
                cout << "NONE";
            else
                cout << st.top();
            cout << endl;
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
// https://code.ptit.edu.vn/student/question/DSA07003
// KI?M TRA BI?U TH?C S? H?C

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    string s; getline(cin, s);
    stack<char> st;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] != ')')
            st.push(s[i]);
        else {
            bool ok = false;
            while (!st.empty()) {
                char c = st.top(); st.pop();
                if (c == '+' || c == '-' || c == '*' || c == '/')
                    ok = true;
                if (c == '(')
                    break;
            }
            if (!ok) {
                cout << "Yes";
                return;
            }
        }
    }
    cout << "No";
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

// 3
// ((a+b))
// (a + (b)/c)
// (a + b*(c-d))

// https://code.ptit.edu.vn/student/question/DSA07004
// Ð?M S? D?U NGO?C Ð?I CHI?U

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    string s; cin >> s;
    stack<char> st;
    int open = 0, close = 0;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == '(') {
            open++;
            st.push(s[i]);
        }
        else {
            if (!st.empty() && st.top() == '(') {
                open--;
                st.pop();
            }
            else {
                close++;
                st.push(s[i]);
            }
        }
    }
    int ans = open / 2 + close / 2; // m?i c?p dóng m? ngo?c ch? c?n d?o ngu?c 1 d?u
    ans += open % 2 + close % 2; // n?u có c?p ngo?c trái hu?ng, c?n d?o c? 2
    cout << ans;
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
// https://code.ptit.edu.vn/student/question/DSA07009
// BI?N Ð?I TI?N T? - TRUNG T?

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    string s; cin >> s;
    stack<string> st;
    for (int i = s.length() - 1; i >= 0; --i) {
        string tmp = string(1, s[i]);
        if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/') {
            string x = st.top(); st.pop();
            string y = st.top(); st.pop();
            string z = "(" + x + tmp + y + ")";
            st.push(z);
        }
        else
            st.push(tmp);
    }
    cout << st.top();
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
// https://code.ptit.edu.vn/student/question/DSA07010
// BI?N Ð?I TI?N T? - H?U T?

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    string s; cin >> s;
    stack<string> st;
    for (int i = s.length() - 1; i >= 0; --i) {
        if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/') {
            string x = st.top(); st.pop();
            string y = st.top(); st.pop();
            string z = x + y + string(1, s[i]);
            st.push(z);
        }
        else st.push(string(1, s[i]));
    }
    cout << st.top();
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
// https://code.ptit.edu.vn/student/question/DSA07013
// TÍNH GIÁ TR? BI?U TH?C H?U T?

#include <bits/stdc++.h>
using namespace std;

int calculate(int x, int y, char o) {
    switch (o) {
    case '+':
        return x + y;
    case '-':
        return x - y;
    case '*':
        return x * y;
    case '/':
        return x / y;
    }
}

void testCase() {
    string s; cin >> s;
    stack<int> st;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/') {
            int y = st.top(); st.pop();
            int x = st.top(); st.pop();
            int z = calculate(x, y, s[i]);
            st.push(z);
        }
        else st.push(s[i] - '0');
    }
    cout << st.top();
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
// https://code.ptit.edu.vn/student/question/DSA07014
// TÍNH GIÁ TR? BI?U TH?C TI?N T?

#include <bits/stdc++.h>
using namespace std;

int calculate(int x, int y, char o) {
    switch (o) {
    case '+':
        return x + y;
    case '-':
        return x - y;
    case '*':
        return x * y;
    case '/':
        return x / y;
    }
}

void testCase() {
    string s; cin >> s;
    stack<int> st;
    for (int i = s.length() - 1; i >= 0; --i) {
        if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/') {
            int x = st.top(); st.pop();
            int y = st.top(); st.pop();
            int z = calculate(x, y, s[i]);
            st.push(z);
        }
        else st.push(s[i] - '0');
    }
    cout << st.top();
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
// https://code.ptit.edu.vn/student/question/DSA07021
// DÃY NGO?C ÐÚNG DÀI NH?T

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    string s; cin >> s;
    stack<int> st; // luu v? trí các d?u ngo?c sai
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == ')' && !st.empty() && s[st.top()] == '(')
            st.pop();
        else
            st.push(i);
    }
    
    if (st.empty()) {
        cout << s.length();
        return;
    }
    vector<int> v;
    while (!st.empty()) {
        v.push_back(st.top());
        st.pop();
    }
    sort(v.begin(), v.end());
    if (v.front() != 0)
        v.insert(v.begin(), -1);
    if (v.back() != s.length() - 1)
        v.insert(v.end(), s.length());

    int res = 0;
    for (int i = 1; i < v.size(); ++i) {
        // tính kho?ng cách gi?a 2 d?u ngo?c sai -> là d? dài dãy ngo?c dúng
        res = max(res, v[i] - v[i - 1] - 1);
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
// https://code.ptit.edu.vn/student/question/DSA07023
// Ð?O T?

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    string s, sl;
    getline(cin, sl);
    stringstream ss(sl);
    stack<string> st;
    while (ss >> s) {
        st.push(s);
    }
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
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
// https://code.ptit.edu.vn/student/question/DSA07027
// PH?N T? BÊN PH?I Ð?U TIÊN L?N HON

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    vector<int> a(n), r(n);
    for (int &i : a) cin >> i;
    stack<int> st;
    for (int i = n - 1; i >= 0; --i) {
        while (!st.empty() && st.top() <= a[i]) {
            st.pop();
        }
        if (st.empty()) r[i] = -1;
        else r[i] = st.top();
        st.push(a[i]);
    }
    for (int i : r) cout << i << " ";
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
// https://code.ptit.edu.vn/student/question/DSA07110
// KI?M TRA DÃY NGO?C ÐÚNG

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    string s; cin >> s;
    stack<int> st;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == ')' && !st.empty() && s[st.top()] == '(')
            st.pop();
        else if (s[i] == ']' && !st.empty() && s[st.top()] == '[')
            st.pop();
        else if (s[i] == '}' && !st.empty() && s[st.top()] == '{')
            st.pop();
        else
            st.push(i);
    }
    cout << (st.empty() ? "YES" : "NO");
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
// https://code.ptit.edu.vn/student/question/DSA08001
// C?U TRÚC D? LI?U HÀNG Ð?I 1

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    int x;
    queue<int> q;
    while (n--) {
        cin >> x;
        if (x == 1)
            cout << q.size() << endl;
        else if (x == 2) {
            if (q.empty()) cout << "YES\n";
            else cout << "NO\n";
        }
        else if (x == 3) {
            cin >> x;
            q.push(x);
        }
        else if (x == 4) {
            if (!q.empty()) q.pop();
        }
        else if (x == 5) {
            if (q.empty()) cout << "-1\n";
            else cout << q.front() << endl;
        }
        else if (x == 6) {
            if (q.empty()) cout << "-1\n";
            else cout << q.back() << endl;
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
// https://code.ptit.edu.vn/student/question/DSA08002
// C?U TRÚC D? LI?U HÀNG Ð?I 2

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    string s;
    int x;
    queue<int> q;
    while (n--) {
        cin >> s;
        if (s == "PUSH") {
            cin >> x;
            q.push(x);
        }
        else if (s == "POP") {
            if (!q.empty()) {
                q.pop();
            }
        }
        else {
            if (q.empty()) cout << "NONE";
            else cout << q.front();
            cout << endl;
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
// https://code.ptit.edu.vn/student/question/DSA08003
// HÀNG Ð?I HAI Ð?U (DEQUEUE)

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    string s;
    int x;
    deque<int> dq;
    while (n--) {
        cin >> s;
        if (s == "PUSHBACK") {
            cin >> x;
            dq.push_back(x);
        }
        else if (s == "PUSHFRONT") {
            cin >> x;
            dq.push_front(x);
        }
        else if (s == "POPBACK") {
            if (!dq.empty())
                dq.pop_back();
        }
        else if (s == "POPFRONT") {
            if (!dq.empty())
                dq.pop_front();
        }
        else if (s == "PRINTFRONT") {
            if (!dq.empty())
                cout << dq.front();
            else
                cout << "NONE";
            cout << endl;
        }
        else if (s == "PRINTBACK") {
            if (!dq.empty())
                cout << dq.back();
            else
                cout << "NONE";
            cout << endl;
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
// https://code.ptit.edu.vn/student/question/DSA08005
// S? NH? PHÂN T? 1 Ð?N N

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    queue<string> q;
    q.push("1");
    while (n--) {
        string s = q.front();
        q.pop();
        cout << s << " ";

        q.push(s + "0");
        q.push(s + "1");
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
// https://code.ptit.edu.vn/student/question/DSA08006
// S? 0 VÀ S? 9

#include <bits/stdc++.h>
using namespace std;

bool check(string s, int n) {
    int x = 0;
    for (int i = 0; i < s.length(); ++i) {
        x = (x * 10 + (s[i] - '0')) % n;
    }
    return x == 0;
}

void testCase() {
    int n; cin >> n;
    queue<string> q;
    q.push("9");
    while (true) {
        string s = q.front();
        q.pop();

        if (check(s, n)) {
            cout << s;
            return;
        }

        q.push(s + "0");
        q.push(s + "9");
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
// https://code.ptit.edu.vn/student/question/DSA08007
// S? BDN 1

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    string s; cin >> s;
    int res = 0;
    queue<string> q;
    q.push("1");
    while (!q.empty()) {
        string z = q.front();
        q.pop();
        res++;

        string x = z + "0";
        if (x.length() > s.length() || (x.length() == s.length() && x > s))
            break;
        q.push(x);

        x = z + "1";
        if (x.length() > s.length() || (x.length() == s.length() && x > s))
            break;
        q.push(x);
    }
    cout << res + q.size();
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
// https://code.ptit.edu.vn/student/question/DSA08008
// S? BDN 2

#include <bits/stdc++.h>
using namespace std;

bool check(string s, int n) {
    int x = 0;
    for (int i = 0; i < s.length(); ++i) {
        x = (x * 10 + (s[i] - '0')) % n;
    }
    return x == 0;
}

void testCase() {
    int n; cin >> n;
    queue<string> q;
    q.push("1");
    while (true) {
        string s = q.front();
        q.pop();

        if (check(s, n)) {
            cout << s;
            return;
        }

        q.push(s + "0");
        q.push(s + "1");
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
// https://code.ptit.edu.vn/student/question/DSA08017
// S? L?C PHÁT 1

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    stack<string> st;
    queue<string> q;
    q.push("");
    while (!q.empty()) {
        string s = q.front();
        q.pop();
        st.push(s);

        if (s.length() == n) continue;
        q.push(s + "6");
        q.push(s + "8");
    }
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
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
// https://code.ptit.edu.vn/student/question/DSA08018
// S? L?C PHÁT 2

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
        if (s != "") v.push_back(s);

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
// https://code.ptit.edu.vn/student/question/DSA08019
// S? L?C PHÁT 3

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    stack<string> st;
    queue<string> q;
    q.push("");
    while (!q.empty()) {
        string s = q.front();
        q.pop();
        if (s != "") st.push(s);

        if (s.length() == n) continue;
        q.push(s + "6");
        q.push(s + "8");
    }
    cout << st.size() << endl;
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
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
// https://code.ptit.edu.vn/student/question/DSA08021
// DI CHUY?N TRONG MA TR?N

#include <bits/stdc++.h>
using namespace std;

struct Data {
    int r, c;
    int cou;

    Data(int r, int c, int cou) {
        this->r = r;
        this->c = c;
        this->cou = cou;
    }
};

void testCase() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n + 1, vector<int>(m + 1));
    vector<vector<bool>> vs(n + 1, vector<bool>(m + 1, 0));
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            cin >> a[i][j];
        }
    }

    queue<Data> q;
    q.push(Data(1, 1, 0));
    while (!q.empty()) {
        Data x = q.front();
        q.pop();

        int i = x.r, j = x.c;
        if (i == n && j == m) {
            cout << x.cou;
            return;
        }

        if (i + a[i][j] <= n && vs[i + a[i][j]][j] == 0) {
            vs[i + a[i][j]][j] = 1;
            q.push(Data(i + a[i][j], j, x.cou + 1));
        }
        if (j + a[i][j] <= m && vs[i][j + a[i][j]] == 0) {
            vs[i][j + a[i][j]] = 1;
            q.push(Data(i, j + a[i][j], x.cou + 1));
        }
    }
    cout << -1;
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

// https://code.ptit.edu.vn/student/question/DSA07008
// BI?N Ð?I TRUNG T? - H?U T?

#include <bits/stdc++.h>
using namespace std;

int prio(char c) {
    if (c == '^') return 4;
    if (c == '*' || c == '/') return 3;
    if (c == '+' || c == '-') return 2;
    return 1;
}

void testCase() {
    string s; cin >> s;
    string res = "";
    stack<char> st;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == '(') st.push(s[i]);
        else if (s[i] == ')') {
            while (st.top() != '(') {
                res += st.top();
                st.pop();
            }
            st.pop();
        }
        else if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '^') {
            while (!st.empty() && prio(st.top()) >= prio(s[i])) {
                res += st.top();
                st.pop();
            }
            st.push(s[i]);
        }
        else res += s[i];
    }
    while (!st.empty()) {
        if (st.top() != '(') res += st.top();
        st.pop();
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

// 2
// (A+(B+C)
// ((A*B)+C)

// https://code.ptit.edu.vn/student/question/DSA07009
// BI?N Ð?I TI?N T? - TRUNG T?

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    string s; cin >> s;
    stack<string> st;
    for (int i = s.length() - 1; i >= 0; --i) {
        string tmp = string(1, s[i]);
        if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/') {
            string x = st.top(); st.pop();
            string y = st.top(); st.pop();
            string z = "(" + x + tmp + y + ")";
            st.push(z);
        }
        else
            st.push(tmp);
    }
    cout << st.top();
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

// https://code.ptit.edu.vn/student/question/DSA07010
// BI?N Ð?I TI?N T? - H?U T?

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    string s; cin >> s;
    stack<string> st;
    for (int i = s.length() - 1; i >= 0; --i) {
        if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/') {
            string x = st.top(); st.pop();
            string y = st.top(); st.pop();
            string z = x + y + string(1, s[i]);
            st.push(z);
        }
        else st.push(string(1, s[i]));
    }
    cout << st.top();
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

// https://code.ptit.edu.vn/student/question/DSA07011
// BI?N Ð?I H?U T? - TI?N T?

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    string s; cin >> s;
    stack<string> st;
    for (int i = 0; i < s.length(); ++i) {
        string x = string(1, s[i]);
        if (x == "+" || x == "-" || x == "*" || x == "/") {
            string b = st.top(); st.pop();
            string a = st.top(); st.pop();
            string c = x + a + b;
            st.push(c);
        }
        else st.push(x);
    }
    cout << st.top();
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

// https://code.ptit.edu.vn/student/question/DSA07012
// BI?N Ð?I H?U T? - TRUNG T?

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    string s; cin >> s;
    stack<string> st;
    for (int i = 0; i < s.length(); ++i) {
        string x = string(1, s[i]);
        if (x == "+" || x == "-" || x == "*" || x == "/") {
            string b = st.top(); st.pop();
            string a = st.top(); st.pop();
            string c = "(" + a + x + b + ")";
            st.push(c);
        }
        else st.push(x);
    }
    cout << st.top();
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

// https://code.ptit.edu.vn/student/question/DSA07016
// BI?U TH?C TANG GI?M

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    string s; cin >> s;
    stack<int> st;
    for (int i = 0; i <= s.length(); ++i) {
        st.push(i + 1);
        if (i == s.length() || s[i] == 'I') {
            while (!st.empty()) {
                cout << st.top();
                st.pop();
            }
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
// https://code.ptit.edu.vn/student/question/DSA07017
// PH?N T? BÊN PH?I NH? HON

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    int a[n + 1], gr[n + 1], le[n + 1];
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }

    stack<int> st;
    for (int i = n; i >= 1; --i) {
        while (!st.empty() && a[st.top()] <= a[i]) {
            st.pop();
        }
        if (st.empty()) gr[i] = -1;
        else gr[i] = st.top();
        st.push(i); // push index cua so lon hon dau tien ben phai cua a[i]
    }

    while (!st.empty()) st.pop(); // clear
    for (int i = n; i >= 1; --i) {
        while (!st.empty() && st.top() >= a[i]) {
            st.pop();
        }
        if (st.empty()) le[i] = -1;
        else le[i] = st.top();
        st.push(a[i]); // push so nho hon dau tien ben phai cua a[i]
    }

    for (int i = 1; i <= n; ++i) {
        if (gr[i] == -1) cout << -1;
        else cout << le[gr[i]];
        cout << " ";
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

// https://code.ptit.edu.vn/student/question/DSA07019
// HÌNH CH? NH?T L?N NH?T

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    int a[n + 1], l[n + 1], r[n + 1];
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }

    stack<int> st;
    for (int i = 1; i <= n; ++i) {
        while (!st.empty() && a[st.top()] >= a[i]) {
            st.pop();
        }
        if (st.empty()) l[i] = 1;
        else l[i] = st.top() + 1;
        st.push(i);
    }

    while (!st.empty()) st.pop();
    for (int i = n; i >= 1; --i) {
        while (!st.empty() && a[st.top()] >= a[i]) {
            st.pop();
        }
        if (st.empty()) r[i] = n;
        else r[i] = st.top() - 1;
        st.push(i);
    }

    long long ans = 0;
    for (int i = 1; i <= n; ++i) {
        long long s = (long long) a[i] * (r[i] - l[i] + 1);
        ans = max(ans, s);
    }
    cout << ans;
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

// https://code.ptit.edu.vn/student/question/DSA07028
// NH?P CH?NG KHOÁN

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    int a[n + 1];
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }

    stack<int> st;
    for (int i = 1; i <= n; ++i) {
        while (!st.empty() && a[st.top()] <= a[i]) {
            st.pop();
        }
        if (st.empty()) cout << i << " ";
        else cout << i - st.top() << " ";
        st.push(i);
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

// https://code.ptit.edu.vn/student/question/DSA07029
// GI?I MÃ XÂU KÝ T?

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    string s; cin >> s;
    stack<string> st1;
    stack<int> st2;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] >= '0' && s[i] <= '9') {
            int num = 0;
            while (i < s.length() && s[i] >= '0' && s[i] <= '9') {
                num = num * 10 + (s[i] - '0');
                i++;
            }
            i--;
            st2.push(num);
        }
        else if (s[i] == ']') {
            string tmp = "";
            while (st1.top() != "[") {
                tmp = st1.top() + tmp;
                st1.pop();
            }
            st1.pop(); // bo dau [

            string res = "";
            int dem = st2.top(); st2.pop();
            while (dem--) res += tmp;
            st1.push(res);
        }
        else {
            st1.push(string(1, s[i]));
            if (s[i] == '[' && (i == 0 || s[i - 1] < '0' || s[i - 1] > '9'))
                st2.push(1);
        }
    }

    string ans = "";
    while (!st1.empty()) {
        ans = st1.top() + ans;
        st1.pop();
    }
    cout << ans;
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

// https://code.ptit.edu.vn/student/question/DSA07041
// BI?U TH?C ÐÚNG DÀI NH?T

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    string s; cin >> s;
    stack<char> st;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == ')' && !st.empty() && st.top() == '(') {
            st.pop();
        }
        else st.push(s[i]);
    }
    cout << s.length() - st.size();
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

// https://code.ptit.edu.vn/student/question/DSA08004
// GIÁ TR? NH? NH?T C?A XÂU

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int k; cin >> k;
    string s; cin >> s;
    int dd[127] = {};
    for (char i : s) dd[i]++;
    priority_queue<int> q;
    for (int i : dd) {
        if (i > 0) q.push(i);
    }
    while (k--) {
        if (q.empty()) break;
        int x = q.top(); q.pop();
        x--;
        q.push(x);
    }
    long long ans = 0;
    while (!q.empty()) {
        long long x = q.top(); q.pop();
        ans += x * x;
    }
    cout << ans;
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

// https://code.ptit.edu.vn/student/question/DSA08009
// BI?N Ð?I S – T

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int s, t;
    cin >> s >> t;
    queue<pair<int, int>> q;
    map<int, bool> mp;
    q.push({s, 0});
    while (!q.empty()) {
        pair<int, int> p = q.front(); q.pop();
        if (p.first == t) {
            cout << p.second;
            return;
        }
        if (p.first - 1 == t || p.first * 2 == t) {
            cout << p.second + 1;
            return;
        }


        if (p.first * 2 <= t * 2 && mp[p.first * 2] == 0) {
            q.push({p.first * 2, p.second + 1});
            mp[p.first * 2] = 1;
        }
        if (p.first - 1 >= 0 && mp[p.first - 1] == 0) {
            q.push({p.first - 1, p.second + 1});
            mp[p.first - 1] = 1;
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

//Cây nh? phân
// https://code.ptit.edu.vn/student/question/DSA11001
// CÂY BI?U TH?C 1

#include <bits/stdc++.h>
using namespace std;

bool isSign(char c) {
    return (c == '+' or c == '-' or c == '*' or c == '/');
}

void TestCase() {
    string s; cin >> s;
    stack<string> st;
    for (char i : s) {
        string z = "";
        if (isSign(i)) {
            string y = st.top(); st.pop();
            string x = st.top(); st.pop();
            z = x + i + y;
        } else {
            z += i;
        }
        st.push(z);
    }
    cout << st.top();
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
// https://code.ptit.edu.vn/student/question/DSA11002
// CÂY BI?U TH?C 2

#include <bits/stdc++.h>
using namespace std;

int Calculate(int x, int y, char c) {
    if (c == '+') return x + y;
    if (c == '-') return x - y;
    if (c == '*') return x * y;
    if (c == '/') return x / y;
}

void TestCase() {
    int n; cin >> n; cin.ignore();
    string s; getline(cin, s);
    queue<int> q;
    for (int i = s.length() - 1; i >= 0; --i) {
        if (s[i] == ' ') continue;
        if (isdigit(s[i])) {
            string tmp = "";
            while (isdigit(s[i])) {
                tmp = s[i--] + tmp;
            }
            i++;
            q.push(stoi(tmp));
        } else {
            int y = q.front(); q.pop();
            int x = q.front(); q.pop();
            q.push(Calculate(x, y, s[i]));
        }
    }
    cout << q.front();
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

// 2
// 7
// + * - 5 4 100 20
// 3
// - 4 7 

//DUY?T CÂY 1
#include<iostream>
using namespace std;
int seach(int* M, int n, int x) {
	for (int i = 0; i < n; i++)
		if (M[i] == x)return i;
}
void Duyet(int*M,int n,int*N) {
	int x = seach(M, n, N[0]);
	if (x != 0)	Duyet(M, x, N + 1);
	if (x != n - 1)Duyet(M + x + 1, n - x - 1, N + x + 1);
	cout << N[0] << " ";
}

int main() {
	int t; cin >> t;
	while (t--) {
		int M[1000], N[1000];
		int n; cin >> n;
		for (int i = 0; i < n; i++)cin >> M[i];
		for (int j = 0; j < n; j++)cin >> N[j];
		Duyet(M, n, N);
		cout << endl;
	}
}

// https://code.ptit.edu.vn/student/question/DSA11004
// DUY?T CÂY THEO M?C

#include <bits/stdc++.h>
#define ll long long
#define II pair<int, int>
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

void LevelOrder(Node *root) {
    queue<Node*> q;
    q.push(root);
    while (!q.empty()) {
        Node *p = q.front();
        q.pop();
        cout << p->data << " ";
        if (p->left != NULL)
            q.push(p->left);
        if (p->right != NULL)
            q.push(p->right);
    }
}

void TestCase() {
    int n; cin >> n;
    Node *root = NULL;
    while (n--) {
        int n1, n2;
        char c;
        cin >> n1 >> n2 >> c;
        if (root == NULL) {
            root = new Node(n1);
        } 
        Insert(root, n1, n2, c);
    }
    LevelOrder(root);
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

//DUY?T CÂY 2 
#include<iostream>
#include<algorithm>
using namespace std;

struct node {
	int data;
	node* pLeft;
	node* pRight;
	node(int x) {
		this->data = x;
		pLeft = pRight = NULL;
	}
};
typedef node* tree;
int find(int* M, int n,int k) {
	for (int i = 0; i < n; i++)if (M[i] == k)return i;
	return -1;
}
void add_Node(tree& T, int* M, int* N,int n) {
	T = new node(N[0]);
	int k = find(M, n, N[0]);
	int L[10001], R[10001], l = 0, r = 0;
	for (int i = 1; i < n; i++)
		if (find(M, n, N[i]) < k)L[l++] = N[i];
		else R[r++] = N[i];
	if (k > 0)add_Node(T->pLeft, M, L, k);
	if (n - k - 1 > 0)add_Node(T->pRight, M + k + 1, R, n - k - 1);
}
void Load(tree T) {
	if (T->pLeft != NULL)Load(T->pLeft);
	if (T->pRight != NULL)Load(T->pRight);
	cout << T->data << " ";
}
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int M[10001], N[10001];
		for (int i = 0; i < n; i++)cin >> M[i];
		for (int i = 0; i < n; i++)cin >> N[i];
		tree T = NULL;
		add_Node(T, M, N, n);
		Load(T);
		cout << endl;
	}
}



// https://code.ptit.edu.vn/student/question/DSA11008
// KI?M TRA NODE LÁ

#include <bits/stdc++.h>
#define ll long long
#define II pair<int, int>
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

void MakeNode(Node *root, int data, char c) {
    switch (c)
    {
    case 'L':
        root->left = new Node(data);
        break;
    case 'R':
        root->right = new Node(data);
        break;
    }
}

void Insert(Node *root, int x, int y, char c) {
    if (root == NULL)
        return;
    if (root->data == x)
        MakeNode(root, y, c);
    else {
        Insert(root->left, x, y, c);
        Insert(root->right, x, y, c);
    }
}

int CountLeaf(Node *root) {
    if (root == NULL)
        return 0;
    if (root->left == NULL && root->right == NULL)
        return 1;
    return CountLeaf(root->left) + CountLeaf(root->right);
}

void TestCase() {
    int n; cin >> n;
    Node *root = NULL;
    while (n--) {
        int x, y; char c;
        cin >> x >> y >> c;
        if (root == NULL) {
            root = new Node(x);
        }
        Insert(root, x, y, c);
    }
    cout << (CountLeaf(root->left) == CountLeaf(root->right));
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
//DUY?T CÂY KI?U XO?N ?C
#include<iostream>
#include<vector>
#include<iomanip>
#include<algorithm>
#include<string.h>
#include<string>
#include<climits>
#include<set>
#include<map>
#include<stack>
#include<queue>
#define mod				 1000000007
#define ll				 unsigned long long
#define	p(x)			 pair<x,x> 
#define v(x)			 vector<x>
#define tree			 node*
#define pb(a)			 push_back(a)
#define pf(a)			 push_front(a)
#define FOR(i,l,r)		 for(int i=l;i<r;i++)
#define FORX(i,l,r,x)	 for(int i=l;i<r;i+=x)
#define FORD(i,l,r)		 for(int i=l;i>=r;i--)
#define correct(x,y,n,m) 0<=(x)&&(x)<(n)&&0<=(y)&&(y)<(m)
#define cin(M,n)		 FOR(i,0,n)cin>>M[i]
#define cout(M,n)		 FOR(i,0,n)cout<<M[i]<<" "
#define rs(M,x)		     memset(M,x,sizeof(M))
#define reset()			 FOR(i, 0, 1001)A[i].clear(),check[i]=false
#define faster()		 cin.tie(0); ios_base::sync_with_stdio(false); cout.tie(0);
#define run()			 int t; cin >> t; while (t--)
#define pq(x )			 priority_queue<x>
#define neg_pq(x)		 priority_queue<x, vector<x>, greater<x>>
#define all(M)			 M.begin(),M.end()
using namespace std;

//_______________________T_O_A_N________________________//

struct node {
	int data;
	node* pLeft;
	node* pRight;
	node(int x) {
		this->data = x;
		pLeft = pRight = NULL;
	}
};


void Add(tree&T,int u,int v,char c) {
	if (T == NULL) {
		T = new node(u);
		tree p = new node(v);
		if (c == 'L')T->pLeft = p;
		else T->pRight = p;
	}
	else {
		if (T->data == u) {
			tree p = new node(v);
			if (c == 'L')T->pLeft = p;
			else T->pRight = p;
		}
		else {
			if (T->pLeft != NULL)Add(T->pLeft, u, v, c);
			if (T->pRight != NULL)Add(T->pRight, u, v, c);
		}
	}
}

void Load(tree T) {
	if (T == NULL)return;
	stack<tree> S1, S2;
	S1.push(T);
	while (S1.size() || S2.size()) {
		while (S1.size()) {
			tree tmp = S1.top();
			S1.pop();
			cout << tmp->data << " ";
			if (tmp->pRight != NULL)S2.push(tmp->pRight);
			if (tmp->pLeft != NULL)S2.push(tmp->pLeft);
		}
		while (S2.size()) {
			tree tmp = S2.top();
			S2.pop();
			cout << tmp->data << " ";
			if (tmp->pLeft != NULL)S1.push(tmp->pLeft);
			if (tmp->pRight != NULL)S1.push(tmp->pRight);
		}
	}
}


int main(){
	faster();
	run() {
		int n; cin >> n;
		tree T = NULL;
		FOR(i, 0, n) {
			int u, v; char c;
			cin >> u >> v >> c;
			Add(T, u, v, c);
		}
		Load(T);
		cout << endl;
	}
}


//_______________________T_O_A_N________________________//



// https://code.ptit.edu.vn/student/question/DSA08021
// DI CHUY?N TRONG MA TR?N

#include <bits/stdc++.h>
using namespace std;

struct Data {
    int r, c;
    int cou;

    Data(int r, int c, int cou) {
        this->r = r;
        this->c = c;
        this->cou = cou;
    }
};

void testCase() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n + 1, vector<int>(m + 1));
    vector<vector<bool>> vs(n + 1, vector<bool>(m + 1, 0));
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            cin >> a[i][j];
        }
    }

    queue<Data> q;
    q.push(Data(1, 1, 0));
    while (!q.empty()) {
        Data x = q.front();
        q.pop();

        int i = x.r, j = x.c;
        if (i == n && j == m) {
            cout << x.cou;
            return;
        }

        if (i + a[i][j] <= n && vs[i + a[i][j]][j] == 0) {
            vs[i + a[i][j]][j] = 1;
            q.push(Data(i + a[i][j], j, x.cou + 1));
        }
        if (j + a[i][j] <= m && vs[i][j + a[i][j]] == 0) {
            vs[i][j + a[i][j]] = 1;
            q.push(Data(i, j + a[i][j], x.cou + 1));
        }
    }
    cout << -1;
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
// https://code.ptit.edu.vn/student/question/DSA11010
// CÂY NH? PHÂN HOÀN H?O

#include <bits/stdc++.h>
#define ll long long
#define II pair<int, int>
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

bool isPerfect;

void MakeNode(Node *root, int data, char c) {
    if (c == 'L')
        root->left = new Node(data);
    else
        root->right = new Node(data);
}

void Insert(Node *root, int x, int y, char c) {
    if (root == NULL)
        return;
    if (root->data == x)
        MakeNode(root, y, c);
    else {
        Insert(root->left, x, y, c);
        Insert(root->right, x, y, c);
    }
}

int CountLeaf(Node *root) {
    if (root == NULL)
        return 0;
    if (root->left == NULL && root->right == NULL)
        return 1;
    if (!(root->left != NULL && root->right != NULL)) {
        isPerfect = false;
        return 0;
    }
    return CountLeaf(root->left) + CountLeaf(root->right);
}

void TestCase() {
    isPerfect = true;
    int n; cin >> n;
    Node *root = NULL;
    while (n--) {
        int x, y; char c;
        cin >> x >> y >> c;
        if (root == NULL) {
            root = new Node(x);
        }
        Insert(root, x, y, c);
    }
    int cntLeft = CountLeaf(root->left), cntRight = CountLeaf(root->right);
    if (isPerfect && cntLeft == cntRight)
        cout << "Yes";
    else
        cout << "No";
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
// https://code.ptit.edu.vn/student/question/DSA11011
// CÂY NH? PHÂN Ð?

#include <bits/stdc++.h>
#define ll long long
#define II pair<int, int>
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

void MakeNode(Node *root, int data, char c) {
    if (c == 'L')
        root->left = new Node(data);
    else
        root->right = new Node(data);
}

void Insert(Node *root, int x, int y, char c) {
    if (root == NULL) return;
    if (root->data == x)
        MakeNode(root, y, c);
    else {
        Insert(root->left, x, y, c);
        Insert(root->right, x, y, c);
    }
}

bool IsFullBinTree(Node *root) {
    if (root == NULL) return true;
    if (root->left == NULL && root->right == NULL)
        return true;
    if (!(root->left != NULL && root->right != NULL))
        return false;
    return IsFullBinTree(root->left) && IsFullBinTree(root->right);
}

void TestCase() {
    int n; cin >> n;
    Node *root = NULL;
    while (n--) {
        int x, y; char c;
        cin >> x >> y >> c;
        if (root == NULL) {
            root = new Node(x);
        }
        Insert(root, x, y, c);
    }
    cout << IsFullBinTree(root);
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
// https://code.ptit.edu.vn/student/question/DSA11012
// CÂY NH? PHÂN B?NG NHAU

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

void MakeNode(Node *root, int data, char c) {
    if (c == 'L')
        root->left = new Node(data);
    else
        root->right = new Node(data);
}

void Insert(Node *root, int x, int y, char c) {
    if (root == NULL) return;
    if (root->data == x)
        MakeNode(root, y, c);
    else {
        Insert(root->left, x, y, c);
        Insert(root->right, x, y, c);
    }
}

bool IsEqual(Node *A, Node *B) {
    if (A == NULL && B == NULL)
        return true;
    if (A != NULL && B != NULL && A->data == B->data)
        return IsEqual(A->left, B->left) && IsEqual(A->right, B->right);
    return false;
}

void TestCase() {
    Node *a = NULL;
    int n; cin >> n;
    while (n--) {
        int x, y; char c;
        cin >> x >> y >> c;
        if (a == NULL) {
            a = new Node(x);
        }
        Insert(a, x, y, c);
    }
    Node *b = NULL;
    int m; cin >> m;
    while(m--) {
        int x, y; char c;
        cin >> x >> y >> c;
        if (b == NULL) {
            b = new Node(x);
        }
        Insert(b, x, y, c);
    }
    cout << IsEqual(a, b);
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
