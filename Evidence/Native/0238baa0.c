/* IL2CPP: Dino.BusSand.App.UI.UiKit$$GoldGradient
void Dino_BusSand_App_UI_UiKit__GoldGradient (TMPro_TMP_Text_o* t, System_String_o* preset, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UiKit$$GoldGradient
   void Dino_BusSand_App_UI_UiKit__GoldGradient (TMPro_TMP_Text_o* t, System_String_o* preset, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_UiKit__GoldGradient_228baa0
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long *param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  if ((bRam0000000004f9c183 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cb51a8);
    FUN_02132f7c(PTR_DAT_04cb51b0);
    bRam0000000004f9c183 = 1;
  }
  puVar3 = PTR_DAT_04cb51b0;
  puVar2 = PTR_DAT_04cb51a8;
  puVar1 = PTR_DAT_04cad330;
  if (param_5 != (long *)0x0) {
    TMPro_TMP_Text__set_enableVertexGradient_42cbaf4(param_5,1,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar4 = Dino_BusSand_App_UI_UiKit__Hex_2285a84(*(undefined8 *)puVar2);
    uVar8 = param_4;
    uVar6 = param_2;
    uVar7 = param_3;
    uVar5 = Dino_BusSand_App_UI_UiKit__Hex_2285a84(*(undefined8 *)puVar2);
    Dino_BusSand_App_UI_UiKit__Hex_2285a84(*(undefined8 *)puVar3);
    Dino_BusSand_App_UI_UiKit__Hex_2285a84(*(undefined8 *)puVar3);
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    TMPro_VertexGradient___ctor_42fdd38
              (uVar4,param_2,param_3,param_4,uVar5,uVar6,uVar7,uVar8,&uStack_c0,0);
    uStack_f8 = uStack_b8;
    uStack_100 = uStack_c0;
    uStack_e8 = uStack_a8;
    uStack_f0 = uStack_b0;
    uStack_d8 = uStack_98;
    uStack_e0 = uStack_a0;
    uStack_c8 = uStack_88;
    uStack_d0 = uStack_90;
    TMPro_TMP_Text__set_colorGradient_42cbb3c(param_5,&uStack_100,0);
    (**(code **)(*param_5 + 0x2a8))
              (0x3f800000,0x3f800000,0x3f800000,0x3f800000,param_5,*(undefined8 *)(*param_5 + 0x2b0)
              );
    Dino_BusSand_App_UI_UiKit__Style_2287e10(param_5,param_6);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

