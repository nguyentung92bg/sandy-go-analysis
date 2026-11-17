/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController$$Unload
void Dino_BusSand_App_Gameplay_GameplayController__Unload (Dino_BusSand_App_Gameplay_GameplayController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController$$Unload
   void Dino_BusSand_App_Gameplay_GameplayController__Unload
   (Dino_BusSand_App_Gameplay_GameplayController_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_Gameplay_GameplayController__Unload_229f9f8(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c24e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c24e = 1;
  }
  UnityEngine_MonoBehaviour__StopAllCoroutines_43c4224(param_1,0);
  Dino_BusSand_App_Gameplay_GameplayController__ClearHandlers_229d4e4(param_1);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
  if ((uVar2 & 1) != 0) {
    if (*(long *)(param_1 + 0x38) != 0) {
      Dino_BusSand_View_GameView__Clear_239c7a8(*(long *)(param_1 + 0x38),0);
      if ((*(long *)(param_1 + 0x38) != 0) &&
         (lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 0x38), lVar3 != 0)) {
        UnityEngine_Behaviour__set_enabled_43bc50c(lVar3,0,0);
        goto LAB_0239fa94;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
LAB_0239fa94:
  UnityEngine_Time__set_timeScale_43cd6d8(0x3f800000,0);
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}

