/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$OnPackPurchased
void Dino_BusSand_App_Meta_GiftPackFeature__OnPackPurchased (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, int32_t packId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$OnPackPurchased
   void Dino_BusSand_App_Meta_GiftPackFeature__OnPackPurchased
   (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, int32_t packId, const MethodInfo* method); */

void Dino_BusSand_App_Meta_GiftPackFeature__OnPackPurchased_2237f04
               (undefined8 param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  if ((bRam0000000004f9beb4 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caec48);
                    /* try { // try from 02337f38 to 02437f3b has its CatchHandler @ 02337f60 */
                    /* try { // try from 02337f3c to 02437f43 has its CatchHandler @ 02337f54 */
    FUN_02132f7c(PTR_DAT_04caefe8);
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02337e38 with catch @ 02337f44
                       try { // try from 02337f44 to 02437f7f has its CatchHandler @ 02337cdc */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02337d94 with catch @ 02337f48
                        */
    FUN_02132f7c(PTR_DAT_04cb3390);
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02337e84 with catch @ 02337f54
                       catch(type#1 @ 049bb748) { ... } // from try @ 02337f3c with catch @ 02337f54
                        */
    FUN_02132f7c(PTR_DAT_04caa200);
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02337dd0 with catch @ 02337f60
                       catch(type#1 @ 049bb748) { ... } // from try @ 02337f38 with catch @ 02337f60
                        */
    bRam0000000004f9beb4 = 1;
  }
  Dino_BusSand_App_Meta_GiftPackFeature__EnsureInit_2235d04(param_1);
  lVar5 = Dino_BusSand_App_Meta_GiftPackFeature__Config_2234ae8(param_1,param_2);
                    /* try { // try from 02337f80 to 02437f83 has its CatchHandler @ 02337f90 */
  lVar6 = Dino_BusSand_App_Meta_GiftPackFeature__State_2234ff8(param_1,param_2);
  puVar2 = PTR_DAT_04cb3390;
  puVar1 = PTR_DAT_04caec48;
  if (lVar6 != 0) {
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02337f80 with catch @ 02337f90
                        */
                    /* try { // try from 02337f98 to 02437f9f has its CatchHandler @ 02337fd8 */
                    /* try { // try from 02337fa0 to 02437fbb has its CatchHandler @ 02337cdc */
    *(undefined1 *)(lVar6 + 0x6c) = 1;
    uVar9 = *(undefined8 *)puVar2;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                    /* try { // try from 02337fbc to 02437fbf has its CatchHandler @ 02337fc4 */
    lVar7 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(param_1,uVar9);
                    /* catch() { ... } // from try @ 02337fbc with catch @ 02337fc4 */
                    /* try { // try from 02337fc8 to 02437fcf has its CatchHandler @ 02337fd8 */
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* try { // try from 02337fd0 to 02437fdb has its CatchHandler @ 02337cdc */
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02337f98 with catch @ 02337fd8
                       catch(type#2 @ 00000000) { ... } // from try @ 02337fc8 with catch @ 02337fd8
                        */
    lVar8 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0();
    if (lVar7 != 0) {
      *(long *)(lVar7 + 0x38) = lVar8 / 1000;
      lVar7 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0();
      uVar3 = Dino_BusSand_App_Meta_GiftPackCycle__DayKey_2233654(lVar7 / 1000);
      *(undefined4 *)(lVar6 + 0x48) = uVar3;
      if (lVar5 != 0) {
        if (*(int *)(lVar5 + 0x1c) == 0) {
          lVar7 = *(long *)puVar1;
          *(undefined1 *)(lVar6 + 0x30) = 0;
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          lVar7 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0();
          uVar3 = *(undefined4 *)(lVar5 + 0x30);
                    /* try { // try from 02338058 to 0243822b has its CatchHandler @ 02338058
                       catch() { ... } // from try @ 02338058 with catch @ 02338058
                       catch() { ... } // from try @ 023383fc with catch @ 02338058
                       catch() { ... } // from try @ 02338430 with catch @ 02338058
                       catch() { ... } // from try @ 02338490 with catch @ 02338058
                       catch() { ... } // from try @ 023384e8 with catch @ 02338058 */
          if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          iVar4 = System_Math__Max_4830fc8(0,uVar3,0);
          lVar8 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18);
          *(long *)(lVar6 + 0x28) = lVar7 / 1000 + (long)iVar4 * 0x3c;
          if (lVar8 != 0) {
            (**(code **)(lVar8 + 0x18))
                      (*(undefined8 *)(lVar8 + 0x40),param_2,*(undefined8 *)(lVar8 + 0x28));
          }
        }
        if (*(int *)(lVar5 + 0x54) == 3) {
          lVar5 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                            (param_1,*(undefined8 *)puVar2);
          if ((lVar5 == 0) || (*(long *)(lVar5 + 0x70) == 0)) goto LAB_02338160;
          *(undefined1 *)(*(long *)(lVar5 + 0x70) + 0x28) = 1;
          Dino_BusSand_App_Meta_GiftPackFeature__TrackGoldenPurchaseUnlock_2238164(param_1,param_2);
        }
      }
      puVar2 = PTR_DAT_04caefe8;
      Dino_BusSand_App_Meta_LiveFeature_object___Save_2ae62fc
                (param_1,*(undefined8 *)PTR_DAT_04caefe8);
      Dino_BusSand_App_Meta_GiftPackFeature__EvaluateAllPacks_22368ec(param_1);
      Dino_BusSand_App_Meta_LiveFeature_object___Save_2ae62fc(param_1,*(undefined8 *)puVar2);
      lVar5 = *(long *)puVar1;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar5 = *(long *)puVar1;
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
      if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x02338144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
        return;
      }
      return;
    }
  }
LAB_02338160:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

