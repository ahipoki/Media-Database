#include <iostream>
#include <cstring>
#include <vector>
#include <iterator>
using namespace std;

struct Media {
  char title[80];
  int year;
  char publisher[80];
  float rating;
  char artist[80];
  float duration;
  char director[80];
};

int addMedia(vector<Media*>*vecM) {
  char addInput[80];
  char titleInput[80];
  int yearInput;
  char publisherInput[80];
  float ratingInput;
  char artistInput[80];
  float durationInput;
  char directorInput[80];
  vecM->push_bacK(new Media());
  cout << "Do you want to add a video game, music, or movie? (VIDEO GAME/MUSIC/MOVIE)" << endl;
  cin.getline(addInput, sizeof(addInput));
  if (strcmp(addInput, "VIDEO GAME") == 0) {
    cout<<"What is the title?"<<endl;
    cin.getline(titleInput, sizeof(titleInput));
    cout<<"What is the year?"<<endl;
    cin>>yearInput;
    cout<<"Who is the publisher?"<<endl;
    cin.getline(publisherInput, sizeof(publisherInput));
    cout<<"What is the rating?"<<endl;
    cin>>ratingInput;
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
  VideoGame game;
  char searchInput[80];
  char typeInput[80];
  vecM->push_back(new Media());
  cout << "Do you want to search by title or year? (TITLE/YEAR)" << endl;
  cin.getline(searchInput, sizeof(searchInput));
  if (strcmp(searchInput, "TITLE") == 0) {//Search by title
    cout << "Enter the title of the media you wish to search for" << endl;
    cin.getline(typeInput, sizeof(typeInput));
    for (vector<Media*>::iterator i = vecM->begin(); i != vecM->end(); i++) {//For the vector of students, use an iterator to go from the beginning to the end
      if (typeInput == (*i)->title) {
        cout << (*i)->title << ", " << (*i)->year << ", " << (*i)->publisher << ", " << rating << endl;
        //Print out the first and last names, id, and gpa
      }
    }
  }
  else if (strcmp(searchInput, "YEAR") == 0) {//Search by year
    for (vector<Media*>::iterator i = vecM->begin(); i != vecM->end(); i++) {//For the vector of students, use an iterator to go from the beginning to the end
    cout << (*i)->title << ", " << (*i)->artist << ", " << (*i)->year << ", " << duration << (*i)->publisher << endl;
    //Print out the first and last names, id, and gpa
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
