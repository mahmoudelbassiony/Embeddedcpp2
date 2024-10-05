#include <iostream>
#include <ctime>

// Structure to represent a date
struct Date {
    int year;
    int month;
    int day;
};

// Function to calculate the difference between two dates in years, months, and days
void calculateAge(Date birthDate, Date currentDate) {
    int years = currentDate.year - birthDate.year;
    int months = currentDate.month - birthDate.month;
    int days = currentDate.day - birthDate.day;

    if (months < 0) {
        years--;
        months += 12;
    }

    if (days < 0) {
        months--;
        if (months < 0) {
            years--;
            months += 12;
        }
        // Approximate number of days in a month
        days += 30;
    }

    std::cout << "You are " << years << " years, " << months << " months, and " << days << " days old." << std::endl;
}

int main() {
    Date birthDate;
    Date currentDate;

    // Get the current date and time
    std::time_t currentTime = std::time(0);
    std::tm* currentDateTm = std::localtime(&currentTime);
    currentDate.year = currentDateTm->tm_year + 1900;
    currentDate.month = currentDateTm->tm_mon + 1;
    currentDate.day = currentDateTm->tm_mday;

    // Get the user's date of birth
    std::cout << "Enter your date of birth (YYYY MM DD): ";
    std::cin >> birthDate.year >> birthDate.month >> birthDate.day;

    calculateAge(birthDate, currentDate);

    return 0;
}