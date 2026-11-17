/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$TryCloseCurrentGoldenPackIfAllClaimed
void Dino_BusSand_App_Meta_GiftPackFeature__TryCloseCurrentGoldenPackIfAllClaimed (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$TryCloseCurrentGoldenPackIfAllClaimed
   void Dino_BusSand_App_Meta_GiftPackFeature__TryCloseCurrentGoldenPackIfAllClaimed
   (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, const MethodInfo* method); */

long Dino_BusSand_App_Meta_GiftPackFeature__TryCloseCurrentGoldenPackIfAllClaimed_2236dd0
               (undefined8 param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
                    /* try { // try from 02336dd8 to 02436ddb has its CatchHandler @ 02336de0 */
  lVar4 = Dino_BusSand_App_Meta_GiftPackFeature__FindFirstConfig_2234c34(param_1,3);
  puVar2 = PTR_DAT_04cb3390;
                    /* catch() { ... } // from try @ 02336dd8 with catch @ 02336de0 */
                    /* try { // try from 02336de4 to 02436deb has its CatchHandler @ 02336df4 */
                    /* try { // try from 02336dec to 02436df7 has its CatchHandler @ 02336af8 */
  if ((lVar4 == 0) || (iVar1 = *(int *)(lVar4 + 0x10), iVar1 < 1)) {
    return lVar4;
  }
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
  lVar4 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(param_1,*(undefined8 *)puVar2)
  ;
  if (lVar4 == 0) {
LAB_0233dd14:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (((0 < iVar1) && (lVar4 = *(long *)(lVar4 + 0x70), lVar4 != 0)) &&
     (*(char *)(lVar4 + 0x28) != '\0')) {
    if (*(int *)(*(long *)PTR_DAT_04caec48 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar5 = Dino_BusSand_App_Meta_GiftPackFeature__GoldenStages_223b83c(iVar1);
    if (lVar5 == 0) goto LAB_0233dd14;
    if (*(int *)(lVar5 + 0x18) != 0) {
      System_Collections_Generic_List_GiftPackFeature_GoldenStage___GetEnumerator_3b3b948
                (&uStack_60,lVar5,*(undefined8 *)PTR_DAT_04caeec0);
      puVar3 = PTR_DAT_04caeeb0;
      puVar2 = PTR_DAT_04cad860;
      do {
        uVar6 = System_Collections_Generic_List_Enumerator_GiftPackFeature_GoldenStage___MoveNext_3610858
                          (&uStack_60,*(undefined8 *)puVar3);
        if ((uVar6 & 1) == 0) {
          System_Collections_Generic_List_Enumerator_GiftPackFeature_GoldenStage___Dispose_3610854
                    (&uStack_60,*(undefined8 *)PTR_DAT_04caeea8);
          lVar4 = Dino_BusSand_App_Meta_GiftPackFeature__State_2234ff8(param_1,iVar1);
          if (lVar4 != 0) {
            if (*(char *)(lVar4 + 0x30) == '\0') {
              return 0;
            }
            Dino_BusSand_App_Meta_GiftPackFeature__ExpirePack_223a404(param_1,iVar1);
            return 1;
          }
          goto LAB_0233dd14;
        }
        if (*(int *)(lVar4 + 0x10) < uStack_50._4_4_) break;
        if (*(long *)(lVar4 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        uVar6 = System_Collections_Generic_List_int___Contains_3a2c3ec
                          (*(long *)(lVar4 + 0x30),uStack_50 & 0xffffffff,*(undefined8 *)puVar2);
      } while ((uVar6 & 1) != 0);
      System_Collections_Generic_List_Enumerator_GiftPackFeature_GoldenStage___Dispose_3610854
                (&uStack_60,*(undefined8 *)PTR_DAT_04caeea8);
    }
  }
  return 0;
}

