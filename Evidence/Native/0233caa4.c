/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$CanClaimGoldenStage
bool Dino_BusSand_App_Meta_GiftPackFeature__CanClaimGoldenStage (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, int32_t packId, int32_t stageId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$CanClaimGoldenStage
   bool Dino_BusSand_App_Meta_GiftPackFeature__CanClaimGoldenStage
   (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, int32_t packId, int32_t stageId, const
   MethodInfo* method); */

byte Dino_BusSand_App_Meta_GiftPackFeature__CanClaimGoldenStage_223caa4
               (undefined8 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000004f9beda & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caeea8);
    FUN_02132f7c(PTR_DAT_04caeeb0);
    FUN_02132f7c(PTR_DAT_04caeeb8);
    FUN_02132f7c(PTR_DAT_04caec48);
    FUN_02132f7c(PTR_DAT_04cad860);
    FUN_02132f7c(PTR_DAT_04caeec0);
    bRam0000000004f9beda = 1;
  }
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  lVar5 = Dino_BusSand_App_Meta_GiftPackFeature__get_Golden_223b7dc(param_1);
  if (lVar5 != 0) {
    bVar3 = 0;
    if (*(char *)(lVar5 + 0x28) != '\0') {
      if (*(int *)(*(long *)PTR_DAT_04caec48 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar6 = Dino_BusSand_App_Meta_GiftPackFeature__GoldenStages_223b83c(param_2);
      puVar2 = PTR_DAT_04caeeb0;
      puVar1 = PTR_DAT_04caeea8;
      if (lVar6 == 0) goto LAB_0233cc0c;
      System_Collections_Generic_List_GiftPackFeature_GoldenStage___GetEnumerator_3b3b948
                (&uStack_50,lVar6,*(undefined8 *)PTR_DAT_04caeec0);
      do {
        bVar3 = System_Collections_Generic_List_Enumerator_GiftPackFeature_GoldenStage___MoveNext_3610858
                          (&uStack_50,*(undefined8 *)puVar2);
        if ((bVar3 & 1) == 0) goto LAB_0233cbbc;
      } while ((int)uStack_40 != param_3);
      if (*(int *)(lVar5 + 0x10) < (int)((ulong)uStack_40 >> 0x20)) {
LAB_0233cbbc:
        bVar4 = 0;
      }
      else {
        if (*(long *)(lVar5 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        bVar4 = System_Collections_Generic_List_int___Contains_3a2c3ec
                          (*(long *)(lVar5 + 0x30),param_3,*(undefined8 *)PTR_DAT_04cad860);
        bVar4 = bVar4 ^ 1;
      }
      System_Collections_Generic_List_Enumerator_GiftPackFeature_GoldenStage___Dispose_3610854
                (&uStack_50,*(undefined8 *)puVar1);
      bVar3 = bVar3 & bVar4;
    }
    return bVar3 & 1;
  }
LAB_0233cc0c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

