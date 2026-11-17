/* IL2CPP: Dino.BusSand.App.UI.ClimbTowerPanel$$get_MinScrollY
float Dino_BusSand_App_UI_ClimbTowerPanel__get_MinScrollY (Dino_BusSand_App_UI_ClimbTowerPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ClimbTowerPanel$$get_MinScrollY
   float Dino_BusSand_App_UI_ClimbTowerPanel__get_MinScrollY (Dino_BusSand_App_UI_ClimbTowerPanel_o*
   __this, const MethodInfo* method); */

float Dino_BusSand_App_UI_ClimbTowerPanel__get_MinScrollY_21a5f04(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  float fVar4;
  float in_s3;
  float fVar5;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9ba37 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9ba37 = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar3,0,0);
  if ((uVar2 & 1) == 0) {
    return 0.0;
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    UnityEngine_RectTransform__get_rect_43cf450(0,*(long *)(param_1 + 0x48),0);
    if (*(long *)(param_1 + 0x50) != 0) {
      fVar5 = in_s3;
      UnityEngine_RectTransform__get_rect_43cf450(*(long *)(param_1 + 0x50),0);
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

