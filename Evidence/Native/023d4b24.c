/* IL2CPP: Dino.BusSand.App.UI.HomeAtelier$$Init
void Dino_BusSand_App_UI_HomeAtelier__Init (Dino_BusSand_App_UI_HomeAtelier_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HomeAtelier$$Init
   void Dino_BusSand_App_UI_HomeAtelier__Init (Dino_BusSand_App_UI_HomeAtelier_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_HomeAtelier__Init_22d4b24(long param_1)

{
  double dVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 uVar14;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  
  if ((bRam0000000004f9c3cd & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb0890);
    FUN_02132f7c(PTR_DAT_04cb6ee8);
    FUN_02132f7c(PTR_DAT_04cb6ef0);
    FUN_02132f7c(PTR_DAT_04cacf98);
    FUN_02132f7c(PTR_DAT_04cb4e90);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cb6ef8);
    FUN_02132f7c(PTR_DAT_04cb6f00);
    FUN_02132f7c(PTR_DAT_04cafc30);
    bRam0000000004f9c3cd = 1;
  }
  puVar5 = PTR_DAT_04cb4e90;
  puVar2 = PTR_DAT_04cad330;
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  if (cRam0000000004f9b948 == '\0') {
    FUN_02132f7c(PTR_DAT_04cacfc0);
    cRam0000000004f9b948 = '\x01';
  }
  puVar4 = PTR_DAT_04cafc30;
  puVar3 = PTR_DAT_04cacfc0;
  uVar12 = **(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8);
  uVar14 = (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1];
  uStack_58 = 0;
  uStack_60 = 0;
  System_Nullable_Vector2____ctor_2bd0a48(0x3f000000,0x3f800000,&uStack_60,*(undefined8 *)puVar5);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar7 = Dino_BusSand_App_UI_UiKit__Node_22818c4
                    (uVar12,uVar14,uVar12,uVar14,uVar9,*(undefined8 *)puVar4,uStack_60,uStack_58,0);
  plVar10 = (long *)(param_1 + 0x28);
  *plVar10 = lVar7;
  thunk_FUN_02134474(plVar10,lVar7);
  puVar2 = PTR_DAT_04cb6ef8;
  if (*plVar10 != 0) {
    UnityEngine_RectTransform__set_pivot_43cfbf4(0x3f000000,0x3f800000,*plVar10,0);
    lVar7 = *plVar10;
    if (cRam0000000004f9b948 == '\0') {
      FUN_02132f7c(PTR_DAT_04cacfc0);
      cRam0000000004f9b948 = '\x01';
    }
    puVar8 = *(undefined4 **)(*(long *)puVar3 + 0xb8);
    lVar7 = Dino_BusSand_App_UI_UiKit__Node_22818c4
                      (*puVar8,puVar8[1],0,0,lVar7,*(undefined8 *)puVar2,0,0,0);
    if ((lVar7 != 0) &&
       (lVar7 = UnityEngine_Component__get_gameObject_43bcde8(lVar7,0), puVar2 = PTR_DAT_04cb6ef0,
       lVar7 != 0)) {
      UnityEngine_GameObject__AddComponent_object__275a54c(lVar7,*(undefined8 *)PTR_DAT_04cb6ee8);
      lVar7 = UnityEngine_GameObject__AddComponent_object__275a54c(lVar7,*(undefined8 *)puVar2);
      plVar11 = (long *)(param_1 + 0x38);
      *plVar11 = lVar7;
      thunk_FUN_02134474(plVar11,lVar7);
      plVar10 = (long *)*plVar11;
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x2c8))(plVar10,0,*(undefined8 *)(*plVar10 + 0x2d0));
        if ((*plVar11 != 0) &&
           (lVar7 = UnityEngine_Component__get_gameObject_43bcde8(*plVar11,0), lVar7 != 0)) {
          lVar7 = UnityEngine_GameObject__AddComponent_object__275a54c
                            (lVar7,*(undefined8 *)PTR_DAT_04cb0890);
          plVar10 = (long *)(param_1 + 0xe0);
          *plVar10 = lVar7;
          thunk_FUN_02134474(plVar10,lVar7);
          puVar2 = PTR_DAT_04cb6f00;
          if (*plVar10 != 0) {
            UnityEngine_CanvasGroup__set_blocksRaycasts_467b03c(*plVar10,0,0);
            uVar9 = *(undefined8 *)(param_1 + 0x20);
            if (cRam0000000004f9b948 == '\0') {
              FUN_02132f7c(PTR_DAT_04cacfc0);
              cRam0000000004f9b948 = '\x01';
            }
            puVar8 = *(undefined4 **)(*(long *)puVar3 + 0xb8);
            uVar12 = *puVar8;
            uVar14 = puVar8[1];
            uStack_68 = 0;
            uStack_70 = 0;
            System_Nullable_Vector2____ctor_2bd0a48
                      (0x3f000000,0x3f800000,&uStack_70,*(undefined8 *)puVar5);
            lVar7 = Dino_BusSand_App_UI_UiKit__Node_22818c4
                              (uVar12,uVar14,uVar12,uVar14,uVar9,*(undefined8 *)puVar2,uStack_70,
                               uStack_68,0);
            plVar10 = (long *)(param_1 + 0x30);
            *plVar10 = lVar7;
            thunk_FUN_02134474(plVar10,lVar7);
            if (*plVar10 != 0) {
              UnityEngine_RectTransform__set_pivot_43cfbf4(0x3f000000,0x3f800000,*plVar10,0);
              if (((*plVar10 != 0) &&
                  (lVar7 = UnityEngine_Component__get_gameObject_43bcde8(*plVar10,0), lVar7 != 0))
                 && (plVar10 = (long *)UnityEngine_GameObject__AddComponent_object__275a54c
                                                 (lVar7,*(undefined8 *)PTR_DAT_04cacf98),
                    puVar2 = PTR_DAT_04cabaf8, plVar10 != (long *)0x0)) {
                (**(code **)(*plVar10 + 0x2a8))
                          (0x3f800000,0x3f800000,0x3f800000,0,plVar10,
                           *(undefined8 *)(*plVar10 + 0x2b0));
                (**(code **)(*plVar10 + 0x2c8))(plVar10,1,*(undefined8 *)(*plVar10 + 0x2d0));
                if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                iVar6 = Dino_BusSand_App_Meta_Profile__get_Level_2273514(0);
                plVar10 = *(long **)(param_1 + 0xf0);
                if (iVar6 < 2) {
                  iVar6 = 1;
                }
                *(int *)(param_1 + 0x58) = iVar6;
                *(float *)(param_1 + 0x5c) = (float)iVar6;
                if (plVar10 != (long *)0x0) {
                  fVar13 = *(float *)(param_1 + 0xec);
                  dVar1 = (double)(**(code **)(*plVar10 + 0x1b8))
                                            (plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
                  *(float *)(param_1 + 0xcc) = fVar13 + (float)dVar1 + (float)dVar1 + 2.5;
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

