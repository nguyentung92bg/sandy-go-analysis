/* IL2CPP: Dino.BusSand.App.UI.StorePanel$$NoAdsTile
void Dino_BusSand_App_UI_StorePanel__NoAdsTile (Dino_BusSand_App_UI_StorePanel_o* __this, int32_t itemId, float top, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.StorePanel$$NoAdsTile
   void Dino_BusSand_App_UI_StorePanel__NoAdsTile (Dino_BusSand_App_UI_StorePanel_o* __this, int32_t
   itemId, float top, const MethodInfo* method); */

void Dino_BusSand_App_UI_StorePanel__NoAdsTile_22b88ec
               (float param_1,long param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  puVar1 = PTR_DAT_04cb6378;
  uStack_64 = param_3;
  if ((bRam0000000004f9c2f6 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04cab550);
    FUN_02132f7c(PTR_DAT_04cac878);
    FUN_02132f7c(PTR_DAT_04cb6380);
    FUN_02132f7c(PTR_DAT_04cb6388);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cae428);
    FUN_02132f7c(PTR_DAT_04cb6378);
    FUN_02132f7c(PTR_DAT_04cb6390);
    FUN_02132f7c(PTR_DAT_04cb6398);
    FUN_02132f7c(PTR_DAT_04cad4c8);
    FUN_02132f7c(PTR_DAT_04cb0138);
    FUN_02132f7c(PTR_DAT_04cb63a0);
    FUN_02132f7c(PTR_DAT_04cad9e0);
    FUN_02132f7c(PTR_DAT_04cb63a8);
    FUN_02132f7c(PTR_DAT_04cad948);
    bRam0000000004f9c2f6 = 1;
  }
  puVar2 = PTR_DAT_04cad330;
  uVar10 = *(undefined8 *)(param_2 + 0x40);
  uVar6 = System_Int32__ToString_482d750(&uStack_64,0);
  uVar6 = System_String__Concat_46c82e0(*(undefined8 *)puVar1,uVar6,0);
  if (cRam0000000004f9b948 == '\0') {
                    /* try { // try from 023b8a40 to 024b8b43 has its CatchHandler @ 023b8a40
                       catch() { ... } // from try @ 023b8a40 with catch @ 023b8a40
                       catch() { ... } // from try @ 023b8bd0 with catch @ 023b8a40
                       catch() { ... } // from try @ 023b8c00 with catch @ 023b8a40
                       catch() { ... } // from try @ 023b8c28 with catch @ 023b8a40
                       catch() { ... } // from try @ 023b8c4c with catch @ 023b8a40 */
    FUN_02132f7c(PTR_DAT_04cacfc0);
    cRam0000000004f9b948 = '\x01';
  }
  puVar1 = PTR_DAT_04cb63a8;
  uVar12 = **(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8);
  uVar13 = (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1];
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  lVar7 = Dino_BusSand_App_UI_UiKit__Mirror_2281c4c
                    (_UNK_00e20220,0x43500000,uVar12,uVar13,_UNK_00e203ac,uVar10,uVar6,
                     *(undefined8 *)puVar1,&uStack_78,0);
  puVar5 = PTR_DAT_04cb6398;
  puVar4 = PTR_DAT_04cae428;
  puVar3 = PTR_DAT_04cad9e0;
  puVar1 = PTR_DAT_04cac878;
  if (lVar7 != 0) {
    UnityEngine_RectTransform__set_anchorMax_43cf768(0x3f000000,0x3f800000,lVar7,0);
    UnityEngine_RectTransform__set_anchorMin_43cf5e4(0x3f000000,0x3f800000,lVar7,0);
    UnityEngine_RectTransform__set_anchoredPosition_43cf8ec(0,-(param_1 + 104.0),lVar7,0);
    Dino_BusSand_App_UI_UiKit__HitArea_228277c(lVar7,0);
                    /* try { // try from 023b8b44 to 024b8b4b has its CatchHandler @ 023b8c08 */
    Dino_BusSand_App_UI_UiKit__Img_228203c
              (0x43440000,0x43600000,_UNK_00e209bc,0x40c00000,0x3f800000,lVar7,*(undefined8 *)puVar4
               ,*(undefined8 *)puVar5,0,0);
                    /* try { // try from 023b8b70 to 024b8bcf has its CatchHandler @ 023b8c00 */
    uVar8 = Dino_BusSand_App_UI_UiKit__get_IsEnglish_228be60(0);
    uVar6 = *(undefined8 *)puVar3;
    if ((uVar8 & 1) == 0) {
      lVar11 = *(long *)PTR_DAT_04ca9d18;
      lVar9 = *(long *)(lVar11 + 0x38);
      if (lVar9 == 0) {
        FUN_0216b4cc(lVar11);
        lVar9 = *(long *)(lVar11 + 0x38);
      }
      lVar9 = *(long *)(lVar9 + 0x10);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_0216b470();
      }
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
                    /* try { // try from 023b8bd0 to 024b8bfb has its CatchHandler @ 023b8a40 */
      lVar9 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_0216b470();
      }
      uVar10 = **(undefined8 **)(lVar9 + 0xb8);
                    /* try { // try from 023b8bfc to 024b8bff has its CatchHandler @ 023b8c04 */
      if (*(int *)(*(long *)PTR_DAT_04cab550 + 0xe4) == 0) {
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 023b8b70 with catch @ 023b8c00
                       try { // try from 023b8c00 to 024b8c23 has its CatchHandler @ 023b8a40 */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 023b8bfc with catch @ 023b8c04
                        */
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04cab550);
      }
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 023b8b44 with catch @ 023b8c08
                        */
      uVar10 = Dino_BusSand_App_Lang__Get_215f9c0(*(undefined8 *)PTR_DAT_04cb0138,uVar10,0);
    }
    else {
      uVar10 = *(undefined8 *)PTR_DAT_04cb6390;
    }
                    /* try { // try from 023b8c24 to 024b8c27 has its CatchHandler @ 023b8c40 */
    puVar4 = PTR_DAT_04cb63a0;
    puVar3 = PTR_DAT_04cad4c8;
                    /* try { // try from 023b8c28 to 024b8c43 has its CatchHandler @ 023b8a40 */
                    /* catch() { ... } // from try @ 023b8c24 with catch @ 023b8c40 */
                    /* try { // try from 023b8c44 to 024b8c4b has its CatchHandler @ 023b8c54 */
                    /* try { // try from 023b8c4c to 024b8c57 has its CatchHandler @ 023b8a40 */
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 023b8c44 with catch @ 023b8c54
                        */
    System_Nullable_Color____ctor_2bc9090
              (0x3f800000,0x3f800000,0x3f800000,0x3f800000,&uStack_90,*(undefined8 *)puVar1);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uStack_a0 = uStack_80;
    uStack_a8 = uStack_88;
    uStack_b0 = uStack_90;
    Dino_BusSand_App_UI_UiKit__Text_2282314
              (0x42580000,0x43aa0000,0x428c0000,0xc2a20000,0x40800000,lVar7,uVar6,uVar10,
               *(undefined8 *)puVar3,&uStack_b0,0x202,0);
    uVar6 = Dino_BusSand_App_UI_StorePanel__DisplayPrice_22b4748(uStack_64);
    lVar9 = Dino_BusSand_App_UI_StorePanel__Price_22b9480
                      (0x43a50000,0x42fc0000,0x43900000,0x40c00000,lVar7,*(undefined8 *)puVar4,uVar6
                      );
    puVar4 = PTR_DAT_04cb6388;
    puVar3 = PTR_DAT_04cb6380;
    puVar2 = PTR_DAT_04cad948;
    puVar1 = PTR_DAT_04caa458;
    if (lVar9 != 0) {
      uVar6 = UnityEngine_Component__get_gameObject_43bcde8(lVar9,0);
      uVar10 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
      System_Action___ctor_47b5ed0(uVar10,param_2,*(undefined8 *)puVar3,0);
      Dino_BusSand_App_UI_UIPanel__Bind_21f4ca8(uVar6,uVar10,1,*(undefined8 *)puVar2,0);
      uVar6 = UnityEngine_Component__get_gameObject_43bcde8(lVar7,0);
      uVar10 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
      System_Action___ctor_47b5ed0(uVar10,param_2,*(undefined8 *)puVar4,0);
      Dino_BusSand_App_UI_UIPanel__Bind_21f4ca8(uVar6,uVar10,0,0,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

