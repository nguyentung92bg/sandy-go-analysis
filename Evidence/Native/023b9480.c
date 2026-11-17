/* IL2CPP: Dino.BusSand.App.UI.StorePanel$$Price
UnityEngine_RectTransform_o* Dino_BusSand_App_UI_StorePanel__Price (UnityEngine_Transform_o* parent, System_String_o* name, System_String_o* text, UnityEngine_Vector2_o size, UnityEngine_Vector2_o pos, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.StorePanel$$Price
   UnityEngine_RectTransform_o* Dino_BusSand_App_UI_StorePanel__Price (UnityEngine_Transform_o*
   parent, System_String_o* name, System_String_o* text, UnityEngine_Vector2_o size,
   UnityEngine_Vector2_o pos, const MethodInfo* method); */

undefined8
Dino_BusSand_App_UI_StorePanel__Price_22b9480
          (float param_1,float param_2,undefined4 param_3,undefined4 param_4,undefined8 param_5,
          undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  puVar3 = PTR_DAT_04cad330;
  if ((bRam0000000004f9c2f5 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac878);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cb63e8);
    FUN_02132f7c(PTR_DAT_04cad1f8);
    FUN_02132f7c(PTR_DAT_04cafcf0);
    bRam0000000004f9c2f5 = 1;
  }
  puVar5 = PTR_DAT_04cb63e8;
  puVar4 = PTR_DAT_04cafcf0;
  puVar2 = PTR_DAT_04cad1f8;
  puVar1 = PTR_DAT_04cac878;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uVar6 = Dino_BusSand_App_UI_UiKit__Mirror_2281c4c
                    (param_1,param_2,param_3,param_4,param_2 / 151.0,param_5,param_6,
                     *(undefined8 *)puVar5,&uStack_78,0);
  Dino_BusSand_App_UI_UiKit__HitArea_228277c(uVar6,0);
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  System_Nullable_Color____ctor_2bc9090
            (0x3f800000,0x3f800000,0x3f800000,0x3f800000,&uStack_90,*(undefined8 *)puVar1);
  uStack_a8 = uStack_88;
  uStack_b0 = uStack_90;
  uStack_a0 = uStack_80;
  Dino_BusSand_App_UI_UiKit__Text_2282314
            (param_2 * 0.5,param_1 + -30.0,param_2 * _UNK_00e20994,0,param_2 * _UNK_00e20af8,uVar6,
             *(undefined8 *)puVar2,param_7,*(undefined8 *)puVar4,&uStack_b0,0x202,0);
  return uVar6;
}

