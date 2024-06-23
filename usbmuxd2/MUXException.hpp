//
//  MUXException.hpp
//  usbmuxd2
//
//  Created by tihmstar on 20.07.23.
//

#ifndef MUXException_hpp
#define MUXException_hpp

#include <libgeneral/exception.hpp>

namespace tihmstar {

class MUXException : public tihmstar::exception {
public:
    using tihmstar::exception::exception;
    MUXException(const std::string& msg) : tihmstar::exception(msg.c_str()) {}
};

#pragma mark custom catch exceptions
class MUXException_client_disconnected : public MUXException{
    public:
        MUXException_client_disconnected(const std::string& msg)
            :MUXException(msg) {};
};

};
void retcustomerror(const std::string& msg) {
    throw tihmstar::MUXException_client_disconnected(msg);
}

#endif /* MUXException_hpp */
