/* IL2CPP: Dino.BusSand.App.UI.RoyaleView$$Rows
System_Collections_Generic_List_EventRow__o* Dino_BusSand_App_UI_RoyaleView__Rows (Dino_BusSand_App_UI_RoyaleView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.RoyaleView$$Rows
   System_Collections_Generic_List_EventRow__o* Dino_BusSand_App_UI_RoyaleView__Rows
   (Dino_BusSand_App_UI_RoyaleView_o* __this, const MethodInfo* method); */

long Dino_BusSand_App_UI_RoyaleView__Rows_21ba938(long param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  int iVar17;
  int iStack_64;
  
  puVar5 = PTR_DAT_04caf670;
  puVar4 = PTR_DAT_04caf668;
                    /* catch() { ... } // from try @ 022ba8c8 with catch @ 022ba950 */
                    /* catch() { ... } // from try @ 022ba9a4 with catch @ 022ba964 */
  if ((bRam0000000004f9babc & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04caf678);
    FUN_02132f7c(PTR_DAT_04caf690);
                    /* try { // try from 022ba99c to 023ba9a3 has its CatchHandler @ 022ba9c8 */
    FUN_02132f7c(PTR_DAT_04caf670);
                    /* try { // try from 022ba9a4 to 023ba9db has its CatchHandler @ 022ba964 */
    FUN_02132f7c(PTR_DAT_04caf7a0);
    FUN_02132f7c(PTR_DAT_04caf540);
    FUN_02132f7c(PTR_DAT_04caca60);
                    /* catch() { ... } // from try @ 022ba99c with catch @ 022ba9c8 */
    FUN_02132f7c(PTR_DAT_04caf668);
                    /* try { // try from 022ba9dc to 023baadf has its CatchHandler @ 022ba9dc
                       catch() { ... } // from try @ 022ba9dc with catch @ 022ba9dc
                       catch() { ... } // from try @ 022bab28 with catch @ 022ba9dc */
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04caf6b0);
    FUN_02132f7c(PTR_DAT_04caf7a8);
    FUN_02132f7c(PTR_DAT_04caf6b8);
    FUN_02132f7c(PTR_DAT_04caf7b0);
    bRam0000000004f9babc = 1;
  }
  lVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
  System_Collections_Generic_List_object____ctor_3a8138c(lVar8,*(undefined8 *)puVar5);
  if (*(long *)(param_1 + 0x10) != 0) {
    iVar7 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_TotalStageNum_2220fcc
                      (*(long *)(param_1 + 0x10),0);
    puVar5 = PTR_DAT_04caf6b8;
    puVar4 = PTR_DAT_04caf6b0;
    lVar13 = *(long *)(param_1 + 0x10);
    if ((lVar13 != 0) && (*(long *)(lVar13 + 0x10) != 0)) {
      iVar1 = *(int *)(*(long *)(lVar13 + 0x10) + 0x20);
      iVar17 = iVar1;
      if (iVar7 + -4 <= iVar1) {
        iVar17 = iVar7 + -4;
      }
      if (iVar17 < 2) {
        iVar17 = 1;
      }
      if (iVar17 <= iVar7) {
        if (lVar8 == 0) goto LAB_022badcc;
        do {
          if (4 < *(int *)(lVar8 + 0x18)) break;
          lVar13 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caf678);
          Dino_BusSand_App_UI_EventRow___ctor_21b5adc();
          plVar9 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04ca9c20,1);
                    /* try { // try from 022baae0 to 023baae7 has its CatchHandler @ 022bab2c */
          iStack_64 = iVar17;
          lVar10 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&iStack_64);
          if (plVar9 == (long *)0x0) goto LAB_022badcc;
          if ((lVar10 != 0) &&
             (lVar11 = thunk_FUN_0216e7a0(lVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar11 == 0)) {
            uVar12 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
            FUN_021330e8(uVar12,0);
          }
          if ((int)plVar9[3] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0213322c();
          }
                    /* try { // try from 022bab20 to 023bab27 has its CatchHandler @ 022bab28 */
          plVar9[4] = lVar10;
          thunk_FUN_02134474(plVar9 + 4,lVar10);
                    /* catch() { ... } // from try @ 022bab20 with catch @ 022bab28
                       try { // try from 022bab28 to 023bab47 has its CatchHandler @ 022ba9dc */
                    /* catch() { ... } // from try @ 022baae0 with catch @ 022bab2c */
          if (*(int *)(*(long *)PTR_DAT_04cad330 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
                    /* try { // try from 022bab48 to 023bac4b has its CatchHandler @ 022bab48
                       catch() { ... } // from try @ 022bab48 with catch @ 022bab48
                       catch() { ... } // from try @ 022bac94 with catch @ 022bab48 */
          uVar12 = Dino_BusSand_App_UI_UiKit__T_2285e1c
                             (*(undefined8 *)puVar5,*(undefined8 *)puVar4,plVar9,0);
          if (lVar13 == 0) goto LAB_022badcc;
          *(undefined8 *)(lVar13 + 0x10) = uVar12;
          thunk_FUN_02134474((undefined8 *)(lVar13 + 0x10),uVar12);
          iVar2 = *(int *)(lVar8 + 0x1c);
          lVar10 = *(long *)(lVar8 + 0x10);
          uVar16 = 2;
          if (iVar1 < iVar17) {
            uVar16 = 3;
          }
          *(undefined4 *)(lVar13 + 0x28) = uVar16;
          puVar6 = PTR_DAT_04caf690;
          *(bool *)(lVar13 + 0x2c) = iVar1 + 1 == iVar17;
          *(int *)(lVar8 + 0x1c) = iVar2 + 1;
          if (lVar10 == 0) goto LAB_022badcc;
          uVar3 = *(uint *)(lVar8 + 0x18);
          if (uVar3 < *(uint *)(lVar10 + 0x18)) {
            *(uint *)(lVar8 + 0x18) = uVar3 + 1;
            plVar9 = (long *)(lVar10 + (long)(int)uVar3 * 8 + 0x20);
            *plVar9 = lVar13;
            thunk_FUN_02134474(plVar9,lVar13);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize_3a81bf4
                      (lVar8,lVar13,
                       *(undefined8 *)(*(long *)(*(long *)(*(long *)puVar6 + 0x20) + 0xc0) + 0x70));
          }
          iVar17 = iVar17 + 1;
        } while (iVar17 <= iVar7);
        lVar13 = *(long *)(param_1 + 0x10);
        if (lVar13 == 0) goto LAB_022badcc;
      }
      lVar13 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_Config_22206d8(lVar13,0);
      if (lVar13 == 0) {
        if (*(long *)(param_1 + 0x10) == 0) goto LAB_022badcc;
        lVar13 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_DefaultConfig_2220774
                           (*(long *)(param_1 + 0x10),0);
      }
      puVar4 = PTR_DAT_04ca9d18;
      lVar10 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caf678);
      Dino_BusSand_App_UI_EventRow___ctor_21b5adc();
      lVar14 = *(long *)puVar4;
                    /* try { // try from 022bac4c to 023bac53 has its CatchHandler @ 022bac98 */
      lVar11 = *(long *)(lVar14 + 0x38);
      if (lVar11 == 0) {
        FUN_0216b4cc(lVar14);
        lVar11 = *(long *)(lVar14 + 0x38);
      }
      lVar11 = *(long *)(lVar11 + 0x10);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_0216b470();
      }
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar11 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
                    /* try { // try from 022bac8c to 023bac93 has its CatchHandler @ 022bac94 */
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
                    /* catch() { ... } // from try @ 022bac8c with catch @ 022bac94
                       try { // try from 022bac94 to 023bacb3 has its CatchHandler @ 022bab48 */
        lVar11 = FUN_0216b470();
      }
                    /* catch() { ... } // from try @ 022bac4c with catch @ 022bac98 */
      puVar5 = PTR_DAT_04caf7b0;
      puVar4 = PTR_DAT_04caf7a8;
                    /* try { // try from 022bacb4 to 023badbb has its CatchHandler @ 022bacb4
                       catch() { ... } // from try @ 022bacb4 with catch @ 022bacb4
                       catch() { ... } // from try @ 022bae04 with catch @ 022bacb4 */
      uVar12 = **(undefined8 **)(lVar11 + 0xb8);
      if (*(int *)(*(long *)PTR_DAT_04cad330 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04cad330);
      }
      uVar12 = Dino_BusSand_App_UI_UiKit__T_2285e1c
                         (*(undefined8 *)puVar4,*(undefined8 *)puVar5,uVar12,0);
      if (lVar10 != 0) {
        *(undefined8 *)(lVar10 + 0x10) = uVar12;
        thunk_FUN_02134474();
        puVar4 = PTR_DAT_04caf7a0;
        uVar12 = 0;
        if (lVar13 != 0) {
          uVar15 = *(undefined8 *)(lVar13 + 0x38);
          uVar12 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caca60);
          System_Collections_Generic_List_KeyValuePair_int__long_____ctor_39650e8
                    (uVar12,uVar15,*(undefined8 *)puVar4);
        }
        *(undefined8 *)(lVar10 + 0x20) = uVar12;
        thunk_FUN_02134474((undefined8 *)(lVar10 + 0x20),uVar12);
        *(undefined4 *)(lVar10 + 0x28) = 3;
        if (lVar8 != 0) {
          lVar13 = *(long *)(lVar8 + 0x10);
          lVar11 = *(long *)PTR_DAT_04caf690;
          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
          if (lVar13 != 0) {
            uVar3 = *(uint *)(lVar8 + 0x18);
            if (uVar3 < *(uint *)(lVar13 + 0x18)) {
              *(uint *)(lVar8 + 0x18) = uVar3 + 1;
              plVar9 = (long *)(lVar13 + (long)(int)uVar3 * 8 + 0x20);
              *plVar9 = lVar10;
              thunk_FUN_02134474(plVar9,lVar10);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize_3a81bf4
                        (lVar8,lVar10,
                         *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
            }
                    /* try { // try from 022badbc to 023badc3 has its CatchHandler @ 022bae08 */
            return lVar8;
          }
        }
      }
    }
  }
LAB_022badcc:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

