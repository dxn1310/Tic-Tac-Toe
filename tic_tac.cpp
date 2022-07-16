#include<bits/stdc++.h>
using namespace std;


int count(int b[9]) //Function to return if boxes are empty or full
{
    int c=0;
    for(int i=1;i<10;i++)
    {
        if(b[i]==0)
        c=c+1;
    }
    return c;
}

int check(string a[][5]) //Function to check is any player has won
{
    //The first row
    if(a[0][0]=="X" && a[0][2]=="X" && a[0][4]=="X")
    return 1;
    else if(a[0][0]=="O" && a[0][2]=="O" && a[0][4]=="O")
    return 2;
    
    //The second row
    else if(a[2][0]=="X" && a[2][2]=="X" && a[2][4]=="X")
    return 1;
    else if(a[2][0]=="O" && a[2][2]=="O" && a[2][4]=="O")
    return 2;
    
    //The third row
    else if(a[4][0]=="X" && a[4][2]=="X" && a[4][4]=="X")
    return 1;
    else if(a[4][0]=="O" && a[4][2]=="O" && a[4][4]=="O")
    return 2;
    
    //The first column
    else if(a[0][0]=="X" && a[2][0]=="X" && a[4][0]=="X")
    return 1;
    else if(a[0][0]=="O" && a[2][0]=="O" && a[4][0]=="O")
    return 2;
    
    //The second column
    else if(a[0][2]=="X" && a[2][2]=="X" && a[4][2]=="X")
    return 1;
    else if(a[0][2]=="O" && a[2][2]=="O" && a[4][2]=="O")
    return 2;
    
    //The third column
    else if(a[0][4]=="X" && a[2][4]=="X" && a[4][4]=="X")
    return 1;
    else if(a[0][4]=="O" && a[2][4]=="O" && a[4][4]=="O")
    return 2;
    
    //The first diagonal
    else if(a[0][0]=="X" && a[2][2]=="X" && a[4][4]=="X")
    return 1;
    else if(a[0][0]=="O" && a[2][2]=="O" && a[4][4]=="O")
    return 2;
    
    //The second diagonal
    else if(a[0][4]=="X" && a[2][2]=="X" && a[4][0]=="X")
    return 1;
    else if(a[0][4]=="O" && a[2][2]=="O" && a[4][0]=="O")
    return 2;
    
    //All other cases
    else
    return 0;
    
}

void display(string a[][5]) //Function to display the tic-tac game board
{
    cout<<"\n";
    cout<<"   ";
    for(int z=0;z<5;z++)
    {
        for(int Z=0;Z<5;Z++)
        {
            cout<<a[z][Z]<<" ";
        }
        cout<<"\n   ";
    }
    cout<<"\n";
}



int main() //Driver Code
{
    system("cls");
    string array[5][5]={{" ","|"," ","|"," "},
                        {"-","-","-","-","-"},
                        {" ","|"," ","|"," "},
                        {"-","-","-","-","-"},
                        {" ","|"," ","|"," "}};

    int c[10]={0,0,0,0,0,0,0,0,0,0};
    
    while(1)
    {
        cout<<"\n";
        cout<<"TIC-TAC\n\n";
        cout<<"The tic tac game board is setup as the following:\nThe first row from left to right has boxes from 1 2 3\nThe second row from left to right has boxes from 4 5 6\nThe third row from left to right has boxes from 7 8 9\n\n";
        cout<<"The \"X\" Player plays first:\n\n";
        
        string A[5][5];
        for (int x=0;x<5;x++)
        {
            for (int y=0;y<5;y++)
            {
                A[x][y] = array[x][y];
            }
        }
        int b[10];
        for (int x=0;x<10;x++)
        {
            b[x]=c[x];
        }

        
        int n,m,i,j;
        
        for(i=1;i<=50;i++)
        {
            if(count(b)!=0)
            {
                display(A);
                if(i%2==1)
                {
                    cout<<"Enter the box number to place \"X\" in : ";
                    cin>>n;

                    if(b[n]==0)
                    {                  
                        if(n==1)
                        A[0][0]="X";
                        
                        else if(n==2)
                        A[0][2]="X";
                        
                        else if(n==3)
                        A[0][4]="X";
                        
                        else if(n==4)
                        A[2][0]="X";
                        
                        else if(n==5)
                        A[2][2]="X";
                        
                        else if(n==6)
                        A[2][4]="X";
                        
                        else if(n==7)
                        A[4][0]="X";
                        
                        else if(n==8)
                        A[4][2]="X";
                        
                        else if(n==9)
                        A[4][4]="X";

                        b[n]=1;
                    }
                    else
                    {
                        cout<<"Error, box aleady taken try again!!\n\n";
                        i=i-1;
                    }
                      
                    if(check(A)==1)
                    {
                        display(A);
                        cout<<"Player X wins\n\n";
                        break;
                    }
                    
                    
                }
                else if(i%2==0)
                {
                    cout<<"Enter the box number to place \"O\" in : ";
                    cin>>n;
                    
                    if(b[n]==0)
                    {

                        if(n==1)
                        A[0][0]="O";
                        
                        else if(n==2)
                        A[0][2]="O";
                        
                        else if(n==3)
                        A[0][4]="O";
                        
                        else if(n==4)
                        A[2][0]="O";
                        
                        else if(n==5)
                        A[2][2]="O";
                        
                        else if(n==6)
                        A[2][4]="O";
                        
                        else if(n==7)
                        A[4][0]="O";
                        
                        else if(n==8)
                        A[4][2]="O";
                        
                        else if(n==9)
                        A[4][4]="O";

                        b[n]=1;
                    }
                    else
                    {
                        cout<<"Error, box aleady taken try again!!\n\n";
                        i=i-1;
                    }
                    
                    if(check(A)==2)
                    {
                        display(A);
                        cout<<"Player O wins\n\n";
                        break;
                    }
                    
                }
            }
            else
            {
                display(A);
                cout<<"\nThe game is a draw\n\n";
                break;
            }
        }
        
        string op;
        cout<<"Do you want to play again? (YES/NO) : ";
        cin>>op;
        if(op.compare("NO")==0)
        {
            cout<<"THANK YOU!!!";
            break;
        }
        else if(op.compare("YES")==0)
        system("cls");
    }
    
    return 0;
}


