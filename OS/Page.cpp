#include <iostream>
#include <list>
#include <algorithm>
#include <unordered_set>
using namespace std;

// Function to simulate LRU page replacement policy
int lruPageReplacement(int pages[], int n, int capacity)
{
    list<int> pageOrder;
    unordered_set<int> pageSet;

    int pageFaults = 0;

    for (int i = 0; i < n; i++)
    {
        // Check if the page is not in the set
        if (pageSet.find(pages[i]) == pageSet.end())
        {
            pageFaults++;

            // Check if the pageOrder has reached its capacity
            if (pageOrder.size() == capacity)
            {
                int leastRecent = pageOrder.back();
                pageOrder.pop_back();
                pageSet.erase(leastRecent);
            }
        }
        else
        {
            // Remove the page from the pageOrder since it's already present
            pageOrder.remove(pages[i]);
        }

        // Add the page to both the pageOrder and the pageSet
        pageOrder.push_front(pages[i]);
        pageSet.insert(pages[i]);
    }

    return pageFaults;
}

// Function to simulate FIFO page replacement policy
int fifoPageReplacement(int pages[], int n, int capacity)
{
    list<int> pageQueue;
    unordered_set<int> pageSet;

    int pageFaults = 0;

    for (int i = 0; i < n; i++)
    {
        // Check if the page is not in the set
        if (pageSet.find(pages[i]) == pageSet.end())
        {
            pageFaults++;

            // Check if the pageQueue has reached its capacity
            if (pageQueue.size() == capacity)
            {
                int frontPage = pageQueue.front();
                pageQueue.pop_front();
                pageSet.erase(frontPage);
            }
        }

        // Add the page to both the pageQueue and the pageSet
        pageQueue.push_back(pages[i]);
        pageSet.insert(pages[i]);
    }

    return pageFaults;
}

// Function to simulate Optimal page replacement policy
int optimalPageReplacement(int pages[], int n, int capacity)
{
    list<int> pageOrder;
    unordered_set<int> pageSet;

    int pageFaults = 0;

    for (int i = 0; i < n; i++)
    {
        // Check if the page is not in the set
        if (pageSet.find(pages[i]) == pageSet.end())
        {
            pageFaults++;

            // Check if the pageOrder has reached its capacity
            if (pageOrder.size() == capacity)
            {
                int farthestPage = -1, farthestIndex = -1;

                for (auto it = pageOrder.begin(); it != pageOrder.end(); ++it)
                {
                    int currentPage = *it;
                    auto found = find(pages + i, pages + n, currentPage);

                    if (found == (pages + n))
                    {
                        farthestPage = currentPage;
                        farthestIndex = distance(pageOrder.begin(), it);
                        break;
                    }
                }

                if (farthestIndex != -1)
                {
                    pageSet.erase(farthestPage);
                    auto it = pageOrder.begin();
                    advance(it, farthestIndex);
                    pageOrder.erase(it);
                }
            }
        }

        // Add the page to both the pageOrder and the pageSet
        pageOrder.push_back(pages[i]);
        pageSet.insert(pages[i]);
    }

    return pageFaults;
}

int main()
{
    int n, capacity;

    cout << "Enter the number of pages: ";
    cin >> n;

    int pages[n];

    cout << "Enter the page reference sequence:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Page " << i + 1 << ": ";
        cin >> pages[i];
    }

    cout << "Enter the capacity of the page table: ";
    cin >> capacity;

    // Simulate LRU page replacement
    int lruFaults = lruPageReplacement(pages, n, capacity);
    cout << "\nLRU Page Replacement - Page Faults: " << lruFaults << endl;

    // Simulate FIFO page replacement
    int fifoFaults = fifoPageReplacement(pages, n, capacity);
    cout << "FIFO Page Replacement - Page Faults: " << fifoFaults << endl;

    // Simulate Optimal page replacement
    int optimalFaults = optimalPageReplacement(pages, n, capacity);
    cout << "Optimal Page Replacement - Page Faults: " << optimalFaults << endl;
    
    cout << "Mohit Kumar \nIT-03\n04076803121";

    return 0;
}
