#include "pangram.h"

namespace pangram {
    bool is_pangram(std::string sentence) {
        // Track which letters we've seen (a-z)
        bool letters_found[26] = {false};
        
        // Go through each character in the sentence
        for (char c : sentence) {
            // Convert to lowercase and check if it's a letter
            if (std::isalpha(c)) {
                char lower_c = std::tolower(c);
                // Mark this letter as found
                letters_found[lower_c - 'a'] = true;
            }
        }
        
        // Check if all 26 letters were found
        for (int i = 0; i < 26; i++) {
            if (!letters_found[i]) {
                return false;  // Missing at least one letter
            }
        }
        
        return true;  // All letters found
    }
}  // namespace pangram