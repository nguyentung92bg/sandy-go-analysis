/* IL2CPP: Dino.BusSand.Cheat.CheatMobilePanel$$Add
void Dino_BusSand_Cheat_CheatMobilePanel__Add (Dino_BusSand_Cheat_CheatMobilePanel_o* __this, System_String_o* label, int32_t color, System_Action_o* run, bool close, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.CheatMobilePanel$$Add
   void Dino_BusSand_Cheat_CheatMobilePanel__Add (Dino_BusSand_Cheat_CheatMobilePanel_o* __this,
   System_String_o* label, int32_t color, System_Action_o* run, bool close, const MethodInfo*
   method); */

void Dino_BusSand_Cheat_CheatMobilePanel__Add_236b298
               (long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,byte param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  puVar1 = PTR_DAT_04cbad80;
  if ((bRam0000000004f9c799 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cbad88);
    FUN_02132f7c(PTR_DAT_04cbad80);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cbad90);
    FUN_02132f7c(PTR_DAT_04cad948);
    bRam0000000004f9c799 = 1;
  }
  lVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  Dino_BusSand_Cheat_CheatMobilePanel___c__DisplayClass25_0___ctor_236de2c(lVar4,0);
  puVar2 = PTR_DAT_04cbad90;
  puVar1 = PTR_DAT_04cad330;
  if (lVar4 != 0) {
    *(byte *)(lVar4 + 0x10) = param_5 & 1;
    *(long *)(lVar4 + 0x18) = param_1;
    thunk_FUN_02134474((long *)(lVar4 + 0x18),param_1);
    *(undefined8 *)(lVar4 + 0x20) = param_4;
    thunk_FUN_02134474((undefined8 *)(lVar4 + 0x20),param_4);
    uVar7 = *(undefined8 *)(param_1 + 0x38);
    uVar5 = System_String__Concat_46c82e0(*(undefined8 *)puVar2,param_2,0);
    if (cRam0000000004f9b948 == '\0') {
      FUN_02132f7c(PTR_DAT_04cacfc0);
      cRam0000000004f9b948 = '\x01';
    }
    uVar8 = **(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8);
    uVar9 = (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1];
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar5 = Dino_BusSand_App_UI_UiKit__LabelButton_228c6c0
                      (0x43c80000,0x43020000,uVar8,uVar9,0x42200000,uVar7,uVar5,param_3,param_2,0,0)
    ;
    lVar6 = Dino_BusSand_App_UI_UiKit__ButtonRoot_228cab4(uVar5,0);
    puVar3 = PTR_DAT_04cbad88;
    puVar2 = PTR_DAT_04cad948;
    puVar1 = PTR_DAT_04caa458;
    if (lVar6 != 0) {
      UnityEngine_RectTransform__set_anchorMax_43cf768(0x3f000000,0x3f800000,lVar6,0);
      UnityEngine_RectTransform__set_anchorMin_43cf5e4(0x3f000000,0x3f800000,lVar6,0);
      uVar8 = 0xc34f0000;
      if (*(int *)(param_1 + 0x44) != 0) {
        uVar8 = 0x434f0000;
      }
      UnityEngine_RectTransform__set_anchoredPosition_43cf8ec
                (uVar8,-65.0 - *(float *)(param_1 + 0x40),lVar6,0);
      *(undefined8 *)(param_1 + 0x60) = uVar5;
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x60),uVar5);
      uVar5 = UnityEngine_Component__get_gameObject_43bcde8(lVar6,0);
      uVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
      System_Action___ctor_47b5ed0(uVar7,lVar4,*(undefined8 *)puVar3,0);
      Dino_BusSand_App_UI_UIPanel__Bind_21f4ca8(uVar5,uVar7,1,*(undefined8 *)puVar2,0);
      if (*(int *)(param_1 + 0x44) == 1) {
        *(float *)(param_1 + 0x40) = *(float *)(param_1 + 0x40) + 150.0;
      }
      *(int *)(param_1 + 0x44) = 1 - *(int *)(param_1 + 0x44);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

