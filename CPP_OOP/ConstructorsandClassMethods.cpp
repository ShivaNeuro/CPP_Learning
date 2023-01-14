#include <iostream>
#include<list>
using namespace std;

class YoutubeChannel {
	/* Class */
public:
	string Name;
	string OwnerName;
	int subscribers;
	list<string> PublishedVideos;

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
};

int main() 
{
	YoutubeChannel channel("ShivaYT","Shiva"); /* Object of type class*/
	YoutubeChannel channel2("RamYT", "Ram"); /* Object of type class*/
	channel.get_Info(); //Class Method is invoked
	channel2.get_Info();//Class Method is invoked
	system("pause>0");
}