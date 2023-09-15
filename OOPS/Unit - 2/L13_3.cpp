// // #include <bits/stdc++.h>
// // using namespace std;

// // class MusicLibrary
// // {
// // private:
// //     map<string, vector<string>> mp;

// // public:
// //     void addSong(const string &songName, const string &artistName)
// //     {
// //         mp[artistName].push_back(songName);
// //     }

// //     void displaySortedSongs()
// //     {
// //         for (auto &entry : mp)
// //         {
// //             sort(entry.second.begin(), entry.second.end());
// //             for (const string &song : entry.second)
// //             {
// //                 cout << song << " - " << entry.first << endl;
// //             }
// //         }
// //     }
// // };

// // int main()
// // {
// //     int N;
// //     cin >> N;
// //     cin.ignore();

// //     MusicLibrary library;

// //     for (int i = 0; i < N; ++i)
// //     {
// //         string songName, artistName;
// //         getline(cin, songName);
// //         getline(cin, artistName);
// //         library.addSong(songName, artistName);
// //     }

// //     library.displaySortedSongs();

// //     return 0;
// // }

// #include <bits/stdc++.h>
// using namespace std;

// class MusicLibrary
// {
// private:
//     struct Song
//     {
//         string name;
//         string artist;

//         bool operator<(const Song &other) const
//         {
//             return artist < other.artist;
//         }
//     };

//     vector<Song> songs;

// public:
//     void addSong(const string &songName, const string &artistName)
//     {
//         Song song;
//         song.name = songName;
//         song.artist = artistName;
//         songs.push_back(song);
//     }

//     void displaySortedSongs()
//     {
//         sort(songs.begin(), songs.end());
//         for (const Song &song : songs)
//         {
//             cout << song.name << " - " << song.artist << endl;
//         }
//     }
// };

// int main()
// {
//     int N;
//     cin >> N;
//     cin.ignore();

//     MusicLibrary library;

//     for (int i = 0; i < N; ++i)
//     {
//         string songName, artistName;
//         getline(cin, songName);
//         getline(cin, artistName);
//         library.addSong(songName, artistName);
//     }

//     library.displaySortedSongs();

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

class MusicLibrary
{
public:
    MusicLibrary() {}

    void addSong(const string &song, const string &artist)
    {
        songs.push_back(make_pair(artist, song));
    }

    void displaySortedLibrary()
    {
        sort(songs.begin(), songs.end());
        for (const auto &entry : songs)
        {
            cout << entry.second << " - " << entry.first << endl;
        }
    }

private:
    vector<pair<string, string>> songs;
};

int main()
{
    int N;
    cin >> N;

    MusicLibrary library;

    cin.ignore();

    for (int i = 0; i < N; i++)
    {
        string song, artist;
        getline(cin, song);
        getline(cin, artist);
        library.addSong(song, artist);
    }

    library.displaySortedLibrary();

    return 0;
}
