#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Movie {
    int start, end;
};

bool compareByEndTime(const Movie& a, const Movie& b) {
    return a.end < b.end;
}

int main() {
    int n;
    cin >> n;

    vector<Movie> movies(n);

    for (int i = 0; i < n; i++) {
        cin >> movies[i].start >> movies[i].end;
    }

    // Sort the movies by ending times
    sort(movies.begin(), movies.end(), compareByEndTime);

    int maxMovies = 0;
    int lastEndTime = 0;

    for (int i = 0; i < n; i++) {
        if (movies[i].start >= lastEndTime) {
            maxMovies++;
            lastEndTime = movies[i].end;
        }
    }

    cout << maxMovies << endl;

    return 0;
}
