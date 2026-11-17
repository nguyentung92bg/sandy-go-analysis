/* IL2CPP: Dino.BusSand.App.UI.HomeAtelier$$Build
Dino_BusSand_App_UI_HomeAtelier_o* Dino_BusSand_App_UI_HomeAtelier__Build (UnityEngine_RectTransform_o* panel, UnityEngine_RectTransform_o* picture, System_Action_o* play, System_Action_o* sketched, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HomeAtelier$$Build
   Dino_BusSand_App_UI_HomeAtelier_o* Dino_BusSand_App_UI_HomeAtelier__Build
   (UnityEngine_RectTransform_o* panel, UnityEngine_RectTransform_o* picture, System_Action_o* play,
   System_Action_o* sketched, const MethodInfo* method); */

long Dino_BusSand_App_UI_HomeAtelier__Build_22d490c
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  puVar1 = PTR_DAT_04cac6c0;
  if ((bRam0000000004f9c3cc & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cacf88);
    FUN_02132f7c(PTR_DAT_04cacf90);
    FUN_02132f7c(PTR_DAT_04cb6ed8);
    FUN_02132f7c(PTR_DAT_04cac6c0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cb6ee0);
    bRam0000000004f9c3cc = 1;
  }
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar1;
  }
  if (**(char **)(lVar3 + 0xb8) != '\0') {
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar4 = UnityEngine_Object__op_Equality_43c6f30(param_1,0,0);
    if ((uVar4 & 1) == 0) {
      if (*(int *)(*(long *)PTR_DAT_04cad330 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar3 = Dino_BusSand_App_UI_UiKit__Fill_22817d8
                        (0,0,0,0,param_1,*(undefined8 *)PTR_DAT_04cb6ee0,0);
      if (((lVar3 != 0) &&
          (lVar5 = UnityEngine_Component__get_gameObject_43bcde8(lVar3,0), lVar5 != 0)) &&
         (lVar5 = UnityEngine_GameObject__AddComponent_object__275a54c
                            (lVar5,*(undefined8 *)PTR_DAT_04cacf88), lVar5 != 0)) {
        uVar2 = UnityEngine_Canvas__get_additionalShaderChannels_468054c(lVar5,0);
        UnityEngine_Canvas__set_additionalShaderChannels_4680600(lVar5,uVar2 | 0x19,0);
        lVar5 = UnityEngine_Component__get_gameObject_43bcde8(lVar3,0);
        if (lVar5 != 0) {
          UnityEngine_GameObject__AddComponent_object__275a54c
                    (lVar5,*(undefined8 *)PTR_DAT_04cacf90);
          lVar5 = UnityEngine_Component__get_gameObject_43bcde8(lVar3,0);
          if ((lVar5 != 0) &&
             (lVar5 = UnityEngine_GameObject__AddComponent_object__275a54c
                                (lVar5,*(undefined8 *)PTR_DAT_04cb6ed8), lVar5 != 0)) {
            *(long *)(lVar5 + 0x20) = lVar3;
            thunk_FUN_02134474((long *)(lVar5 + 0x20),lVar3);
            *(undefined8 *)(lVar5 + 0x40) = param_2;
            thunk_FUN_02134474((undefined8 *)(lVar5 + 0x40),param_2);
            *(undefined8 *)(lVar5 + 0x48) = param_3;
            thunk_FUN_02134474((undefined8 *)(lVar5 + 0x48),param_3);
            *(undefined8 *)(lVar5 + 0x50) = param_4;
            thunk_FUN_02134474((undefined8 *)(lVar5 + 0x50),param_4);
            Dino_BusSand_App_UI_HomeAtelier__Init_22d4b24(lVar5);
            return lVar5;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  return 0;
}

