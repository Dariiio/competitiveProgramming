#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#define all(v) (v).begin(), (v).end()
using namespace std;

string rev(string s)
{
    reverse(all(s));

    return s;
}

int main()
{
    int no_of_strings;
    scanf("%d", &no_of_strings);

    vector <int> cost(no_of_strings + 1);
    for(int i = 1; i <= no_of_strings; i++)
        scanf("%d", &cost[i]);

    vector <string> s(no_of_strings + 1);
    for(int i = 1; i <= no_of_strings; i++)
        cin >> s[i];

    const long long oo = 1e16;
    const int WITHOUT_REVERSING = 0, REVERSING = 1;
    long long minimum_till[no_of_strings + 1][2];
    minimum_till[0][REVERSING] = minimum_till[0][WITHOUT_REVERSING] = 0;

    for(int i = 1; i <= no_of_strings; i++)
    {
        minimum_till[i][REVERSING] = minimum_till[i][WITHOUT_REVERSING] = oo;

        if(s[i] >= s[i - 1])
            minimum_till[i][WITHOUT_REVERSING] = minimum_till[i - 1][WITHOUT_REVERSING];

        if(s[i] >= rev(s[i - 1]))
            minimum_till[i][WITHOUT_REVERSING] = min(minimum_till[i][WITHOUT_REVERSING], minimum_till[i - 1][REVERSING]);

        if(rev(s[i]) >= s[i - 1])
            minimum_till[i][REVERSING] = cost[i] + minimum_till[i - 1][WITHOUT_REVERSING];

        if(rev(s[i]) >= rev(s[i - 1]))
            minimum_till[i][REVERSING] = min(minimum_till[i][REVERSING], cost[i] + minimum_till[i - 1][REVERSING]);

    }
    long long answer = min(minimum_till[no_of_strings][REVERSING], minimum_till[no_of_strings][WITHOUT_REVERSING]);

    printf("%I64d\n", answer >= oo ? -1 : answer);
    return 0;
}
