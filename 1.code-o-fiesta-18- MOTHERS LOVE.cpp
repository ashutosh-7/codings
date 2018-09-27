PROBLEM---
There is a small kid who just started going to school. He learns some poems and basic knowledge of alphabets. But his mother wants to make her kid perfect in alphabet reading.
So, she decided to teach her only those sentences which contains all the letters of english alphabets.
For example - "Quick wafting zephyrs vex bold Jim."(irrespective of the sense of that sentence).
These special type of sentences are termed as MOTHER'S LOVE.
Input Format
Sentence is taught by mother to her kid in form of String p.

Output Format
Output a string contains MOTHERS LOVE ,if p is MOTHER'S LOVE, otherwise output NOT MOTHER'S LOVE.

Constraints :
0 < |p| <= 1000
Characters of p belongs to (a-z,A-Z,Space).

Sample Test Case : 

Input


Quick wafting zephyrs vex bold Jim

Output


MOTHERS LOVE



SOLUTION---


#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
	string s;
	getline(cin,s);

  transform(s.begin(), s.end(), s.begin(), ::toupper); 
 
	string give;
	give="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int n,count=0,i;
	n=s.size();
	for( i = 0; i < n; i++)
     {
          switch(s[i])
          {
               case ' ':
               s[i] = '@';
               break;
          }
     }
    
     
	for(i=0;i<26;i++)
	{
size_t found=s.find(give[i]);
if(found<1000)
{
	count++;
}

}
if(count==26)
{
	cout<<"MOTHERS LOVE";
}
else{
	cout<<" NOT MOTHERS LOVE";
}
	return 0;
}
