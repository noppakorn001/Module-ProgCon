#include <iostream>
#include <string>
using namespace std;

//vowel = a e i o u A E I O U

int main() {

    string s;
    getline(cin,s);
    int vowels=0;
    int consonants=0;
    for (int i=0;i<s.length();i++) {
        if (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U') {
            vowels++;
        } else if (s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z') {
            consonants++;
        }

    }
    cout << "vowels = " << vowels << endl;
    cout << "consonants = " << consonants << endl;

}