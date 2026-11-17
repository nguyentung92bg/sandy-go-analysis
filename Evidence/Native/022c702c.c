/* IL2CPP: Dino.BusSand.App.UI.TowerEventPanel.<>c__DisplayClass15_0$$<BuildRow>b__0
void Dino_BusSand_App_UI_TowerEventPanel___c__DisplayClass15_0___BuildRow_b__0 (Dino_BusSand_App_UI_TowerEventPanel___c__DisplayClass15_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.TowerEventPanel.<>c__DisplayClass15_0$$<BuildRow>b__0
   void Dino_BusSand_App_UI_TowerEventPanel___c__DisplayClass15_0___BuildRow_b__0
   (Dino_BusSand_App_UI_TowerEventPanel___c__DisplayClass15_0_o* __this, const MethodInfo* method);
    */

void Dino_BusSand_App_UI_TowerEventPanel___c__DisplayClass15_0___BuildRow_b__0_21c702c
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined4 uStack_54;
  
  lVar7 = *(long *)(param_4 + 0x10);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
                    /* try { // try from 022c7034 to 023c705b has its CatchHandler @ 022c707c */
  lVar6 = *(long *)(param_4 + 0x20);
  uVar10 = *(undefined4 *)(param_4 + 0x18);
  if ((bRam0000000004f9bafb & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04caece0);
    FUN_02132f7c(PTR_DAT_04caece8);
    FUN_02132f7c(PTR_DAT_04caecf0);
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04cab238);
    FUN_02132f7c(PTR_DAT_04cadd90);
    FUN_02132f7c(PTR_DAT_04cadd98);
    FUN_02132f7c(PTR_DAT_04caed00);
    FUN_02132f7c(PTR_DAT_04cafef0);
    FUN_02132f7c(PTR_DAT_04cad4c0);
    FUN_02132f7c(PTR_DAT_04cafee0);
    bRam0000000004f9bafb = 1;
  }
  uStack_54 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  lStack_68 = 0;
  uStack_70 = 0;
  if (((*(char *)(lVar7 + 0x78) != '\0') || (*(long *)(lVar7 + 0x38) == 0)) ||
     (uVar3 = Dino_BusSand_App_Meta_ClimbTowerFeature__CanClaim_2229afc
                        (*(long *)(lVar7 + 0x38),uVar10,0), (uVar3 & 1) == 0)) {
    return;
  }
  if (*(long *)(lVar7 + 0x38) != 0) {
    uVar3 = Dino_BusSand_App_Meta_ClimbTowerFeature__IsClaimed_2229a78
                      (*(long *)(lVar7 + 0x38),uVar10,0);
    if ((uVar3 & 1) != 0) {
      return;
    }
    if (*(long *)(lVar7 + 0x38) != 0) {
      uVar3 = Dino_BusSand_App_Meta_ClimbTowerFeature__Claim_222c5f4
                        (*(long *)(lVar7 + 0x38),uVar10,&uStack_54,0);
      if ((uVar3 & 1) == 0) {
        return;
      }
      lVar4 = Dino_BusSand_App_UI_EventKit__RewardOf_21b333c(uStack_54);
      if (lVar4 != 0) {
        System_Collections_Generic_List_KeyValuePair_int__long____GetEnumerator_3966258
                  (&uStack_80,lVar4,*(undefined8 *)PTR_DAT_04caed00);
        puVar2 = PTR_DAT_04caece8;
        lVar8 = 0;
        uStack_90 = 0;
        puStack_88 = &uStack_80;
        while (uVar3 = System_Collections_Generic_List_Enumerator_KeyValuePair_int__long____MoveNext_35b53dc
                                 (&uStack_80,*(undefined8 *)puVar2), (uVar3 & 1) != 0) {
          lVar1 = lStack_68;
          if ((int)uStack_70 != 0x3e9) {
            lVar1 = 0;
          }
          lVar8 = lVar1 + lVar8;
        }
        FUN_01e78448(&uStack_90);
        if (0 < lVar8) {
          if (*(long *)(lVar7 + 0x40) == 0) goto LAB_022c6984;
          Dino_BusSand_App_UI_KitTopBar__Hold_2283310(*(long *)(lVar7 + 0x40),lVar8,0,0);
        }
        uVar5 = Dino_BusSand_App_UI_UiSkin__Sprite_22a23f4(*(undefined8 *)PTR_DAT_04cafee0,0);
        if (lVar6 != 0) {
          UnityEngine_UI_Image__set_sprite_44a7258(lVar6,uVar5,0);
          uVar5 = UnityEngine_Component__get_transform_43bcd18(lVar6,0);
          if (*(int *)(*(long *)PTR_DAT_04cad4c0 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)PTR_DAT_04cad4c0);
          }
          uVar10 = _UNK_00e2098c;
          Dino_BusSand_App_UI_UiMotion__Punch_2283d78(_UNK_00e207cc,_UNK_00e2098c,uVar5,0,0,0);
          if (*(int *)(*(long *)PTR_DAT_04cad568 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          lVar8 = FUN_022c78f0(0);
          if (lVar8 != 0) {
            Dino_BusSand_GameAudio__Sparkle_2382d28(lVar8,0);
          }
          if (*(int *)(*(long *)PTR_DAT_04cab238 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          Dino_BusSand_Haptics__Play_2388ed8(4,0);
          lVar6 = UnityEngine_Component__get_transform_43bcd18(lVar6,0);
          if (lVar6 != 0) {
            uVar9 = UnityEngine_Transform__get_position_43d0e48(lVar6,0);
            uVar5 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
            System_Action___ctor_47b5ed0(uVar5,lVar7,*(undefined8 *)PTR_DAT_04cafef0,0);
            Dino_BusSand_App_UI_CommerceRewardFly__Fly_22a8d24(uVar9,uVar10,param_3,lVar4,uVar5,0,0)
            ;
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

