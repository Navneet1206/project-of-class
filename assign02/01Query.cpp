#include <iostream>

using namespace std;
class query
{
public:
    void find_query();
};

void query ::find_query()
{
    int n, i;
    int qu[3];
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    cout << "Enter three Queries : ";

    for (i = 0; i < 3; i++)
    {
        cin >> qu[i];
    }

    for (i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {

            if (qu[i] == arr[j])
            {
                cout << qu[i] << " present in index " << j << endl;
            }
        }
    }
}

int main()
{
    query q;
    q.find_query();

    return 0;
}