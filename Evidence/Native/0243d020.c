/* IL2CPP: Dino.BusSand.App.UI.LevelEnterFlow$$Alive
bool Dino_BusSand_App_UI_LevelEnterFlow__Alive (Dino_BusSand_App_Gameplay_GameplayController_o* gc, int32_t run, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.LevelEnterFlow$$Alive
   bool Dino_BusSand_App_UI_LevelEnterFlow__Alive (Dino_BusSand_App_Gameplay_GameplayController_o*
   gc, int32_t run, const MethodInfo* method); */

bool Dino_BusSand_App_UI_LevelEnterFlow__Alive_233d020(long param_1,int param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  
  puVar1 = PTR_DAT_04cacb20;
  if ((bRam0000000004f9c664 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cacb20);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c664 = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  if (*(int *)(*(long *)(lVar2 + 0xb8) + 0xc) == param_2) {
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = UnityEngine_Object__op_Inequality_43c8dec(param_1,0,0);
    if ((uVar3 & 1) != 0) {
      if (param_1 != 0) {
        return *(int *)(param_1 + 0x20) == 2;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  return false;
}

