/* IL2CPP: Dino.BusSand.App.UI.HomeSideButton$$BuildArt
Dino_BusSand_App_UI_HomeSideButton_o* Dino_BusSand_App_UI_HomeSideButton__BuildArt (Dino_BusSand_App_UI_UIPanel_o* panel, Dino_BusSand_App_UI_HomeEntry_o* e, float y, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomeSideButton$$BuildArt
   Dino_BusSand_App_UI_HomeSideButton_o* Dino_BusSand_App_UI_HomeSideButton__BuildArt
   (Dino_BusSand_App_UI_UIPanel_o* panel, Dino_BusSand_App_UI_HomeEntry_o* e, float y, const
   MethodInfo* method); */

long Dino_BusSand_App_UI_HomeSideButton__BuildArt_22e8960
               (undefined4 param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  
  puVar3 = PTR_DAT_04cb7460;
  if ((bRam0000000004f9c436 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cb7448);
    FUN_02132f7c(PTR_DAT_04cb7468);
    FUN_02132f7c(PTR_DAT_04cb7460);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    FUN_02132f7c(PTR_DAT_04cad948);
    bRam0000000004f9c436 = 1;
  }
  lVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  System_Object___ctor_4870e5c(lVar6,0);
  if (lVar6 != 0) {
    plVar12 = (long *)(lVar6 + 0x10);
    *plVar12 = param_3;
    thunk_FUN_02134474(plVar12,param_3);
    if (param_2 != 0) {
      uVar7 = UnityEngine_Component__get_transform_43bcd18(param_2,0);
      puVar3 = PTR_DAT_04ca9c30;
      lVar10 = *plVar12;
      if (lVar10 != 0) {
        uVar16 = *(undefined4 *)(lVar10 + 0x60);
        uVar17 = *(undefined4 *)(lVar10 + 100);
        uVar9 = *(undefined8 *)(lVar10 + 0x48);
        uVar1 = *(undefined8 *)(lVar10 + 0x50);
        uVar14 = *(undefined8 *)(lVar10 + 0x10);
        cVar2 = *(char *)(lVar10 + 0x18);
        uVar13 = *(undefined8 *)(lVar10 + 0x20);
        uVar18 = *(undefined4 *)(lVar10 + 0x68);
        lVar11 = *(long *)(lVar10 + 0x30);
        uVar15 = *(undefined8 *)(lVar10 + 0x58);
        if (lVar11 == 0) {
          lVar11 = *(long *)PTR_DAT_04ca9c30;
        }
        else {
          lVar8 = (**(code **)(lVar11 + 0x18))
                            (*(undefined8 *)(lVar11 + 0x40),*(undefined8 *)(lVar11 + 0x28));
          lVar10 = *plVar12;
          lVar11 = *(long *)puVar3;
          if (lVar8 != 0) {
            lVar11 = lVar8;
          }
          if (lVar10 == 0) goto LAB_023e8bf8;
        }
        lVar10 = Dino_BusSand_App_UI_HomeSideArt__Build_22e7c00
                           (param_1,uVar16,uVar17,uVar18,
                            (float)*(int *)(lVar10 + 0x1c) * _UNK_00e2010c,uVar7,uVar14,
                            cVar2 != '\0',uVar9,uVar13,uVar1,uVar15,lVar11,
                            *(undefined4 *)(lVar10 + 0x6c));
        if ((((lVar10 != 0) && (*(long *)(lVar10 + 0x10) != 0)) &&
            (lVar11 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(lVar10 + 0x10),0),
            lVar11 != 0)) &&
           (lVar11 = UnityEngine_GameObject__AddComponent_object__275a54c
                               (lVar11,*(undefined8 *)PTR_DAT_04cb7448), lVar11 != 0)) {
          *(long *)(lVar11 + 0x20) = *plVar12;
          thunk_FUN_02134474();
          *(undefined8 *)(lVar11 + 0x28) = *(undefined8 *)(lVar10 + 0x38);
          thunk_FUN_02134474();
          if (*plVar12 != 0) {
            if (*(char *)(*plVar12 + 0x70) != '\0') {
              Dino_BusSand_App_UI_HomeSideArt__AddSale_22e8194(lVar10);
            }
            Dino_BusSand_App_UI_HomeSideButton__AddDot_22e8bfc
                      (0x428e0000,0x429c0000,lVar11,*(undefined8 *)(lVar10 + 0x18));
            puVar5 = PTR_DAT_04cb7468;
            puVar4 = PTR_DAT_04cad948;
            puVar3 = PTR_DAT_04caa458;
            if (*(long *)(lVar10 + 0x10) != 0) {
              uVar7 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(lVar10 + 0x10),0);
              uVar9 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
              System_Action___ctor_47b5ed0(uVar9,lVar6,*(undefined8 *)puVar5,0);
              Dino_BusSand_App_UI_UIPanel__Bind_21f4ca8(uVar7,uVar9,1,*(undefined8 *)puVar4,0);
              return lVar11;
            }
          }
        }
      }
    }
  }
LAB_023e8bf8:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

