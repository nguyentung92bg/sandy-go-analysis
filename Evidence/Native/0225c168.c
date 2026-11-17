/* IL2CPP: Dino.BusSand.App.QaPilot.Runner$$OpenPanels
System_Collections_Generic_List_UIPanel__o* Dino_BusSand_App_QaPilot_Runner__OpenPanels (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.QaPilot.Runner$$OpenPanels
   System_Collections_Generic_List_UIPanel__o* Dino_BusSand_App_QaPilot_Runner__OpenPanels (const
   MethodInfo* method); */

long Dino_BusSand_App_QaPilot_Runner__OpenPanels_215c168(void)

{
  bool bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  int *piVar14;
  undefined8 uVar15;
  long *plVar16;
  
  puVar4 = PTR_DAT_04caba50;
  if ((bRam0000000004f9b7f5 & 1) == 0) {
                    /* try { // try from 0225c190 to 0235c197 has its CatchHandler @ 0225c258 */
    FUN_02132f7c(PTR_DAT_04caba50);
                    /* try { // try from 0225c198 to 0235c1d7 has its CatchHandler @ 0225bfb0 */
    FUN_02132f7c(PTR_DAT_04cabdd0);
    FUN_02132f7c(PTR_DAT_04cabdd8);
    FUN_02132f7c(PTR_DAT_04cabde0);
    FUN_02132f7c(PTR_DAT_04cabde8);
    FUN_02132f7c(PTR_DAT_04cabdf0);
                    /* try { // try from 0225c1d8 to 0235c1e3 has its CatchHandler @ 0225c288 */
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9b7f5 = 1;
  }
                    /* try { // try from 0225c1e8 to 0235c1f7 has its CatchHandler @ 0225c270 */
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b88f == '\0') {
    FUN_02132f7c(PTR_DAT_04caba50);
    cRam0000000004f9b88f = '\x01';
  }
  puVar3 = PTR_DAT_04ca9ae8;
  lVar7 = *(long *)puVar4;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar7 = *(long *)puVar4;
  }
  uVar15 = **(undefined8 **)(lVar7 + 0xb8);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar3);
  }
                    /* try { // try from 0225c250 to 0235c257 has its CatchHandler @ 0225c294 */
                    /* catch() { ... } // from try @ 0225c190 with catch @ 0225c258
                       try { // try from 0225c258 to 0235c2bb has its CatchHandler @ 0225bfb0 */
  uVar8 = UnityEngine_Object__op_Inequality_43c8dec(uVar15,0,0);
  lVar7 = 0;
  if ((uVar8 & 1) != 0) {
                    /* catch() { ... } // from try @ 0225c1e8 with catch @ 0225c270 */
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b88f == '\0') {
                    /* catch() { ... } // from try @ 0225c1d8 with catch @ 0225c288 */
      FUN_02132f7c(PTR_DAT_04caba50);
      cRam0000000004f9b88f = '\x01';
    }
                    /* catch() { ... } // from try @ 0225c250 with catch @ 0225c294 */
    lVar7 = *(long *)puVar4;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar7 = *(long *)puVar4;
    }
    if (**(long **)(lVar7 + 0xb8) == 0) goto LAB_0225c4b8;
    lVar7 = *(long *)(**(long **)(lVar7 + 0xb8) + 0x28);
  }
  puVar4 = PTR_DAT_04cabde8;
                    /* try { // try from 0225c2bc to 0235c38b has its CatchHandler @ 0225c2bc
                       catch() { ... } // from try @ 0225c2bc with catch @ 0225c2bc
                       catch() { ... } // from try @ 0225c398 with catch @ 0225c2bc */
  lVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cabdf0);
  System_Collections_Generic_List_object____ctor_3a8138c(lVar9,*(undefined8 *)puVar4);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar8 = UnityEngine_Object__op_Equality_43c6f30(lVar7,0,0);
  if ((uVar8 & 1) == 0) {
    if ((lVar7 == 0) || (plVar16 = *(long **)(lVar7 + 0x38), plVar16 == (long *)0x0)) {
LAB_0225c4b8:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar7 = *plVar16;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_04cabdd0) {
          puVar10 = (undefined8 *)(lVar7 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_0225c360;
        }
        uVar8 = uVar8 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar8 != 0);
    }
    puVar10 = (undefined8 *)FUN_0216b7a4(plVar16,*(long *)PTR_DAT_04cabdd0,0);
LAB_0225c360:
    iVar6 = (*(code *)*puVar10)(plVar16,puVar10[1]);
    puVar5 = PTR_DAT_04cabde0;
    puVar4 = PTR_DAT_04cabdd8;
    iVar6 = iVar6 + -1;
    if (-1 < iVar6) {
      do {
        lVar7 = *plVar16;
                    /* try { // try from 0225c38c to 0235c397 has its CatchHandler @ 0225c3c4 */
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
                    /* try { // try from 0225c398 to 0235c3d7 has its CatchHandler @ 0225c2bc */
          piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
                    /* catch() { ... } // from try @ 0225c38c with catch @ 0225c3c4 */
              puVar10 = (undefined8 *)(lVar7 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_0225c3d0;
            }
            uVar8 = uVar8 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar8 != 0);
        }
        puVar10 = (undefined8 *)FUN_0216b7a4(plVar16,*(long *)puVar4,0);
LAB_0225c3d0:
                    /* try { // try from 0225c3d8 to 0235c48b has its CatchHandler @ 0225c3d8
                       catch() { ... } // from try @ 0225c3d8 with catch @ 0225c3d8
                       catch() { ... } // from try @ 0225c4a0 with catch @ 0225c3d8
                       catch() { ... } // from try @ 0225c58c with catch @ 0225c3d8 */
        lVar7 = (*(code *)*puVar10)(plVar16,iVar6,puVar10[1]);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar3);
        }
        uVar8 = UnityEngine_Object__op_Inequality_43c8dec(lVar7,0,0);
        if ((uVar8 & 1) != 0) {
          if (lVar7 == 0) goto LAB_0225c4b8;
          if (*(char *)(lVar7 + 0x2c) == '\0') {
            lVar11 = UnityEngine_Component__get_gameObject_43bcde8(lVar7,0);
            if (lVar11 == 0) goto LAB_0225c4b8;
            uVar8 = UnityEngine_GameObject__get_activeInHierarchy_43c1580(lVar11,0);
            if ((uVar8 & 1) != 0) {
              if (lVar9 == 0) goto LAB_0225c4b8;
              lVar11 = *(long *)(lVar9 + 0x10);
              lVar13 = *(long *)puVar5;
              *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
              if (lVar11 == 0) goto LAB_0225c4b8;
              uVar2 = *(uint *)(lVar9 + 0x18);
              if (uVar2 < *(uint *)(lVar11 + 0x18)) {
                *(uint *)(lVar9 + 0x18) = uVar2 + 1;
                plVar12 = (long *)(lVar11 + (long)(int)uVar2 * 8 + 0x20);
                *plVar12 = lVar7;
                thunk_FUN_02134474(plVar12,lVar7);
              }
              else {
                    /* try { // try from 0225c48c to 0235c49f has its CatchHandler @ 0225c5d8 */
                System_Collections_Generic_List_object___AddWithResize_3a81bf4
                          (lVar9,lVar7,
                           *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
              }
            }
          }
        }
        bVar1 = 0 < iVar6;
        iVar6 = iVar6 + -1;
      } while (bVar1);
    }
  }
                    /* try { // try from 0225c4a0 to 0235c517 has its CatchHandler @ 0225c3d8 */
  return lVar9;
}

