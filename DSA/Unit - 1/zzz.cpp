#include <iostream>
#include <iomanip>
using namespace std;

class Song
{
private:
    string artist;
    string title;
    string album;
    int play_count = 0;
    const double pay_rate = 0.001;
    double money_earned = 0;

public:
    // Constructor
    Song(string artist, string title, string album)
    {
        this->artist = artist;
        this->title = title;
        this->album = album;
    }

    // Getter functions
    string GetArtist()
    {
        return artist;
    }

    string GetTitle()
    {
        return title;
    }

    string GetAlbum()
    {
        return album;
    }

    int GetPlayCount()
    {
        return play_count;
    }

    double GetPayRate()
    {
        return pay_rate;
    }

    double GetMoneyEarned()
    {
        return money_earned;
    }

    // Setter functions
    void SetArtist(string artist)
    {
        this->artist = artist;
    }

    void SetTitle(string title)
    {
        this->title = title;
    }

    void SetAlbum(string album)
    {
        this->album = album;
    }

int main()
{

    Song my_song("Led Zeppelin", "Ten Years Gone", "Physical Graffiti");
    cout << my_song.GetArtist() << endl;
    cout << my_song.GetTitle() << endl;
    cout << my_song.GetAlbum() << endl;
    cout << my_song.GetPlayCount() << endl;
    cout << my_song.GetPayRate() << endl;
    cout << my_song.GetMoneyEarned() << endl;
    my_song.SetArtist("Michael Jackson");
    my_song.SetTitle("Beat It");
    my_song.SetAlbum("Thriller");
    my_song.Play(1000000);
    my_song.Stats();

    return 0;
}
