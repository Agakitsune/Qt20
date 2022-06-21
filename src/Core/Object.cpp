#include "qt20/Core/Object"

namespace qt20 {
    namespace core {
        Object::Object() : QObject() {}
        Object::Object(Object &parent) : QObject(&parent) {}

    } // namespace core

} // namespace qt20
