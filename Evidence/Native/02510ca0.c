/* IL2CPP: Dino.BusSand.Core.LevelData$$FromJson
Dino_BusSand_Core_LevelData_o* Dino_BusSand_Core_LevelData__FromJson (System_String_o* json, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.LevelData$$FromJson
   Dino_BusSand_Core_LevelData_o* Dino_BusSand_Core_LevelData__FromJson (System_String_o* json,
   const MethodInfo* method); */

long Dino_BusSand_Core_LevelData__FromJson_2410ca0(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_DAT_04cbe550;
  if ((bRam0000000004f9cb46 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbe550);
    bRam0000000004f9cb46 = 1;
  }
  lVar4 = *(long *)puVar1;
  puVar5 = *(undefined8 **)(lVar4 + 0x38);
  if (puVar5 == (undefined8 *)0x0) {
    FUN_0216b4cc(lVar4);
    puVar5 = *(undefined8 **)(lVar4 + 0x38);
  }
  uVar6 = *puVar5;
  if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar6 = System_Type__GetTypeFromHandle_483f0b4(uVar6,0);
  lVar2 = UnityEngine_JsonUtility__FromJson_4432504(param_1,uVar6,0);
  lVar4 = *(long *)(*(long *)(lVar4 + 0x38) + 8);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0216b470(lVar4);
  }
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = thunk_FUN_0216e7a0(lVar2,lVar4);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021335a4(lVar2,lVar4);
    }
  }
  return lVar3;
}

