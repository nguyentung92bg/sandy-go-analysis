/* IL2CPP: Dino.BusSand.App.UI.PassportSystemOpenPanel$$Done
void Dino_BusSand_App_UI_PassportSystemOpenPanel__Done (Dino_BusSand_App_UI_PassportSystemOpenPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.PassportSystemOpenPanel$$Done
   void Dino_BusSand_App_UI_PassportSystemOpenPanel__Done
   (Dino_BusSand_App_UI_PassportSystemOpenPanel_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_PassportSystemOpenPanel__Done_21da690(long param_1)

{
  long *plVar1;
  long lVar2;
  float fVar3;
  
  if ((*(char *)(param_1 + 0x40) == '\0') &&
     (fVar3 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0),
     _UNK_00e207cc <= fVar3 - *(float *)(param_1 + 0x44))) {
    *(undefined1 *)(param_1 + 0x40) = 1;
                    /* try { // try from 022da6d0 to 023da6e3 has its CatchHandler @ 022da7fc */
    if (*(long *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    plVar1 = (long *)(*(long *)(param_1 + 0x38) + 0x18);
    lVar2 = *plVar1;
    *plVar1 = 0;
    thunk_FUN_02134474(plVar1,0);
    Dino_BusSand_App_UI_UIPanel__Close_21f509c(param_1,0);
    if (lVar2 != 0) {
                    /* try { // try from 022da6fc to 023da6ff has its CatchHandler @ 022da864 */
                    /* WARNING: Could not recover jumptable at 0x022da708. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
      return;
    }
  }
                    /* try { // try from 022da710 to 023da723 has its CatchHandler @ 022da7e4 */
  return;
}

