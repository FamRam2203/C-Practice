#include <iostream>
#include <string>
using namespace std;
int main() {
string word, mustHaveChars;
cout << "How many characters:";
getline(cin, mustHaveChars);
cout << "Must have characters:";
getline(cin, mustHaveChars);
cout << "Write your answer:";
getline(cin, word);
int count = 0;
for (int i = 0; i < word.length(); i++)
    {
        if (word[i] == mustHaveChars[0])
        {
            count++;
        }
    }
cout << "Your given word " << word << " has " << word.length() << " character and character " << mustHaveChars[0] << endl;
if (count > 0) {
cout << "The word contains the letter " << mustHaveChars[0] << endl;
} else {
cout << "The word does not contain the letter " << mustHaveChars[0] << endl;
}
return 0;
}
