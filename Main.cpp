
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string names[5];
    int Test1[5], Test2[5], Test3[5], Test4[5], Test5[5];
    int TotalTest1, Average, Average2, TotalTest2, Average3, TotalTest3, Average4, TotalTest4, Average5, TotalTest5;

    cout << "Please enter the name of the students" << endl;

    for(int i =0; i<=5; i++)
    {
        if(i == 0)
        {
            cout << "Please enter the first students name" << endl;
            cin >> names[i];
        }
        else if(i ==1)
        {
            cout << "Please enter the second students name" << endl;
            cin >> names[i];
        }
        else if(i == 2)
        {
            cout << "Please enter the third students name" << endl;
            cin >> names[i];
        }
        else if(i ==3)
        {
            cout << "Please enter the fourth students name" << endl;
            cin >> names[i];
        }
        else if (i == 4)
        {
            cout << "Please enter the fifths students name" << endl;
            cin >> names[i];
        }
    }
    cout << "Time to input the test grades" << endl << endl;
    for(int i = 0; i < 5; i++)
    {
        if(i == 0)
        {
            cout << "Please enter " << names[i] << " grades" << endl;
            for(int j =0; j <= 5; j++)
            {
                do{
                if(j == 0)
                {
                    cout << "Please enter the first test grade" << endl;
                    cin >> Test1[j];
                }
                else if( j == 1)
                {
                    cout << "Please enter the second test grade" << endl;
                    cin >> Test1[j];
                }
                else if(j == 2)
                {
                    cout << "Please enter the third test grade" << endl;
                    cin >> Test1[j];
                }
                else if(j == 3)
                {
                    cout << "Please enter the fourth test grade" << endl;
                    cin >> Test1[j];
                }
                else if (j == 4)
                {
                    cout << "Please enter the fifth test grade" << endl;
                    cin >> Test1[j];
                }
                }while((Test1[j] < 0) || (Test1[j] >= 101));
            }
        }

        else if(i == 1)
        {
            cout << "Please enter " << names[i] << " grades" << endl;

            for(int j =0; j <= 5; j++)
            {
                do{
                if(j == 0)
                {
                    cout << "Please enter the first test grade" << endl;
                    cin >> Test2[j];
                }
                else if( j == 1)
                {
                    cout << "Please enter the second test grade" << endl;
                    cin >> Test2[j];
                }
                else if(j == 2)
                {
                    cout << "Please enter the third test grade" << endl;
                    cin >> Test2[j];
                }
                else if(j == 3)
                {
                    cout << "Please enter the fourth test grade" << endl;
                    cin >> Test2[j];
                }
                else if (j == 4)
                {
                    cout << "Please enter the fifth test grade" << endl;
                    cin >> Test2[j];
                }
                }while((Test2[j] < 0) || (Test2[j] >= 101));
            }
        }
        else if(i == 2)
        {
            cout << "Please enter " << names[i] << " grades" << endl;
            for(int j =0; j <= 5; j++)
            {
                do{
                if(j == 0)
                {
                    cout << "Please enter the first test grade" << endl;
                    cin >> Test3[j];
                }
                else if( j == 1)
                {
                    cout << "Please enter the second test grade" << endl;
                    cin >> Test3[j];
                }
                else if(j == 2)
                {
                    cout << "Please enter the third test grade" << endl;
                    cin >> Test3[j];
                }
                else if(j == 3)
                {
                    cout << "Please enter the fourth test grade" << endl;
                    cin >> Test3[j];
                }
                else if (j == 4)
                {
                    cout << "Please enter the fifth test grade" << endl;
                    cin >> Test3[j];
                }
                }while((Test3[j] < 0) || (Test3[j] >= 101));
            }
        }
        else if(i == 3)
        {
            cout << "Please enter " << names[i] << " grades" << endl;
            for(int j =0; j <= 5; j++)
            {
                do{
                if(j == 0)
                {
                    cout << "Please enter the first test grade" << endl;
                    cin >> Test4[j];
                }
                else if( j == 1)
                {
                    cout << "Please enter the second test grade" << endl;
                    cin >> Test4[j];
                }
                else if(j == 2)
                {
                    cout << "Please enter the third test grade" << endl;
                    cin >> Test4[j];
                }
                else if(j == 3)
                {
                    cout << "Please enter the fourth test grade" << endl;
                    cin >> Test4[j];
                }
                else if (j == 4)
                {
                    cout << "Please enter the fifth test grade" << endl;
                    cin >> Test4[j];
                }
                }while((Test4[j] < 0) || (Test4[j] >= 101));
            }
        }
        else if( i == 4)
        {
            cout << "Please enter " << names[i] << " grades" << endl;
            for(int j =0; j <= 5; j++)
            {
                do{
                if(j == 0)
                {
                    cout << "Please enter the first test grade" << endl;
                    cin >> Test5[j];
                }
                else if( j == 1)
                {
                    cout << "Please enter the second test grade" << endl;
                    cin >> Test5[j];
                }
                else if(j == 2)
                {
                    cout << "Please enter the third test grade" << endl;
                    cin >> Test5[j];
                }
                else if(j == 3)
                {
                    cout << "Please enter the fourth test grade" << endl;
                    cin >> Test5[j];
                }
                else if (j == 4)
                {
                    cout << "Please enter the fifth test grade" << endl;
                    cin >> Test5[j];
                }
                }while((Test5[j] < 0) || (Test5[j] >= 101));
            }
        }

        
    }

    for(int i = 0; i < 5; i++)
    {
        TotalTest1 += Test1[i];
        TotalTest2 += Test2[i];
        TotalTest3 += Test3[i];
        TotalTest4 += Test4[i];
        TotalTest5 += Test5[i];
    }
    Average = TotalTest1 / 5;
    Average2 = TotalTest2 / 5;
    Average3 = TotalTest3 / 5;
    Average4 = TotalTest4 / 5;
    Average5 = TotalTest5 / 5;

    for(int i = 0; i < 5; i++)
    {
        if(i == 0)
        {
            cout << "Here is " << names[i] << "'s" << " total test score = " << TotalTest1 << endl;
            cout << "Here is the average out of all the tests " << Average << endl;
            if(Average >= 90)
            {
                cout << "Which is an A " << endl;
            }
            else if(Average >= 80){
                cout << "Which is a B " << endl;
            }
            else if(Average >= 70)
            {
                cout << "Which is a C " << endl;
            }
            else if(Average >= 60)
            {
                cout << "Which is a D " << endl;
            }
            else{
                cout << "Which is an F" << endl;
            }
        }
        else if(i == 1)
        {
            cout << "Here is " << names[i] << "'s" << " total test score = " << TotalTest2 << endl;
            cout << "Here is the average out of all the tests " << Average2 << endl;
            if(Average2 >= 90)
            {
                cout << "Which is an A " << endl;
            }
            else if(Average2 >= 80){
                cout << "Which is a B " << endl;
            }
            else if(Average2 >= 70)
            {
                cout << "Which is a C " << endl;
            }
            else if(Average2 >= 60)
            {
                cout << "Which is a D " << endl;
            }
            else{
                cout << "Which is an F" << endl;
            }
        }
        else if(i == 2)
        {
            cout << "Here is " << names[i] << "'s" << " total test score = " << TotalTest3 << endl;
            cout << "Here is the average out of all the tests " << Average3 << endl;
            if(Average3 >= 90)
            {
                cout << "Which is an A " << endl;
            }
            else if(Average3 >= 80){
                cout << "Which is a B " << endl;
            }
            else if(Average3 >= 70)
            {
                cout << "Which is a C " << endl;
            }
            else if(Average3 >= 60)
            {
                cout << "Which is a D " << endl;
            }
            else{
                cout << "Which is an F" << endl;
            }
        }
        else if(i == 3)
        {
            cout << "Here is " << names[i] << "'s" << " total test score = " << TotalTest3 << endl;
            cout << "Here is the average out of all the tests " << Average3 << endl;
            if(Average3 >= 90)
            {
                cout << "Which is an A " << endl;
            }
            else if(Average3 >= 80){
                cout << "Which is a B " << endl;
            }
            else if(Average3 >= 70)
            {
                cout << "Which is a C " << endl;
            }
            else if(Average3 >= 60)
            {
                cout << "Which is a D " << endl;
            }
            else{
                cout << "Which is an F" << endl;
            }
        }
        else if(i == 4)
        {
            cout << "Here is " << names[i] << "'s" << " total test score = " << TotalTest4 << endl;
            cout << "Here is the average out of all the tests " << Average4 << endl;
            if(Average4 >= 90)
            {
                cout << "Which is an A " << endl;
            }
            else if(Average4 >= 80){
                cout << "Which is a B " << endl;
            }
            else if(Average4 >= 70)
            {
                cout << "Which is a C " << endl;
            }
            else if(Average4 >= 60)
            {
                cout << "Which is a D " << endl;
            }
            else{
                cout << "Which is an F" << endl;
            }
        }
    }


    return 0;
}
