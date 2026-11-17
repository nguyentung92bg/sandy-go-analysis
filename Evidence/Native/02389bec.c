/* IL2CPP: Dino.BusSand.App.UI.ScreenFade$$Create
Dino_BusSand_App_UI_ScreenFade_o* Dino_BusSand_App_UI_ScreenFade__Create (Dino_BusSand_App_UI_UIManager_o* ui, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ScreenFade$$Create
   Dino_BusSand_App_UI_ScreenFade_o* Dino_BusSand_App_UI_ScreenFade__Create
   (Dino_BusSand_App_UI_UIManager_o* ui, const MethodInfo* method); */

long Dino_BusSand_App_UI_ScreenFade__Create_2289bec(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined4 *puVar6;
  long *plVar7;
  long *plVar8;
  
  if ((bRam0000000004f9c16d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cacf88);
    FUN_02132f7c(PTR_DAT_04cacf90);
    FUN_02132f7c(PTR_DAT_04cacf98);
    FUN_02132f7c(PTR_DAT_04cb1b08);
    FUN_02132f7c(PTR_DAT_04cb50f8);
    FUN_02132f7c(PTR_DAT_04cabb00);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cb5100);
    bRam0000000004f9c16d = 1;
  }
  puVar2 = PTR_DAT_04cb5100;
  puVar1 = PTR_DAT_04cad330;
  if (param_1 != 0) {
    uVar3 = Dino_BusSand_App_UI_UIManager__Layer_21fe220(param_1,5,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
    lVar4 = Dino_BusSand_App_UI_UiKit__Fill_22817d8(0,0,0,0,uVar3,*(undefined8 *)puVar2);
    if ((lVar4 != 0) && (lVar5 = UnityEngine_Component__get_gameObject_43bcde8(lVar4,0), lVar5 != 0)
       ) {
      UnityEngine_GameObject__AddComponent_object__275a54c(lVar5,*(undefined8 *)PTR_DAT_04cb1b08);
      lVar5 = UnityEngine_Component__get_gameObject_43bcde8(lVar4,0);
      if ((lVar5 != 0) &&
         (lVar5 = UnityEngine_GameObject__AddComponent_object__275a54c
                            (lVar5,*(undefined8 *)PTR_DAT_04cacf88), lVar5 != 0)) {
        UnityEngine_Canvas__set_overrideSorting_467ff6c(lVar5,1,0);
        UnityEngine_Canvas__set_sortingOrder_46800e4(lVar5,0x170c,0);
        lVar5 = UnityEngine_Component__get_gameObject_43bcde8(lVar4,0);
        if (lVar5 != 0) {
          UnityEngine_GameObject__AddComponent_object__275a54c
                    (lVar5,*(undefined8 *)PTR_DAT_04cacf90);
          lVar5 = UnityEngine_Component__get_gameObject_43bcde8(lVar4,0);
          if (lVar5 != 0) {
            lVar5 = UnityEngine_GameObject__AddComponent_object__275a54c
                              (lVar5,*(undefined8 *)PTR_DAT_04cb50f8);
            lVar4 = UnityEngine_Component__get_gameObject_43bcde8(lVar4,0);
            if ((lVar4 != 0) &&
               (lVar4 = UnityEngine_GameObject__AddComponent_object__275a54c
                                  (lVar4,*(undefined8 *)PTR_DAT_04cacf98), puVar1 = PTR_DAT_04cabb00
               , lVar5 != 0)) {
              plVar7 = (long *)(lVar5 + 0x20);
              *plVar7 = lVar4;
              thunk_FUN_02134474(plVar7,lVar4);
              plVar8 = (long *)*plVar7;
              if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              if (plVar8 != (long *)0x0) {
                puVar6 = *(undefined4 **)(*(long *)puVar1 + 0xb8);
                (**(code **)(*plVar8 + 0x2a8))
                          (*puVar6,puVar6[1],puVar6[2],0,plVar8,*(undefined8 *)(*plVar8 + 0x2b0));
                plVar7 = (long *)*plVar7;
                if (plVar7 != (long *)0x0) {
                  (**(code **)(*plVar7 + 0x2c8))(plVar7,0,*(undefined8 *)(*plVar7 + 0x2d0));
                  return lVar5;
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

