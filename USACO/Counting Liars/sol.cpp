#include <stdio.h>
#include <stdint.h>
 
#include <vector>
#include <algorithm>
using namespace std;
 
 
int main()
{
    int N;
    scanf("%d", &N);
 
    vector<pair<int, int>> locations(N);
    for (int idx = 0; idx < N; ++idx)
    {
        char dir[10];
        scanf("%s", dir);
        scanf("%d", &locations[idx].first);
        if (dir[0] == 'G')
            locations[idx].second = -1;
        else
            locations[idx].second = +1;
    }
 
    int minLiars = N;
    sort(locations.begin(), locations.end());
 
    for (int idx = 0; idx < N; ++idx)
    {
        int numLiars = 0;
        for (int jdx = 0; jdx < idx; ++jdx)
            if (locations[jdx].second == 1)
                ++numLiars;
 
        for (int jdx = idx+1; jdx < N; ++jdx)
            if (locations[jdx].second == -1)
                ++numLiars;
 
        minLiars = min(numLiars, minLiars);
    }
 
    printf("%d\n", minLiars);
}
