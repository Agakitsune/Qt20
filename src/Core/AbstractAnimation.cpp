#include "qt20/Core/AbstractAnimation"

namespace qt20 {
    namespace core {
        AbstractAnimation::AbstractAnimation(Object &parent) : QAbstractAnimation(&parent) {}
        AbstractAnimation::AbstractAnimation() : QAbstractAnimation() {}

        int AbstractAnimation::currentLoop() const {
            return QAbstractAnimation::currentLoop();
        }

        int AbstractAnimation::currentLoopTime() const {
            return QAbstractAnimation::currentLoopTime();
        }

        int AbstractAnimation::currentTime() const {
            return QAbstractAnimation::currentTime();
        }

        AbstractAnimation::Direction AbstractAnimation::direction() const {
            return QAbstractAnimation::direction();
        }

        int AbstractAnimation::loopCount() const {
            return QAbstractAnimation::loopCount();
        }

        AbstractAnimation &AbstractAnimation::setDirection(AbstractAnimation::Direction direction) {
            QAbstractAnimation::setDirection(direction);
            return *this;
        }

        AbstractAnimation &AbstractAnimation::setLoopCount(int count) {
            QAbstractAnimation::setLoopCount(count);
            return *this;
        }

        AbstractAnimation::State AbstractAnimation::state() const {
            return QAbstractAnimation::state();
        }

        int AbstractAnimation::totalDuration() const {
            return QAbstractAnimation::totalDuration();
        }

    } // namespace core

} // namespace qt20
