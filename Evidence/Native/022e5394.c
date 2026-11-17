/* IL2CPP: Dino.BusSand.App.UI.StreakRatePanel$$get_MinY
float Dino_BusSand_App_UI_StreakRatePanel__get_MinY (Dino_BusSand_App_UI_StreakRatePanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.StreakRatePanel$$get_MinY
   float Dino_BusSand_App_UI_StreakRatePanel__get_MinY (Dino_BusSand_App_UI_StreakRatePanel_o*
   __this, const MethodInfo* method); */

float Dino_BusSand_App_UI_StreakRatePanel__get_MinY_21e5394(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  float fVar4;
  float in_s3;
  float fVar5;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9bbc7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9bbc7 = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
                    /* try { // try from 022e53e0 to 023e54a3 has its CatchHandler @ 022e5a5c */
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar3,0,0);
  if ((uVar2 & 1) != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x50);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar3,0,0);
    if ((uVar2 & 1) != 0) {
      if (*(long *)(param_1 + 0x50) != 0) {
        UnityEngine_RectTransform__get_rect_43cf450(*(long *)(param_1 + 0x50),0);
        if (*(long *)(param_1 + 0x58) != 0) {
          fVar5 = in_s3;
          UnityEngine_RectTransform__get_rect_43cf450(*(long *)(param_1 + 0x58),0);
          fVar4 = 0.0;
          if (0.0 <= in_s3 - fVar5) {
            fVar4 = in_s3 - fVar5;
          }
          return -fVar4;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  return 0.0;
}

