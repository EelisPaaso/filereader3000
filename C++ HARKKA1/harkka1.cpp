#include <iostream>
#include <fstream>
using namespace std;

int readfile(string filename, string word);

int main()
{
	string filename, word; // Luodaan muuttuja jolle varastoida sana ja tiedoston nimi t�ss� tapauksessa;
    cout << "this is my very amazing first cpp program" << endl;
	cout << "this program can read a file in the same directory as the program, then check if a word chosen by user shows up in said file" << endl;
    cout << "if there is no file in the same directory then make one and put some words into it with some spaces inbetween words!" << endl;
    cout << "note: took me way too long to make" << endl;
    cout << "" << endl;

	cout << "Enter a filename: ";
		cin >> filename;
	cout << "Enter a word: ";
		cin >> word; // Luetaan käyttäjän inputit, tässä tapauksessa word ja filename (cin = lukee inputin)

	cout << "User chose the following word: " << word << endl; // printataan käyttäjän antama inputti

	readfile(filename, word); // kutsutaan funktio readfile

	system("pause");
	return 0;
}

int readfile(string filename, string word)
{
    string fileword;
    ifstream readfiles(filename);

    if (!readfiles) {
        cout << "But the program wasn't able to open the file." << endl;
        return 0;
    }

    while (readfiles >> fileword) {
        if (fileword == word) {
            cout << "Which was found inside of file :)" << endl;
            return 0; // stop once found
        }
    }

    cout << "Which was not found in file :(" << endl;
    return 0;
}
