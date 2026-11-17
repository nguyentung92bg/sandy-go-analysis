/* IL2CPP: Dino.BusSand.Core.LevelData$$LoadByName
Dino_BusSand_Core_LevelData_o* Dino_BusSand_Core_LevelData__LoadByName (System_String_o* file, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.LevelData$$LoadByName
   Dino_BusSand_Core_LevelData_o* Dino_BusSand_Core_LevelData__LoadByName (System_String_o* file,
   const MethodInfo* method); */

long Dino_BusSand_Core_LevelData__LoadByName_2410854(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_04cac008;
  if ((bRam0000000004f9cb45 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac008);
    FUN_02132f7c(PTR_DAT_04cbe550);
    FUN_02132f7c(PTR_DAT_04cbe538);
    FUN_02132f7c(PTR_DAT_04cbe558);
    bRam0000000004f9cb45 = 1;
  }
  puVar2 = PTR_DAT_04cbe538;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar3 = Dino_BusSand_DataPack__Open_2379630(*(undefined8 *)puVar2,0);
  if ((lVar3 == 0) || (lVar3 = Dino_BusSand_DataPack__Text_237b52c(lVar3,param_1,0), lVar3 == 0)) {
    lVar3 = 0;
  }
  else {
    lVar3 = UnityEngine_JsonUtility__FromJson_object__27dae58(lVar3,*(undefined8 *)PTR_DAT_04cbe550)
    ;
    uVar4 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cbe558,param_1,0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    *(undefined8 *)(lVar3 + 0x68) = uVar4;
    thunk_FUN_02134474();
  }
  return lVar3;
}

