
#include "ModuleRunControl_OSAL.h"

void ModuleRunCtrlStart(MODULE_CREATE_PARA *pPara);
void InitTimeTables();
void StartRun(START_RUN_REASON reason);
void StopRun( STOP_RUN_REASON reason );
void SetRunLength(double time );
void SetInitValues();
void UndoRunTableChanges ( void );
void ExecuteRunTimeTable ( void );
void ServiceGsvAndMultiValve (void);
int RunInProgress( void );

