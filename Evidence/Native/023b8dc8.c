/* IL2CPP: Dino.BusSand.App.UI.StorePanel$$Tile
void Dino_BusSand_App_UI_StorePanel__Tile (Dino_BusSand_App_UI_StorePanel_o* __this, int32_t itemId, int32_t index, float centreY, float x, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.StorePanel$$Tile
   void Dino_BusSand_App_UI_StorePanel__Tile (Dino_BusSand_App_UI_StorePanel_o* __this, int32_t
   itemId, int32_t index, float centreY, float x, const MethodInfo* method); */

void Dino_BusSand_App_UI_StorePanel__Tile_22b8dc8
               (float param_1,undefined4 param_2,long param_3,undefined4 param_4,int param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  int iStack_74;
  
  puVar1 = PTR_DAT_04cb63b0;
  if ((bRam0000000004f9c2f4 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cac7b8);
    FUN_02132f7c(PTR_DAT_04cac878);
    FUN_02132f7c(PTR_DAT_04caedf8);
    FUN_02132f7c(PTR_DAT_04cb63b8);
    FUN_02132f7c(PTR_DAT_04cb63c0);
    FUN_02132f7c(PTR_DAT_04cb63b0);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cae428);
    FUN_02132f7c(PTR_DAT_04cab270);
    FUN_02132f7c(PTR_DAT_04cb63c8);
    FUN_02132f7c(PTR_DAT_04cb63d0);
    FUN_02132f7c(PTR_DAT_04cb63d8);
    FUN_02132f7c(PTR_DAT_04caf460);
    FUN_02132f7c(PTR_DAT_04cb63a0);
    FUN_02132f7c(PTR_DAT_04cae4f8);
    FUN_02132f7c(PTR_DAT_04cb63e0);
    FUN_02132f7c(PTR_DAT_04cad948);
    bRam0000000004f9c2f4 = 1;
  }
  iStack_74 = 0;
  lVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar6,0);
  puVar2 = PTR_DAT_04cb63d8;
  puVar1 = PTR_DAT_04cad330;
  if (lVar6 != 0) {
    *(long *)(lVar6 + 0x10) = param_3;
    thunk_FUN_02134474((long *)(lVar6 + 0x10),param_3);
    uVar11 = *(undefined8 *)(param_3 + 0x40);
    puVar10 = (undefined4 *)(lVar6 + 0x18);
    *puVar10 = param_4;
    uVar7 = System_Int32__ToString_482d750(puVar10,0);
    uVar7 = System_String__Concat_46c82e0(*(undefined8 *)puVar2,uVar7,0);
    if (cRam0000000004f9b948 == '\0') {
      FUN_02132f7c(PTR_DAT_04cacfc0);
      cRam0000000004f9b948 = '\x01';
    }
    puVar3 = PTR_DAT_04cb63c8;
    puVar2 = PTR_DAT_04cacfc0;
    uVar12 = **(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8);
    uVar13 = (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1];
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    lVar8 = Dino_BusSand_App_UI_UiKit__Mirror_2281c4c
                      (_UNK_00e20400,0x43e30000,uVar12,uVar13,_UNK_00e209c0,uVar11,uVar7,
                       *(undefined8 *)puVar3,&uStack_88,0);
    puVar3 = PTR_DAT_04cb63e0;
    puVar1 = PTR_DAT_04cae428;
    if (lVar8 != 0) {
      UnityEngine_RectTransform__set_anchorMax_43cf768(0x3f000000,0x3f800000,lVar8,0);
      UnityEngine_RectTransform__set_anchorMin_43cf5e4(0x3f000000,0x3f800000,lVar8,0);
      UnityEngine_RectTransform__set_anchoredPosition_43cf8ec(param_2,-param_1,lVar8,0);
      Dino_BusSand_App_UI_UiKit__HitArea_228277c(lVar8,0);
      iStack_74 = 6;
      if (param_5 + 1 < 6) {
        iStack_74 = param_5 + 1;
      }
      if (iStack_74 < 2) {
        iStack_74 = 1;
      }
      uVar7 = System_Int32__ToString_482d750(&iStack_74,0);
      uVar7 = System_String__Concat_46c82e0(*(undefined8 *)puVar3,uVar7,0);
      if (cRam0000000004f9b948 == '\0') {
        FUN_02132f7c(PTR_DAT_04cacfc0);
        cRam0000000004f9b948 = '\x01';
      }
      lVar9 = Dino_BusSand_App_UI_UiKit__Img_228203c
                        (**(undefined4 **)(*(long *)puVar2 + 0xb8),
                         (*(undefined4 **)(*(long *)puVar2 + 0xb8))[1],0,0x42ae0000,0x3f800000,lVar8
                         ,*(undefined8 *)puVar1,uVar7,0,0);
      puVar1 = PTR_DAT_04cac7b8;
      if (lVar9 != 0) {
        UnityEngine_UI_Image__set_preserveAspect_44afae0(lVar9,1,0);
        uVar7 = Dino_BusSand_App_UI_StorePanel__CoinsOf_22b930c(*puVar10);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar1);
        }
        lVar9 = Dino_BusSand_App_UI_CommerceUi__NumGrouped_22aae00(uVar7);
        puVar4 = PTR_DAT_04cb63d0;
        puVar3 = PTR_DAT_04cb63a0;
        puVar2 = PTR_DAT_04caf460;
        puVar1 = PTR_DAT_04cac878;
        if (lVar9 != 0) {
          uVar7 = System_String__Replace_46d4a70
                            (lVar9,*(undefined8 *)PTR_DAT_04cae4f8,*(undefined8 *)PTR_DAT_04cab270,0
                            );
          uStack_a0 = 0;
          uStack_98 = 0;
          uStack_90 = 0;
          System_Nullable_Color____ctor_2bc9090
                    (0x3f800000,0x3f800000,0x3f800000,0x3f800000,&uStack_a0,*(undefined8 *)puVar1);
          uStack_b0 = uStack_90;
          uStack_b8 = uStack_98;
          uStack_c0 = uStack_a0;
          Dino_BusSand_App_UI_UiKit__Text_2282314
                    (0x428c0000,0x43910000,0x42a80000,0,0x41400000,lVar8,*(undefined8 *)puVar4,uVar7
                     ,*(undefined8 *)puVar2,&uStack_c0,0x202,0);
          uVar7 = Dino_BusSand_App_UI_StorePanel__DisplayPrice_22b4748(*puVar10);
          lVar9 = Dino_BusSand_App_UI_StorePanel__Price_22b9480
                            (0x436b0000,0x43020000,0,0xc2f20000,lVar8,*(undefined8 *)puVar3,uVar7);
          puVar5 = PTR_DAT_04cb63c0;
          puVar4 = PTR_DAT_04cb63b8;
          puVar3 = PTR_DAT_04caedf8;
          puVar2 = PTR_DAT_04cad948;
          puVar1 = PTR_DAT_04caa458;
          if (lVar9 != 0) {
            uVar7 = UnityEngine_Component__get_gameObject_43bcde8(lVar9,0);
            uVar11 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
            System_Action___ctor_47b5ed0(uVar11,lVar6,*(undefined8 *)puVar4,0);
            Dino_BusSand_App_UI_UIPanel__Bind_21f4ca8(uVar7,uVar11,1,*(undefined8 *)puVar2,0);
            uVar7 = UnityEngine_Component__get_gameObject_43bcde8(lVar8,0);
            uVar11 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
            System_Action___ctor_47b5ed0(uVar11,lVar6,*(undefined8 *)puVar5,0);
            Dino_BusSand_App_UI_UIPanel__Bind_21f4ca8(uVar7,uVar11,0,0,0);
            lVar6 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18);
            if (lVar6 != 0) {
              (**(code **)(lVar6 + 0x18))
                        (*(undefined8 *)(lVar6 + 0x40),lVar8,*puVar10,*(undefined8 *)(lVar6 + 0x28))
              ;
            }
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

