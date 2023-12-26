#include "ActionResize.h"
#include "Figures/CFigure.h"
#include "ApplicationManager.h"
ActionResize::ActionResize(ApplicationManager* AppMgr):Action(AppMgr)
{
}
void ActionResize::Execute() {
    CFigure** Selected = pManager->GetSelected();
    for (int i = 0;i < pManager->SelectedCount;i++) {
        (Selected[i])->Resize();
    }

}
