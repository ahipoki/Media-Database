#include <iostream>
#include <cstring>
#include <vector>
#include "VideoGame.h"
#include "Music.h"
#include "Movie.h"
#include "Media.h"
using namespace std;

void addVG(vector<Media*>*mListM);

void addMU(vector<Media*>*mListM);

void addMO(vector<Media*>*mListM);

void deleteMedia(vector<Media*>*mListM) 
{//Delete Method
  char deleteInput[80];
  //User input for year or title
  bool stillDeleting = true;
  //Still deleting
  while (stillDeleting == true) {//While the user is still deleting
    std::cout << "Do you want to delete by title or year? (TITLE/YEAR)" << std::endl;
    //Ask user if they want to delete by title or year
    cin.getline(deleteInput, 80);
    //Take in user input
    for (int i = 0; i < strlen(deleteInput); i++) 
      {//Make the input lower case
      deleteInput[i] = tolower(deleteInput[i]);
    }
    vector<Media*>::iterator mListIt;
    //Iterator
    if(strcmp(deleteInput, "title") == 0) 
    {//If they want to delete by title
      char titleInput[80];
      //Input for title
      std::cout << "What is the title?" << std::endl;
      //Ask for the title
      cin.getline(titleInput, 80);
      //Take in user input
      for (mListIt = mListM->begin(); mListIt != mListM->end();) 
      {//For the entries in the database
	if (strcmp((*mListIt)->getTitle(), titleInput) == 0) 
	{//If they input equals at least 1 entry in the database
	  int mediaType = (*mListIt)->getType();
	  //Get the type of media
	  if (mediaType == 1) 
	  {//If it's a video game
	    std::cout << (*mListIt)->getTitle() << ", " << (*mListIt)->getYear() << ", " << ((VideoGame*)(*mListIt))->getPublisher() << ", " << ((VideoGame*)(*mListIt))->getRating() << std::endl;
	    //Print out the video game
	  }
	  else if (mediaType == 2) 
	    {//Else if it's a movie
	    std::cout << (*mListIt)->getTitle() << ", " << (*mListIt)->getYear() << ", " << ((Movie*)(*mListIt))->getDirector() << ", " << ((Movie*)(*mListIt))->getDuration() << ", " << ((Movie*)(*mListIt))->getRating() << std::endl;
	    //Print out the movie
	  }
	  else if (mediaType == 3) 
	    {//Else if it's music
	    std::cout << (*mListIt)->getTitle() << ", " << (*mListIt)->getYear() << ", " << ((Music*)(*mListIt))->getArtist() << ", " << ((Music*)(*mListIt))->getDuration() << ", " << ((Music*)(*mListIt))->getPublisher() << std::endl;
	    //Print out the music
	  }
	  std::cout << "Are you sure you want to delete this? (y/n)" << std::endl;
	  //Confirm if they want to delete it
	  char confirmDel;
	  std::cin >> confirmDel;
	  //Take in user input
	  if (confirmDel == 'y') 
	  {//If they say yes
	    delete *mListIt;
	    mListIt = mListM->erase(mListIt);
	    //Delete it
	    stillDeleting = false;
	    //Not deleting anymore
	  }
	  else if (confirmDel == 'n')
	  {//Else if they say no
	    std::cout << "You cancelled the deletion" << std::endl;
	    //Tell them they cancelled the deletion
	    ++mListIt;
	    stillDeleting = true;
	    //Still deleting
	  }
	  else
	  {//Any other input
	    std::cout << "That's an invalid option" << std::endl;
	    //Tell them that's an invalid option
	    stillDeleting = true;
	    //Still deleting
	  }
	}
      }
    }
    else if (strcmp(deleteInput, "year") == 0)
    {//Else if they want to delete by year
      int yearInput = 0;
      std::cout << "What is the year?" << std::endl;
      //Ask the user what year it is
      std::cin >> yearInput;
      //Take in user input
      for (mListIt = mListM->begin(); mListIt != mListM->end();) 
      {//For the database
	if ((*mListIt)->getYear() == yearInput) 
	{//If the input equals an entry in the database
	  int mediaType = (*mListIt)->getType();
	  //Get the type of media
	  if (mediaType == 1) 
	  {//If it's a video game
	    std::cout << (*mListIt)->getTitle() << ", " << (*mListIt)->getYear() << ", " << ((VideoGame*)(*mListIt))->getPublisher() << ", " << ((VideoGame*)(*mListIt))->getRating() << std::endl;
	    //Print out the video game
	  }
	  else if (mediaType == 2) 
	  {//Else if it's a movie
	    std::cout << (*mListIt)->getTitle() << ", " << (*mListIt)->getYear() << ", " << ((Movie*)(*mListIt))->getDirector() << ", " << ((Movie*)(*mListIt))->getDuration() << ", " << ((Movie*)(*mListIt))->getRating() << std::endl;
	    //Print out the movie
	  }
	  else if (mediaType == 3) 
	  {//Else if it's music
	    std::cout << (*mListIt)->getTitle() << ", " << (*mListIt)->getYear() << ", " << ((Music*)(*mListIt))->getArtist() << ", " << ((Music*)(*mListIt))->getDuration() << ", " << ((Music*)(*mListIt))->getPublisher() << std::endl;
	    //Print out the music
	  }
	  std::cout << "Are you sure you want to delete this? (y/n)" << std::endl;
	  //Confirm if they want to delete it
	  char confirmDel;
	  std::cin >> confirmDel;
	  //Take in their input
	  if (confirmDel == 'y') 
	  {//If they say yes
	    delete *mListIt;
	    mListIt = mListM->erase(mListIt);
	    //Delete it
	    stillDeleting = false;
	    //Not deleting anymore
	  }
	  else if (confirmDel == 'n')
	  {//Else if they say no
	    std::cout << "You cancelled the deletion" << std::endl;
	    //Tell them that they cancelled the deletion
	    ++mListIt;
	    stillDeleting = true;
	    //Still deleting
	  }
	  else
	  {//Any other input
	    std::cout << "That's an invalid option" << std::endl;
	    //Tell them that's an invalid option
	    stillDeleting = true;
	    //Still deleting
	  }
	}
      }
    }
    else
    {//Any other input
      std::cout << "That's an invalid option" << std::endl;
      //Tell them that's an invalid option
    }
  }
}

void search(vector <Media*>* mListM) 
{//Search method
  char input[80];
  std::cout << "Do you want to search by title or year?" << std::endl;
  //Ask if they want to search by title or year
  cin.getline(input, 80);
  //Take in their input
  vector<Media*>::iterator mListIt;
  if (strcmp(input, "title") == 0) 
  {//If they want to search by title
    char titleInput[80];
    std::cout << "What is the title?" << std::endl;
    //Ask them for the title
    cin.getline(titleInput, 80);
    //Take in their input
    for (mListIt = mListM->begin(); mListIt != mListM->end(); ++mListIt) 
    {//For the database
      if (strcmp((*mListIt)->getTitle(), titleInput) == 0) 
	{//If the input equals an entry in the database
	int mediaType = (*mListIt)->getType();
	if (mediaType == 1) 
	{
	  std::cout << (*mListIt)->getTitle() << ", " << (*mListIt)->getYear() << ", " << ((VideoGame*)(*mListIt))->getPublisher() << ", " << ((VideoGame*)(*mListIt))->getRating() << std::endl;
	}
	else if (mediaType == 2) 
	{
	  std::cout << (*mListIt)->getTitle() << ", " << (*mListIt)->getYear() << ", " << ((Movie*)(*mListIt))->getDirector() << ", " << ((Movie*)(*mListIt))->getDuration() << ", " << ((Movie*)(*mListIt))->getRating() << std::endl;
	}
	else if (mediaType == 3) 
	{
	  std::cout << (*mListIt)->getTitle() << ", " << (*mListIt)->getYear() << ", " << ((Music*)(*mListIt))->getArtist() << ", " << ((Music*)(*mListIt))->getDuration() << ", " << ((Music*)(*mListIt))->getPublisher() << std::endl;
	}
      }
    }
  }
  else if (strcmp(input, "year") == 0)
  {
    int yearInput = 0;
    std::cout << "What is the year?" << std::endl;
    std::cin >> yearInput;
    for (mListIt = mListM->begin(); mListIt != mListM->end(); ++mListIt) 
    {
      if ((*mListIt)->getYear() == yearInput) 
      {
	int mediaType = (*mListIt)->getType();
	if (mediaType == 1) 
	{
	  std::cout << (*mListIt)->getTitle() << ", " << (*mListIt)->getYear() << ", " << ((VideoGame*)(*mListIt))->getPublisher() << ", " << ((VideoGame*)(*mListIt))->getRating() << std::endl;
	}
	else if (mediaType == 2) 
	{
	  std::cout << (*mListIt)->getTitle() << ", " << (*mListIt)->getYear() << ", " << ((Movie*)(*mListIt))->getDirector() << ", " << ((Movie*)(*mListIt))->getDuration() << ", " << ((Movie*)(*mListIt))->getRating() << std::endl;
	}
	else if (mediaType == 3) 
	{
	  std::cout << (*mListIt)->getTitle() << ", " << (*mListIt)->getYear() << ", " << ((Music*)(*mListIt))->getArtist() << ", " << ((Music*)(*mListIt))->getDuration() << ", " << ((Music*)(*mListIt))->getPublisher() << std::endl;
	}
      }
    }
  }
  else {
    std::cout << "That's an invalid option" << std::endl;
  }
}

void addVG(vector<Media*>*mListM) 
{
  char tempTitle[80];
  int tempYear = 0;
  char tempPublisher[80];
  char tempRating = 0;
  std::cout << "What is the title?" << std::endl;
  cin.getline(tempTitle, 80);
  std::cout << "What is the year?" << std::endl;
  cin >> tempYear;
  cin.clear();
  cin.ignore(999, '\n');
  std::cout << "Who is the publisher?" << std::endl;
  cin.getline(tempPublisher, 80);
  std::cout << "What is the rating?" << std::endl;
  std::cin >> tempRating;
  //cout << tempTitle << tempYear << tempPublisher << tempRating << endl;
  mListM->push_back(new VideoGame(tempTitle, tempYear, tempPublisher, tempRating));
}

void addMU(vector<Media*>*mListM) 
{
  char tempTitle[80];
  int tempYear = 0;
  char tempArtist[80];
  float tempDuration = 0.0;
  char tempPublisher[80];
  std::cout << "What is the title?" << std::endl;
  cin.getline(tempTitle, 80);
  std::cout << "What is the year?" << std::endl;
  std::cin >> tempYear;
  cin.clear();
  cin.ignore(999, '\n');
  std::cout << "Who is the artist?" << std::endl;
  cin.getline(tempArtist, 80);
  std::cout << "What is the duration?" << std::endl;
  std::cin >> tempDuration;
  std::cout << "Who is the publisher?" << std::endl;
  cin.getline(tempPublisher, 80);
  mListM->push_back(new Music(tempTitle, tempYear, tempArtist, tempDuration, tempPublisher));
}

void addMO(vector<Media*>*mListM) 
{
  char tempTitle[80];
  int tempYear = 0;
  char tempDirector[80];
  float tempDuration = 0.0;
  int tempRating = 0;
  std::cout << "What is the title?" << std::endl;
  cin.getline(tempTitle, 80);
  std::cout << "What is the year?" << std::endl;
  cin >> tempYear;
  cin.clear();
  cin.ignore(999, '\n');
  std::cout << "Who is the director?" << std::endl;
  cin.getline(tempDirector, 80);
  std::cout << "What is the duration?" << std::endl;
  cin >> tempDuration;
  std::cout << "What is the rating?" << std::endl;
  cin >> tempRating;
  mListM->push_back(new Movie(tempTitle, tempYear, tempDirector, tempDuration, tempRating));
}

int main() 
{
  char input[80];
  char addInput[80];
  bool running = true;
  vector<Media*>mList;
  vector<Media*>*mListM = &mList;
  while (running == true) 
  {
    std::cout << "Do you want to add, search, delete or quit? (ADD/SEARCH/DELETE/QUIT)" << std::endl;
    cin.getline(input, 80);
    if (strcmp(input, "add") == 0) 
    {
      std::cout << "Do you want to add a video game, a movie, or music?" << std::endl;
      cin.getline(addInput, 80);
      for (int i = 0; i < strlen(addInput); i++) 
      {
      	addInput[i] = tolower(addInput[i]);
      }
      if (strcmp(addInput, "video game") == 0) 
      {
	addVG(mListM);
	cin.clear();
	cin.ignore(999, '\n');
      }
      else if (strcmp(addInput, "movie") == 0) 
      {
	addMO(mListM);
	cin.clear();
	cin.ignore(999, '\n');
      }
      else if (strcmp(addInput, "music") == 0) 
      {
	addMU(mListM);
	cin.clear();
	cin.ignore(999, '\n');
      }
      else 
      {
	std::cout << "That's an invalid option" << std::endl;
      }
    }
    else if (strcmp(input, "search") == 0) 
    {
      search(mListM);
      cin.clear();
      cin.ignore(999, '\n');
    }
    else if (strcmp(input, "delete") == 0) 
    {
      deleteMedia(mListM);
      cin.clear();
      cin.ignore(999, '\n');
    }
    else if (strcmp(input, "quit") == 0)
    {
      running = false;
    }
    else {
      std::cout << "That's an invalid option" << std::endl;
    }
  }
}
