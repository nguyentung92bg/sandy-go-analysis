/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController$$ClearHandlers
void Dino_BusSand_App_Gameplay_GameplayController__ClearHandlers (Dino_BusSand_App_Gameplay_GameplayController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController$$ClearHandlers
   void Dino_BusSand_App_Gameplay_GameplayController__ClearHandlers
   (Dino_BusSand_App_Gameplay_GameplayController_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_Gameplay_GameplayController__ClearHandlers_229d4e4(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c24a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c24a = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Equality_43c6f30(uVar4,0,0);
  if ((uVar2 & 1) != 0) {
    return;
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    puVar3 = (undefined8 *)(*(long *)(param_1 + 0x38) + 0x88);
    *puVar3 = 0;
    thunk_FUN_02134474(puVar3,0);
    if (*(long *)(param_1 + 0x38) != 0) {
      puVar3 = (undefined8 *)(*(long *)(param_1 + 0x38) + 0x90);
      *puVar3 = 0;
      if (iRam00000000051c1b10 != 0) {
        FUN_02220bf0(1L << ((ulong)puVar3 >> 0xc & 0x3f),
                     ((ulong)puVar3 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

