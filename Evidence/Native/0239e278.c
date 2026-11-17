/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController$$PictureWorldAnchor
UnityEngine_Vector3_o Dino_BusSand_App_Gameplay_GameplayController__PictureWorldAnchor (Dino_BusSand_App_Gameplay_GameplayController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController$$PictureWorldAnchor
   UnityEngine_Vector3_o Dino_BusSand_App_Gameplay_GameplayController__PictureWorldAnchor
   (Dino_BusSand_App_Gameplay_GameplayController_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_Gameplay_GameplayController__PictureWorldAnchor_229e278(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c241 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c241 = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar3,0,0);
  if ((uVar2 & 1) != 0) {
    if (*(long *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (*(long *)(*(long *)(param_1 + 0x38) + 0x30) != 0) {
      if (cRam0000000004f9c25f == '\0') {
        FUN_02132f7c(PTR_DAT_04caa208);
        cRam0000000004f9c25f = '\x01';
      }
      uVar3 = *(undefined8 *)PTR_DAT_04caa208;
      return;
    }
  }
  if (cRam0000000004f9b65d == '\0') {
    FUN_02132f7c(PTR_DAT_04caa208);
    cRam0000000004f9b65d = '\x01';
  }
  uVar3 = *(undefined8 *)PTR_DAT_04caa208;
  return;
}

