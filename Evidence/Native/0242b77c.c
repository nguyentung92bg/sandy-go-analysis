/* IL2CPP: Dino.BusSand.App.UI.DailyGiftPanel$$Amount
TMPro_TextMeshProUGUI_o* Dino_BusSand_App_UI_DailyGiftPanel__Amount (UnityEngine_RectTransform_o* node, System_Collections_Generic_KeyValuePair_int__long__o r, float size, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.DailyGiftPanel$$Amount
   TMPro_TextMeshProUGUI_o* Dino_BusSand_App_UI_DailyGiftPanel__Amount (UnityEngine_RectTransform_o*
   node, System_Collections_Generic_KeyValuePair_int__long__o r, float size, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_DailyGiftPanel__Amount_232b77c
               (undefined4 param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  int iStack_44;
  
  puVar1 = PTR_DAT_04cb8f30;
  if ((bRam0000000004f9c5fd & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb8dc0);
    FUN_02132f7c(PTR_DAT_04cadd90);
    FUN_02132f7c(PTR_DAT_04cadd98);
    FUN_02132f7c(PTR_DAT_04cac878);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cabb10);
    FUN_02132f7c(PTR_DAT_04cb8f30);
    FUN_02132f7c(PTR_DAT_04cafc38);
    bRam0000000004f9c5fd = 1;
  }
  puVar3 = PTR_DAT_04cb8dc0;
  uStack_50 = 0;
  iStack_44 = param_3;
  uVar4 = System_Int32__ToString_482d750(&iStack_44,0);
  uVar4 = System_String__Concat_46c82e0(*(undefined8 *)puVar1,uVar4,0);
  uStack_50 = param_4;
  uVar5 = System_Int64__ToString_482e7e4(&uStack_50,0);
  if (param_3 != 0x3e9) {
    uVar5 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cabb10,uVar5,0);
  }
  puVar2 = PTR_DAT_04cad330;
  puVar1 = PTR_DAT_04cac878;
  lVar6 = *(long *)puVar3;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar6 = *(long *)puVar3;
  }
  puVar3 = PTR_DAT_04cafc38;
  puVar7 = *(undefined4 **)(lVar6 + 0xb8);
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  System_Nullable_Color____ctor_2bc9090
            (*puVar7,puVar7[1],puVar7[2],puVar7[3],&uStack_68,*(undefined8 *)puVar1);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uStack_78 = uStack_60;
  uStack_80 = uStack_68;
  uStack_70 = uStack_58;
  Dino_BusSand_App_UI_UiKit__Text_2282314
            (param_1,0x43480000,0x42700000,0,0,param_2,uVar4,uVar5,*(undefined8 *)puVar3,&uStack_80,
             0x202,0);
  return;
}

