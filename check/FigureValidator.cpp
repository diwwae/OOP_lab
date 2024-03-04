#include "FigureValidator.h"

std::vector<IFigureValidator*> FigureValidator::_validators{new TrapezoidValidator, new RectangleValidator, new SquareValidator};

void FigureValidator::validate(const std::type_info& typeInfo, std::vector<Point> peaks){
    for (int index = 0; index < FigureValidator::_validators.size(); ++index){
        IFigureValidator* figureValidator = FigureValidator::_validators.at(index);

        if (figureValidator->isAllowedForType(typeInfo)){
            figureValidator->validateFigure(peaks);
        }
    }
}