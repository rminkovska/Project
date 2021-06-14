#include <iostream>
using namespace std;
int main ()
{
    cout<<"QUIZ! What profession suits you according to what party you will throw?"<<endl<<endl<<endl<<endl;
    char A, B, C, D;
    int a=0, b=0, c=0, d=0;
    char n;
    char n1;
    cout<<"Are you ready to play?"<<endl;
    cout<<"A) Yes!"<<endl<<"B) Of course"<<endl<<"C) I can't miss it"<<endl<<"D) I am born ready"<<endl;
    {
        cin>>n;
        cout<<endl;
    }
    cout<<"Good choice! Here we go!"<<endl<<endl;
    for(int i=1; i<11; i++)
    {
        if(i==1)
        {
            cout<<"What place will you choose?"<<endl;
            cout<<"A) garden"<<endl<<"B) apartment"<<endl<<"C) house"<<endl<<"D) party bus"<<endl;
            cin>>n;
            cout<<endl;
        }
        if(i==2)
        {
            cout<<"Who will you invite?"<<endl;
            cout<<"A) family"<<endl<<"B) close friends"<<endl<<"C) many people"<<endl<<"D) teachers from SMG"<<endl;
            cin>>n;
            cout<<endl;
        }
        if(i==3)
        {
            cout<<"What will the dress code be"<<endl;
            cout<<"A) smart clothes"<<endl<<"B) fancy dress"<<endl<<"C) street fashion"<<endl<<"D) swimwear"<<endl;
            cin>>n;
            cout<<endl;
        }
        if(i==4)
        {
            cout<<"What will the food be like?"<<endl;
            cout<<"A) cooked by you"<<endl<<"B) barbecue"<<endl<<"C) pizza"<<endl<<"D) sushi"<<endl;
            cin>>n;
            cout<<endl;
        }
         if(i==5)
        {
            cout<<"What drinks will you choose"<<endl;
            cout<<"A) soda"<<endl<<"B) smoothies"<<endl<<"C) cocktails"<<endl<<"D) shots"<<endl;
            cin>>n;
            cout<<endl;
        }
        if(i==6)
        {
            cout<<"What will the decoration be?"<<endl;
            cout<<"A) no decoration"<<endl<<"B) garlands"<<endl<<"C) confetti"<<endl<<"D) balloon (with N20)"<<endl;
            cin>>n;
            cout<<endl;
        }
        if(i==7)
        {
            cout<<"Which SMG teacher will be the DJ?"<<endl;
            cout<<"A) Tancheto"<<endl<<"B) Seniorata"<<endl<<"C) Simov"<<endl<<"D) Maq Vasileva"<<endl;
            cin>>n;
            cout<<endl;
        }
        if(i==8)
        {
            cout<<"Which genre of music do you want to be played?"<<endl;
            cout<<"A) Reggae"<<endl<<"B) R&B"<<endl<<"C) rap"<<endl<<"D) chalga "<<endl;
            cin>>n;
            cout<<endl;
        }
        if(i==9)
        {
            cout<<"Who are you?"<<endl;
            cout<<"A) the one who leaves first"<<endl<<"B) the one who falls asleep"<<endl<<"C) the one who will black out"<<endl<<"D) the one who will sing and dance all night"<<endl;
            cin>>n;
            cout<<endl;
        }
        if(i==10)
        {
            cout<<"What will you do after the party?"<<endl;
            cout<<"A) I will clean."<<endl<<"B) I will sleep."<<endl<<"C) I will go to an after party."<<endl<<"D) I will buy banichki for everyone."<<endl;
            cin>>n;
            cout<<endl;
        }
        }
    if(n=='A')
    {
        a++;
    }
    if(n=='B')
    {
        b++;
    }
    if(n=='C')
    {
        c++;
    }
    if(n=='D')
    {
        d++;
    }

    for(int j=0; j<1; j++)
    {
        cout<<"The perfect profession for you is:";
        if(a>b && a>c && a>d)
      {
          cout<<" accountant";
          break;
      }
      if(b>a && b>c && b>d)
      {
           cout<<" clown";
           break;

      }
       if(c>a && c>b && c>d)
      {
           cout<<" traveller";
           break;
      }
       if(d>a && d>b && d>c)
      {
           cout<<" Plaza manager";
           break;
      }
      if(a==b)
      {
          cout<<" baby names consultant";
          break;
      }
      if(a==c)
      {
          cout<<" waiter in a restaurant in Sunny Beach";
          break;
      }
      if(a==d)
      {
          cout<<" lego sculptor";
          break;
      }
      if(b==c)
      {
          cout<<" yoga instructor for dogs";
          break;
      }
      if(b==d)
      {
          cout<<" author of messages in Chinese fortune cookies";
          break;
      }
      if(c==d)
      {
          cout<<" influencer";
          break;
      }
    }
}
