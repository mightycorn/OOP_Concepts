#include <iostream>
#include <list>
using namespace std;

class YouTubeChannel {
public:
	string Name;
	string OwnerName;
	int SubscribersCount;
	list<string> PublishedVdeoTitles;

	YouTubeChannel(string name, string ownerName) {
		/*
		* This is a constructor. A constructor is a special
		* type of member that is invoked each time an object
		* is created. Meaning the method is called at the construction
		* of the object.
		* 
		* RULE 1: Constructors should have the same name as the class
		* RULE 2: Constructurs do not have a return type (note the name of
		*	      the constructor)
		* 
		* Constructor help in a way that you don't have to repeat lines of code
		* just to include data to an object. For example, in lines between 66 to 100 
		* where there were multiple instances of repeated filling out data.
		* With constructors this can be avoided. Notice 
		*/
		Name = name;
		OwnerName = ownerName;
	}

	void GetInfo() {
		/*
		* this is a method in the YouTubeChannel class
		*/
		cout << "Name: " << Name << endl;
		cout << "OwnerName: " << OwnerName << endl;
		cout << "SubscribersCount: " << SubscribersCount << endl;
		cout << "Videos: " << endl;
		for (string videoTitle : PublishedVdeoTitles) {
			cout << videoTitle << endl;
		}
	}
};

int main(void)
{
	/* 
	* this is how you create an object using a constructor.
	* you need to declare the attributes listed in the constructor,
	* without it there will be an error
	*/
	YouTubeChannel ytChannel("CodeBeauty", "Saldina");
	// .push_back is a function that adds a new element at the end
	// of a vector (i.e a container that represents an array). In
	// this case the vector is the PubliishedVideoTitles list
	ytChannel.PublishedVdeoTitles.push_back("C++ for beginners Video 1");
	ytChannel.PublishedVdeoTitles.push_back("HTML & CSS Video 1");
	ytChannel.PublishedVdeoTitles.push_back("C++ OOP Video 1");
	YouTubeChannel ytChannel2("AmySings", "Amy");

	// this is how you call a method in a class
	ytChannel.GetInfo();
	ytChannel2.GetInfo();

	/////////////////////////////////
	/* First object YouTubeChannel */
	/////////////////////////////////
	
	//YouTubeChannel ytChannel;
	//ytChannel.Name = "CodeBeauty";
	//ytChannel.OwnerName = "Saldina";
	//ytChannel.SubscribersCount = 1800;
	//ytChannel.PublishedVdeoTitles = { "C++ for beginners Video 1", "HTML & CSS Video 1", "C++ OOP Video 1" };

	//cout << "Name: " << ytChannel.Name << endl;
	//cout << "OwnerName: " << ytChannel.OwnerName << endl;
	//cout << "SubscribersCount: " << ytChannel.SubscribersCount << endl;
	//cout << "Videos: " << endl;
	//for (string videoTitle : ytChannel.PublishedVdeoTitles) {
	//	cout << videoTitle << endl;
	//}

	//////////////////////////////////
	/* Second object YouTubeChannel */
	//////////////////////////////////

	//YouTubeChannel ytChannel2;
	//ytChannel2.Name = "AmySings";
	//ytChannel2.OwnerName = "Amy";
	//ytChannel2.SubscribersCount = 2000;
	//ytChannel2.PublishedVdeoTitles = { "Johnny B - Cover", "Lorelei - Cover", "" };

	//cout << "Name: " << ytChannel2.Name << endl;
	//cout << "OwnerName: " << ytChannel2.OwnerName << endl;
	//cout << "SubscribersCount: " << ytChannel2.SubscribersCount << endl;
	//cout << "Videos: " << endl;
	//for (string videoTitle : ytChannel2.PublishedVdeoTitles) {
	//	cout << videoTitle << endl;
	//}

	system("pause > 0");
}