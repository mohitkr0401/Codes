#include<iostream>
#include<algorithm>
using namespace std;

struct Process {
    int processID;
    int burstTime;
    int priority;
    int waitingTime;
    int turnaroundTime;
};

bool compare(Process a, Process b) {
    return a.priority < b.priority;
}

void calculateTimes(Process processes[], int n) {
    processes[0].waitingTime = 0;
    processes[0].turnaroundTime = processes[0].burstTime;

    for (int i = 1; i < n; i++) {
        processes[i].waitingTime = processes[i - 1].waitingTime + processes[i - 1].burstTime;
        processes[i].turnaroundTime = processes[i].waitingTime + processes[i].burstTime;
    }
}

void displayResults(Process processes[], int n) {
    float totalWaitingTime = 0, totalTurnaroundTime = 0;

    cout << "Process\tBurst Time\tPriority\tWaiting Time\tTurnaround Time\n";
    for (int i = 0; i < n; i++) {
        cout << processes[i].processID << "\t" << processes[i].burstTime << "\t\t"
             << processes[i].priority << "\t\t" << processes[i].waitingTime << "\t\t"
             << processes[i].turnaroundTime << "\n";

        totalWaitingTime += processes[i].waitingTime;
        totalTurnaroundTime += processes[i].turnaroundTime;
    }

    float averageWaitingTime = totalWaitingTime / n;
    float averageTurnaroundTime = totalTurnaroundTime / n;

    cout << "\nAverage Waiting Time: " << averageWaitingTime << endl;
    cout << "Average Turnaround Time: " << averageTurnaroundTime << endl;
}

int main() {
    int n;

    cout << "Enter the number of processes: ";
    cin >> n;

    Process processes[n];

    cout << "Enter burst time and priority for each process:\n";
    for (int i = 0; i < n; i++) {
        processes[i].processID = i + 1;
        cout << "Process " << i + 1 << " - Burst Time: ";
        cin >> processes[i].burstTime;
        cout << "Process " << i + 1 << " - Priority: ";
        cin >> processes[i].priority;
    }

    // Sort processes based on priority (Priority Scheduling)
    sort(processes, processes + n, compare);

    // Calculate waiting time and turnaround time
    calculateTimes(processes, n);

    // Display the results
    displayResults(processes, n);

    cout<<"Mohit Kumar \nIT-03\n04076803121";

    return 0;
}
