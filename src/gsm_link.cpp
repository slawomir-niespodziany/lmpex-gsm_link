#include "gsm_link.h"
#include <cstdlib>
#include <iostream>
#include "lmp/lmp.h"

namespace {
lmp::ModuleRegisterer<AbstractLink, GsmLink> linkRegisterer;
};

std::string GsmLink::getId() { return "gsm"s; }

bool GsmLink::sendMessage(const std::string &message) {
    bool success = (std::rand() % 100) < 75;

    std::cout << "Sending via GSM: \"" << message << "\" .."s << ((success) ? ("ok"s) : ("failed"s)) << std::endl;

    return success;
}
