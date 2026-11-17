/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$TryCloseGoldenPackIfAllClaimed
bool Dino_BusSand_App_Meta_GiftPackFeature__TryCloseGoldenPackIfAllClaimed (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, int32_t packId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$TryCloseGoldenPackIfAllClaimed
   bool Dino_BusSand_App_Meta_GiftPackFeature__TryCloseGoldenPackIfAllClaimed
   (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, int32_t packId, const MethodInfo* method); */

undefined8
Dino_BusSand_App_Meta_GiftPackFeature__TryCloseGoldenPackIfAllClaimed_223db40
          (undefined8 param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar1 = PTR_DAT_04cb3390;
  if ((bRam0000000004f9bedf & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caeea8);
    FUN_02132f7c(PTR_DAT_04caeeb0);
    FUN_02132f7c(PTR_DAT_04caeeb8);
    FUN_02132f7c(PTR_DAT_04caec48);
    FUN_02132f7c(PTR_DAT_04cad860);
    FUN_02132f7c(PTR_DAT_04caeec0);
    FUN_02132f7c(PTR_DAT_04caf048);
    FUN_02132f7c(PTR_DAT_04cb3390);
    bRam0000000004f9bedf = 1;
  }
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  lVar3 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(param_1,*(undefined8 *)puVar1)
  ;
  if (lVar3 == 0) {
LAB_0233dd14:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (((0 < param_2) && (lVar3 = *(long *)(lVar3 + 0x70), lVar3 != 0)) &&
     (*(char *)(lVar3 + 0x28) != '\0')) {
    if (*(int *)(*(long *)PTR_DAT_04caec48 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar4 = Dino_BusSand_App_Meta_GiftPackFeature__GoldenStages_223b83c(param_2);
    if (lVar4 == 0) goto LAB_0233dd14;
    if (*(int *)(lVar4 + 0x18) != 0) {
      System_Collections_Generic_List_GiftPackFeature_GoldenStage___GetEnumerator_3b3b948
                (&uStack_60,lVar4,*(undefined8 *)PTR_DAT_04caeec0);
      puVar2 = PTR_DAT_04caeeb0;
      puVar1 = PTR_DAT_04cad860;
      do {
        uVar5 = System_Collections_Generic_List_Enumerator_GiftPackFeature_GoldenStage___MoveNext_3610858
                          (&uStack_60,*(undefined8 *)puVar2);
        if ((uVar5 & 1) == 0) {
          System_Collections_Generic_List_Enumerator_GiftPackFeature_GoldenStage___Dispose_3610854
                    (&uStack_60,*(undefined8 *)PTR_DAT_04caeea8);
          lVar3 = Dino_BusSand_App_Meta_GiftPackFeature__State_2234ff8(param_1,param_2);
          if (lVar3 != 0) {
            if (*(char *)(lVar3 + 0x30) == '\0') {
              return 0;
            }
            Dino_BusSand_App_Meta_GiftPackFeature__ExpirePack_223a404(param_1,param_2);
            return 1;
          }
          goto LAB_0233dd14;
        }
        if (*(int *)(lVar3 + 0x10) < uStack_50._4_4_) break;
        if (*(long *)(lVar3 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        uVar5 = System_Collections_Generic_List_int___Contains_3a2c3ec
                          (*(long *)(lVar3 + 0x30),uStack_50 & 0xffffffff,*(undefined8 *)puVar1);
      } while ((uVar5 & 1) != 0);
      System_Collections_Generic_List_Enumerator_GiftPackFeature_GoldenStage___Dispose_3610854
                (&uStack_60,*(undefined8 *)PTR_DAT_04caeea8);
    }
  }
  return 0;
}

