#include <iostream>
using namespace std;

void addMedia(vector<Media*>*vecM) {
  vecM->push_bacK(new Media());
  cout << 
}

int main() {
  vector<Media*> *vecM = new vector<Media*>;
  while (true) {
    cout << "Do you want to add, search, delete or quit? (ADD/SEARCH/DELETE/QUIT)" << endl;
    char input[80];
    cin.getline(input, sizeof(input));
    if (strcmp(input, "ADD") == 0) {
      addMedia(vecM);
      cin.ignore(1000, '\n');
    }
    else if (strcmp(input, "SEARCH") == 0) {
      searchMedia(vecM);
    }
    else if (strcmp(input, "DELETE") == 0) {
      deleteMedia(vecM);
      cin.ignore(1000, '\n');
    }
    else if (strcmp(input, "QUIT") == 0) {
      return false;
    }
    else {
      cout << "That is an invalid option." << endl;
    }
  }
}
