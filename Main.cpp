#include <iostream>
#include <cstring>
#include <vector>
#include "VideoGame.h"
#include "Music.h"
#include "Movie.h"
#include "Media.h"
using namespace std;

//void deleteMedia(vector<Media*>*mListM);

//void searchMedia(vector<Media*>*mListM);

void addVG(vector<Media*>*mListM);

void addMU(vector<Media*>*mListM);

void addMO(vector<Media*>*mListM);

void addMedia(vector<Media*>*mListM) {
  char typeInput[80];
  cout << "Choose the type of media to add. (Videogames/Movies/Music)" << endl;
  while (true) {
    cin.get(typeInput, 80);
    cin.clear();
    cin.ignore(999, '\n');

    for (int i = 0; i < strlen(typeInput); i++) {
      typeInput[i] = tolower(typeInput[i]);
    }
    if (strcmp(typeInput, "videogames") == 0) {
      break;
    }
    else if (strcmp(typeInput, "movies") == 0) {
      break;
    }
    else if (strcmp(typeInput, "music") == 0) {
      break;
    }
    else {
      cout << "That's an invalid option" << endl;
    }
  }
  if (strcmp(typeInput, "videogames") == 0) {
    addVG(mListM);
  }
  else if (strcmp(typeInput, "movies") == 0) {
    addMO(mListM);
  }
  else {
    addMU(mListM);
  }
}

void deleteMedia(vector<Media*>*mListM) {
  char deleteInput[80] = "";
  std::cout << "Do you want to delete by title or year? (TITLE/YEAR)" << std::endl; 
  while (true) {
    cin.getline(deleteInput, 80);
    cin.clear();
    cin.ignore(999, '\n');
    for (int i = 0; i < strlen(deleteInput); i++) {
      deleteInput[i] = tolower(deleteInput[i]);
    }
    if (strcmp(deleteInput, "title") == 0) {
      break;
    }
    else if (strcmp(deleteInput, "year") == 0) {
      break;
    }
    else {
      std::cout << "That's an invalid option" << std::endl;
    }
    vector<Media*>::iterator mListIt;
    if(strcmp(deleteInput, "title") == 0) {
      char titleInput[80] = "";
      std::cout << "What is the title?" << std::endl;
      cin.getline(titleInput, 80);
      cin.clear();
      cin.ignore(999, '\n');
      for (mListIt = mListM->begin(); mListIt != mListM->end();) {
	if (strcmp((*mListIt)->getTitle(), titleInput) == 0) {
	  int mediaType = (*mListIt)->getType();
	  if (mediaType == 1) {
	    std::cout << (*mListIt)->getTitle() << ", " << (*mListIt)->getYear() << ", " << ((VideoGame*)(*mListIt))->getPublisher() << ", " << ((VideoGame*)(*mListIt))->getRating() << std::endl;
	  }
	  else if (mediaType == 2) {
	    std::cout << (*mListIt)->getTitle() << ", " << (*mListIt)->getYear() << ", " << ((Movie*)(*mListIt))->getDirector() << ", " << ((Movie*)(*mListIt))->getDuration() << ", " << ((Movie*)(*mListIt))->getRating() << std::endl;
	  }
	  else if (mediaType == 3) {
	    std::cout << (*mListIt)->getTitle() << ", " << (*mListIt)->getYear() << ", " << ((Music*)(*mListIt))->getArtist() << ", " << ((Music*)(*mListIt))->getDuration() << ", " << ((Music*)(*mListIt))->getPublisher() << std::endl;
	  }
	  std::cout << "Are you sure you want to delete this? (y/n)" << std::endl;
	  char confirmDel = '\n';
	  std::cin >> confirmDel;
	  cin.clear();
	  cin.ignore(999, '\n');
	  if (confirmDel == 'y') {
	    delete *mListIt;
	    mListIt = mListM->erase(mListIt);
	    break;
	  }
	  else {
	    std::cout << "You cancelled the deletion" << std::endl;
	    ++mListIt;
	  }
	}
      }
    }
    else {
      int yearInput = 0;
      std::cout << "What is the year?" << std::endl;
      cin >> yearInput;
      cin.clear();
      cin.ignore(999, '\n');
      for (mListIt = mListM->begin(); mListIt != mListM->end();) {
      if ((*mListIt)->getYear() == yearInput) {
        int mediaType = (*mListIt)->getType();
        if (mediaType == 1) {
	  std::cout << (*mListIt)->getTitle() << ", " << (*mListIt)->getYear() << ", " << ((VideoGame*)(*mListIt))->getPublisher() << ", " << ((VideoGame*)(*mListIt))->getRating() << std::endl;
        }
        else if (mediaType == 2) {
	  std::cout << (*mListIt)->getTitle() << ", " << (*mListIt)->getYear() << ", " << ((Movie*)(*mListIt))->getDirector() << ", " << ((Movie*)(*mListIt))->getDuration() << ", " << ((Movie*)(*mListIt))->getRating() << std::endl;
        }
	else if (mediaType == 3) {
	  std::cout << (*mListIt)->getTitle() << ", " << (*mListIt)->getYear() << ", " << ((Music*)(*mListIt))->getArtist() << ", " << ((Music*)(*mListIt))->getDuration() << ", " << ((Music*)(*mListIt))->getPublisher() << std::endl;
	}
	cout << "Are you sure you want to delete this? (y/n)" << std::endl;
	char confirmDel = '\n';
	cin >> confirmDel;
        cin.clear();
        cin.ignore(999, '\n');
	if (confirmDel == 'y') {
	  delete *mListIt;
	  mListIt = mListM->erase(mListIt);
	  break;
	}
	else 
	{
	  std::cout << "You cancelled the deletion" << std::endl;
	  ++mListIt;
	}
      }
    }
  }
  }
}

void search(vector <Media*>* mListM) {
  char input[80] = "";
  std::cout << "Do you want to search by title or year?" << std::endl;
  while (true) {
    cin.getline(input, 80);
    cin.clear();
    cin.ignore(999, '\n');
    for (int i = 0; i < strlen(input); i++) {
      input[i] = tolower(input[i]);
    }
    if (strcmp(input, "title") == 0) {
      break;
    }
    else if (strcmp(input, "year") == 0) {
      break;
    }
    else {
      std::cout << "Enter title or year" << std::endl;
    }
  }
    vector<Media*>::iterator mListIt;
    if (strcmp(input, "title") == 0) {
      char titleInput[80];
      std::cout << "What is the title?" << std::endl;
      cin.getline(titleInput, 80);
      cin.clear();
      cin.ignore(999, '\n');
      for (mListIt = mListM->begin(); mListIt != mListM->end(); ++mListIt) {
	if (strcmp((*mListIt)->getTitle(), titleInput) == 0) {
	  int mediaType = (*mListIt)->getType();
	  if (mediaType == 1) {
	    cout << (*mListIt)->getTitle() << ", " << (*mListIt)->getYear() << ", " << ((VideoGame*)(*mListIt))->getPublisher() << ", " << ((VideoGame*)(*mListIt))->getRating() << std::endl;
	  }
	  else if (mediaType == 2) {
	    cout << (*mListIt)->getTitle() << ", " << (*mListIt)->getYear() << ", " << ((Movie*)(*mListIt))->getDirector() << ", " << ((Movie*)(*mListIt))->getDuration() << ", " << ((Movie*)(*mListIt))->getRating() << std::endl;
	  }
	  else if (mediaType == 3) {
	    std::cout << (*mListIt)->getTitle() << ", " << (*mListIt)->getYear() << ", " << ((Music*)(*mListIt))->getArtist() << ", " << ((Music*)(*mListIt))->getDuration() << ", " << ((Music*)(*mListIt))->getPublisher() << std::endl;
	  }
	}
      }
    }
    else {
      int yearInput = 0;
      std::cout << "What is the year?" << std::endl;
      cin >> yearInput;
      cin.clear();
      cin.ignore(999, '\n');
      for (mListIt = mListM->begin(); mListIt != mListM->end(); ++mListIt) {
	if ((*mListIt)->getYear() == yearInput) {
	  int mediaType = (*mListIt)->getType();
	  if (mediaType == 1) {
	    std::cout << (*mListIt)->getTitle() << ", " << (*mListIt)->getYear() << ", " << ((VideoGame*)(*mListIt))->getPublisher() << ", " << ((VideoGame*)(*mListIt))->getRating() << std::endl;
	  }
	  else if (mediaType == 2) {
	    std::cout << (*mListIt)->getTitle() << ", " << (*mListIt)->getYear() << ", " << ((Movie*)(*mListIt))->getDirector() << ", " << ((Movie*)(*mListIt))->getDuration() << ", " << ((Movie*)(*mListIt))->getRating() << std::endl;
	  }
	  else if (mediaType == 3) {
	    std::cout << (*mListIt)->getTitle() << ", " << (*mListIt)->getYear() << ", " << ((Music*)(*mListIt))->getArtist() << ", " << ((Music*)(*mListIt))->getDuration() << ", " << ((Music*)(*mListIt))->getPublisher() << std::endl;
	  }			      						     
	}
	      }
	    }
	  }
//}
void addVG(vector<Media*>*mListM) {
  //Title (char), Year (int), Publisher (char), Rating (int)
  char tempTitle[80] = "";
  int tempYear = 0;
  char tempPublisher[80] = "";
  char tempRating = 0;
  cout << "What is the title?" << endl;
  cin.getline(tempTitle, 80);
  cin.clear();
  cin.ignore(999, '\n');
  cout << "What is the year?" << endl;
  cin >> tempYear;
  cin.clear();
  cin.ignore(999, '\n');
  cout << "Who is the publisher?" << endl;
  cin.getline(tempPublisher, 80);
  cin.clear();
  cin.ignore(999, '\n');
  cout << "What is the rating?" << endl;
  cin >> tempRating;
  cin.clear();
  cin.ignore(999, '\n');
  mListM->push_back(new VideoGame(tempTitle, tempYear, tempPublisher, tempRating));
}

void addMU(vector<Media*>*mListM) {
  char tempTitle[80] = "";
  int tempYear = 0;
  char tempArtist[80] = "";
  float tempDuration = 0.0;
  char tempPublisher[80] = "";
  cout << "What is the title?" << endl;
  cin.getline(tempTitle, 80);
  cin.clear();
  cin.ignore(999, '\n');
  cout << "What is the year?" << endl;
  cin >> tempYear;
  cin.clear();
  cin.ignore(999, '\n');
  cout << "Who is the artist?" << endl;
  cin.getline(tempArtist, 80);
  cin.clear();
  cin.ignore(999, '\n');
  cout << "What is the duration?" << endl;
  cin >> tempDuration;
  cin.clear();
  cin.ignore(999, '\n');
  mListM->push_back(new Music(tempTitle, tempYear, tempArtist, tempDuration, tempPublisher));
}

void addMO(vector<Media*>*mListM) {
  char tempTitle[80] = "";
  int tempYear = 0;
  char tempDirector[80] = "";
  float tempDuration = 0.0;
  int tempRating = 0;
  cout << "What is the title?" << endl;
  cin.getline(tempTitle, 80);
  cin.clear();
  cin.ignore(999, '\n');
  cout << "What is the year?" << endl;
  cin >> tempYear;
  cin.clear();
  cin.ignore(999, '\n');
  cout << "Who is the director?" << endl;
  cin.getline(tempDirector, 80);
  cin.clear();
  cin.ignore(999, '\n');
  cout << "What is the duration?" << endl;
  cin >> tempDuration;
  cin.clear();
  cin.ignore(999, '\n');
  cout << "What is the rating?" << endl;
  cin >> tempRating;
  cin.clear();
  cin.ignore(999, '\n');
  mListM->push_back(new Movie(tempTitle, tempYear, tempDirector, tempDuration, tempRating));
}

//void quit() {
//exit(0);
//}

int main() {
  char input[80];
  char addInput[80];
  bool running = true;
  vector<Media*>mList;
  vector<Media*>*mListM = &mList;
  while (running == true) {
    std::cout << "Do you want to add, search, delete or quit? (ADD/SEARCH/DELETE/QUIT)" << std::endl;
    while (true) {
      cin.getline(input, 80);
      cin.clear();
      cin.ignore(999, '\n');
      for (int i = 0; i < strlen(input); i++) {
	input[i] = tolower(input[i]);
      }
      if (strcmp(input, "add") == 0) {
	break;
      }
      else if (strcmp(input, "search") == 0) {
	break;
      }
      else if (strcmp(input, "delete") == 0) {
	break;
      }
      else if (strcmp(input, "quit") == 0) {
	break;
      }
      else {
	cout << "That's not a valid option" << endl;
      }
    }
    if (strcmp(input, "add") == 0) {
      std::cout << "Do you want to add a video game, a movie, or music?" << std::endl;
      cin.getline(addInput, 80);
      for (int i = 0; i < strlen(addInput); i++) {
	addInput[i] = tolower(addInput[i]);
      }
      if (strcmp(addInput, "video game") == 0) {
	addVG(mListM);
      }
      else if (strcmp(addInput, "movie") == 0) {
	addMO(mListM);
      }
      else if (strcmp(addInput, "music") == 0) {
	addMU(mListM);
      }
      else {
	std::cout << "That's an invalid option" << std::endl;
      }
    }
    else if (strcmp(input, "search") == 0) {
      search(mListM);
    }
    else if (strcmp(input, "delete") == 0) {
      delete(mListM);
    }
    else {
      running = false;
    }
  }
}
