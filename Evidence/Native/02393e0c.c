/* IL2CPP: Dino.BusSand.App.Meta.WinStreak$$OnLose
void Dino_BusSand_App_Meta_WinStreak__OnLose (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.WinStreak$$OnLose
   void Dino_BusSand_App_Meta_WinStreak__OnLose (const MethodInfo* method); */

void Dino_BusSand_App_Meta_WinStreak__OnLose_2293e0c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  long lStack_50;
  uint uStack_38;
  undefined4 uStack_34;
  
  if ((bRam0000000004f9c1f3 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac5c0);
    FUN_02132f7c(PTR_DAT_04caa200);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cb47b0);
    FUN_02132f7c(PTR_DAT_04cb5498);
    FUN_02132f7c(PTR_DAT_04cb54a0);
    bRam0000000004f9c1f3 = 1;
  }
  lVar7 = Dino_BusSand_App_Meta_WinStreak__get_S_22934d0();
  if (lVar7 != 0) {
    *(undefined1 *)(lVar7 + 0x34) = 0;
    iVar4 = Dino_BusSand_App_Meta_WinStreak__get_Current_2293690();
    puVar1 = PTR_DAT_04cac668;
    if (iVar4 != 3) {
      if ((bRam0000000004f9c1ec & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cb5478);
        FUN_02132f7c(PTR_DAT_04cac668);
        FUN_02132f7c(PTR_DAT_04cb5470);
        bRam0000000004f9c1ec = 1;
      }
      puVar3 = PTR_DAT_04cb5478;
      puVar2 = PTR_DAT_04cb5470;
      uVar11 = Dino_BusSand_App_Meta_WinStreak__get_S_22934d0();
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar1);
      }
      puVar1 = PTR_DAT_04cabaf8;
      uVar6 = *(undefined8 *)puVar2;
      if ((bRam0000000004f9d81f & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cc4908,uVar11,*(undefined8 *)puVar3);
        FUN_02132f7c(PTR_DAT_04cc4910);
        FUN_02132f7c(PTR_DAT_04cc4918);
        FUN_02132f7c(PTR_DAT_04cc4930);
        FUN_02132f7c(PTR_DAT_04cc4920);
        FUN_02132f7c(PTR_DAT_04cb4790);
        FUN_02132f7c(PTR_DAT_04cb4798);
        FUN_02132f7c(PTR_DAT_04cabaf8);
        FUN_02132f7c(PTR_DAT_04cc4938);
        bRam0000000004f9d81f = 1;
      }
      uStack_60 = 0;
      puStack_58 = (undefined8 *)0x0;
      lStack_50 = 0;
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b894 == '\0') {
        FUN_02132f7c(PTR_DAT_04cabaf8);
        cRam0000000004f9b894 = '\x01';
      }
      lVar7 = *(long *)puVar1;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar7 = *(long *)puVar1;
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
      if (lVar7 != 0) {
        if (*(long *)(lVar7 + 0x130) == 0) {
          uVar12 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb4798);
          System_Collections_Generic_List_object____ctor_3a8138c
                    (uVar12,*(undefined8 *)PTR_DAT_04cb4790);
          *(undefined8 *)(lVar7 + 0x130) = uVar12;
          thunk_FUN_02134474(lVar7 + 0x130,uVar12);
        }
        uVar11 = UnityEngine_JsonUtility__ToJson_44323ac(uVar11,0);
        puVar2 = PTR_DAT_04cc4910;
        if (*(long *)(lVar7 + 0x130) == 0) {
LAB_028ef87c:
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        System_Collections_Generic_List_object___GetEnumerator_3a825f0
                  (&uStack_78,*(long *)(lVar7 + 0x130),*(undefined8 *)PTR_DAT_04cc4920);
        lStack_50 = lStack_68;
        puStack_58 = puStack_70;
        uStack_60 = uStack_78;
        uStack_78 = 0;
        puStack_70 = &uStack_60;
        do {
          uVar13 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                             (&uStack_60,*(undefined8 *)puVar2);
          lVar9 = lStack_50;
          if ((uVar13 & 1) == 0) {
            System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                      (&uStack_60,*(undefined8 *)PTR_DAT_04cc4908);
            lVar9 = *(long *)(lVar7 + 0x130);
            lVar7 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cc4938);
            Dino_BusSand_App_Meta_StrPair___ctor_2240614(lVar7,0);
            if (lVar7 != 0) {
              *(undefined8 *)(lVar7 + 0x10) = uVar6;
              thunk_FUN_02134474((undefined8 *)(lVar7 + 0x10),uVar6);
              *(undefined8 *)(lVar7 + 0x18) = uVar11;
              thunk_FUN_02134474((undefined8 *)(lVar7 + 0x18),uVar11);
              if (lVar9 != 0) {
                lVar10 = *(long *)(lVar9 + 0x10);
                lVar14 = *(long *)PTR_DAT_04cc4930;
                *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                if (lVar10 != 0) {
                  uVar5 = *(uint *)(lVar9 + 0x18);
                  if (uVar5 < *(uint *)(lVar10 + 0x18)) {
                    *(uint *)(lVar9 + 0x18) = uVar5 + 1;
                    plVar8 = (long *)(lVar10 + (long)(int)uVar5 * 8 + 0x20);
                    *plVar8 = lVar7;
                    thunk_FUN_02134474(plVar8,lVar7);
                  }
                  else {
                    System_Collections_Generic_List_object___AddWithResize_3a81bf4
                              (lVar9,lVar7,
                               *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
                  }
                  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                  }
                  Dino_BusSand_App_Meta_Profile__MarkDirty_225cc30(0);
                  return;
                }
              }
            }
            goto LAB_028ef87c;
          }
          if (lStack_50 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          uVar13 = System_String__op_Equality_46d1108(*(undefined8 *)(lStack_50 + 0x10),uVar6,0);
        } while ((uVar13 & 1) == 0);
        *(undefined8 *)(lVar9 + 0x18) = uVar11;
        thunk_FUN_02134474((undefined8 *)(lVar9 + 0x18),uVar11);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_App_Meta_Profile__MarkDirty_225cc30(0);
        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                  (&uStack_60,*(undefined8 *)PTR_DAT_04cc4908);
      }
      return;
    }
    lVar7 = Dino_BusSand_App_Meta_WinStreak__get_S_22934d0();
    if (lVar7 != 0) {
      uVar5 = Dino_BusSand_App_Meta_WinStreak__LastCheckpointFloor_22943dc
                        (*(undefined4 *)(lVar7 + 0x18));
      *(undefined4 *)(lVar7 + 0x2c) = 0;
      if (*(int *)(lVar7 + 0x18) <= (int)uVar5) {
LAB_0239405c:
        Dino_BusSand_App_Meta_WinStreak__Store_229359c();
                    /* try { // try from 02394064 to 0249406f has its CatchHandler @ 023940f8 */
        if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
                    /* try { // try from 0239407c to 0249408b has its CatchHandler @ 023940f4 */
        Dino_BusSand_App_Meta_Profile__Save_226c548(0);
        return;
      }
      plVar8 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04ca9c20,4);
      puVar1 = PTR_DAT_04cb47b0;
      if (plVar8 != (long *)0x0) {
                    /* try { // try from 02393ef4 to 02493efb has its CatchHandler @ 02394174 */
        if ((*(long *)PTR_DAT_04cb47b0 != 0) &&
           (lVar9 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cb47b0,*(undefined8 *)(*plVar8 + 0x40)),
           lVar9 == 0)) {
LAB_023940b0:
          uVar11 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
          FUN_021330e8(uVar11,0);
        }
        if ((int)plVar8[3] != 0) {
                    /* try { // try from 02393f08 to 02493f13 has its CatchHandler @ 02394120 */
          plVar8[4] = *(long *)puVar1;
          thunk_FUN_02134474();
          puVar1 = PTR_DAT_04ca9ac8;
          uStack_34 = *(undefined4 *)(lVar7 + 0x18);
          lVar9 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_34);
          if ((lVar9 != 0) &&
             (lVar10 = thunk_FUN_0216e7a0(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
          goto LAB_023940b0;
          if ((*(uint *)(plVar8 + 3) & 0xfffffffe) != 0) {
                    /* try { // try from 02393f64 to 02493f6f has its CatchHandler @ 02394100 */
            plVar8[5] = lVar9;
            thunk_FUN_02134474(plVar8 + 5,lVar9);
            puVar2 = PTR_DAT_04cb54a0;
                    /* try { // try from 02393f70 to 02493fdf has its CatchHandler @ 02393bd0 */
            if ((*(long *)PTR_DAT_04cb54a0 != 0) &&
               (lVar9 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cb54a0,*(undefined8 *)(*plVar8 + 0x40)
                                          ), lVar9 == 0)) goto LAB_023940b0;
            if (2 < *(uint *)(plVar8 + 3)) {
              plVar8[6] = *(long *)puVar2;
              thunk_FUN_02134474();
              uStack_38 = uVar5;
              lVar9 = FUN_02133100(*(undefined8 *)(puVar1 + 0x48),&uStack_38);
              if ((lVar9 != 0) &&
                 (lVar10 = thunk_FUN_0216e7a0(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
              goto LAB_023940b0;
              if ((*(uint *)(plVar8 + 3) & 0xfffffffc) != 0) {
                    /* try { // try from 02393fe0 to 02493fe7 has its CatchHandler @ 02394124 */
                plVar8[7] = lVar9;
                thunk_FUN_02134474(plVar8 + 7,lVar9);
                if (*(int *)(*(long *)PTR_DAT_04cac5c0 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                    /* try { // try from 02394010 to 02494017 has its CatchHandler @ 02394114 */
                Dino_BusSand_App_Analytics__Log_216d0c8(*(undefined8 *)PTR_DAT_04cb5498,plVar8,0);
                iVar4 = *(int *)(lVar7 + 0x30);
                *(uint *)(lVar7 + 0x18) = uVar5;
                if (-1 < iVar4) {
                    /* try { // try from 02394030 to 02494037 has its CatchHandler @ 02394110 */
                    /* try { // try from 0239403c to 02494043 has its CatchHandler @ 0239410c */
                  if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                  }
                  uVar5 = System_Math__Min_4831118(iVar4,uVar5,0);
                    /* try { // try from 02394054 to 0249405b has its CatchHandler @ 023940fc */
                }
                *(uint *)(lVar7 + 0x30) = uVar5;
                goto LAB_0239405c;
              }
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

