// TC : O(n+m)
// SC : O(n+m)

#include <bits/stdc++.h>
using namespace std;

vector<int> printUnion(int arr1[], int arr2[], int m, int n)
{
	int i = 0, j = 0;
    vector<int> res;

	while (i < m && j < n) {
		if (arr1[i] < arr2[j]){
            res.push_back(arr1[i]);
            i+=1;
        }

		else if (arr2[j] < arr1[i]){
            res.push_back(arr2[j]);
            j+=1;
        }

		else {
            res.push_back(arr1[i]);
            i+=1;
            j+=1;
		}
	}

	while (i < m){
        res.push_back(arr1[i]);
        i+=1;
    }

	while (j < n){
        res.push_back(arr2[j]);
        j+=1;
    }

    return res;
}

int main()
{
	int arr1[] = { 1, 2, 4, 5, 6 };
	int arr2[] = { 2, 3, 5, 7 };

	int m = sizeof(arr1) / sizeof(arr1[0]);
	int n = sizeof(arr2) / sizeof(arr2[0]);

	vector<int> Union = printUnion(arr1, arr2, m, n);

    for(int i=0;i<Union.size();i++){
        cout<<Union[i]<<" ";
    }

	return 0;
}
