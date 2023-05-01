#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'timeInWords' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. INTEGER h
 *  2. INTEGER m
 */

string timeInWords(int h, int m)
{
    string result;

    vector<string> v =
    {   "zero", "one", "two", "three", "four", "five",
        "six", "seven", "eight", "nine", "ten",
        "eleven", "twelve", "thirteen", "fourteen", "fifteen",
        "sixteen", "seventeen", "eighteen", "nineteen", "twenty",
        "twenty one", "twenty two", "twenty three", "twenty four", "twenty five",
        "twenty six", "twenty seven", "twenty eight", "twenty nine"
    };
    
    if (m <= 30)
    {
        if (m == 0)
            result = v[h] + " o' clock";
        else if (m == 15)
            result = "quarter past " + v[h];
        else if (m == 30)
            result = "half past " + v[h];
        else if( m == 1)
            result = v[m] + " minute past " + v[h];
        else
            result = v[m] + " minutes past " + v[h];
    }
    else
    {
        if (m == 45)
            result = "quarter to " + v[h+1];
        else if (m == 59)
            result = v[60-m] + " minute to " + v[h+1];
        else
            result = v[60-m] + " minutes to " + v[h+1];
     }
 
    return result;
}
