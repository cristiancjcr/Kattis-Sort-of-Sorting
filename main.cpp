#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comparNume(const string &a, const string &b) {
    // comparam primele doua litere ale fiecarui nume de familie
    if (a[0] == b[0]) {
        return a[1] < b[1]; // daca primele litere sunt egale, comparam a doua litera
    } else {
        return a[0] < b[0]; // altfel, comparam prima litera
    }
}

// sortarea numelor de familie
void sortez_numele_de_familie(vector<string> &nume_de_familie) {
    stable_sort(nume_de_familie.begin(), nume_de_familie.end(), comparNume); // mentin ordinea relativa a elementelor
}

int main() {
    while (true) {
        int nr;
        cin >> nr;
        if (nr == 0)
            break;

        vector<string> nume_de_familie(nr);  // vectorul de nume de familie de dim. 'nr'
        for (int i = 0; i < nr; ++i) {
            cin >> nume_de_familie[i];
        }

        sortez_numele_de_familie(nume_de_familie);

        for (const auto &nume : nume_de_familie) {
            cout << nume << endl;
        }

        cout << endl;
    }

    return 0;
}
