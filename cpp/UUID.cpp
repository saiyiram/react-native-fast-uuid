#include "UUID.h"
#include <random>
#include <chrono>
#include <sstream>

std::string generateUUIDv4() {
  std::random_device rd;
  std::mt19937 gen(rd());
  std::uniform_int_distribution<uint32_t> dis(0, 15);
  std::stringstream ss;
  ss << std::hex;
  for (int i = 0; i < 32; ++i) {
    ss << dis(gen);
    if (i == 7 || i == 11 || i == 15 || i == 19) ss << "-";
  }
  return ss.str();
}

std::string generateUUIDv7() {
  auto now = std::chrono::system_clock::now().time_since_epoch();
  uint64_t timestamp = std::chrono::duration_cast<std::chrono::milliseconds>(now).count();
  std::stringstream ss;
  ss << std::hex << timestamp << "-";
  std::random_device rd;
  std::mt19937 gen(rd());
  std::uniform_int_distribution<uint32_t> dis(0, 15);
  for (int i = 0; i < 16; ++i) ss << dis(gen);
  return ss.str();
}

jsi::Value UUID::generateV4(jsi::Runtime &rt, const jsi::Value *args, size_t count) {
  return jsi::String::createFromUtf8(rt, generateUUIDv4());
}

jsi::Value UUID::generateV7(jsi::Runtime &rt, const jsi::Value *args, size_t count) {
  return jsi::String::createFromUtf8(rt, generateUUIDv7());
}
