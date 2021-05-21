#include <iostream>
#include <list>
using namespace std;

class YouTubeChannel {
private:
	/*
	* These methods are suppose to be accessed through methods
	* rather than through direct access. Doing so is bad practice
	* and breaks the rules of encapsulation which is why the
	* access modifier for this is private. Refer to line 93, this
	* should not be allowed under encapsulation.
	* 
	* Encapsulation is an OOP fundamental that describes the idea of
	* bundling data and methods in one unit. Encapsulation
	* is used to hide internal representation, or state, of an object.
	* Getters and setters methods are used respectivley to retrieve 
	* and set the attributes. Refer to line 48 to 67.
	*/
	string Name;
	string OwnerName;
	int SubscribersCount;
	list<string> PublishedVideoTitles;

public:
	YouTubeChannel(string name, string ownerName) {
		Name = name;
		OwnerName = ownerName;
		SubscribersCount = 0;
	}

	void GetInfo() {
		cout << "Name: " << Name << endl;
		cout << "OwnerName: " << OwnerName << endl;
		cout << "SubscribersCount: " << SubscribersCount << endl;
		cout << "Videos: " << endl;
		for (string videoTitle : PublishedVideoTitles) {
			cout << videoTitle << endl;
		}
	}

	/*
	* Name setter
	*/
	void setName(string name) {
		Name = name;
	}

	/*
	* Name getter
	*/
	string getName() { 
		return Name;
	}

	/*
	* OwnerName setter
	*/
	void setOwnerName(string ownerName) {
		OwnerName = ownerName;
	}
	
	/*
	* OwnerName getter
	*/
	string getOwnerName() {
		return OwnerName;
	}

	void Subscribe() {
		SubscribersCount++;
	}

	void Unsubscribe() {
		if(SubscribersCount > 0)
			SubscribersCount--;
	}

	void PublishVideo(string title) {
		PublishedVideoTitles.push_back(title);
	}
};

int main(void)
{
	YouTubeChannel ytChannel("CodeBeauty", "Saldina");
	ytChannel.PublishVideo("C++ for beginners Video 1");
	ytChannel.PublishVideo("HTML & CSS Video 1");
	ytChannel.PublishVideo("C++ OOP Video 1");

	/*
	* this should not be allowed because of encapsulation
	*/
	// ytChannel.SubscribersCount = 1000000;

	ytChannel.Unsubscribe();
	ytChannel.GetInfo();

	system("pause > 0");
}