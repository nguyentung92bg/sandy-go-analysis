/* IL2CPP: Dino.BusSand.App.UI.GuidePanel$$KitBubble
void Dino_BusSand_App_UI_GuidePanel__KitBubble (UnityEngine_RectTransform_o* bg, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.GuidePanel$$KitBubble
   void Dino_BusSand_App_UI_GuidePanel__KitBubble (UnityEngine_RectTransform_o* bg, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_GuidePanel__KitBubble_22cb30c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  float in_s3;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  if ((bRam0000000004f9c379 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad788);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cb6a78);
    FUN_02132f7c(PTR_DAT_04cb6a80);
    bRam0000000004f9c379 = 1;
  }
  puVar2 = PTR_DAT_04cb6a78;
  puVar1 = PTR_DAT_04ca9ae8;
  if (param_1 != 0) {
    uVar3 = UnityEngine_Transform__Find_43d4bec(param_1,*(undefined8 *)PTR_DAT_04cb6a78,0);
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac(lVar5);
    }
    uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar3,0,0);
    if ((uVar4 & 1) == 0) {
      lVar5 = UnityEngine_Component__GetComponent_object__26f97e8
                        (param_1,*(undefined8 *)PTR_DAT_04cad788);
      lVar6 = *(long *)puVar1;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_0218fdac(lVar6);
      }
      uVar4 = UnityEngine_Object__op_Inequality_43c8dec(lVar5,0,0);
      if ((uVar4 & 1) != 0) {
        if (lVar5 == 0) goto LAB_023cb538;
        UnityEngine_Behaviour__set_enabled_43bc50c(lVar5,0,0);
      }
      UnityEngine_RectTransform__get_rect_43cf450(param_1,0);
      if (in_s3 <= 1.0) {
        in_s3 = 200.0;
      }
      else {
        UnityEngine_RectTransform__get_rect_43cf450(param_1,0);
      }
      if (cRam0000000004f9b948 == '\0') {
        FUN_02132f7c(PTR_DAT_04cacfc0);
        cRam0000000004f9b948 = '\x01';
      }
      uVar8 = **(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8);
      uVar9 = (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1];
      fVar7 = 1.0;
      if (in_s3 / 255.0 <= 1.0) {
        fVar7 = in_s3 / 255.0;
      }
      if (*(int *)(*(long *)PTR_DAT_04cad330 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uStack_58 = 0;
      uStack_50 = 0;
      uStack_48 = 0;
      lVar5 = Dino_BusSand_App_UI_UiKit__Mirror_2281c4c
                        (uVar8,uVar9,uVar8,uVar9,fVar7,param_1,*(undefined8 *)puVar2,
                         *(undefined8 *)PTR_DAT_04cb6a80,&uStack_58,0);
      Dino_BusSand_App_UI_UiKit__Stretch_2281f58(0,0,0,0,lVar5,0);
      if (lVar5 == 0) goto LAB_023cb538;
      UnityEngine_Transform__SetAsFirstSibling_43d45d8(lVar5,0);
    }
    return;
  }
LAB_023cb538:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

