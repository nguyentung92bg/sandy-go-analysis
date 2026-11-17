/* IL2CPP: Dino.BusSand.App.UI.PlayerSettingPanel$$SetupFrameItem
void Dino_BusSand_App_UI_PlayerSettingPanel__SetupFrameItem (Dino_BusSand_App_UI_PlayerSettingPanel_o* __this, Dino_BusSand_App_UI_PlayerSettingPanel_Item_o* it, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PlayerSettingPanel$$SetupFrameItem
   void Dino_BusSand_App_UI_PlayerSettingPanel__SetupFrameItem
   (Dino_BusSand_App_UI_PlayerSettingPanel_o* __this, Dino_BusSand_App_UI_PlayerSettingPanel_Item_o*
   it, const MethodInfo* method); */

long Dino_BusSand_App_UI_PlayerSettingPanel__SetupFrameItem_2303068(undefined8 param_1,long param_2)

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
  
  puVar4 = PTR_DAT_04cb7de8;
  if ((bRam0000000004f9c4df & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cae570);
    FUN_02132f7c(PTR_DAT_04cb7ab8);
    FUN_02132f7c(PTR_DAT_04cb7df0);
    FUN_02132f7c(PTR_DAT_04cb7de8);
    FUN_02132f7c(PTR_DAT_04cad948);
    bRam0000000004f9c4df = 1;
  }
  lVar11 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
  System_Object___ctor_4870e5c(lVar11,0);
  if (lVar11 != 0) {
    *(undefined8 *)(lVar11 + 0x10) = param_1;
    thunk_FUN_02134474((undefined8 *)(lVar11 + 0x10),param_1);
    plVar15 = (long *)(lVar11 + 0x18);
    *plVar15 = param_2;
    uVar12 = thunk_FUN_02134474(plVar15,param_2);
                    /* try { // try from 0240311c to 0250311f has its CatchHandler @ 024031a0 */
                    /* try { // try from 02403120 to 02503123 has its CatchHandler @ 0240314c */
                    /* try { // try from 02403124 to 02503127 has its CatchHandler @ 02403140 */
    Dino_BusSand_App_UI_PlayerSettingPanel__AttachDecorate_2303248(uVar12,*plVar15,0);
                    /* try { // try from 02403128 to 0250312b has its CatchHandler @ 02403138 */
    lVar16 = *plVar15;
                    /* try { // try from 0240312c to 0250316b has its CatchHandler @ 02402ac4 */
    if (lVar16 != 0) {
                    /* catch() { ... } // from try @ 02402fd8 with catch @ 02403130 */
                    /* catch() { ... } // from try @ 02402fe4 with catch @ 02403134 */
                    /* catch() { ... } // from try @ 02403128 with catch @ 02403138 */
      uVar1 = *(undefined4 *)(lVar16 + 0x10);
                    /* catch() { ... } // from try @ 02402fc4 with catch @ 0240313c */
                    /* catch() { ... } // from try @ 02403124 with catch @ 02403140 */
                    /* catch() { ... } // from try @ 02402ee8 with catch @ 02403144 */
      if (*(int *)(*(long *)PTR_DAT_04cae570 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 02402e74 with catch @ 02403148 */
        thunk_FUN_0218fdac();
      }
                    /* catch() { ... } // from try @ 02403120 with catch @ 0240314c */
                    /* catch() { ... } // from try @ 02402ffc with catch @ 02403150 */
      bVar7 = Dino_BusSand_App_Meta_PlayerIdentity__IsHeadFrameValid_226d038(uVar1,0);
      lVar14 = *plVar15;
      *(byte *)(lVar16 + 0x48) = (bVar7 ^ 0xff) & 1;
      if (lVar14 != 0) {
                    /* try { // try from 0240316c to 0250316f has its CatchHandler @ 02403190 */
                    /* try { // try from 02403170 to 02503193 has its CatchHandler @ 02402ac4 */
        uVar12 = *(undefined8 *)(lVar14 + 0x30);
        cVar3 = *(char *)(lVar14 + 0x48);
        if (*(int *)(*(long *)PTR_DAT_04cb7ab8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
                    /* catch() { ... } // from try @ 0240316c with catch @ 02403190 */
                    /* try { // try from 02403194 to 0250319b has its CatchHandler @ 024031f8 */
        Dino_BusSand_App_UI_PlayerSettingPanel__SetActive_230125c(uVar12,cVar3 != '\0');
                    /* try { // try from 0240319c to 025031bf has its CatchHandler @ 02402ac4 */
        lVar16 = *plVar15;
                    /* catch() { ... } // from try @ 0240311c with catch @ 024031a0 */
        if (lVar16 != 0) {
                    /* catch() { ... } // from try @ 02402e8c with catch @ 024031a4 */
          uVar12 = *(undefined8 *)(lVar16 + 0x28);
          iVar2 = *(int *)(lVar16 + 0x10);
          iVar8 = Dino_BusSand_App_Meta_PlayerIdentity__get_HeadFrame_226d198(0);
                    /* try { // try from 024031c0 to 025031c3 has its CatchHandler @ 024031e4 */
          Dino_BusSand_App_UI_PlayerSettingPanel__SetActive_230125c(uVar12,iVar2 == iVar8);
          puVar6 = PTR_DAT_04cb7df0;
          puVar5 = PTR_DAT_04cad948;
          puVar4 = PTR_DAT_04caa458;
                    /* try { // try from 024031c4 to 025031e7 has its CatchHandler @ 02402ac4 */
          if ((*plVar15 != 0) && (lVar16 = *(long *)(*plVar15 + 0x20), lVar16 != 0)) {
                    /* catch() { ... } // from try @ 024031c0 with catch @ 024031e4 */
                    /* try { // try from 024031e8 to 025031ef has its CatchHandler @ 024031f8 */
                    /* try { // try from 024031f0 to 025031fb has its CatchHandler @ 02402ac4 */
            lVar16 = UnityEngine_Component__get_gameObject_43bcde8(lVar16,0);
                    /* catch() { ... } // from try @ 02403194 with catch @ 024031f8
                       catch() { ... } // from try @ 024031e8 with catch @ 024031f8 */
            uVar12 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
            System_Action___ctor_47b5ed0(uVar12,lVar11,*(undefined8 *)puVar6,0);
            puVar4 = PTR_DAT_04cb1660;
            uVar13 = *(undefined8 *)puVar5;
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

