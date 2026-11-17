/* IL2CPP: Dino.BusSand.App.UI.HudPanel$$PictureHeight
float Dino_BusSand_App_UI_HudPanel__PictureHeight (Dino_BusSand_App_UI_HudPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HudPanel$$PictureHeight
   float Dino_BusSand_App_UI_HudPanel__PictureHeight (Dino_BusSand_App_UI_HudPanel_o* __this, const
   MethodInfo* method); */

float Dino_BusSand_App_UI_HudPanel__PictureHeight_230eddc
                (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c52f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c52f = 1;
  }
  uVar4 = *(undefined8 *)(param_4 + 0x40);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Equality_43c6f30(uVar4,0,0);
  fVar5 = _UNK_00e1fdd0;
  if ((uVar2 & 1) != 0) {
    return fVar5;
  }
  if (*(long *)(param_4 + 0x40) != 0) {
    uVar4 = Dino_BusSand_App_Gameplay_GameplayController__get_Cam_229b328
                      (*(long *)(param_4 + 0x40),0);
    lVar3 = *(long *)puVar1;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac(lVar3);
    }
    uVar2 = UnityEngine_Object__op_Equality_43c6f30(uVar4,0,0);
    if ((uVar2 & 1) != 0) {
      return fVar5;
    }
    if (*(long *)(param_4 + 0x40) != 0) {
      lVar3 = Dino_BusSand_App_Gameplay_GameplayController__get_Cam_229b328
                        (*(long *)(param_4 + 0x40),0);
      if ((*(long *)(param_4 + 0x40) != 0) &&
         (Dino_BusSand_App_Gameplay_GameplayController__PictureWorldAnchor_229e278
                    (*(long *)(param_4 + 0x40),0), lVar3 != 0)) {
        UnityEngine_Camera__WorldToViewportPoint_435c574(lVar3,0);
        if (param_3 <= 0.0) {
          return fVar5;
        }
        fVar5 = _UNK_00e20180;
        if (param_2 <= _UNK_00e20180) {
          fVar5 = param_2;
        }
        if (param_2 < 0.5) {
          return 0.5;
        }
        return fVar5;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

