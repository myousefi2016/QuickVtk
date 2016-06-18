#pragma once

#include "quickVtkAlgorithm.hpp"

#include <vtkPolyDataAlgorithm.h>

namespace quick {

    namespace Vtk {

        class PolyDataAlgorithm : public Algorithm {
            Q_OBJECT
        private:
            static Qml::Register::AbstractClass<PolyDataAlgorithm> Register;
            vtkSmartPointer<vtkPolyDataAlgorithm> m_vtkPolyDataAlgorithm;
        public:
            PolyDataAlgorithm();
            PolyDataAlgorithm(PolyDataAlgorithm*);
            auto setVtkPolyDataAlgorithm(vtkSmartPointer<vtkPolyDataAlgorithm>) -> void;
            auto getVtkPolyDataAlgorithm() -> vtkSmartPointer<vtkPolyDataAlgorithm>;
            ~PolyDataAlgorithm();
        };
    }
}