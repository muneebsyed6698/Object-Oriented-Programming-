// Syed Muneeb Ur Rehman
// BS-AI 23k-0038

#include <iostream>
#include <string>

class Smartphone
{
private:
    std::string brand;
    std::string model;
    std::string displayResolution;
    int ram;
    int rom;
    int storage;

public:
    // Constructor
    Smartphone(std::string brand, std::string model, std::string displayResolution, int ram, int rom, int storage)
        : brand(brand), model(model), displayResolution(displayResolution), ram(ram), rom(rom), storage(storage) {}

    // Getter methods
    std::string getBrand() const
    {
        return brand;
    }

    std::string getModel() const
    {
        return model;
    }

    std::string getDisplayResolution() const
    {
        return displayResolution;
    }

    int getRam() const
    {
        return ram;
    }

    int getRom() const
    {
        return rom;
    }

    int getStorage() const
    {
        return storage;
    }

    // Setter methods
    void setBrand(const std::string &newBrand)
    {
        brand = newBrand;
    }

    void setModel(const std::string &newModel)
    {
        model = newModel;
    }

    void setDisplayResolution(const std::string &newResolution)
    {
        displayResolution = newResolution;
    }

    void setRam(int newRam)
    {
        ram = newRam;
    }

    void setRom(int newRom)
    {
        rom = newRom;
    }

    void setStorage(int newStorage)
    {
        storage = newStorage;
    }
};

int main()
{
    // Example usage
    Smartphone phone("ExampleBrand", "ExampleModel", "1080x1920", 4, 64, 128);

    // Using getter methods
    std::cout << "Brand: " << phone.getBrand() << std::endl;
    std::cout << "Model: " << phone.getModel() << std::endl;
    std::cout << "Display Resolution: " << phone.getDisplayResolution() << std::endl;
    std::cout << "RAM: " << phone.getRam() << "GB" << std::endl;
    std::cout << "ROM: " << phone.getRom() << "GB" << std::endl;
    std::cout << "Storage: " << phone.getStorage() << "GB" << std::endl;

    // Using setter methods to update values
    phone.setBrand("NewBrand");
    phone.setModel("NewModel");
    phone.setDisplayResolution("1440x2560");
    phone.setRam(6);
    phone.setRom(128);
    phone.setStorage(256);

    // Display updated values
    std::cout << "\nAfter updates:" << std::endl;
    std::cout << "Brand: " << phone.getBrand() << std::endl;
    std::cout << "Model: " << phone.getModel() << std::endl;
    std::cout << "Display Resolution: " << phone.getDisplayResolution() << std::endl;
    std::cout << "RAM: " << phone.getRam() << "GB" << std::endl;
    std::cout << "ROM: " << phone.getRom() << "GB" << std::endl;
    std::cout << "Storage: " << phone.getStorage() << "GB" << std::endl;

    return 0;
}
