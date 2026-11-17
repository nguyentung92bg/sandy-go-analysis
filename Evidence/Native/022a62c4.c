/* IL2CPP: Dino.BusSand.App.UI.ClimbTowerPanel$$SetProgress
void Dino_BusSand_App_UI_ClimbTowerPanel__SetProgress (Dino_BusSand_App_UI_ClimbTowerPanel_o* __this, float h, int32_t label, bool hideMarker, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ClimbTowerPanel$$SetProgress
   void Dino_BusSand_App_UI_ClimbTowerPanel__SetProgress (Dino_BusSand_App_UI_ClimbTowerPanel_o*
   __this, float h, int32_t label, bool hideMarker, const MethodInfo* method); */

void Dino_BusSand_App_UI_ClimbTowerPanel__SetProgress_21a62c4
               (undefined4 param_1,long param_2,undefined4 param_3,uint param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 uVar6;
  undefined4 uStack_34;
  
  puVar1 = PTR_DAT_04ca9ae8;
  uStack_34 = param_3;
  if ((bRam0000000004f9ba3b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cadf40);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cae9a8);
    FUN_02132f7c(PTR_DAT_04caeae0);
    bRam0000000004f9ba3b = 1;
  }
  uVar4 = *(undefined8 *)(param_2 + 0x60);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
  if ((uVar2 & 1) != 0) {
    if (*(long *)(param_2 + 0x60) == 0) goto LAB_022a64c8;
    UnityEngine_RectTransform__SetSizeWithCurrentAnchors_43d09cc
              (param_1,*(long *)(param_2 + 0x60),1,0);
  }
  uVar4 = *(undefined8 *)(param_2 + 0x68);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
  if ((uVar2 & 1) == 0) goto LAB_022a644c;
  lVar5 = *(long *)(param_2 + 0x68);
  if (lVar5 != 0) {
    uVar4 = UnityEngine_RectTransform__get_anchoredPosition_43cf828(lVar5,0);
    UnityEngine_RectTransform__set_anchoredPosition_43cf8ec(uVar4,param_1,lVar5,0);
    if (*(long *)(param_2 + 0x68) != 0) {
      lVar5 = UnityEngine_Component__GetComponent_object__26f97e8
                        (*(long *)(param_2 + 0x68),*(undefined8 *)PTR_DAT_04cadf40);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar1);
      }
      uVar2 = UnityEngine_Object__op_Inequality_43c8dec(lVar5,0,0);
      if ((uVar2 & 1) == 0) {
        if ((*(long *)(param_2 + 0x68) == 0) ||
           (lVar5 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_2 + 0x68),0),
           lVar5 == 0)) goto LAB_022a64c8;
        UnityEngine_GameObject__SetActive_43c1408(lVar5,(param_4 ^ 0xffffffff) & 1,0);
      }
      else {
        if (lVar5 == 0) goto LAB_022a64c8;
        uVar6 = 0;
        if ((param_4 & 1) == 0) {
          uVar6 = 0x3f800000;
        }
        UnityEngine_CanvasGroup__set_alpha_467ad3c(uVar6,lVar5,0);
      }
LAB_022a644c:
      puVar1 = PTR_DAT_04cae9a8;
      uVar4 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_2,*(undefined8 *)PTR_DAT_04caeae0,0);
      uVar3 = System_Int32__ToString_482d750(&uStack_34,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar1);
      }
      Dino_BusSand_App_UI_StreakRateHallBar__SetTexts_21e0a40(uVar4,uVar3,0);
      Dino_BusSand_App_UI_ClimbTowerPanel__RefreshTicks_21a58d4(param_1,param_2);
      return;
    }
  }
LAB_022a64c8:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

