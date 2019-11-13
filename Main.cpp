#include <iostream>
#include <cstring>
#include <vector>
#include <iterator>

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
  std::cout << "Do you want to add a video game, music, or movie? (VIDEO GAME/MUSIC/MOVIE)" << std::endl;
  std::cin.getline(addInput, sizeof(addInput));
  if (strcmp(addInput, "VIDEO GAME") == 0) {
    std::cout << "What is the title?" << std::endl;
    std::cin.getline(titleInput, sizeof(titleInput));
    std::cout << "What is the year?" << std::endl;
    std::cin>>yearInput;
    std::cout << "Who is the publisher?" << std::endl;
    std::cin.getline(publisherInput, sizeof(publisherInput));
    std::cout << "What is the rating?" << std::endl;
    std::cin>>ratingInput;
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
  std::cout << "Do you want to search by title or year? (TITLE/YEAR)" << std::endl;
  std::cin.getline(searchInput, sizeof(searchInput));
  if (strcmp(searchInput, "TITLE") == 0) {//Search by title
    std::cout << "Enter the title of the media you wish to search for" << std::endl;
    std::cin.getline(typeInput, sizeof(typeInput));
    for (vector<Media*>::iterator i = vecM->begin(); i != vecM->end(); i++) {//For the vector of students, use an iterator to go from the beginning to the end
      if (typeInput == (*i)->title) {
        std::cout << (*i)->title << ", " << (*i)->year << ", " << (*i)->publisher << ", " << rating << std::endl;
        //Print out the first and last names, id, and gpa
      }
    }
  }
  else if (strcmp(searchInput, "YEAR") == 0) {//Search by year
    for (vector<Media*>::iterator i = vecM->begin(); i != vecM->end(); i++) {//For the vector of students, use an iterator to go from the beginning to the end
    std::cout << (*i)->title << ", " << (*i)->artist << ", " << (*i)->year << ", " << duration << (*i)->publisher << std::endl;
    //Print out the first and last names, id, and gpa
  }
  else {
    std::cout << "That's an invalid option" << std::endl;
  }
}

void deleteMedia(vector<Media*>*vecM) {
  char deleteInput[80];
  vecM->push_back(new Media());
  std::cout << "Do you want to delete by title or year? (TITLE/YEAR)" << std::endl;
  std::cin.getline(deleteInput, sizeof(deleteInput));
  if (strcmp(deleteInput, "TITLE") == 0) {
    //Delete by title
  }
  else if (strcmp(deleteInput, "YEAR") == 0) {
    //Delete by year
  }
  else {
    std::cout << "That's an invalid option" << std::endl;
  }
}

int main() {
  vector<Media*> *vecM = new vector<Media*>;
  while (true) {
    std::cout << "Do you want to add, search, delete or quit? (ADD/SEARCH/DELETE/QUIT)" << std::endl;
    char input[80];
    std::cin.getline(input, sizeof(input));
    if (strcmp(input, "ADD") == 0) {
      addMedia(vecM);
      std::cin.ignore(1000, '\n');
    }
    else if (strcmp(input, "SEARCH") == 0) {
      searchMedia(vecM);
    }
    else if (strcmp(input, "DELETE") == 0) {
      deleteMedia(vecM);
      std::cin.ignore(1000, '\n');
    }
    else if (strcmp(input, "QUIT") == 0) {
      return false;
    }
    else {
      std::cout << "That is an invalid option." << std::endl;
    }
  }
}
