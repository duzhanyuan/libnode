// Copyright (c) 2012 Plenluno All rights reserved.

#include "./server_impl.h"

namespace libj {
namespace node {
namespace net {

const String::CPtr Server::IN_ADDR_ANY = String::intern("0.0.0.0");
const String::CPtr Server::EVENT_LISTENING = String::intern("listening");
const String::CPtr Server::EVENT_CONNECTION = String::intern("connection");

Server::Ptr Server::create() {
    return ServerImpl::create();
}

}  // namespace net
}  // namespace node
}  // namespace libj
