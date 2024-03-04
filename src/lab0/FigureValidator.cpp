#include "FigureValidator.h"

template<class T>
std::vector<IFigureValidator<T>> FigureValidator<T>::_validators{*new TrapezoidValidator<T>, *new RectangleValidator<T>, *new SquareValidator<T>};

template<class T>
void FigureValidator<T>::validate(const std::type_info& typeInfo, std::vector<Point<T>> peaks){
    for (int index = 0; index < FigureValidator::_validators.size(); ++index){
        IFigureValidator<T>* figureValidator = FigureValidator::_validators.at(index);

        if (figureValidator->isAllowedForType(typeInfo)){
            figureValidator->validateFigure(peaks);
        }
    }
}