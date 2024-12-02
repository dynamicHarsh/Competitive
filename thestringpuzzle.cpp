#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <sstream>
#include <vector>
using namespace std;

unordered_map<string, int> calculateLevels(unordered_map<string, vector<string>> &graph, const string &root)
{
    unordered_map<string, int> levels;
    queue<pair<string, int>> q;
    q.push(make_pair(root, 1));

    while (!q.empty())
    {
        pair<string, int> current = q.front();
        q.pop();
        string node = current.first;
        int level = current.second;
        levels[node] = level;

        for (const string &child : graph[node])
        {
            q.push(make_pair(child, level + 1));
        }
    }

    return levels;
}

int main()
{
    int n;
    cin >> n;

    unordered_map<string, vector<string>> graph;
    unordered_set<string> children;
    unordered_set<string> nodes;

    for (int i = 0; i < n; ++i)
    {
        string parent, child;
        cin >> parent >> child;
        graph[parent].push_back(child);
        children.insert(child);
        nodes.insert(parent);
        nodes.insert(child);
    }

    string root;
    for (const string &node : nodes)
    {
        if (children.find(node) == children.end())
        {
            root = node;
            break;
        }
    }
    unordered_map<string, int> levels = calculateLevels(graph, root);

    cin.ignore();
    string inputLine, word;
    getline(cin, inputLine);
    stringstream ss(inputLine);

    int totalValue = 0;

    while (ss >> word)
    {
        if (levels.find(word) != levels.end())
        {
            totalValue += levels[word];
        }
        else
        {
            totalValue += -1;
        }
    }

    cout << totalValue << endl;

    return 0;
}
