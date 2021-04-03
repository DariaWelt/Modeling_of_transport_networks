//
// Created by Дарья on 03.04.2021.
//

#ifndef MODELING_TRANSPORT_NETWORKS_AUTOMATAGRIDVIEW_H
#define MODELING_TRANSPORT_NETWORKS_AUTOMATAGRIDVIEW_H
#include <QFrame>
class AutomataGridView : QFrame {
private:
    enum ITEM_COLOR {
        WHITE, // cars
        BLACK, // road and background
        BLUE, // boards
        YELLOW, // traffic lights
        GREEN, // crosswalks
        COLOR
    };
    size_t _window_width;
    size_t _window_height;
    size_t _rows;
    size_t _cols;
    QRect** _blockArray;
    ITEM_COLOR** _blocksColors;

    Qt::GlobalColor _getColorByIndex(ITEM_COLOR color) const;

public:
    AutomataGridView(size_t rows_num, size_t cols_num, size_t _window_width, size_t _window_height);
    ~AutomataGridView();
    void paint() const;
    void UpdateGrid(ITEM_COLOR const * const *  data);
};

#endif //MODELING_TRANSPORT_NETWORKS_AUTOMATAGRIDVIEW_H
