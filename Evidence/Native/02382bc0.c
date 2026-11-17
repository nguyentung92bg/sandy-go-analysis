/* IL2CPP: Dino.BusSand.App.UI.KitPopup$$LevelPlate
TMPro_TextMeshProUGUI_o* Dino_BusSand_App_UI_KitPopup__LevelPlate (UnityEngine_Transform_o* panel, int32_t level, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.KitPopup$$LevelPlate
   TMPro_TextMeshProUGUI_o* Dino_BusSand_App_UI_KitPopup__LevelPlate (UnityEngine_Transform_o*
   panel, int32_t level, const MethodInfo* method); */

void Dino_BusSand_App_UI_KitPopup__LevelPlate_2282bc0(undefined8 param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  puVar1 = PTR_DAT_04cad330;
  if ((bRam0000000004f9c14a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caf408);
                    /* try { // try from 02382c00 to 02482c07 has its CatchHandler @ 02382f04 */
    FUN_02132f7c(PTR_DAT_04cac878);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cb4e20);
                    /* try { // try from 02382c24 to 02482c53 has its CatchHandler @ 02382f60 */
    FUN_02132f7c(PTR_DAT_04cb4e28);
    FUN_02132f7c(PTR_DAT_04caf460);
    FUN_02132f7c(PTR_DAT_04cb4e30);
    bRam0000000004f9c14a = 1;
  }
  puVar4 = PTR_DAT_04cb4e30;
  puVar3 = PTR_DAT_04cb4e28;
  puVar2 = PTR_DAT_04caf408;
                    /* try { // try from 02382c54 to 02482d83 has its CatchHandler @ 023822a4 */
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar5 = Dino_BusSand_App_UI_UiKit__Img_228203c
                    (0x43c80000,0x42f80000,0,0,0x3f800000,param_1,*(undefined8 *)puVar4,
                     *(undefined8 *)puVar3,1);
  Dino_BusSand_App_UI_KitParts__AtTop_object__27db09c(0x428c0000,0,lVar5,*(undefined8 *)puVar2);
  puVar3 = PTR_DAT_04cb4e20;
  puVar2 = PTR_DAT_04caf460;
  puVar1 = PTR_DAT_04cac878;
  if (lVar5 != 0) {
    uVar6 = UnityEngine_Component__get_transform_43bcd18(lVar5,0);
    uVar7 = Dino_BusSand_App_UI_UiKit__LevelText_2282d78(param_2);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
    System_Nullable_Color____ctor_2bc9090
              (0x3f800000,0x3f800000,0x3f800000,0x3f800000,&uStack_48,*(undefined8 *)puVar1);
    uStack_50 = uStack_38;
    uStack_58 = uStack_40;
    uStack_60 = uStack_48;
    Dino_BusSand_App_UI_UiKit__Text_2282314
              (0x42940000,0x43b90000,0x42d00000,0,0x40c00000,uVar6,*(undefined8 *)puVar3,uVar7,
               *(undefined8 *)puVar2,&uStack_60,0x202);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

