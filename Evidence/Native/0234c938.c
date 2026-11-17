/* IL2CPP: Dino.BusSand.App.Meta.StreakRateFeature$$CurRateNumber
int32_t Dino_BusSand_App_Meta_StreakRateFeature__CurRateNumber (Dino_BusSand_App_Meta_StreakRateFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.StreakRateFeature$$CurRateNumber
   int32_t Dino_BusSand_App_Meta_StreakRateFeature__CurRateNumber
   (Dino_BusSand_App_Meta_StreakRateFeature_o* __this, const MethodInfo* method); */

int Dino_BusSand_App_Meta_StreakRateFeature__CurRateNumber_224c938(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  if ((bRam0000000004f9bfa8 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb2f18);
    FUN_02132f7c(PTR_DAT_04cb2f20);
    FUN_02132f7c(PTR_DAT_04cb2f28);
    FUN_02132f7c(PTR_DAT_04cb2f30);
    bRam0000000004f9bfa8 = 1;
  }
  uStack_48 = 0;
  uStack_40 = 0;
  lStack_38 = 0;
  lVar3 = Dino_BusSand_App_Meta_StreakRateFeature__get_CurrentSlot_224c008(param_1);
  if (lVar3 == 0) {
    iVar5 = 1;
  }
  else {
    Dino_BusSand_App_Meta_StreakRateFeature__Config_224b744(param_1,*(undefined4 *)(lVar3 + 0x10));
    puVar2 = PTR_DAT_04cb2f20;
    puVar1 = PTR_DAT_04cb2f18;
    if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_48,*(long *)(param_1 + 0x30),*(undefined8 *)PTR_DAT_04cb2f30);
    iVar5 = 1;
    while (uVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                             (&uStack_48,*(undefined8 *)puVar2), (uVar4 & 1) != 0) {
      if (lStack_38 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if (*(int *)(lStack_38 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      if (*(int *)(lVar3 + 0x14) < *(int *)(lStack_38 + 0x20)) break;
      if (*(int *)(lStack_38 + 0x18) == 1) {
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      if (iVar5 <= *(int *)(lStack_38 + 0x24)) {
        iVar5 = *(int *)(lStack_38 + 0x24);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_48,*(undefined8 *)puVar1);
  }
  return iVar5;
}

