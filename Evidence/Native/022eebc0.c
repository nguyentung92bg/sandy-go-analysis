/* IL2CPP: Dino.BusSand.App.UI.YachtRacingPanel.<ForceActiveBot>d__38$$MoveNext
bool Dino_BusSand_App_UI_YachtRacingPanel__ForceActiveBot_d__38__MoveNext (Dino_BusSand_App_UI_YachtRacingPanel__ForceActiveBot_d__38_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingPanel.<ForceActiveBot>d__38$$MoveNext
   bool Dino_BusSand_App_UI_YachtRacingPanel__ForceActiveBot_d__38__MoveNext
   (Dino_BusSand_App_UI_YachtRacingPanel__ForceActiveBot_d__38_o* __this, const MethodInfo* method);
    */

bool Dino_BusSand_App_UI_YachtRacingPanel__ForceActiveBot_d__38__MoveNext_21eebc0(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
                    /* try { // try from 022eebc8 to 023eec77 has its CatchHandler @ 022eebc8
                       catch() { ... } // from try @ 022eebc8 with catch @ 022eebc8
                       catch() { ... } // from try @ 022eec80 with catch @ 022eebc8 */
  if ((bRam0000000004f9bc0c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caca88);
    bRam0000000004f9bc0c = 1;
  }
  puVar2 = PTR_DAT_04caca88;
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    uVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
    UnityEngine_WaitForSecondsRealtime___ctor_43ca5f0(0x41200000,uVar3,0);
    *(undefined8 *)(param_1 + 0x18) = uVar3;
    thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar3);
    *(undefined4 *)(param_1 + 0x10) = 1;
  }
  else if (iVar1 == 1) {
    lVar4 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if ((*(long *)(lVar4 + 0x40) != 0) && (*(char *)(lVar4 + 0x2c) == '\0')) {
      Dino_BusSand_App_Meta_YachtRacingCore__RefreshBotsData_2255be0(*(long *)(lVar4 + 0x40),0);
    }
  }
                    /* try { // try from 022eec78 to 023eec7f has its CatchHandler @ 022eece0 */
  return iVar1 == 0;
}

