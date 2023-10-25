#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	
	while(t--) {
	    int n;
	    cin >> n;
	    
	    int menuDays = 0;
        int today = 1; // 1 represents Monday

        while (n > 0) {
        if (today == 2) { // Dracula's favorite menu on Tuesday
            menuDays++;
        }

        today = (today % 7) + 1; // Increment the day of the week (1 to 7)
        n--;
    }
    cout << menuDays << endl;
	}
	return 0;
}
