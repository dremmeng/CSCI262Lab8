/*
 * main.cpp
 *
 * starter code for the Binary Tree lab, CSCI 262
 *
 * last modified: 3/10/2020
 */

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cstring>

using namespace std;

class node {
public:
    string data;
    node* left;
    node* right;
};

// TODO: put your recursive functions here (or prototypes for them)
void readtree(ifstream file)
{
    node root;
    string str;
    getline(file, str);
    string child = str.substr(str.find(' '));
    string word = str.substr(0, str.find(' '));
    root.data = word;
    if (child.find('R') == string::npos)

}

// This program is simple enough to do the user interface in main()
int main() {
    string input_filename;

    cout << "What is the file you wish to read?" << endl;
    cin >> input_filename;

    ifstream fin(input_filename);
    if (!fin) {
	cout << "Error opening \"" << input_filename << "\" for reading." << endl;
	return -1;
    }

    readtree(fin);
    
    fin.close();

    // TODO: call your recursive function to print out the tree

    return 0;
}

