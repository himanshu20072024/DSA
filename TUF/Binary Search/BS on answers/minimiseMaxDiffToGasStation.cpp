#include<bits/stdc++.h>
class Solution {
public:
    long double minimiseMaxDistance(vector<int> &arr, int k) 
    {
        int n = arr.size();
        vector<int> NumGS(n-1, 0);
        for(int i = 1; i <= k; i++)
        {
            int maxIdx = -1;
            long double maxSecDiff = -1;
            for(int i = 0; i < n-1; i++)
            {
                long double diff = (arr[i+1] - arr[i]);
                long double secDiff = diff / (long double)(NumGS[i] + 1);
                if(secDiff > maxSecDiff)
                {
                    maxSecDiff = secDiff;
                    maxIdx = i;
                }
            }
            NumGS[maxIdx]++;
        }
        long double ans = -1;
        for(int i = 0; i < n-1; i++)
        {
            int difff = arr[i+1] - arr[i];
            long double seccDiff = (long double)difff / (NumGS[i] + 1);
            ans = max(ans, seccDiff);
        }
        return ans;
    }
};

// optimal than previous one using priority queue here 
double minimiseMaxDistance(vector<int> &arr, int k)
{
	int n = arr.size();
	priority_queue<pair<long double, int>> pq;
	vector<int>howMany(n-1, 0);
	for(int i = 0; i < n-1; i++)
	{
		pq.push({arr[i+1] - arr[i], i});

	}
	for(int gasStations = 1; gasStations <= k; gasStations++)
	{
		auto top = pq.top();
		pq.pop();
		int secIdx = top.second;
		howMany[secIdx]++;
		long double iniLen = arr[secIdx + 1] - arr[secIdx];
		long double currSecLen = iniLen / (howMany[secIdx] + 1);
		pq.push({currSecLen, secIdx});
	}
	return (double)pq.top().first;
}

