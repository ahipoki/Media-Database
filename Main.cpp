#include <iostream>
using namespace std;

struct Media {
  char title[80];
}

void addMedia(vector<Media*>*vecM) {
  char addInput[80];
  vecM->push_bacK(new Media());
  cout << "Do you want to add a video game, music, or movie? (VIDEO GAME/MUSIC/MOVIE)" << endl;
  cin.getline(addInput, sizeof(addInput));
  if (strcmp(addInput, "VIDEO GAME") == 0) {
    //Add video game
  }
  else if (strcmp(addInput, "MUSIC") == 0) {
    //Add music
  }
  else if (strcmp(addInput, "MOVIE") == 0) {
    //Add movie
  }
  else {
    cout << "That's an invalid option" << endl;
  }
}

void searchMedia(vector<Media*>*vecM) {
  char searchInput[80];
  vecM->push_back(new Media());
  cout << "Do you want to search by title or year? (TITLE/YEAR)" << endl;
  cin.getline(searchInput, sizeof(searchInput));
  if (strcmp(searchInput, "TITLE") == 0) {
    //Search by title
    for (vector<Media*>::iterator i = vecM->begin(); i != vecM->end(); i++) {//For the vector of students, use an iterator to go from the beginning to the end
    cout << (*i)->title << ", " << (*i)->lastName << ", " << (*i)->id << ", " <<((float)(int)(((*i)->gpa)*100))/100 << endl;
    //Print out the first and last names, id, and gpa
  }
  }
  else if (strcmp(searchInput, "YEAR") == 0) {
    //Search by year
  }
  else {
    cout << "That's an invalid option" << endl;
  }
}

void deleteMedia(vector<Media*>*vecM) {
  char deleteInput[80];
  vecM->push_back(new Media());
  cout << "Do you want to delete by title or year? (TITLE/YEAR)" << endl;
  cin.getline(deleteInput, sizeof(deleteInput));
  if (strcmp(deleteInput, "TITLE") == 0) {
    //Delete by title
  }
  else if (strcmp(deleteInput, "YEAR") == 0) {
    //Delete by year
  }
  else {
    cout << "That's an invalid option" << endl;
  }
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
