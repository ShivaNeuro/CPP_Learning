#include <iostream>
#include<list>
using namespace std;

class YoutubeChannel {
	/* Class */
public:
	int subscribers;
	list<string> PublishedVideos;
protected: /* Protected is set so that Base class can access the property in the derived class.*/
	string Name; //We can create getter and setter method if we want to access or change the Name or Owner Name.
	string OwnerName;	
public:
	YoutubeChannel(string name, string ownername) { //Constructor when objected is created
		Name = name;
		OwnerName = ownername;
		subscribers = 0;
	}

	void get_Info() { //Class Method
		cout << endl;
		cout << "Channel Name" << Name << endl;
		cout << "Owner Name" << OwnerName << endl;
		cout << "Subscribers" << subscribers << endl;
		cout << "Videos" << endl;
		for (string video : PublishedVideos) {
			cout << video << endl;
		}
		cout << endl;

	}
	void Subscribe() {//Method to add subscribers
		subscribers++;
	}
	void Unsubscribe() {//Method to remove subscribers
		if(subscribers >0)
			subscribers--;
	}
	void PublishVideo(string title) {//Method to publish videos
		PublishedVideos.push_back(title);
	}
	string GetName() {
		return Name;
	}
	void SetName(string name_change) {
		Name = name_change;
	}
};

//Creating another type of youtube channel, inheriting is easy instead of redefining properties and methods...

class CookingYoutubeChannel :public YoutubeChannel{ // Syntax : Derived Class -> Base Class with Colon + Access Modifier - Public in main class will be public in derived class 
public:	
	CookingYoutubeChannel(string name, string ownername):YoutubeChannel(name,ownername) { //Instead of defining constructor , invoking constuctor of Main class .Syntax Colon :Constructor(args)
	
	}
	void Practice() { //Method specific to derived class only..
		cout <<OwnerName<< " is practicing cooking , learning and experimenting with spices on channel   "<<Name << endl; //Derived class accessing the property of the bass class.
	}
};

int main() 
{
	CookingYoutubeChannel channel("Cooks","RamRaj");
	CookingYoutubeChannel channel2("Cookie", "John");
	channel.Practice();
	channel2.Practice();
	channel.get_Info(); //Base class methods accessible to derived class
	channel2.get_Info();
	system("pause>0");
}
