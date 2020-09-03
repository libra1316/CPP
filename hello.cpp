#include <iostream> 
using namespace std; 
  
// Function to print hollow rectangle  
void print_rectangle(int n)  
{  
    int i, j;  
    for (i = 1; i <= n; i++)  
    {  
        for (j = 1; j <= n; j++)  
        {  
           if (i == 1 || i == n || j == 1 || j == n) {
               cout<<"*";

           }
         else if (i + j == n + 1 ) {
            cout<<"*";

        } else {
            cout<<" ";
        }
    }  
            cout << endl; 

  
}  
}
// Driver Code 
int main()  
{  
    int rows =  8;
    print_rectangle(rows);  
    return 0;  
}  
  