#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int P[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>P[i];
	        
	    }
	    int goodDays = 0;

    for (int i = 0; i < n; ++i) {
        int minPrice = P[i];
        bool isGoodDay = true;

        for (int j = i - 1; j >= max(0, i - 5); --j) {
            minPrice = min(minPrice, P[j]);

            if (P[i] >= P[j]) {
                isGoodDay = false;
                break;
            }
        }

        if (isGoodDay) {
            ++goodDays;
        }
    }

    cout<<goodDays<<endl;
	}
	return 0;
}
