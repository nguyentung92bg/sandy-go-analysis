/* IL2CPP: Dino.BusSand.App.UI.UiKit$$Badge
TMPro_TextMeshProUGUI_o* Dino_BusSand_App_UI_UiKit__Badge (UnityEngine_Transform_o* parent, System_String_o* name, bool plus, UnityEngine_Vector2_o pos, float size, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.UiKit$$Badge
   TMPro_TextMeshProUGUI_o* Dino_BusSand_App_UI_UiKit__Badge (UnityEngine_Transform_o* parent,
   System_String_o* name, bool plus, UnityEngine_Vector2_o pos, float size, const MethodInfo*
   method); */

undefined8
Dino_BusSand_App_UI_UiKit__Badge_22888cc
          (undefined4 param_1,undefined4 param_2,float param_3,undefined8 param_4,undefined8 param_5
          ,ulong param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  float fVar6;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  puVar3 = PTR_DAT_04cb50b8;
  puVar1 = (undefined8 *)PTR_DAT_04cb4ed0;
  puVar2 = PTR_DAT_04cad330;
  if ((bRam0000000004f9c194 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac878);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04caf5e8);
    FUN_02132f7c(PTR_DAT_04cb4ed0);
    FUN_02132f7c(PTR_DAT_04cb50b8);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    FUN_02132f7c(PTR_DAT_04caf478);
    bRam0000000004f9c194 = 1;
  }
  if ((param_6 & 1) == 0) {
    puVar1 = (undefined8 *)puVar3;
  }
  uVar5 = *puVar1;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar4 = Dino_BusSand_App_UI_UiKit__Img_228203c
                    (param_3,param_3,param_1,param_2,0x3f800000,param_4,param_5,uVar5,0);
  if ((param_6 & 1) == 0) {
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar5 = UnityEngine_Component__get_transform_43bcd18(lVar4,0);
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    System_Nullable_Color____ctor_2bc9090
              (0x3f800000,0x3f800000,0x3f800000,0x3f800000,&uStack_78,
               *(undefined8 *)PTR_DAT_04cac878);
    fVar6 = param_3 * _UNK_00e20840;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uStack_88 = uStack_70;
    uStack_90 = uStack_78;
    uStack_80 = uStack_68;
                    /* try { // try from 02388a84 to 02488ab3 has its CatchHandler @ 02388ac0 */
    uVar5 = Dino_BusSand_App_UI_UiKit__Text_2282314
                      (param_3 * _UNK_00e206ec,param_3,param_3,0,fVar6,uVar5,
                       *(undefined8 *)PTR_DAT_04caf5e8,*(undefined8 *)PTR_DAT_04ca9c30,
                       *(undefined8 *)PTR_DAT_04caf478,&uStack_90,0x202);
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}

