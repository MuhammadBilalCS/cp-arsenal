class ExamRoom {
    std::vector<int> students;
    int n;

public:

    ExamRoom(int n) {
        this->n = n;
    }

    int seat() {

        if (students.empty()) {
            students.push_back(0);
            return 0;
        }

        int bestSeat = 0;
        int bestDistance = students[0];

        for (int i = 0; i < students.size() - 1; i++) {

            int left = students[i];
            int right = students[i + 1];

            int distance = (right - left) / 2;
            int candidate = left + distance;

            if (distance > bestDistance) {
                bestDistance = distance;
                bestSeat = candidate;
            }
        }

        int rightDistance = (n - 1) - students.back();

        if (rightDistance > bestDistance) {
            bestDistance = rightDistance;
            bestSeat = n - 1;
        }

        int i = 0;

        while (i < students.size() && students[i] < bestSeat) {
            i++;
        }

        students.insert(students.begin() + i, bestSeat);

        return bestSeat;
    }

    void leave(int p) {

        for (int i = 0; i < students.size(); i++) {

            if (students[i] == p) {
                students.erase(students.begin() + i);
                return;
            }
        }
    }
};