/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$GoldenRedPoint
bool Dino_BusSand_App_Meta_GiftPackFeature__GoldenRedPoint (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$GoldenRedPoint
   bool Dino_BusSand_App_Meta_GiftPackFeature__GoldenRedPoint
   (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, const MethodInfo* method); */

uint Dino_BusSand_App_Meta_GiftPackFeature__GoldenRedPoint_223b634(undefined8 param_1)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((bRam0000000004f9bed3 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caeea8);
    FUN_02132f7c(PTR_DAT_04caeeb0);
    FUN_02132f7c(PTR_DAT_04caeeb8);
    FUN_02132f7c(PTR_DAT_04caec48);
    FUN_02132f7c(PTR_DAT_04caeec0);
    bRam0000000004f9bed3 = 1;
  }
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  lVar3 = Dino_BusSand_App_Meta_GiftPackFeature__get_Golden_223b7dc(param_1);
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x3c) < *(int *)(lVar3 + 0x10)) {
      lVar4 = Dino_BusSand_App_Meta_GiftPackFeature__FindFirstConfig_2234c34(param_1,3);
      if (lVar4 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)(lVar4 + 0x10);
      }
      if (*(int *)(*(long *)PTR_DAT_04caec48 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar4 = Dino_BusSand_App_Meta_GiftPackFeature__GoldenStages_223b83c(uVar5);
      if (lVar4 == 0) goto LAB_0233b768;
      System_Collections_Generic_List_GiftPackFeature_GoldenStage___GetEnumerator_3b3b948
                (&uStack_40,lVar4,*(undefined8 *)PTR_DAT_04caeec0);
      puVar1 = PTR_DAT_04caeeb0;
      do {
        uVar2 = System_Collections_Generic_List_Enumerator_GiftPackFeature_GoldenStage___MoveNext_3610858
                          (&uStack_40,*(undefined8 *)puVar1);
        if ((uVar2 & 1) == 0) break;
      } while ((uStack_30._4_4_ <= *(int *)(lVar3 + 0x3c)) ||
              (*(int *)(lVar3 + 0x10) < uStack_30._4_4_));
      System_Collections_Generic_List_Enumerator_GiftPackFeature_GoldenStage___Dispose_3610854
                (&uStack_40,*(undefined8 *)PTR_DAT_04caeea8);
    }
    else {
      uVar2 = 0;
    }
    return uVar2 & 1;
  }
LAB_0233b768:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

