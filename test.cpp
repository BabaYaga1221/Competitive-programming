#include <algorithm>
#include <string>
#include <set>
#include <iostream>

int main() {
    std::string str;

    if (!(std::cin >> str)) { return 1; }

    std::set<char> chars;

    str.erase(
        std::remove_if(
            str.begin(),
            str.end(), [&chars] (char i) {
                // If encountered character, remove this one.
                if (chars.count(i)) { return true; }

                // Otherwise, mark this character encountered and don't remove.
                chars.insert(i);
                return false;
            }
        ),
        str.end()
    );

    std::cout << str << '\n';

    return 0;
}