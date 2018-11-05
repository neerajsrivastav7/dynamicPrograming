//link of the problem statement: https://www.hackerearth.com/practice/algorithms/dynamic-programming/introduction-to-dynamic-programming-1/practice-problems/algorithm/intelligent-girl-1/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char arr[10001];
    int len;
    scanf("%s",arr);
    len=strlen(arr);
    int count=0;
    for(int i=0;i<len;i++)
    {
        if((arr[i]-'0')%2==0)
        count++;
    }
    int c=0;
    for(int i=0;i<len;i++)
    {
        printf("%d ",(count-c));
        if((arr[i]-'0')%2==0)
        c++;
    }
}
