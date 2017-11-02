#include <iostream>

using namespace std;

struct song{
string songTitle;
string Filename;
string genre;
int trackNum;
bool fav;

};

song TsuPod[100];

int main()
{

int trackNum;


    cout<<"1) Add new song"<<endl;
    cout<<"2) Delete a song"<<endl;
    cout<<"3) Show all songs"<<endl;
    cout<<"4) edit a song"<<endl;
    cout<<"5) favorite songs"<<endl;

    int choice;

    cin>> choice;
    switch (choice)
    {

        case 1: cout<<"add a song"<<endl;
                cout<<"What track number would you like to add?"<<endl;
                cin>> trackNum;
                TsuPod[trackNum].songTitle;

        break;

        case 2: cout<<"What song would you like to delete?"<<endl;
                cout<<"choose track number";
                cin>> trackNum;
                TsuPod[trackNum].songTitle==" ";


        break;
        case 3: cout<<"showing all songs"<<endl;


        break;
        case 4: cout<<"edit";

        break;
        case 5: cout<<" showing all favorite";

        break;

        default: cout<<"not valid";

    }


    return 0;
}
