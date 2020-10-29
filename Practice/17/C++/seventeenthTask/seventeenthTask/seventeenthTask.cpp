#include <iostream>
using namespace std;
const int numbers = 37;
const int k = 12;

int main() {
    int count[numbers];
    int last_round[numbers];
    for (int i = 0; i < numbers; i++)
        count[i] = last_round[i] = 0;
    
    int input;
    int round_now = 0;
    int blacks = 0, reds = 0;
    while (++round_now) {
        cin >> input;
    	if (input < 0)
    	    break;
    	    
        count[input]++;
        last_round[input] = round_now;
            
        int highest_number = -1;
    	for (int i = 0; i < numbers; i++)
    	    if (count[i] > highest_number)
    	        highest_number = count[i];
    	
    	for (int i = 0; i < numbers; i++)
            if (count[i] == highest_number)
                cout << i << " ";
    	cout << endl;
    
    	for (int i = 0; i < numbers; i++)
    	    if (last_round[i] == 0 or (round_now - last_round[i] > k))
                cout << i << " ";
    	cout << endl;
            
    	if (input != 0) {
            if (input <= 10 or (input > 18 and input <= 28))
                if (input % 2 == 1) ++reds;
                else ++blacks;
            else
                if (input % 2 == 0) ++reds;
                else ++blacks;
    	}

        cout << reds << " " << blacks << endl;
        cout << endl;
    }
}