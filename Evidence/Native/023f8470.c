/* IL2CPP: Dino.BusSand.App.UI.LanguagePanel$$BuildRow
TMPro_TMP_Text_o* Dino_BusSand_App_UI_LanguagePanel__BuildRow (Dino_BusSand_App_UI_LanguagePanel_o* __this, UnityEngine_RectTransform_o* content, Dino_BusSand_App_UI_LanguagePanel_Row_o* row, bool selected, float fromTop, int32_t index, System_String_o** code, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.LanguagePanel$$BuildRow
   TMPro_TMP_Text_o* Dino_BusSand_App_UI_LanguagePanel__BuildRow
   (Dino_BusSand_App_UI_LanguagePanel_o* __this, UnityEngine_RectTransform_o* content,
   Dino_BusSand_App_UI_LanguagePanel_Row_o* row, bool selected, float fromTop, int32_t index,
   System_String_o** code, const MethodInfo* method); */

undefined8
Dino_BusSand_App_UI_LanguagePanel__BuildRow_22f8470
          (undefined4 param_1,undefined8 param_2,undefined8 param_3,long param_4,ulong param_5,
          undefined4 param_6,undefined8 *param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined4 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_74;
  
  puVar1 = PTR_DAT_04cb7940;
  uStack_74 = param_6;
  if ((bRam0000000004f9c492 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04caf410);
    FUN_02132f7c(PTR_DAT_04caba60);
    FUN_02132f7c(PTR_DAT_04cb4190);
    FUN_02132f7c(PTR_DAT_04cac878);
    FUN_02132f7c(PTR_DAT_04cb7948);
    FUN_02132f7c(PTR_DAT_04cb7940);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cb7950);
    FUN_02132f7c(PTR_DAT_04cb51d0);
    FUN_02132f7c(PTR_DAT_04cb4e18);
    FUN_02132f7c(PTR_DAT_04cafcf0);
    FUN_02132f7c(PTR_DAT_04cb7958);
    FUN_02132f7c(PTR_DAT_04cad4a8);
    bRam0000000004f9c492 = 1;
  }
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  lVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  Dino_BusSand_App_UI_LanguagePanel___c__DisplayClass15_0___ctor_22f95f4(lVar5,0);
  if (lVar5 != 0) {
    *(undefined8 *)(lVar5 + 0x10) = param_2;
    thunk_FUN_02134474((undefined8 *)(lVar5 + 0x10),param_2);
    puVar1 = PTR_DAT_04cb7950;
    if ((param_4 != 0) && (lVar6 = *(long *)(param_4 + 0x20), lVar6 != 0)) {
      if (*(int *)(lVar6 + 0x18) < 1) {
        uVar7 = System_Int32__ToString_482d750(&uStack_74,0);
      }
      else {
        uVar7 = System_Collections_Generic_List_object___get_Item_3a81924
                          (lVar6,0,*(undefined8 *)PTR_DAT_04cb4190);
      }
      puVar3 = PTR_DAT_04caf410;
      puVar2 = PTR_DAT_04cad330;
      *param_7 = uVar7;
      thunk_FUN_02134474(param_7,uVar7);
      uVar7 = System_String__Concat_46c82e0(*(undefined8 *)puVar1,*param_7,0);
      if ((param_5 & 1) == 0) {
        if (cRam0000000004f9b948 == '\0') {
          FUN_02132f7c(PTR_DAT_04cacfc0);
          cRam0000000004f9b948 = '\x01';
        }
        uVar14 = **(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8);
        uVar15 = (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1];
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        puVar10 = &uStack_e8;
        uStack_e8 = 0;
        uStack_e0 = 0;
        uStack_d8 = 0;
        uVar9 = *(undefined8 *)PTR_DAT_04cb4e18;
        uVar13 = _UNK_00e1ffec;
      }
      else {
        if (cRam0000000004f9b948 == '\0') {
          FUN_02132f7c(PTR_DAT_04cacfc0);
          cRam0000000004f9b948 = '\x01';
        }
        uVar14 = **(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8);
        uVar15 = (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1];
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        puVar10 = &uStack_100;
        uStack_100 = 0;
        uStack_f8 = 0;
        uStack_f0 = 0;
        uVar9 = *(undefined8 *)PTR_DAT_04cb51d0;
        uVar13 = _UNK_00e2060c;
      }
      lVar6 = Dino_BusSand_App_UI_UiKit__Mirror_2281c4c
                        (0x443e0000,0x42f00000,uVar14,uVar15,uVar13,param_3,uVar7,uVar9,puVar10,0);
      puVar4 = PTR_DAT_04cb7958;
      puVar10 = (undefined8 *)PTR_DAT_04cafcf0;
      puVar1 = PTR_DAT_04cad4a8;
      Dino_BusSand_App_UI_KitParts__AtTop_object__27db09c(param_1,0,lVar6,*(undefined8 *)puVar3);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_UI_UiKit__HitArea_228277c(lVar6,0);
      uVar7 = *(undefined8 *)(param_4 + 0x10);
      uVar9 = *(undefined8 *)puVar4;
      if ((param_5 & 1) == 0) {
        puVar10 = (undefined8 *)puVar1;
      }
      uVar12 = *puVar10;
      if ((param_5 & 1) == 0) {
        lVar8 = *(long *)puVar2;
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar8 = *(long *)puVar2;
        }
        puVar11 = *(undefined4 **)(lVar8 + 0xb8);
        uStack_118 = 0;
        uStack_110 = 0;
        uStack_108 = 0;
        System_Nullable_Color____ctor_2bc9090
                  (*puVar11,puVar11[1],puVar11[2],puVar11[3],&uStack_118,
                   *(undefined8 *)PTR_DAT_04cac878);
        uVar14 = 0x40000000;
        uStack_a8 = uStack_110;
        uStack_b0 = uStack_118;
        uStack_a0 = uStack_108;
        puVar10 = &uStack_b0;
      }
      else {
        uStack_118 = 0;
        uStack_110 = 0;
        uStack_108 = 0;
        System_Nullable_Color____ctor_2bc9090
                  (0x3f800000,0x3f800000,0x3f800000,0x3f800000,&uStack_118,
                   *(undefined8 *)PTR_DAT_04cac878);
        uVar14 = 0x40c00000;
        uStack_80 = uStack_108;
        puVar10 = &uStack_90;
        uStack_88 = uStack_110;
        uStack_90 = uStack_118;
      }
      uStack_c8 = puVar10[1];
      uStack_d0 = *puVar10;
      uStack_c0 = *(undefined4 *)(puVar10 + 2);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uStack_120 = uStack_c0;
      uStack_128 = uStack_c8;
      uStack_130 = uStack_d0;
      uVar7 = Dino_BusSand_App_UI_UiKit__Text_2282314
                        (0x42580000,0x442f0000,0x42d00000,0,uVar14,lVar6,uVar9,uVar7,uVar12,
                         &uStack_130,0x202,0);
      *(undefined8 *)(lVar5 + 0x18) = *(undefined8 *)(param_4 + 0x20);
      thunk_FUN_02134474();
      puVar2 = PTR_DAT_04cb7948;
      puVar1 = PTR_DAT_04caa458;
      if (lVar6 != 0) {
        uVar9 = UnityEngine_Component__get_gameObject_43bcde8(lVar6,0);
        uVar12 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
        System_Action___ctor_47b5ed0(uVar12,lVar5,*(undefined8 *)puVar2,0);
        Dino_BusSand_App_UI_UIPanel__Bind_21f4ca8(uVar9,uVar12,0,0,0);
        return uVar7;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

