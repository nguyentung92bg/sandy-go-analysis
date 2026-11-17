/* IL2CPP: Dino.BusSand.App.Meta.StreakRateFeature$$CurRateIndex
int32_t Dino_BusSand_App_Meta_StreakRateFeature__CurRateIndex (Dino_BusSand_App_Meta_StreakRateFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.StreakRateFeature$$CurRateIndex
   int32_t Dino_BusSand_App_Meta_StreakRateFeature__CurRateIndex
   (Dino_BusSand_App_Meta_StreakRateFeature_o* __this, const MethodInfo* method); */

undefined4 Dino_BusSand_App_Meta_StreakRateFeature__CurRateIndex_224cc70(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined4 uVar6;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  if ((bRam0000000004f9bfaa & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb2f18);
    FUN_02132f7c(PTR_DAT_04cb2f20);
    FUN_02132f7c(PTR_DAT_04cb2f28);
    FUN_02132f7c(PTR_DAT_04cb2f30);
    bRam0000000004f9bfaa = 1;
  }
  uStack_50 = 0;
  uStack_48 = 0;
  lStack_40 = 0;
  lVar4 = Dino_BusSand_App_Meta_StreakRateFeature__get_CurrentSlot_224c008(param_1);
  if (lVar4 == 0) {
    uVar6 = 0;
  }
  else {
    Dino_BusSand_App_Meta_StreakRateFeature__Config_224b744(param_1,*(undefined4 *)(lVar4 + 0x10));
    puVar3 = PTR_DAT_04cb2f20;
    puVar2 = PTR_DAT_04cb2f18;
    if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_68,*(long *)(param_1 + 0x30),*(undefined8 *)PTR_DAT_04cb2f30);
    uVar6 = 0;
    lStack_40 = lStack_58;
    uStack_48 = puStack_60;
    uStack_50 = uStack_68;
    uStack_68 = 0;
    puStack_60 = &uStack_50;
    while (uVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                             (&uStack_50,*(undefined8 *)puVar3), (uVar5 & 1) != 0) {
      if (lStack_40 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar1 = *(uint *)(lStack_40 + 0x18);
      if (uVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      if (*(int *)(lVar4 + 0x14) <= *(int *)(lStack_40 + 0x20)) {
        if (uVar1 < 3) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        uVar6 = *(undefined4 *)(lStack_40 + 0x28);
        break;
      }
      if (uVar1 < 3) {
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      uVar6 = *(undefined4 *)(lStack_40 + 0x28);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_50,*(undefined8 *)puVar2);
  }
  return uVar6;
}

