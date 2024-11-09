#include <bits/stdc++.h>
using namespace std;

#define D 256
const int Q = 101;

void RobinKarp_PalindromePattern(string& text, string& pattern){
    int M = pattern.length(), N = text.length();
    long long hash = 1;
    int tHash = 0, pHash = 0;

    hash = (long long) pow(D, M - 1) % Q;

    for(int i = 0; i < M; i++){
        tHash = (D * tHash + text[i]) % Q;
        pHash = (D * pHash + pattern[i]) % Q;
    }

    for(int i = 0; i <= N - M; i++){
        if(pHash == tHash){
            string subStr = text.substr(i, M);
            string reversedSubStr = string(subStr.rbegin(), subStr.rend());

            if(subStr == reversedSubStr){
                cout << "Palindrome pattern match at index " << i << " -> " << text.substr(i, M) << "." << endl;
            }
        }

        if(i < N - M){
            tHash = (D * (tHash - text[i] * hash) + text[i + M]) % Q;
        }

        if(tHash < 0){
            tHash += Q;
        }
    }

    return;
}

int main(){
    cout << "Please enter the text : ";
    string text;
    cin >> text;
    cout << endl << endl;

    cout << "Please enter the palindrome to search for : ";
    string pattern;
    cin >> pattern;
    cout << endl << endl;

    RobinKarp_PalindromePattern(text, pattern);

    return 0;
}
