/* IL2CPP: Dino.BusSand.App.UI.HomeSideButton$$AddDot
void Dino_BusSand_App_UI_HomeSideButton__AddDot (Dino_BusSand_App_UI_HomeSideButton_o* __this, UnityEngine_RectTransform_o* rt, UnityEngine_Vector2_o pos, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HomeSideButton$$AddDot
   void Dino_BusSand_App_UI_HomeSideButton__AddDot (Dino_BusSand_App_UI_HomeSideButton_o* __this,
   UnityEngine_RectTransform_o* rt, UnityEngine_Vector2_o pos, const MethodInfo* method); */

void Dino_BusSand_App_UI_HomeSideButton__AddDot_22e8bfc
               (undefined4 param_1,undefined4 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  if ((bRam0000000004f9c437 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cb50b8);
    FUN_02132f7c(PTR_DAT_04cafb20);
    bRam0000000004f9c437 = 1;
  }
  puVar1 = PTR_DAT_04cad330;
  if (cRam0000000004f9b948 == '\0') {
    FUN_02132f7c(PTR_DAT_04cacfc0);
    cRam0000000004f9b948 = '\x01';
  }
  puVar3 = PTR_DAT_04cb50b8;
  puVar2 = PTR_DAT_04cafb20;
  uVar8 = **(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8);
  uVar9 = (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1];
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar5 = Dino_BusSand_App_UI_UiKit__Img_228203c
                    (uVar8,uVar9,param_1,param_2,0x3f800000,param_4,*(undefined8 *)puVar2,
                     *(undefined8 *)puVar3,0,0);
  if (lVar5 != 0) {
    lVar5 = UnityEngine_Component__get_gameObject_43bcde8(lVar5,0);
    plVar6 = (long *)(param_3 + 0x30);
    *plVar6 = lVar5;
    thunk_FUN_02134474(plVar6,lVar5);
    if (*(long *)(param_3 + 0x20) != 0) {
      lVar5 = *(long *)(*(long *)(param_3 + 0x20) + 0x38);
      lVar7 = *plVar6;
      if (lVar5 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = (**(code **)(lVar5 + 0x18))
                          (*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
      }
      if (lVar7 != 0) {
        if ((bRam0000000004fa8360 & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cf5bd0,uVar4 & 1,0);
          bRam0000000004fa8360 = 1;
        }
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar5 = *(long *)(lVar7 + 0x10);
        if (lVar5 != 0) {
          if (pcRam0000000004fa8430 == (code *)0x0) {
            pcRam0000000004fa8430 = (code *)FUN_02132f40(&UNK_00e5f2cc);
          }
                    /* WARNING: Could not recover jumptable at 0x044c1480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000004fa8430)(lVar5,uVar4 & 1);
          return;
        }
                    /* WARNING: Subroutine does not return */
        UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar7,0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

