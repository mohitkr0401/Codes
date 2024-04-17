#include<iostream>
#include<ctime>
using namespace std;

const int MAX = 20;
int n, x[MAX], s[MAX], f[MAX];

void Greedy(int s[], int f[]) {
    int j = 1, k = 1;
    x[k] = 1;
    for (int i = 2; i <= n; i++) {
        if (s[i] >= f[j]) {
            k++;
            x[k] = i;
            j = i;
        }
    }
    cout << "Activity Selection is :";
    for (int i = 1; i <= k; i++) {
        cout << "A" << x[i] << " ";
    }
}

double measureTime(int s[], int f[]) {
    double start, end, t;
    start = clock();
    Greedy(s, f);
    end = clock();
    t = (double)(end - start) / CLOCKS_PER_SEC;
    return t;
}

int main() {
    cout << "Enter No. of Activities : ";
    cin >> n;

    cout << "Enter Activity Start Times:\n";
    for (int i = 1; i <= n; i++) {
        cout << "Activity " << i << ": ";
        cin >> s[i];
    }

    cout << "Enter Activity Finish Times:\n";
    for (int i = 1; i <= n; i++) {
        cout << "Activity " << i << ": ";
        cin >> f[i];
    }

    double sorting_time = measureTime(s, f);

    cout << "\nTime taken by program is " << sorting_time << " sec" << endl;

    return 0;
}
