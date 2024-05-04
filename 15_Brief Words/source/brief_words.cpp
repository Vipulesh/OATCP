#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// Function to generate all subsequences of length 1 to 4
void generateSubsequences(string word, vector<string>& subsequences) {
    for (int i = 0; i < word.length(); ++i) {
        for (int len = i+1; len <=i+ 4 && i + len <= word.length(); ++len) {
            subsequences.push_back(word.substr(i, len));
        }
    }
}

// Function to create short forms for the given dictionary
unordered_map<string, string> createShortForms(vector<string>& dictionary) {
    unordered_map<string, string> shortForms;
    for (string& word : dictionary) {
        if (word.length() <= 4) continue; // Skip if word length does not exceed 4
        vector<string> subsequences;
        generateSubsequences(word, subsequences);
        for (string& subseq : subsequences) {
            if (shortForms.find(subseq) == shortForms.end()) {
                if(subseq.length() == 4){
                    shortForms[subseq] = word;
                    break;
                }
                 // Use the first valid subsequence as the short form
            }
        }
    }
    return shortForms;
}

int main() {
    int n;
    cin >> n;
    vector<string> dictionary(n);
    for (int i = 0; i < n; ++i) {
        cin >> dictionary[i];
    }
    unordered_map<string, string> shortForms = createShortForms(dictionary);

    // Print the short forms
    for (auto& entry : shortForms) {
        cout << "Short form: " << entry.first << " -> Word: " << entry.second << endl;
    }

    return 0;
}
