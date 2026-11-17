/* IL2CPP: Dino.BusSand.App.UI.TowerEventPanel$$OnChest
void Dino_BusSand_App_UI_TowerEventPanel__OnChest (Dino_BusSand_App_UI_TowerEventPanel_o* __this, int32_t wp, UnityEngine_UI_Image_o* chest, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.TowerEventPanel$$OnChest
   void Dino_BusSand_App_UI_TowerEventPanel__OnChest (Dino_BusSand_App_UI_TowerEventPanel_o* __this,
   int32_t wp, UnityEngine_UI_Image_o* chest, const MethodInfo* method); */

void Dino_BusSand_App_UI_TowerEventPanel__OnChest_21c6654
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,long param_4,
               undefined4 param_5,long param_6)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined4 uStack_54;
  
                    /* try { // try from 022c665c to 023c666b has its CatchHandler @ 022c6720 */
                    /* try { // try from 022c666c to 023c668b has its CatchHandler @ 022c6708 */
  if ((bRam0000000004f9bafb & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04caece0);
    FUN_02132f7c(PTR_DAT_04caece8);
                    /* try { // try from 022c66ac to 023c66bb has its CatchHandler @ 022c6720 */
    FUN_02132f7c(PTR_DAT_04caecf0);
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04cab238);
                    /* try { // try from 022c66d4 to 023c66db has its CatchHandler @ 022c6704 */
    FUN_02132f7c(PTR_DAT_04cadd90);
                    /* try { // try from 022c66dc to 023c6743 has its CatchHandler @ 022c65d8 */
    FUN_02132f7c(PTR_DAT_04cadd98);
    FUN_02132f7c(PTR_DAT_04caed00);
    FUN_02132f7c(PTR_DAT_04cafef0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022c66d4 with catch @ 022c6704
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022c666c with catch @ 022c6708
                        */
    FUN_02132f7c(PTR_DAT_04cad4c0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022c6624 with catch @ 022c670c
                        */
    FUN_02132f7c(PTR_DAT_04cafee0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022c6618 with catch @ 022c671c
                        */
    bRam0000000004f9bafb = 1;
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022c665c with catch @ 022c6720
                       catch(type#1 @ 00000000) { ... } // from try @ 022c66ac with catch @ 022c6720
                        */
  uStack_54 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  lStack_68 = 0;
  uStack_70 = 0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022c65fc with catch @ 022c6730
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022c6744 with catch @ 022c6754
                        */
                    /* try { // try from 022c6758 to 023c675b has its CatchHandler @ 022c6764 */
                    /* try { // try from 022c675c to 023c6767 has its CatchHandler @ 022c65d8 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022c6758 with catch @ 022c6764
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022c6870 with catch @ 022c6768
                       catch(type#1 @ 00000000) { ... } // from try @ 022c68e4 with catch @ 022c6768
                       catch(type#1 @ 00000000) { ... } // from try @ 022c68f4 with catch @ 022c6768
                        */
  if (((*(char *)(param_4 + 0x78) != '\0') || (*(long *)(param_4 + 0x38) == 0)) ||
     (uVar3 = Dino_BusSand_App_Meta_ClimbTowerFeature__CanClaim_2229afc
                        (*(long *)(param_4 + 0x38),param_5,0), (uVar3 & 1) == 0)) {
                    /* try { // try from 022c6744 to 023c674b has its CatchHandler @ 022c6754 */
                    /* try { // try from 022c674c to 023c6757 has its CatchHandler @ 022c65d8 */
    return;
  }
  if (*(long *)(param_4 + 0x38) != 0) {
    uVar3 = Dino_BusSand_App_Meta_ClimbTowerFeature__IsClaimed_2229a78
                      (*(long *)(param_4 + 0x38),param_5,0);
    if ((uVar3 & 1) != 0) {
      return;
    }
    if (*(long *)(param_4 + 0x38) != 0) {
                    /* try { // try from 022c6790 to 023c679b has its CatchHandler @ 022c68c8 */
      uVar3 = Dino_BusSand_App_Meta_ClimbTowerFeature__Claim_222c5f4
                        (*(long *)(param_4 + 0x38),param_5,&uStack_54,0);
      if ((uVar3 & 1) == 0) {
        return;
      }
      lVar4 = Dino_BusSand_App_UI_EventKit__RewardOf_21b333c(uStack_54);
      if (lVar4 != 0) {
                    /* try { // try from 022c67ac to 023c67b7 has its CatchHandler @ 022c68b4 */
                    /* try { // try from 022c67b8 to 023c67c7 has its CatchHandler @ 022c68a4 */
        System_Collections_Generic_List_KeyValuePair_int__long____GetEnumerator_3966258
                  (&uStack_80,lVar4,*(undefined8 *)PTR_DAT_04caed00);
        puVar2 = PTR_DAT_04caece8;
        lVar6 = 0;
        uStack_90 = 0;
        puStack_88 = &uStack_80;
        while (uVar3 = System_Collections_Generic_List_Enumerator_KeyValuePair_int__long____MoveNext_35b53dc
                                 (&uStack_80,*(undefined8 *)puVar2), (uVar3 & 1) != 0) {
                    /* try { // try from 022c67f0 to 023c67ff has its CatchHandler @ 022c68b8 */
          lVar1 = lStack_68;
          if ((int)uStack_70 != 0x3e9) {
            lVar1 = 0;
          }
          lVar6 = lVar1 + lVar6;
        }
        FUN_01e78448(&uStack_90);
        if (0 < lVar6) {
          if (*(long *)(param_4 + 0x40) == 0) goto LAB_022c6984;
                    /* try { // try from 022c6844 to 023c684f has its CatchHandler @ 022c68b8 */
          Dino_BusSand_App_UI_KitTopBar__Hold_2283310(*(long *)(param_4 + 0x40),lVar6,0,0);
        }
        uVar5 = Dino_BusSand_App_UI_UiSkin__Sprite_22a23f4(*(undefined8 *)PTR_DAT_04cafee0,0);
        if (param_6 != 0) {
                    /* try { // try from 022c6868 to 023c686f has its CatchHandler @ 022c689c */
          UnityEngine_UI_Image__set_sprite_44a7258(param_6,uVar5,0);
                    /* try { // try from 022c6870 to 023c68db has its CatchHandler @ 022c6768 */
          uVar5 = UnityEngine_Component__get_transform_43bcd18(param_6,0);
          if (*(int *)(*(long *)PTR_DAT_04cad4c0 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)PTR_DAT_04cad4c0);
          }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022c6868 with catch @ 022c689c
                        */
          uVar8 = _UNK_00e2098c;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022c6800 with catch @ 022c68a0
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022c67b8 with catch @ 022c68a4
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022c67ac with catch @ 022c68b4
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022c67f0 with catch @ 022c68b8
                       catch(type#1 @ 00000000) { ... } // from try @ 022c6844 with catch @ 022c68b8
                        */
          Dino_BusSand_App_UI_UiMotion__Punch_2283d78(_UNK_00e207cc,_UNK_00e2098c,uVar5,0,0,0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022c6790 with catch @ 022c68c8
                        */
          if (*(int *)(*(long *)PTR_DAT_04cad568 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
                    /* try { // try from 022c68dc to 023c68e3 has its CatchHandler @ 022c68ec */
          lVar6 = FUN_022c78f0(0);
          if (lVar6 != 0) {
                    /* try { // try from 022c68e4 to 023c68ef has its CatchHandler @ 022c6768 */
            Dino_BusSand_GameAudio__Sparkle_2382d28(lVar6,0);
          }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022c68dc with catch @ 022c68ec
                        */
                    /* try { // try from 022c68f0 to 023c68f3 has its CatchHandler @ 022c68fc */
                    /* try { // try from 022c68f4 to 023c68ff has its CatchHandler @ 022c6768 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022c68f0 with catch @ 022c68fc
                        */
          if (*(int *)(*(long *)PTR_DAT_04cab238 + 0xe4) == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022c6a08 with catch @ 022c6900
                       catch(type#1 @ 00000000) { ... } // from try @ 022c6a7c with catch @ 022c6900
                       catch(type#1 @ 00000000) { ... } // from try @ 022c6a8c with catch @ 022c6900
                        */
            thunk_FUN_0218fdac();
          }
          Dino_BusSand_Haptics__Play_2388ed8(4,0);
          lVar6 = UnityEngine_Component__get_transform_43bcd18(param_6,0);
          if (lVar6 != 0) {
            uVar7 = UnityEngine_Transform__get_position_43d0e48(lVar6,0);
                    /* try { // try from 022c6928 to 023c6933 has its CatchHandler @ 022c6a60 */
            uVar5 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
                    /* try { // try from 022c6944 to 023c694f has its CatchHandler @ 022c6a4c */
                    /* try { // try from 022c6950 to 023c695f has its CatchHandler @ 022c6a3c */
            System_Action___ctor_47b5ed0(uVar5,param_4,*(undefined8 *)PTR_DAT_04cafef0,0);
            Dino_BusSand_App_UI_CommerceRewardFly__Fly_22a8d24(uVar7,uVar8,param_3,lVar4,uVar5,0,0);
            return;
          }
        }
      }
    }
  }
LAB_022c6984:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

