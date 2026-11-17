/* IL2CPP: Dino.BusSand.App.Meta.BoosterIntro.<>c$$<get_Order>b__2_0
int32_t Dino_BusSand_App_Meta_BoosterIntro___c___get_Order_b__2_0 (Dino_BusSand_App_Meta_BoosterIntro___c_o* __this, int32_t a, int32_t b, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.BoosterIntro.<>c$$<get_Order>b__2_0
   int32_t Dino_BusSand_App_Meta_BoosterIntro___c___get_Order_b__2_0
   (Dino_BusSand_App_Meta_BoosterIntro___c_o* __this, int32_t a, int32_t b, const MethodInfo*
   method); */

void Dino_BusSand_App_Meta_BoosterIntro___c___get_Order_b__2_0_2203a14
               (undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  undefined4 uStack_24;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 023039e0 with catch @ 02303a14
                        */
  puVar1 = PTR_DAT_04cac440;
  if ((bRam0000000004f9bcb8 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1d10);
    FUN_02132f7c(PTR_DAT_04cb1c70);
    FUN_02132f7c(PTR_DAT_04cac440);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02303a80 with catch @ 02303a64
                        */
    bRam0000000004f9bcb8 = 1;
  }
  uStack_24 = 0;
                    /* try { // try from 02303a70 to 02403a7f has its CatchHandler @ 02303a80 */
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02303a70 with catch @ 02303a80
                       try { // try from 02303a80 to 02403a83 has its CatchHandler @ 02303a64 */
  iVar4 = Dino_BusSand_App_Meta_Economy__CampaignUnlockLevel_2203854(param_2);
                    /* try { // try from 02303a84 to 02403a8f has its CatchHandler @ 02303a90 */
  iVar5 = Dino_BusSand_App_Meta_Economy__CampaignUnlockLevel_2203854(param_3);
  puVar3 = PTR_DAT_04cb1d10;
  puVar2 = PTR_DAT_04cb1c70;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02303a84 with catch @ 02303a90
                        */
  if (iVar4 == iVar5) {
    lVar7 = *(long *)PTR_DAT_04cb1c70;
                    /* try { // try from 02303aa8 to 02403b6f has its CatchHandler @ 02303aa8
                       catch(type#1 @ 00000000) { ... } // from try @ 02303aa8 with catch @ 02303aa8
                       catch(type#1 @ 00000000) { ... } // from try @ 02303b80 with catch @ 02303aa8
                       catch(type#1 @ 00000000) { ... } // from try @ 02303be8 with catch @ 02303aa8
                        */
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar7 = *(long *)puVar2;
    }
    uStack_24 = System_Array__IndexOf_int__2906224
                          (**(undefined8 **)(lVar7 + 0xb8),param_2,*(undefined8 *)puVar3);
    uVar6 = System_Array__IndexOf_int__2906224
                      (**(undefined8 **)(*(long *)puVar2 + 0xb8),param_3,*(undefined8 *)puVar3);
  }
  else {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uStack_24 = Dino_BusSand_App_Meta_Economy__CampaignUnlockLevel_2203854(param_2);
    uVar6 = Dino_BusSand_App_Meta_Economy__CampaignUnlockLevel_2203854(param_3);
  }
  System_Int32__CompareTo_482d6dc(&uStack_24,uVar6,0);
  return;
}

