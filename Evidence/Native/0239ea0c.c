/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController$$RoadCounterWorldAnchor
UnityEngine_Vector3_o Dino_BusSand_App_Gameplay_GameplayController__RoadCounterWorldAnchor (Dino_BusSand_App_Gameplay_GameplayController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController$$RoadCounterWorldAnchor
   UnityEngine_Vector3_o Dino_BusSand_App_Gameplay_GameplayController__RoadCounterWorldAnchor
   (Dino_BusSand_App_Gameplay_GameplayController_o* __this, const MethodInfo* method); */

float Dino_BusSand_App_Gameplay_GameplayController__RoadCounterWorldAnchor_229ea0c(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c244 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c244 = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
  if ((uVar2 & 1) != 0) {
    if (*(long *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 0x30);
    if (lVar3 != 0) {
      return (*(float *)(lVar3 + 0xd4) + *(float *)(lVar3 + 0xd8)) * 0.5;
    }
  }
  if (cRam0000000004f9b65d == '\0') {
    FUN_02132f7c(PTR_DAT_04caa208);
    cRam0000000004f9b65d = '\x01';
  }
  return **(float **)(*(long *)PTR_DAT_04caa208 + 0xb8);
}

