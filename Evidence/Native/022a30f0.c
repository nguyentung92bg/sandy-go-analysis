/* IL2CPP: Dino.BusSand.App.UI.ClimbTowerPanel$$ShowClaimedTip
void Dino_BusSand_App_UI_ClimbTowerPanel__ShowClaimedTip (Dino_BusSand_App_UI_ClimbTowerPanel_o* __this, UnityEngine_RectTransform_o* box, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ClimbTowerPanel$$ShowClaimedTip
   void Dino_BusSand_App_UI_ClimbTowerPanel__ShowClaimedTip (Dino_BusSand_App_UI_ClimbTowerPanel_o*
   __this, UnityEngine_RectTransform_o* box, const MethodInfo* method); */

void Dino_BusSand_App_UI_ClimbTowerPanel__ShowClaimedTip_21a30f0
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined8 param_4,
               long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined8 uStack_58;
  
  puVar3 = PTR_DAT_04cae8f0;
  if ((bRam0000000004f9ba42 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabda8);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    FUN_02132f7c(PTR_DAT_04cae8f0);
    bRam0000000004f9ba42 = 1;
  }
  puVar2 = PTR_DAT_04cabdb0;
  puVar1 = PTR_DAT_04ca9ae8;
  uStack_58 = 0;
  plVar4 = (long *)Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_4,*(undefined8 *)puVar3,0);
  if (plVar4 == (long *)0x0) {
    plVar4 = (long *)0x0;
  }
  else if (*plVar4 != *(long *)puVar2) {
    plVar4 = (long *)0x0;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = UnityEngine_Object__op_Equality_43c6f30(plVar4,0,0);
  if ((uVar5 & 1) == 0) {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar5 = UnityEngine_Object__op_Equality_43c6f30(param_5,0,0);
    if ((uVar5 & 1) == 0) {
      Dino_BusSand_App_UI_ClimbTowerPanel__HideAllItemTips_21a2ae4(param_4,0);
      if (plVar4 == (long *)0x0) {
LAB_022a337c:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      plVar6 = (long *)UnityEngine_Transform__get_parent_43d0d70(plVar4,0);
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)0x0;
      }
      else if (*plVar6 != *(long *)puVar2) {
        plVar6 = (long *)0x0;
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar5 = UnityEngine_Object__op_Equality_43c6f30(plVar6,0,0);
      if ((uVar5 & 1) == 0) {
        if (cRam0000000004f9b94d == '\0') {
          FUN_02132f7c(PTR_DAT_04cad1b0);
          cRam0000000004f9b94d = '\x01';
        }
        puVar3 = PTR_DAT_04cad1b0;
        uVar7 = **(undefined8 **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
        uVar7 = 0;
        if ((uVar5 & 1) != 0) {
          if (cRam0000000004f9b94d == '\0') {
            FUN_02132f7c(PTR_DAT_04cad1b0);
            cRam0000000004f9b94d = '\x01';
          }
          if (**(long **)(*(long *)puVar3 + 0xb8) == 0) goto LAB_022a337c;
          uVar7 = *(undefined8 *)(**(long **)(*(long *)puVar3 + 0xb8) + 0x20);
        }
        if (param_5 == 0) goto LAB_022a337c;
        uVar8 = UnityEngine_Transform__get_position_43d0e48(param_5,0);
        if (*(int *)(*(long *)PTR_DAT_04cabda8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        UnityEngine_RectTransformUtility__WorldToScreenPoint_467e894(uVar8,param_2,param_3,uVar7,0);
        uVar7 = UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle_467e798
                          (plVar6,uVar7,&uStack_58,0);
        uVar7 = Dino_BusSand_App_UI_ClimbTowerPanel__TipsAnim_21a6620
                          (0,uStack_58._4_4_ + 150.0,0,uStack_58._4_4_ + 150.0 + 150.0,uVar7,plVar4)
        ;
        Dino_BusSand_App_UI_UIPanel__Run_2200f98(param_4,uVar7,0);
      }
    }
  }
  return;
}

