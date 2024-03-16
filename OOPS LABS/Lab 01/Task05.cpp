#include <iostream>
#include <cstring>

using namespace std;

struct Event {
    char eventName[50];
    char date[20];
    char venue[50];
    char organizer[50];
};

void displayEvent(const Event& event) {
    cout << "Event Name: " << event.eventName << endl;
    cout << "Date: " << event.date << endl;
    cout << "Venue: " << event.venue << endl;
    cout << "Organizer: \n\n" << event.organizer << endl;
   
}

int main() {
    int totalEvents;

    cout << "Enter the total number of events: ";
    cin >> totalEvents;
    Event* events = new Event[totalEvents];
    for (int i = 0; i < totalEvents; ++i) {
        cout << "\nEnter details for Event " << i + 1 << ":" << endl;
        cout << "Event Name: ";
        cin.ignore();
        cin.getline(events[i].eventName, sizeof(events[i].eventName));
        cout << "Date: ";
        cin.getline(events[i].date, sizeof(events[i].date));
        cout << "Venue: ";
        cin.getline(events[i].venue, sizeof(events[i].venue));
        cout << "Organizer: ";
        cin.getline(events[i].organizer, sizeof(events[i].organizer));
    }
    char searchDate[20];
    cout << "\nEnter a date to display events: ";
    cin >> searchDate;

    cout << "\nEvents on " << searchDate << ":" << endl;
    for (int i = 0; i < totalEvents; ++i) {
        if (strcmp(events[i].date, searchDate) == 0) {
            displayEvent(events[i]);
        }
    }

    cout << "\nEnter a date to search for events: ";
    cin >> searchDate;

    cout << "\nMatching events on " << searchDate << ":" << endl;
    for (int i = 0; i < totalEvents; ++i) {
        if (strcmp(events[i].date, searchDate) == 0) {
            displayEvent(events[i]);
        }
    }

    delete[] events;

    return 0;
}
