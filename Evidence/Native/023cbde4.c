/* IL2CPP: Dino.BusSand.App.UI.GuidePanel$$ShowPointer
void Dino_BusSand_App_UI_GuidePanel__ShowPointer (Dino_BusSand_App_UI_GuidePanel_o* __this, UnityEngine_Vector2_o screen, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.GuidePanel$$ShowPointer
   void Dino_BusSand_App_UI_GuidePanel__ShowPointer (Dino_BusSand_App_UI_GuidePanel_o* __this,
   UnityEngine_Vector2_o screen, const MethodInfo* method); */

void Dino_BusSand_App_UI_GuidePanel__ShowPointer_22cbde4
               (undefined4 param_1,undefined4 param_2,long param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  long lVar8;
  undefined8 uVar9;
  
  lVar5 = *(long *)(param_3 + 0x38);
  if (lVar5 != 0) {
    if (*(char *)(lVar5 + 0x40) == '\0') {
      return;
    }
    if ((*(int *)(lVar5 + 0x44) != 0) ||
       (uVar2 = Dino_BusSand_App_UI_GuidePanel__EnsureHandGraphic_22cbeb4(param_3), (uVar2 & 1) == 0
       )) {
      puVar1 = PTR_DAT_04ca9ae8;
      if ((bRam0000000004f9c37c & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cabdc0);
        FUN_02132f7c(PTR_DAT_04ca9ae8);
        bRam0000000004f9c37c = 1;
      }
      uVar4 = *(undefined8 *)(param_3 + 0x80);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar2 = UnityEngine_Object__op_Equality_43c6f30(uVar4,0,0);
      if ((uVar2 & 1) != 0) {
        return;
      }
      if ((*(long *)(param_3 + 0x80) != 0) &&
         (lVar5 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_3 + 0x80),0),
         lVar5 != 0)) {
        UnityEngine_GameObject__SetActive_43c1408(lVar5,1,0);
        lVar8 = *(long *)(param_3 + 0x80);
        uVar2 = Dino_BusSand_App_UI_GuidePanel__UseKitArrow_22cc540(param_3);
        puVar1 = PTR_DAT_04cabdc0;
        lVar5 = *(long *)PTR_DAT_04cabdc0;
        if ((uVar2 & 1) == 0) {
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar5 = *(long *)puVar1;
          }
          puVar6 = *(undefined4 **)(lVar5 + 0xb8);
          puVar7 = puVar6 + 1;
        }
        else {
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar5 = *(long *)puVar1;
          }
          puVar6 = (undefined4 *)(*(long *)(lVar5 + 0xb8) + 0x28);
          puVar7 = (undefined4 *)(*(long *)(lVar5 + 0xb8) + 0x2c);
        }
        if (lVar8 != 0) {
          UnityEngine_RectTransform__set_sizeDelta_43cfa70(*puVar6,*puVar7,lVar8,0);
          if (*(long *)(param_3 + 0x38) != 0) {
            lVar5 = *(long *)puVar1;
            uVar4 = *(undefined8 *)(param_3 + 0x80);
            uVar3 = *(undefined8 *)(*(long *)(param_3 + 0x38) + 0x68);
            if (*(int *)(lVar5 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              lVar5 = *(long *)puVar1;
            }
            uVar9 = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 8);
            Dino_BusSand_App_UI_GuidePanel__PlaceAt_22cb940
                      (param_1,param_2,(float)uVar3 + (float)uVar9,
                       (float)((ulong)uVar3 >> 0x20) + (float)((ulong)uVar9 >> 0x20),param_3,uVar4);
            lVar5 = Dino_BusSand_App_UI_GuidePanel__ArrowBob_22cc7cc
                              (*(undefined8 *)(param_3 + 0x80));
            goto UnityEngine_MonoBehaviour__StartCoroutine_43c3cb4;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if ((*(long *)(param_3 + 0x70) != 0) &&
       (lVar5 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_3 + 0x70),0),
       lVar5 != 0)) {
      UnityEngine_GameObject__SetActive_43c1408(lVar5,1,0);
      lVar5 = *(long *)(param_3 + 0x38);
      if (lVar5 != 0) {
        Dino_BusSand_App_UI_GuidePanel__PlaceAt_22cb940
                  (param_1,param_2,*(undefined4 *)(lVar5 + 0x68),*(undefined4 *)(lVar5 + 0x6c),
                   param_3,*(undefined8 *)(param_3 + 0x70));
        lVar5 = Dino_BusSand_App_UI_GuidePanel__HandPress_22cc348(param_3);
UnityEngine_MonoBehaviour__StartCoroutine_43c3cb4:
        if (lVar5 == 0) {
          thunk_FUN_021985a8(PTR_DAT_04cc27e8,0,0);
          uVar3 = thunk_FUN_0216e89c();
          uVar4 = thunk_FUN_021985a8(PTR_DAT_04cf78c8);
          System_NullReferenceException___ctor_483267c(uVar3,uVar4,0);
        }
        else {
          uVar2 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_43c3a54();
          if ((uVar2 & 1) != 0) {
            if ((bRam0000000004fa84ef & 1) == 0) {
              FUN_02132f7c(PTR_DAT_04cf7890);
              bRam0000000004fa84ef = 1;
            }
            if (param_3 != 0) {
              lVar8 = *(long *)(param_3 + 0x10);
              if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(param_3,0);
              }
              if (pcRam0000000004fa8560 == (code *)0x0) {
                pcRam0000000004fa8560 = (code *)FUN_02132f40(&UNK_00e327ec);
              }
                    /* WARNING: Could not recover jumptable at 0x044c3dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*pcRam0000000004fa8560)(lVar8,lVar5);
              return;
            }
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          thunk_FUN_021985a8(PTR_DAT_04caa3a8);
          uVar3 = thunk_FUN_0216e89c();
          uVar4 = thunk_FUN_021985a8(PTR_DAT_04cf78b0);
          System_ArgumentException___ctor_47b660c(uVar3,uVar4,0);
        }
        uVar4 = thunk_FUN_021985a8(PTR_DAT_04cf78d0);
                    /* WARNING: Subroutine does not return */
        FUN_021330e8(uVar3,uVar4);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

