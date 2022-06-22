#include "qt20/Core/Object"

namespace qt20 {
    namespace core {
        Object::Object() : QObject() {}
        Object::Object(Object &parent) : QObject(&parent) {}

        bool Object::blockSignals(bool block) {
            return QObject::blockSignals(block);
        }

        bool Object::disconnect(const std::string &signal, Object &receiver, const std::string &method) const {
            return QObject::disconnect(signal.c_str(), &receiver, method.c_str());
        }

        bool Object::disconnect(const std::string &signal, Object &receiver) const {
            return QObject::disconnect(signal.c_str(), &receiver);
        }

        bool Object::disconnect(const std::string &signal) const {
            return QObject::disconnect(signal.c_str());
        }

        bool Object::disconnect() const {
            return QObject::disconnect();
        }

        bool Object::disconnect(Object &receiver, const std::string &method) const {
            return QObject::disconnect(&receiver, method.c_str());
        }

        bool Object::disconnect(Object &receiver) const {
            return QObject::disconnect(&receiver);
        }

        const Object &Object::dumpObjectInfo() const {
            QObject::dumpObjectInfo();
            return *this;
        }

        const Object &Object::dumpObjectTree() const {
            QObject::dumpObjectTree();
            return *this;
        }

        bool Object::inherits(const std::string &name) const {
            return QObject::inherits(name.c_str());
        }

        Object &Object::installEventFilter(Object &filterObj) {
            QObject::installEventFilter(&filterObj);
            return *this;
        }

        bool Object::isWidgetType() const {
            return QObject::isWidgetType();
        }

        bool Object::isWindowType() const {
            return QObject::isWindowType();
        }

        Object &Object::killTimer(int id) {
            QObject::killTimer(id);
            return *this;
        }

        std::string Object::objectName() const {
            return QObject::objectName().toStdString();
        }

        Object &Object::parent() const {
            return static_cast<Object &>(*QObject::parent());
        }

        Object &Object::removeEventFilter(Object &obj) {
            QObject::removeEventFilter(&obj);
            return *this;
        }

        Object &Object::setObjectName(const std::string &name) {
            QObject::setObjectName(name.c_str());
            return *this;
        }

        Object &Object::setParent(Object &parent) {
            QObject::setParent(&parent);
            return *this;
        }

        bool Object::signalsBlocked() const {
            return QObject::signalsBlocked();
        }

        int Object::startTimer(int interval, Qt::TimerType timerType) {
            return QObject::startTimer(interval, timerType);
        }

        int Object::startTimer(std::chrono::milliseconds time, Qt::TimerType timerType) {
            return QObject::startTimer(time, timerType);
        }

    } // namespace core

} // namespace qt20
