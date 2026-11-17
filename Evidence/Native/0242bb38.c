/* IL2CPP: Dino.BusSand.App.UI.DailyGiftPanel$$GuideAmount
void Dino_BusSand_App_UI_DailyGiftPanel__GuideAmount (UnityEngine_UI_Image_o* days, System_String_o* name, int32_t day, float artRight, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.DailyGiftPanel$$GuideAmount
   void Dino_BusSand_App_UI_DailyGiftPanel__GuideAmount (UnityEngine_UI_Image_o* days,
   System_String_o* name, int32_t day, float artRight, const MethodInfo* method); */

void Dino_BusSand_App_UI_DailyGiftPanel__GuideAmount_232bb38
               (float param_1,long param_2,undefined8 param_3,undefined4 param_4)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 extraout_x1;
  float fVar6;
  float fVar7;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_28;
  
  if ((bRam0000000004f9c5ff & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb8dc0);
    FUN_02132f7c(PTR_DAT_04cadd90);
    FUN_02132f7c(PTR_DAT_04cadd98);
    FUN_02132f7c(PTR_DAT_04caca58);
    FUN_02132f7c(PTR_DAT_04cadda0);
    FUN_02132f7c(PTR_DAT_04cac878);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cabb10);
    FUN_02132f7c(PTR_DAT_04cb8f38);
    bRam0000000004f9c5ff = 1;
  }
  uStack_28 = 0;
  lVar3 = Dino_BusSand_App_Meta_Monetization__DailyGiftDay_226802c(param_4,0);
  if ((lVar3 == 0) || (*(int *)(lVar3 + 0x18) == 0)) {
    return;
  }
  iVar2 = System_Collections_Generic_List_KeyValuePair_int__long____get_Item_3965544
                    (lVar3,0,*(undefined8 *)PTR_DAT_04cadda0);
  if (param_2 != 0) {
    uVar4 = UnityEngine_Component__get_transform_43bcd18(param_2,0);
    uStack_28 = extraout_x1;
    uVar5 = System_Int64__ToString_482e7e4(&uStack_28,0);
    if (iVar2 != 0x3e9) {
      uVar5 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cabb10,uVar5,0);
    }
    puVar1 = PTR_DAT_04cb8dc0;
    lVar3 = *(long *)PTR_DAT_04cb8dc0;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar3 = *(long *)puVar1;
    }
    lVar3 = *(long *)(lVar3 + 0xb8);
    uStack_50 = 0;
    uStack_58 = 0;
    uStack_48 = 0;
    System_Nullable_Color____ctor_2bc9090
              (*(undefined4 *)(lVar3 + 0x18),*(undefined4 *)(lVar3 + 0x1c),
               *(undefined4 *)(lVar3 + 0x20),*(undefined4 *)(lVar3 + 0x24),&uStack_58,
               *(undefined8 *)PTR_DAT_04cac878);
    lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
    param_1 = param_1 + _UNK_00e20060;
    fVar6 = *(float *)(lVar3 + 0x10);
    fVar7 = *(float *)(lVar3 + 0x14);
    if (*(int *)(*(long *)PTR_DAT_04cad330 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uStack_60 = uStack_48;
    uStack_68 = uStack_50;
    uStack_70 = uStack_58;
    lVar3 = Dino_BusSand_App_UI_UiKit__Text_2282314
                      (0x41f00000,0x43480000,0x42700000,param_1 + -100.0 + fVar6,fVar7 + -48.5,uVar4
                       ,param_3,uVar5,*(undefined8 *)PTR_DAT_04cb8f38,&uStack_70,0x204,0);
    if (lVar3 != 0) {
      TMPro_TMP_Text__set_textWrappingMode_42cc8a8(lVar3,0,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

