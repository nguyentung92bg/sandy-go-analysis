/* IL2CPP: Dino.BusSand.App.Meta.StreakRateFeature$$RateFor
int32_t Dino_BusSand_App_Meta_StreakRateFeature__RateFor (Dino_BusSand_App_Meta_StreakRateFeature_o* __this, int32_t streak, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.StreakRateFeature$$RateFor
   int32_t Dino_BusSand_App_Meta_StreakRateFeature__RateFor
   (Dino_BusSand_App_Meta_StreakRateFeature_o* __this, int32_t streak, const MethodInfo* method); */

int Dino_BusSand_App_Meta_StreakRateFeature__RateFor_224cacc(long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  if ((bRam0000000004f9bfa9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb2f18);
    FUN_02132f7c(PTR_DAT_04cb2f20);
    FUN_02132f7c(PTR_DAT_04cb2f28);
    FUN_02132f7c(PTR_DAT_04cb2f30);
    bRam0000000004f9bfa9 = 1;
  }
  uStack_48 = 0;
  uStack_40 = 0;
  lStack_38 = 0;
  lVar3 = Dino_BusSand_App_Meta_StreakRateFeature__get_CurrentSlot_224c008(param_1);
  if (lVar3 == 0) {
    uVar5 = 3000;
  }
  else {
    lVar3 = Dino_BusSand_App_Meta_StreakRateFeature__get_CurrentSlot_224c008(param_1);
    if (lVar3 == 0) goto LAB_0234cc10;
    uVar5 = *(undefined4 *)(lVar3 + 0x10);
  }
  if (param_1 != 0) {
    Dino_BusSand_App_Meta_StreakRateFeature__Config_224b744(param_1,uVar5);
    puVar2 = PTR_DAT_04cb2f20;
    puVar1 = PTR_DAT_04cb2f18;
    if (*(long *)(param_1 + 0x30) != 0) {
      System_Collections_Generic_List_object___GetEnumerator_3a825f0
                (&uStack_48,*(long *)(param_1 + 0x30),*(undefined8 *)PTR_DAT_04cb2f30);
      iVar6 = 1;
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
        if (param_2 < *(int *)(lStack_38 + 0x20)) break;
        if (*(int *)(lStack_38 + 0x18) == 1) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        if (iVar6 <= *(int *)(lStack_38 + 0x24)) {
          iVar6 = *(int *)(lStack_38 + 0x24);
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                (&uStack_48,*(undefined8 *)puVar1);
      return iVar6;
    }
  }
LAB_0234cc10:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

