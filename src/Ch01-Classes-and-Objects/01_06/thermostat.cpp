#include <iostream>

class Thermostat
{
public:
  Thermostat(float temp, unsigned int m, const std::string &loc)
  {
    temperature = temp;
    mode = m;
    location = loc;
  }

  ~Thermostat(){
      std::cout << "Thermostat in " << location << " is being destroyed.\n";
  }

  void displayStatus(){
      std::cout << "Location: " << location << "\nTemperature: " << temperature << "°C\nMode: " << (mode == 0 ? "OFF " : (mode == 1 ? "COOLING " : "HEATING ")) << std::endl;
  }

private:
  float temperature;
  unsigned int mode;
  std::string location;
};

int main()
{
  Thermostat livingRoomThermostat(22.5, 1, "Living Room");

  livingRoomThermostat.displayStatus();

  return 0;
}