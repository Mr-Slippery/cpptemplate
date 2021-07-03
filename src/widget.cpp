#include <iostream>
 #include "widget.h"

class widget::impl {
    int n; // private data
 public:
    int draw(const widget& w) const {
        if(w.shown()) { // this call to public member function requires the back-reference 
            std::cout << "drawing a const widget " << n << '\n';
            return 0;
        }
        return 1;
    }
    int draw(const widget& w) {
        if(w.shown()) {
            std::cout << "drawing a non-const widget " << n << '\n';
            return 2;
        }
        return 3;
    }
    impl(int n) : n(n) {}
};
int widget::draw() const { return pImpl->draw(*this); }
int widget::draw() { return pImpl->draw(*this); }
widget::widget(int n) : pImpl{std::make_unique<impl>(n)} {}
widget::widget(widget&&) = default;
widget::~widget() = default;
widget& widget::operator=(widget&&) = default;
