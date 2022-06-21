#include "qt20/widgets/Window"

namespace qt20 {
    namespace widgets {
        Window& Window::show() {
            QWidget::show();
            return *this;
        }

        Window &Window::setTitle(const std::string &str) {
            QWidget::setWindowTitle(QString(str.c_str()));
            return *this;
        }

        std::string Window::getTitle() const {
            return QWidget::windowTitle().toStdString();
        }
    }
}