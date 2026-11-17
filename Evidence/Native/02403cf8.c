/* IL2CPP: Dino.BusSand.App.UI.PlayerSettingPanel$$SetupNameItem
void Dino_BusSand_App_UI_PlayerSettingPanel__SetupNameItem (Dino_BusSand_App_UI_PlayerSettingPanel_o* __this, Dino_BusSand_App_UI_PlayerSettingPanel_Item_o* it, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PlayerSettingPanel$$SetupNameItem
   void Dino_BusSand_App_UI_PlayerSettingPanel__SetupNameItem
   (Dino_BusSand_App_UI_PlayerSettingPanel_o* __this, Dino_BusSand_App_UI_PlayerSettingPanel_Item_o*
   it, const MethodInfo* method); */

long Dino_BusSand_App_UI_PlayerSettingPanel__SetupNameItem_2303cf8(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  byte bVar7;
  int iVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  
  puVar4 = PTR_DAT_04cb7e08;
  if ((bRam0000000004f9c4e1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cae570);
    FUN_02132f7c(PTR_DAT_04cb7ab8);
                    /* try { // try from 02403d48 to 02503e97 has its CatchHandler @ 02403d48
                       catch() { ... } // from try @ 02403d48 with catch @ 02403d48
                       catch() { ... } // from try @ 02403ec8 with catch @ 02403d48
                       catch() { ... } // from try @ 02403f34 with catch @ 02403d48
                       catch() { ... } // from try @ 02403f60 with catch @ 02403d48 */
    FUN_02132f7c(PTR_DAT_04cb7e10);
    FUN_02132f7c(PTR_DAT_04cb7e08);
    FUN_02132f7c(PTR_DAT_04cad948);
    bRam0000000004f9c4e1 = 1;
  }
  lVar11 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
  System_Object___ctor_4870e5c(lVar11,0);
  if (lVar11 != 0) {
    *(undefined8 *)(lVar11 + 0x10) = param_1;
    thunk_FUN_02134474((undefined8 *)(lVar11 + 0x10),param_1);
    plVar15 = (long *)(lVar11 + 0x18);
    *plVar15 = param_2;
    uVar12 = thunk_FUN_02134474(plVar15,param_2);
    Dino_BusSand_App_UI_PlayerSettingPanel__AttachDecorate_2303248(uVar12,*plVar15,1);
    lVar16 = *plVar15;
    if (lVar16 != 0) {
      uVar1 = *(undefined4 *)(lVar16 + 0x10);
      if (*(int *)(*(long *)PTR_DAT_04cae570 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      bVar7 = Dino_BusSand_App_Meta_PlayerIdentity__IsNamePlateValid_226d0e8(uVar1,0);
      lVar14 = *plVar15;
      *(byte *)(lVar16 + 0x48) = (bVar7 ^ 0xff) & 1;
      if (lVar14 != 0) {
        uVar12 = *(undefined8 *)(lVar14 + 0x30);
        cVar3 = *(char *)(lVar14 + 0x48);
        if (*(int *)(*(long *)PTR_DAT_04cb7ab8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_App_UI_PlayerSettingPanel__SetActive_230125c(uVar12,cVar3 != '\0');
        lVar16 = *plVar15;
        if (lVar16 != 0) {
          uVar12 = *(undefined8 *)(lVar16 + 0x28);
          iVar2 = *(int *)(lVar16 + 0x10);
          iVar8 = Dino_BusSand_App_Meta_PlayerIdentity__get_NamePlate_226d250(0);
          Dino_BusSand_App_UI_PlayerSettingPanel__SetActive_230125c(uVar12,iVar2 == iVar8);
          puVar6 = PTR_DAT_04cb7e10;
          puVar5 = PTR_DAT_04cad948;
          puVar4 = PTR_DAT_04caa458;
          if ((*plVar15 != 0) && (lVar16 = *(long *)(*plVar15 + 0x20), lVar16 != 0)) {
            lVar16 = UnityEngine_Component__get_gameObject_43bcde8(lVar16,0);
            uVar12 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
                    /* try { // try from 02403e98 to 02503e9f has its CatchHandler @ 02403f14 */
            System_Action___ctor_47b5ed0(uVar12,lVar11,*(undefined8 *)puVar6,0);
            puVar4 = PTR_DAT_04cb1660;
            uVar13 = *(undefined8 *)puVar5;
                    /* try { // try from 02403eac to 02503eb7 has its CatchHandler @ 02403f10 */
                    /* try { // try from 02403eb8 to 02503ec7 has its CatchHandler @ 02403f0c */
                    /* try { // try from 02403ec8 to 02503f2f has its CatchHandler @ 02403d48 */
            if ((bRam0000000004f9bc9d & 1) == 0) {
              FUN_02132f7c(PTR_DAT_04cb1668);
              FUN_02132f7c(PTR_DAT_04cacf98);
              FUN_02132f7c(PTR_DAT_04cb1670);
              FUN_02132f7c(PTR_DAT_04cb0eb8);
              FUN_02132f7c(PTR_DAT_04cb1678);
              FUN_02132f7c(PTR_DAT_04cb1680);
              FUN_02132f7c(PTR_DAT_04ca9ae8);
              FUN_02132f7c(PTR_DAT_04cb1688);
              FUN_02132f7c(PTR_DAT_04cb1660);
              FUN_02132f7c(PTR_DAT_04caa8b8);
              bRam0000000004f9bc9d = 1;
            }
            lVar11 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
            System_Object___ctor_4870e5c(lVar11,0);
            if (lVar11 != 0) {
              plVar15 = (long *)(lVar11 + 0x18);
              *plVar15 = lVar16;
              thunk_FUN_02134474(plVar15,lVar16);
              *(undefined8 *)(lVar11 + 0x20) = uVar12;
              thunk_FUN_02134474((undefined8 *)(lVar11 + 0x20),uVar12);
              puVar4 = PTR_DAT_04ca9ae8;
              if (*plVar15 != 0) {
                lVar16 = UnityEngine_GameObject__GetComponent_object__275a5dc
                                   (*plVar15,*(undefined8 *)PTR_DAT_04cb0eb8);
                if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(*(long *)puVar4);
                }
                uVar9 = UnityEngine_Object__op_Equality_43c6f30(lVar16,0,0);
                if ((uVar9 & 1) == 0) {
                  if (lVar16 == 0) goto LAB_022f5018;
                }
                else {
                  if (*plVar15 == 0) goto LAB_022f5018;
                  uVar12 = UnityEngine_GameObject__GetComponent_object__275a5dc
                                     (*plVar15,*(undefined8 *)PTR_DAT_04cb1678);
                  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                    thunk_FUN_0218fdac(*(long *)puVar4);
                  }
                  uVar9 = UnityEngine_Object__op_Equality_43c6f30(uVar12,0,0);
                  if ((uVar9 & 1) != 0) {
                    if ((*plVar15 == 0) ||
                       (plVar10 = (long *)UnityEngine_GameObject__AddComponent_object__275a54c
                                                    (*plVar15,*(undefined8 *)PTR_DAT_04cacf98),
                       plVar10 == (long *)0x0)) goto LAB_022f5018;
                    (**(code **)(*plVar10 + 0x2a8))
                              (0x3f800000,0x3f800000,0x3f800000,0,plVar10,
                               *(undefined8 *)(*plVar10 + 0x2b0));
                  }
                  if ((*plVar15 == 0) ||
                     (lVar16 = UnityEngine_GameObject__AddComponent_object__275a54c
                                         (*plVar15,*(undefined8 *)PTR_DAT_04cb1668), lVar16 == 0))
                  goto LAB_022f5018;
                  UnityEngine_UI_Selectable__set_transition_4693ba8(lVar16,0,0);
                }
                puVar6 = PTR_DAT_04cb1688;
                puVar5 = PTR_DAT_04caa8b8;
                if (*(long *)(lVar16 + 0x100) != 0) {
                  UnityEngine_Events_UnityEventBase__RemoveAllListeners_43d861c
                            (*(long *)(lVar16 + 0x100),0);
                  uVar12 = *(undefined8 *)puVar5;
                  lVar14 = *(long *)(lVar16 + 0x100);
                  *(undefined4 *)(lVar11 + 0x10) = 0xbf800000;
                  uVar12 = thunk_FUN_0216e89c(uVar12);
                  UnityEngine_Events_UnityAction___ctor_43d86d4
                            (uVar12,lVar11,*(undefined8 *)puVar6,0);
                  if (lVar14 != 0) {
                    UnityEngine_Events_UnityEvent__AddListener_43d87a4(lVar14,uVar12,0);
                    uVar12 = *(undefined8 *)(lVar16 + 0xe0);
                    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                    }
                    uVar9 = UnityEngine_Object__op_Inequality_43c8dec(uVar12,0,0);
                    if ((uVar9 & 1) == 0) {
                      if (*plVar15 == 0) goto LAB_022f5018;
                      plVar10 = (long *)UnityEngine_GameObject__GetComponent_object__275a5dc
                                                  (*plVar15,*(undefined8 *)PTR_DAT_04cb1678);
                    }
                    else {
                      plVar10 = *(long **)(lVar16 + 0xe0);
                    }
                    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                    }
                    uVar9 = UnityEngine_Object__op_Inequality_43c8dec(plVar10,0,0);
                    if ((uVar9 & 1) != 0) {
                      if (plVar10 == (long *)0x0) goto LAB_022f5018;
                      (**(code **)(*plVar10 + 0x2c8))(plVar10,1,*(undefined8 *)(*plVar10 + 0x2d0));
                    }
                    if (*plVar15 != 0) {
                      lVar11 = UnityEngine_GameObject__GetComponent_object__275a5dc
                                         (*plVar15,*(undefined8 *)PTR_DAT_04cb1680);
                      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                        thunk_FUN_0218fdac(*(long *)puVar4);
                      }
                      uVar9 = UnityEngine_Object__op_Equality_43c6f30(lVar11,0,0);
                      if ((uVar9 & 1) != 0) {
                        if (*plVar15 == 0) goto LAB_022f5018;
                        lVar11 = UnityEngine_GameObject__AddComponent_object__275a54c
                                           (*plVar15,*(undefined8 *)PTR_DAT_04cb1670);
                      }
                      if (lVar11 != 0) {
                        *(undefined8 *)(lVar11 + 0x20) = uVar13;
                        thunk_FUN_02134474((undefined8 *)(lVar11 + 0x20),uVar13);
                        return lVar16;
                      }
                    }
                  }
                }
              }
            }
LAB_022f5018:
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

