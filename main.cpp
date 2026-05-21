#include <bits/stdc++.h>
using namespace std;

#define speed_up_the_code ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define lp(i , n)       for(int i = 1 ; i <= n ; i++)
#define MP          make_pair
#define lpZ(i , n)       for(int i = 0 ; i < n ; i++)
#define pb      push_back
#define all(v) ((v).begin()) , ((v).end())
#define sz(v)   ( (int)(v.size()) )




void UnderPromiseOverDeliver()
{
    int n;
    cin >> n;

    // Augmented matrix
    vector<vector<double>> a(n, vector<double>(n + 1));

    // Input
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= n; j++) {
            cin >> a[i][j];
        }
    }

    // Forward Elimination
    for (int i = 0; i < n; i++) {

        // Make elements below pivot zero
        for (int k = i + 1; k < n; k++) {

            double factor = a[k][i] / a[i][i];

            for (int j = i; j <= n; j++) {
                a[k][j] -= factor * a[i][j];
            }
        }
    }

    // Back Substitution
    vector<double> x(n);

    for (int i = n - 1; i >= 0; i--) {

        x[i] = a[i][n];

        for (int j = i + 1; j < n; j++) {
            x[i] -= a[i][j] * x[j];
        }

        x[i] /= a[i][i];
    }

    // Output
    cout << fixed << setprecision(6);

    for (int i = 0; i < n; i++) {
        cout << "x" << i + 1 << " = " << x[i] << '\n';
    }
}


int main(){

	int t = 1;
	//cin >> t;
	while(t--)
	UnderPromiseOverDeliver();

	return 0;
}

/*
5 6
1 5 2 7 3
*/
