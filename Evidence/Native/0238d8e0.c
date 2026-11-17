/* IL2CPP: Dino.BusSand.App.UI.KitPulse$$OnEnable
void Dino_BusSand_App_UI_KitPulse__OnEnable (Dino_BusSand_App_UI_KitPulse_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.KitPulse$$OnEnable
   void Dino_BusSand_App_UI_KitPulse__OnEnable (Dino_BusSand_App_UI_KitPulse_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_KitPulse__OnEnable_228d8e0
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = UnityEngine_Component__get_transform_43bcd18(param_4,0);
  if (lVar1 != 0) {
    uVar2 = UnityEngine_Transform__get_localScale_43d1b0c(lVar1,0);
    *(undefined4 *)(param_4 + 0x28) = uVar2;
    *(undefined4 *)(param_4 + 0x2c) = param_2;
    *(undefined4 *)(param_4 + 0x30) = param_3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

