#include <iostream>
#include <stack>
using namespace std;
int main() {
  int book , time,m_time,k=0,num=1;
  string m_type;
  stack <int> move;
  cout<<"請輸入書的數量及動作次數(用空格隔開)：";
  cin>>book>>time;
  int number[book];
  for(int i=0;i<time;i++)
  {
    cout<<"請輸入動作類型(a為放入,b為拿出)及次數：";
    cin>>m_type[i]>>m_time;
    if(m_type[i]=='a')
    {
        for(int j=0;j<m_time;j++)
        {
            if(num>book)
            {break;}
            move.push(num);
            num=num+1;
        }
    }else 
    if(m_type[i]=='b')
    {
        for(int j=0;j<m_time;j++)
        {
            if(move.size()==0)
            {break;}
            number[k]=move.top();
            move.pop();
            k=k+1 ;    
        }
    }
  }
  for(int i=0;i<book;i++)
  {
      cout<<number[i]<<"\t";
  }
}
