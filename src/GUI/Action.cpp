#include "qt20/GUI/Action"

namespace qt20 {
    namespace gui {
        Action::Action(const std::string &text) : QAction(QString(text.c_str())) {}
        Action::Action() : QAction() {}

    } // namespace gui

} // namespace qt20
