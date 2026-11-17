/* IL2CPP: Dino.BusSand.App.Meta.WinStreak$$Claim
System_Collections_Generic_List_KeyValuePair_int__long___o* Dino_BusSand_App_Meta_WinStreak__Claim (Dino_BusSand_App_Meta_WinStreakCheckpoint_o* cp, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.WinStreak$$Claim
   System_Collections_Generic_List_KeyValuePair_int__long___o*
   Dino_BusSand_App_Meta_WinStreak__Claim (Dino_BusSand_App_Meta_WinStreakCheckpoint_o* cp, const
   MethodInfo* method); */

long Dino_BusSand_App_Meta_WinStreak__Claim_22945c8(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_44;
  
  puVar5 = PTR_DAT_04caca60;
  puVar4 = PTR_DAT_04caca50;
  if ((bRam0000000004f9c1f7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac5c0);
    FUN_02132f7c(PTR_DAT_04caece0);
    FUN_02132f7c(PTR_DAT_04caece8);
    FUN_02132f7c(PTR_DAT_04caecf0);
    FUN_02132f7c(PTR_DAT_04cac498);
    FUN_02132f7c(PTR_DAT_04cadd90);
    FUN_02132f7c(PTR_DAT_04cadd98);
    FUN_02132f7c(PTR_DAT_04caa160);
    FUN_02132f7c(PTR_DAT_04cae058);
    FUN_02132f7c(PTR_DAT_04caed00);
    FUN_02132f7c(PTR_DAT_04caca50);
    FUN_02132f7c(PTR_DAT_04caca60);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cb54b0);
    FUN_02132f7c(PTR_DAT_04cb2570);
    FUN_02132f7c(PTR_DAT_04cb1e68);
    FUN_02132f7c(PTR_DAT_04cb4088);
    bRam0000000004f9c1f7 = 1;
  }
  puStack_68 = (undefined8 *)0x0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  lVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar5);
  System_Collections_Generic_List_KeyValuePair_int__long_____ctor_3964fac
            (lVar8,*(undefined8 *)puVar4);
  if (param_1 == 0) {
                    /* try { // try from 02394a34 to 02494a7f has its CatchHandler @ 023948a8 */
    return lVar8;
  }
  iVar1 = *(int *)(param_1 + 0x14);
  lVar9 = Dino_BusSand_App_Meta_WinStreak__get_S_22934d0();
  if (lVar9 != 0) {
    if (*(int *)(lVar9 + 0x18) < iVar1) {
      return lVar8;
    }
    uVar10 = Dino_BusSand_App_Meta_WinStreak__Claimed_2294568(param_1);
    if ((uVar10 & 1) != 0) {
      return lVar8;
    }
    lVar9 = Dino_BusSand_App_Meta_WinStreak__get_S_22934d0();
    if ((lVar9 != 0) && (lVar9 = *(long *)(lVar9 + 0x20), lVar9 != 0)) {
      lVar14 = *(long *)(lVar9 + 0x10);
      uVar2 = *(undefined4 *)(param_1 + 0x14);
      lVar15 = *(long *)PTR_DAT_04caa160;
      *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
      if (lVar14 != 0) {
        uVar3 = *(uint *)(lVar9 + 0x18);
        if (uVar3 < *(uint *)(lVar14 + 0x18)) {
          *(uint *)(lVar9 + 0x18) = uVar3 + 1;
          *(undefined4 *)(lVar14 + (long)(int)uVar3 * 4 + 0x20) = uVar2;
        }
        else {
          System_Collections_Generic_List_int___AddWithResize_3a2c06c
                    (lVar9,uVar2,*(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70))
          ;
        }
        if (*(long *)(param_1 + 0x20) != 0) {
          System_Collections_Generic_List_KeyValuePair_int__long____GetEnumerator_3966258
                    (&uStack_90,*(long *)(param_1 + 0x20),*(undefined8 *)PTR_DAT_04caed00);
          puVar7 = PTR_DAT_04cb2570;
          puVar6 = PTR_DAT_04caece8;
          puVar5 = PTR_DAT_04cae058;
          puVar4 = PTR_DAT_04cabaf8;
          puStack_68 = puStack_88;
          uStack_70 = uStack_90;
          uStack_58 = uStack_78;
          uStack_60 = uStack_80;
          uStack_90 = 0;
          puStack_88 = &uStack_70;
          while (uVar11 = System_Collections_Generic_List_Enumerator_KeyValuePair_int__long____MoveNext_35b53dc
                                    (&uStack_70,*(undefined8 *)puVar6), uVar13 = uStack_58,
                uVar10 = uStack_60, (uVar11 & 1) != 0) {
            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            Dino_BusSand_App_Meta_Profile__Add_2272578
                      (uVar10 & 0xffffffff,uVar13,*(undefined8 *)puVar7,0);
            if (lVar8 == 0) {
LAB_02394a48:
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            lVar9 = *(long *)(lVar8 + 0x10);
            lVar14 = *(long *)puVar5;
            *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
            if (lVar9 == 0) goto LAB_02394a48;
            uVar3 = *(uint *)(lVar8 + 0x18);
            if (uVar3 < *(uint *)(lVar9 + 0x18)) {
              lVar9 = lVar9 + (long)(int)uVar3 * 0x10;
              *(uint *)(lVar8 + 0x18) = uVar3 + 1;
              *(ulong *)(lVar9 + 0x20) = uVar10;
              *(undefined8 *)(lVar9 + 0x28) = uVar13;
            }
            else {
              System_Collections_Generic_List_KeyValuePair_int__long____AddWithResize_3965844
                        (lVar8,uVar10,uVar13,
                         *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
            }
          }
          System_Collections_Generic_List_Enumerator_KeyValuePair_int__long____Dispose_35b53d8
                    (&uStack_70,*(undefined8 *)PTR_DAT_04caece0);
          Dino_BusSand_App_Meta_WinStreak__Store_229359c();
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          Dino_BusSand_App_Meta_Profile__Save_226c548(0);
                    /* try { // try from 023948a8 to 0249499b has its CatchHandler @ 023948a8
                       catch() { ... } // from try @ 023948a8 with catch @ 023948a8
                       catch() { ... } // from try @ 023949c4 with catch @ 023948a8
                       catch() { ... } // from try @ 02394a34 with catch @ 023948a8
                       catch() { ... } // from try @ 02394a88 with catch @ 023948a8
                       catch() { ... } // from try @ 02394abc with catch @ 023948a8
                       catch() { ... } // from try @ 02394ae4 with catch @ 023948a8
                       catch() { ... } // from try @ 02394b08 with catch @ 023948a8
                       catch() { ... } // from try @ 02394b34 with catch @ 023948a8 */
          plVar12 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04ca9c20,4);
          puVar4 = PTR_DAT_04cb4088;
          if (plVar12 != (long *)0x0) {
            if ((*(long *)PTR_DAT_04cb4088 != 0) &&
               (lVar9 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cb4088,
                                           *(undefined8 *)(*plVar12 + 0x40)), lVar9 == 0)) {
LAB_02394a54:
              uVar13 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
              FUN_021330e8(uVar13,0);
            }
            if ((int)plVar12[3] != 0) {
              plVar12[4] = *(long *)puVar4;
              thunk_FUN_02134474();
              puVar4 = PTR_DAT_04ca9ac8;
              uStack_90 = CONCAT44(uStack_90._4_4_,*(undefined4 *)(param_1 + 0x14));
              lVar9 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_90);
              if ((lVar9 != 0) &&
                 (lVar14 = thunk_FUN_0216e7a0(lVar9,*(undefined8 *)(*plVar12 + 0x40)), lVar14 == 0))
              goto LAB_02394a54;
              if ((*(uint *)(plVar12 + 3) & 0xfffffffe) != 0) {
                plVar12[5] = lVar9;
                thunk_FUN_02134474(plVar12 + 5,lVar9);
                puVar5 = PTR_DAT_04cb1e68;
                if ((*(long *)PTR_DAT_04cb1e68 != 0) &&
                   (lVar9 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cb1e68,
                                               *(undefined8 *)(*plVar12 + 0x40)), lVar9 == 0))
                goto LAB_02394a54;
                if (2 < *(uint *)(plVar12 + 3)) {
                  plVar12[6] = *(long *)puVar5;
                  thunk_FUN_02134474();
                  uStack_44 = *(undefined4 *)(param_1 + 0x18);
                  lVar9 = FUN_02133100(*(undefined8 *)(puVar4 + 0x48),&uStack_44);
                    /* try { // try from 0239499c to 024949a3 has its CatchHandler @ 02394ae8 */
                    /* try { // try from 023949b0 to 024949c3 has its CatchHandler @ 02394a98 */
                  if ((lVar9 != 0) &&
                     (lVar14 = thunk_FUN_0216e7a0(lVar9,*(undefined8 *)(*plVar12 + 0x40)),
                     lVar14 == 0)) goto LAB_02394a54;
                  if ((*(uint *)(plVar12 + 3) & 0xfffffffc) != 0) {
                    /* try { // try from 023949c4 to 02494a0b has its CatchHandler @ 023948a8 */
                    plVar12[7] = lVar9;
                    thunk_FUN_02134474(plVar12 + 7,lVar9);
                    if (*(int *)(*(long *)PTR_DAT_04cac5c0 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                    }
                    Dino_BusSand_App_Analytics__Log_216d0c8
                              (*(undefined8 *)PTR_DAT_04cb54b0,plVar12,0);
                    uVar2 = *(undefined4 *)(param_1 + 0x10);
                    /* try { // try from 02394a0c to 02494a13 has its CatchHandler @ 02394a9c */
                    if (*(int *)(*(long *)PTR_DAT_04cac498 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                    }
                    /* try { // try from 02394a20 to 02494a33 has its CatchHandler @ 02394a90 */
                    Dino_BusSand_App_Meta_GameTracking__TowerBusClaim_221a40c(uVar2,0);
                    return lVar8;
                  }
                }
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_0213322c();
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

