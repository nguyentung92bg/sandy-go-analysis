/* IL2CPP: Dino.BusSand.App.UI.DailyGiftPanel$$BuildBar
void Dino_BusSand_App_UI_DailyGiftPanel__BuildBar (Dino_BusSand_App_UI_DailyGiftPanel_o* __this, UnityEngine_RectTransform_o* root, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.DailyGiftPanel$$BuildBar
   void Dino_BusSand_App_UI_DailyGiftPanel__BuildBar (Dino_BusSand_App_UI_DailyGiftPanel_o* __this,
   UnityEngine_RectTransform_o* root, const MethodInfo* method); */

void Dino_BusSand_App_UI_DailyGiftPanel__BuildBar_2329010(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_44;
  
  if ((bRam0000000004f9c5f8 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb8dc0);
                    /* try { // try from 02429050 to 02529077 has its CatchHandler @ 024292c0 */
    FUN_02132f7c(PTR_DAT_04cb21e8);
    FUN_02132f7c(PTR_DAT_04cac878);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04caf368);
    FUN_02132f7c(PTR_DAT_04cb8e30);
    FUN_02132f7c(PTR_DAT_04cb8e38);
    FUN_02132f7c(PTR_DAT_04caf390);
    FUN_02132f7c(PTR_DAT_04caf398);
                    /* try { // try from 024290b4 to 025290db has its CatchHandler @ 024292bc */
    FUN_02132f7c(PTR_DAT_04cb8e40);
    FUN_02132f7c(PTR_DAT_04cabd10);
    FUN_02132f7c(PTR_DAT_04caf3b0);
    FUN_02132f7c(PTR_DAT_04caf3c8);
                    /* try { // try from 024290e4 to 025290eb has its CatchHandler @ 024292ac */
    FUN_02132f7c(PTR_DAT_04ca9c30);
                    /* try { // try from 024290ec to 025290f7 has its CatchHandler @ 024292b0 */
    FUN_02132f7c(PTR_DAT_04caf330);
                    /* try { // try from 024290f8 to 02529297 has its CatchHandler @ 02428e68 */
    FUN_02132f7c(PTR_DAT_04cb8e48);
    bRam0000000004f9c5f8 = 1;
  }
  puVar1 = PTR_DAT_04cad330;
  uStack_44 = 0;
  if (cRam0000000004f9b948 == '\0') {
    FUN_02132f7c(PTR_DAT_04cacfc0);
    cRam0000000004f9b948 = '\x01';
  }
  puVar5 = PTR_DAT_04cb8dc0;
  puVar4 = PTR_DAT_04caf390;
  puVar3 = PTR_DAT_04caf368;
  puVar2 = PTR_DAT_04cacfc0;
  uVar12 = **(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8);
  uVar13 = (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1];
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uVar7 = Dino_BusSand_App_UI_UiKit__Mirror_2281c4c
                    (0x441a0000,0x42aa0000,uVar12,uVar13,_UNK_00e2096c,param_2,*(undefined8 *)puVar4
                     ,*(undefined8 *)puVar3,&uStack_78,0);
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar5);
  }
  puVar3 = PTR_DAT_04caf3c8;
  puVar1 = PTR_DAT_04caf3b0;
  uVar12 = _UNK_00e2048c;
  Dino_BusSand_App_UI_DailyGiftPanel__At_2328f54(_UNK_00e2048c,0xc1900000,uVar7);
  if (cRam0000000004f9b948 == '\0') {
    FUN_02132f7c(PTR_DAT_04cacfc0);
    cRam0000000004f9b948 = '\x01';
  }
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  lVar8 = Dino_BusSand_App_UI_UiKit__Mirror_2281c4c
                    (0x424c0000,0x42640000,**(undefined4 **)(*(long *)puVar2 + 0xb8),
                     (*(undefined4 **)(*(long *)puVar2 + 0xb8))[1],_UNK_00e20204,uVar7,
                     *(undefined8 *)puVar3,*(undefined8 *)puVar1,&uStack_90,0);
  plVar10 = (long *)(param_1 + 0x78);
  *plVar10 = lVar8;
  thunk_FUN_02134474(plVar10,lVar8);
  lVar8 = *plVar10;
  if (lVar8 != 0) {
    UnityEngine_RectTransform__set_pivot_43cfbf4(0,0x3f000000,lVar8,0);
    UnityEngine_RectTransform__set_anchorMax_43cf768(0,0x3f000000,lVar8,0);
                    /* try { // try from 02429298 to 0252929b has its CatchHandler @ 024292b8 */
                    /* try { // try from 0242929c to 0252929f has its CatchHandler @ 024292b4 */
                    /* try { // try from 024292a0 to 025292db has its CatchHandler @ 02428e68 */
    UnityEngine_RectTransform__set_anchorMin_43cf5e4(0,0x3f000000,lVar8,0);
    puVar5 = PTR_DAT_04cb8e48;
    puVar4 = PTR_DAT_04cb8e40;
    puVar3 = PTR_DAT_04cb8e38;
    puVar2 = PTR_DAT_04cb21e8;
    puVar1 = PTR_DAT_04caf330;
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024290e4 with catch @ 024292ac
                        */
    if (*plVar10 != 0) {
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024290ec with catch @ 024292b0
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0242929c with catch @ 024292b4
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02429298 with catch @ 024292b8
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024290b4 with catch @ 024292bc
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02429050 with catch @ 024292c0
                        */
                    /* try { // try from 024292dc to 025292df has its CatchHandler @ 024292f0 */
      UnityEngine_RectTransform__set_anchoredPosition_43cf8ec(0x41100000,0,*plVar10,0);
                    /* catch() { ... } // from try @ 024292dc with catch @ 024292f0 */
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                    /* try { // try from 024292f4 to 025292fb has its CatchHandler @ 02429304 */
        thunk_FUN_0218fdac();
      }
                    /* try { // try from 024292fc to 02529307 has its CatchHandler @ 02428e68 */
      iVar6 = Dino_BusSand_App_Meta_DailyGift__get_ChestProgress_220e058(0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 024292f4 with catch @ 02429304
                        */
      Dino_BusSand_App_UI_DailyGiftPanel__SetBar_232af00((float)iVar6,param_1);
      Dino_BusSand_App_UI_UiKit__Img_228203c
                (0,0,0,0,0x3f800000,param_2,*(undefined8 *)puVar4,*(undefined8 *)puVar3,0,0);
      Dino_BusSand_App_UI_DailyGiftPanel__At_2328f54(uVar12,_UNK_00e2070c);
      lVar8 = Dino_BusSand_App_UI_UiKit__Img_228203c
                        (0,0,0,0,0x3f800000,param_2,*(undefined8 *)puVar1,*(undefined8 *)puVar5,0,0)
      ;
      puVar5 = PTR_DAT_04cb8e30;
      puVar4 = PTR_DAT_04caf398;
      puVar3 = PTR_DAT_04cac878;
      puVar2 = PTR_DAT_04cabd10;
      puVar1 = PTR_DAT_04ca9c30;
      if (lVar8 != 0) {
        uVar7 = UnityEngine_UI_Graphic__get_rectTransform_44aaf14(lVar8,0);
        puVar11 = (undefined8 *)(param_1 + 0x70);
        *puVar11 = uVar7;
        thunk_FUN_02134474(puVar11,uVar7);
        Dino_BusSand_App_UI_DailyGiftPanel__At_2328f54(_UNK_00e20134,0x43ab0000,*puVar11);
        uStack_a8 = 0;
        uStack_a0 = 0;
        uStack_98 = 0;
        System_Nullable_Color____ctor_2bc9090
                  (0x3f800000,0x3f800000,0x3f800000,0x3f800000,&uStack_a8,*(undefined8 *)puVar3);
        uStack_b0 = uStack_98;
        uStack_b8 = uStack_a0;
        uStack_c0 = uStack_a8;
        uVar7 = Dino_BusSand_App_UI_UiKit__Text_2282314
                          (0x42140000,0x43960000,0x42700000,0,0,param_2,*(undefined8 *)puVar5,
                           *(undefined8 *)puVar1,*(undefined8 *)puVar4,&uStack_c0,0x202,0);
        puVar11 = (undefined8 *)(param_1 + 0x80);
        *puVar11 = uVar7;
        thunk_FUN_02134474(puVar11,uVar7);
        Dino_BusSand_App_UI_DailyGiftPanel__At_2328f54(_UNK_00e1fff8,0,*puVar11);
        plVar10 = (long *)*puVar11;
        uStack_44 = Dino_BusSand_App_Meta_DailyGift__get_ChestProgress_220e058(0);
        uVar7 = System_Int32__ToString_482d750(&uStack_44,0);
        uStack_44 = Dino_BusSand_App_Meta_Monetization__get_DailyGiftChestDays_22681e0(0);
        uVar9 = System_Int32__ToString_482d750(&uStack_44,0);
        uVar7 = System_String__Concat_46d2b84(uVar7,*(undefined8 *)puVar2,uVar9,0);
        if (plVar10 != (long *)0x0) {
          (**(code **)(*plVar10 + 0x518))(plVar10,uVar7,*(undefined8 *)(*plVar10 + 0x520));
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

