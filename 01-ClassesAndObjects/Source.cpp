#include <iostream>
#include <list>
using namespace std;

class YouTubeChannel {
/*
* classes are private by default. using the
* public access modifier allows access outside
* of the class 
*/
public:
	string Name;
	string OwnerName;
	int SubscribersCount;
	// "list" is avaible is only avaiabe by including list (see line 2)
	list<string> PublishedVdeoTitles;
};

int main(void)
{
	// this how you create an object of a class
	YouTubeChannel ytChannel;
	ytChannel.Name = "CodeBeauty";
	ytChannel.OwnerName = "Saldina";
	ytChannel.SubscribersCount = 1800;
	ytChannel.PublishedVdeoTitles = { "C++ for beginners Video 1", "HTML & CSS Video 1", "C++ OOP Video 1" };
	
	cout << "Name: " << ytChannel.Name << endl;
	cout << "OwnerName: " << ytChannel.OwnerName << endl;
	cout << "SubscribersCount: " << ytChannel.SubscribersCount << endl;
	cout << "Videos: " << endl;
	// foreach loop example
	for (string videoTitle : ytChannel.PublishedVdeoTitles) {
		cout << videoTitle << endl;
	}

	system("pause > 0");
}