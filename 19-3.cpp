#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Job {
    int deadline, profit;
};

bool compareJobs(Job a, Job b) {
    return a.deadline < b.deadline;
}

int maximumProfit(vector<Job> jobs) {
    int n = jobs.size();
    int maxProfit = 0, currentTime = 0;
    sort(jobs.begin(), jobs.end(), compareJobs);
    for (int i = 0; i < n; i++) {
        if (jobs[i].deadline >= currentTime + 1) {
            maxProfit += jobs[i].profit;
            currentTime++;
        }
    }
    return maxProfit;
}

int main() {
    int n;
    cin >> n;
    vector<Job> jobs(n);
    for (int i = 0; i < n; i++) {
        cin >> jobs[i].deadline >> jobs[i].profit;
    }
    cout << maximumProfit(jobs) << endl;
    return 0;
}

