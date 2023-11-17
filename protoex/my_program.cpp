#include "example.pb.h"
#include <iostream>
#include <fstream>

int main() {
  // Create a Person message
  tutorial::Person person;
  person.set_name("John Doe");
  person.set_id(123);
  person.set_email("john.doe@example.com");

  // Serialize the message to a string
  std::string serialized_data;
  person.SerializeToString(&serialized_data);

  // Write the serialized data to a file
  std::ofstream output("person.bin", std::ios::binary);
  output << serialized_data;
  output.close();

  return 0;
}
