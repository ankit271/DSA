#include <iostream>
#include <unordered_map>
#include <list>
#include <unordered_set>
#include <map>
#include <string>

class SocialGraph {
private:
    std::unordered_map<std::string, std::list<std::string>> adjList;

public:
    void addUser(const std::string& user) {
        if (adjList.find(user) == adjList.end()) {
            adjList[user] = std::list<std::string>();
        }
    }

    void addFriendship(const std::string& user1, const std::string& user2) {
        addUser(user1);
        addUser(user2);
        adjList[user1].push_back(user2);
        adjList[user2].push_back(user1);
    }

    void displayGraph() const {
        for (const auto& pair : adjList) {
            std::cout << pair.first << ": ";
            for (const auto& friendName : pair.second) {
                std::cout << friendName << " ";
            }
            std::cout << std::endl;
        }
    }

    // Friend Recommendation based on mutual friends
    void recommendFriends(const std::string& user) {
        if (adjList.find(user) == adjList.end()) {
            std::cout << user << " not found in the network.\n";
            return;
        }

        std::unordered_set<std::string> userFriends(adjList[user].begin(), adjList[user].end());
        std::map<std::string, int> recommendationScores;

        // Loop through each friend of the user
        for (const auto& friendUser : adjList[user]) {
            // Loop through their friends (friends of friends)
            for (const auto& foaf : adjList[friendUser]) {
                if (foaf != user && userFriends.find(foaf) == userFriends.end()) {
                    recommendationScores[foaf]++;
                }
            }
        }

        if (recommendationScores.empty()) {
            std::cout << "No recommendations available for " << user << ".\n";
            return;
        }

        std::cout << "Friend recommendations for " << user << ":\n";
        for (const auto& pair : recommendationScores) {
            std::cout << "- " << pair.first << " (Mutual Friends: " << pair.second << ")\n";
        }
    }
};

int main() {
    SocialGraph fb;

    fb.addFriendship("Alice", "Bob");
    fb.addFriendship("Alice", "Charlie");
    fb.addFriendship("Bob", "David");
    fb.addFriendship("Charlie", "Eve");
    fb.addFriendship("Eve", "David");
    fb.addFriendship("David", "Frank");

    std::cout << "Social Network Graph:\n";
    fb.displayGraph();

    std::cout << "\nFriend Recommendations:\n";
    fb.recommendFriends("Alice");

    return 0;
}
