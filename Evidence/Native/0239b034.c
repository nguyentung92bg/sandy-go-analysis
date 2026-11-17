/* IL2CPP: Dino.BusSand.App.Levels.LevelDatabase$$ForDisplayLevel
Dino_BusSand_App_Levels_LevelData_o* Dino_BusSand_App_Levels_LevelDatabase__ForDisplayLevel (int32_t displayLevel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Levels.LevelDatabase$$ForDisplayLevel
   Dino_BusSand_App_Levels_LevelData_o* Dino_BusSand_App_Levels_LevelDatabase__ForDisplayLevel
   (int32_t displayLevel, const MethodInfo* method); */

long Dino_BusSand_App_Levels_LevelDatabase__ForDisplayLevel_229b034(undefined4 param_1)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined4 uVar6;
  uint uVar7;
  long lVar8;
  long lStack_28;
  
  puVar1 = PTR_DAT_04cacb18;
  if ((bRam0000000004f9c21d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cacb18);
    bRam0000000004f9c21d = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = Dino_BusSand_App_Levels_LevelDatabase__DesignLevelId_229ad40(param_1);
  puVar1 = PTR_DAT_04cacb18;
  if ((bRam0000000004f9c21c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb5790);
    FUN_02132f7c(PTR_DAT_04cb5798);
    FUN_02132f7c(PTR_DAT_04cb1868);
    FUN_02132f7c(PTR_DAT_04cb57a0);
    FUN_02132f7c(PTR_DAT_04cacb18);
    FUN_02132f7c(PTR_DAT_04cb57a8);
    bRam0000000004f9c21c = 1;
  }
  lVar3 = *(long *)puVar1;
  lStack_28 = 0;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar1;
  }
  if (**(long **)(lVar3 + 0xb8) == 0) goto LAB_0239b030;
  uVar4 = System_Collections_Generic_Dictionary_int__object___TryGetValue_3438e08
                    (**(long **)(lVar3 + 0xb8),uVar2,&lStack_28,*(undefined8 *)PTR_DAT_04cb5790);
  if ((uVar4 & 1) != 0) {
    return lStack_28;
  }
  if (*(int *)(*(long *)PTR_DAT_04cb1868 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar3 = Dino_BusSand_Core_LevelCatalog__Load_24107d8(uVar2,0);
  if (lVar3 == 0) {
    return 0;
  }
  lVar5 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb57a0);
  System_Object___ctor_4870e5c(lVar5,0);
  if (lVar5 == 0) goto LAB_0239b030;
  lVar8 = *(long *)(lVar3 + 0x30);
  *(uint *)(lVar5 + 0x10) = uVar2;
  uVar6 = 0;
  if (lVar8 != 0) {
    lVar8 = *(long *)(lVar8 + 0x18);
    uVar6 = 0;
    if (lVar8 != 0) {
      uVar6 = *(undefined4 *)(lVar8 + 0x18);
    }
  }
  lVar8 = *(long *)puVar1;
  *(undefined4 *)(lVar5 + 0x14) = uVar6;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if ((int)uVar2 < 10) {
LAB_0239afd0:
    uVar7 = 0;
  }
  else if (uVar2 == 10) {
    uVar7 = 1;
  }
  else {
    if (uVar2 < 0xf) goto LAB_0239afd0;
    if ((uVar2 * -0x33333333 >> 1 | uVar2 * -0x80000000) < 0x1999999a) {
      uVar7 = 2;
    }
    else {
      uVar7 = (uint)(uVar2 * -0x33333333 < 0x33333334);
    }
  }
  *(uint *)(lVar5 + 0x18) = uVar7;
  *(long *)(lVar5 + 0x20) = lVar3;
  thunk_FUN_02134474((long *)(lVar5 + 0x20),lVar3);
  lStack_28 = lVar5;
  if (**(long **)(*(long *)puVar1 + 0xb8) != 0) {
    System_Collections_Generic_Dictionary_int__object___set_Item_3437318
              (**(long **)(*(long *)puVar1 + 0xb8),uVar2,lVar5,*(undefined8 *)PTR_DAT_04cb5798);
    return lStack_28;
  }
LAB_0239b030:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

