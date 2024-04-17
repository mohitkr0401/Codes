#include<iostream>
#include<queue>
using namespace std;

struct Process {
    int processID;
    int burstTime;
    int remainingBurstTime;
    int turnaroundTime;
    int waitingTime;
    int completionTime;
};

void roundRobinScheduling(Process processes[], int n, int timeQuantum) {
    queue<int> readyQueue;

    int currentTime = 0;
    int completedProcesses = 0;

    cout << "Process\t| Burst Time\t| Completion Time\t| Turnaround Time\t| Waiting Time\n";
    cout << "--------------------------------------------------------------------------------------\n";


    while (completedProcesses < n) {
        for (int i = 0; i < n; i++) {
            if (processes[i].remainingBurstTime > 0) {
                int executionTime = min(timeQuantum, processes[i].remainingBurstTime);

                processes[i].remainingBurstTime -= executionTime;
                currentTime += executionTime;

                if (processes[i].remainingBurstTime == 0) {
                    processes[i].completionTime = currentTime;
                    processes[i].turnaroundTime = processes[i].completionTime;
                    processes[i].waitingTime = processes[i].turnaroundTime - processes[i].burstTime;

                    completedProcesses++;
                }

                readyQueue.push(i);
            }
        }
    }

    for (int i = 0; i < n; i++) {

        cout << "P" << processes[i].processID << "\t|\t" << processes[i].burstTime << "\t|\t"
             << processes[i].completionTime << "\t\t|\t" << processes[i].turnaroundTime << "\t\t|\t"
             << processes[i].waitingTime << "\n";
        
    }

    // Calculate and display average turnaround time and average waiting time
    float totalTurnaroundTime = 0, totalWaitingTime = 0;
    for (int i = 0; i < n; i++) {
        totalTurnaroundTime += processes[i].turnaroundTime;
        totalWaitingTime += processes[i].waitingTime;
    }

    float averageTurnaroundTime = totalTurnaroundTime / n;
    float averageWaitingTime = totalWaitingTime / n;

    cout << "\nAverage Turnaround Time: " << averageTurnaroundTime << endl;
    cout << "Average Waiting Time: " << averageWaitingTime << endl;
}

int main() {
    int n, timeQuantum;

    cout << "Enter the number of processes: ";
    cin >> n;

    Process processes[n];

    cout << "Enter burst time for each process:\n";
    for (int i = 0; i < n; i++) {
        processes[i].processID = i + 1;
        cout << "Process " << i + 1 << ": ";
        cin >> processes[i].burstTime;
        processes[i].remainingBurstTime = processes[i].burstTime;
    }

    cout << "Enter time quantum for Round Robin: ";
    cin >> timeQuantum;

    // Perform Round Robin scheduling
    roundRobinScheduling(processes, n, timeQuantum);

    cout<<"Mohit Kumar \nIT-03\n04076803121";

    return 0;
}
