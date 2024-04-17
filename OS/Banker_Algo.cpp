#include <iostream>
#include <iomanip>

using namespace std;

const int MAX_PROCESSES = 5;
const int MAX_RESOURCES = 3;

int available[MAX_RESOURCES];
int maximum[MAX_PROCESSES][MAX_RESOURCES];
int allocation[MAX_PROCESSES][MAX_RESOURCES];
int need[MAX_PROCESSES][MAX_RESOURCES];
bool finish[MAX_PROCESSES];

void initialize()
{
    // Initialize available resources
    cout << "Enter available resources for each type: ";
    for (int i = 0; i < MAX_RESOURCES; ++i)
    {
        cin >> available[i];
    }

    // Initialize maximum demand of each process
    cout << "Enter maximum demand of each process: " << endl;
    for (int i = 0; i < MAX_PROCESSES; ++i)
    {
        cout << "Process " << i << ": ";
        for (int j = 0; j < MAX_RESOURCES; ++j)
        {
            cin >> maximum[i][j];
            need[i][j] = maximum[i][j];
        }
    }

    // Initialize allocation matrix
    cout << "Enter allocation matrix: " << endl;
    for (int i = 0; i < MAX_PROCESSES; ++i)
    {
        cout << "Process " << i << ": ";
        for (int j = 0; j < MAX_RESOURCES; ++j)
        {
            cin >> allocation[i][j];
            need[i][j] -= allocation[i][j];
        }
    }
}

bool isSafe(int process)
{
    for (int i = 0; i < MAX_RESOURCES; ++i)
    {
        if (need[process][i] > available[i])
        {
            return false;
        }
    }
    return true;
}

void releaseResources(int process)
{
    for (int i = 0; i < MAX_RESOURCES; ++i)
    {
        available[i] += allocation[process][i];
        allocation[process][i] = 0;
        need[process][i] = 0;
    }
}

int main()
{
    initialize();

    bool deadlock = false;
    int executedProcesses = 0;

    while (executedProcesses < MAX_PROCESSES)
    {
        bool found = false;

        for (int i = 0; i < MAX_PROCESSES; ++i)
        {
            if (!finish[i] && isSafe(i))
            {
                finish[i] = true;
                releaseResources(i);
                ++executedProcesses;

                cout << "Process " << i << " executed." << endl;
                found = true;
            }
        }

        if (!found)
        {
            deadlock = true;
            break;
        }
    }

    if (deadlock)
    {
        cout << "System is in a deadlock state." << endl;
    }
    else
    {
        cout << "System is in a safe state." << endl;
    }

    cout << "Mohit Kumar \nIT-03\n04076803121";
    
    return 0;
}