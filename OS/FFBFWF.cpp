#include<iostream>
#include<algorithm>
using namespace std;

struct MemoryBlock {
    int blockID;
    int size;
    int processID; // -1 if unallocated
    bool allocated; // true if allocated, false if not
};

struct Process {
    int processID;
    int size;
    bool allocated; // true if allocated, false if not
};

void displayMemory(const MemoryBlock memory[], int numBlocks) {
    cout << "Memory Allocation:\n";
    cout << "Block ID\tSize\tProcess ID\n";
    cout << "---------------------------------\n";
    for (int i = 0; i < numBlocks; ++i) {
        cout << memory[i].blockID << "\t\t" << memory[i].size << "\t\t" << (memory[i].processID == -1 ? "Unallocated" : to_string(memory[i].processID)) << endl;
    }
    cout << "---------------------------------\n";
}

// First Fit Algorithm
void firstFit(MemoryBlock memory[], int numBlocks, Process processes[], int numProcesses) {
    for (int i = 0; i < numProcesses; ++i) {
        for (int j = 0; j < numBlocks; ++j) {
            if (!memory[j].allocated && memory[j].size >= processes[i].size) {
                memory[j].processID = processes[i].processID;
                memory[j].allocated = true;
                break;
            }
        }
    }
}

// Best Fit Algorithm
void bestFit(MemoryBlock memory[], int numBlocks, Process processes[], int numProcesses) {
    for (int i = 0; i < numProcesses; ++i) {
        int bestFitIndex = -1;
        for (int j = 0; j < numBlocks; ++j) {
            if (!memory[j].allocated && memory[j].size >= processes[i].size &&
                (bestFitIndex == -1 || memory[j].size < memory[bestFitIndex].size)) {
                bestFitIndex = j;
            }
        }

        if (bestFitIndex != -1) {
            memory[bestFitIndex].processID = processes[i].processID;
            memory[bestFitIndex].allocated = true;
        }
    }
}

// Worst Fit Algorithm
void worstFit(MemoryBlock memory[], int numBlocks, Process processes[], int numProcesses) {
    for (int i = 0; i < numProcesses; ++i) {
        int worstFitIndex = -1;
        for (int j = 0; j < numBlocks; ++j) {
            if (!memory[j].allocated && memory[j].size >= processes[i].size &&
                (worstFitIndex == -1 || memory[j].size > memory[worstFitIndex].size)) {
                worstFitIndex = j;
            }
        }

        if (worstFitIndex != -1) {
            memory[worstFitIndex].processID = processes[i].processID;
            memory[worstFitIndex].allocated = true;
        }
    }
}

int main() {
    int numBlocks, numProcesses;

    cout << "Enter the number of memory blocks: ";
    cin >> numBlocks;

    MemoryBlock memory[numBlocks];

    cout << "Enter the size of each memory block:\n";
    for (int i = 0; i < numBlocks; ++i) {
        memory[i].blockID = i + 1;
        cout << "Block " << i + 1 << ": ";
        cin >> memory[i].size;
        memory[i].processID = -1; // -1 indicates unallocated
        memory[i].allocated = false; // Initially not allocated
    }

    cout << "Enter the number of processes: ";
    cin >> numProcesses;

    Process processes[numProcesses];

    cout << "Enter the size of each process:\n";
    for (int i = 0; i < numProcesses; ++i) {
        processes[i].processID = i + 1;
        cout << "Process " << i + 1 << ": ";
        cin >> processes[i].size;
        processes[i].allocated = false; // Initially not allocated
    }

    // First Fit
    firstFit(memory, numBlocks, processes, numProcesses);
    cout << "\nFirst Fit Algorithm:\n";
    displayMemory(memory, numBlocks);

    // Reset memory state
    for (int i = 0; i < numBlocks; ++i) {
        memory[i].processID = -1;
        memory[i].allocated = false;
    }

    // Best Fit
    bestFit(memory, numBlocks, processes, numProcesses);
    cout << "\nBest Fit Algorithm:\n";
    displayMemory(memory, numBlocks);

    // Reset memory state
    for (int i = 0; i < numBlocks; ++i) {
        memory[i].processID = -1;
        memory[i].allocated = false;
    }

    // Worst Fit
    worstFit(memory, numBlocks, processes, numProcesses);
    cout << "\nWorst Fit Algorithm:\n";
    displayMemory(memory, numBlocks);

    cout<<"Mohit Kumar \nIT-03\n04076803121";

    return 0;
}
