#include "qt20/widgets/Widget"

namespace qt20 {
    namespace widgets {
        Widget::Widget(Widget &parent) : QWidget(&parent) {}
        Widget::Widget(Widget &parent, Qt::WindowFlags flags) : QWidget(&parent, flags) {}
        Widget::Widget(Qt::WindowFlags flags) : QWidget(nullptr, flags) {}

    }
}