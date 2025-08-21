#include <array>
#include <string>
#include <vector>

// Round down all provided student scores.
std::vector<int> round_down_scores(std::vector<double> student_scores) {
    // TODO: Implement round_down_scores
    std::vector<int> round_down_scores;
    for ( double score : student_scores)
        round_down_scores.emplace_back(static_cast<int>(score));
    return round_down_scores;
}

// Count the number of failing students out of the group provided.
int count_failed_students(std::vector<int> student_scores) {
    // TODO: Implement count_failed_students
    int not_passed {0};
    for (int score : student_scores){
        if (score <= 40 )
            not_passed ++;
    }
    return not_passed;
}

// Create a list of grade thresholds based on the provided highest grade.
std::array<int, 4> letter_grades(int highest_score) {
    // TODO: Implement letter_grades
    std::array<int, 4> lower_score;
    lower_score[0] = 41;
    int range = static_cast<int>((highest_score - 40 )/4);
    for (int i = 1; i < 4; i++){
        lower_score[i] = (range * i + 41);
    }
    return lower_score;
}

// Organize the student's rank, name, and grade information in ascending order.
std::vector<std::string> student_ranking(
    std::vector<int> student_scores, std::vector<std::string> student_names) {
    // TODO: Implement student_ranking
    std::vector<std::string> rank{};
    for (int i = 0; i < student_names.size(); i++){
        std::string entry = std::to_string(i+1) + ". " + student_names[i] + ": " + std::to_string(student_scores[i]);
        rank.emplace_back(entry);
    }
    return rank;
}

// Create a string that contains the name of the first student to make a perfect
// score on the exam.
std::string perfect_score(std::vector<int> student_scores,
                          std::vector<std::string> student_names) {
    // TODO: Implement perfect_score
    std::string top_score;
    for (int i = 0; i < student_names.size(); i++){
        if (student_scores[i] == 100){
            top_score = student_names[i];
            break;
        }
    }
    return top_score;
}
