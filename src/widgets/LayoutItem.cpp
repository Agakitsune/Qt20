#include "qt20/widgets/LayoutItem"

namespace qt20 {
    namespace widgets {
        LayoutItem::LayoutItem(Qt::Alignment alignment) : QLayoutItem(alignment) {}

        LayoutItem &LayoutItem::setAlignment(Qt::Alignment alignment) {
            QLayoutItem::setAlignment(alignment);
            return *this;
        }
    } // namespace widgets

} // namespace qt20
