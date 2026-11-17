/* IL2CPP: Dino.BusSand.App.UI.HomePanel$$BuildBackground
void Dino_BusSand_App_UI_HomePanel__BuildBackground (Dino_BusSand_App_UI_HomePanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomePanel$$BuildBackground
   void Dino_BusSand_App_UI_HomePanel__BuildBackground (Dino_BusSand_App_UI_HomePanel_o* __this,
   const MethodInfo* method); */

void Dino_BusSand_App_UI_HomePanel__BuildBackground_22e9784(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined4 *puVar6;
  long *plVar7;
  
  puVar1 = PTR_DAT_04cad330;
  if ((bRam0000000004f9c440 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1b08);
    FUN_02132f7c(PTR_DAT_04cb64f8);
    FUN_02132f7c(PTR_DAT_04cb74b0);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cb0c20);
    FUN_02132f7c(PTR_DAT_04cb6508);
    FUN_02132f7c(PTR_DAT_04cb6520);
    FUN_02132f7c(PTR_DAT_04cb74b8);
    bRam0000000004f9c440 = 1;
  }
  puVar2 = PTR_DAT_04cb6508;
  uVar3 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  lVar4 = Dino_BusSand_App_UI_UiKit__Fill_22817d8(0,0,0,0,uVar3,*(undefined8 *)puVar2,0);
  if ((lVar4 != 0) &&
     (lVar5 = UnityEngine_Component__get_gameObject_43bcde8(lVar4,0), puVar2 = PTR_DAT_04cb6520,
     puVar1 = PTR_DAT_04cb0c20, lVar5 != 0)) {
    UnityEngine_GameObject__AddComponent_object__275a54c(lVar5,*(undefined8 *)PTR_DAT_04cb1b08);
    lVar4 = Dino_BusSand_App_UI_UiKit__Img_228203c
                      (0x44870000,_UNK_00e20028,0,0,0x3f800000,lVar4,*(undefined8 *)puVar1,
                       *(undefined8 *)puVar2,0,0);
    if (lVar4 != 0) {
      UnityEngine_UI_Image__set_preserveAspect_44afae0(lVar4,0,0);
      uVar3 = UnityEngine_UI_Graphic__get_rectTransform_44aaf14(lVar4,0);
      *(undefined8 *)(param_1 + 0x40) = uVar3;
      thunk_FUN_02134474();
      lVar4 = UnityEngine_Component__get_gameObject_43bcde8(lVar4,0);
      if ((lVar4 != 0) &&
         (lVar4 = UnityEngine_GameObject__AddComponent_object__275a54c
                            (lVar4,*(undefined8 *)PTR_DAT_04cb64f8), puVar2 = PTR_DAT_04cb74b8,
         puVar1 = PTR_DAT_04cb74b0, uVar3 = _UNK_00e6a700, lVar4 != 0)) {
        *(undefined4 *)(lVar4 + 0x28) = 0xb6c40c41;
        *(undefined8 *)(lVar4 + 0x20) = uVar3;
        *(long *)(param_1 + 0x78) = lVar4;
        thunk_FUN_02134474((long *)(param_1 + 0x78),lVar4);
        uVar3 = *(undefined8 *)(param_1 + 0x40);
        if (cRam0000000004f9b948 == '\0') {
          FUN_02132f7c(PTR_DAT_04cacfc0);
          cRam0000000004f9b948 = '\x01';
        }
        lVar4 = Dino_BusSand_App_UI_UiKit__Node_22818c4
                          (**(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8),
                           (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1],0,0,uVar3,
                           *(undefined8 *)puVar2,0,0,0);
        plVar7 = (long *)(param_1 + 0x70);
        *plVar7 = lVar4;
        thunk_FUN_02134474(plVar7,lVar4);
        lVar4 = *plVar7;
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        if (lVar4 != 0) {
          puVar6 = *(undefined4 **)(*(long *)puVar1 + 0xb8);
          UnityEngine_RectTransform__set_anchorMax_43cf768(*puVar6,puVar6[1],lVar4,0);
          if ((bRam0000000004fa8a84 & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04cf7bc8,0);
            bRam0000000004fa8a84 = 1;
          }
          if (lVar4 != 0) {
            lVar4 = *(long *)(lVar4 + 0x10);
            if (lVar4 != 0) {
              if (pcRam0000000004fa8ab0 == (code *)0x0) {
                pcRam0000000004fa8ab0 = (code *)FUN_02132f40(&UNK_00e245e0);
              }
              (*pcRam0000000004fa8ab0)(lVar4,&stack0xffffffffffffffe8);
              return;
            }
                    /* WARNING: Subroutine does not return */
            UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78();
          }
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

