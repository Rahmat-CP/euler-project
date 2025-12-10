#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 982000;

void Main() {
	ll result = 0;
    for(ll i = 1; i <= N; i += 2)
		result += i * i;
	cout << result << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    // int t; cin >> t; while(t--) Main();
    Main();
    return 0;
}
/*
	contest name: src
	contest link: https://projecteuler.net
	problem letter: P000
	Time: 2025-12-10 16:53 UTC: +3:30

	Writer: EnAnsari
	Email: Rahmat2022a@gmail.com
	website: enansari.github.io

	Don't let the fear of losing be greater than the excitement of winning. ~Robert Kiyosaki

	this code created by rcph (https://github.com/EnAnsari/cph)
*/