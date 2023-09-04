#include <iostream>
#include <iomanip>
using namespace std;

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
