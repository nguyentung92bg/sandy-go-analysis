/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$CheckGoldenAllStagesForcePopup
void Dino_BusSand_App_Meta_GiftPackFeature__CheckGoldenAllStagesForcePopup (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, int32_t packId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$CheckGoldenAllStagesForcePopup
   void Dino_BusSand_App_Meta_GiftPackFeature__CheckGoldenAllStagesForcePopup
   (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, int32_t packId, const MethodInfo* method); */

void Dino_BusSand_App_Meta_GiftPackFeature__CheckGoldenAllStagesForcePopup_223c88c
               (undefined8 param_1,undefined4 param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_34;
  
  puVar1 = PTR_DAT_04cb3390;
  uStack_34 = param_2;
  if ((bRam0000000004f9bed9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caeea8);
    FUN_02132f7c(PTR_DAT_04caeeb0);
    FUN_02132f7c(PTR_DAT_04caeeb8);
    FUN_02132f7c(PTR_DAT_04caec48);
    FUN_02132f7c(PTR_DAT_04caeec0);
    FUN_02132f7c(PTR_DAT_04cb3390);
    FUN_02132f7c(PTR_DAT_04cb3668);
    bRam0000000004f9bed9 = 1;
  }
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  lVar2 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(param_1,*(undefined8 *)puVar1)
  ;
  if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x70), lVar2 != 0)) {
    if ((*(char *)(lVar2 + 0x48) == '\0') &&
       ((uVar3 = Dino_BusSand_App_Meta_GiftPackFeature__IsPackActive_223a610(param_1,param_2),
        (uVar3 & 1) != 0 &&
        (lVar4 = Dino_BusSand_App_Meta_GiftPackFeature__RemainingSeconds_223a6bc(param_1,param_2),
        0 < lVar4)))) {
      if (*(int *)(*(long *)PTR_DAT_04caec48 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar4 = Dino_BusSand_App_Meta_GiftPackFeature__GoldenStages_223b83c(param_2);
      if (lVar4 == 0) goto LAB_0233ca48;
      System_Collections_Generic_List_GiftPackFeature_GoldenStage___GetEnumerator_3b3b948
                (&uStack_60,lVar4,*(undefined8 *)PTR_DAT_04caeec0);
      puVar1 = PTR_DAT_04caeeb0;
      iVar6 = 0;
      while (uVar3 = System_Collections_Generic_List_Enumerator_GiftPackFeature_GoldenStage___MoveNext_3610858
                               (&uStack_60,*(undefined8 *)puVar1), (uVar3 & 1) != 0) {
        if (iVar6 <= uStack_50._4_4_) {
          iVar6 = uStack_50._4_4_;
        }
      }
      System_Collections_Generic_List_Enumerator_GiftPackFeature_GoldenStage___Dispose_3610854
                (&uStack_60,*(undefined8 *)PTR_DAT_04caeea8);
      if ((0 < iVar6) && (iVar6 <= *(int *)(lVar2 + 0x10))) {
        *(undefined1 *)(lVar2 + 0x48) = 1;
        uVar5 = System_Int32__ToString_482d750(&uStack_34,0);
        uVar5 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cb3668,uVar5,0);
        Dino_BusSand_App_Meta_GiftPackFeature__AddHallCommand_223b0ac(param_1,uVar5);
      }
    }
    return;
  }
LAB_0233ca48:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

