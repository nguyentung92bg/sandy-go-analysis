/* IL2CPP: Dino.BusSand.Core.LevelCatalog$$ConfigId
System_String_o* Dino_BusSand_Core_LevelCatalog__ConfigId (int32_t level, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.LevelCatalog$$ConfigId
   System_String_o* Dino_BusSand_Core_LevelCatalog__ConfigId (int32_t level, const MethodInfo*
   method); */

undefined8 Dino_BusSand_Core_LevelCatalog__ConfigId_241039c(undefined4 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_04cb1868;
  if ((bRam0000000004f9cb3a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac008);
    FUN_02132f7c(PTR_DAT_04cab608);
    FUN_02132f7c(PTR_DAT_04caaf80);
    FUN_02132f7c(PTR_DAT_04cb1868);
    FUN_02132f7c(PTR_DAT_04cbe538);
    FUN_02132f7c(PTR_DAT_04cab330);
    bRam0000000004f9cb3a = 1;
  }
  uStack_28 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = Dino_BusSand_Core_LevelCatalog__FileFor_2410524(param_1);
  lVar5 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18);
  if (lVar5 != 0) {
    uVar3 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                      (lVar5,uVar2,&uStack_28,*(undefined8 *)PTR_DAT_04cab608);
    if ((uVar3 & 1) == 0) {
      if (*(int *)(*(long *)PTR_DAT_04cac008 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar5 = Dino_BusSand_DataPack__Open_2379630(*(undefined8 *)PTR_DAT_04cbe538,0);
      if (lVar5 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = Dino_BusSand_DataPack__Text_237b52c(lVar5,uVar2,0);
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar4 = Dino_BusSand_Core_LevelCatalog__ContentHash_241029c(uVar4);
      uStack_28 = System_String__Concat_46d2b84(uVar2,*(undefined8 *)PTR_DAT_04cab330,uVar4,0);
      lVar5 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18);
      if (lVar5 == 0) goto LAB_02510520;
      System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
                (lVar5,uVar2,uStack_28,*(undefined8 *)PTR_DAT_04caaf80);
    }
    return uStack_28;
  }
LAB_02510520:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

