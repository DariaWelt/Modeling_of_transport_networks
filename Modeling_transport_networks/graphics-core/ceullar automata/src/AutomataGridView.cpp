//
// Created by Дарья on 03.04.2021.
//
#include "../include/AutomataGridView.h"
#include <QPainter>
AutomataGridView::AutomataGridView(size_t rows_num, size_t cols_num, size_t window_width, size_t window_height):
_rows(rows_num), _cols(cols_num), _window_height(window_height), _window_width(window_width) {
    QSize* blockSize = new QSize(_window_width / _cols, _window_height / _rows);
    _blockArray = (QRect**)malloc(sizeof(QRect*)*_rows);
    _blocksColors = (ITEM_COLOR**)malloc(sizeof(ITEM_COLOR*)*_rows);
    if (_blockArray == nullptr || _blocksColors == nullptr)
        return;
    for(size_t i = 0; i < _rows; ++i) {
        _blockArray[i] = (QRect *) malloc(sizeof(QRect) * _cols);
        _blocksColors[i] = (ITEM_COLOR*)calloc(_cols, sizeof(ITEM_COLOR));
        if (_blockArray[i] == nullptr || _blocksColors[i] == nullptr)
            return;
        for (size_t j = 0; j < _cols; ++j)
            _blockArray[i][j] = QRect(QPoint(blockSize->width() * j, blockSize->height() * i), *blockSize);
    }
}
AutomataGridView::~AutomataGridView(){
    for(size_t i = 0; i < _rows; ++i) {
        free(_blockArray[i]);
        free(_blocksColors[i]);
    }
    free(_blockArray);
    free(_blocksColors);
}

void AutomataGridView::UpdateGrid(ITEM_COLOR const * const * data){
    if (data == nullptr)
        return;
    for(size_t i = 0; i < _rows; ++i)
        for (size_t j = 0; j < _cols; ++j)
            _blocksColors[i][j] = data[i][j];

}
void AutomataGridView::paint() const {
    QPainter _painter((QFrame*)this);
    for(size_t i = 0; i < _rows; ++i)
        for (size_t j = 0; j < _cols; ++j) {
            QBrush blockBrush(_getColorByIndex(_blocksColors[i][j]), Qt::SolidPattern);
            _painter.fillRect(_blockArray[i][j], blockBrush);
        }
}

Qt::GlobalColor AutomataGridView::_getColorByIndex(ITEM_COLOR color) const {
    switch (color) {
        case WHITE:
            return Qt::white;
        case BLACK:
            return Qt::black;
        case YELLOW:
            return Qt::yellow;
        case GREEN:
            return Qt::green;
        case BLUE:
            return Qt::blue;
        default:
            return Qt::red;
    };
}