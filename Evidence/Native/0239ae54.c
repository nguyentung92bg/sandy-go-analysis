/* IL2CPP: Dino.BusSand.App.Levels.LevelDatabase$$Get
Dino_BusSand_App_Levels_LevelData_o* Dino_BusSand_App_Levels_LevelDatabase__Get (int32_t designId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Levels.LevelDatabase$$Get
   Dino_BusSand_App_Levels_LevelData_o* Dino_BusSand_App_Levels_LevelDatabase__Get (int32_t
   designId, const MethodInfo* method); */

long Dino_BusSand_App_Levels_LevelDatabase__Get_229ae54(uint param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined4 uVar5;
  uint uVar6;
  long lVar7;
  long lStack_28;
  
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
  lVar2 = *(long *)puVar1;
  lStack_28 = 0;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  if (**(long **)(lVar2 + 0xb8) == 0) goto LAB_0239b030;
  uVar3 = System_Collections_Generic_Dictionary_int__object___TryGetValue_3438e08
                    (**(long **)(lVar2 + 0xb8),param_1,&lStack_28,*(undefined8 *)PTR_DAT_04cb5790);
  if ((uVar3 & 1) != 0) {
    return lStack_28;
  }
  if (*(int *)(*(long *)PTR_DAT_04cb1868 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar2 = Dino_BusSand_Core_LevelCatalog__Load_24107d8(param_1,0);
  if (lVar2 == 0) {
    return 0;
  }
  lVar4 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb57a0);
  System_Object___ctor_4870e5c(lVar4,0);
  if (lVar4 == 0) goto LAB_0239b030;
  lVar7 = *(long *)(lVar2 + 0x30);
  *(uint *)(lVar4 + 0x10) = param_1;
  uVar5 = 0;
  if (lVar7 != 0) {
    lVar7 = *(long *)(lVar7 + 0x18);
    uVar5 = 0;
    if (lVar7 != 0) {
      uVar5 = *(undefined4 *)(lVar7 + 0x18);
    }
  }
  lVar7 = *(long *)puVar1;
  *(undefined4 *)(lVar4 + 0x14) = uVar5;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if ((int)param_1 < 10) {
LAB_0239afd0:
    uVar6 = 0;
  }
  else if (param_1 == 10) {
    uVar6 = 1;
  }
  else {
    if (param_1 < 0xf) goto LAB_0239afd0;
    if ((param_1 * -0x33333333 >> 1 | param_1 * -0x80000000) < 0x1999999a) {
      uVar6 = 2;
    }
    else {
      uVar6 = (uint)(param_1 * -0x33333333 < 0x33333334);
    }
  }
  *(uint *)(lVar4 + 0x18) = uVar6;
  *(long *)(lVar4 + 0x20) = lVar2;
  thunk_FUN_02134474((long *)(lVar4 + 0x20),lVar2);
  lStack_28 = lVar4;
  if (**(long **)(*(long *)puVar1 + 0xb8) != 0) {
    System_Collections_Generic_Dictionary_int__object___set_Item_3437318
              (**(long **)(*(long *)puVar1 + 0xb8),param_1,lVar4,*(undefined8 *)PTR_DAT_04cb5798);
    return lStack_28;
  }
LAB_0239b030:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

