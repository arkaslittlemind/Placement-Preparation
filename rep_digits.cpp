# include<iostream>
using namespace std;
int main()
{
    int n1,n2,repeat_digit_flag=0,count_nos=0,copy_no,digit=0;

      cin>>n1;
      cin>>n2;
    int digit_index_array[10]={0,0,0,0,0,0,0,0,0,0}; // initialize to 0

    for(int i=n1;i<=n2;i++)
    {
        repeat_digit_flag=0; //initialize to repeat_digit_flag to 0 after every loop
        copy_no=i; // keeping a copy of the no
        while(copy_no)
        {
            digit=copy_no%10;//extracting each digit
            if(digit_index_array[digit]==0)   // putting 1 corresponding to that digit in array if 0
            {
                digit_index_array[digit]=1;
            }
            else
            {
                repeat_digit_flag++;  //  if that index is not 0 means already a digit is there so repeat_digit_flag increases
            }
            copy_no=copy_no/10;
        }
            if(repeat_digit_flag==0)  // after all the digits of the no are checked we check if repeat_digit_flag=0 or not
            {
                count_nos++;
            }

          for(int i=0;i<=9;i++)
            {

                digit_index_array[i]=0;  //// initialize array to 0
            }

    }

     cout<<" "<<endl;
     cout<<" "<<endl;
     cout<<count_nos;

    return 0;

}

