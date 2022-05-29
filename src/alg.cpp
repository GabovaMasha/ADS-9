// Copyright 2021 NNTU-CS
#include  <string>
#include  <iostream>
#include  <fstream>
#include  <locale>
#include  <cstdlib>
#include  "bst.h"


BST<std::string> makeTree(const char* filename) {
BST<std::string> wordTree;
std::ifstream file(filename);
if (!file) {
std::cout << "File error!" << std::endl;
return  wordTree;
}
std::string word = "";
while(!file.eof()) {
char simv = file.get();
if (simv >= 65 && simv <= 90) {
word += tolower(simv);
} else if (simv >= 97 && simv <= 122) {
word += simv;
} else {
wordTree.add(word);
word = "";
}
}
file.close();
return wordTree;
}
