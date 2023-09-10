    // Activity 4
    // 4. Create a program that will display real numbers that is greater than 50 and less than 100.
    #include <iostream>
    using namespace std;
    // Badlon, Maze Clarion L. CS2C

    int realNumbers()
    {
        int count = 0;
        for (double i = 50.1; i < 99.9; i += 0.1)
        {
            cout << i << " ";
            count++;
        }
        return count;
    }

    int main()
    {
        int count = realNumbers();
        cout << "\nTotal numbers printed: " << count << endl;
        return 0;
    }