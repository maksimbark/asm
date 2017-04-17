#include <bits/stdc++.h>

using namespace std;

int main() {
    double megaSum;
    int m, l;
    int now;
    //прогон
    for (int i = 6000; i <= 1050000; i += 1000) {
        vector<int> arr(i);
        for (m = 0; m < i; m++) {
            now = arr[m];
        }
        arr.clear();
        cerr << "ok " << i << " elements" << endl;
    }

    cerr << "meow";

    //min == 6000
    //max == 1 050 000
    //step == 1000
    //прямой обход

    ofstream cout("outLeftToRight.txt");
    for (int i = 6000; i <= 1050000; i += 1000) {
        vector<int> arr(i);
        megaSum = 0;
        for (l = 0; l < 15; l++) {
            auto time = clock();
            for (m = 0; m < i; m++) {
                now = arr[m];
            }
            megaSum += double((clock() - time)) / double(i);
        }
        megaSum = megaSum / 15.0;
        cout << i << " " << megaSum << endl;
        arr.clear();

    }
    cout.close();
    //прогон2
    for (int i = 6000; i <= 1050000; i += 1000) {
        vector<int> arr(i);
        for (m = 0; m < i; m++) {
            now = arr[m];
        }
        arr.clear();
        cerr << "ok2 " << i << " elements" << endl;
    }

    cerr << "meow2";

    cout.open("outRightToLeft.txt");

    for (int i = 6000; i <= 1050000; i += 1000) {
        vector<int> arr(i);
        megaSum = 0;
        for (l = 0; l < 15; l++) {
            auto time = clock();
            for (m = i - 1; m >= 0; m--) {
                now = arr[m];
            }
            megaSum += double((clock() - time)) / double(i);
        }
        megaSum = megaSum / 15.0;
        cout << i << " " << megaSum << endl;
        arr.clear();

    }
    cout.close();
    //прогон3
    for (int i = 6000; i <= 1050000; i += 1000) {
        vector<int> arr(i);
        for (m = 0; m < i; m++) {
            now = arr[m];
        }
        arr.clear();
        cerr << "ok2 " << i << " elements" << endl;
    }

    cerr << "meow3";
    cout.open("outRandom.txt");

    for (int i = 6000; i <= 1050000; i += 1000) {
        vector<int> arr(i);
        megaSum = 0;
        for (l = 0; l < 15; l++) {
            auto time = clock();

                for (m = 0; m < i / 2; m++) {
                    now = arr[m];
                    now = arr[i - 1 - m];
                }
                now = arr[i / 2];
            megaSum += double((clock() - time)) / double(i);
            }
        megaSum = megaSum / 15.0;

        cout << i << " " << megaSum << endl;
        arr.clear();

    }

    cerr << endl << endl << "bye!";

    return 0;
}