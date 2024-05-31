#include "encryption.h"
#include <algorithm>

std::string Encryption::encrypt(const std::string& data) {
    std::string encrypted = data;
    std::reverse(encrypted.begin(), encrypted.end());
    return encrypted;
}

std::string Encryption::decrypt(const std::string& data) {
    std::string decrypted = data;
    std::reverse(decrypted.begin(), decrypted.end());
    return decrypted;
}
