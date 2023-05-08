#include <bits/stdc++.h>
using namespace std;
class Process
{
public:
    int at, bt, ct, tat, wt, rt, priority, pid;
    Process(int pid, int bt, int priority)
    {
        this->at = at;
        this->bt = bt;
        this->pid = pid;
        ct = 0;
        tat = 0;
        wt = 0;
        rt = bt;
    }
    Process()
    {
        at = 0;
        bt = 0;
        ct = 0;
        tat = 0;
        wt = 0;
        rt = bt;
        priority = 0;
    }
};
void printTabular(vector<Process> &processes)
{
    cout << endl
         << endl;
    cout << "pid\t"
         << "at\t"
         << "bt\t"
         << "ct\t"
         << "wt\t"
         << "tat\t"
         << "rt\t" << endl;
    for (int i = 0; i < processes.size(); i++)
    {
        cout << processes[i].pid << '\t' << processes[i].at << '\t' << processes[i].bt << '\t' << processes[i].ct << '\t' << processes[i].wt << '\t' << processes[i].tat << '\t' << processes[i].rt << endl;
    }
}
void avg_wt(vector<Process> &v)
{
    double avgwt = 0;
    for (auto &p : v)
    {
        avgwt += (double)p.wt / v.size();
    }
    cout << "Average Waiting Time : " << avgwt << endl;
}
void avg_tat(vector<Process> &v)
{
    double avgtat = 0;
    for (auto &p : v)
    {
        avgtat += (double)p.tat / v.size();
    }
    cout << "Average Turn Around Time : " << avgtat << endl;
}
