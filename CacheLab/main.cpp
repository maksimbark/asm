#include <bits/stdc++.h>

using namespace std;

int main() {
    double megaSum;
    int m, l;
    int now;
    //прогон

    for (int i = 6000; i <= 1050000; i += 10000) {
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
    for (int i = 6000; i <= 1050000; i += 10000) {
        register int *arr = (int *)malloc(i * sizeof(int));

        vector<int> way(i);
        for (int k = 0; k < i; k++) {
            way[k] = k;
        }
        //random_shuffle(way.begin(), way.end());
        megaSum = 0;
        for (l = 0; l < 3; l++) {
            auto time = clock();
            for (m = 0; m < i; m++) {
                now = arr[way[m]];
                now++;
                cerr << now << " " << i << endl;
            }
            megaSum += double((clock() - time)) / double(i);
        }
        megaSum = megaSum / 3.0;
        cout << i << " " << megaSum << endl;
        way.clear();
        free(arr);

    }
    cout.close();
    //прогон2
    for (int i = 6000; i <= 1050000; i += 10000) {

        register int *arr = (int *)malloc(i * sizeof(int));
        for (m = 0; m < i; m++) {
            now = arr[m];
        }
       free(arr);
        cerr << "ok2 " << i << " elements" << endl;
    }

    cerr << "meow2";

    cout.open("outRightToLeft.txt");

    for (int i = 6000; i <= 1050000; i += 10000) {
        register int *arr = (int *)malloc(i * sizeof(int));
        vector<int> way(i);
        for (int k = 0; k < i; k++) {
            way[k] = k;
        }
        reverse(way.begin(), way.end());
        megaSum = 0;
        for (l = 0; l < 3; l++) {
            auto time = clock();
            for (m = i - 1; m >= 0; m--) {
                now = arr[way[m]];
                now++;
                cerr << now << " " << i << endl;
            }
            megaSum += double((clock() - time)) / double(i);
        }
        megaSum = megaSum / 3.0;
        cout << i << " " << megaSum << endl;
        free(arr);
        way.clear();

    }
    cout.close();
    //прогон3
    for (int i = 6000; i <= 1050000; i += 10000) {
        register int *arr = (int *)malloc(i * sizeof(int));
        for (m = 0; m < i; m++) {
            now = arr[m];

        }
      free(arr);
        cerr << "ok2 " << i << " elements" << endl;
    }

    cerr << "meow3";
    cout.open("outRandom.txt");

    for (int i = 6000; i <= 1050000; i += 10000) {
        register int *arr = (int *)malloc(i * sizeof(int));
        vector<int> way(i);
        for (int k = 0; k < i; k++) {
            way[k] = k;
        }
        random_shuffle(way.begin(), way.end());
        megaSum = 0;
        for (l = 0; l < 3; l++) {
            auto time = clock();
            for (m = 0; m < i; m++) {
                now = arr[way[m]];
                now++;
                cerr << now << " " << i << endl;
            }
            megaSum += double((clock() - time)) / double(i);
        }
        megaSum = megaSum / 3.0;

        cout << i << " " << megaSum << endl;
        free(arr);
        way.clear();

    }

    cerr << endl << endl << "bye!";

    return 0;
}