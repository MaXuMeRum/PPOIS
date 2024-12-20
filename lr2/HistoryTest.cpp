#include "History.h"
#include <gtest/gtest.h>

class MockClient : public Client {
public:
    MockClient(const std::string& firstName, const std::string& lastName)
        : Client(firstName, lastName, "", "") {}

    std::string getFullName() const override {
        return "Иван Иванов";
    }
};

class MockVehicle : public Vehicle {
public:
    MockVehicle(int id, const std::string& type, const std::string& brand, const std::string& model, int year, const std::string& color, const std::string& licensePlate)
        : Vehicle(id, type, brand, model, year, color, licensePlate) {}

    std::string getVehicleInfo() const override {
        return "Toyota Camry, 2020, черный, A123BC";
    }
};

TEST(HistoryTest, AddRentalToHistory) {
    History history;
    MockClient client("Иван", "Иванов");
    MockVehicle vehicle(1, "легковой", "Toyota", "Camry", 2020, "черный", "A123BC");
    Rental rental(1, &client, &vehicle, nullptr, time(nullptr), time(nullptr) + 86400, 1000.0);

    history.addRentalToHistory(rental);
    EXPECT_EQ(history.getTotalRentals(), 1);
}

TEST(HistoryTest, DisplayHistory) {
    History history;
    MockClient client("Иван", "Иванов");
    MockVehicle vehicle(1, "легковой", "Toyota", "Camry", 2020, "черный", "A123BC");
    Rental rental(1, &client, &vehicle, nullptr, time(nullptr), time(nullptr) + 86400, 1000.0);

    history.addRentalToHistory(rental);

    // Проверяем, что метод отображения не вызывает исключений
    EXPECT_NO_THROW(history.displayHistory());
}