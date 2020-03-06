#ifndef CaloCellContainer_h
#define CaloCellContainer_h

/** simulator includes **/
#include "CaloCell/CaloCell.h"
#include "core/DataVector.h"

namespace xAOD{
  typedef DataVector<const xAOD::CaloCell> CaloCellContainer;
}
#endif