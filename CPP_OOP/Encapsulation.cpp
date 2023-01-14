#include <iostream>
#include<list>
using namespace std;

class YoutubeChannel {
	/* Class */
private: /* This should not be accessible and ideally , the way to change this is by using Methods...*/
	string Name; //We can create getter and setter method if we want to access or change the Name or Owner Name.
	string OwnerName;
	int subscribers;
	list<string> PublishedVideos;
public:
	YoutubeChannel(string name, string ownername) { //Constructor when objected is created
		Name = name;
		OwnerName = ownername;
		subscribers = 0;
	}

	void get_Info() { //Class Method
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

int main() 
{
	YoutubeChannel channel("ShivaYT","Shiva"); /* Object of type class*/
	channel.Subscribe();
	channel.Subscribe();
	channel.Subscribe();
	channel.Unsubscribe();
	channel.PublishVideo("HeyRama");
	cout << "Name before change"<<channel.GetName()<<endl;
	cout << "Changing the Name of the Channel Now" << endl;
	channel.SetName("RajeshYT");
	channel.get_Info(); //Class Method is invoked
	system("pause>0");
}