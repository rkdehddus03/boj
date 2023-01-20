#include <iostream>
using namespace std;
int main() {
    int r;
    int c;
    int cnt=0;
  char arr[51][51];
    cin>>r>>c;
    for(int i=0; i<r; i++)
      for(int j=0; j<c; j++)
        {
          cin>>arr[i][j];
        }
    for(int i=0; i<r; i++)
      for(int j=0; j<c; j++)
        {
          if(j==0&&i!=0)
          {
            if(arr[i][j]==arr[i-1][j])
            {
              if(arr[i-1][j]=='B')
              {
                arr[i][j]='W';
                cnt++;
                continue;
              }
              else if(arr[i-1][j]=='W')
              {
                arr[i][j]='B';
                cnt++;
                continue;
              }
            }
            else
            {
              continue;
            }
          }
              
            
          if(j==c-1)
          {
            continue;
          }
          else
          {
            if(arr[i][j]!=arr[i][j+1])
            {
              continue;
            }
            else
            {
              if(arr[i][j]=='B')
              {
                arr[i][j+1]='W';
                cnt++;
                continue;
              }
              else if(arr[i][j]=='W')
              {
                arr[i][j+1]='B';
                
                cnt++;
                continue;
              }
            }
          }
        }
    cout<<cnt<<"\n";
    for(int i=0; i<r; i++)
      for(int j=0; j<c; j++)
        {
          cout<<arr[i][j];
          if(j==c-1)
          {
            cout<<"\n";
          }
        }
    return 0;
}