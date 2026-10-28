#include<iostream>
#include<string>
using namespace std;

class node
{
    public:
    string song;
    string artist;
    node *next;
    node *prev;

    node(string s, string a)
    {
        song=s;
        artist=a;
        next=NULL;
        prev=NULL;
    }
};

class linkedlist
{
    private:
    node *head;
    node *current;

    public:

    linkedlist()
    {
        head=NULL;
        current=NULL;
    }

    void addSong(string s, string a)
    {
        node *p=new node(s,a);

        if(head==NULL)
        {
            head=p;
            current=head;
        }
        else
        {
            node *q=head;

            while(q->next!=NULL)
            {
                q=q->next;
            }

            q->next=p;
            p->prev=q;
        }

        cout<<"Song added successfully"<<endl;
    }

    void deleteSong(string s)
    {
        if(head==NULL)
        {
            cout<<"Playlist is empty"<<endl;
            return;
        }

        node *p;
        node *q=head;

        if(head->song==s)
        {
            p=head;
            head=head->next;

            if(head!=NULL)
                head->prev=NULL;

            if(current==p)
                current=head;

            delete p;

            cout<<"Song deleted successfully"<<endl;
            return;
        }

        while(q->next!=NULL)
        {
            if(q->next->song==s)
            {
                p=q->next;

                q->next=p->next;

                if(p->next!=NULL)
                    p->next->prev=q;

                if(current==p)
                    current=q;

                delete p;

                cout<<"Song deleted successfully"<<endl;
                return;
            }

            q=q->next;
        }

        cout<<"Song not found"<<endl;
    }

    void displayPlaylist()
    {
        if(head==NULL)
        {
            cout<<"Playlist is empty"<<endl;
            return;
        }

        node *q=head;

        cout<<"\nPlaylist:\n";

        while(q!=NULL)
        {
            cout<<q->song<<" - "<<q->artist<<endl;
            q=q->next;
        }
    }

    void displayReverse()
    {
        if(head==NULL)
        {
            cout<<"Playlist is empty"<<endl;
            return;
        }

        node *q=head;

        while(q->next!=NULL)
        {
            q=q->next;
        }

        cout<<"\nReverse Playlist:\n";

        while(q!=NULL)
        {
            cout<<q->song<<" - "<<q->artist<<endl;
            q=q->prev;
        }
    }

    void playCurrent()
    {
        if(current==NULL)
        {
            cout<<"No song is currently selected"<<endl;
            return;
        }

        cout<<"Playing: "<<current->song<<" - "
            <<current->artist<<endl;
    }

    void playNext()
    {
        if(current==NULL)
        {
            cout<<"Playlist is empty"<<endl;
            return;
        }

        if(current->next==NULL)
        {
            cout<<"This is the last song"<<endl;
            return;
        }

        current=current->next;

        cout<<"Playing Next: "<<current->song<<" - "
            <<current->artist<<endl;
    }

    void playPrevious()
    {
        if(current==NULL)
        {
            cout<<"Playlist is empty"<<endl;
            return;
        }

        if(current->prev==NULL)
        {
            cout<<"This is the first song"<<endl;
            return;
        }

        current=current->prev;

        cout<<"Playing Previous: "<<current->song<<" - "
            <<current->artist<<endl;
    }

    void playComplete()
    {
        if(head==NULL)
        {
            cout<<"Playlist is empty"<<endl;
            return;
        }

        node *q=head;

        cout<<"\nPlaying Complete Playlist:\n";

        while(q!=NULL)
        {
            cout<<"Playing: "<<q->song<<" - "
                <<q->artist<<endl;

            q=q->next;
        }

        current=head;
    }

    void repeatAll()
    {
        if(head==NULL)
        {
            cout<<"Playlist is empty"<<endl;
            return;
        }

        int n;

        cout<<"Enter number of repetitions: ";
        cin>>n;

        for(int i=1;i<=n;i++)
        {
            node *q=head;

            cout<<"\nRepetition "<<i<<":\n";

            while(q!=NULL)
            {
                cout<<"Playing: "<<q->song<<" - "
                    <<q->artist<<endl;

                q=q->next;
            }
        }

        current=head;
    }

    void showCurrent()
    {
        if(current==NULL)
        {
            cout<<"No current song"<<endl;
            return;
        }

        cout<<"Current Song: "<<current->song
            <<" - "<<current->artist<<endl;
    }
};

int main()
{
    linkedlist list;

    int choice;
    string song;
    string artist;

    do
    {
        cout<<"\n===== MUSIC PLAYLIST MANAGER ====="<<endl;
        cout<<"1. Add Song"<<endl;
        cout<<"2. Delete Song"<<endl;
        cout<<"3. Display Playlist"<<endl;
        cout<<"4. Display Playlist in Reverse"<<endl;
        cout<<"5. Play Current Song"<<endl;
        cout<<"6. Play Next Song"<<endl;
        cout<<"7. Play Previous Song"<<endl;
        cout<<"8. Play Complete Playlist"<<endl;
        cout<<"9. Repeat All"<<endl;
        cout<<"10. Show Current Song"<<endl;
        cout<<"11. Exit"<<endl;

        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:
                cout<<"Enter Song Title: ";
                cin.ignore();
                getline(cin,song);

                cout<<"Enter Artist Name: ";
                getline(cin,artist);

                list.addSong(song,artist);
                break;

            case 2:
                cout<<"Enter Song Title to delete: ";
                cin.ignore();
                getline(cin,song);

                list.deleteSong(song);
                break;

            case 3:
                list.displayPlaylist();
                break;

            case 4:
                list.displayReverse();
                break;

            case 5:
                list.playCurrent();
                break;

            case 6:
                list.playNext();
                break;

            case 7:
                list.playPrevious();
                break;

            case 8:
                list.playComplete();
                break;

            case 9:
                list.repeatAll();
                break;

            case 10:
                list.showCurrent();
                break;

            case 11:
                cout<<"Exiting program..."<<endl;
                break;

            default:
                cout<<"Invalid choice"<<endl;
        }

    }while(choice!=11);

    return 0;
}


/*
OUTPUT

===== MUSIC PLAYLIST MANAGER =====
1. Add Song
2. Delete Song
3. Display Playlist
4. Display Playlist in Reverse
5. Play Current Song
6. Play Next Song
7. Play Previous Song
8. Play Complete Playlist
9. Repeat All
10. Show Current Song
11. Exit
Enter your choice: 1
Enter Song Title: Give Me Some Sunshine
Enter Artist Name: Suraj Jagan
Song added successfully

===== MUSIC PLAYLIST MANAGER =====
1. Add Song
2. Delete Song
3. Display Playlist
4. Display Playlist in Reverse
5. Play Current Song
6. Play Next Song
7. Play Previous Song
8. Play Complete Playlist
9. Repeat All
10. Show Current Song
11. Exit
Enter your choice: 1
Enter Song Title: Kesariya
Enter Artist Name: Arijit Singh
Song added successfully

===== MUSIC PLAYLIST MANAGER =====
1. Add Song
2. Delete Song
3. Display Playlist
4. Display Playlist in Reverse
5. Play Current Song
6. Play Next Song
7. Play Previous Song
8. Play Complete Playlist
9. Repeat All
10. Show Current Song
11. Exit
Enter your choice: 1
Enter Song Title: Perfect
Enter Artist Name: Ed Sheeren
Song added successfully

===== MUSIC PLAYLIST MANAGER =====
1. Add Song
2. Delete Song
3. Display Playlist
4. Display Playlist in Reverse
5. Play Current Song
6. Play Next Song
7. Play Previous Song
8. Play Complete Playlist
9. Repeat All
10. Show Current Song
11. Exit
Enter your choice: 3

Playlist:
Give Me Some Sunshine - Suraj Jagan
Kesariya - Arijit Singh
Perfect - Ed Sheeren

===== MUSIC PLAYLIST MANAGER =====
1. Add Song
2. Delete Song
3. Display Playlist
4. Display Playlist in Reverse
5. Play Current Song
6. Play Next Song
7. Play Previous Song
8. Play Complete Playlist
9. Repeat All
10. Show Current Song
11. Exit
Enter your choice: 10
Current Song: Give Me Some Sunshine - Suraj Jagan

===== MUSIC PLAYLIST MANAGER =====
1. Add Song
2. Delete Song
3. Display Playlist
4. Display Playlist in Reverse
5. Play Current Song
6. Play Next Song
7. Play Previous Song
8. Play Complete Playlist
9. Repeat All
10. Show Current Song
11. Exit
Enter your choice: 6
Playing Next: Kesariya - Arijit Singh

===== MUSIC PLAYLIST MANAGER =====
1. Add Song
2. Delete Song
3. Display Playlist
4. Display Playlist in Reverse
5. Play Current Song
6. Play Next Song
7. Play Previous Song
8. Play Complete Playlist
9. Repeat All
10. Show Current Song
11. Exit
Enter your choice: 7
Playing Previous: Give Me Some Sunshine - Suraj Jagan

===== MUSIC PLAYLIST MANAGER =====
1. Add Song
2. Delete Song
3. Display Playlist
4. Display Playlist in Reverse
5. Play Current Song
6. Play Next Song
7. Play Previous Song
8. Play Complete Playlist
9. Repeat All
10. Show Current Song
11. Exit
Enter your choice: 2
Enter Song Title to delete: Kesariya
Song deleted successfully

===== MUSIC PLAYLIST MANAGER =====
1. Add Song
2. Delete Song
3. Display Playlist
4. Display Playlist in Reverse
5. Play Current Song
6. Play Next Song
7. Play Previous Song
8. Play Complete Playlist
9. Repeat All
10. Show Current Song
11. Exit
Enter your choice:
*/

