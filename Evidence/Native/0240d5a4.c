/* IL2CPP: Dino.BusSand.App.UI.HudPanel$$get_BoosterBusy
bool Dino_BusSand_App_UI_HudPanel__get_BoosterBusy (Dino_BusSand_App_UI_HudPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HudPanel$$get_BoosterBusy
   bool Dino_BusSand_App_UI_HudPanel__get_BoosterBusy (Dino_BusSand_App_UI_HudPanel_o* __this, const
   MethodInfo* method); */

bool Dino_BusSand_App_UI_HudPanel__get_BoosterBusy_230d5a4(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c528 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c528 = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
  if ((uVar2 & 1) == 0) {
    return false;
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x40) + 0x38);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* try { // try from 0240d618 to 0250d61f has its CatchHandler @ 0240d6c8 */
      thunk_FUN_0218fdac();
    }
    uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
    if ((uVar2 & 1) == 0) {
      return false;
    }
                    /* try { // try from 0240d638 to 0250d697 has its CatchHandler @ 0240d6cc */
    if ((*(long *)(param_1 + 0x40) != 0) &&
       (lVar3 = *(long *)(*(long *)(param_1 + 0x40) + 0x38), lVar3 != 0)) {
      fVar5 = (float)UnityEngine_Time__get_time_43cd540(0,0);
      return fVar5 < *(float *)(lVar3 + 0x220);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

