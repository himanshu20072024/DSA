int ninjaTraining(int n, vector<vector<int>> &points)
{
    vector<int> prev(4, 0);

    prev[0] = max(points[0][1], points[0][2]);
    prev[1] = max(points[0][0], points[0][2]);
    prev[2] = max(points[0][0], points[0][1]);
    prev[3] = max(points[0][0], max(points[0][1], points[0][2]));

    
    for(int day = 1; day < n; day++) {
        vector<int> temp(4, 0);
        for(int last = 0; last < 4; last++) {
            temp[last] = 0;
            for(int today = 0; today < 3; today++) {
                if(today != last) {
                    int point = points[day][today] + prev[today];
                    temp[last] = max(temp[last], point);
                }
            }
        }
        prev = temp;
    }

    return prev[3];

}

// time: O(N*4*3) = O(N)
// space: O(4) = O(1)