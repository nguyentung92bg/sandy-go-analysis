/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$GoldenReachedStage
int32_t Dino_BusSand_App_Meta_GiftPackFeature__GoldenReachedStage (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, int32_t packId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$GoldenReachedStage
   int32_t Dino_BusSand_App_Meta_GiftPackFeature__GoldenReachedStage
   (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, int32_t packId, const MethodInfo* method); */

int Dino_BusSand_App_Meta_GiftPackFeature__GoldenReachedStage_223dd78
              (undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar2 = PTR_DAT_04caec48;
  if ((bRam0000000004f9bee1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caec48);
    bRam0000000004f9bee1 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar6 = Dino_BusSand_App_Meta_GiftPackFeature__GoldenStages_223b83c(param_2);
  lVar7 = Dino_BusSand_App_Meta_GiftPackFeature__get_Golden_223b7dc(param_1);
  if (lVar7 != 0) {
    iVar1 = *(int *)(lVar7 + 0x10);
    if ((bRam0000000004f9bed7 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04caeea8);
      FUN_02132f7c(PTR_DAT_04caeeb0);
      FUN_02132f7c(PTR_DAT_04caeeb8);
      FUN_02132f7c(PTR_DAT_04caeec0);
      bRam0000000004f9bed7 = 1;
    }
    puVar3 = PTR_DAT_04caeeb0;
    puVar2 = PTR_DAT_04caeea8;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    if (lVar6 != 0) {
      System_Collections_Generic_List_GiftPackFeature_GoldenStage___GetEnumerator_3b3b948
                (&uStack_50,lVar6,*(undefined8 *)PTR_DAT_04caeec0);
      iVar4 = 0;
      while (iVar8 = iVar4,
            uVar5 = System_Collections_Generic_List_Enumerator_GiftPackFeature_GoldenStage___MoveNext_3610858
                              (&uStack_50,*(undefined8 *)puVar3), (uVar5 & 1) != 0) {
        iVar4 = (int)uStack_40;
        if ((int)uStack_40 <= iVar8 || iVar1 < uStack_40._4_4_) {
          iVar4 = iVar8;
        }
      }
      System_Collections_Generic_List_Enumerator_GiftPackFeature_GoldenStage___Dispose_3610854
                (&uStack_50,*(undefined8 *)puVar2);
      return iVar8;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

